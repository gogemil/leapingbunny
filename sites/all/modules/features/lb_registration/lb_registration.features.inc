<?php
/**
 * @file
 * lb_registration.features.inc
 */

/**
 * Implements hook_default_crm_core_activity_type().
 */
function lb_registration_default_crm_core_activity_type() {
  $items = array();
  $items['lb_application'] = entity_import('crm_core_activity_type', '{
    "type" : "lb_application",
    "label" : "Application for Certification",
    "weight" : 0,
    "activity_string" : "applied for certification",
    "description" : "Company representative filled in application request form.",
    "rdf_mapping" : []
  }');
  $items['lb_application_request'] = entity_import('crm_core_activity_type', '{
    "type" : "lb_application_request",
    "label" : "Application request",
    "weight" : 0,
    "activity_string" : "has submitted an application request",
    "description" : "This signifies that an application request has been received",
    "rdf_mapping" : []
  }');
  $items['lb_application_request_approved'] = entity_import('crm_core_activity_type', '{
    "type" : "lb_application_request_approved",
    "label" : "Application request approved",
    "weight" : 0,
    "activity_string" : "has received approval to apply for certification",
    "description" : "This signifies that an application request has been approved",
    "rdf_mapping" : []
  }');
  $items['lb_application_request_denied'] = entity_import('crm_core_activity_type', '{
    "type" : "lb_application_request_denied",
    "label" : "Application request denied",
    "weight" : 0,
    "activity_string" : "has been denied approval to apply for certification",
    "description" : "This signifies that an application request has been denied",
    "rdf_mapping" : []
  }');
  $items['lb_application_request_foreign'] = entity_import('crm_core_activity_type', '{
    "type" : "lb_application_request_foreign",
    "label" : "Application request foreign",
    "weight" : 0,
    "activity_string" : "application request is Foreign",
    "description" : "This signifies that an application request is foreign and can not be processed.",
    "rdf_mapping" : []
  }');
  $items['lb_application_request_needs_inf'] = entity_import('crm_core_activity_type', '{
    "type" : "lb_application_request_needs_inf",
    "label" : "Application request needs more info",
    "weight" : 0,
    "activity_string" : "application request Needs More Info",
    "description" : "This signifies that an application request need more info to be processed.",
    "rdf_mapping" : []
  }');
  $items['lb_brand_listed'] = entity_import('crm_core_activity_type', '{
    "type" : "lb_brand_listed",
    "label" : "Brand Listed",
    "weight" : 0,
    "activity_string" : "has added a brand",
    "description" : "This signifies that someone has listed a brand for a company.",
    "rdf_mapping" : []
  }');
  $items['lb_company_application_approved'] = entity_import('crm_core_activity_type', '{
    "type" : "lb_company_application_approved",
    "label" : "Company Application Approved",
    "weight" : 0,
    "activity_string" : "has been certified as cruelty free",
    "description" : "This signifies that a company has received certification",
    "rdf_mapping" : []
  }');
  $items['lb_company_application_canceled'] = entity_import('crm_core_activity_type', '{
    "type" : "lb_company_application_canceled",
    "label" : "Company Application Removed",
    "weight" : 0,
    "activity_string" : "has been removed",
    "description" : "This signifies that a company is no longer allowed to have certification.",
    "rdf_mapping" : []
  }');
  $items['lb_company_application_closed'] = entity_import('crm_core_activity_type', '{
    "type" : "lb_company_application_closed",
    "label" : "Company Application Closed",
    "weight" : 0,
    "activity_string" : "has been closed",
    "description" : "This signifies that a company has closes and is no longer in business",
    "rdf_mapping" : []
  }');
  $items['lb_company_application_initiated'] = entity_import('crm_core_activity_type', '{
    "type" : "lb_company_application_initiated",
    "label" : "Company Application Initiated",
    "weight" : 0,
    "activity_string" : "has initiated an application",
    "description" : "This signifies that someone has started filling in a company application",
    "rdf_mapping" : []
  }');
  $items['lb_company_application_rejected'] = entity_import('crm_core_activity_type', '{
    "type" : "lb_company_application_rejected",
    "label" : "Company Application Rejected",
    "weight" : 0,
    "activity_string" : "has been rejected for cruelty free certification",
    "description" : "This signifies that a company has not received certification",
    "rdf_mapping" : []
  }');
  $items['lb_company_application_submitted'] = entity_import('crm_core_activity_type', '{
    "type" : "lb_company_application_submitted",
    "label" : "Company Application Submitted",
    "weight" : 0,
    "activity_string" : "has submitted an application for certification",
    "description" : "This signifies that a company has submitted an application for certification",
    "rdf_mapping" : []
  }');
  $items['lb_manufacturer_supplier_confirm'] = entity_import('crm_core_activity_type', '{
    "type" : "lb_manufacturer_supplier_confirm",
    "label" : "Manufacturer \\/ Supplier Confirmation",
    "weight" : 0,
    "activity_string" : "has confirmed cruelty free practices",
    "description" : "This signifies that someone has verified cruelty free practices within a supplier or manufacturer",
    "rdf_mapping" : []
  }');
  $items['lb_manufacturer_supplier_listed'] = entity_import('crm_core_activity_type', '{
    "type" : "lb_manufacturer_supplier_listed",
    "label" : "Manufacturer \\/ Supplier Listed",
    "weight" : 0,
    "activity_string" : "has been added as a supplier \\/ manufacturer.",
    "description" : "This signifies that someone has listed a manufacturer or a supplier",
    "rdf_mapping" : []
  }');
  $items['lb_primary_contact_account_creat'] = entity_import('crm_core_activity_type', '{
    "type" : "lb_primary_contact_account_creat",
    "label" : "Primary Contact Account Created",
    "weight" : 0,
    "activity_string" : "has received a user account",
    "description" : "This signifies that a user account has been created for the primary contact",
    "rdf_mapping" : []
  }');
  $items['lb_recommitment_due'] = entity_import('crm_core_activity_type', '{
    "type" : "lb_recommitment_due",
    "label" : "Recommitment due",
    "weight" : 0,
    "activity_string" : "has a recommitment due",
    "description" : "",
    "rdf_mapping" : []
  }');
  $items['lb_recommitment_submitted'] = entity_import('crm_core_activity_type', '{
    "type" : "lb_recommitment_submitted",
    "label" : "Recommitment submitted",
    "weight" : 0,
    "activity_string" : "has submitted a recommitment application",
    "description" : "",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function lb_registration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "crm_core_profile" && $api == "crm_core_profile") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function lb_registration_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
