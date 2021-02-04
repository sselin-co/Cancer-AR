resource "random_id" "www_bucket" {
  keepers = {
    name = "${var.name}-s3"
  }

  byte_length = 8
}

resource "aws_s3_bucket" "www_logs" {
  bucket = "${var.name}-www-cloudfront-logs-${random_id.www_bucket.hex}"
  acl    = "private"
  force_destroy = true
}

resource "aws_s3_bucket_public_access_block" "www_logs" {
  bucket = "${aws_s3_bucket.www_logs.id}"
  block_public_acls   = true
  block_public_policy = true
  ignore_public_acls  = true
  restrict_public_buckets = true
}

resource "aws_route53_record" "www" {
  zone_id = "${data.terraform_remote_state.certificate.hosted_zone_id}"
  name    = "${var.www_subdomain}"
  type    = "CNAME"
  ttl     = "300"
  records = ["${aws_cloudfront_distribution.www_distribution.domain_name}"]
}

resource "aws_cloudfront_distribution" "www_distribution" {
  origin {
    domain_name = "${aws_s3_bucket.www.bucket_regional_domain_name}"
    origin_id   = "${var.name}-static-origin"
    origin_path = "${var.www_app_path}"

    s3_origin_config {
      origin_access_identity = "${aws_cloudfront_origin_access_identity.www_origin_access_identity.cloudfront_access_identity_path}"
    }
  }

  web_acl_id = "${aws_waf_web_acl.www_waf_acl.id}"

  default_root_object = "${var.www_default_root_object}"
  enabled             = true
  is_ipv6_enabled     = true
  comment             = "Managed by Terraform"

  logging_config {
    include_cookies = false
    bucket          = "${aws_s3_bucket.www_logs.bucket}.s3.amazonaws.com"
  }

  aliases = ["${var.www_subdomain}.${data.terraform_remote_state.certificate.domain}"]

  default_cache_behavior {
    allowed_methods  = ["GET", "HEAD", "OPTIONS"]
    cached_methods   = ["GET", "HEAD", "OPTIONS"]
    target_origin_id = "${var.name}-static-origin"

    forwarded_values {
      query_string = false

      headers = [
        "Access-Control-Request-Headers",
        "Access-Control-Request-Method",
        "Origin"
      ]

      cookies {
        forward = "none"
      }
    }

    viewer_protocol_policy = "redirect-to-https"
    min_ttl                = 0
    default_ttl            = 3600
    max_ttl                = 86400

    lambda_function_association {
      event_type   = "viewer-request"
      lambda_arn   = "${aws_lambda_function.authorize.qualified_arn}"
      include_body = false
    }

  }

  price_class = "PriceClass_200"

  viewer_certificate {
    acm_certificate_arn = "${data.terraform_remote_state.certificate.s3_certificate_arn}"
    ssl_support_method = "sni-only"
  }

  restrictions {
    geo_restriction {
      restriction_type = "none"
    }
  }
}