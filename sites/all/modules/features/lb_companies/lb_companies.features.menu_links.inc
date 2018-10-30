<?php
/**
 * @file
 * lb_companies.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function lb_companies_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_companies-a-z:guide/companies
  $menu_links['main-menu_companies-a-z:guide/companies'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'guide/companies',
    'router_path' => 'guide/companies',
    'link_title' => 'Companies A-Z',
    'options' => array(
      'identifier' => 'main-menu_companies-a-z:guide/companies',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_shopping-guide:guide/companies',
  );
  // Exported menu link: main-menu_shopping-guide:guide/companies
  $menu_links['main-menu_shopping-guide:guide/companies'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'guide/companies',
    'router_path' => 'guide/companies',
    'link_title' => 'Shopping Guide',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_shopping-guide:guide/companies',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Companies A-Z');
  t('Shopping Guide');


  return $menu_links;
}
