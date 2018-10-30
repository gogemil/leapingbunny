<?php
/**
 * @file
 * ao_basic_setup.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ao_basic_setup_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "crm_core_profile" && $api == "crm_core_profile") {
    return array("version" => "1");
  }
}
