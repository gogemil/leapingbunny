<?php
/**
 * @file
 * lb_request_guide.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function lb_request_guide_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_request-printed-guide:node/2
  $menu_links['main-menu_request-printed-guide:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Request printed guide',
    'options' => array(
      'identifier' => 'main-menu_request-printed-guide:node/2',
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_shopping-guide:guide/companies',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Request printed guide');


  return $menu_links;
}
