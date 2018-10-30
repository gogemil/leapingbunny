<?php
/**
 * @file
 * Displays rendered Logo Licensing Application. Company contact ID is required
 * to be in the page path to this panel.
 */

$plugin = array(
  'single' => TRUE,
  'title' => t('Rendered Logo Licensing Application'),
  'description' => t('Displays rendered Logo Licensing Application. Company contact ID is required to be in the page path to this panel.'),
  'category' => t('LB: Applications'),
  'render callback' => 'lb_declaration_forms_logo_licensing_app_render',
  'admin info' => 'lb_declaration_forms_logo_licensing_app_admin_info',
  'defaults' => array(),
  'all contexts' => TRUE,
);

/**
 * Admin info callback.
 */
function lb_declaration_forms_logo_licensing_app_admin_info($subtype, $conf, $contexts) {
  $block = new stdClass();
  $block->title = t('Rendered Logo Licensing Application');
  $block->content = t('Displays rendered Logo Licensing Application. Company contact ID is required to be in the page path to this panel.');

  return $block;
}

/**
 * Render callback.
 */
function lb_declaration_forms_logo_licensing_app_render($subtype, $conf, $panel_args, $context = NULL) {
  $block = new stdClass();
  $block->title = '';

  $company = $context['argument_entity_id:crm_core_contact_1']->data;

  $logo_licensing_app = lb_user_company_status_get_company_status_activity('logo_licensing_application', 'DESC', $company);
  if ($logo_licensing_app) {
    $block->content = crm_core_activity_view($logo_licensing_app);
  }
  else {
    $block->content = array('#markup' => t("Logo Licensing Application wasn't submitted yet."));
  }

  return $block;
}
