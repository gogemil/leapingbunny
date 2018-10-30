<?php

/**
 * @file
 *
 * Plugin to provide an argument handler for a username
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t("Leaping Bunny: Company"),
  // keyword to use for %substitution
  'keyword' => 'lb_company',
  'description' => t('Creates a company context from a user account.'),
  'context' => 'ctools_argument_company_context',
  'placeholder form' => array(
    '#type' => 'textfield',
    '#description' => t('Enter the company of a user for this argument'),
  ),
);


/**
 * Discover if this argument gives us the user we crave.
 */
function ctools_argument_company_context($arg = NULL, $conf = NULL, $empty = FALSE) {
  
  
  // find the company someone is associated with
  dpm('Company Info');
  dpm($arg);
  // dpm($conf);
  
  $query = new RelationQuery('lb_primary_contact', '1');
  $ids = $query->execute();
  
  dpm($query);
  dpm($ids);
  
  // find the company where the user is either
  // - primary contact
  // - or brand manager
  
  // this will be a relationship
  
  
  
  
  // If unset it wants a generic, unfilled context.
  if ($empty) {
    return ctools_context_create_empty('user');
  }

  // We can accept either a node object or a pure nid.
  if (is_object($arg)) {
    return ctools_context_create('user', $arg);
  }

  $account = user_load_by_name($arg);
  if (!$account) {
    return NULL;
  }
  return ctools_context_create('lb_company', $account);
}



