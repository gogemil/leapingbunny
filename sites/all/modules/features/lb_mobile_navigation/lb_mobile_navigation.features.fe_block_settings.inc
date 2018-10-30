<?php
/**
 * @file
 * lb_mobile_navigation.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function lb_mobile_navigation_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu_block-9'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 9,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ablestarter' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ablestarter',
        'weight' => 0,
      ),
      'abletemplate' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'abletemplate',
        'weight' => 0,
      ),
      'ao_contact_management' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ao_contact_management',
        'weight' => 0,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lb_contact_management' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lb_contact_management',
        'weight' => 0,
      ),
      'lbunny' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lbunny',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
