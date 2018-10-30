<?php
/**
 * @file
 * ao.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ao_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-user-profile-links.
  $menus['menu-user-profile-links'] = array(
    'menu_name' => 'menu-user-profile-links',
    'title' => 'Manage Account',
    'description' => 'This is a set of links for the user profile',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Manage Account');
  t('This is a set of links for the user profile');


  return $menus;
}
