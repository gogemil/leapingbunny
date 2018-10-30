<?php
/**
 * @file
 * lb_registration.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function lb_registration_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_for-companies:node/120
  $menu_links['main-menu_for-companies:node/120'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/120',
    'router_path' => 'node/%',
    'link_title' => 'For Companies',
    'options' => array(
      'identifier' => 'main-menu_for-companies:node/120',
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -42,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('For Companies');


  return $menu_links;
}
