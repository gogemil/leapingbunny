<?php
/**
 * @file
 * Actions related hooks and callbacks.
 */

/**
 * Implements hook_action_info().
 */
function lb_registration_action_info() {
  return array(
    'lb_registration_request_info' => array(
      'type' => 'entity',
      'label' => t('Needs more info'),
      'configurable' => FALSE,
      'triggers' => array('any'),
    ),
    'lb_registration_request_foreign' => array(
      'type' => 'entity',
      'label' => t('Foreign'),
      'configurable' => FALSE,
      'triggers' => array('any'),
    ),
    'lb_registration_application_close' => array(
      'type' => 'entity',
      'label' => t('Close'),
      'configurable' => FALSE,
      'triggers' => array('any'),
    ),
    'lb_registration_application_cancel' => array(
      'type' => 'entity',
      'label' => t('Remove'),
      'configurable' => FALSE,
      'triggers' => array('any'),
    ),
  );
}

/**
 * Action to request more info.
 *
 * Takes a company or application as an argument.
 */
function lb_registration_request_info(&$entity, $context) {
  // Find the corresponding company, request, and contact.
  list($company, $request, $contact) = lb_application_report_get_entities('lb_application_request', $entity);

  // Create the activity.
  $info_fields = array(
    'field_activity_participants' => array($contact->contact_id, $company->contact_id),
    'field_lb_primary_contact' => $contact->contact_id,
    'field_lb_company' => $company->contact_id,
    'field_lb_application_request' => $request->activity_id,
  );
  $info_request = lb_application_report_create_activity('lb_application_request_needs_inf', $info_fields);

  // Set outcome on request activity.
  $request_wrapper = entity_metadata_wrapper('crm_core_activity', $request);
  $request_wrapper->field_lb_request_outcome->set($info_request->activity_id);
  // Update request status.
  $request_wrapper->field_activity_request_status = 'need_more_info';
  $request_wrapper->save();

  // Invoke rules.
  rules_invoke_component('rules_lb_application_request_needs_more_info', $company->contact_id, $contact->contact_id, $info_request->activity_id);

  drupal_set_message('Company application request was requested additional info.');
}

/**
 * Action to mark request as foreign.
 *
 * Takes a company or application as an argument.
 */
function lb_registration_request_foreign(&$entity, $context) {
  // Find the corresponding company, request, and contact.
  list($company, $request, $contact) = lb_application_report_get_entities('lb_application_request', $entity);

  // Create the activity.
  $info_fields = array(
    'field_activity_participants' => array($contact->contact_id, $company->contact_id),
    'field_lb_primary_contact' => $contact->contact_id,
    'field_lb_company' => $company->contact_id,
    'field_lb_application_request' => $request->activity_id,
  );
  $info_request = lb_application_report_create_activity('lb_application_request_foreign', $info_fields);

  // Set outcome on request activity.
  $request_wrapper = entity_metadata_wrapper('crm_core_activity', $request);
  $request_wrapper->field_lb_request_outcome->set($info_request->activity_id);
  // Update request status.
  $request_wrapper->field_activity_request_status = 'foreign';
  $request_wrapper->save();

  // Invoke rules.
  rules_invoke_component('lb_registration_lb_application_request_foreign', $company->contact_id, $contact->contact_id, $info_request->activity_id);

  drupal_set_message('Company application request was marked as foreign.');
}

/**
 * Action to close company application.
 */
function lb_registration_application_close(&$entity, $context) {
  // Find the corresponding company, request, and contact.
  list($company, $request, $contact) = lb_application_report_get_entities('lb_application', $entity);
  $application = lb_application_report_get_activity_by_company('lb_application', $company);

  // Create the activity.
  $fields = array(
    'field_activity_participants' => array($contact->contact_id, $company->contact_id),
    'field_lb_primary_contact' => $contact->contact_id,
    'field_lb_company' => $company->contact_id,
    'field_lb_application' => $application->activity_id,
  );
  $closed_activity = lb_application_report_create_activity('lb_company_application_closed', $fields);

  // Set outcome on request activity.
  $application_wrapper = entity_metadata_wrapper('crm_core_activity', $application);
  $application_wrapper->field_lb_application_outcome->set($closed_activity->activity_id);
  // Update application status.
  $application_wrapper->field_lb_application_status = 'closed';
  $application_wrapper->save();

  // Block user associated with primary contact of this application.
  $primary_contact_account = crm_core_user_sync_get_user_from_contact_id($application_wrapper->field_lb_primary_contact->contact_id->value());
  if ($primary_contact_account) {
    user_user_operations_block(array($primary_contact_account->uid));
  }

  drupal_set_message('Company application was closed.');
}

/**
 * Action to cancel company application.
 */
function lb_registration_application_cancel(&$entity, $context) {
  // Find the corresponding company, request, and contact.
  list($company, $request, $contact) = lb_application_report_get_entities('lb_application', $entity);
  $application = lb_application_report_get_activity_by_company('lb_application', $company);

  // Create the activity.
  $fields = array(
    'field_activity_participants' => array($contact->contact_id, $company->contact_id),
    'field_lb_primary_contact' => $contact->contact_id,
    'field_lb_company' => $company->contact_id,
    'field_lb_application' => $application->activity_id,
  );
  $canceled_activity = lb_application_report_create_activity('lb_company_application_canceled', $fields);

  // Set outcome on request activity.
  $application_wrapper = entity_metadata_wrapper('crm_core_activity', $application);
  $application_wrapper->field_lb_application_outcome->set($canceled_activity->activity_id);
  // Update application status.
  $application_wrapper->field_lb_application_status = 'canceled';
  $application_wrapper->save();

  // Block user associated with primary contact of this application.
  $primary_contact_account = crm_core_user_sync_get_user_from_contact_id($application_wrapper->field_lb_primary_contact->contact_id->value());
  if ($primary_contact_account) {
    user_user_operations_block(array($primary_contact_account->uid));
  }

  drupal_set_message('Company application was canceled.');
}
