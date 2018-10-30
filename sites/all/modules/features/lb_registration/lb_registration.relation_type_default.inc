<?php
/**
 * @file
 * lb_registration.relation_type_default.inc
 */

/**
 * Implements hook_relation_default_relation_types().
 */
function lb_registration_relation_default_relation_types() {
  $export = array();

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'lb_marketing_contact';
  $relation_type->label = 'brand manager for';
  $relation_type->reverse_label = 'has brand manager';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 0;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'crm_core_contact:individual',
  );
  $relation_type->target_bundles = array(
    0 => 'crm_core_contact:company',
  );
  $export['lb_marketing_contact'] = $relation_type;

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'lb_primary_contact';
  $relation_type->label = 'primary contact for';
  $relation_type->reverse_label = 'has primary contact';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 0;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'crm_core_contact:individual',
  );
  $relation_type->target_bundles = array(
    0 => 'crm_core_contact:company',
  );
  $export['lb_primary_contact'] = $relation_type;

  return $export;
}
