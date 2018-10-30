<?php
/**
 * @file
 * ao.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ao_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-user-profile-links_address-info:menutoken/5322e022281c9
  $menu_links['menu-user-profile-links_address-info:menutoken/5322e022281c9'] = array(
    'menu_name' => 'menu-user-profile-links',
    'link_path' => 'menutoken/5322e022281c9',
    'router_path' => 'menutoken/%',
    'link_title' => 'Address Info',
    'options' => array(
      'attributes' => array(),
      'menu_token_link_path' => 'user/[user:uid]/user-profile/address-info',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'identifier' => 'menu-user-profile-links_address-info:menutoken/5322e022281c9',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-user-profile-links_contact-info:user/[user:uid]/user-profile/contact-info
  $menu_links['menu-user-profile-links_contact-info:user/[user:uid]/user-profile/contact-info'] = array(
    'menu_name' => 'menu-user-profile-links',
    'link_path' => 'user/[user:uid]/user-profile/contact-info',
    'router_path' => 'user/%/user-profile/contact-info',
    'link_title' => 'Contact Info',
    'options' => array(
      'attributes' => array(),
      'menu_token_link_path' => 'user/[user:uid]/user-profile/contact-info',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'alter' => TRUE,
      'identifier' => 'menu-user-profile-links_contact-info:user/[user:uid]/user-profile/contact-info',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-user-profile-links_my-account:menutoken/5322d44d62c8b
  $menu_links['menu-user-profile-links_my-account:menutoken/5322d44d62c8b'] = array(
    'menu_name' => 'menu-user-profile-links',
    'link_path' => 'menutoken/5322d44d62c8b',
    'router_path' => 'menutoken/%',
    'link_title' => 'My Account',
    'options' => array(
      'menu_token_link_path' => 'user/[user:uid]/edit',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'menu-user-profile-links_my-account:menutoken/5322d44d62c8b',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-user-profile-links_personal-information:menutoken/5322e0693e31d
  $menu_links['menu-user-profile-links_personal-information:menutoken/5322e0693e31d'] = array(
    'menu_name' => 'menu-user-profile-links',
    'link_path' => 'menutoken/5322e0693e31d',
    'router_path' => 'menutoken/%',
    'link_title' => 'Personal Information',
    'options' => array(
      'menu_token_link_path' => 'user/[user:uid]/user-profile/name-and-birthday',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'menu-user-profile-links_personal-information:menutoken/5322e0693e31d',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Address Info');
  t('Contact Info');
  t('My Account');
  t('Personal Information');


  return $menu_links;
}
