provider "aws" {
  region = "${var.aws_region}"
}

terraform {
  required_version = ">= 0.11.13"

  backend "s3" {
    bucket = "terraform-s3-state-bgkresearch"
    key    = "main/terraform.tfstate"
    region = "us-west-2"
  }
}

data "terraform_remote_state" "certificate" {
  backend = "s3"
  config {
    bucket = "terraform-s3-state-bgkresearch"
    key    = "certificate-domain/terraform.tfstate"
    region = "us-west-2"
  }
}
