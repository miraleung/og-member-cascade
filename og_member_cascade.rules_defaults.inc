<?php
function og_subgroup_cascade_default_rules_configuration() {
	dpm("RULES CALLED");
	$configs = array();
	$rule = '{ "rules_og_member_cascade_rule" : {
    "LABEL" : "OG member cascade rule 2",
    "PLUGIN" : "reaction rule",
    "REQUIRES" : [ "rules", "og" ],
    "ON" : [ "og_membership_view" ],
    "DO" : [
      { "og_subcribe_user" : {
          "user" : [ "site:current-user" ],
          "group" : [ "site:og-context--node" ]
        }
      }
    ]
  }
}';
	$configs['rules_og_member_cascade_rule'] = rules_import($rule);
	return $configs;
}
	