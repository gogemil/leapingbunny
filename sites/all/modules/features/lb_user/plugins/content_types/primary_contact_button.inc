<?php
/**
 * @file
 * CTools plugin.
 * Creates a company contact.
 */

// Plugin definition.
$plugin = array(
  'single' => TRUE,
  'title' => t('Company Management: Primary Contact Button'),
  'description' => t('Creates a button for adding / editing the primary contact for a company.'),
  'category' => t('LB: User profile'),
  'render callback' => 'lb_user_primary_contact_button_render',
  'admin info' => 'lb_user_primary_contact_button_info',
  'defaults' => array(
    'text' => '',
  ),
  'all contexts' => TRUE,
);

/**
 * Administration info.
 */
function lb_user_primary_contact_button_admin_info($subtype, $conf, $contexts) {
  $block = new stdClass();
  $block->title = t('Primary Contact Button');
  $block->content = t('Creates a button for adding / editing a primary contact for a company.');
  return $block;
}

/**
 * Render callback.
 */
function lb_user_primary_contact_button_render($subtype, $conf, $panel_args, $context = NULL) {

  if(!empty($context['context_user_company_1'])){
    
    // get the company from the context
    $company = $context['context_user_company_1']->data;
    $content = l('Edit Primary Contact', 'lb/contact/' . $company->primary_contact->contact_id . '/edit');
    $content = '<div class="lb_action_button">' . $content . '</div>';
    $block = new stdClass();
    $block->title = '';
    $block->content = $content;
    return $block;    
  }
  
  return FALSE;
}
