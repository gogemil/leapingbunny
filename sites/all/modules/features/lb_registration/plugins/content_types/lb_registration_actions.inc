<?php
/**
 * @file
 * Displays a block with some description and link to registration page.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('LB Application actions block'),
  'description' => t('Displays a block with actions for application.'),
  'category' => t('LB Application'),
  'render callback' => 'lb_registration_actions_render',
  'admin info' => 'lb_registration_actions_admin_info',
  'defaults' => array(),
  'all contexts' => TRUE,
);

/**
 * Admin info callback.
 */
function lb_registration_actions_admin_info($subtype, $conf, $contexts) {
  $block = new stdClass();
  $block->title = t('LB Application actions block');
  $block->content = t('Displays a block with actions for application.');

  return $block;
}

/**
 * Render callback.
 */
function lb_registration_actions_render($subtype, $conf, $panel_args, $context = NULL) {
  $block = new stdClass();
  $block->title = '';

  $vars = array(
    'label' => t('Application actions'),
    'activity_id' => array_shift($panel_args),
  );
  $block->content = theme('lb_registration_application_actions', $vars);

  return $block;
}
