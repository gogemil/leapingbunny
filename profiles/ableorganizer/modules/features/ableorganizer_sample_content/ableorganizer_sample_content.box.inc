<?php
/**
 * @file
 * ableorganizer_sample_content.box.inc
 */

/**
 * Implements hook_default_box().
 */
function ableorganizer_sample_content_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'documentation_header';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'AO Documentation Header';
  $box->options = array(
    'body' => array(
      'value' => '<h2>Documentation</h2>',
      'format' => 'full_html',
    ),
  );
  $export['documentation_header'] = $box;

  return $export;
}
