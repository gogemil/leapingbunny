<?php

/**
 * Implements hook_migrate_api().
 */
function lb_migrate_companies_migrate_api() {
  $api = array(
    'api' => 2,
    'migrations' => array(
      'LBCompanies' => array(
        'class_name' => 'LBCompaniesMigration',
      ),
    ),
  );
  return $api;
}
