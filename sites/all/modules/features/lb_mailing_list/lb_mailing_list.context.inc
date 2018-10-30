<?php
/**
 * @file
 * lb_mailing_list.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function lb_mailing_list_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mailing_list_signup_block';
  $context->description = 'Mailing list signup block.';
  $context->tag = 'Global';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~company/*/application_section_*' => '~company/*/application_section_*',
        '~<front>' => '~<front>',
        '~crm-core' => '~crm-core',
        '~crm-core/*' => '~crm-core/*',
        '~admin/*' => '~admin/*',
      ),
    ),
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'crm_core_profile-ccp_mailing_list_signup' => array(
          'module' => 'crm_core_profile',
          'delta' => 'ccp_mailing_list_signup',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Global');
  t('Mailing list signup block.');
  $export['mailing_list_signup_block'] = $context;

  return $export;
}
