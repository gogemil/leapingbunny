<?php
/**
 * @file
 * Displays a block with company edit link for contacts.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('LB Company edit button'),
  'description' => t('Displays an edit button for company contacts.'),
  'category' => t('LB Company'),
  'render callback' => 'lb_user_company_edit_render',
  'admin info' => 'lb_user_company_edit_admin_info',
  'defaults' => array(),
  'all contexts' => TRUE,
);

/**
 * Admin info callback.
 */
function lb_user_company_edit_admin_info($subtype, $conf, $contexts) {
  $block = new stdClass();
  $block->title = t('LB Company edit button');
  $block->content = t('Displays an edit button for company contacts.');

  return $block;
}

/**
 * Render callback.
 */
function lb_user_company_edit_render($subtype, $conf, $panel_args, $context = NULL) {
  $company = $context['context_user_company_1']->data;
  $content = l('Edit Company', 'lb/contact/' . $company->contact_id . '/edit');
  $content = '<div class="lb_action_button">' . $content . '</div>';
  $block = new stdClass();
  $block->title = '';
  $block->content = $content;
  return $block;
  return $block;
}
