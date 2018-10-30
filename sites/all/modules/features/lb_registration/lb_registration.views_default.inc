<?php
/**
 * @file
 * lb_registration.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function lb_registration_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'lb_request_status';
  $view->description = 'Lists the status of a request to apply for certification';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'Request Status';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Denied Reference */
  $handler->display->display_options['relationships']['reverse_field_lb_application_request_crm_core_activity']['id'] = 'reverse_field_lb_application_request_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_lb_application_request_crm_core_activity']['table'] = 'crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_lb_application_request_crm_core_activity']['field'] = 'reverse_field_lb_application_request_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_lb_application_request_crm_core_activity']['ui_name'] = 'Denied Reference';
  $handler->display->display_options['relationships']['reverse_field_lb_application_request_crm_core_activity']['label'] = 'Denied Reference';
  /* Relationship: Pending Reference */
  $handler->display->display_options['relationships']['reverse_field_lb_request_outcome_crm_core_activity']['id'] = 'reverse_field_lb_request_outcome_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_lb_request_outcome_crm_core_activity']['table'] = 'crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_lb_request_outcome_crm_core_activity']['field'] = 'reverse_field_lb_request_outcome_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_lb_request_outcome_crm_core_activity']['ui_name'] = 'Pending Reference';
  $handler->display->display_options['relationships']['reverse_field_lb_request_outcome_crm_core_activity']['label'] = 'Pending Reference';
  /* Relationship: NMI Reference */
  $handler->display->display_options['relationships']['reverse_field_lb_application_request_crm_core_activity_1']['id'] = 'reverse_field_lb_application_request_crm_core_activity_1';
  $handler->display->display_options['relationships']['reverse_field_lb_application_request_crm_core_activity_1']['table'] = 'crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_lb_application_request_crm_core_activity_1']['field'] = 'reverse_field_lb_application_request_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_lb_application_request_crm_core_activity_1']['ui_name'] = 'NMI Reference';
  $handler->display->display_options['relationships']['reverse_field_lb_application_request_crm_core_activity_1']['label'] = 'NMI Reference';
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['label'] = '';
  $handler->display->display_options['fields']['activity_id']['element_label_colon'] = FALSE;
  /* Field: Denied */
  $handler->display->display_options['fields']['activity_id_2']['id'] = 'activity_id_2';
  $handler->display->display_options['fields']['activity_id_2']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id_2']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id_2']['relationship'] = 'reverse_field_lb_application_request_crm_core_activity';
  $handler->display->display_options['fields']['activity_id_2']['ui_name'] = 'Denied';
  $handler->display->display_options['fields']['activity_id_2']['label'] = 'Denied';
  $handler->display->display_options['fields']['activity_id_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['activity_id_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['activity_id_2']['alter']['text'] = 'This request was denied.';
  $handler->display->display_options['fields']['activity_id_2']['empty_zero'] = TRUE;
  /* Field: NMI */
  $handler->display->display_options['fields']['activity_id_3']['id'] = 'activity_id_3';
  $handler->display->display_options['fields']['activity_id_3']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id_3']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id_3']['relationship'] = 'reverse_field_lb_application_request_crm_core_activity_1';
  $handler->display->display_options['fields']['activity_id_3']['ui_name'] = 'NMI';
  $handler->display->display_options['fields']['activity_id_3']['label'] = 'NMI';
  $handler->display->display_options['fields']['activity_id_3']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['activity_id_3']['alter']['text'] = 'This request needs more information.';
  $handler->display->display_options['fields']['activity_id_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['activity_id_3']['empty_zero'] = TRUE;
  /* Field: Approved / Pending */
  $handler->display->display_options['fields']['activity_id_1']['id'] = 'activity_id_1';
  $handler->display->display_options['fields']['activity_id_1']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id_1']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id_1']['relationship'] = 'reverse_field_lb_request_outcome_crm_core_activity';
  $handler->display->display_options['fields']['activity_id_1']['ui_name'] = 'Approved / Pending';
  $handler->display->display_options['fields']['activity_id_1']['label'] = 'Approved / Pending';
  $handler->display->display_options['fields']['activity_id_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['activity_id_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['activity_id_1']['alter']['text'] = 'This application is pending.';
  $handler->display->display_options['fields']['activity_id_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['activity_id_1']['empty_zero'] = TRUE;
  /* Field: Status */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Status';
  $handler->display->display_options['fields']['nothing']['label'] = 'Request Status';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[activity_id_1][activity_id_2][activity_id_3]';
  $handler->display->display_options['fields']['nothing']['empty'] = 'No decision has been made about this request, yet.';
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id_4']['id'] = 'activity_id_4';
  $handler->display->display_options['fields']['activity_id_4']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id_4']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id_4']['relationship'] = 'reverse_field_lb_application_request_crm_core_activity';
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id_5']['id'] = 'activity_id_5';
  $handler->display->display_options['fields']['activity_id_5']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id_5']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id_5']['relationship'] = 'reverse_field_lb_request_outcome_crm_core_activity';
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id_6']['id'] = 'activity_id_6';
  $handler->display->display_options['fields']['activity_id_6']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id_6']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id_6']['relationship'] = 'reverse_field_lb_application_request_crm_core_activity_1';
  /* Contextual filter: CRM Core Activity: Activity ID */
  $handler->display->display_options['arguments']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['arguments']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['arguments']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['arguments']['activity_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['activity_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['activity_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['activity_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['activity_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
    3 => 'OR',
    4 => 'OR',
  );
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lb_application_request' => 'lb_application_request',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_lb_request_outcome_crm_core_activity';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'lb_application_request_approved' => 'lb_application_request_approved',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type_2']['id'] = 'type_2';
  $handler->display->display_options['filters']['type_2']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type_2']['field'] = 'type';
  $handler->display->display_options['filters']['type_2']['relationship'] = 'reverse_field_lb_request_outcome_crm_core_activity';
  $handler->display->display_options['filters']['type_2']['operator'] = 'empty';
  $handler->display->display_options['filters']['type_2']['group'] = 2;
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type_3']['id'] = 'type_3';
  $handler->display->display_options['filters']['type_3']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type_3']['field'] = 'type';
  $handler->display->display_options['filters']['type_3']['relationship'] = 'reverse_field_lb_application_request_crm_core_activity';
  $handler->display->display_options['filters']['type_3']['value'] = array(
    'lb_application_request_denied' => 'lb_application_request_denied',
  );
  $handler->display->display_options['filters']['type_3']['group'] = 3;
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type_4']['id'] = 'type_4';
  $handler->display->display_options['filters']['type_4']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type_4']['field'] = 'type';
  $handler->display->display_options['filters']['type_4']['relationship'] = 'reverse_field_lb_application_request_crm_core_activity';
  $handler->display->display_options['filters']['type_4']['operator'] = 'empty';
  $handler->display->display_options['filters']['type_4']['group'] = 3;
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type_5']['id'] = 'type_5';
  $handler->display->display_options['filters']['type_5']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type_5']['field'] = 'type';
  $handler->display->display_options['filters']['type_5']['relationship'] = 'reverse_field_lb_application_request_crm_core_activity_1';
  $handler->display->display_options['filters']['type_5']['value'] = array(
    'lb_application_request_needs_inf' => 'lb_application_request_needs_inf',
  );
  $handler->display->display_options['filters']['type_5']['group'] = 4;
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type_6']['id'] = 'type_6';
  $handler->display->display_options['filters']['type_6']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type_6']['field'] = 'type';
  $handler->display->display_options['filters']['type_6']['relationship'] = 'reverse_field_lb_application_request_crm_core_activity_1';
  $handler->display->display_options['filters']['type_6']['operator'] = 'empty';
  $handler->display->display_options['filters']['type_6']['group'] = 4;

  /* Display: Pane */
  $handler = $view->new_display('panel_pane', 'Pane', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Displays the status of a request activity';
  $handler->display->display_options['pane_title'] = 'Request Status';
  $handler->display->display_options['pane_description'] = 'Displays the approval status of a request to apply';
  $handler->display->display_options['pane_category']['name'] = 'LB: Requests';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'activity_id' => array(
      'type' => 'panel',
      'context' => 'entity:crm_core_activity.activity-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'CRM Core Activity: Activity ID',
    ),
  );
  $export['lb_request_status'] = $view;

  return $export;
}
