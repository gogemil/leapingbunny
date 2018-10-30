<?php
/**
 * @file
 * lb_contact_forms.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function lb_contact_forms_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_cf_body'
  $field_bases['field_cf_body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'field_cf_body',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  return $field_bases;
}
