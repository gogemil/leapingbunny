<?php
/**
 * @file
 * lb_data_import.features.crm_core_data_import.inc
 */

/**
 * Implements hook_crm_core_data_import_features_default_settings().
 */
function lb_data_import_crm_core_data_import_features_default_settings() {
  $crm_core_data_import = array();

  $crm_core_data_import['companies'] = array(
    'machine_name' => 'companies',
    'title' => 'Companies',
    'description' => '',
    'source' => 'CsvDataSourceHandler',
    'created' => 1400867848,
    'settings' => array(
      'mapping' => array(
        'CRMCoreContactDataDestinationHandler:company:1' => array(
          'primary' => array(
            'source_field_primary' => 'id',
            'destination_field_primary' => 'primary_field',
          ),
          0 => array(
            'source_field' => 'company_name',
            'destination_field' => 'contact_name',
          ),
          1 => array(
            'source_field' => 'company_name',
            'destination_field' => 'contact_name:family',
          ),
          2 => array(
            'source_field' => 'phone_num',
            'destination_field' => 'field_ao_primary_telephone',
          ),
          3 => array(
            'source_field' => 'fax_num',
            'destination_field' => 'field_lb_fax',
          ),
          4 => array(
            'source_field' => 'tollfree_num',
            'destination_field' => 'field_lb_toll_free_telephone',
          ),
          5 => array(
            'source_field' => 'web_url',
            'destination_field' => 'field_ao_website',
          ),
          6 => array(
            'source_field' => 'parent_company',
            'destination_field' => 'field_lb_parent_company',
          ),
          7 => array(
            'source_field' => 'referred_by',
            'destination_field' => 'field_lb_referred_by',
          ),
        ),
        'CRMCoreContactDataDestinationHandler:individual:1' => array(
          'primary' => array(
            'source_field_primary' => 'id',
            'destination_field_primary' => 'primary_field',
          ),
          0 => array(
            'source_field' => 'first_name',
            'destination_field' => 'contact_name',
          ),
          1 => array(
            'source_field' => 'last_name',
            'destination_field' => 'contact_name:family',
          ),
          2 => array(
            'source_field' => 'email_address',
            'destination_field' => 'field_ao_email_address',
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
          ),
          1 => array(
            'source_field' => 'email_address',
            'destination_field' => 'mail',
          ),
        ),
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
      'settings_controllers' => array(
        0 => 'RelationsImportSettings',
        1 => 'UserContactImportSettings',
        2 => 'ReferencesImportSettings',
      ),
      'user_contact' => array(
        'create_automatically' => 0,
        'fields' => array(
          0 => array(
            'source' => 'user:user:1',
            'destination' => 'crm_core_contact:individual:1',
            'user_type' => 'user:user:1',
            'remove_field' => 'Remove',
          ),
        ),
      ),
      'references' => array(
        'enable' => 0,
      ),
    ),
  );

  return $crm_core_data_import;
}
