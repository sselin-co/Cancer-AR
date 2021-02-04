resource "local_file" "auth_key" {
  content     = "{ \"key\": \"Basic ${base64encode(local.concatenated_header)}\" }"
  filename = "${path.module}/../lambda/auth/remote.auth.json"
}

data "archive_file" "source" {
  depends_on = ["local_file.auth_key"]

  type        = "zip"
  source_dir  = "${path.module}/../lambda/auth"
  output_path = "${path.module}/../lambda/auth.zip"
}

provider "aws" {
  region = "us-east-1"
  alias = "us-east-1"
}

resource "random_id" "password" {
  keepers = {
    name = "${var.name}-http-basic-auth-password"
  }

  byte_length = 16
}

locals  {
  "concatenated_header" = "${var.www_username}:${random_id.password.hex}"
}

resource "aws_iam_role" "iam_for_lambda" {
  name = "${var.name}-iam-auth-lambda"

  assume_role_policy = <<EOF
{
  "Version": "2012-10-17",
  "Statement": [
    {
      "Action": "sts:AssumeRole",
      "Principal": {
        "Service": [
          "lambda.amazonaws.com",
          "edgelambda.amazonaws.com"
        ]
      },
      "Effect": "Allow",
      "Sid": ""
    }
  ]
}
EOF
}

resource "aws_lambda_function" "authorize" {
  provider         = "aws.us-east-1"
  filename         = "${data.archive_file.source.output_path}"
  function_name    = "${var.name}-authorization"
  role             = "${aws_iam_role.iam_for_lambda.arn}"
  handler          = "index.handler"
  source_code_hash = "${data.archive_file.source.output_base64sha256}"
  runtime          = "nodejs8.10"
  publish          = true
}