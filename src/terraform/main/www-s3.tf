resource "random_id" "www" {
  keepers = {
    name = "${var.name}-s3"
  }

  byte_length = 8
}

resource "aws_s3_bucket_public_access_block" "www" {
  bucket = "${aws_s3_bucket.www.id}"
  block_public_acls   = true
  block_public_policy = true
  ignore_public_acls  = true
  restrict_public_buckets = true
}

resource "aws_s3_bucket" "www" {
  bucket = "${var.name}-www-s3-${random_id.www.hex}"
  acl    = "private"
  force_destroy = true

  website {
    index_document = "index.html"
  }

}

resource "aws_cloudfront_origin_access_identity" "www_origin_access_identity" {
  comment = "Cloudfront access to WWW S3 bucket"
}

resource "aws_s3_bucket_policy" "www" {
  bucket = "${aws_s3_bucket.www.id}"
  policy =<<POLICY
{
    "Version": "2008-10-17",
    "Id": "PolicyForCloudFrontPrivateContent",
    "Statement": [
        {
            "Sid": "1",
            "Effect": "Allow",
            "Principal": {
                "AWS": "${aws_cloudfront_origin_access_identity.www_origin_access_identity.iam_arn}"
            },
            "Action": "s3:GetObject",
            "Resource": "${aws_s3_bucket.www.arn}/*"
        }
    ]
}
POLICY
}
