<?php
/**
 * @file
 * lb_user.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function lb_user_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'lb_brand_partnerships';
  $view->description = 'This is a list of promotions for a specified brand';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'LB Brand Partnerships';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Brand Partnerships';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'create partnership content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="node/add/partnership?brandid=!1&destination=lb/lb-brand-partnerships/!1">Add a partnership</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* No results behavior: No partnerships text */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['ui_name'] = 'No partnerships text';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no partnerships associated with this brand at this time. You can create one using the link above.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Brand */
  $handler->display->display_options['fields']['field_brand']['id'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['table'] = 'field_data_field_brand';
  $handler->display->display_options['fields']['field_brand']['field'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_brand']['delta_offset'] = '0';
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_partnership_url']['id'] = 'field_partnership_url';
  $handler->display->display_options['fields']['field_partnership_url']['table'] = 'field_data_field_partnership_url';
  $handler->display->display_options['fields']['field_partnership_url']['field'] = 'field_partnership_url';
  $handler->display->display_options['fields']['field_partnership_url']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Brand (field_brand) */
  $handler->display->display_options['arguments']['field_brand_target_id']['id'] = 'field_brand_target_id';
  $handler->display->display_options['arguments']['field_brand_target_id']['table'] = 'field_data_field_brand';
  $handler->display->display_options['arguments']['field_brand_target_id']['field'] = 'field_brand_target_id';
  $handler->display->display_options['arguments']['field_brand_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_brand_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_brand_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_brand_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_brand_target_id']['summary_options']['items_per_page'] = '25';
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
  $handler->display->display_options['path'] = 'lb/lb-brand-partnerships';
  $export['lb_brand_partnerships'] = $view;

  $view = new view();
  $view->name = 'lb_brand_promotions';
  $view->description = 'This is a list of promotions for a specified brand';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'LB Brand Promotions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Brand Promotions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'create promotion content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="node/add/promotion?brandid=!1&destination=lb/lb-brand-promotions/!1">Add a promotion</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* No results behavior: No promotions text */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['ui_name'] = 'No promotions text';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no promotions associated with this brand at this time. You can create one using the link above.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Start Date */
  $handler->display->display_options['fields']['field_promotion_dates']['id'] = 'field_promotion_dates';
  $handler->display->display_options['fields']['field_promotion_dates']['table'] = 'field_data_field_promotion_dates';
  $handler->display->display_options['fields']['field_promotion_dates']['field'] = 'field_promotion_dates';
  $handler->display->display_options['fields']['field_promotion_dates']['ui_name'] = 'Start Date';
  $handler->display->display_options['fields']['field_promotion_dates']['label'] = 'Start Date';
  $handler->display->display_options['fields']['field_promotion_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: End Date */
  $handler->display->display_options['fields']['field_promotion_dates_1']['id'] = 'field_promotion_dates_1';
  $handler->display->display_options['fields']['field_promotion_dates_1']['table'] = 'field_data_field_promotion_dates';
  $handler->display->display_options['fields']['field_promotion_dates_1']['field'] = 'field_promotion_dates';
  $handler->display->display_options['fields']['field_promotion_dates_1']['ui_name'] = 'End Date';
  $handler->display->display_options['fields']['field_promotion_dates_1']['label'] = 'End Date';
  $handler->display->display_options['fields']['field_promotion_dates_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Promotion status */
  $handler->display->display_options['fields']['field_promotion_status']['id'] = 'field_promotion_status';
  $handler->display->display_options['fields']['field_promotion_status']['table'] = 'field_data_field_promotion_status';
  $handler->display->display_options['fields']['field_promotion_status']['field'] = 'field_promotion_status';
  /* Field: Link to promotion page */
  $handler->display->display_options['fields']['field_promotion_url']['id'] = 'field_promotion_url';
  $handler->display->display_options['fields']['field_promotion_url']['table'] = 'field_data_field_promotion_url';
  $handler->display->display_options['fields']['field_promotion_url']['field'] = 'field_promotion_url';
  $handler->display->display_options['fields']['field_promotion_url']['ui_name'] = 'Link to promotion page';
  $handler->display->display_options['fields']['field_promotion_url']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Brand (field_brand) */
  $handler->display->display_options['arguments']['field_brand_target_id']['id'] = 'field_brand_target_id';
  $handler->display->display_options['arguments']['field_brand_target_id']['table'] = 'field_data_field_brand';
  $handler->display->display_options['arguments']['field_brand_target_id']['field'] = 'field_brand_target_id';
  $handler->display->display_options['arguments']['field_brand_target_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_brand_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_brand_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_brand_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_brand_target_id']['summary_options']['items_per_page'] = '25';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'lb/lb-brand-promotions';
  $export['lb_brand_promotions'] = $view;

  $view = new view();
  $view->name = 'lb_user_profile_brands';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'User profile: Brands';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Brands';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_activity_participants_crm_core_activity']['id'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_activity_participants_crm_core_activity']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['reverse_field_activity_participants_crm_core_activity']['field'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_activity_participants_crm_core_activity']['relationship'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['relationships']['reverse_field_activity_participants_crm_core_activity']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_brand_ref_target_id']['id'] = 'field_lb_brand_ref_target_id';
  $handler->display->display_options['relationships']['field_lb_brand_ref_target_id']['table'] = 'field_data_field_lb_brand_ref';
  $handler->display->display_options['relationships']['field_lb_brand_ref_target_id']['field'] = 'field_lb_brand_ref_target_id';
  $handler->display->display_options['relationships']['field_lb_brand_ref_target_id']['relationship'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['relationships']['field_lb_brand_ref_target_id']['required'] = TRUE;
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['relationship'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['activity_id']['separator'] = '';
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['relationship'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: Node ID for the Brand */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_lb_brand_ref_target_id';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'Node ID for the Brand';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_lb_logo']['id'] = 'field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo']['table'] = 'field_data_field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo']['field'] = 'field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo']['relationship'] = 'field_lb_brand_ref_target_id';
  $handler->display->display_options['fields']['field_lb_logo']['label'] = '';
  $handler->display->display_options['fields']['field_lb_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lb_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lb_logo']['settings'] = array(
    'image_style' => 'lb_user_profile_brand_image',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_lb_brand_ref_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_lb_description']['id'] = 'field_lb_description';
  $handler->display->display_options['fields']['field_lb_description']['table'] = 'field_data_field_lb_description';
  $handler->display->display_options['fields']['field_lb_description']['field'] = 'field_lb_description';
  $handler->display->display_options['fields']['field_lb_description']['relationship'] = 'field_lb_brand_ref_target_id';
  $handler->display->display_options['fields']['field_lb_description']['label'] = '';
  $handler->display->display_options['fields']['field_lb_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lb_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_lb_description']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Edit Brand Link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Edit Brand Link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit Brand';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]/edit?destination=user';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Edit Promotions Link */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Edit Promotions Link';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Edit Promotions';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'lb/lb-brand-promotions/[nid]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Edit Partnerships Link */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Edit Partnerships Link';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Edit Partnerships';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = 'lb/lb-brand-partnerships/[nid]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = '';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<div class="lb_brand_links"><div class="pane-bmc-button">[nothing]</div> <div class="pane-bmc-button">[nothing_1]</div> <div class="pane-bmc-button">[nothing_2]</div></div>';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_3']['element_wrapper_class'] = 'lb_action_button';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'field_lb_brand_ref_target_id';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: CRM Core Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lb_brand_listed' => 'lb_brand_listed',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'LB: User profile';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'contact_id' => array(
      'type' => 'context',
      'context' => 'user_company.contact-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'CRM Core Contact: Contact ID',
    ),
  );
  $export['lb_user_profile_brands'] = $view;

  $view = new view();
  $view->name = 'lb_user_profile_brands_managers';
  $view->description = 'This displays a list of brand managers associated with a company';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'User profile: Brand Managers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Brand Managers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: CRM Core Contact: Relation: brand manager for (crm_core_contact → crm_core_contact) */
  $handler->display->display_options['relationships']['relation_lb_marketing_contact_crm_core_contact']['id'] = 'relation_lb_marketing_contact_crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_marketing_contact_crm_core_contact']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_marketing_contact_crm_core_contact']['field'] = 'relation_lb_marketing_contact_crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_marketing_contact_crm_core_contact']['relationship'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_marketing_contact_crm_core_contact']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_lb_marketing_contact_crm_core_contact']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_lb_marketing_contact_crm_core_contact']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_lb_marketing_contact_crm_core_contact']['entity_deduplication_right'] = 0;
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['relationship'] = 'relation_lb_marketing_contact_crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit Brand Manager';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'user/[contact_id]/brand-manager/edit';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['relationship'] = 'relation_lb_marketing_contact_crm_core_contact';
  $handler->display->display_options['fields']['contact_name']['label'] = 'Name';
  $handler->display->display_options['fields']['contact_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['contact_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Field: Primary Telephone */
  $handler->display->display_options['fields']['field_ao_primary_telephone']['id'] = 'field_ao_primary_telephone';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['table'] = 'field_data_field_ao_primary_telephone';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['field'] = 'field_ao_primary_telephone';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['relationship'] = 'relation_lb_marketing_contact_crm_core_contact';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ao_primary_telephone']['click_sort_column'] = 'number';
  /* Field: Field: Email Address */
  $handler->display->display_options['fields']['field_ao_email_address']['id'] = 'field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['table'] = 'field_data_field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['field'] = 'field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['relationship'] = 'relation_lb_marketing_contact_crm_core_contact';
  /* Field: CRM Core Contact: Home Address */
  $handler->display->display_options['fields']['field_ao_home_address']['id'] = 'field_ao_home_address';
  $handler->display->display_options['fields']['field_ao_home_address']['table'] = 'field_data_field_ao_home_address';
  $handler->display->display_options['fields']['field_ao_home_address']['field'] = 'field_ao_home_address';
  $handler->display->display_options['fields']['field_ao_home_address']['relationship'] = 'relation_lb_marketing_contact_crm_core_contact';
  $handler->display->display_options['fields']['field_ao_home_address']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ao_home_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_ao_home_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id_1']['id'] = 'contact_id_1';
  $handler->display->display_options['fields']['contact_id_1']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id_1']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id_1']['relationship'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['fields']['contact_id_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id_1']['link_to_contact'] = 0;
  /* Sort criterion: CRM Core Contact: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'crm_core_contact';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'relation_lb_marketing_contact_crm_core_contact';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: CRM Core Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'relation_lb_marketing_contact_crm_core_contact';
  $handler->display->display_options['filters']['type']['value'] = array(
    'individual' => 'individual',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'LB: User profile';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'contact_id' => array(
      'type' => 'context',
      'context' => 'entity:crm_core_contact.contact-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'CRM Core Contact: Contact ID',
    ),
  );
  $export['lb_user_profile_brands_managers'] = $view;

  $view = new view();
  $view->name = 'lb_user_profile_company';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'User profile: Company';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['relationship'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['label'] = '';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['label'] = '';
  $handler->display->display_options['fields']['contact_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name']['alter']['path'] = 'user';
  $handler->display->display_options['fields']['contact_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contact_name']['element_wrapper_type'] = 'h1';
  $handler->display->display_options['fields']['contact_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['contact_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Contextual filter: CRM Core Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company' => 'company',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'LB: User profile';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'contact_id' => array(
      'type' => 'context',
      'context' => 'user_company.contact-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'CRM Core Contact: Contact ID',
    ),
  );
  $export['lb_user_profile_company'] = $view;

  $view = new view();
  $view->name = 'lb_user_profile_manufacturers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'User profile: Manufacturers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Product Manufacturers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'contact_id' => 'contact_id',
    'nothing' => 'nothing',
    'contact_name' => 'contact_name',
    'field_ao_email_address' => 'field_ao_email_address',
    'field_ao_home_address' => 'field_ao_home_address',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'contact_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'contact_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ao_email_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ao_home_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: CRM Core Contact: Relation: manufactures for (crm_core_contact → crm_core_contact) */
  $handler->display->display_options['relationships']['relation_lb_manufacturer_crm_core_contact']['id'] = 'relation_lb_manufacturer_crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_manufacturer_crm_core_contact']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_manufacturer_crm_core_contact']['field'] = 'relation_lb_manufacturer_crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_manufacturer_crm_core_contact']['relationship'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_manufacturer_crm_core_contact']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_lb_manufacturer_crm_core_contact']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_lb_manufacturer_crm_core_contact']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_lb_manufacturer_crm_core_contact']['entity_deduplication_right'] = 0;
  /* Relationship: CRM Core Contact: Relation: primary contact for (crm_core_contact → crm_core_contact) */
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact_1']['id'] = 'relation_lb_primary_contact_crm_core_contact_1';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact_1']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact_1']['field'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact_1']['relationship'] = 'relation_lb_manufacturer_crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact_1']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact_1']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact_1']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact_1']['entity_deduplication_right'] = 0;
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['relationship'] = 'relation_lb_manufacturer_crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['label'] = '';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['relationship'] = 'relation_lb_manufacturer_crm_core_contact';
  $handler->display->display_options['fields']['contact_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['contact_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name_1']['id'] = 'contact_name_1';
  $handler->display->display_options['fields']['contact_name_1']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name_1']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name_1']['relationship'] = 'relation_lb_primary_contact_crm_core_contact_1';
  $handler->display->display_options['fields']['contact_name_1']['label'] = 'Contact Name';
  $handler->display->display_options['fields']['contact_name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contact_name_1']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['contact_name_1']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Field: Email Address */
  $handler->display->display_options['fields']['field_ao_email_address']['id'] = 'field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['table'] = 'field_data_field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['field'] = 'field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['relationship'] = 'relation_lb_primary_contact_crm_core_contact_1';
  $handler->display->display_options['fields']['field_ao_email_address']['label'] = 'Email';
  /* Field: CRM Core Contact: Declaration of compliance */
  $handler->display->display_options['fields']['field_lb_declaration']['id'] = 'field_lb_declaration';
  $handler->display->display_options['fields']['field_lb_declaration']['table'] = 'field_data_field_lb_declaration';
  $handler->display->display_options['fields']['field_lb_declaration']['field'] = 'field_lb_declaration';
  $handler->display->display_options['fields']['field_lb_declaration']['relationship'] = 'relation_lb_manufacturer_crm_core_contact';
  $handler->display->display_options['fields']['field_lb_declaration']['label'] = 'Declaration';
  $handler->display->display_options['fields']['field_lb_declaration']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lb_declaration']['type'] = 'file_url_plain';
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id_1']['id'] = 'contact_id_1';
  $handler->display->display_options['fields']['contact_id_1']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id_1']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id_1']['relationship'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['fields']['contact_id_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id_1']['link_to_contact'] = 0;
  /* Sort criterion: CRM Core Contact: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'crm_core_contact';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'relation_lb_marketing_contact_crm_core_contact';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: CRM Core Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'relation_lb_manufacturer_crm_core_contact';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company' => 'company',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'LB: User profile';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'contact_id' => array(
      'type' => 'context',
      'context' => 'user_company.contact-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'CRM Core Contact: Contact ID',
    ),
  );
  $export['lb_user_profile_manufacturers'] = $view;

  $view = new view();
  $view->name = 'lb_user_profile_primary_contact';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'User profile: Primary contact';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Primary contact';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: CRM Core Contact: Relation: primary contact for (crm_core_contact → crm_core_contact) */
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['id'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['field'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['entity_deduplication_right'] = 0;
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['relationship'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['relationship'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['fields']['contact_name']['label'] = 'Name';
  $handler->display->display_options['fields']['contact_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['contact_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Field: Primary Telephone */
  $handler->display->display_options['fields']['field_ao_primary_telephone']['id'] = 'field_ao_primary_telephone';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['table'] = 'field_data_field_ao_primary_telephone';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['field'] = 'field_ao_primary_telephone';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['relationship'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ao_primary_telephone']['click_sort_column'] = 'number';
  /* Field: Field: Email Address */
  $handler->display->display_options['fields']['field_ao_email_address']['id'] = 'field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['table'] = 'field_data_field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['field'] = 'field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['relationship'] = 'relation_lb_primary_contact_crm_core_contact';
  /* Field: CRM Core Contact: Home Address */
  $handler->display->display_options['fields']['field_ao_home_address']['id'] = 'field_ao_home_address';
  $handler->display->display_options['fields']['field_ao_home_address']['table'] = 'field_data_field_ao_home_address';
  $handler->display->display_options['fields']['field_ao_home_address']['field'] = 'field_ao_home_address';
  $handler->display->display_options['fields']['field_ao_home_address']['relationship'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['fields']['field_ao_home_address']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ao_home_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_ao_home_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Contextual filter: CRM Core Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['filters']['type']['value'] = array(
    'individual' => 'individual',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'LB: User profile';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'contact_id' => array(
      'type' => 'context',
      'context' => 'user_company.contact-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'CRM Core Contact: Contact ID',
    ),
  );
  $export['lb_user_profile_primary_contact'] = $view;

  $view = new view();
  $view->name = 'lb_user_profile_recent_activities';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'User profile: Recent primary company activities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent Company Actions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_activity_participants_crm_core_activity']['id'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_activity_participants_crm_core_activity']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['reverse_field_activity_participants_crm_core_activity']['field'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_activity_participants_crm_core_activity']['relationship'] = 'relation_lb_primary_contact_crm_core_contact';
  /* Field: Activity Icon */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Activity Icon';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="ao-activity-icon"></div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['relationship'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['label'] = '';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['label'] = '';
  $handler->display->display_options['fields']['contact_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contact_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['contact_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: CRM Core Activity Type: Activity string */
  $handler->display->display_options['fields']['activity_string']['id'] = 'activity_string';
  $handler->display->display_options['fields']['activity_string']['table'] = 'crm_core_activity_type';
  $handler->display->display_options['fields']['activity_string']['field'] = 'activity_string';
  $handler->display->display_options['fields']['activity_string']['relationship'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['fields']['activity_string']['label'] = '';
  $handler->display->display_options['fields']['activity_string']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['activity_string']['alter']['text'] = '[contact_name] [activity_string]';
  $handler->display->display_options['fields']['activity_string']['element_label_colon'] = FALSE;
  /* Field: CRM Core Activity: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'F, d Y';
  /* Sort criterion: CRM Core Activity: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: CRM Core Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company' => 'company',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'LB: User profile';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'contact_id' => array(
      'type' => 'context',
      'context' => 'user_company.contact-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'CRM Core Contact: Contact ID',
    ),
  );
  $export['lb_user_profile_recent_activities'] = $view;

  $view = new view();
  $view->name = 'lb_user_profile_suppliers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'User profile: Suppliers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Ingredient Suppliers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'contact_id' => 'contact_id',
    'nothing' => 'nothing',
    'contact_name' => 'contact_name',
    'field_ao_email_address' => 'field_ao_email_address',
    'field_ao_home_address' => 'field_ao_home_address',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'contact_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'contact_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ao_email_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ao_home_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: CRM Core Contact: Relation: supplies (crm_core_contact → crm_core_contact) */
  $handler->display->display_options['relationships']['relation_lb_supplier_crm_core_contact']['id'] = 'relation_lb_supplier_crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_supplier_crm_core_contact']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_supplier_crm_core_contact']['field'] = 'relation_lb_supplier_crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_supplier_crm_core_contact']['relationship'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_supplier_crm_core_contact']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_lb_supplier_crm_core_contact']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_lb_supplier_crm_core_contact']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_lb_supplier_crm_core_contact']['entity_deduplication_right'] = 0;
  /* Relationship: CRM Core Contact: Relation: primary contact for (crm_core_contact → crm_core_contact) */
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact_1']['id'] = 'relation_lb_primary_contact_crm_core_contact_1';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact_1']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact_1']['field'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact_1']['relationship'] = 'relation_lb_supplier_crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact_1']['required'] = TRUE;
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact_1']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact_1']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact_1']['entity_deduplication_right'] = 0;
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['relationship'] = 'relation_lb_supplier_crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['label'] = '';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['relationship'] = 'relation_lb_supplier_crm_core_contact';
  $handler->display->display_options['fields']['contact_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['contact_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name_1']['id'] = 'contact_name_1';
  $handler->display->display_options['fields']['contact_name_1']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name_1']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name_1']['relationship'] = 'relation_lb_primary_contact_crm_core_contact_1';
  $handler->display->display_options['fields']['contact_name_1']['label'] = 'Contact Name';
  $handler->display->display_options['fields']['contact_name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contact_name_1']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['contact_name_1']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Field: Email Address */
  $handler->display->display_options['fields']['field_ao_email_address']['id'] = 'field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['table'] = 'field_data_field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['field'] = 'field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['relationship'] = 'relation_lb_primary_contact_crm_core_contact_1';
  $handler->display->display_options['fields']['field_ao_email_address']['label'] = 'Email';
  /* Field: CRM Core Contact: Declaration of compliance */
  $handler->display->display_options['fields']['field_lb_declaration']['id'] = 'field_lb_declaration';
  $handler->display->display_options['fields']['field_lb_declaration']['table'] = 'field_data_field_lb_declaration';
  $handler->display->display_options['fields']['field_lb_declaration']['field'] = 'field_lb_declaration';
  $handler->display->display_options['fields']['field_lb_declaration']['relationship'] = 'relation_lb_supplier_crm_core_contact';
  $handler->display->display_options['fields']['field_lb_declaration']['label'] = 'Declaration';
  $handler->display->display_options['fields']['field_lb_declaration']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lb_declaration']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_lb_declaration']['settings'] = array(
    'text' => 'View',
  );
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id_1']['id'] = 'contact_id_1';
  $handler->display->display_options['fields']['contact_id_1']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id_1']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id_1']['relationship'] = 'relation_lb_supplier_crm_core_contact';
  $handler->display->display_options['fields']['contact_id_1']['label'] = '';
  $handler->display->display_options['fields']['contact_id_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contact_id_1']['link_to_contact'] = 0;
  /* Sort criterion: CRM Core Contact: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'crm_core_contact';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'relation_lb_marketing_contact_crm_core_contact';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: CRM Core Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'relation_lb_supplier_crm_core_contact';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company' => 'company',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'LB: User profile';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'contact_id' => array(
      'type' => 'context',
      'context' => 'user_company.contact-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'CRM Core Contact: Contact ID',
    ),
  );
  $export['lb_user_profile_suppliers'] = $view;

  return $export;
}
