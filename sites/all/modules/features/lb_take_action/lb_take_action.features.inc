<?php
/**
 * @file
 * lb_take_action.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lb_take_action_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "crm_core_profile" && $api == "crm_core_profile") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function lb_take_action_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
