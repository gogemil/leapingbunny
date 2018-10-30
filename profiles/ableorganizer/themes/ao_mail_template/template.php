<?php
/**
 * @file
 * Contains the theme's functions to manipulate Drupal's default markup.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728096
 */

/**
 * Preprocessing information for the mimemail message
 */

function ao_mail_template_preprocess_mimemail_message(&$variables) {
	$variables['logo'] = theme_get_setting('logo');
  $variables['front_page'] = url('<front>', array('absolute' => TRUE));
}

