<?php
/**
 * @file
 * lb_registration.crm_core_profile.inc
 */

/**
 * Implements hook_default_crm_core_profile().
 */
function lb_registration_default_crm_core_profile() {
  $export = array();

  $crm_core_profile = new stdClass();
  $crm_core_profile->disabled = FALSE; /* Edit this to true to make a default crm_core_profile disabled initially */
  $crm_core_profile->api_version = 1;
  $crm_core_profile->name = 'application_form_section_a';
  $crm_core_profile->label = 'Application form: Section A';
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
      'bundle' => 'company',
      'fields_container' => array(
        'fields' => array(
          'field_lb_consumer_email' => 'field_lb_consumer_email',
          'field_lb_date_established' => 'field_lb_date_established',
          'field_lb_legal_status' => 'field_lb_legal_status',
          'field_lb_trading_name' => 'field_lb_trading_name',
          'contact_name' => 0,
          'field_ao_website' => 0,
          'field_ao_business_address' => 0,
          'field_ao_primary_telephone' => 0,
          'group_group' => 0,
          'og_roles_permissions' => 0,
          'field_lb_contracts_manufacturing' => 0,
          'field_lb_cutoff_date' => 0,
          'field_lb_dirty_affiliates' => 0,
          'field_lb_dirty_contractor' => 0,
          'field_lb_dirty_subcontractor' => 0,
          'field_lb_fax' => 0,
          'field_lb_manufactures_other' => 0,
          'field_lb_manufactures_own' => 0,
          'field_lb_parent_company' => 0,
          'field_lb_referred_by' => 0,
          'field_lb_tests_goods' => 0,
          'field_lb_tests_ingredients' => 0,
          'field_lb_toll_free_telephone' => 0,
          'field_lb_declaration' => 0,
          'field_lb_brands' => 0,
          'field_lb_distributors' => 0,
          'field_lb_logo_user' => 0,
          'field_lb_paid_logo_dues' => 0,
          'field_lb_dirty_parent' => 0,
          'field_lb_tests_before_cutoff' => 0,
          'field_lb_contractor_type' => 0,
          'field_lb_current_application' => 0,
        ),
      ),
      'prepopulate' => 1,
      'prepopulate_type' => 'token_contact',
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
    'crm_core_contact_company_field_lb_consumer_email' => array(
      'field_name' => 'field_lb_consumer_email',
      'field_item' => '',
      'handler' => 'emailProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '2',
    ),
    'crm_core_contact_company_field_lb_date_established' => array(
      'field_name' => 'field_lb_date_established',
      'field_item' => '',
      'handler' => 'DateTimeProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '3',
    ),
    'crm_core_contact_company_field_lb_legal_status' => array(
      'field_name' => 'field_lb_legal_status',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '4',
    ),
    'crm_core_contact_company_field_lb_trading_name' => array(
      'field_name' => 'field_lb_trading_name',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '1',
    ),
  );
  $crm_core_profile->block = FALSE;
  $crm_core_profile->block_title = '';
  $crm_core_profile->page = TRUE;
  $crm_core_profile->page_title = 'Section A: Company details';
  $crm_core_profile->page_path = 'company/%crm_core_contact/application_section_a';
  $crm_core_profile->page_redirect = '';
  $crm_core_profile->message = '';
  $crm_core_profile->status = TRUE;
  $crm_core_profile->uid = 1;
  $crm_core_profile->created = 1399542252;
  $crm_core_profile->contact_match = '';
  $crm_core_profile->contact_match_engines = array();
  $crm_core_profile->access_control = 'default';
  $crm_core_profile->access_control_perm = 'none';
  $crm_core_profile->roles = array(
    0 => 'authenticated user',
  );
  $export['application_form_section_a'] = $crm_core_profile;

  $crm_core_profile = new stdClass();
  $crm_core_profile->disabled = FALSE; /* Edit this to true to make a default crm_core_profile disabled initially */
  $crm_core_profile->api_version = 1;
  $crm_core_profile->name = 'application_form_section_b';
  $crm_core_profile->label = 'Application form: Section B';
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
      'bundle' => 'company',
      'fields_container' => array(
        'fields' => array(
          'field_lb_cutoff_date' => 'field_lb_cutoff_date',
          'contact_name' => 0,
          'field_ao_website' => 0,
          'field_image' => 0,
          'field_uses_leaping_bunny_logo' => 0,
          'field_ao_business_address' => 0,
          'field_ao_primary_telephone' => 0,
          'field_leaping_bunny_partner' => 0,
          'field_subsidiary_of_non_complian' => 0,
          'field_company_status' => 0,
          'group_group' => 0,
          'og_roles_permissions' => 0,
          'field_audit_date' => 0,
          'field_lb_trading_name' => 0,
          'field_lb_consumer_email' => 0,
          'field_lb_date_established' => 0,
          'field_lb_legal_status' => 0,
          'field_lb_manufactures_own' => 0,
          'field_lb_manufactures_other' => 0,
          'field_lb_contracts_manufacturing' => 0,
          'field_lb_toll_free_telephone' => 0,
          'field_lb_fax' => 0,
          'field_lb_parent_company' => 0,
          'field_lb_referred_by' => 0,
          'field_lb_tests_goods' => 0,
          'field_lb_tests_ingredients' => 0,
          'field_lb_dirty_affiliates' => 0,
          'field_lb_dirty_contractor' => 0,
          'field_lb_dirty_subcontractor' => 0,
        ),
      ),
      'prepopulate' => 1,
      'prepopulate_type' => 'token_contact',
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
    'crm_core_contact_company_field_lb_cutoff_date' => array(
      'field_name' => 'field_lb_cutoff_date',
      'field_item' => '',
      'handler' => 'DateTimeProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '50',
    ),
  );
  $crm_core_profile->block = FALSE;
  $crm_core_profile->block_title = '';
  $crm_core_profile->page = TRUE;
  $crm_core_profile->page_title = 'Section B: Fixed Cut-off Date';
  $crm_core_profile->page_path = 'company/%crm_core_contact/application_section_b';
  $crm_core_profile->page_redirect = '';
  $crm_core_profile->message = '';
  $crm_core_profile->status = TRUE;
  $crm_core_profile->uid = 1;
  $crm_core_profile->created = 1399555876;
  $crm_core_profile->contact_match = '';
  $crm_core_profile->contact_match_engines = array();
  $crm_core_profile->access_control = 'default';
  $crm_core_profile->access_control_perm = 'none';
  $crm_core_profile->roles = array(
    0 => 'authenticated user',
  );
  $export['application_form_section_b'] = $crm_core_profile;

  $crm_core_profile = new stdClass();
  $crm_core_profile->disabled = FALSE; /* Edit this to true to make a default crm_core_profile disabled initially */
  $crm_core_profile->api_version = 1;
  $crm_core_profile->name = 'application_form_section_c';
  $crm_core_profile->label = 'Application form: Section C';
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
      'bundle' => 'company',
      'fields_container' => array(
        'fields' => array(
          'field_lb_dirty_affiliates' => 'field_lb_dirty_affiliates',
          'field_lb_dirty_contractor' => 'field_lb_dirty_contractor',
          'field_lb_dirty_subcontractor' => 'field_lb_dirty_subcontractor',
          'field_lb_tests_goods' => 'field_lb_tests_goods',
          'field_lb_tests_ingredients' => 'field_lb_tests_ingredients',
          'field_lb_tests_before_cutoff' => 'field_lb_tests_before_cutoff',
          'contact_name' => 0,
          'field_ao_website' => 0,
          'field_ao_business_address' => 0,
          'field_ao_primary_telephone' => 0,
          'group_group' => 0,
          'og_roles_permissions' => 0,
          'field_lb_consumer_email' => 0,
          'field_lb_contracts_manufacturing' => 0,
          'field_lb_cutoff_date' => 0,
          'field_lb_date_established' => 0,
          'field_lb_fax' => 0,
          'field_lb_legal_status' => 0,
          'field_lb_manufactures_other' => 0,
          'field_lb_manufactures_own' => 0,
          'field_lb_parent_company' => 0,
          'field_lb_referred_by' => 0,
          'field_lb_toll_free_telephone' => 0,
          'field_lb_trading_name' => 0,
          'field_lb_declaration' => 0,
          'field_lb_brands' => 0,
          'field_lb_description' => 0,
          'field_lb_logo' => 0,
          'field_lb_distributors' => 0,
          'field_lb_logo_user' => 0,
          'field_lb_paid_logo_dues' => 0,
          'field_lb_dirty_parent' => 0,
        ),
      ),
      'prepopulate' => 1,
      'prepopulate_type' => 'token_contact',
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
    'crm_core_contact_company_field_lb_dirty_affiliates' => array(
      'field_name' => 'field_lb_dirty_affiliates',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-48',
    ),
    'crm_core_contact_company_field_lb_dirty_contractor' => array(
      'field_name' => 'field_lb_dirty_contractor',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-47',
    ),
    'crm_core_contact_company_field_lb_dirty_subcontractor' => array(
      'field_name' => 'field_lb_dirty_subcontractor',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-46',
    ),
    'crm_core_contact_company_field_lb_tests_goods' => array(
      'field_name' => 'field_lb_tests_goods',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-50',
    ),
    'crm_core_contact_company_field_lb_tests_ingredients' => array(
      'field_name' => 'field_lb_tests_ingredients',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-49',
    ),
    'crm_core_contact_company_field_lb_tests_before_cutoff' => array(
      'field_name' => 'field_lb_tests_before_cutoff',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '45',
    ),
  );
  $crm_core_profile->block = FALSE;
  $crm_core_profile->block_title = '';
  $crm_core_profile->page = TRUE;
  $crm_core_profile->page_title = 'Section C: Company policy on animal testing';
  $crm_core_profile->page_path = 'company/%crm_core_contact/application_section_c';
  $crm_core_profile->page_redirect = '';
  $crm_core_profile->message = '';
  $crm_core_profile->status = TRUE;
  $crm_core_profile->uid = 1;
  $crm_core_profile->created = 1399556324;
  $crm_core_profile->contact_match = '';
  $crm_core_profile->contact_match_engines = array();
  $crm_core_profile->access_control = 'default';
  $crm_core_profile->access_control_perm = 'none';
  $crm_core_profile->roles = array(
    0 => 'authenticated user',
  );
  $export['application_form_section_c'] = $crm_core_profile;

  $crm_core_profile = new stdClass();
  $crm_core_profile->disabled = FALSE; /* Edit this to true to make a default crm_core_profile disabled initially */
  $crm_core_profile->api_version = 1;
  $crm_core_profile->name = 'register_company';
  $crm_core_profile->label = 'Register company';
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
      'bundle' => 'company',
      'fields_container' => array(
        'fields' => array(
          'contact_name' => 'contact_name',
          'field_ao_website' => 'field_ao_website',
          'field_ao_business_address' => 'field_ao_business_address',
          'field_ao_primary_telephone' => 'field_ao_primary_telephone',
          'field_lb_fax' => 'field_lb_fax',
          'field_lb_parent_company' => 'field_lb_parent_company',
          'field_lb_referred_by' => 'field_lb_referred_by',
          'field_lb_toll_free_telephone' => 'field_lb_toll_free_telephone',
          'group_group' => 0,
          'og_roles_permissions' => 0,
          'field_lb_consumer_email' => 0,
          'field_lb_contracts_manufacturing' => 0,
          'field_lb_cutoff_date' => 0,
          'field_lb_date_established' => 0,
          'field_lb_dirty_affiliates' => 0,
          'field_lb_dirty_contractor' => 0,
          'field_lb_dirty_subcontractor' => 0,
          'field_lb_legal_status' => 0,
          'field_lb_manufactures_other' => 0,
          'field_lb_manufactures_own' => 0,
          'field_lb_tests_goods' => 0,
          'field_lb_tests_ingredients' => 0,
          'field_lb_trading_name' => 0,
          'field_lb_declaration' => 0,
          'field_lb_brands' => 0,
          'field_lb_description' => 0,
          'field_lb_logo' => 0,
          'field_lb_company_status' => 0,
          'field_lb_distributors' => 0,
        ),
      ),
      'prepopulate' => 0,
      'prepopulate_type' => '',
    ),
    'crm_core_activity' => array(
      'label' => 'CRM Core Activity',
      'status' => 0,
      'bundle' => 'lb_application_request',
      'fields_container' => array(
        'fields' => array(
          'title' => 0,
          'field_activity_participants' => 0,
          'field_activity_date' => 0,
          'field_activity_notes' => 0,
          'field_lb_company' => 0,
          'field_lb_primary_contact' => 0,
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
    'crm_core_contact_company_contact_name' => array(
      'field_name' => 'contact_name',
      'field_item' => '',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 1,
      'weight' => '-50',
    ),
    'crm_core_contact_company_contact_name_title' => array(
      'field_name' => 'contact_name',
      'field_item' => 'title',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-26',
    ),
    'crm_core_contact_company_contact_name_given' => array(
      'field_name' => 'contact_name',
      'field_item' => 'given',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-30',
    ),
    'crm_core_contact_company_contact_name_middle' => array(
      'field_name' => 'contact_name',
      'field_item' => 'middle',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-25',
    ),
    'crm_core_contact_company_contact_name_family' => array(
      'field_name' => 'contact_name',
      'field_item' => 'family',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-27',
    ),
    'crm_core_contact_company_contact_name_generational' => array(
      'field_name' => 'contact_name',
      'field_item' => 'generational',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-24',
    ),
    'crm_core_contact_company_contact_name_credentials' => array(
      'field_name' => 'contact_name',
      'field_item' => 'credentials',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-23',
    ),
    'crm_core_contact_company_field_ao_website' => array(
      'field_name' => 'field_ao_website',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-45',
    ),
    'crm_core_contact_company_field_ao_business_address' => array(
      'field_name' => 'field_ao_business_address',
      'field_item' => '',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 1,
      'weight' => '-49',
    ),
    'crm_core_contact_company_field_ao_business_address_country' => array(
      'field_name' => 'field_ao_business_address',
      'field_item' => 'country',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-37',
    ),
    'crm_core_contact_company_field_ao_business_address_administrative_area' => array(
      'field_name' => 'field_ao_business_address',
      'field_item' => 'administrative_area',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-39',
    ),
    'crm_core_contact_company_field_ao_business_address_sub_administrative_area' => array(
      'field_name' => 'field_ao_business_address',
      'field_item' => 'sub_administrative_area',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-36',
    ),
    'crm_core_contact_company_field_ao_business_address_locality' => array(
      'field_name' => 'field_ao_business_address',
      'field_item' => 'locality',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-40',
    ),
    'crm_core_contact_company_field_ao_business_address_dependent_locality' => array(
      'field_name' => 'field_ao_business_address',
      'field_item' => 'dependent_locality',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-35',
    ),
    'crm_core_contact_company_field_ao_business_address_postal_code' => array(
      'field_name' => 'field_ao_business_address',
      'field_item' => 'postal_code',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-38',
    ),
    'crm_core_contact_company_field_ao_business_address_thoroughfare' => array(
      'field_name' => 'field_ao_business_address',
      'field_item' => 'thoroughfare',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-42',
    ),
    'crm_core_contact_company_field_ao_business_address_premise' => array(
      'field_name' => 'field_ao_business_address',
      'field_item' => 'premise',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-41',
    ),
    'crm_core_contact_company_field_ao_business_address_sub_premise' => array(
      'field_name' => 'field_ao_business_address',
      'field_item' => 'sub_premise',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-34',
    ),
    'crm_core_contact_company_field_ao_business_address_organisation_name' => array(
      'field_name' => 'field_ao_business_address',
      'field_item' => 'organisation_name',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-33',
    ),
    'crm_core_contact_company_field_ao_business_address_name_line' => array(
      'field_name' => 'field_ao_business_address',
      'field_item' => 'name_line',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-32',
    ),
    'crm_core_contact_company_field_ao_business_address_first_name' => array(
      'field_name' => 'field_ao_business_address',
      'field_item' => 'first_name',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-31',
    ),
    'crm_core_contact_company_field_ao_business_address_last_name' => array(
      'field_name' => 'field_ao_business_address',
      'field_item' => 'last_name',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-29',
    ),
    'crm_core_contact_company_field_ao_business_address_data' => array(
      'field_name' => 'field_ao_business_address',
      'field_item' => 'data',
      'handler' => 'addressfieldProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-28',
    ),
    'crm_core_contact_company_field_ao_primary_telephone' => array(
      'field_name' => 'field_ao_primary_telephone',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-48',
    ),
    'crm_core_contact_company_field_lb_fax' => array(
      'field_name' => 'field_lb_fax',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-47',
    ),
    'crm_core_contact_company_field_lb_parent_company' => array(
      'field_name' => 'field_lb_parent_company',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-44',
    ),
    'crm_core_contact_company_field_lb_referred_by' => array(
      'field_name' => 'field_lb_referred_by',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-43',
    ),
    'crm_core_contact_company_field_lb_toll_free_telephone' => array(
      'field_name' => 'field_lb_toll_free_telephone',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_contact',
      'bundle' => 'company',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-46',
    ),
  );
  $crm_core_profile->block = FALSE;
  $crm_core_profile->block_title = '';
  $crm_core_profile->page = FALSE;
  $crm_core_profile->page_title = '';
  $crm_core_profile->page_path = '';
  $crm_core_profile->page_redirect = '';
  $crm_core_profile->message = 'Thank you for registering! Leaping Bunny will review your registration and contact you shortly.';
  $crm_core_profile->status = TRUE;
  $crm_core_profile->uid = 1;
  $crm_core_profile->created = 1398971484;
  $crm_core_profile->contact_match = 'default';
  $crm_core_profile->contact_match_engines = array();
  $crm_core_profile->access_control = 'default';
  $crm_core_profile->access_control_perm = 'none';
  $crm_core_profile->roles = array(
    0 => 'anonymous user',
    1 => 'authenticated user',
    2 => 'administrator',
  );
  $export['register_company'] = $crm_core_profile;

  return $export;
}
