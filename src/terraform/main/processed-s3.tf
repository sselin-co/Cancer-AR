resource "random_id" "processed" {
  keepers = {
    name = "${var.name}-s3"
  }

  byte_length = 8
}

resource "aws_s3_bucket_public_access_block" "processed" {
  bucket = "${aws_s3_bucket.processed.id}"
  block_public_acls   = true
  block_public_policy = true
  ignore_public_acls  = true
  restrict_public_buckets = true
}

resource "aws_s3_bucket" "processed" {
  bucket = "${var.name}-processed-s3-${random_id.processed.hex}"
  acl    = "private"

  website {
    index_document = "index.json"
  }

  cors_rule {
    allowed_methods = ["GET"]
    allowed_origins = ["*"]
    expose_headers  = ["ETag"]
    max_age_seconds = 3000
    allowed_headers = ["*"]
  }
}

resource "aws_cloudfront_origin_access_identity" "processed_origin_access_identity" {
  comment = "Cloudfront access to Processed S3 bucket"
}

