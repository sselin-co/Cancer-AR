output "certificate_arn" {
  value = "${aws_acm_certificate.domain.arn}"
}

output "s3_certificate_arn" {
  value = "${aws_acm_certificate.s3.arn}"
}

output "domain" {
  value ="${var.domain}"
}

output "hosted_zone_id" {
  value="${var.hosted_zone_id}"
}
