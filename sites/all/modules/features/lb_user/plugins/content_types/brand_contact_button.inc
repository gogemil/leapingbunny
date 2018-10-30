<?php
/**
 * @file
 * CTools plugin.
 * Creates a company contact.
 */

// Plugin definition.
$plugin = array(
  'single' => TRUE,
  'title' => t('Company Management: Brand Contact Button'),
  'description' => t('Creates a button for adding a brand to a company.'),
  'category' => t('LB: User profile'),
  'render callback' => 'lb_user_brand_contact_button_render',
  'admin info' => 'lb_user_brand_contact_button_info',
  'defaults' => array(
    'text' => '',
  ),
  'all contexts' => TRUE,
);

/**
 * Administration info.
 */
function lb_user_brand_contact_button_admin_info($subtype, $conf, $contexts) {
  $block = new stdClass();
  $block->title = t('Brand Contact Button');
  $block->content = t('Creates a button for adding a brand to a company.');

  return $block;
}

/**
 * Render callback.
 */
function lb_user_brand_contact_button_render($subtype, $conf, $panel_args, $context = NULL) {
  $company = NULL;
  $block = NULL;

  if (!empty($context['context_user_company_1'])) {
    $company = $context['context_user_company_1']->data;
  }
  if (!empty($context['argument_entity_id:crm_core_contact_1'])) {
    $company = $context['argument_entity_id:crm_core_contact_1']->data;
  }

  if ($company) {
    $content = l(t('Add a Brand'), 'lb/' . $company->contact_id . '/brand/add');

    $block = new stdClass();
    $block->title = '';
    $block->content = '<div class="lb_action_button">' . $content . '</div>';;
  }

  return $block;
}
