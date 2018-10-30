<?php
/**
 * @file
 * lb_registration.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function lb_registration_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_company|entityform|company_application|form';
  $field_group->group_name = 'group_company';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'company_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'About Your Company',
    'weight' => '5',
    'children' => array(
      0 => 'field_ao_business_address',
      1 => 'field_ao_primary_telephone',
      2 => 'field_ao_website',
      3 => 'field_fax_number',
      4 => 'field_name_company',
      5 => 'field_parent_company',
      6 => 'field_referred_by',
      7 => 'field_toll_free_number',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'About Your Company',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-company field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_company|entityform|company_application|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_individual|entityform|company_application|form';
  $field_group->group_name = 'group_individual';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'company_application';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Your Contact Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_ao_email_address',
      1 => 'field_name_first',
      2 => 'field_name_last',
      3 => 'field_position',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Your Contact Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-individual field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_individual|entityform|company_application|form'] = $field_group;

  return $export;
}
