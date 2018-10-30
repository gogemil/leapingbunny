<?php
/**
 * @file
 * lb_companies.features.inc
 */

/**
 * Implements hook_default_crm_core_contact_type().
 */
function lb_companies_default_crm_core_contact_type() {
  $items = array();
  $items['company'] = entity_import('crm_core_contact_type', '{
    "type" : "company",
    "label" : null,
    "weight" : 0,
    "primary_fields" : {
      "email" : "",
      "address" : "field_ao_business_address",
      "phone" : "field_ao_primary_telephone"
    },
    "name" : "Company",
    "description" : "",
    "custom" : "0",
    "disabled" : "0",
    "locked" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function lb_companies_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "captcha" && $api == "captcha") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function lb_companies_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
