<?php
/**
 * @file
 * lb_blog.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function lb_blog_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['boxes-lb_blog_about_box'] = array(
    'cache' => -2,
    'custom' => 0,
    'delta' => 'lb_blog_about_box',
    'module' => 'boxes',
    'node_types' => array(),
    'pages' => 'blog
blog/*',
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
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'lbunny',
        'weight' => -48,
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
    'title' => 'About',
    'visibility' => 1,
  );

  $export['lb_blog-lb_accordions'] = array(
    'cache' => 6,
    'custom' => 0,
    'delta' => 'lb_accordions',
    'module' => 'lb_blog',
    'node_types' => array(),
    'pages' => 'blog
blog/*',
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
        'region' => 'help',
        'status' => 1,
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
    'title' => '',
    'visibility' => 1,
  );

  $export['lb_blog-lb_date_navigation'] = array(
    'cache' => 6,
    'custom' => 0,
    'delta' => 'lb_date_navigation',
    'module' => 'lb_blog',
    'node_types' => array(),
    'pages' => 'blog
blog/*',
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
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'lbunny',
        'weight' => -46,
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
    'title' => 'Archive',
    'visibility' => 1,
  );

  $export['tagclouds-1'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 1,
    'module' => 'tagclouds',
    'node_types' => array(),
    'pages' => 'blog
blog/*',
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
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'lbunny',
        'weight' => -47,
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
    'title' => 'Tags',
    'visibility' => 1,
  );

  return $export;
}
