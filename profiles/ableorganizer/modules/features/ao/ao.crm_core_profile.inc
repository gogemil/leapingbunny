<?php
/**
 * @file
 * ao.crm_core_profile.inc
 */

/**
 * Implements hook_default_crm_core_profile().
 */
function ao_default_crm_core_profile() {
  $export = array();

  $crm_core_profile = new stdClass();
  $crm_core_profile->disabled = FALSE; /* Edit this to true to make a default crm_core_profile disabled initially */
  $crm_core_profile->api_version = 1;
  $crm_core_profile->name = 'ao_address';
  $crm_core_profile->label = 'Address';
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
          'field_ao_business_address' => 'field_ao_business_address',
          'field_ao_home_address' => 'field_ao_home_address',
          'contact_name' => 0,
          'field_ao_birthday' => 0,
          'field_ao_email_address' => 0,
          'field_ao_facebook' => 0,
          'field_ao_primary_telephone' => 0,
          'field_ao_twitter' => 0,
          'field_ao_geofield' => 0,
        ),
      ),
      'prepopulate' => 1,
      'prepopulate_type' => 'token_user',
    ),
    'crm_core_activity' => array(
      'label' => 'CRM Core Activity',
      'status' => 0,
      'bundle' => '',
      'fields_container' => array(
        'fields' => array(
          'title' => 0,
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
    'crm_core_contact_individual_field_ao_business_address' => array(
      'field_name' => 'field_ao_business_address',
      'field_item' => '',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'weight' => '35',
    ),
    'crm_core_contact_individual_field_ao_business_address_country' => array(
      'field_name' => 'field_ao_business_address',
      'field_item' => 'country',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '36',
    ),
    'crm_core_contact_individual_field_ao_business_address_administrative_area' => array(
      'field_name' => 'field_ao_business_address',
      'field_item' => 'administrative_area',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '37',
    ),
    'crm_core_contact_individual_field_ao_business_address_sub_administrative_area' => array(
      'field_name' => 'field_ao_business_address',
      'field_item' => 'sub_administrative_area',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '38',
    ),
    'crm_core_contact_individual_field_ao_business_address_locality' => array(
      'field_name' => 'field_ao_business_address',
      'field_item' => 'locality',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '39',
    ),
    'crm_core_contact_individual_field_ao_business_address_dependent_locality' => array(
      'field_name' => 'field_ao_business_address',
      'field_item' => 'dependent_locality',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '40',
    ),
    'crm_core_contact_individual_field_ao_business_address_postal_code' => array(
      'field_name' => 'field_ao_business_address',
      'field_item' => 'postal_code',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '41',
    ),
    'crm_core_contact_individual_field_ao_business_address_thoroughfare' => array(
      'field_name' => 'field_ao_business_address',
      'field_item' => 'thoroughfare',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '42',
    ),
    'crm_core_contact_individual_field_ao_business_address_premise' => array(
      'field_name' => 'field_ao_business_address',
      'field_item' => 'premise',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '43',
    ),
    'crm_core_contact_individual_field_ao_business_address_sub_premise' => array(
      'field_name' => 'field_ao_business_address',
      'field_item' => 'sub_premise',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '44',
    ),
    'crm_core_contact_individual_field_ao_business_address_organisation_name' => array(
      'field_name' => 'field_ao_business_address',
      'field_item' => 'organisation_name',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '45',
    ),
    'crm_core_contact_individual_field_ao_business_address_name_line' => array(
      'field_name' => 'field_ao_business_address',
      'field_item' => 'name_line',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '46',
    ),
    'crm_core_contact_individual_field_ao_business_address_first_name' => array(
      'field_name' => 'field_ao_business_address',
      'field_item' => 'first_name',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '47',
    ),
    'crm_core_contact_individual_field_ao_business_address_last_name' => array(
      'field_name' => 'field_ao_business_address',
      'field_item' => 'last_name',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '48',
    ),
    'crm_core_contact_individual_field_ao_business_address_data' => array(
      'field_name' => 'field_ao_business_address',
      'field_item' => 'data',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '49',
    ),
    'crm_core_contact_individual_field_ao_home_address' => array(
      'field_name' => 'field_ao_home_address',
      'field_item' => '',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'weight' => '18',
    ),
    'crm_core_contact_individual_field_ao_home_address_country' => array(
      'field_name' => 'field_ao_home_address',
      'field_item' => 'country',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '19',
    ),
    'crm_core_contact_individual_field_ao_home_address_administrative_area' => array(
      'field_name' => 'field_ao_home_address',
      'field_item' => 'administrative_area',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '20',
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
      'weight' => '21',
    ),
    'crm_core_contact_individual_field_ao_home_address_locality' => array(
      'field_name' => 'field_ao_home_address',
      'field_item' => 'locality',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '22',
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
      'weight' => '23',
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
      'weight' => '24',
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
      'weight' => '25',
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
      'weight' => '26',
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
      'weight' => '27',
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
      'weight' => '28',
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
      'weight' => '29',
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
      'weight' => '30',
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
      'weight' => '31',
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
      'weight' => '32',
    ),
  );
  $crm_core_profile->block = FALSE;
  $crm_core_profile->block_title = '';
  $crm_core_profile->page = TRUE;
  $crm_core_profile->page_title = 'Contact Info';
  $crm_core_profile->page_path = 'user/%user/user-profile/address-info';
  $crm_core_profile->page_redirect = 'user';
  $crm_core_profile->message = '';
  $crm_core_profile->status = TRUE;
  $crm_core_profile->uid = 1;
  $crm_core_profile->created = 1394791333;
  $crm_core_profile->contact_match = 'default';
  $crm_core_profile->contact_match_engines = array();
  $crm_core_profile->access_control = 'default';
  $crm_core_profile->access_control_perm = 'none';
  $crm_core_profile->roles = array(
    0 => 'authenticated user',
  );
  $export['ao_address'] = $crm_core_profile;

  $crm_core_profile = new stdClass();
  $crm_core_profile->disabled = FALSE; /* Edit this to true to make a default crm_core_profile disabled initially */
  $crm_core_profile->api_version = 1;
  $crm_core_profile->name = 'contact_information';
  $crm_core_profile->label = 'Contact Information';
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
          'field_ao_email_address' => 'field_ao_email_address',
          'field_ao_facebook' => 'field_ao_facebook',
          'field_ao_primary_telephone' => 'field_ao_primary_telephone',
          'field_ao_twitter' => 'field_ao_twitter',
          'contact_name' => 0,
          'field_ao_birthday' => 0,
          'field_ao_business_address' => 0,
          'field_ao_home_address' => 0,
          'field_ao_geofield' => 0,
        ),
      ),
      'prepopulate' => 1,
      'prepopulate_type' => 'token_user',
    ),
    'crm_core_activity' => array(
      'label' => 'CRM Core Activity',
      'status' => 0,
      'bundle' => '',
      'fields_container' => array(
        'fields' => array(
          'title' => 0,
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
    'crm_core_contact_individual_field_ao_email_address' => array(
      'field_name' => 'field_ao_email_address',
      'field_item' => '',
      'handler' => 'emailProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-49',
    ),
    'crm_core_contact_individual_field_ao_facebook' => array(
      'field_name' => 'field_ao_facebook',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-48',
    ),
    'crm_core_contact_individual_field_ao_primary_telephone' => array(
      'field_name' => 'field_ao_primary_telephone',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-50',
    ),
    'crm_core_contact_individual_field_ao_twitter' => array(
      'field_name' => 'field_ao_twitter',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-47',
    ),
  );
  $crm_core_profile->block = FALSE;
  $crm_core_profile->block_title = '';
  $crm_core_profile->page = TRUE;
  $crm_core_profile->page_title = 'Contact Info';
  $crm_core_profile->page_path = 'user/%user/user-profile/contact-info';
  $crm_core_profile->page_redirect = 'user';
  $crm_core_profile->message = '';
  $crm_core_profile->status = TRUE;
  $crm_core_profile->uid = 1;
  $crm_core_profile->created = 1394790959;
  $crm_core_profile->contact_match = 'default';
  $crm_core_profile->contact_match_engines = array();
  $crm_core_profile->access_control = 'selected_user_or_contact_and_admins';
  $crm_core_profile->access_control_perm = 'edit any crm_core_contact entity';
  $crm_core_profile->roles = array(
    0 => 'authenticated user',
  );
  $export['contact_information'] = $crm_core_profile;

  $crm_core_profile = new stdClass();
  $crm_core_profile->disabled = FALSE; /* Edit this to true to make a default crm_core_profile disabled initially */
  $crm_core_profile->api_version = 1;
  $crm_core_profile->name = 'personal_details';
  $crm_core_profile->label = 'Personal Details';
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
          'field_ao_birthday' => 'field_ao_birthday',
          'field_ao_business_address' => 0,
          'field_ao_email_address' => 0,
          'field_ao_facebook' => 0,
          'field_ao_home_address' => 0,
          'field_ao_primary_telephone' => 0,
          'field_ao_twitter' => 0,
          'field_ao_geofield' => 0,
        ),
      ),
      'prepopulate' => 1,
      'prepopulate_type' => 'token_user',
    ),
    'crm_core_activity' => array(
      'label' => 'CRM Core Activity',
      'status' => 0,
      'bundle' => '',
      'fields_container' => array(
        'fields' => array(
          'title' => 0,
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
    'crm_core_contact_individual_contact_name' => array(
      'field_name' => 'contact_name',
      'field_item' => '',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'weight' => '-50',
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
      'weight' => '-48',
    ),
    'crm_core_contact_individual_contact_name_given' => array(
      'field_name' => 'contact_name',
      'field_item' => 'given',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-47',
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
      'weight' => '-46',
    ),
    'crm_core_contact_individual_contact_name_family' => array(
      'field_name' => 'contact_name',
      'field_item' => 'family',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-45',
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
      'weight' => '-44',
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
      'weight' => '-43',
    ),
    'crm_core_contact_individual_field_ao_birthday' => array(
      'field_name' => 'field_ao_birthday',
      'field_item' => '',
      'handler' => 'DateTimeProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'individual',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-49',
    ),
  );
  $crm_core_profile->block = FALSE;
  $crm_core_profile->block_title = '';
  $crm_core_profile->page = TRUE;
  $crm_core_profile->page_title = 'Personal Details';
  $crm_core_profile->page_path = 'user/%user/user-profile/name-and-birthday';
  $crm_core_profile->page_redirect = 'user';
  $crm_core_profile->message = 'Your personal details have been saved.';
  $crm_core_profile->status = TRUE;
  $crm_core_profile->uid = 1;
  $crm_core_profile->created = 1394735649;
  $crm_core_profile->contact_match = 'default';
  $crm_core_profile->contact_match_engines = array();
  $crm_core_profile->access_control = 'selected_user_or_contact_and_admins';
  $crm_core_profile->access_control_perm = 'edit any crm_core_contact entity';
  $crm_core_profile->roles = array(
    0 => 'authenticated user',
  );
  $export['personal_details'] = $crm_core_profile;

  return $export;
}
