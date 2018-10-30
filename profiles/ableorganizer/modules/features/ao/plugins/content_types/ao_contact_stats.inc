<?php
/**
 * @file
 * Displays contact statistics like the amount of money raised, the number of
 * events signed up, etc.
 */

$description = 'Displays contact statistics like the amount of money raised,'
  . ' the number of events signed up, etc.';
$plugin = array(
  'single' => TRUE,
  'title' => t('Contact: activity statistics'),
  'description' => t($description),
  'category' => t('AbleOrganizer: Contacts'),
  'edit form' => 'ao_contact_stats_form',
  'render callback' => 'ao_contact_stats_render',
  'admin info' => 'ao_contact_stats_admin_info',
  'defaults' => array(
    'display_title' => 1,
    'title' => t('What I Stand For'),
  ),
  'all contexts' => TRUE,
);

/**
 * Admin info.
 */
function ao_contact_stats_admin_info($subtype, $conf, $contexts) {
  $block = new stdClass();
  $block->title = t('Contact: activity statistics');
  $description = 'Displays contact statistics like the amount of money raised,'
    . ' the number of events signed up, etc.';
  $block->content = t($description);

  return $block;
}

/**
 * Settings form.
 */
function ao_contact_stats_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['display_title'] = array(
    '#type' => 'checkbox',
    '#title' => t('Display block title'),
    '#description' => t('Check this box to display block title.'),
    '#default_value' => !empty($conf['display_title']) ? 1 : 0,
    '#return_value' => 1,
  );

  $form['title'] = array(
    '#type' => 'textfield',
    '#title' => t('Block title'),
    '#default_value' => $conf['title'],
  );

  return $form;
}

/**
 * Validate handler for settings form.
 */
function ao_contact_stats_form_validate($form, &$form_state) {
}

/**
 * Submit handler for settings form.
 */
function ao_contact_stats_form_submit($form, &$form_state) {
  $form_state['conf']['display_title'] = $form_state['values']['display_title'];
  $form_state['conf']['title'] = $form_state['values']['title'];
}

/**
 * Render callback.
 */
function ao_contact_stats_render($subtype, $conf, $panel_args, $context = NULL) {
  
  global $user;
  
  // you have to be an admin or have permission to view contacts to see this port
  // or you have the be the user associated with the contact
  if(!user_access('View any contact of any type') && $panel_args[0] !== $user->uid){
    return;
  }
  
  // get the contact from the uid
  $contact = crm_core_contact_load($panel_args[0]);
  
  // if there is no contact associated with the user, hide this pane
  if(empty($contact)){
    return;
  }
  
  switch ($contact->type) {
    case 'organization':
      $relation_name = 'crm_employee';
      $ids = _ableorganizer_contact_get_group_member_ids($contact_id, $relation_name);
      $ids[] = $contact_id;
      break;

    case 'household':
      $relation_name = 'crm_member';
      $ids = _ableorganizer_contact_get_group_member_ids($contact_id, $relation_name);
      $ids[] = $contact_id;
      break;

    default:
      $ids = array($panel_args[0]);
      break;
  }
  
  if(module_exists('crm_core_donation')){
    $donations_amount = db_query("
        SELECT IFNULL(SUM(fda.field_cmcd_amount_value), 0) AS amount
        FROM {field_data_field_cmcd_amount} fda
        JOIN {field_data_field_activity_participants} fdap
        ON fda.entity_id = fdap.entity_id
        WHERE fdap.field_activity_participants_target_id IN (:contact_id)",
        array(':contact_id' => $ids)
        )->fetchField();
  }
  if(module_exists('crm_core_event')){
    $event_regs = db_query("
        SELECT COUNT(DISTINCT a.activity_id) AS item_count
        FROM {crm_core_activity} a
        JOIN {field_data_field_activity_participants} fdap
        ON a.activity_id = fdap.entity_id
        WHERE fdap.field_activity_participants_target_id IN (:contact_id)
        AND a.type = :type",
        array(
            ':contact_id' => $ids,
            ':type' => 'cmcev_event_registration'
        )
    )->fetchField();
  }
  if(module_exists('crm_core_petition')){
    $petition_signatures = db_query("
        SELECT COUNT(DISTINCT a.activity_id) AS item_count
        FROM {crm_core_activity} a
        JOIN {field_data_field_activity_participants} fdap
        ON a.activity_id = fdap.entity_id
        WHERE fdap.field_activity_participants_target_id IN (:contact_id)
        AND a.type = :type",
        array(':contact_id' => $ids, ':type' => 'cmcp_petition_signature')
    )->fetchField();
  }
  if(module_exists('crm_core_volunteer')){
    $volunteer_reg = db_query("
        SELECT COUNT(DISTINCT a.activity_id) AS item_count
        FROM {crm_core_activity} a
        JOIN {field_data_field_activity_participants} fdap
        ON a.activity_id = fdap.entity_id
        WHERE fdap.field_activity_participants_target_id IN (:contact_id)
        AND a.type = :type",
        array(
            ':contact_id' => $ids,
            ':type' => 'cmcv_volunteer_commitment'
        )
    )->fetchField();
  }

  $content = '<div class="user-profile-summary-data"><div class="user-profile-summary-data-row">';
  
  if(isset($donations_amount)){
    $title = t('Donations Made');
    $content .= <<<DON
    <div class="user-profile-summary-data-item updi-donation">
      <div class="udpi-label">$title</div>
      <div class="udpi-data-item">$donations_amount</div>
    </div>
DON;
  }
  if(isset($event_regs)){
    $title = t('Events Registered');
    $content .= <<<EV
      <div class="user-profile-summary-data-item updi-events">
        <div class="udpi-label">$title</div>
        <div class="udpi-data-item">$event_regs</div>
      </div>
EV;
  }
  if(isset($petition_signatures)){
    $title = t('Petitions Signed');
    $content .= <<<PET
  <div class="user-profile-summary-data-item updi-petition">
    <div class="udpi-label">$title</div>
    <div class="udpi-data-item">$petition_signatures</div>
  </div>
PET;
  }
  if(isset($volunteer_reg)){
    $title = t('Volunteer Jobs');
    $content .= <<<VOL
      <div class="user-profile-summary-data-item updi-volunteer">
        <div class="udpi-label">$title</div>
        <div class="udpi-data-item">$volunteer_reg</div>
      </div>
VOL;
  }
  $content .= "</div></div>";

  $block = new stdClass();
  $block->title = empty($conf['display_title']) ? '' : $conf['title'];
  $block->content = $content;

  return $block;
}
