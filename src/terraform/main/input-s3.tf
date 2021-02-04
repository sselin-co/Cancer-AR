resource "random_id" "input" {
  keepers = {
    name = "${var.name}-s3"
  }

  byte_length = 8
}

resource "aws_s3_bucket_public_access_block" "input" {
  bucket = "${aws_s3_bucket.input.id}"
  block_public_acls   = true
  block_public_policy = true
  ignore_public_acls  = true
  restrict_public_buckets = true
}

resource "aws_s3_bucket" "input" {
  bucket = "${var.name}-input-s3-${random_id.input.hex}"
  acl    = "private"
}
