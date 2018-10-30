<?php
/**
 * @file
 * CTools plugin.
 * Creates a company contact.
 */

// Plugin definition.
$plugin = array(
  'single' => TRUE,
  'title' => t('Company Record: Primary Contact Button'),
  'description' => t('Creates a button for adding / editing the primary contact for a company.'),
  'category' => t('LB: Contacts'),
  'render callback' => 'lb_contact_primary_contact_button_render',
  'admin info' => 'lb_contact_primary_contact_button_admin_info',
  'defaults' => array(
    'text' => '',
  ),
  'all contexts' => TRUE,
);

/**
 * Administration info.
 */
function lb_contact_primary_contact_button_admin_info($subtype, $conf, $contexts) {
  $block = new stdClass();
  $block->title = t('Primary Contact Button');
  $block->content = t('Creates a button for adding / editing a primary contact for a company.');
  return $block;
}

/**
 * Render callback.
 */
function lb_contact_primary_contact_button_render($subtype, $conf, $panel_args, $context = NULL) {

  if(!empty($context['argument_entity_id:crm_core_contact_1'])){
    // get the company from the context
    $company = $context['argument_entity_id:crm_core_contact_1']->data;
    // Link to contact on when contact is available.
    $contact = lb_user_get_primary_contact_for_company($company);
    $content = '';
    if (!empty($contact->contact_id)) {
      $content .= l('Edit Primary Contact', 'crm-core/contact/' . $contact->contact_id . '/edit');
      $content = '<div class="lb_action_button">' . $content . '</div>';
    }
    $block = new stdClass();
    $block->title = '';
    $block->content = $content;
    return $block;
  }

  return FALSE;
}
