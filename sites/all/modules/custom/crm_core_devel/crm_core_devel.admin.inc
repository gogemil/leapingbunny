<?php

/**
 * @info
 */


/**
 * Callback function for crm_core_devel_generate().
 */
function crm_core_devel_admin_settings() {
  $form = array();

  $form['headline'] = array(
    '#markup' => 'General information about CRM Devel module and settings form.',
  );  

  return system_settings_form($form);
}