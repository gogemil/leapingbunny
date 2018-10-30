<?php
/**
 * @file
 * lb_declaration_forms.features.inc
 */

/**
 * Implements hook_default_crm_core_activity_type().
 */
function lb_declaration_forms_default_crm_core_activity_type() {
  $items = array();
  $items['declaration_product_compliance'] = entity_import('crm_core_activity_type', '{
    "type" : "declaration_product_compliance",
    "label" : "Declaration of Product Compliance",
    "weight" : 0,
    "activity_string" : "has submitted a declaration of product compliance.",
    "description" : "An activity type to store the Declaration of Product Compliance to be filled out by contract manufacturers.",
    "rdf_mapping" : []
  }');
  $items['declaration_raw_material'] = entity_import('crm_core_activity_type', '{
    "type" : "declaration_raw_material",
    "label" : "Declaration of Raw Material Compliance",
    "weight" : 0,
    "activity_string" : "has submitted a declaration of raw material compliance.",
    "description" : "This activity type captures the declaration of raw material compliance from ingredient suppliers.",
    "rdf_mapping" : []
  }');
  $items['logo_licensing_application'] = entity_import('crm_core_activity_type', '{
    "type" : "logo_licensing_application",
    "label" : "Logo Licensing Application",
    "weight" : 0,
    "activity_string" : "has submitted a logo licensing form",
    "description" : "An activity type to store an application for a company to become a licensed logo user.",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function lb_declaration_forms_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "crm_core_profile" && $api == "crm_core_profile") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function lb_declaration_forms_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
