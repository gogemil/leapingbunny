<?php
/**
 * @file
 * lb_home.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function lb_home_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'lb_recent_promotions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'LB Recent Promotions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent Promotions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_brand_target_id']['id'] = 'field_brand_target_id';
  $handler->display->display_options['relationships']['field_brand_target_id']['table'] = 'field_data_field_brand';
  $handler->display->display_options['relationships']['field_brand_target_id']['field'] = 'field_brand_target_id';
  $handler->display->display_options['relationships']['field_brand_target_id']['label'] = 'Brand';
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_lb_logo']['id'] = 'field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo']['table'] = 'field_data_field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo']['field'] = 'field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo']['relationship'] = 'field_brand_target_id';
  $handler->display->display_options['fields']['field_lb_logo']['label'] = '';
  $handler->display->display_options['fields']['field_lb_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lb_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lb_logo']['settings'] = array(
    'image_style' => 'promotions-logo',
    'image_link' => 'content',
  );
  /* Field: Content: Promotion URL */
  $handler->display->display_options['fields']['field_promotion_url_1']['id'] = 'field_promotion_url_1';
  $handler->display->display_options['fields']['field_promotion_url_1']['table'] = 'field_data_field_promotion_url';
  $handler->display->display_options['fields']['field_promotion_url_1']['field'] = 'field_promotion_url';
  $handler->display->display_options['fields']['field_promotion_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_promotion_url_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_promotion_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_promotion_url_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_promotion_url_1']['type'] = 'link_url';
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_partnership_url_1']['id'] = 'field_partnership_url_1';
  $handler->display->display_options['fields']['field_partnership_url_1']['table'] = 'field_data_field_partnership_url';
  $handler->display->display_options['fields']['field_partnership_url_1']['field'] = 'field_partnership_url';
  $handler->display->display_options['fields']['field_partnership_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_partnership_url_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_partnership_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_partnership_url_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_partnership_url_1']['type'] = 'link_url';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_promotion_url_1][field_partnership_url_1]';
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Promotion URL */
  $handler->display->display_options['fields']['field_promotion_url']['id'] = 'field_promotion_url';
  $handler->display->display_options['fields']['field_promotion_url']['table'] = 'field_data_field_promotion_url';
  $handler->display->display_options['fields']['field_promotion_url']['field'] = 'field_promotion_url';
  $handler->display->display_options['fields']['field_promotion_url']['label'] = '';
  $handler->display->display_options['fields']['field_promotion_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_promotion_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_promotion_url']['alter']['text'] = 'Shop now';
  $handler->display->display_options['fields']['field_promotion_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_promotion_url']['alter']['path'] = '[field_promotion_url-url]';
  $handler->display->display_options['fields']['field_promotion_url']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_promotion_url']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_promotion_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_promotion_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_promotion_url']['type'] = 'link_plain';
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_partnership_url']['id'] = 'field_partnership_url';
  $handler->display->display_options['fields']['field_partnership_url']['table'] = 'field_data_field_partnership_url';
  $handler->display->display_options['fields']['field_partnership_url']['field'] = 'field_partnership_url';
  $handler->display->display_options['fields']['field_partnership_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_partnership_url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_partnership_url']['alter']['text'] = 'Shop now';
  $handler->display->display_options['fields']['field_partnership_url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_partnership_url']['alter']['path'] = '[field_partnership_url-url] ';
  $handler->display->display_options['fields']['field_partnership_url']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_partnership_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_partnership_url']['type'] = 'link_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_promotion_url]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['empty'] = '[field_partnership_url]';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'partnership' => 'partnership',
    'promotion' => 'promotion',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  /* Filter criterion: Content: Promotion Dates -  start date (field_promotion_dates) */
  $handler->display->display_options['filters']['field_promotion_dates_value']['id'] = 'field_promotion_dates_value';
  $handler->display->display_options['filters']['field_promotion_dates_value']['table'] = 'field_data_field_promotion_dates';
  $handler->display->display_options['filters']['field_promotion_dates_value']['field'] = 'field_promotion_dates_value';
  $handler->display->display_options['filters']['field_promotion_dates_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_promotion_dates_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_promotion_dates_value']['default_date'] = 'now';
  /* Filter criterion: Content: Promotion Dates - end date (field_promotion_dates:value2) */
  $handler->display->display_options['filters']['field_promotion_dates_value2']['id'] = 'field_promotion_dates_value2';
  $handler->display->display_options['filters']['field_promotion_dates_value2']['table'] = 'field_data_field_promotion_dates';
  $handler->display->display_options['filters']['field_promotion_dates_value2']['field'] = 'field_promotion_dates_value2';
  $handler->display->display_options['filters']['field_promotion_dates_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_promotion_dates_value2']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_promotion_dates_value2']['default_date'] = 'now';

  /* Display: Recent Promotions */
  $handler = $view->new_display('block', 'Recent Promotions', 'block');
  $export['lb_recent_promotions'] = $view;

  return $export;
}
