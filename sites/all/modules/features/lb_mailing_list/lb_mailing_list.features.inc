<?php
/**
 * @file
 * lb_mailing_list.features.inc
 */

/**
 * Implements hook_default_crm_core_activity_type().
 */
function lb_mailing_list_default_crm_core_activity_type() {
  $items = array();
  $items['mailing_list_signup'] = entity_import('crm_core_activity_type', '{
    "type" : "mailing_list_signup",
    "label" : "Mailing list signup",
    "weight" : 0,
    "activity_string" : "subscribed to the mailing list",
    "description" : "",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function lb_mailing_list_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "crm_core_profile" && $api == "crm_core_profile") {
    return array("version" => "1");
  }
}
