<?php
/**
 * @file
 * Displays a block with some description and link to registration page.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('LB Application print button'),
  'description' => t('Displays a print button for application page.'),
  'category' => t('LB Application'),
  'render callback' => 'lb_registration_print_render',
  'admin info' => 'lb_registration_print_admin_info',
  'defaults' => array(),
  'all contexts' => TRUE,
);

/**
 * Admin info callback.
 */
function lb_registration_print_admin_info($subtype, $conf, $contexts) {
  $block = new stdClass();
  $block->title = t('LB Application print button');
  $block->content = t('Displays a print button for application page.');

  return $block;
}

/**
 * Render callback.
 */
function lb_registration_print_render($subtype, $conf, $panel_args, $context = NULL) {
  $block = new stdClass();
  $block->title = '';
  $block->content = l(t('Print'), 'print/' . $_GET['q'], array('attributes' => array('id' => 'print-link')));

  return $block;
}
