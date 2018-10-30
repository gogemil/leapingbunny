<?php
/**
 * @file
 * CTools plugin.
 */

// Plugin definition.
$plugin = array(
  'single' => TRUE,
  'title' => t('Company status by User'),
  'description' => t('Status Fields to the User Profile.'),
  'category' => t('LB: User profile'),
  'render callback' => 'lb_user_company_status_render',
  'admin info' => 'lb_user_company_status_admin_info',
  'defaults' => array(
    'text' => '',
  ),
  'all contexts' => TRUE,
);

/**
 * Administration info.
 */
function lb_user_company_status_admin_info($subtype, $conf, $contexts) {
  $block = new stdClass();
  $block->title = t('Company status by User');
  $block->content = t('Status Fields to the User Profile');
  return $block;
}

/**
 * Render callback.
 */
function lb_user_company_status_render($subtype, $conf, $panel_args, $context = NULL) {
  $header = array(
    t('Company Status'),
    t('Recommitment Due'),
    t('Originally Approved Date'),
    t('Fixed Cut-Off Date'),
  );
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
      $date_format = 'm/d/Y';
      $pending = FALSE;
      $section_b_submitted = variable_get('lb_registration_section_b_submitted_' . $company->contact_id, FALSE);
      $types = lb_user_company_status_activity_types();
      $types += lb_user_request_activity_types();
      $cutoff_date = lb_user_company_status_cutoff_date($company);
      $company_status_key = lb_user_company_status_value_key($company);
      $originally_approved_date = lb_user_company_status_originally_approved_date($company);
      $recommitment_date = lb_user_company_status_recommitment_date($company);

      // If company request approved, but no decision about application - Pending.
      if ($company_status_key == 'lb_application_request_approved') {
        $pending = TRUE;
        $status = t('Pending');
      }
      else {
        $status = array_search($company_status_key, $types);
      }

      $rows = array();
      $rows[] = array(
        'data' => array(
          array(
            'data' => $status,
            'class' => 'table-field-company-status',
          ),
          array(
            'data' => !$pending && !empty($recommitment_date) ? format_date($recommitment_date, 'custom', $date_format) : '',
            'class' => 'table-field-recommitment-date',
          ),
          array(
            'data' => !$pending && !empty($originally_approved_date) ? format_date($originally_approved_date, 'custom', $date_format) : '',
            'class' => 'table-field-originally-date',
          ),
          array(
            'data' => (!empty($cutoff_date)) ? format_date($cutoff_date, 'custom', $date_format) : '',
            'class' => 'table-field-cut-off-date',
          ),
        ),
      );

      $block = new stdClass();
      $block->title = '';
      $block->content = theme('table', array('rows' => $rows, 'header' => $header));

      return $block;
    }
  }

  return FALSE;
}
