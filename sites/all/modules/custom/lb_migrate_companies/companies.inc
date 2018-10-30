<?php

class LBCompaniesMigration extends Migration {
  public function __construct() {
    parent::__construct();
    $this->description = t('Import companies.');

    // Set source.
    $path = drupal_get_path('module', 'lb_migrate_companies') . '/companies.csv';
    $this->source = new MigrateSourceCSV($path, array(), array('header_rows' => 1));

    // Set map.
    $source_key = array(
      'Company Name' => array(
        'type' => 'varchar',
        'not null' => TRUE,
        'length' => 255,
        'description' => 'Company name',
      ),
    );
    $this->map = new MigrateSQLMap($this->machineName, $source_key, MigrateDestinationCRMCoreContact::getKeySchema());

    // Set destination.
    $this->destination = new MigrateDestinationCRMCoreContact('company');

    // Set field mappings.
    $this->addFieldMapping('contact_name:family', 'Company Name');
    $this->addFieldMapping('field_ao_website', 'Website');
    $this->addFieldMapping('field_ao_business_address')
      ->defaultValue('US');
    $this->addFieldMapping('field_ao_business_address:thoroughfare', 'Address');
    $this->addFieldMapping('field_ao_business_address:locality', 'City');
    $this->addFieldMapping('field_ao_business_address:administrative_area', 'State');
    $this->addFieldMapping('field_ao_business_address:postal_code', 'Zip');
    $this->addFieldMapping('field_ao_primary_telephone', 'Phone');
  }
}
