<?php
/**
 * @file
 * lb_companies.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function lb_companies_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'companies_view';
  $context->description = '';
  $context->tag = 'companies';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'lb_companies' => 'lb_companies',
        'lb_companies:page' => 'lb_companies:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-lb_companies-page' => array(
          'module' => 'views',
          'delta' => '-exp-lb_companies-page',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('companies');
  $export['companies_view'] = $context;

  return $export;
}
