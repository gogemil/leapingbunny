<?php
/**
 * @file
 * lb_request_guide.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function lb_request_guide_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'crm_core_activity-shopping_guide_request-field_activity_date'
  $field_instances['crm_core_activity-shopping_guide_request-field_activity_date'] = array(
    'bundle' => 'shopping_guide_request',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'crm_core_activity',
    'field_name' => 'field_activity_date',
    'label' => 'Date',
    'required' => FALSE,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'blank',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'crm_core_activity-shopping_guide_request-field_activity_notes'
  $field_instances['crm_core_activity-shopping_guide_request-field_activity_notes'] = array(
    'bundle' => 'shopping_guide_request',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'crm_core_activity',
    'field_name' => 'field_activity_notes',
    'label' => 'Notes',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'crm_core_activity-shopping_guide_request-field_activity_participants'
  $field_instances['crm_core_activity-shopping_guide_request-field_activity_participants'] = array(
    'bundle' => 'shopping_guide_request',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'crm_core_activity',
    'field_name' => 'field_activity_participants',
    'label' => 'Participants',
    'required' => TRUE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete_tags',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'crm_core_activity-shopping_guide_request-field_lb_please_specify'
  $field_instances['crm_core_activity-shopping_guide_request-field_lb_please_specify'] = array(
    'bundle' => 'shopping_guide_request',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'crm_core_activity',
    'field_name' => 'field_lb_please_specify',
    'label' => 'Please Specify',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'crm_core_activity-shopping_guide_request-field_lb_referrer'
  $field_instances['crm_core_activity-shopping_guide_request-field_lb_referrer'] = array(
    'bundle' => 'shopping_guide_request',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'crm_core_activity',
    'field_name' => 'field_lb_referrer',
    'label' => 'How did you hear about us?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'crm_core_activity-shopping_guide_request-field_mailing_list'
  $field_instances['crm_core_activity-shopping_guide_request-field_mailing_list'] = array(
    'bundle' => 'shopping_guide_request',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Yes, I would like to receive periodic communications from the Leaping Bunny program.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'crm_core_activity',
    'field_name' => 'field_mailing_list',
    'label' => 'Mailing list',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Date');
  t('How did you hear about us?');
  t('Mailing list');
  t('Notes');
  t('Participants');
  t('Please Specify');
  t('Yes, I would like to receive periodic communications from the Leaping Bunny program.');

  return $field_instances;
}
