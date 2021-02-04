resource "random_string" "www_auth" {
  keepers = {
    name = "${var.name}-auth"
  }

  length = 16
  special = false
}

resource "aws_waf_rule" "www_countrywhitelist" {
  depends_on  = ["aws_waf_geo_match_set.www_countryset"]
  name        = "${var.name}-www-country-whitelist"
  metric_name = "${var.name}wwwcountrywhitelist"

  predicates {
    data_id = "${aws_waf_geo_match_set.www_countryset.id}"
    negated = false
    type    = "GeoMatch"
  }
}

resource "aws_waf_geo_match_set" "www_countryset" {
  name = "${var.name}-www-countryset"

  geo_match_constraint {
    type  = "Country"
    value = "CA"
  }
}

resource "aws_waf_web_acl" "www_waf_acl" {
  depends_on  = ["aws_waf_rule.www_countrywhitelist", "aws_waf_geo_match_set.www_countryset"]
  name        = "www_${var.name}"
  metric_name = "www${var.name}"

  default_action {
    type = "BLOCK"
  }

  rules {
    action {
      type = "ALLOW"
    }

    priority = 2
    rule_id  = "${aws_waf_rule.www_countrywhitelist.id}"
    type     = "REGULAR"
  }
}