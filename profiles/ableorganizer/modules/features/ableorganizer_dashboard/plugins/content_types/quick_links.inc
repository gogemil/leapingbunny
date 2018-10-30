<?php
/**
 * @file
 * Displays quick links widget to use at CRM Core Dashboard.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Quick links'),
  'description' => t('Displays quick links widget to use at CRM Core Dashboard.'),
  'category' => t('AbleOrganizer: Dashboard'),
  'edit form' => 'quick_links_settings_form',
  'render callback' => 'quick_links_render',
  'admin info' => 'quick_links_admin_info',
  'defaults' => array(
    'display_title' => 0,
  ),
  'all contexts' => TRUE,
);

/**
 * Admin info.
 */
function quick_links_admin_info($subtype, $conf, $contexts) {
  $block = new stdClass();
  $block->title = t('Quick links');
  $block->content = t('Displays quick links widget to use at CRM Core Dashboard.');

  return $block;
}

/**
 * Settings form.
 */
function quick_links_settings_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['display_title'] = array(
    '#type' => 'checkbox',
    '#title' => t('Display block title'),
    '#description' => t('Check this box to display block title.'),
    '#default_value' => !empty($conf['display_title']) ? 1 : 0,
    '#return_value' => 1,
  );

  return $form;
}

/**
 * Submit handler for settings form.
 */
function quick_links_settings_form_submit($form, &$form_state) {
  $form_state['conf']['display_title'] = $form_state['values']['display_title'];
}

/**
 * Render callback.
 */
function quick_links_render($subtype, $conf, $panel_args, $context = NULL) {
  $options = array('attributes' => array('class' => array('quick-link')));
  
  $add_contact = l(t('Add a Contact'), 'crm-core/contact/add', array('attributes' => array('class' => array('btn'))));
  $add_activity =  l(t('Manage profiles'), 'admin/structure/crm-core/profile', array('attributes' => array('class' => array('btn'))));

  $create_label = t('Create a New');
  $manage_label = t('Record a New');
  $donate_link = "";
  $donation = "";
  $event_link = "";
  $event_reg = "";
  $vol_link = "";
  $vol_reg = "";
  $petition_link = "";
  $petition_sig = "";
  
  if (module_exists('crm_core_donation')) {
    $donate_link = l(t('Donation Page'), 'node/add/cmcd-page', $options);
    $donation = l(t('Donation'), 'crm-core/contact/activity-add/cmcd_donation', $options);
  }
  if (module_exists('crm_core_event')) {
    $event_link = l(t('Event'), 'node/add/cmcev-event', $options);
    $event_reg = l(t('Event Registration'), 'crm-core/contact/activity-add/cmcev_event_registration', $options);
  }
  if (module_exists('crm_core_volunteer')) {
    $vol_link = l(t('Volunteer Opportunity'), 'node/add/cmcv-volunteer', $options);
    $vol_reg = l(t('Volunteer Registration'), 'crm-core/contact/activity-add/cmcv_volunteer_commitment', $options);
  }
  if (module_exists('crm_core_petition')) {
    $petition_link = l(t('Petition'), 'node/add/cmcp-petition', $options);
    $petition_sig .= l(t('Petition Signature'), 'crm-core/contact/activity-add/cmcp_petition_signature', $options);
  }  
  
  $content = <<<CON
  <div class="link-container">
    $add_contact
		<strong>$create_label</strong>
    $donate_link
    $event_link
    $vol_link
    $petition_link
  </div>
  <div class="link-container">
	  $add_activity
		<strong>$manage_label</strong>
	  $donation
	  $event_reg
	  $vol_reg
	  $petition_sig
  </div>
CON;

  $block = new stdClass();
  $block->title = empty($conf['display_title']) ? '' : t('Quick links');
  $block->content = $content;

  return $block;
}
