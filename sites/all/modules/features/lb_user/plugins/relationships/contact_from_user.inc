<?php

/**
 * @file
 * Plugin to provide an relationship handler for contact from user.
 */

/**
 * @file
 * Plugin to provide an relationship handler for term from node.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('HEY THERE'),
  'keyword' => 'crm_core',
  'description' => t('Adds user category edit form from a user context.'),
  'required context' => new ctools_context_required(t('User'), 'user'),
  'context' => 'lb_user_contact_from_user_context',
);

/**
 * Return a new context based on an existing context.
 */
function lb_user_contact_from_user_context($context, $conf) {
// function ctools_user_category_edit_form_from_user_context($context, $conf) {
  if (empty($context->data)) {
    return ctools_context_create_empty('user_edit_form', NULL);
  }

  if (isset($context->data->user_category)) {
    return ctools_context_create('user_edit_form', $context->data, array('category' => $context->data->user_category));
  }
}
