variable "domain" {
  description = "The domain for which to issue certificates.  Cert will be generated for *.domain"
}

variable "aws_region" {
  description = "The AWS region to create things in."
  default     = "us-west-2"
}

variable "hosted_zone_id" {
  description = "The ID of the hosted zone to use."
}