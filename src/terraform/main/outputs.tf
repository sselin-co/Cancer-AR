output "readusersecret" {
  value = "${aws_iam_access_key.readuser.secret}"
}

output "readusername" {
  value = "${aws_iam_user.readuser.name}"
}

output "readuserkey" {
  value = "${aws_iam_access_key.readuser.id}"
}

output "inputbucket" {
  value = "${aws_s3_bucket.input.arn}"
}

output "processedbucket" {
  value = "${aws_s3_bucket.processed.arn}"
}


output "wwwbucket" {
  value = "${aws_s3_bucket.www.arn}"
}

output "basicauthuser" {
  value = "${var.www_username}"
}

output "basicauthpassword" {
  value = "${random_id.password.hex}"
}