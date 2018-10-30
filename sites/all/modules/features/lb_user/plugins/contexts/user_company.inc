<?php
/**
 * @file
 * Returns the company associated with a user.
 */

$plugin = array(
  'title' => t('User company'),
  'description' => t('Returns the company associated with a user.'),
  'context' => 'lb_user_panel_context_user_company',
  'context name' => 'user_company',
  'edit form' => 'lb_user_panel_context_user_company_settings_form',
  'keyword' => 'user_company',
  'required context' => new ctools_context_required(t('User'), 'user'),
  'convert list' => 'lb_user_panel_context_user_company_convert_list',
  'convert' => 'lb_user_panel_context_user_company_convert',
);

/**
 * Create a context.
 */
function lb_user_panel_context_user_company($empty, $data = NULL, $conf = FALSE) {
  $context = new ctools_context(array('user', 'user_company'));
  $context->plugin = 'user_company';

  if (!empty($data['position']) && $uid = arg($data['position'])) {
    if ($primary_contact = crm_core_user_sync_get_contact_from_uid($uid)) {
      $context->data = lb_user_get_company_for_primary_contact($primary_contact);
    }
  }
  
  return $context;
}

/**
 * Settings form.
 */
function lb_user_panel_context_user_company_settings_form($form, &$form_state) {
  $conf = $form_state['conf'];
  $form['position'] = array(
    '#type' => 'textfield',
    '#title' => t('User argument position'),
    '#default_value' => !empty($conf['position']) ? $conf['position'] : 1,
  );
  return $form;
}

/**
 * Submit handler for plugin settings form.
 */
function lb_user_panel_context_user_company_settings_form_submit($form, &$form_state) {
  $form_state['conf']['position'] = $form_state['values']['position'];
}

/**
 * Provide a list of sub-keywords.
 *
 * This is used to provide keywords from the context for use in a content type,
 * pane, etc.
 */
function lb_user_panel_context_user_company_convert_list() {
  $tokens = token_info();
  $list = array();
  foreach ($tokens['tokens']['crm-core-contact'] as $id => $info) {
    if (!isset($list[$id])) {
      $list[$id] = $info['name'];
    }
  }
  return $list;
}

/**
 * Convert a context into a string to be used as a keyword by content types.
 */
function lb_user_panel_context_user_company_convert($context, $type) {
  $tokens = token_info();
  if (isset($tokens['tokens']['crm-core-contact'][$type])) {
    $values = token_generate('crm-core-contact', array($type => $type), array('crm-core-contact' => $context->data));
    if (isset($values[$type])) {
      return $values[$type];
    }
  }
  return FALSE;
}
