<?php

/**
 * @file
 * Rules integration for lb_registration module.
 */

/**
 * Implements hook_rules_condition_info().
 */
function lb_registration_rules_condition_info() {
  return array(
    'lb_registration_company_recommitment_due_status' => array(
      'label' => t('Company is in recommitment due status'),
      'parameter' => array(
        'company' => array(
          'type' => 'entity',
          'label' => t('Entity'),
          'description' => t('Specifies the entity for which to evaluate the condition.'),
          'restriction' => 'selector',
        ),
      ),
      'group' => t('Leaping Bunny'),
    ),
    'lb_registration_is_initial_application' => array(
      'label' => t('Is initial application'),
      'parameter' => array(
        'company' => array(
          'type' => 'entity',
          'label' => t('Entity'),
          'description' => t('Specifies the entity for which to evaluate the condition.'),
          'restriction' => 'selector',
        ),
      ),
      'group' => t('Leaping Bunny'),
    ),
    'lb_registration_company_application_is_pending' => array(
      'label' => t('Application is pending'),
      'parameter' => array(
        'company' => array(
          'type' => 'entity',
          'label' => t('Entity'),
          'description' => t('Specifies the entity for which to evaluate the condition.'),
          'restriction' => 'selector',
        ),
      ),
      'group' => t('Leaping Bunny'),
    ),
    'lb_registration_company_application_initiated' => array(
      'label' => t('Application has been initiated'),
      'parameter' => array(
        'company' => array(
          'type' => 'entity',
          'label' => t('Entity'),
          'description' => t('Specifies the entity for which to evaluate the condition.'),
          'restriction' => 'selector',
        ),
      ),
      'group' => t('Leaping Bunny'),
    ),
    'lb_registration_product_declaration_submitted' => array(
      'label' => t('Declaration of product compliance has been submitted'),
      'parameter' => array(
        'supplier' => array(
          'type' => 'entity',
          'label' => t('Manufacturer'),
          'description' => t('Specifies the company submitting the declaration.'),
          'restriction' => 'selector',
        ),
        'company' => array(
          'type' => 'entity',
          'label' => t('Company'),
          'description' => t('Specifies the company products are being manufactured for.'),
          'restriction' => 'selector',
        ),
      ),
      'group' => t('Leaping Bunny'),
    ),
    'lb_registration_material_declaration_submitted' => array(
      'label' => t('Declaration of raw material compliance has been submitted'),
      'parameter' => array(
        'supplier' => array(
          'type' => 'entity',
          'label' => t('Supplier'),
          'description' => t('Specifies the company submitting the declaration.'),
          'restriction' => 'selector',
        ),
        'company' => array(
          'type' => 'entity',
          'label' => t('Company'),
          'description' => t('Specifies the company products are being supplied to.'),
          'restriction' => 'selector',
        ),
      ),
      'group' => t('Leaping Bunny'),
    ),
  );
}

/**
 * Rules condition callback.
 */
function lb_registration_company_recommitment_due_status($wrapper) {
  $company = $wrapper->value();
  if ($company) {
    $current_status = lb_user_company_status_value_key($company);
    return $current_status == 'lb_recommitment_due';
  }

  return FALSE;
}

/**
 * Rules condition callback.
 */
function lb_registration_is_initial_application($wrapper) {
  $company = $wrapper->value();
  if ($company) {
    $count = lb_user_company_status_get_company_activity_count('lb_company_application_approved', $company);
    return $count == 1;
  }
}

/**
 * Rules condtion callback - application is pending.
 */
function lb_registration_company_is_pending($wrapper) {
  $company = $wrapper->value();
  $company_status_key = lb_user_company_status_value_key($company);

  // If company request approved, but no decision about application - Pending.
  if ($company_status_key == 'lb_application_request_approved') {
    return TRUE;
  }
  else {
    return FALSE;
  }
}

/**
 * Rules condtion callback - application is pending.
 */
function lb_registration_company_application_is_pending($wrapper) {
  $company = $wrapper->value();
  $company_status_key = lb_user_company_status_value_key($company);

  // If company request approved, but no decision about application - Pending.
  if ($company_status_key == 'lb_application_request_approved') {
    return TRUE;
  }
  else {
    return FALSE;
  }
}

/**
 * Rules condition callback - application initiated.
 */
function lb_registration_company_application_initiated($wrapper) {
  $company = $wrapper->value();
  $company_status_key = lb_user_company_status_value_key($company);

  if ($company_status_key == 'lb_company_application_initiated') {
    return TRUE;
  }
  else {
    return FALSE;
  }
}


/**
 * Rules condition callback - declaration of product compliance submitted.
 */
function lb_registration_product_declaration_submitted($manufacturer_wrapper, $company_wrapper) {
  $manufacturer = $manufacturer_wrapper->value();
  $company = $company_wrapper->value();

  $query = new EntityFieldQuery();

  $query
    ->entityCondition('entity_type', 'crm_core_activity', '=')
    ->propertyCondition('type', 'declaration_product_compliance')
    ->fieldCondition('field_activity_participants', 'target_id', $manufacturer->contact_id)
    ->fieldCondition('field_lb_company', 'target_id', $company->contact_id)
  ;

  $result = $query->execute();

  return !empty($result);
}

/**
 * Rules condition callback - declaration of material compliance submitted.
 */
function lb_registration_material_declaration_submitted($supplier_wrapper, $company_wrapper) {
  $supplier = $supplier_wrapper->value();
  $company = $company_wrapper->value();

  $query = new EntityFieldQuery();

  $query
    ->entityCondition('entity_type', 'crm_core_activity', '=')
    ->propertyCondition('type', 'declaration_raw_material')
    ->fieldCondition('field_activity_participants', 'target_id', $supplier->contact_id)
    ->fieldCondition('field_lb_company', 'target_id', $company->contact_id);

  $result = $query->execute();

  return !empty($result);
}

