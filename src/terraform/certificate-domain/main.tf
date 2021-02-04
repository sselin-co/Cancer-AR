# Specify the provider and access details
provider "aws" {
  region = "${var.aws_region}"
}

provider "aws" {
  region = "us-east-1"
  alias = "us-east-1"
}

terraform {
  required_version = ">= 0.11.11"

  backend "s3" {
    bucket = "terraform-s3-state-bgkresearch"
    key    = "certificate-domain/terraform.tfstate"
    region = "us-west-2"
  }
}

resource "aws_acm_certificate" "domain" {
  domain_name       = "*.${var.domain}"
  validation_method = "DNS"
}

resource "aws_acm_certificate" "s3" {
  provider = "aws.us-east-1"
  domain_name       = "*.${var.domain}"
  validation_method = "DNS"
}

locals {
  certificate_validation = "${aws_acm_certificate.domain.domain_validation_options[0]}"
}

resource "aws_route53_record" "cert" {
  zone_id = "${var.hosted_zone_id}"
  name    = "${local.certificate_validation["resource_record_name"]}"
  type    = "${local.certificate_validation["resource_record_type"]}"
  ttl     = "300"
  records = ["${local.certificate_validation["resource_record_value"]}"]
}