variable "name" {
  description = "Name of the service."
  default = "lungs"
}

variable "aws_region" {
  description = "The AWS region to create things in."
  default     = "us-west-2"
}

variable "processed_app_path" {
  description = "The path to the app in the bucket.  Include the leading slash.  Do not include the trailing slash."
  default = ""
}

variable "processed_default_root_object" {
  description = "The default root object in the bucket."
  default = "index.html"
}

variable "processed_subdomain" {
  description = "The subdomain for the processed information to be served on."
  default = "data"
}

variable "www_subdomain" {
  description = "The subdomain for www to be served on."
  default = "lungs"
}

variable "www_app_path" {
  description = "The path to the app in the bucket.  Include the leading slash.  Do not include the trailing slash."
  default = ""
}

variable "www_default_root_object" {
  description = "The default root object in the bucket."
  default = "index.html"
}

variable "www_username" {
  description = "Basic auth username for www"
  default = "lungdetector"
}