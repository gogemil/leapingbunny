<?php
/**
 * @file
 * lb_companies.relation_type_default.inc
 */

/**
 * Implements hook_relation_default_relation_types().
 */
function lb_companies_relation_default_relation_types() {
  $export = array();

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'lb_manufacturer';
  $relation_type->label = 'manufactures for';
  $relation_type->reverse_label = 'contracts manufacturing from';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 0;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'crm_core_contact:company',
  );
  $relation_type->target_bundles = array(
    0 => 'crm_core_contact:company',
  );
  $export['lb_manufacturer'] = $relation_type;

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'lb_supplier';
  $relation_type->label = 'supplies';
  $relation_type->reverse_label = 'is supplied by';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 0;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'crm_core_contact:company',
  );
  $relation_type->target_bundles = array(
    0 => 'crm_core_contact:company',
  );
  $export['lb_supplier'] = $relation_type;

  return $export;
}
