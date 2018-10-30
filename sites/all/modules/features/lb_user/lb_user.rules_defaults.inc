<?php
/**
 * @file
 * lb_user.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function lb_user_default_rules_configuration() {
  $items = array();
  $items['rules_lb_user_created_promotion_partnership'] = entity_import('rules_config', '{ "rules_lb_user_created_promotion_partnership" : {
      "LABEL" : "LB User Created promotion\\/partnership",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "partnership" : "partnership", "promotion" : "promotion" } }
          }
        },
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "2" : "2" } }
          }
        },
        { "NOT user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "1" : "1", "3" : "3" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "drupal_message" : { "message" : "Thank you for adding a [node:content-type]. Leaping Bunny will review your submission and let you know if there are any questions. Be aware that you will not see your changes until your submission is reviewed." } }
      ]
    }
  }');
  return $items;
}
