<?php
/**
 * @file
 * CTools plugin.
 */

// Plugin definition.
$plugin = array(
  'single' => TRUE,
  'title' => t('Application for certification buttons'),
  'description' => t('Application for certification buttons'),
  'category' => t('LB: User profile'),
  'render callback' => 'lb_user_application_certification_buttons_render',
  'admin info' => 'lb_user_application_certification_buttons_admin_info',
  'defaults' => array(
    'text' => '',
  ),
  'all contexts' => TRUE,
);

/**
 * Administration info.
 */
function lb_user_application_certification_buttons_admin_info($subtype, $conf, $contexts) {
  $block = new stdClass();
  $block->title = t('Application for certification buttons');
  $block->content = t('Application for certification buttons');
  return $block;
}

/**
 * Render callback.
 */
function lb_user_application_certification_buttons_render($subtype, $conf, $panel_args, $context = NULL) {
  $block = new stdClass();
  $block->title = '';
  $block->content = '';
  if (!empty($panel_args[0])) {
    // User page.
    if (arg(0) == 'user') {
      $uid = $panel_args[0];
      $primary_contact = crm_core_user_sync_get_contact_from_uid($uid);
      $company = lb_user_get_company_for_primary_contact($primary_contact);
    }
    // Crm core contact page.
    elseif (arg(0) == 'crm-core' && arg(1) == 'contact') {
      $company_id = $panel_args[0];
      $company = crm_core_contact_load($company_id);
    }

    if (!empty($company)) {
      $types = lb_user_company_status_activity_types() + lb_user_request_activity_types();
      $activity = lb_user_company_status_get_company_status_activity($types, 'DESC', $company);
      $must_recommit = lb_registration_company_must_recommit($company->contact_id);

      // Show the button, only if request is approved.
      if (!empty($activity) && $activity->type == 'lb_application_request_approved') {
        $block->content = '<div><span>' . l(t('Apply for Certification'), 'company/' . $company->contact_id . '/application_section_a') . '</span></div>';
      }
      // Show logo licensing even when company is in recommitment state
      elseif ($must_recommit || (!empty($activity) && $activity->type == 'lb_company_application_approved') ||
               (!empty($activity) && $activity->type == 'lb_recommitment_submitted')) {
        if (!empty($activity) && $activity->type == 'lb_company_application_approved') {
          if (arg(0) == 'user') {
            $block->content = '<div><span>' . l(t('View Application'), 'company/' . $company->contact_id . '/application') . '</span></div>';
          }
          else {
            $application = lb_user_company_status_get_company_status_activity('lb_application', 'DESC', $company);
            if ($application) {
              $block->content = '<div><span>' . l(t('View Application'), 'crm-core/contact/' . $company->contact_id . '/activity/' . $application->activity_id) . '</span></div>';
            }
          }
        }
        elseif ($must_recommit || (!empty($activity) && $activity->type == 'lb_recommitment_submitted')) {
          $block->content = '<div><span>' . l(t('Complete Recommitment'), 'company/' . $company->contact_id . '/application_section_a') . '</span></div>';
        }


        // Adding logo licensing button.
        $logo_licensing_application = lb_user_company_status_get_company_status_activity('logo_licensing_application', 'DESC', $company);
        if ($logo_licensing_application) {
          if (arg(0) == 'user') {
            $block->content .= '<div><span>' . l(t('View Logo License Application'), 'company/' . $company->contact_id . '/logo-licensing-application') . '</span></div>';
          }
          else {
            $block->content .= '<div><span>' . l(t('View Logo License Application'), 'crm-core/contact/' . $company->contact_id . '/activity/' . $logo_licensing_application->activity_id) . '</span></div>';
          }
        }
        elseif (arg(0) == 'user') {
          $block->content .= '<div><span>' . l(t('Apply for Logo Licensing'), 'company/logo_licensing_application_form/' . $company->contact_id . '/' . $primary_contact->contact_id) . '</span></div>';
        }
      }
    }
  }

  return $block;
}
