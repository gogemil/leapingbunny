<?php
/**
 * @file
 * lb_request_guide.features.inc
 */

/**
 * Implements hook_default_crm_core_activity_type().
 */
function lb_request_guide_default_crm_core_activity_type() {
  $items = array();
  $items['shopping_guide_request'] = entity_import('crm_core_activity_type', '{
    "type" : "shopping_guide_request",
    "label" : "Shopping guide request",
    "weight" : 0,
    "activity_string" : "requested a shopping guide",
    "description" : "A request for a printed shopping guide",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function lb_request_guide_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "crm_core_profile" && $api == "crm_core_profile") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
