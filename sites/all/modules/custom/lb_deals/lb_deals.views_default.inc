<?php
/**
 * @file
 * lb_deals.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function lb_deals_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'lb_partner';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'LB Partner';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Shop our partners';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are currently no partnerships associated with brand.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_partnership_url']['id'] = 'field_partnership_url';
  $handler->display->display_options['fields']['field_partnership_url']['table'] = 'field_data_field_partnership_url';
  $handler->display->display_options['fields']['field_partnership_url']['field'] = 'field_partnership_url';
  $handler->display->display_options['fields']['field_partnership_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_partnership_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_partnership_url']['type'] = 'link_plain';
  /* Field: Content: Image/logo */
  $handler->display->display_options['fields']['field_partnership_image']['id'] = 'field_partnership_image';
  $handler->display->display_options['fields']['field_partnership_image']['table'] = 'field_data_field_partnership_image';
  $handler->display->display_options['fields']['field_partnership_image']['field'] = 'field_partnership_image';
  $handler->display->display_options['fields']['field_partnership_image']['label'] = '';
  $handler->display->display_options['fields']['field_partnership_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_partnership_image']['alter']['path'] = '[field_partnership_url]';
  $handler->display->display_options['fields']['field_partnership_image']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_partnership_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_partnership_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_partnership_image']['settings'] = array(
    'image_style' => 'promotions-logo',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_partnership_url]';
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
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '600';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Shop now link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Shop now link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Shop now';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_partnership_url]';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'shop-now';
  $handler->display->display_options['fields']['nothing']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Brand (field_brand) */
  $handler->display->display_options['arguments']['field_brand_target_id']['id'] = 'field_brand_target_id';
  $handler->display->display_options['arguments']['field_brand_target_id']['table'] = 'field_data_field_brand';
  $handler->display->display_options['arguments']['field_brand_target_id']['field'] = 'field_brand_target_id';
  $handler->display->display_options['arguments']['field_brand_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_brand_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_brand_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_brand_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_brand_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_brand_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_brand_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_brand_target_id']['validate_options']['types'] = array(
    'brand' => 'brand',
  );
  $handler->display->display_options['arguments']['field_brand_target_id']['validate']['fail'] = 'empty';
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
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'shop/partner';
  $export['lb_partner'] = $view;

  $view = new view();
  $view->name = 'lb_partners';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'LB Partners';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Shop our partners';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'All of the companies certified through the Coalition for Consumer Information on Cosmetics’ (CCIC) Leaping Bunny Program are doing their part to help eliminate the cruel and unnecessary use of animals in product testing. However, some companies are going the extra mile by helping us raise money to further the work of the Leaping Bunny Program. You can help too, just by shopping from these great cruelty-free companies!';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No partners yet';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_brand_target_id']['id'] = 'field_brand_target_id';
  $handler->display->display_options['relationships']['field_brand_target_id']['table'] = 'field_data_field_brand';
  $handler->display->display_options['relationships']['field_brand_target_id']['field'] = 'field_brand_target_id';
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_partnership_url']['id'] = 'field_partnership_url';
  $handler->display->display_options['fields']['field_partnership_url']['table'] = 'field_data_field_partnership_url';
  $handler->display->display_options['fields']['field_partnership_url']['field'] = 'field_partnership_url';
  $handler->display->display_options['fields']['field_partnership_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_partnership_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_partnership_url']['type'] = 'link_plain';
  /* Field: Content: Image/logo */
  $handler->display->display_options['fields']['field_partnership_image']['id'] = 'field_partnership_image';
  $handler->display->display_options['fields']['field_partnership_image']['table'] = 'field_data_field_partnership_image';
  $handler->display->display_options['fields']['field_partnership_image']['field'] = 'field_partnership_image';
  $handler->display->display_options['fields']['field_partnership_image']['label'] = '';
  $handler->display->display_options['fields']['field_partnership_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_partnership_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_partnership_image']['alter']['path'] = '[field_partnership_url]';
  $handler->display->display_options['fields']['field_partnership_image']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_partnership_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_partnership_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_partnership_image']['settings'] = array(
    'image_style' => 'promotions-logo',
    'image_link' => '',
  );
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_lb_logo']['id'] = 'field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo']['table'] = 'field_data_field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo']['field'] = 'field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo']['relationship'] = 'field_brand_target_id';
  $handler->display->display_options['fields']['field_lb_logo']['label'] = '';
  $handler->display->display_options['fields']['field_lb_logo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_lb_logo']['alter']['path'] = '[field_partnership_url]';
  $handler->display->display_options['fields']['field_lb_logo']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_lb_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lb_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lb_logo']['settings'] = array(
    'image_style' => 'promotions-logo',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_partnership_url]';
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
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '600';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Shop now link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Shop now link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Shop now';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_partnership_url]';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'shop-now';
  $handler->display->display_options['fields']['nothing']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Brand (field_brand) */
  $handler->display->display_options['arguments']['field_brand_target_id']['id'] = 'field_brand_target_id';
  $handler->display->display_options['arguments']['field_brand_target_id']['table'] = 'field_data_field_brand';
  $handler->display->display_options['arguments']['field_brand_target_id']['field'] = 'field_brand_target_id';
  $handler->display->display_options['arguments']['field_brand_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_brand_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_brand_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_brand_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_brand_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_brand_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_brand_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_brand_target_id']['validate_options']['types'] = array(
    'brand' => 'brand',
  );
  $handler->display->display_options['arguments']['field_brand_target_id']['validate']['fail'] = 'ignore';
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
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'shop/partners';
  $export['lb_partners'] = $view;

  $view = new view();
  $view->name = 'lb_promotion';
  $view->description = 'Shows promotions of specific brand.';
  $view->tag = 'LB';
  $view->base_table = 'node';
  $view->human_name = 'LB promotion';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Exclusive Deals';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No promotions are currently active for this brand.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_brand_target_id']['id'] = 'field_brand_target_id';
  $handler->display->display_options['relationships']['field_brand_target_id']['table'] = 'field_data_field_brand';
  $handler->display->display_options['relationships']['field_brand_target_id']['field'] = 'field_brand_target_id';
  $handler->display->display_options['relationships']['field_brand_target_id']['label'] = 'Brand';
  $handler->display->display_options['relationships']['field_brand_target_id']['required'] = TRUE;
  /* Field: Content: Promotion URL */
  $handler->display->display_options['fields']['field_promotion_url']['id'] = 'field_promotion_url';
  $handler->display->display_options['fields']['field_promotion_url']['table'] = 'field_data_field_promotion_url';
  $handler->display->display_options['fields']['field_promotion_url']['field'] = 'field_promotion_url';
  $handler->display->display_options['fields']['field_promotion_url']['label'] = '';
  $handler->display->display_options['fields']['field_promotion_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_promotion_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_promotion_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_promotion_url']['type'] = 'link_plain';
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_lb_logo']['id'] = 'field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo']['table'] = 'field_data_field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo']['field'] = 'field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo']['relationship'] = 'field_brand_target_id';
  $handler->display->display_options['fields']['field_lb_logo']['label'] = '';
  $handler->display->display_options['fields']['field_lb_logo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_lb_logo']['alter']['path'] = '[field_promotion_url]';
  $handler->display->display_options['fields']['field_lb_logo']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_lb_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lb_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lb_logo']['settings'] = array(
    'image_style' => 'promotions-logo',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_promotion_url]';
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
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '600';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Shop now link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Shop now link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Shop now';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_promotion_url]';
  $handler->display->display_options['fields']['nothing']['alter']['alt'] = 'Shop now';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'shop-now';
  $handler->display->display_options['fields']['nothing']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Contextual filter: Content: Brand (field_brand) */
  $handler->display->display_options['arguments']['field_brand_target_id']['id'] = 'field_brand_target_id';
  $handler->display->display_options['arguments']['field_brand_target_id']['table'] = 'field_data_field_brand';
  $handler->display->display_options['arguments']['field_brand_target_id']['field'] = 'field_brand_target_id';
  $handler->display->display_options['arguments']['field_brand_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_brand_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_brand_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_brand_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_brand_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_brand_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_brand_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_brand_target_id']['validate_options']['types'] = array(
    'brand' => 'brand',
  );
  $handler->display->display_options['arguments']['field_brand_target_id']['validate']['fail'] = 'empty';
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
    'promotion' => 'promotion',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Promotion status (field_promotion_status) */
  $handler->display->display_options['filters']['field_promotion_status_value']['id'] = 'field_promotion_status_value';
  $handler->display->display_options['filters']['field_promotion_status_value']['table'] = 'field_data_field_promotion_status';
  $handler->display->display_options['filters']['field_promotion_status_value']['field'] = 'field_promotion_status_value';
  $handler->display->display_options['filters']['field_promotion_status_value']['value'] = array(
    'Active' => 'Active',
  );
  $handler->display->display_options['filters']['field_promotion_status_value']['group'] = 1;
  /* Filter criterion: Content: Promotion Dates -  start date (field_promotion_dates) */
  $handler->display->display_options['filters']['field_promotion_dates_value']['id'] = 'field_promotion_dates_value';
  $handler->display->display_options['filters']['field_promotion_dates_value']['table'] = 'field_data_field_promotion_dates';
  $handler->display->display_options['filters']['field_promotion_dates_value']['field'] = 'field_promotion_dates_value';
  $handler->display->display_options['filters']['field_promotion_dates_value']['operator'] = '<';
  $handler->display->display_options['filters']['field_promotion_dates_value']['group'] = 1;
  $handler->display->display_options['filters']['field_promotion_dates_value']['default_date'] = 'now';
  /* Filter criterion: Content: Promotion Dates - end date (field_promotion_dates:value2) */
  $handler->display->display_options['filters']['field_promotion_dates_value2']['id'] = 'field_promotion_dates_value2';
  $handler->display->display_options['filters']['field_promotion_dates_value2']['table'] = 'field_data_field_promotion_dates';
  $handler->display->display_options['filters']['field_promotion_dates_value2']['field'] = 'field_promotion_dates_value2';
  $handler->display->display_options['filters']['field_promotion_dates_value2']['operator'] = '>';
  $handler->display->display_options['filters']['field_promotion_dates_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_promotion_dates_value2']['default_date'] = 'now';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'shop/deal';
  $export['lb_promotion'] = $view;

  $view = new view();
  $view->name = 'lb_promotions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'LB promotions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Exclusive Deals';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = 'These Leaping Bunny certified companies are offering exclusive promotions just to our Leaping Bunny supporters! Follow the specific directions for each company to take advantage of the deals.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No promotions are currently active';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_brand_target_id']['id'] = 'field_brand_target_id';
  $handler->display->display_options['relationships']['field_brand_target_id']['table'] = 'field_data_field_brand';
  $handler->display->display_options['relationships']['field_brand_target_id']['field'] = 'field_brand_target_id';
  $handler->display->display_options['relationships']['field_brand_target_id']['label'] = 'Brand';
  $handler->display->display_options['relationships']['field_brand_target_id']['required'] = TRUE;
  /* Field: Content: Promotion URL */
  $handler->display->display_options['fields']['field_promotion_url']['id'] = 'field_promotion_url';
  $handler->display->display_options['fields']['field_promotion_url']['table'] = 'field_data_field_promotion_url';
  $handler->display->display_options['fields']['field_promotion_url']['field'] = 'field_promotion_url';
  $handler->display->display_options['fields']['field_promotion_url']['label'] = '';
  $handler->display->display_options['fields']['field_promotion_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_promotion_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_promotion_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_promotion_url']['type'] = 'link_plain';
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_lb_logo']['id'] = 'field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo']['table'] = 'field_data_field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo']['field'] = 'field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo']['relationship'] = 'field_brand_target_id';
  $handler->display->display_options['fields']['field_lb_logo']['label'] = '';
  $handler->display->display_options['fields']['field_lb_logo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_lb_logo']['alter']['path'] = '[field_promotion_url]';
  $handler->display->display_options['fields']['field_lb_logo']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_lb_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lb_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lb_logo']['settings'] = array(
    'image_style' => 'promotions-logo',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_promotion_url]';
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
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '600';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Shop now link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Shop now link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Shop now';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_promotion_url]';
  $handler->display->display_options['fields']['nothing']['alter']['alt'] = 'Shop now';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'shop-now';
  $handler->display->display_options['fields']['nothing']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Contextual filter: Content: Brand (field_brand) */
  $handler->display->display_options['arguments']['field_brand_target_id']['id'] = 'field_brand_target_id';
  $handler->display->display_options['arguments']['field_brand_target_id']['table'] = 'field_data_field_brand';
  $handler->display->display_options['arguments']['field_brand_target_id']['field'] = 'field_brand_target_id';
  $handler->display->display_options['arguments']['field_brand_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_brand_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_brand_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_brand_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_brand_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_brand_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_brand_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_brand_target_id']['validate_options']['types'] = array(
    'brand' => 'brand',
  );
  $handler->display->display_options['arguments']['field_brand_target_id']['validate']['fail'] = 'ignore';
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
    'promotion' => 'promotion',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Promotion status (field_promotion_status) */
  $handler->display->display_options['filters']['field_promotion_status_value']['id'] = 'field_promotion_status_value';
  $handler->display->display_options['filters']['field_promotion_status_value']['table'] = 'field_data_field_promotion_status';
  $handler->display->display_options['filters']['field_promotion_status_value']['field'] = 'field_promotion_status_value';
  $handler->display->display_options['filters']['field_promotion_status_value']['value'] = array(
    'Active' => 'Active',
  );
  $handler->display->display_options['filters']['field_promotion_status_value']['group'] = 1;
  /* Filter criterion: Content: Promotion Dates -  start date (field_promotion_dates) */
  $handler->display->display_options['filters']['field_promotion_dates_value']['id'] = 'field_promotion_dates_value';
  $handler->display->display_options['filters']['field_promotion_dates_value']['table'] = 'field_data_field_promotion_dates';
  $handler->display->display_options['filters']['field_promotion_dates_value']['field'] = 'field_promotion_dates_value';
  $handler->display->display_options['filters']['field_promotion_dates_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_promotion_dates_value']['group'] = 1;
  $handler->display->display_options['filters']['field_promotion_dates_value']['default_date'] = 'now';
  /* Filter criterion: Content: Promotion Dates - end date (field_promotion_dates:value2) */
  $handler->display->display_options['filters']['field_promotion_dates_value2']['id'] = 'field_promotion_dates_value2';
  $handler->display->display_options['filters']['field_promotion_dates_value2']['table'] = 'field_data_field_promotion_dates';
  $handler->display->display_options['filters']['field_promotion_dates_value2']['field'] = 'field_promotion_dates_value2';
  $handler->display->display_options['filters']['field_promotion_dates_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_promotion_dates_value2']['group'] = 1;
  $handler->display->display_options['filters']['field_promotion_dates_value2']['default_date'] = 'now';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Promotion URL */
  $handler->display->display_options['fields']['field_promotion_url']['id'] = 'field_promotion_url';
  $handler->display->display_options['fields']['field_promotion_url']['table'] = 'field_data_field_promotion_url';
  $handler->display->display_options['fields']['field_promotion_url']['field'] = 'field_promotion_url';
  $handler->display->display_options['fields']['field_promotion_url']['label'] = '';
  $handler->display->display_options['fields']['field_promotion_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_promotion_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_promotion_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_promotion_url']['type'] = 'link_plain';
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_lb_logo']['id'] = 'field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo']['table'] = 'field_data_field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo']['field'] = 'field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo']['relationship'] = 'field_brand_target_id';
  $handler->display->display_options['fields']['field_lb_logo']['label'] = '';
  $handler->display->display_options['fields']['field_lb_logo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_lb_logo']['alter']['path'] = '[field_promotion_url]';
  $handler->display->display_options['fields']['field_lb_logo']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_lb_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lb_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lb_logo']['settings'] = array(
    'image_style' => 'promotions-logo',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_promotion_url]';
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
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '600';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Shop now link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Shop now link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Shop now';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_promotion_url]';
  $handler->display->display_options['fields']['nothing']['alter']['alt'] = 'Shop now';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'shop-now';
  $handler->display->display_options['fields']['nothing']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'shop/deals';
  $export['lb_promotions'] = $view;

  return $export;
}
