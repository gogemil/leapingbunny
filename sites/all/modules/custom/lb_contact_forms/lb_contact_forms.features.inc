<?php
/**
 * @file
 * lb_contact_forms.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lb_contact_forms_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function lb_contact_forms_node_info() {
  $items = array(
    'contact_form' => array(
      'name' => t('Contact form'),
      'base' => 'node_content',
      'description' => t('Use <em>contact forms</em> to collect information from visitors, like shopping guide requests.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
