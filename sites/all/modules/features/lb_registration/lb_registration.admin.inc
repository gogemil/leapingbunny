<?php
/**
 * @file
 * Administration screens.
 */

/**
 * Form builder for section D configuration page.
 */
function lb_registration_section_d_admin_form($form, &$form_state) {
  $directory = 'public://declaration_of_compliance/';
  $directory_good = file_prepare_directory($directory, FILE_CREATE_DIRECTORY);
  if (!$directory_good) {
    drupal_set_message(t('There was an issue with the directory for the declaration files. Please contact site administrator or support engineer.'), 'error');
    watchdog('lb_registration', 'Impossible to create directory "@directory" to store declaration of compliance files.', array('@directory' => $directory), WATCHDOG_ERROR);
  }

  $current_declarations = variable_get('lb_registration_section_d_declarations', array());

  $form['heading'] = array(
    '#markup' => t('Please upload the most current declaration of compliance forms here. These forms will be available for download by users.'),
    '#prefix' => '<div class="heading">',
    '#suffix' => '</div>',
  );

  $form['declaration_material'] = array(
    '#type' => 'managed_file',
    '#title' => t('Declaration of Raw Material Compliance'),
    '#upload_validators' => array(
      'file_validate_extensions' => array('pdf'),
    ),
    '#required' => TRUE,
    '#default_value' => empty($current_declarations['declaration_material']) ? NULL : $current_declarations['declaration_material'],
    '#disabled' => !$directory_good,
  );

  $form['declaration_product'] = array(
    '#type' => 'managed_file',
    '#title' => t('Declaration of Product Compliance'),
    '#upload_validators' => array(
      'file_validate_extensions' => array('pdf'),
    ),
    '#required' => TRUE,
    '#default_value' => empty($current_declarations['declaration_product']) ? NULL : $current_declarations['declaration_product'],
    '#disabled' => !$directory_good,
  );

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
    '#disabled' => !$directory_good,
  );

  return $form;
}

/**
 * Submit callback for section D configuration page.
 */
function lb_registration_section_d_admin_form_submit($form, &$form_state) {
  $directory = 'public://declaration_of_compliance/';
  $directory_good = file_prepare_directory($directory, FILE_CREATE_DIRECTORY);

  if ($directory_good) {
    $declarations = array(
      1 => 'declaration_material',
      2 => 'declaration_product',
    );
    $current_declarations = variable_get('lb_registration_section_d_declarations', array());

    foreach ($declarations as $usage_id => $declaration) {
      $file = file_load($form_state['values'][$declaration]);
      $file = file_move($file, $directory . $file->filename, FILE_EXISTS_REPLACE);
      if ($file) {
        $file->status = FILE_STATUS_PERMANENT;
        file_save($file);
        file_usage_add($file, 'lb_registration', 'lb_registration_section_d_' . $declaration, $usage_id);
        // Removing previous declaration version.
        if (!empty($current_declarations[$declaration]) && $current_declarations[$declaration] != $file->fid) {
          $current_file = file_load($current_declarations[$declaration]);
          if ($current_file) {
            file_usage_delete($current_file, 'lb_registration', 'lb_registration_section_d_' . $declaration, $usage_id);
            file_delete($current_file, TRUE);
          }

        }

        $current_declarations[$declaration] = $file->fid;
      }

    }

    variable_set('lb_registration_section_d_declarations', $current_declarations);
    drupal_set_message(t('Declarations were successfully saved.'));
  }
}

/**
 * Form builder for section A configuration page.
 */
function lb_registration_section_a_admin_form($form, &$form_state) {
  $standard = variable_get('lb_registration_corporate_standard', FALSE);

  $form['heading'] = array(
    '#markup' => t('Please upload the most current forms here. These forms will be available for download by users.'),
    '#prefix' => '<div class="heading">',
    '#suffix' => '</div>',
  );

  $form['lb_registration_corporate_standard'] = array(
    '#type' => 'managed_file',
    '#title' => t('Corporate Standard of Compassion for Animals'),
    '#upload_validators' => array(
      'file_validate_extensions' => array('pdf'),
    ),
    '#required' => TRUE,
    '#default_value' => empty($standard) ? NULL : $standard,
  );

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );

  return $form;
}

/**
 * Submit callback for section A configuration page.
 */
function lb_registration_section_a_admin_form_submit($form, &$form_state) {
  $usage_id = 0;
  $current_standard = variable_get('lb_registration_corporate_standard', FALSE);

  $file = file_load($form_state['values']['lb_registration_corporate_standard']);
  $file = file_move($file, 'public://' . $file->filename, FILE_EXISTS_REPLACE);
  if ($file) {
    $file->status = FILE_STATUS_PERMANENT;
    file_save($file);
    file_usage_add($file, 'lb_registration', 'lb_registration_section_a_corporate_standard', $usage_id);
    // Removing previous declaration version.
    if (!empty($current_standard) && $current_standard != $file->fid) {
      $current_file = file_load($current_standard);
      if ($current_file) {
        file_usage_delete($current_file, 'lb_registration', 'lb_registration_section_a_corporate_standard', $usage_id);
        file_delete($current_file, TRUE);
      }
    }
    $current_standard = $file->fid;
  }

  variable_set('lb_registration_corporate_standard', $current_standard);
  drupal_set_message(t('Standard were successfully saved.'));
}
