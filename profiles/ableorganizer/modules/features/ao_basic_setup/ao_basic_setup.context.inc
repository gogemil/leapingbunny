<?php
/**
 * @file
 * ao_basic_setup.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ao_basic_setup_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ao_frontpage_context';
  $context->description = 'Displays various blocks on the front page used to describe AbleOrganizer';
  $context->tag = 'front page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-hero_content' => array(
          'module' => 'boxes',
          'delta' => 'hero_content',
          'region' => 'above_content_1',
          'weight' => '-10',
        ),
        'boxes-above_content_lower' => array(
          'module' => 'boxes',
          'delta' => 'above_content_lower',
          'region' => 'above_content_2',
          'weight' => '-10',
        ),
        'boxes-lower_zone' => array(
          'module' => 'boxes',
          'delta' => 'lower_zone',
          'region' => 'below_content_1',
          'weight' => '-10',
        ),
        'boxes-lower_zone_2' => array(
          'module' => 'boxes',
          'delta' => 'lower_zone_2',
          'region' => 'below_content_2',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Displays various blocks on the front page used to describe AbleOrganizer');
  t('front page');
  $export['ao_frontpage_context'] = $context;

  return $export;
}
