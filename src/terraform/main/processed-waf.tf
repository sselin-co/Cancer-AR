resource "random_string" "processed_auth" {
  keepers = {
    name = "${var.name}-processed-auth"
  }

  length = 16
  special = false
}

resource "aws_waf_rule" "processed_authorization" {
  depends_on  = ["aws_waf_byte_match_set.processed_authorization"]
  name        = "${var.name}-authorization-header"
  metric_name = "${var.name}authorizationheader"

  predicates {
    data_id = "${aws_waf_byte_match_set.processed_authorization.id}"
    negated = false
    type    = "ByteMatch"
  }
}

resource "aws_waf_rule" "processed_originmethod" {
  depends_on  = ["aws_waf_byte_match_set.processed_originmethod"]
  name        = "${var.name}-processed-origin-method"
  metric_name = "${var.name}processedoriginmethod"

  predicates {
    data_id = "${aws_waf_byte_match_set.processed_originmethod.id}"
    negated = false
    type    = "ByteMatch"
  }
}

resource "aws_waf_byte_match_set" "processed_authorization" {
  name        = "${var.name}-auth-condition"

  byte_match_tuples {
    text_transformation   = "NONE"
    target_string         = "${random_string.processed_auth.result}"
    positional_constraint = "EXACTLY"

    field_to_match {
      type = "HEADER"
      data = "api-key"
    }
  }
}

resource "aws_waf_byte_match_set" "processed_originmethod" {
  name        = "${var.name}-processed-origin-method"

  byte_match_tuples {
    text_transformation   = "LOWERCASE"
    target_string         = "options"
    positional_constraint = "EXACTLY"

    field_to_match {
      type = "METHOD"
    }
  }
}

resource "aws_waf_web_acl" "processed_waf_acl" {
  depends_on  = [
    "aws_waf_byte_match_set.processed_authorization",
    "aws_waf_byte_match_set.processed_originmethod",
    "aws_waf_rule.processed_authorization",
    "aws_waf_rule.processed_originmethod"
  ]
  name        = "processed_${var.name}"
  metric_name = "processed${var.name}"

  default_action {
    type = "BLOCK"
  }

  rules {
    action {
      type = "ALLOW"
    }

    priority = 2
    rule_id  = "${aws_waf_rule.processed_authorization.id}"
    type     = "REGULAR"
  }

  rules {
    action {
      type = "ALLOW"
    }

    priority = 1
    rule_id  = "${aws_waf_rule.processed_originmethod.id}"
    type     = "REGULAR"
  }
}