<?php
/**
 * @file
 * lb_declaration_forms.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function lb_declaration_forms_default_rules_configuration() {
  $items = array();
  $items['rules_lb_declaration_has_been_uploaded'] = entity_import('rules_config', '{ "rules_lb_declaration_has_been_uploaded" : {
      "LABEL" : "Declaration has been uploaded",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny" ],
      "REQUIRES" : [ "rules", "lb_declaration_forms", "mimemail" ],
      "ON" : { "file_insert" : [], "file_update" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "file" ],
            "type" : "file",
            "bundle" : { "value" : { "document" : "document" } }
          }
        },
        { "lb_declaration_forms_section_d" : [] },
        { "data_is" : { "data" : [ "file:status" ], "value" : "1" } }
      ],
      "DO" : [
        { "mimemail" : {
            "key" : "declaration_uploaded",
            "to" : "disable@leapingbunny.org",
            "subject" : "New document has been uploaded.",
            "body" : "Hi.\\r\\n[site:current-user] has uploaded new document.\\r\\n\\r\\n[file:download-url]\\r\\n\\r\\n",
            "language" : [ "file:type" ]
          }
        }
      ]
    }
  }');
  return $items;
}
