<?php
/**
 * @file
 * lb_take_action.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function lb_take_action_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'lb_take_action_signatures';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'LB Take Action signatures';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'See Who\'s Signed the Pledge';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_tags'] = array(
    0 => 'cmcp_petition_signatories',
  );
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'This petition did not gathered any signatures yet. Be the first to sign!';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['id'] = 'field_activity_participants_target_id';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['table'] = 'field_data_field_activity_participants';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['field'] = 'field_activity_participants_target_id';
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['relationship'] = 'field_activity_participants_target_id';
  $handler->display->display_options['fields']['contact_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['contact_name']['settings'] = array(
    'format' => 'short_full',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: CRM Core Activity: Date of Signature */
  $handler->display->display_options['fields']['field_cmcp_received_date']['id'] = 'field_cmcp_received_date';
  $handler->display->display_options['fields']['field_cmcp_received_date']['table'] = 'field_data_field_cmcp_received_date';
  $handler->display->display_options['fields']['field_cmcp_received_date']['field'] = 'field_cmcp_received_date';
  $handler->display->display_options['fields']['field_cmcp_received_date']['label'] = '';
  $handler->display->display_options['fields']['field_cmcp_received_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cmcp_received_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cmcp_received_date']['settings'] = array(
    'format_type' => 'date_only',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: CRM Core Activity: Display my name as Anonymous */
  $handler->display->display_options['fields']['field_lb_anonymous_name']['id'] = 'field_lb_anonymous_name';
  $handler->display->display_options['fields']['field_lb_anonymous_name']['table'] = 'field_data_field_lb_anonymous_name';
  $handler->display->display_options['fields']['field_lb_anonymous_name']['field'] = 'field_lb_anonymous_name';
  $handler->display->display_options['fields']['field_lb_anonymous_name']['label'] = '';
  $handler->display->display_options['fields']['field_lb_anonymous_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lb_anonymous_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lb_anonymous_name']['alter']['text'] = 'Anonymous';
  $handler->display->display_options['fields']['field_lb_anonymous_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lb_anonymous_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_lb_anonymous_name']['empty_zero'] = TRUE;
  /* Field: Name or Anonymous */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Name or Anonymous';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_lb_anonymous_name]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['empty'] = '[contact_name]';
  /* Field: CRM Core Contact: Home Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_ao_home_address_locality']['id'] = 'field_ao_home_address_locality';
  $handler->display->display_options['fields']['field_ao_home_address_locality']['table'] = 'field_data_field_ao_home_address';
  $handler->display->display_options['fields']['field_ao_home_address_locality']['field'] = 'field_ao_home_address_locality';
  $handler->display->display_options['fields']['field_ao_home_address_locality']['relationship'] = 'field_activity_participants_target_id';
  $handler->display->display_options['fields']['field_ao_home_address_locality']['label'] = '';
  $handler->display->display_options['fields']['field_ao_home_address_locality']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ao_home_address_locality']['element_label_colon'] = FALSE;
  /* Field: CRM Core Contact: Home Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['field_ao_home_address_administrative_area']['id'] = 'field_ao_home_address_administrative_area';
  $handler->display->display_options['fields']['field_ao_home_address_administrative_area']['table'] = 'field_data_field_ao_home_address';
  $handler->display->display_options['fields']['field_ao_home_address_administrative_area']['field'] = 'field_ao_home_address_administrative_area';
  $handler->display->display_options['fields']['field_ao_home_address_administrative_area']['relationship'] = 'field_activity_participants_target_id';
  $handler->display->display_options['fields']['field_ao_home_address_administrative_area']['label'] = '';
  $handler->display->display_options['fields']['field_ao_home_address_administrative_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ao_home_address_administrative_area']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ao_home_address_administrative_area']['alter']['text'] = ', [field_ao_home_address_administrative_area] |';
  $handler->display->display_options['fields']['field_ao_home_address_administrative_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ao_home_address_administrative_area']['hide_empty'] = TRUE;
  /* Field: CRM Core Contact: Home Address - Country */
  $handler->display->display_options['fields']['field_ao_home_address_country']['id'] = 'field_ao_home_address_country';
  $handler->display->display_options['fields']['field_ao_home_address_country']['table'] = 'field_data_field_ao_home_address';
  $handler->display->display_options['fields']['field_ao_home_address_country']['field'] = 'field_ao_home_address_country';
  $handler->display->display_options['fields']['field_ao_home_address_country']['relationship'] = 'field_activity_participants_target_id';
  $handler->display->display_options['fields']['field_ao_home_address_country']['label'] = '';
  $handler->display->display_options['fields']['field_ao_home_address_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ao_home_address_country']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ao_home_address_country']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ao_home_address_country']['display_name'] = 1;
  /* Field: CRM Core Activity: Personal message */
  $handler->display->display_options['fields']['field_cmcp_pm_content']['id'] = 'field_cmcp_pm_content';
  $handler->display->display_options['fields']['field_cmcp_pm_content']['table'] = 'field_data_field_cmcp_pm_content';
  $handler->display->display_options['fields']['field_cmcp_pm_content']['field'] = 'field_cmcp_pm_content';
  $handler->display->display_options['fields']['field_cmcp_pm_content']['label'] = '';
  $handler->display->display_options['fields']['field_cmcp_pm_content']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cmcp_pm_content']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="header">
<div class="user-info">
<div class="user-name">[nothing]</div>
<div class="user-location">[field_ao_home_address_locality][field_ao_home_address_administrative_area] [field_ao_home_address_country]</div>
</div>
<div class="date-info">
[field_cmcp_received_date]
</div>
</div>
<div class="content">
[field_cmcp_pm_content]
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Sort criterion: CRM Core Activity: Date of Signature (field_cmcp_received_date) */
  $handler->display->display_options['sorts']['field_cmcp_received_date_value']['id'] = 'field_cmcp_received_date_value';
  $handler->display->display_options['sorts']['field_cmcp_received_date_value']['table'] = 'field_data_field_cmcp_received_date';
  $handler->display->display_options['sorts']['field_cmcp_received_date_value']['field'] = 'field_cmcp_received_date_value';
  $handler->display->display_options['sorts']['field_cmcp_received_date_value']['order'] = 'DESC';
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cmcp_petition_signature' => 'cmcp_petition_signature',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['lb_take_action_signatures'] = $view;

  return $export;
}
