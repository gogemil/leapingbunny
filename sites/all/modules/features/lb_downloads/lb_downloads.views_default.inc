<?php
/**
 * @file
 * lb_downloads.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function lb_downloads_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'lb_downloads';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'file_managed';
  $view->human_name = 'LB Downloads';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_lb_download_type',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: View larger */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'View larger';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View larger';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Teaser */
  $handler->display->display_options['fields']['rendered']['id'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['table'] = 'file_managed';
  $handler->display->display_options['fields']['rendered']['field'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['ui_name'] = 'Teaser';
  $handler->display->display_options['fields']['rendered']['label'] = '';
  $handler->display->display_options['fields']['rendered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered']['file_view_mode'] = 'teaser';
  /* Field: Full file */
  $handler->display->display_options['fields']['rendered_1']['id'] = 'rendered_1';
  $handler->display->display_options['fields']['rendered_1']['table'] = 'file_managed';
  $handler->display->display_options['fields']['rendered_1']['field'] = 'rendered';
  $handler->display->display_options['fields']['rendered_1']['ui_name'] = 'Full file';
  $handler->display->display_options['fields']['rendered_1']['label'] = '';
  $handler->display->display_options['fields']['rendered_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['rendered_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_1']['file_view_mode'] = 'download';
  /* Field: View larger trigger */
  $handler->display->display_options['fields']['colorbox']['id'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['table'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['field'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['ui_name'] = 'View larger trigger';
  $handler->display->display_options['fields']['colorbox']['label'] = '';
  $handler->display->display_options['fields']['colorbox']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['colorbox']['trigger_field'] = 'nothing';
  $handler->display->display_options['fields']['colorbox']['popup'] = '[rendered_1]';
  $handler->display->display_options['fields']['colorbox']['gid'] = 0;
  $handler->display->display_options['fields']['colorbox']['width'] = '';
  $handler->display->display_options['fields']['colorbox']['height'] = '';
  /* Field: File: Download link */
  $handler->display->display_options['fields']['download']['id'] = 'download';
  $handler->display->display_options['fields']['download']['table'] = 'file_managed';
  $handler->display->display_options['fields']['download']['field'] = 'download';
  $handler->display->display_options['fields']['download']['label'] = '';
  $handler->display->display_options['fields']['download']['element_label_colon'] = FALSE;
  /* Field: File: Download type */
  $handler->display->display_options['fields']['field_lb_download_type']['id'] = 'field_lb_download_type';
  $handler->display->display_options['fields']['field_lb_download_type']['table'] = 'field_data_field_lb_download_type';
  $handler->display->display_options['fields']['field_lb_download_type']['field'] = 'field_lb_download_type';
  $handler->display->display_options['fields']['field_lb_download_type']['label'] = '';
  $handler->display->display_options['fields']['field_lb_download_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lb_download_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lb_download_type']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: File: Upload date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'file_managed';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['order'] = 'DESC';
  /* Sort criterion: File: Download type (field_lb_download_type) */
  $handler->display->display_options['sorts']['field_lb_download_type_tid']['id'] = 'field_lb_download_type_tid';
  $handler->display->display_options['sorts']['field_lb_download_type_tid']['table'] = 'field_data_field_lb_download_type';
  $handler->display->display_options['sorts']['field_lb_download_type_tid']['field'] = 'field_lb_download_type_tid';
  /* Contextual filter: File: Download type (field_lb_download_type) */
  $handler->display->display_options['arguments']['field_lb_download_type_tid']['id'] = 'field_lb_download_type_tid';
  $handler->display->display_options['arguments']['field_lb_download_type_tid']['table'] = 'field_data_field_lb_download_type';
  $handler->display->display_options['arguments']['field_lb_download_type_tid']['field'] = 'field_lb_download_type_tid';
  $handler->display->display_options['arguments']['field_lb_download_type_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_lb_download_type_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_lb_download_type_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_lb_download_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_lb_download_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_lb_download_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_lb_download_type_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_lb_download_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_lb_download_type_tid']['validate_options']['vocabularies'] = array(
    'lb_download_image_type' => 'lb_download_image_type',
  );
  $handler->display->display_options['arguments']['field_lb_download_type_tid']['validate_options']['type'] = 'convert';
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image' => 'image',
  );
  /* Filter criterion: File: Download type (field_lb_download_type) */
  $handler->display->display_options['filters']['field_lb_download_type_tid']['id'] = 'field_lb_download_type_tid';
  $handler->display->display_options['filters']['field_lb_download_type_tid']['table'] = 'field_data_field_lb_download_type';
  $handler->display->display_options['filters']['field_lb_download_type_tid']['field'] = 'field_lb_download_type_tid';
  $handler->display->display_options['filters']['field_lb_download_type_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_lb_download_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_lb_download_type_tid']['vocabulary'] = 'lb_download_image_type';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'LB';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'field_lb_download_type_tid' => array(
      'type' => 'user',
      'context' => 'entity:crm_core_activity.activity-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Download type label',
    ),
  );
  $export['lb_downloads'] = $view;

  return $export;
}
