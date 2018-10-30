<?php
/**
 * @file
 * lb_declaration_forms.crm_core_profile.inc
 */

/**
 * Implements hook_default_crm_core_profile().
 */
function lb_declaration_forms_default_crm_core_profile() {
  $export = array();

  $crm_core_profile = new stdClass();
  $crm_core_profile->disabled = FALSE; /* Edit this to true to make a default crm_core_profile disabled initially */
  $crm_core_profile->api_version = 1;
  $crm_core_profile->name = 'declaration_of_product';
  $crm_core_profile->label = 'Declaration of Product';
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
      'status' => 0,
      'bundle' => '',
      'fields_container' => array(
        'fields' => array(),
      ),
    ),
    'crm_core_activity' => array(
      'label' => 'CRM Core Activity',
      'status' => 1,
      'bundle' => 'declaration_product_compliance',
      'fields_container' => array(
        'fields' => array(
          'title' => 'title',
          'field_lb_company_name_raw' => 'field_lb_company_name_raw',
          'field_lb_contact_position' => 'field_lb_contact_position',
          'field_lb_printed_name' => 'field_lb_printed_name',
          'field_lb_sig_name' => 'field_lb_sig_name',
          'field_activity_participants' => 0,
          'field_activity_date' => 0,
          'field_activity_notes' => 0,
          'field_lb_sig_date' => 0,
          'field_lb_company' => 0,
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
    'crm_core_activity_declaration_product_compliance_title' => array(
      'field_name' => 'title',
      'field_item' => '',
      'handler' => 'CRMCoreActivityHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'declaration_product_compliance',
      'status' => 1,
      'hidden' => 1,
      'default' => 'Declaration of Product Compliance',
      'weight' => '-45',
    ),
    'crm_core_activity_declaration_product_compliance_field_lb_company_name_raw' => array(
      'field_name' => 'field_lb_company_name_raw',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'declaration_product_compliance',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-46',
    ),
    'crm_core_activity_declaration_product_compliance_field_lb_contact_position' => array(
      'field_name' => 'field_lb_contact_position',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'declaration_product_compliance',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-47',
    ),
    'crm_core_activity_declaration_product_compliance_field_lb_printed_name' => array(
      'field_name' => 'field_lb_printed_name',
      'field_item' => '',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'declaration_product_compliance',
      'status' => 0,
      'weight' => '-43',
    ),
    'crm_core_activity_declaration_product_compliance_field_lb_printed_name_title' => array(
      'field_name' => 'field_lb_printed_name',
      'field_item' => 'title',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'declaration_product_compliance',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-42',
    ),
    'crm_core_activity_declaration_product_compliance_field_lb_printed_name_given' => array(
      'field_name' => 'field_lb_printed_name',
      'field_item' => 'given',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'declaration_product_compliance',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-49',
    ),
    'crm_core_activity_declaration_product_compliance_field_lb_printed_name_middle' => array(
      'field_name' => 'field_lb_printed_name',
      'field_item' => 'middle',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'declaration_product_compliance',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-41',
    ),
    'crm_core_activity_declaration_product_compliance_field_lb_printed_name_family' => array(
      'field_name' => 'field_lb_printed_name',
      'field_item' => 'family',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'declaration_product_compliance',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-48',
    ),
    'crm_core_activity_declaration_product_compliance_field_lb_printed_name_generational' => array(
      'field_name' => 'field_lb_printed_name',
      'field_item' => 'generational',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'declaration_product_compliance',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-40',
    ),
    'crm_core_activity_declaration_product_compliance_field_lb_printed_name_credentials' => array(
      'field_name' => 'field_lb_printed_name',
      'field_item' => 'credentials',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'declaration_product_compliance',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-39',
    ),
    'crm_core_activity_declaration_product_compliance_field_lb_sig_name' => array(
      'field_name' => 'field_lb_sig_name',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'declaration_product_compliance',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-50',
    ),
  );
  $crm_core_profile->block = FALSE;
  $crm_core_profile->block_title = '';
  $crm_core_profile->page = TRUE;
  $crm_core_profile->page_title = 'Declaration of Product Compliance';
  $crm_core_profile->page_path = 'company/product_compliance_form';
  $crm_core_profile->page_redirect = '';
  $crm_core_profile->message = '';
  $crm_core_profile->status = TRUE;
  $crm_core_profile->uid = 1;
  $crm_core_profile->created = 1404797457;
  $crm_core_profile->contact_match = '';
  $crm_core_profile->contact_match_engines = '';
  $crm_core_profile->access_control = 'default';
  $crm_core_profile->access_control_perm = 'none';
  $crm_core_profile->roles = array(
    0 => 'anonymous user',
    1 => 'authenticated user',
    2 => 'administrator',
  );
  $export['declaration_of_product'] = $crm_core_profile;

  $crm_core_profile = new stdClass();
  $crm_core_profile->disabled = FALSE; /* Edit this to true to make a default crm_core_profile disabled initially */
  $crm_core_profile->api_version = 1;
  $crm_core_profile->name = 'lb_declaration_raw_material';
  $crm_core_profile->label = 'Declaration of Raw Material ';
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
      'status' => 0,
      'bundle' => '',
      'fields_container' => array(
        'fields' => array(),
      ),
    ),
    'crm_core_activity' => array(
      'label' => 'CRM Core Activity',
      'status' => 1,
      'bundle' => 'declaration_raw_material',
      'fields_container' => array(
        'fields' => array(
          'title' => 'title',
          'field_lb_company_name_raw' => 'field_lb_company_name_raw',
          'field_lb_contact_position' => 'field_lb_contact_position',
          'field_lb_printed_name' => 'field_lb_printed_name',
          'field_lb_sig_name' => 'field_lb_sig_name',
          'field_activity_participants' => 0,
          'field_activity_date' => 0,
          'field_activity_notes' => 0,
          'field_lb_sig_date' => 0,
          'field_lb_company' => 0,
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
    'crm_core_activity_declaration_raw_material_title' => array(
      'field_name' => 'title',
      'field_item' => '',
      'handler' => 'CRMCoreActivityHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'declaration_raw_material',
      'status' => 1,
      'hidden' => 1,
      'default' => 'Declaration of Raw Material Compliance',
      'weight' => '-45',
    ),
    'crm_core_activity_declaration_raw_material_field_lb_company_name_raw' => array(
      'field_name' => 'field_lb_company_name_raw',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'declaration_raw_material',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-46',
    ),
    'crm_core_activity_declaration_raw_material_field_lb_contact_position' => array(
      'field_name' => 'field_lb_contact_position',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'declaration_raw_material',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-47',
    ),
    'crm_core_activity_declaration_raw_material_field_lb_printed_name' => array(
      'field_name' => 'field_lb_printed_name',
      'field_item' => '',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'declaration_raw_material',
      'status' => 0,
      'weight' => '-45',
    ),
    'crm_core_activity_declaration_raw_material_field_lb_printed_name_title' => array(
      'field_name' => 'field_lb_printed_name',
      'field_item' => 'title',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'declaration_raw_material',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-44',
    ),
    'crm_core_activity_declaration_raw_material_field_lb_printed_name_given' => array(
      'field_name' => 'field_lb_printed_name',
      'field_item' => 'given',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'declaration_raw_material',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-49',
    ),
    'crm_core_activity_declaration_raw_material_field_lb_printed_name_middle' => array(
      'field_name' => 'field_lb_printed_name',
      'field_item' => 'middle',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'declaration_raw_material',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-43',
    ),
    'crm_core_activity_declaration_raw_material_field_lb_printed_name_family' => array(
      'field_name' => 'field_lb_printed_name',
      'field_item' => 'family',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'declaration_raw_material',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-48',
    ),
    'crm_core_activity_declaration_raw_material_field_lb_printed_name_generational' => array(
      'field_name' => 'field_lb_printed_name',
      'field_item' => 'generational',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'declaration_raw_material',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-42',
    ),
    'crm_core_activity_declaration_raw_material_field_lb_printed_name_credentials' => array(
      'field_name' => 'field_lb_printed_name',
      'field_item' => 'credentials',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'declaration_raw_material',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '-41',
    ),
    'crm_core_activity_declaration_raw_material_field_lb_sig_name' => array(
      'field_name' => 'field_lb_sig_name',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'declaration_raw_material',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-50',
    ),
  );
  $crm_core_profile->block = FALSE;
  $crm_core_profile->block_title = '';
  $crm_core_profile->page = TRUE;
  $crm_core_profile->page_title = 'Declaration of Raw Material Compliance';
  $crm_core_profile->page_path = 'company/raw_material_compliance';
  $crm_core_profile->page_redirect = '<front>';
  $crm_core_profile->message = 'Thank you for submitting your declaration form.';
  $crm_core_profile->status = TRUE;
  $crm_core_profile->uid = 1;
  $crm_core_profile->created = 1404796068;
  $crm_core_profile->contact_match = '';
  $crm_core_profile->contact_match_engines = '';
  $crm_core_profile->access_control = 'default';
  $crm_core_profile->access_control_perm = 'none';
  $crm_core_profile->roles = array(
    0 => 'anonymous user',
    1 => 'authenticated user',
    2 => 'administrator',
  );
  $export['lb_declaration_raw_material'] = $crm_core_profile;

  $crm_core_profile = new stdClass();
  $crm_core_profile->disabled = FALSE; /* Edit this to true to make a default crm_core_profile disabled initially */
  $crm_core_profile->api_version = 1;
  $crm_core_profile->name = 'logo_licensing_application';
  $crm_core_profile->label = 'Logo Licensing Application';
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
      'status' => 0,
      'bundle' => '',
      'fields_container' => array(
        'fields' => array(),
      ),
    ),
    'crm_core_activity' => array(
      'label' => 'CRM Core Activity',
      'status' => 1,
      'bundle' => 'logo_licensing_application',
      'fields_container' => array(
        'fields' => array(
          'field_ao_primary_telephone' => 'field_ao_primary_telephone',
          'field_audited_tax_form' => 'field_audited_tax_form',
          'field_brand_company_subsidiary' => 'field_brand_company_subsidiary',
          'field_company_gross_sales' => 'field_company_gross_sales',
          'field_company_label_agreement' => 'field_company_label_agreement',
          'field_conditions_of_use' => 'field_conditions_of_use',
          'field_financial_agreement' => 'field_financial_agreement',
          'field_lb_contact_position' => 'field_lb_contact_position',
          'field_lb_printed_name' => 'field_lb_printed_name',
          'title' => 0,
          'field_activity_participants' => 0,
          'field_activity_date' => 0,
          'field_activity_notes' => 0,
          'field_lb_company' => 0,
          'field_lb_company_name' => 0,
          'field_lb_sig_date' => 0,
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
    'crm_core_activity_logo_licensing_application_field_ao_primary_telephone' => array(
      'field_name' => 'field_ao_primary_telephone',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'logo_licensing_application',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-27',
    ),
    'crm_core_activity_logo_licensing_application_field_audited_tax_form' => array(
      'field_name' => 'field_audited_tax_form',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'logo_licensing_application',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-47',
    ),
    'crm_core_activity_logo_licensing_application_field_brand_company_subsidiary' => array(
      'field_name' => 'field_brand_company_subsidiary',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'logo_licensing_application',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-50',
    ),
    'crm_core_activity_logo_licensing_application_field_company_gross_sales' => array(
      'field_name' => 'field_company_gross_sales',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'logo_licensing_application',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-48',
    ),
    'crm_core_activity_logo_licensing_application_field_company_label_agreement' => array(
      'field_name' => 'field_company_label_agreement',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'logo_licensing_application',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-49',
    ),
    'crm_core_activity_logo_licensing_application_field_conditions_of_use' => array(
      'field_name' => 'field_conditions_of_use',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'logo_licensing_application',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-30',
    ),
    'crm_core_activity_logo_licensing_application_field_financial_agreement' => array(
      'field_name' => 'field_financial_agreement',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'logo_licensing_application',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-46',
    ),
    'crm_core_activity_logo_licensing_application_field_lb_contact_position' => array(
      'field_name' => 'field_lb_contact_position',
      'field_item' => '',
      'handler' => 'DefaultProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'logo_licensing_application',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-26',
    ),
    'crm_core_activity_logo_licensing_application_field_lb_printed_name' => array(
      'field_name' => 'field_lb_printed_name',
      'field_item' => '',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'logo_licensing_application',
      'status' => 0,
      'weight' => '50',
    ),
    'crm_core_activity_logo_licensing_application_field_lb_printed_name_title' => array(
      'field_name' => 'field_lb_printed_name',
      'field_item' => 'title',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'logo_licensing_application',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '50',
    ),
    'crm_core_activity_logo_licensing_application_field_lb_printed_name_given' => array(
      'field_name' => 'field_lb_printed_name',
      'field_item' => 'given',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'logo_licensing_application',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-29',
    ),
    'crm_core_activity_logo_licensing_application_field_lb_printed_name_middle' => array(
      'field_name' => 'field_lb_printed_name',
      'field_item' => 'middle',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'logo_licensing_application',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '50',
    ),
    'crm_core_activity_logo_licensing_application_field_lb_printed_name_family' => array(
      'field_name' => 'field_lb_printed_name',
      'field_item' => 'family',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'logo_licensing_application',
      'status' => 1,
      'hidden' => 0,
      'default' => '',
      'weight' => '-28',
    ),
    'crm_core_activity_logo_licensing_application_field_lb_printed_name_generational' => array(
      'field_name' => 'field_lb_printed_name',
      'field_item' => 'generational',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'logo_licensing_application',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '50',
    ),
    'crm_core_activity_logo_licensing_application_field_lb_printed_name_credentials' => array(
      'field_name' => 'field_lb_printed_name',
      'field_item' => 'credentials',
      'handler' => 'NameProfileFieldHandler',
      'entity_type' => 'crm_core_activity',
      'bundle' => 'logo_licensing_application',
      'status' => 0,
      'hidden' => 0,
      'default' => '',
      'weight' => '50',
    ),
  );
  $crm_core_profile->block = FALSE;
  $crm_core_profile->block_title = '';
  $crm_core_profile->page = TRUE;
  $crm_core_profile->page_title = 'Logo Licensing Application Form';
  $crm_core_profile->page_path = 'company/logo_licensing_application_form';
  $crm_core_profile->page_redirect = 'user';
  $crm_core_profile->message = 'Thank you for submitting your Logo Licensing Application Form. Leaping Bunny will review your submission and contact you shortly.';
  $crm_core_profile->status = TRUE;
  $crm_core_profile->uid = 1;
  $crm_core_profile->created = 1404828799;
  $crm_core_profile->contact_match = '';
  $crm_core_profile->contact_match_engines = '';
  $crm_core_profile->access_control = 'default';
  $crm_core_profile->access_control_perm = 'none';
  $crm_core_profile->roles = array(
    0 => 'anonymous user',
    1 => 'authenticated user',
    2 => 'administrator',
  );
  $export['logo_licensing_application'] = $crm_core_profile;

  return $export;
}
