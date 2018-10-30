<?php
/**
 * @file
 * lb_donate.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lb_donate_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "crm_core_profile" && $api == "crm_core_profile") {
    return array("version" => "1");
  }
}
