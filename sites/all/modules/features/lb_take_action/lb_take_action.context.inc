<?php
/**
 * @file
 * lb_take_action.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function lb_take_action_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'lb_take_action';
  $context->description = 'Places Take action signatures view in the content end.';
  $context->tag = 'LB Take Action';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'take-action/pledge' => 'take-action/pledge',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-6272a61fcdb5cc46ffe2834494bea39e' => array(
          'module' => 'views',
          'delta' => '6272a61fcdb5cc46ffe2834494bea39e',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('LB Take Action');
  t('Places Take action signatures view in the content end.');
  $export['lb_take_action'] = $context;

  return $export;
}
