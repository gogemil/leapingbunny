<?php
/**
 * @file
 * lb_social_media.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function lb_social_media_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sharethis';
  $context->description = 'Places Sharethis block to highlighted region on all pages except user pages.';
  $context->tag = 'Global';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/*' => 'node/*',
        'guide/*' => 'guide/*',
        'about*' => 'about*',
        'about/*' => 'about/*',
        'shop/*' => 'shop/*',
        'take-action/*' => 'take-action/*',
        'news' => 'news',
        'news/*' => 'news/*',
        'downloads' => 'downloads',
        'company/register' => 'company/register',
        'blog' => 'blog',
        'blog/*' => 'blog/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'sharethis-sharethis_block' => array(
          'module' => 'sharethis',
          'delta' => 'sharethis_block',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Global');
  t('Places Sharethis block to highlighted region on all pages except user pages.');
  $export['sharethis'] = $context;

  return $export;
}
