<?php
/**
 * @file
 * lb_custom_data_import.features.crm_core_data_import.inc
 */

/**
 * Implements hook_crm_core_data_import_features_default_settings().
 */
function lb_custom_data_import_crm_core_data_import_features_default_settings() {
  $crm_core_data_import = array();

  $crm_core_data_import['csv_import'] = array(
    'machine_name' => 'csv_import',
    'title' => 'csv_import',
    'description' => '',
    'source' => 'CsvDataSourceHandler',
    'created' => 1415709259,
    'settings' => array(
      'linked_imports' => array(),
      'mapping' => array(
        'CRMCoreContactDataDestinationHandler:company:1' => array(
          'primary' => array(
            'source_field_primary' => 'id',
            'destination_field_primary' => 'primary_field',
          ),
          0 => array(
            'source_field' => 'company_name',
            'destination_field' => 'contact_name',
            'default_value' => '',
          ),
          1 => array(
            'source_field' => 'company_name',
            'destination_field' => 'contact_name:family',
            'default_value' => '',
          ),
          2 => array(
            'source_field' => 'address',
            'destination_field' => 'field_ao_business_address:thoroughfare',
            'default_value' => '',
          ),
          3 => array(
            'source_field' => 'city',
            'destination_field' => 'field_ao_business_address:locality',
            'default_value' => '',
          ),
          4 => array(
            'source_field' => 'state',
            'destination_field' => 'field_ao_business_address:administrative_area',
            'default_value' => '',
          ),
          5 => array(
            'source_field' => 'zip_code',
            'destination_field' => 'field_ao_business_address:postal_code',
            'default_value' => '',
          ),
          6 => array(
            'source_field' => 'phone_num',
            'destination_field' => 'field_ao_primary_telephone',
            'default_value' => '',
          ),
          7 => array(
            'source_field' => 'fax_num',
            'destination_field' => 'field_lb_fax',
            'default_value' => '',
          ),
          8 => array(
            'source_field' => 'tollfree_num',
            'destination_field' => 'field_lb_toll_free_telephone',
            'default_value' => '',
          ),
          9 => array(
            'source_field' => 'web_url',
            'destination_field' => 'field_ao_website',
            'default_value' => '',
          ),
          10 => array(
            'source_field' => 'parent_company',
            'destination_field' => 'field_lb_parent_company',
            'default_value' => '',
          ),
          11 => array(
            'source_field' => 'referred_by',
            'destination_field' => 'field_lb_referred_by',
            'default_value' => '',
          ),
          12 => array(
            'source_field' => 'compliance_dt',
            'destination_field' => 'field_lb_cutoff_date',
            'default_value' => '',
          ),
        ),
        'CRMCoreContactDataDestinationHandler:individual:1' => array(
          'primary' => array(
            'source_field_primary' => 'contact_id',
            'destination_field_primary' => 'primary_field',
          ),
          0 => array(
            'source_field' => 'first_name',
            'destination_field' => 'contact_name',
            'default_value' => '',
          ),
          1 => array(
            'source_field' => 'last_name',
            'destination_field' => 'contact_name:family',
            'default_value' => '',
          ),
          2 => array(
            'source_field' => 'email_address',
            'destination_field' => 'field_ao_email_address',
            'default_value' => '',
          ),
          3 => array(
            'source_field' => 'title',
            'destination_field' => 'field_lb_contact_position',
            'default_value' => '',
          ),
          4 => array(
            'source_field' => 'phone_num',
            'destination_field' => 'field_ao_primary_telephone',
            'default_value' => '',
          ),
        ),
        'CRMCoreContactDataDestinationHandler:company:2' => array(
          'primary' => array(
            'source_field_primary' => 'supplier_id',
            'destination_field_primary' => 'primary_field',
          ),
          0 => array(
            'source_field' => 'supplier_name',
            'destination_field' => 'contact_name',
            'default_value' => '',
          ),
          1 => array(
            'source_field' => 'supplier_address',
            'destination_field' => 'field_ao_business_address:thoroughfare',
            'default_value' => '',
          ),
          2 => array(
            'source_field' => 'supplier_city',
            'destination_field' => 'field_ao_business_address:locality',
            'default_value' => '',
          ),
          3 => array(
            'source_field' => 'supplier_state',
            'destination_field' => 'field_ao_business_address:administrative_area',
            'default_value' => '',
          ),
          4 => array(
            'source_field' => 'supplier_zipcode',
            'destination_field' => 'field_ao_business_address:postal_code',
            'default_value' => '',
          ),
          5 => array(
            'source_field' => 'supplier_phone_num',
            'destination_field' => 'field_ao_primary_telephone',
            'default_value' => '',
          ),
          6 => array(
            'source_field' => 'supplier_fax_num',
            'destination_field' => 'field_lb_fax',
            'default_value' => '',
          ),
          7 => array(
            'source_field' => 'supplier_name',
            'destination_field' => 'contact_name:family',
            'default_value' => '',
          ),
        ),
        'CRMCoreContactDataDestinationHandler:individual:2' => array(
          'primary' => array(
            'source_field_primary' => 'supplier_contact_id',
            'destination_field_primary' => 'primary_field',
          ),
          0 => array(
            'source_field' => 'supplier_contact',
            'destination_field' => 'contact_name',
            'default_value' => '',
          ),
          1 => array(
            'source_field' => 'supplier_email_address',
            'destination_field' => 'field_ao_email_address',
            'default_value' => '',
          ),
          2 => array(
            'source_field' => 'supplier_position',
            'destination_field' => 'field_lb_contact_position',
            'default_value' => '',
          ),
        ),
        'CRMCoreContactDataDestinationHandler:company:3' => array(
          'primary' => array(
            'source_field_primary' => 'man_id',
            'destination_field_primary' => 'primary_field',
          ),
          0 => array(
            'source_field' => 'man_name',
            'destination_field' => 'contact_name',
            'default_value' => '',
          ),
          1 => array(
            'source_field' => 'man_name',
            'destination_field' => 'contact_name:family',
            'default_value' => '',
          ),
        ),
        'CRMCoreContactDataDestinationHandler:individual:3' => array(
          'primary' => array(
            'source_field_primary' => 'man_contact_id',
            'destination_field_primary' => 'primary_field',
          ),
          0 => array(
            'source_field' => 'man_contact',
            'destination_field' => 'contact_name',
            'default_value' => '',
          ),
          1 => array(
            'source_field' => 'man_position',
            'destination_field' => 'field_lb_contact_position',
            'default_value' => '',
          ),
          2 => array(
            'source_field' => 'man_email_address',
            'destination_field' => 'field_ao_email_address',
            'default_value' => '',
          ),
        ),
        'UserDestinationHandler:user:1' => array(
          'primary' => array(
            'source_field_primary' => 'id',
            'destination_field_primary' => 'primary_field',
          ),
          0 => array(
            'source_field' => 'username',
            'destination_field' => 'name',
            'default_value' => '',
          ),
          1 => array(
            'source_field' => 'email_address',
            'destination_field' => 'mail',
            'default_value' => '',
          ),
        ),
        'CRMCoreActivityDestinationHandler:lb_application:1' => array(
          'primary' => array(
            'source_field_primary' => 'id',
            'destination_field_primary' => 'primary_field',
          ),
          0 => array(
            'source_field' => 'status',
            'destination_field' => 'field_lb_application_status',
            'default_value' => '',
          ),
        ),
        'CRMCoreActivityDestinationHandler:lb_company_application_approved:1' => array(
          'primary' => array(
            'source_field_primary' => 'id',
            'destination_field_primary' => 'primary_field',
          ),
          1 => array(
            'source_field' => 'approval_dt',
            'destination_field' => 'field_activity_date',
            'default_value' => '',
          ),
        ),
      ),
      'references' => array(
        'enable' => 0,
      ),
      'settings_controllers' => array(
        0 => 'ReferencesImportSettings',
        1 => 'RelationsImportSettings',
        2 => 'UserContactImportSettings',
      ),
      'relations' => array(
        'enable' => 1,
        'fields' => array(
          0 => array(
            'source' => 'crm_core_contact:individual:1',
            'destination' => 'crm_core_contact:company:1',
            'relation_type' => 'lb_primary_contact',
          ),
          1 => array(
            'source' => 'crm_core_contact:individual:2',
            'destination' => 'crm_core_contact:company:2',
            'relation_type' => 'lb_primary_contact',
          ),
          2 => array(
            'source' => 'crm_core_contact:individual:3',
            'destination' => 'crm_core_contact:company:3',
            'relation_type' => 'lb_primary_contact',
          ),
          3 => array(
            'source' => 'crm_core_contact:company:2',
            'destination' => 'crm_core_contact:company:1',
            'relation_type' => 'lb_supplier',
          ),
          4 => array(
            'source' => 'crm_core_contact:company:3',
            'destination' => 'crm_core_contact:company:1',
            'relation_type' => 'lb_manufacturer',
          ),
        ),
      ),
      'user_contact' => array(
        'create_automatically' => 0,
      ),
    ),
    'source_settings' => NULL,
  );

  $crm_core_data_import['csv_step1_companies'] = array(
    'machine_name' => 'csv_step1_companies',
    'title' => 'csv_step1_companies',
    'description' => '',
    'source' => 'CsvDataSourceHandler',
    'created' => 1415863838,
    'settings' => array(
      'linked_imports' => array(),
      'mapping' => array(
        'CRMCoreContactDataDestinationHandler:company:1' => array(
          'primary' => array(
            'source_field_primary' => 'id',
            'destination_field_primary' => 'primary_field',
          ),
          0 => array(
            'source_field' => 'company_name',
            'destination_field' => 'contact_name',
            'default_value' => '',
          ),
          1 => array(
            'source_field' => 'company_name',
            'destination_field' => 'contact_name:family',
            'default_value' => '',
          ),
          11 => array(
            'source_field' => 'referred_by',
            'destination_field' => 'field_lb_referred_by',
            'default_value' => '',
          ),
          12 => array(
            'source_field' => 'compliance_dt',
            'destination_field' => 'field_lb_cutoff_date',
            'default_value' => '',
          ),
        ),
        'CRMCoreContactDataDestinationHandler:individual:1' => array(
          'primary' => array(
            'source_field_primary' => 'id',
            'destination_field_primary' => 'primary_field',
          ),
        ),
        'UserDestinationHandler:user:1' => array(
          'primary' => array(
            'source_field_primary' => 'id',
            'destination_field_primary' => 'primary_field',
          ),
          0 => array(
            'source_field' => 'username',
            'destination_field' => 'name',
            'default_value' => '',
          ),
          1 => array(
            'source_field' => 'email_address',
            'destination_field' => 'mail',
            'default_value' => '',
          ),
        ),
        'CRMCoreActivityDestinationHandler:lb_application:1' => array(
          'primary' => array(
            'source_field_primary' => 'id',
            'destination_field_primary' => 'primary_field',
          ),
          0 => array(
            'source_field' => 'status',
            'destination_field' => 'field_lb_application_status',
            'default_value' => '',
          ),
        ),
      ),
      'references' => array(
        'enable' => 1,
        'fields' => array(
          0 => array(
            'source' => 'crm_core_activity:lb_application:1',
            'destination' => 'crm_core_contact:company:1',
            'reference_type' => 'crm_core_activity:lb_application:1:field_lb_company',
          ),
          1 => array(
            'source' => 'crm_core_activity:lb_application:1',
            'destination' => 'crm_core_contact:individual:1',
            'reference_type' => 'crm_core_activity:lb_application:1:field_lb_primary_contact',
          ),
        ),
      ),
      'settings_controllers' => array(
        0 => 'ReferencesImportSettings',
        1 => 'RelationsImportSettings',
        2 => 'UserContactImportSettings',
      ),
      'relations' => array(
        'enable' => 1,
        'fields' => array(
          0 => array(
            'source' => 'crm_core_contact:individual:1',
            'destination' => 'crm_core_contact:company:1',
            'relation_type' => 'lb_primary_contact',
          ),
        ),
      ),
      'user_contact' => array(
        'create_automatically' => 0,
        'fields' => NULL,
      ),
    ),
  );

  $crm_core_data_import['csv_step2_suppliers'] = array(
    'machine_name' => 'csv_step2_suppliers',
    'title' => 'csv_step2_suppliers',
    'description' => '',
    'source' => 'CsvDataSourceHandler',
    'created' => 1415864867,
    'settings' => array(
      'linked_imports' => array(),
      'mapping' => array(
        'CRMCoreContactDataDestinationHandler:company:1' => array(
          'primary' => array(
            'source_field_primary' => 'supplier_id',
            'destination_field_primary' => 'primary_field',
          ),
          0 => array(
            'source_field' => 'supplier_name',
            'destination_field' => 'contact_name',
            'default_value' => '',
          ),
          1 => array(
            'source_field' => 'supplier_company_name',
            'destination_field' => 'contact_name:family',
            'default_value' => '',
          ),
        ),
        'CRMCoreContactDataDestinationHandler:individual:1' => array(
          'primary' => array(
            'source_field_primary' => 'supplier_contact_id',
            'destination_field_primary' => 'primary_field',
          ),
          0 => array(
            'source_field' => 'supplier_contact',
            'destination_field' => 'contact_name',
            'default_value' => '',
          ),
          1 => array(
            'source_field' => 'supplier_title',
            'destination_field' => 'field_lb_contact_position',
            'default_value' => '',
          ),
          2 => array(
            'source_field' => 'supplier_email_address',
            'destination_field' => 'field_ao_email_address',
            'default_value' => '',
          ),
        ),
        'CRMCoreActivityDestinationHandler:declaration_raw_material:1' => array(
          'primary' => array(
            'source_field_primary' => 'supplier_id',
            'destination_field_primary' => 'primary_field',
          ),
          0 => array(
            'source_field' => 'supplier_signature',
            'destination_field' => 'field_lb_sig_name',
            'default_value' => '',
          ),
          1 => array(
            'source_field' => 'supplier_modified_dt',
            'destination_field' => 'field_lb_sig_date',
            'default_value' => '',
          ),
          2 => array(
            'source_field' => 'supplier_position',
            'destination_field' => 'field_lb_contact_position',
            'default_value' => '',
          ),
          3 => array(
            'source_field' => 'supplier_name',
            'destination_field' => 'field_lb_company_name_raw',
            'default_value' => '',
          ),
          4 => array(
            'source_field' => 'supplier_printed_name',
            'destination_field' => 'field_lb_printed_name',
            'default_value' => '',
          ),
        ),
      ),
      'references' => array(
        'enable' => 0,
      ),
      'settings_controllers' => array(
        0 => 'ReferencesImportSettings',
        1 => 'RelationsImportSettings',
      ),
      'relations' => array(
        'enable' => 1,
        'fields' => array(
          0 => array(
            'source' => 'crm_core_contact:individual:1',
            'destination' => 'crm_core_contact:company:1',
            'relation_type' => 'lb_primary_contact',
          ),
        ),
      ),
    ),
  );

  $crm_core_data_import['csv_step3_manufacturers'] = array(
    'machine_name' => 'csv_step3_manufacturers',
    'title' => 'csv_step3_manufacturers',
    'description' => '',
    'source' => 'CsvDataSourceHandler',
    'created' => 1415865296,
    'settings' => array(
      'linked_imports' => array(),
      'mapping' => array(
        'CRMCoreContactDataDestinationHandler:company:1' => array(
          'primary' => array(
            'source_field_primary' => 'man_id',
            'destination_field_primary' => 'primary_field',
          ),
          0 => array(
            'source_field' => 'man_name',
            'destination_field' => 'contact_name',
            'default_value' => '',
          ),
          1 => array(
            'source_field' => 'man_company_name',
            'destination_field' => 'contact_name:family',
            'default_value' => '',
          ),
        ),
        'CRMCoreContactDataDestinationHandler:individual:1' => array(
          'primary' => array(
            'source_field_primary' => 'man_contact_id',
            'destination_field_primary' => 'primary_field',
          ),
          0 => array(
            'source_field' => 'man_contact',
            'destination_field' => 'contact_name',
            'default_value' => '',
          ),
          1 => array(
            'source_field' => 'man_position',
            'destination_field' => 'field_lb_contact_position',
            'default_value' => '',
          ),
          2 => array(
            'source_field' => 'man_email_address',
            'destination_field' => 'field_ao_email_address',
            'default_value' => '',
          ),
        ),
        'CRMCoreActivityDestinationHandler:declaration_product_compliance:1' => array(
          'primary' => array(
            'source_field_primary' => 'man_id',
            'destination_field_primary' => 'primary_field',
          ),
          0 => array(
            'source_field' => 'man_name',
            'destination_field' => 'field_lb_company_name_raw',
            'default_value' => '',
          ),
          1 => array(
            'source_field' => 'man_position',
            'destination_field' => 'field_lb_contact_position',
            'default_value' => '',
          ),
          2 => array(
            'source_field' => 'man_printed_name',
            'destination_field' => 'field_lb_printed_name',
            'default_value' => '',
          ),
          3 => array(
            'source_field' => 'man_modified_dt',
            'destination_field' => 'field_lb_sig_date',
            'default_value' => '',
          ),
          4 => array(
            'source_field' => 'man_signature',
            'destination_field' => 'field_lb_sig_name',
            'default_value' => '',
          ),
        ),
      ),
      'references' => array(
        'enable' => 0,
      ),
      'settings_controllers' => array(
        0 => 'ReferencesImportSettings',
        1 => 'RelationsImportSettings',
      ),
      'relations' => array(
        'enable' => 1,
        'fields' => array(
          0 => array(
            'source' => 'crm_core_contact:individual:1',
            'destination' => 'crm_core_contact:company:1',
            'relation_type' => 'lb_primary_contact',
          ),
        ),
      ),
    ),
  );

  return $crm_core_data_import;
}
