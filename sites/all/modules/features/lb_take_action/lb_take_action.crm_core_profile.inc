<?php
/**
 * @file
 * lb_take_action.crm_core_profile.inc
 */

/**
 * Implements hook_default_crm_core_profile().
 */
function lb_take_action_default_crm_core_profile() {
  $export = array();

  $crm_core_profile = new stdClass();
  $crm_core_profile->disabled = FALSE; /* Edit this to true to make a default crm_core_profile disabled initially */
  $crm_core_profile->api_version = 1;
  $crm_core_profile->name = 'pledge_to_go_cruelty_free';
  $crm_core_profile->label = 'Pledge to go cruelty-free';
  $crm_core_profile->entities = array(
    'crm_core_petition' => array(
      'label' => 'CRM Core Petition',
      'status' => 1,
      'bundle' => 'crm_core_petition',
      'fields_container' => array(
        'fields' => array(
          'signatures_counter' => 'signatures_counter',
        ),
      ),
    ),
    'crm_core_contact' => array(
      'label' => 'CRM Core Contact',
      'status' => 1,
      'bundle' => 'individual',
      'fields_container' => array(
        'fields' => array(
          'contact_name' => 'contact_name',
          'field_ao_email_address' => 'field_ao_email_address',
          'field_ao_home_address' => 'field_ao_home_address',
          'field_ao_birthday' => 0,
          'field_ao_business_address' => 0,
          'field_ao_facebook' => 0,
          'field_ao_primary_telephone' => 0,
          'field_ao_twitter' => 0,
          'field_ao_geofield' => 0,
          'field_lb_contact_position' => 0,
        ),
      ),
    ),
    'crm_core_activity' => array(
      'label' => 'CRM Core Activity',
      'status' => 1,
      'bundle' => 'cmcp_petition_signature',
      'fields_container' => array(
        'fields' => array(
          'field_cmcp_pm_content' => 'field_cmcp_pm_content',
          'field_mailing_list' => 'field_mailing_list',
          'field_lb_anonymous_name' => 'field_lb_anonymous_name',
          'title' => 0,
          'field_activity_participants' => 0,
          'field_activity_date' => 0,
          'field_activity_notes' => 0,
          'field_cmcp_petition_page' => 0,
          'field_cmcp_petition_targets' => 0,
          'field_cmcp_public_display' => 0,
          'field_cmcp_received_date' => 0,
          'field_cmcp_source' => 0,
        ),
      ),
    ),
    'commerce_product' => array(
      'label' => 'Commerce Profile',
      'status' => 0,
      'bundle' => 'commerce_product',
      'fields_container' => array(
        'fields' => array(
          'commerce_items_amount_single' => 0,
          'commerce_items_cart' => 0,
          'commerce_items_customer_billing' => 0,
          'commerce_items_payment' => 0,
        ),
      ),
    ),
  );
  $crm_core_profile->fields = array(
    'crm_core_petition_crm_core_petition_signatures_counter' => array(
      'field_name' => 'signatures_counter',
      'field_item' => '',
      'handler' => 'CRMCorePetitionHandler',
      'entity_type' => 'crm_core_petition',
      'bundle' => 'crm_core_petition',
      'status' => 1,
      'weight' => '-50',
    ),
    'crm_core_contact_individual_contact_name' => array(
      'field_name' => 'contact_name',
      'field_item' => '',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'weight' => '50',
    ),
    'crm_core_contact_individual_contact_name_title' => array(
      'field_name' => 'contact_name',
      'field_item' => 'title',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-34',
    ),
    'crm_core_contact_individual_contact_name_given' => array(
      'field_name' => 'contact_name',
      'field_item' => 'given',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-49',
    ),
    'crm_core_contact_individual_contact_name_middle' => array(
      'field_name' => 'contact_name',
      'field_item' => 'middle',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-32',
    ),
    'crm_core_contact_individual_contact_name_family' => array(
      'field_name' => 'contact_name',
      'field_item' => 'family',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-48',
    ),
    'crm_core_contact_individual_contact_name_generational' => array(
      'field_name' => 'contact_name',
      'field_item' => 'generational',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-30',
    ),
    'crm_core_contact_individual_contact_name_credentials' => array(
      'field_name' => 'contact_name',
      'field_item' => 'credentials',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-29',
    ),
    'crm_core_contact_individual_field_ao_email_address' => array(
      'field_name' => 'field_ao_email_address',
      'field_item' => '',
      'handler' => 'emailProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-46',
    ),
    'crm_core_contact_individual_field_ao_home_address' => array(
      'field_name' => 'field_ao_home_address',
      'field_item' => '',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'weight' => '-45',
    ),
    'crm_core_contact_individual_field_ao_home_address_country' => array(
      'field_name' => 'field_ao_home_address',
      'field_item' => 'country',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-45',
    ),
    'crm_core_contact_individual_field_ao_home_address_administrative_area' => array(
      'field_name' => 'field_ao_home_address',
      'field_item' => 'administrative_area',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-44',
    ),
    'crm_core_contact_individual_field_ao_home_address_sub_administrative_area' => array(
      'field_name' => 'field_ao_home_address',
      'field_item' => 'sub_administrative_area',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '50',
    ),
    'crm_core_contact_individual_field_ao_home_address_locality' => array(
      'field_name' => 'field_ao_home_address',
      'field_item' => 'locality',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-43',
    ),
    'crm_core_contact_individual_field_ao_home_address_dependent_locality' => array(
      'field_name' => 'field_ao_home_address',
      'field_item' => 'dependent_locality',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-31',
    ),
    'crm_core_contact_individual_field_ao_home_address_postal_code' => array(
      'field_name' => 'field_ao_home_address',
      'field_item' => 'postal_code',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-31',
    ),
    'crm_core_contact_individual_field_ao_home_address_thoroughfare' => array(
      'field_name' => 'field_ao_home_address',
      'field_item' => 'thoroughfare',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-40',
    ),
    'crm_core_contact_individual_field_ao_home_address_premise' => array(
      'field_name' => 'field_ao_home_address',
      'field_item' => 'premise',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-39',
    ),
    'crm_core_contact_individual_field_ao_home_address_sub_premise' => array(
      'field_name' => 'field_ao_home_address',
      'field_item' => 'sub_premise',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-40',
    ),
    'crm_core_contact_individual_field_ao_home_address_organisation_name' => array(
      'field_name' => 'field_ao_home_address',
      'field_item' => 'organisation_name',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-39',
    ),
    'crm_core_contact_individual_field_ao_home_address_name_line' => array(
      'field_name' => 'field_ao_home_address',
      'field_item' => 'name_line',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-38',
    ),
    'crm_core_contact_individual_field_ao_home_address_first_name' => array(
      'field_name' => 'field_ao_home_address',
      'field_item' => 'first_name',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-37',
    ),
    'crm_core_contact_individual_field_ao_home_address_last_name' => array(
      'field_name' => 'field_ao_home_address',
      'field_item' => 'last_name',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-36',
    ),
    'crm_core_contact_individual_field_ao_home_address_data' => array(
      'field_name' => 'field_ao_home_address',
      'field_item' => 'data',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-35',
    ),
    'crm_core_activity_cmcp_petition_signature_field_cmcp_pm_content' => array(
      'field_name' => 'field_cmcp_pm_content',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcp_petition_signature',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-42',
    ),
    'crm_core_activity_cmcp_petition_signature_field_mailing_list' => array(
      'field_name' => 'field_mailing_list',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcp_petition_signature',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-41',
    ),
    'crm_core_activity_cmcp_petition_signature_field_lb_anonymous_name' => array(
      'field_name' => 'field_lb_anonymous_name',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcp_petition_signature',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-47',
    ),
  );
  $crm_core_profile->block = FALSE;
  $crm_core_profile->block_title = '';
  $crm_core_profile->page = FALSE;
  $crm_core_profile->page_title = '';
  $crm_core_profile->page_path = '';
  $crm_core_profile->page_redirect = '';
  $crm_core_profile->message = '';
  $crm_core_profile->status = TRUE;
  $crm_core_profile->uid = 1;
  $crm_core_profile->created = 1394059520;
  $crm_core_profile->contact_match = '';
  $crm_core_profile->contact_match_engines = '';
  $crm_core_profile->access_control = 'default';
  $crm_core_profile->access_control_perm = 'none';
  $crm_core_profile->roles = '';
  $export['pledge_to_go_cruelty_free'] = $crm_core_profile;

  return $export;
}
