<?php
/**
 * @file
 * lb_brands.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function lb_brands_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'lb_brands';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'LB Brands';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Leaping Bunny Approved Brands';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['query_tags'] = array(
    0 => 'lb_brands',
  );
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Brands company */
  $handler->display->display_options['relationships']['reverse_field_lb_brands_crm_core_contact']['id'] = 'reverse_field_lb_brands_crm_core_contact';
  $handler->display->display_options['relationships']['reverse_field_lb_brands_crm_core_contact']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_lb_brands_crm_core_contact']['field'] = 'reverse_field_lb_brands_crm_core_contact';
  $handler->display->display_options['relationships']['reverse_field_lb_brands_crm_core_contact']['ui_name'] = 'Brands company';
  $handler->display->display_options['relationships']['reverse_field_lb_brands_crm_core_contact']['label'] = 'Brands company';
  /* Relationship: Company&#039;s application */
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['id'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['field'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['relationship'] = 'reverse_field_lb_brands_crm_core_contact';
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['ui_name'] = 'Company\'s application';
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['label'] = 'Company\'s application';
  /* Relationship: Application outcome */
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['id'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['table'] = 'field_data_field_lb_application_outcome';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['field'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['relationship'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['ui_name'] = 'Application outcome';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['label'] = 'Application outcome';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Exclusive deals */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Exclusive deals';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'exclusive deals';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'shop/deal/[nid]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Partnership */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['ui_name'] = 'Partnership';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'partnership with Leaping Bunny';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = 'shop/partner/[nid]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_ao_website']['id'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['table'] = 'field_data_field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['field'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['label'] = '';
  $handler->display->display_options['fields']['field_ao_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ao_website']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ao_website']['alter']['text'] = '<div class="website">[field_ao_website]</div>';
  $handler->display->display_options['fields']['field_ao_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ao_website']['click_sort_column'] = 'url';
  /* Field: First letter */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'First letter';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_lb_logo']['id'] = 'field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo']['table'] = 'field_data_field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo']['field'] = 'field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo']['label'] = '';
  $handler->display->display_options['fields']['field_lb_logo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_lb_logo']['alter']['path'] = '[field_ao_website]';
  $handler->display->display_options['fields']['field_lb_logo']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['field_lb_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lb_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lb_logo']['settings'] = array(
    'image_style' => 'brand_logo',
    'image_link' => '',
  );
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_ao_website]';
  $handler->display->display_options['fields']['title']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_lb_description']['id'] = 'field_lb_description';
  $handler->display->display_options['fields']['field_lb_description']['table'] = 'field_data_field_lb_description';
  $handler->display->display_options['fields']['field_lb_description']['field'] = 'field_lb_description';
  $handler->display->display_options['fields']['field_lb_description']['label'] = '';
  $handler->display->display_options['fields']['field_lb_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lb_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lb_description']['alter']['text'] = '<div class="description">
<div class="label">Company description</div>
<div class="description-content">[field_lb_description]</div>
</div>';
  $handler->display->display_options['fields']['field_lb_description']['element_label_colon'] = FALSE;
  /* Field: Content: Cosmetics */
  $handler->display->display_options['fields']['field_lb_cosmetics']['id'] = 'field_lb_cosmetics';
  $handler->display->display_options['fields']['field_lb_cosmetics']['table'] = 'field_data_field_lb_cosmetics';
  $handler->display->display_options['fields']['field_lb_cosmetics']['field'] = 'field_lb_cosmetics';
  $handler->display->display_options['fields']['field_lb_cosmetics']['label'] = '';
  $handler->display->display_options['fields']['field_lb_cosmetics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lb_cosmetics']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lb_cosmetics']['alter']['text'] = '<div class="category-item">[field_lb_cosmetics]</div>';
  $handler->display->display_options['fields']['field_lb_cosmetics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lb_cosmetics']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_lb_cosmetics']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_lb_cosmetics']['separator'] = '';
  /* Field: Content: Animal care */
  $handler->display->display_options['fields']['field_lb_animal_care']['id'] = 'field_lb_animal_care';
  $handler->display->display_options['fields']['field_lb_animal_care']['table'] = 'field_data_field_lb_animal_care';
  $handler->display->display_options['fields']['field_lb_animal_care']['field'] = 'field_lb_animal_care';
  $handler->display->display_options['fields']['field_lb_animal_care']['label'] = '';
  $handler->display->display_options['fields']['field_lb_animal_care']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lb_animal_care']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lb_animal_care']['alter']['text'] = '<div class="category-item">[field_lb_animal_care]</div>';
  $handler->display->display_options['fields']['field_lb_animal_care']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lb_animal_care']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_lb_animal_care']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_lb_animal_care']['separator'] = '';
  /* Field: Content: Personal care */
  $handler->display->display_options['fields']['field_lb_personal_care']['id'] = 'field_lb_personal_care';
  $handler->display->display_options['fields']['field_lb_personal_care']['table'] = 'field_data_field_lb_personal_care';
  $handler->display->display_options['fields']['field_lb_personal_care']['field'] = 'field_lb_personal_care';
  $handler->display->display_options['fields']['field_lb_personal_care']['label'] = '';
  $handler->display->display_options['fields']['field_lb_personal_care']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lb_personal_care']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lb_personal_care']['alter']['text'] = '<div class="category-item">[field_lb_personal_care]</div>';
  $handler->display->display_options['fields']['field_lb_personal_care']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lb_personal_care']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_lb_personal_care']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_lb_personal_care']['separator'] = '';
  /* Field: Content: Household Products */
  $handler->display->display_options['fields']['field_lb_household_products']['id'] = 'field_lb_household_products';
  $handler->display->display_options['fields']['field_lb_household_products']['table'] = 'field_data_field_lb_household_products';
  $handler->display->display_options['fields']['field_lb_household_products']['field'] = 'field_lb_household_products';
  $handler->display->display_options['fields']['field_lb_household_products']['label'] = '';
  $handler->display->display_options['fields']['field_lb_household_products']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lb_household_products']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_lb_household_products']['alter']['text'] = '<div class="category-item">[field_lb_household_products]</div>';
  $handler->display->display_options['fields']['field_lb_household_products']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lb_household_products']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_lb_household_products']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_lb_household_products']['separator'] = '';
  /* Field: Link with tooltip(!!!Render from template!!!) */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Link with tooltip(!!!Render from template!!!)';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="brand-tooltip">
