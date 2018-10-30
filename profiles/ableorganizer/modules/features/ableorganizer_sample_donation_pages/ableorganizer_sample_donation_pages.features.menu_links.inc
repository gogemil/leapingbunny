<?php
/**
 * @file
 * ableorganizer_sample_donation_pages.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ableorganizer_sample_donation_pages_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_donate:node/7
  $menu_links['main-menu_donate:node/7'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'Donate',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_donate:node/7',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Donate');


  return $menu_links;
}
