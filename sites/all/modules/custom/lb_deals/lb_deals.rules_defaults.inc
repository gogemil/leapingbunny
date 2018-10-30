<?php
/**
 * @file
 * lb_deals.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function lb_deals_default_rules_configuration() {
  $items = array();
  $items['rules_lb_brand_partnership_promotion_review_state'] = entity_import('rules_config', '{ "rules_lb_brand_partnership_promotion_review_state" : {
      "LABEL" : "LB: Brand\\/Partnership\\/promotion review state",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny" ],
      "REQUIRES" : [ "rules", "workbench_moderation" ],
      "ON" : { "node_insert" : [], "node_update" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : {
                "brand" : "brand",
                "partnership" : "partnership",
                "promotion" : "promotion"
              }
            }
          }
        },
        { "contents_current_state" : { "node" : [ "node" ], "moderation_state" : "draft" } }
      ],
      "DO" : [
        { "workbench_moderation_set_state" : {
            "node" : [ "node" ],
            "moderation_state" : "needs_review",
            "force_transition" : 1
          }
        }
      ]
    }
  }');
  $items['rules_lb_brand_partnership_promotion_was_created_updated'] = entity_import('rules_config', '{ "rules_lb_brand_partnership_promotion_was_created_updated" : {
      "LABEL" : "LB: Brand\\/Partnership\\/promotion was created\\/updated",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny" ],
      "REQUIRES" : [ "rules", "mimemail" ],
      "ON" : { "node_insert" : [], "node_update" : [] },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : {
                "brand" : "brand",
                "partnership" : "partnership",
                "promotion" : "promotion"
              }
            }
          }
        }
      ],
      "DO" : [
        { "mimemail" : {
            "key" : "rules_lb_brand_partnership_promotion_was_created_updated",
            "to" : [ "site:mail" ],
            "subject" : "[[site:name]] Content update",
            "body" : "A user has added or updated a [node:content-type] at Leaping Bunny. You can review these changes here: [site:url]admin\\/workbench\\/needs-review.",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