<div class="title">[title]</div>
<div class="content-wrapper">
[field_lb_description]
<div class="categories">
<div class="label">Product categories</div>
[field_lb_cosmetics]
[field_lb_animal_care]
[field_lb_personal_care]
[field_lb_household_products]
</div>
</div>
<div class="brand-footer">
View each brand\'s [nothing_1] and [nothing_2].
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'brand-tooltip-wrapper';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Field: Business Address - Country */
  $handler->display->display_options['fields']['field_ao_business_address_country']['id'] = 'field_ao_business_address_country';
  $handler->display->display_options['fields']['field_ao_business_address_country']['table'] = 'field_data_field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address_country']['field'] = 'field_ao_business_address_country';
  $handler->display->display_options['fields']['field_ao_business_address_country']['relationship'] = 'reverse_field_lb_brands_crm_core_contact';
  $handler->display->display_options['fields']['field_ao_business_address_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ao_business_address_country']['display_name'] = 0;
  /* Field: Company ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['relationship'] = 'reverse_field_lb_brands_crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['ui_name'] = 'Company ID';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: Application activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['relationship'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['ui_name'] = 'Application activity ID';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['activity_id']['separator'] = '';
  /* Field: Application outcome activity ID */
  $handler->display->display_options['fields']['activity_id_1']['id'] = 'activity_id_1';
  $handler->display->display_options['fields']['activity_id_1']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id_1']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id_1']['relationship'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['fields']['activity_id_1']['ui_name'] = 'Application outcome activity ID';
  $handler->display->display_options['fields']['activity_id_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['activity_id_1']['separator'] = '';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: CRM Core Activity: Activity ID */
  $handler->display->display_options['sorts']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['sorts']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['sorts']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['sorts']['activity_id']['relationship'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['sorts']['activity_id']['order'] = 'DESC';
  /* Sort criterion: CRM Core Activity: Activity ID */
  $handler->display->display_options['sorts']['activity_id_1']['id'] = 'activity_id_1';
  $handler->display->display_options['sorts']['activity_id_1']['table'] = 'crm_core_activity';
  $handler->display->display_options['sorts']['activity_id_1']['field'] = 'activity_id';
  $handler->display->display_options['sorts']['activity_id_1']['relationship'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['sorts']['activity_id_1']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'brand' => 'brand',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Animal care (field_lb_animal_care) */
  $handler->display->display_options['filters']['field_lb_animal_care_tid']['id'] = 'field_lb_animal_care_tid';
  $handler->display->display_options['filters']['field_lb_animal_care_tid']['table'] = 'field_data_field_lb_animal_care';
  $handler->display->display_options['filters']['field_lb_animal_care_tid']['field'] = 'field_lb_animal_care_tid';
  $handler->display->display_options['filters']['field_lb_animal_care_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_lb_animal_care_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lb_animal_care_tid']['expose']['operator_id'] = 'field_lb_animal_care_tid_op';
  $handler->display->display_options['filters']['field_lb_animal_care_tid']['expose']['label'] = 'Animal Care';
  $handler->display->display_options['filters']['field_lb_animal_care_tid']['expose']['operator'] = 'field_lb_animal_care_tid_op';
  $handler->display->display_options['filters']['field_lb_animal_care_tid']['expose']['identifier'] = 'field_lb_animal_care_tid';
  $handler->display->display_options['filters']['field_lb_animal_care_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_lb_animal_care_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_lb_animal_care_tid']['vocabulary'] = 'animal_care';
  /* Filter criterion: Content: Cosmetics (field_lb_cosmetics) */
  $handler->display->display_options['filters']['field_lb_cosmetics_tid']['id'] = 'field_lb_cosmetics_tid';
  $handler->display->display_options['filters']['field_lb_cosmetics_tid']['table'] = 'field_data_field_lb_cosmetics';
  $handler->display->display_options['filters']['field_lb_cosmetics_tid']['field'] = 'field_lb_cosmetics_tid';
  $handler->display->display_options['filters']['field_lb_cosmetics_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_lb_cosmetics_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lb_cosmetics_tid']['expose']['operator_id'] = 'field_lb_cosmetics_tid_op';
  $handler->display->display_options['filters']['field_lb_cosmetics_tid']['expose']['label'] = 'Cosmetics';
  $handler->display->display_options['filters']['field_lb_cosmetics_tid']['expose']['operator'] = 'field_lb_cosmetics_tid_op';
  $handler->display->display_options['filters']['field_lb_cosmetics_tid']['expose']['identifier'] = 'field_lb_cosmetics_tid';
  $handler->display->display_options['filters']['field_lb_cosmetics_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_lb_cosmetics_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_lb_cosmetics_tid']['vocabulary'] = 'cosmetics';
  /* Filter criterion: Content: Household Products (field_lb_household_products) */
  $handler->display->display_options['filters']['field_lb_household_products_tid']['id'] = 'field_lb_household_products_tid';
  $handler->display->display_options['filters']['field_lb_household_products_tid']['table'] = 'field_data_field_lb_household_products';
  $handler->display->display_options['filters']['field_lb_household_products_tid']['field'] = 'field_lb_household_products_tid';
  $handler->display->display_options['filters']['field_lb_household_products_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_lb_household_products_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lb_household_products_tid']['expose']['operator_id'] = 'field_lb_household_products_tid_op';
  $handler->display->display_options['filters']['field_lb_household_products_tid']['expose']['label'] = 'Household';
  $handler->display->display_options['filters']['field_lb_household_products_tid']['expose']['operator'] = 'field_lb_household_products_tid_op';
  $handler->display->display_options['filters']['field_lb_household_products_tid']['expose']['identifier'] = 'field_lb_household_products_tid';
  $handler->display->display_options['filters']['field_lb_household_products_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_lb_household_products_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_lb_household_products_tid']['vocabulary'] = 'household_products';
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'lb_application' => 'lb_application',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type_2']['id'] = 'type_2';
  $handler->display->display_options['filters']['type_2']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type_2']['field'] = 'type';
  $handler->display->display_options['filters']['type_2']['relationship'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['filters']['type_2']['operator'] = 'empty';
  $handler->display->display_options['filters']['type_2']['group'] = 2;
  /* Filter criterion: Content: Personal care (field_lb_personal_care) */
  $handler->display->display_options['filters']['field_lb_personal_care_tid']['id'] = 'field_lb_personal_care_tid';
  $handler->display->display_options['filters']['field_lb_personal_care_tid']['table'] = 'field_data_field_lb_personal_care';
  $handler->display->display_options['filters']['field_lb_personal_care_tid']['field'] = 'field_lb_personal_care_tid';
  $handler->display->display_options['filters']['field_lb_personal_care_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lb_personal_care_tid']['expose']['operator_id'] = 'field_lb_personal_care_tid_op';
  $handler->display->display_options['filters']['field_lb_personal_care_tid']['expose']['label'] = 'Personal care';
  $handler->display->display_options['filters']['field_lb_personal_care_tid']['expose']['operator'] = 'field_lb_personal_care_tid_op';
  $handler->display->display_options['filters']['field_lb_personal_care_tid']['expose']['identifier'] = 'field_lb_personal_care_tid';
  $handler->display->display_options['filters']['field_lb_personal_care_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_lb_personal_care_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_lb_personal_care_tid']['vocabulary'] = 'personal_care';

  /* Display: Grid */
  $handler = $view->new_display('page', 'Grid', 'page');
  $handler->display->display_options['path'] = 'guide/brands';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Brands A-Z';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: List */
  $handler = $view->new_display('page', 'List', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: First letter */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['ui_name'] = 'First letter';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Field: Business Address - Country */
  $handler->display->display_options['fields']['field_ao_business_address_country']['id'] = 'field_ao_business_address_country';
  $handler->display->display_options['fields']['field_ao_business_address_country']['table'] = 'field_data_field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address_country']['field'] = 'field_ao_business_address_country';
  $handler->display->display_options['fields']['field_ao_business_address_country']['relationship'] = 'reverse_field_lb_brands_crm_core_contact';
  $handler->display->display_options['fields']['field_ao_business_address_country']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ao_business_address_country']['display_name'] = 0;
  $handler->display->display_options['path'] = 'guide/brands/list';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Brands A-Z';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['lb_brands'] = $view;

  return $export;
}
