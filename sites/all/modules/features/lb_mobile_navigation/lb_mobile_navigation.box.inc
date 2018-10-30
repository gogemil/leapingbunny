<?php
/**
 * @file
 * lb_mobile_navigation.box.inc
 */

/**
 * Implements hook_default_box().
 */
function lb_mobile_navigation_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'mobile_nav_box';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Mobile navigation box icons';
  $box->options = array(
    'body' => array(
      'value' => '<p><a class="search-icon" href="/search">Search</a><a class="contact-icon" href="/user">User</a></p>
',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['mobile_nav_box'] = $box;

  return $export;
}
