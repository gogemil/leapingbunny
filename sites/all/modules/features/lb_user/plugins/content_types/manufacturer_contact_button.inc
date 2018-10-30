<?php
/**
 * @file
 * CTools plugin.
 * Creates a company contact.
 */

// Plugin definition.
$plugin = array(
  'single' => TRUE,
  'title' => t('Company Management: Manufacturer Contact Button'),
  'description' => t('Creates a button for adding a manufacturer contact to a company.'),
  'category' => t('LB: User profile'),
  'render callback' => 'lb_user_manufacturer_contact_button_render',
  'admin info' => 'lb_user_manufacturer_contact_button_info',
  'defaults' => array(
    'text' => '',
  ),
  'all contexts' => TRUE,
);

/**
 * Administration info.
 */
function lb_user_manufacturer_contact_button_admin_info($subtype, $conf, $contexts) {
  $block = new stdClass();
  $block->title = t('Manufacturer Contact Button');
  $block->content = t('Creates a button for adding a manufacturer contact to a company.');
  return $block;
}

/**
 * Render callback.
 */
function lb_user_manufacturer_contact_button_render($subtype, $conf, $panel_args, $context = NULL) {

  if(!empty($context['context_user_company_1'])){
    
    // get the company from the context
    $company = $context['context_user_company_1']->data;
    $content = l('Add a Manufacturer', 'lb/' . $company->contact_id . '/manufacturer/add');
    $content = '<div class="lb_action_button">' . $content . '</div>';
    $block = new stdClass();
    $block->title = '';
    $block->content = $content;
    return $block;    
  }
  
  return FALSE;
}
