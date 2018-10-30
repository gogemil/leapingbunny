<?php
/**
 * @file
 * lb_downloads.default_entity_embed_configurations.inc
 */

/**
 * Implements hook_default_entity_embed_configuration().
 */
function lb_downloads_default_entity_embed_configuration() {
  $export = array();

  $configuration = new stdClass();
  $configuration->disabled = FALSE; /* Edit this to true to make a default configuration disabled initially */
  $configuration->api_version = 1;
  $configuration->admin_title = 'Document';
  $configuration->name = 'document';
  $configuration->button_label = 'Document';
  $configuration->entity_type = 'file';
  $configuration->entity_type_bundles = array(
    'document' => 'document',
  );
  $configuration->button_icon_fid = 0;
  $export['document'] = $configuration;

  return $export;
}
