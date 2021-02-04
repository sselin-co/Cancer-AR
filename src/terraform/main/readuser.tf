resource "aws_iam_user" "readuser" {
  name = "ldwebread"
  path = "/${var.name}/"
  tags = {
    tag-key = "tag-value"
  }
}

resource "aws_iam_access_key" "readuser" {
  user = "${aws_iam_user.readuser.name}"
}

resource "aws_iam_user_policy" "readuser_processed" {
  name = "processedread"
  user = "${aws_iam_user.readuser.name}"

  policy = <<EOF
{
  "Version": "2012-10-17",
  "Statement": [
    {
      "Effect": "Allow",
      "Action": ["s3:ListBucket"],
      "Resource": "${aws_s3_bucket.processed.arn}"
    },
    {
      "Effect": "Allow",
      "Action": [
        "s3:GetObject"
      ],
      "Resource": "${aws_s3_bucket.processed.arn}/*"
    }
  ]
}
EOF
}

resource "aws_iam_user_policy" "readuser_input" {
  name = "inputread"
  user = "${aws_iam_user.readuser.name}"

  policy = <<EOF
{
  "Version": "2012-10-17",
  "Statement": [
    {
      "Effect": "Allow",
      "Action": ["s3:ListBucket"],
      "Resource": "${aws_s3_bucket.processed.arn}"
    },
    {
      "Effect": "Allow",
      "Action": [
        "s3:GetObject"
      ],
      "Resource": "${aws_s3_bucket.processed.arn}/*"
    }
  ]
}
EOF
}

resource "aws_iam_user_policy" "readuser_ro" {
  name = "wwwpush"
  user = "${aws_iam_user.readuser.name}"

  policy = <<EOF
{
  "Version": "2012-10-17",
  "Statement": [
    {
      "Effect": "Allow",
      "Action": ["s3:ListBucket"],
      "Resource": "${aws_s3_bucket.www.arn}"
    },
    {
      "Effect": "Allow",
      "Action": [
        "s3:PutObject",
        "s3:GetObject",
        "s3:DeleteObject"
      ],
      "Resource": "${aws_s3_bucket.www.arn}/*"
    }
  ]
}
EOF
}