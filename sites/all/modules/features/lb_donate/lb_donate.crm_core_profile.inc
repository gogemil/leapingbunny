<?php
/**
 * @file
 * lb_donate.crm_core_profile.inc
 */

/**
 * Implements hook_default_crm_core_profile().
 */
function lb_donate_default_crm_core_profile() {
  $export = array();

  $crm_core_profile = new stdClass();
  $crm_core_profile->disabled = FALSE; /* Edit this to true to make a default crm_core_profile disabled initially */
  $crm_core_profile->api_version = 1;
  $crm_core_profile->name = 'donate';
  $crm_core_profile->label = 'Donate';
  $crm_core_profile->entities = array(
    'crm_core_petition' => array(
      'label' => 'CRM Core Petition',
      'status' => 0,
      'bundle' => 'crm_core_petition',
      'fields_container' => array(
        'fields' => array(
          'signatures_counter' => 0,
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
          'field_ao_birthday' => 0,
          'field_ao_business_address' => 0,
          'field_ao_email_address' => 0,
          'field_ao_facebook' => 0,
          'field_ao_home_address' => 0,
          'field_ao_primary_telephone' => 0,
          'field_ao_twitter' => 0,
          'field_ao_geofield' => 0,
          'field_lb_contact_position' => 0,
        ),
      ),
      'prepopulate' => 0,
      'prepopulate_type' => '',
    ),
    'crm_core_activity' => array(
      'label' => 'CRM Core Activity',
      'status' => 1,
      'bundle' => 'cmcd_donation',
      'fields_container' => array(
        'fields' => array(
          'title' => 'title',
          'field_cmcd_amount' => 'field_cmcd_amount',
          'field_cmcd_order' => 'field_cmcd_order',
          'field_cmcd_page' => 'field_cmcd_page',
          'field_cmcd_payment_type' => 'field_cmcd_payment_type',
          'field_cmcd_receive_date' => 'field_cmcd_receive_date',
          'field_cmcd_source' => 'field_cmcd_source',
          'field_activity_participants' => 0,
          'field_activity_date' => 0,
          'field_activity_notes' => 0,
        ),
      ),
    ),
    'commerce_product' => array(
      'label' => 'Commerce Profile',
      'status' => 1,
      'bundle' => 'commerce_product',
      'fields_container' => array(
        'fields' => array(
          'commerce_items_amount_single' => 'commerce_items_amount_single',
          'commerce_items_customer_billing' => 'commerce_items_customer_billing',
          'commerce_items_cart' => 0,
          'commerce_items_payment' => 0,
        ),
      ),
      'product_type' => 'donation',
      'order_status' => 'completed',
      'commerce_items_amount_single_settings' => array(
        'amount_config' => '2',
        'label' => 'Amount',
        'preset_amounts' => '10,25,35,50',
      ),
      'commerce_items_payment_settings' => array(
        'payment_processors' => array(
          'all' => 'all',
        ),
        'name_fields' => array(
          'crm_core_contact_individual_contact_name_given' => 'crm_core_contact_individual_contact_name_given',
          'crm_core_contact_individual_contact_name_family' => 'crm_core_contact_individual_contact_name_family',
        ),
        'commerce_billing_address_field' => 'commerce_items_customer_billing',
      ),
    ),
  );
  $crm_core_profile->fields = array(
    'crm_core_contact_individual_contact_name' => array(
      'field_name' => 'contact_name',
      'field_item' => '',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'weight' => '43',
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
      'weight' => '44',
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
      'weight' => '-50',
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
      'weight' => '46',
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
      'weight' => '-49',
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
      'weight' => '48',
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
      'weight' => '49',
    ),
    'crm_core_activity_cmcd_donation_title' => array(
      'field_name' => 'title',
      'field_item' => '',
      'handler' => 'CRMCoreActivityHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 1,
      'hidden' => 1,
      'default' => 'Online donation',
      'weight' => '43',
    ),
    'crm_core_activity_cmcd_donation_field_cmcd_amount' => array(
      'field_name' => 'field_cmcd_amount',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 1,
      'hidden' => 1,
      'default' => '[commerce-order:commerce-order-total:amount_decimal]',
      'weight' => '42',
    ),
    'crm_core_activity_cmcd_donation_field_cmcd_order' => array(
      'field_name' => 'field_cmcd_order',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 1,
      'hidden' => 1,
      'default' => '',
      'weight' => '41',
    ),
    'crm_core_activity_cmcd_donation_field_cmcd_page' => array(
      'field_name' => 'field_cmcd_page',
      'field_item' => '',
      'handler' => 'EntityReferenceProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 1,
      'hidden' => 1,
      'default' => array(
        0 => array(
          'target_id' => '',
        ),
      ),
      'weight' => '40',
    ),
    'crm_core_activity_cmcd_donation_field_cmcd_payment_type' => array(
      'field_name' => 'field_cmcd_payment_type',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 1,
      'hidden' => 1,
      'default' => 'Other',
      'weight' => '39',
    ),
    'crm_core_activity_cmcd_donation_field_cmcd_receive_date' => array(
      'field_name' => 'field_cmcd_receive_date',
      'field_item' => '',
      'handler' => 'DateTimeProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 1,
      'hidden' => 1,
      'default' => '',
      'weight' => '38',
    ),
    'crm_core_activity_cmcd_donation_field_cmcd_source' => array(
      'field_name' => 'field_cmcd_source',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'cmcd_donation',
      'status' => 1,
      'hidden' => 1,
      'default' => 'Online Donation',
      'weight' => '43',
    ),
    'commerce_product_commerce_product_commerce_items_amount_single' => array(
      'field_name' => 'commerce_items_amount_single',
      'field_item' => '',
      'handler' => 'CommerceProfileHandler',
      'entity_type' => 'commerce_product',
      'bundle' => 'commerce_product',
      'status' => 1,
      'weight' => '-47',
    ),
    'commerce_product_commerce_product_commerce_items_customer_billing' => array(
      'field_name' => 'commerce_items_customer_billing',
      'field_item' => '',
      'handler' => 'CommerceProfileHandler',
      'entity_type' => 'commerce_product',
      'bundle' => 'commerce_product',
      'status' => 1,
      'weight' => '-48',
    ),
  );
  $crm_core_profile->block = FALSE;
  $crm_core_profile->block_title = '';
  $crm_core_profile->page = FALSE;
  $crm_core_profile->page_title = '';
  $crm_core_profile->page_path = '';
  $crm_core_profile->page_redirect = 'thank-you';
  $crm_core_profile->message = '';
  $crm_core_profile->status = TRUE;
  $crm_core_profile->uid = 1;
  $crm_core_profile->created = 1397675075;
  $crm_core_profile->contact_match = 'default';
  $crm_core_profile->contact_match_engines = array();
  $crm_core_profile->access_control = 'default';
  $crm_core_profile->access_control_perm = 'none';
  $crm_core_profile->roles = array();
  $export['donate'] = $crm_core_profile;

  return $export;
}
