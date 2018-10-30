<?php
/**
 * @file
 * lb_take_action.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function lb_take_action_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'crm_core_activity-cmcp_petition_signature-field_lb_anonymous_name'
  $field_instances['crm_core_activity-cmcp_petition_signature-field_lb_anonymous_name'] = array(
    'bundle' => 'cmcp_petition_signature',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'crm_core_activity',
    'field_name' => 'field_lb_anonymous_name',
    'label' => 'Display my name as Anonymous',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 12,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Display my name as Anonymous');

  return $field_instances;
}
