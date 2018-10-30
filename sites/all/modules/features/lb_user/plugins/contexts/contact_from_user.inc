<?php 

/**
 * @file
 * 
 * Returns the contact associated with a user
 * 
 */

$plugin = array(
  'title' => t("CRM Core Contact from user"),
  'description' => t('Returns the contact associated with a user.'),
  'context' => 'crm_core_user_sync_contact_from_user_create_contact',  // func to create context
  'context name' => 'contact',
  'settings form' => 'crm_core_user_sync_contact_from_user_settings_form',
  'keyword' => 'contact',
	'required context' => new ctools_context_required(t('User'), 'user'),
  // Provides a list of items which are exposed as keywords.
  'convert list' => 'crm_core_user_sync_contact_from_user_convert_list',
  // Convert keywords into data.
  'convert' => 'crm_core_user_sync_contact_from_user_convert',

  'placeholder form' => array(
    '#type' => 'textfield',
    '#description' => t('Enter some data to represent this "simplecontext".'),
  ),
);

/**
 * Create a context, either from manual configuration or from an argument on the URL.
 *
 * @param $empty
 *   If true, just return an empty context.
 * @param $data
 *   If from settings form, an array as from a form. If from argument, a string.
 * @param $conf
 *   TRUE if the $data is coming from admin configuration, FALSE if it's from a URL arg.
 *
 * @return
 *   a Context object/
 */
function crm_core_user_sync_contact_from_user_create_contact($empty, $data = NULL, $conf = FALSE) {
  
  $context = new ctools_context(array('entity:contact', 'entity', 'contact'));
  $context->plugin = 'contact';
  
  module_load_include('inc', 'page_manager', 'page');
  
  // $page = page_manager_page_load('user');
  $check = page_manager_get_current_page();
  //$na = page_manager_page_get_named_arguments('/user');
  
  // dpm($na);
  
  if ($empty) {
    return $context;
  }

  return;
  
  if ($conf) {
    if ($data['type'] == 'current') {
      global $user;
      $data = user_load($user->uid);
      $data->logged_in_user = TRUE;
    }
    else {
      $data = user_load($data['uid']);
    }
  }
  // Load entity if the data provided is a numeric value. This kind of data is
  // passed by some relationships.
  if (is_numeric($data)) {
    $data = user_load($data);
  }

  if (!empty($data)) {
    $context->data     = $data;
    $context->title    = isset($data->name) ? $data->name : t('Anonymous');
    $context->argument = $data->uid;
    return $context;
  }
}

/**
 * This is the settings form
 */
function crm_core_user_sync_contact_from_user_settings_form($conf, $external = FALSE) {
  return $form;
}

/**
 * Provide a list of sub-keywords.
 *
 * This is used to provide keywords from the context for use in a content type,
 * pane, etc.
 */
function crm_core_user_sync_contact_from_user_convert_list() {
  return array(
    'item1' => t('Item1'),
    'item2' => t('Item2'),
    'description' => t('Description'),
  );
}

/**
 * Convert a context into a string to be used as a keyword by content types, etc.
 */
function crm_core_user_sync_contact_from_user_convert($context, $type) {
  switch ($type) {
    case 'item1':
      return $context->data->item1;
    case 'item2':
      return $context->data->item2;
    case 'description':
      return $context->data->description;
  }
}
