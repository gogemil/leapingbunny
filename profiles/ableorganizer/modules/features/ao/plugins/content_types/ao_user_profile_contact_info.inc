<?php
/**
 * @file
 * Displays contact 5 recent activities.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('User profile: contact information'),
  'description' => t('Displays contact information for the currently selected user.'),
  'category' => t('AbleOrganizer'),
  'edit form' => 'ao_up_contact_info_form',
  'render callback' => 'ao_up_contact_info_render',
  'admin info' => 'ao_up_contact_info_admin_info',
  'defaults' => array(
    'display_title' => 1,
    'view_mode' => 'ao_basic_display',
  ),
  'all contexts' => TRUE,
);

/**
 * Admin info.
 */
function ao_up_contact_info_admin_info($subtype, $conf, $contexts) {
  $block = new stdClass();
  $block->title = t('User profile: contact information');
  $block->content = t('Displays contact information for the currently selected user.');

  return $block;
}

/**
 * Settings form.
 */
function ao_up_contact_info_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['display_title'] = array(
    '#type' => 'checkbox',
    '#title' => t('Display block title'),
    '#description' => t('Check this box to display block title.'),
    '#default_value' => !empty($conf['display_title']) ? 1 : 0,
    '#return_value' => 1,
  );
  
  
  $entity_info = entity_get_info('crm_core_contact');
  $modes = $entity_info['view modes'];  
  $options = array();
  
  foreach ($modes as $item => $val){
    $options[$item] = $val['label'];
  }
  
  // allow user to select view modes
  $form['view_mode'] = array(
    '#type' => 'radios',
    '#title' => t('View Mode'),
    '#default_value' => !empty($conf['view_mode']) ? $conf['view_mode'] : 'full',
    '#options' => $options,
    '#description' => t('Please select a display mode for displaying contact information. This will control what fields display on the page.'),
  );  
  
  return $form;
}

/**
 * Validate handler for settings form.
 */
function ao_up_contact_info_form_validate($form, &$form_state) {
}

/**
 * Submit handler for settings form.
 */
function ao_up_contact_info_form_submit($form, &$form_state) {
  $form_state['conf']['display_title'] = $form_state['values']['display_title'];
  $form_state['conf']['view_mode'] = $form_state['values']['view_mode'];
}

/**
 * Render callback.
 */
function ao_up_contact_info_render($subtype, $conf, $panel_args, $context = NULL) {
	
	global $user;
	
  // you have to be an admin or have permission to view contacts to see this port
	// or you have the be the user associated with the contact
	if(!user_access('View any contact of any type') && $panel_args[0] !== $user->uid){
		return;
	}
	
	// get the contact from the uid
	$contact = crm_core_user_sync_get_contact_from_uid($panel_args[0]);
	
	// if there is no contact associated with the user, hide this pane
	if(empty($contact)){
	  return;
	}
	
	// use the view mode selected for the contact pane
  $contact_record = entity_view('crm_core_contact', array($contact), $conf['view_mode']);
  
  $view_mode = 'ao_basic_display';
  
  $content = '';
  $content .= drupal_render($contact_record);

  $block = new stdClass();
  $block->title = !empty($conf['display_title']) ? $conf['display_title'] : t('Personal Information');
  $block->content = $content;

  return $block;
}
