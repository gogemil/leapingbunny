<?php
/**
 * @file
 * lb_contact_us.features.inc
 */

/**
 * Implements hook_default_crm_core_activity_type().
 */
function lb_contact_us_default_crm_core_activity_type() {
  $items = array();
  $items['contact_inquiry'] = entity_import('crm_core_activity_type', '{
    "type" : "contact_inquiry",
    "label" : "Contact inquiry",
    "weight" : 0,
    "activity_string" : "contacted us",
    "description" : "",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function lb_contact_us_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "crm_core_profile" && $api == "crm_core_profile") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
