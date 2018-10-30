<?php
/**
 * @file
 * CTools plugin.
 * Creates a company contact.
 */

// Plugin definition.
$plugin = array(
  'single' => TRUE,
  'title' => t('Company Record: Manufacturer Contact Button'),
  'description' => t('Creates a button for adding a brand manager contact to a company.'),
  'category' => t('LB: Contacts'),
  'render callback' => 'lb_contact_manufacturer_contact_button_render',
  'admin info' => 'lb_contact_manufacturer_contact_button_info',
  'defaults' => array(
    'text' => '',
  ),
  'all contexts' => TRUE,
);

/**
 * Administration info.
 */
function lb_contact_manufacturer_contact_button_admin_info($subtype, $conf, $contexts) {
  $block = new stdClass();
  $block->title = t('Manufacturer Contact Button');
  $block->content = t('Creates a button for adding a manufacturer contact to a company.');
  return $block;
}

/**
 * Render callback.
 */
function lb_contact_manufacturer_contact_button_render($subtype, $conf, $panel_args, $context = NULL) {

  if(!empty($context['argument_entity_id:crm_core_contact_1'])){
    // get the company from the context
    $company = $context['argument_entity_id:crm_core_contact_1']->data;
    $content = l('Add / Edit Manufacturers', 'crm-core/contact/' . $company->contact_id . '/manufacturers');
    $content = '<div class="lb_action_button">' . $content . '</div>';
    $block = new stdClass();
    $block->title = '';
    $block->content = $content;
    return $block;    
  }
  
  return FALSE;
}
