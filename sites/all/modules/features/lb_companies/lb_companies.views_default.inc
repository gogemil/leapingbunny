<?php
/**
 * @file
 * lb_companies.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function lb_companies_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'lb_companies';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'LB companies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Leaping Bunny Approved Brands';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'contact_name_1',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'contact_name' => 'contact_name',
    'nothing' => 'nothing',
  );
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['label'] = '';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_ao_website']['id'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['table'] = 'field_data_field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['field'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['label'] = '';
  $handler->display->display_options['fields']['field_ao_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ao_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ao_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ao_website']['type'] = 'link_absolute';
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['label'] = '';
  $handler->display->display_options['fields']['contact_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name']['alter']['path'] = '[field_ao_website]';
  $handler->display->display_options['fields']['contact_name']['alter']['alt'] = 'asdf|text';
  $handler->display->display_options['fields']['contact_name']['alter']['rel'] = 'http://example.com';
  $handler->display->display_options['fields']['contact_name']['alter']['link_class'] = 'cluetip-title';
  $handler->display->display_options['fields']['contact_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contact_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['contact_name']['settings'] = array(
    'format' => 'family',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Company name (first letter) */
  $handler->display->display_options['fields']['contact_name_1']['id'] = 'contact_name_1';
  $handler->display->display_options['fields']['contact_name_1']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name_1']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name_1']['ui_name'] = 'Company name (first letter)';
  $handler->display->display_options['fields']['contact_name_1']['label'] = '';
  $handler->display->display_options['fields']['contact_name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_name_1']['alter']['max_length'] = '1';
  $handler->display->display_options['fields']['contact_name_1']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['contact_name_1']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['contact_name_1']['alter']['trim'] = TRUE;
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
  /* Field: Quick peak link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Quick peak link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '(info)';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'crm-core/contact/[contact_id]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Name Components: Family */
  $handler->display->display_options['sorts']['contact_name_family']['id'] = 'contact_name_family';
  $handler->display->display_options['sorts']['contact_name_family']['table'] = 'field_data_contact_name';
  $handler->display->display_options['sorts']['contact_name_family']['field'] = 'contact_name_family';
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company' => 'company',
  );
  /* Filter criterion: CRM Core Contact: Company */
  $handler->display->display_options['filters']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['filters']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['contact_name']['expose']['operator_id'] = 'contact_name_op';
  $handler->display->display_options['filters']['contact_name']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['contact_name']['expose']['operator'] = 'contact_name_op';
  $handler->display->display_options['filters']['contact_name']['expose']['identifier'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Name Components: Family */
  $handler->display->display_options['filters']['contact_name_family']['id'] = 'contact_name_family';
  $handler->display->display_options['filters']['contact_name_family']['table'] = 'field_data_contact_name';
  $handler->display->display_options['filters']['contact_name_family']['field'] = 'contact_name_family';
  $handler->display->display_options['filters']['contact_name_family']['exposed'] = TRUE;
  $handler->display->display_options['filters']['contact_name_family']['expose']['operator_id'] = 'contact_name_family_op';
  $handler->display->display_options['filters']['contact_name_family']['expose']['label'] = 'Family';
  $handler->display->display_options['filters']['contact_name_family']['expose']['operator'] = 'contact_name_family_op';
  $handler->display->display_options['filters']['contact_name_family']['expose']['identifier'] = 'contact_name_family';
  $handler->display->display_options['filters']['contact_name_family']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['contact_name_family']['group_info']['label'] = 'Company Name';
  $handler->display->display_options['filters']['contact_name_family']['group_info']['identifier'] = 'contact_name_family';
  $handler->display->display_options['filters']['contact_name_family']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['contact_name_family']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'A',
      'operator' => 'starts',
      'value' => 'A',
    ),
    2 => array(
      'title' => 'B',
      'operator' => 'starts',
      'value' => 'B',
    ),
    3 => array(
      'title' => 'C',
      'operator' => 'starts',
      'value' => 'C',
    ),
    4 => array(
      'title' => 'D',
      'operator' => 'starts',
      'value' => 'D',
    ),
    5 => array(
      'title' => 'E',
      'operator' => 'starts',
      'value' => 'E',
    ),
    6 => array(
      'title' => 'F',
      'operator' => 'starts',
      'value' => 'F',
    ),
    7 => array(
      'title' => 'G',
      'operator' => 'starts',
      'value' => 'G',
    ),
    8 => array(
      'title' => 'H',
      'operator' => 'starts',
      'value' => 'H',
    ),
    9 => array(
      'title' => 'I',
      'operator' => 'starts',
      'value' => 'I',
    ),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'guide/companies';
  $handler->display->display_options['menu']['title'] = 'Companies A-Z';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['lb_companies'] = $view;

  $view = new view();
  $view->name = 'lb_companies_report';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'Companies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Companies';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'contact_id' => 'contact_id',
    'contact_name' => 'contact_name',
    'field_ao_business_address' => 'field_ao_business_address',
    'field_ao_business_address_locality' => 'field_ao_business_address_locality',
    'field_ao_business_address_administrative_area' => 'field_ao_business_address_administrative_area',
    'field_ao_business_address_postal_code' => 'field_ao_business_address_postal_code',
    'field_ao_primary_telephone' => 'field_ao_primary_telephone',
    'field_ao_email_address' => 'field_ao_email_address',
    'field_ao_website' => 'field_ao_website',
    'field_lb_parent_company' => 'field_lb_parent_company',
    'field_lb_cutoff_date' => 'field_lb_cutoff_date',
    'field_lb_brands' => 'field_lb_brands',
    'field_lb_logo_user' => 'field_lb_logo_user',
    'field_lb_upc' => 'field_lb_upc',
    'field_lb_facebook' => 'field_lb_facebook',
    'field_lb_twitter' => 'field_lb_twitter',
    'field_lb_instagram' => 'field_lb_instagram',
    'field_lb_pinterest' => 'field_lb_pinterest',
    'field_lb_brand_manager' => 'field_lb_brand_manager',
    'field_ao_home_address' => 'field_ao_home_address',
    'field_ao_home_address_administrative_area' => 'field_ao_home_address_administrative_area',
    'field_ao_home_address_locality' => 'field_ao_home_address_locality',
    'field_ao_home_address_postal_code' => 'field_ao_home_address_postal_code',
    'field_ao_email_address_1' => 'field_ao_email_address_1',
    'field_ao_primary_telephone_1' => 'field_ao_primary_telephone_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'contact_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'contact_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ao_business_address' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ao_business_address_locality' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ao_business_address_administrative_area' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ao_business_address_postal_code' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ao_primary_telephone' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ao_email_address' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ao_website' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lb_parent_company' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lb_cutoff_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lb_brands' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lb_logo_user' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lb_upc' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lb_facebook' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lb_twitter' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lb_instagram' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lb_pinterest' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lb_brand_manager' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ao_home_address' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ao_home_address_administrative_area' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ao_home_address_locality' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ao_home_address_postal_code' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ao_email_address_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ao_primary_telephone_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['empty_table'] = TRUE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="results-summary">Displaying @start - @end of @total</div>';
  /* Header: Export button */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['ui_name'] = 'Export button';
  $handler->display->display_options['header']['area']['content'] = '<div class="detail-buttons">
<div class="btn btn-orange btn-simple"><a href="crm-core/reports/lb_companies/all/export.csv">Export to CSV</a></div>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'No companies were found.';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_brands_target_id']['id'] = 'field_lb_brands_target_id';
  $handler->display->display_options['relationships']['field_lb_brands_target_id']['table'] = 'field_data_field_lb_brands';
  $handler->display->display_options['relationships']['field_lb_brands_target_id']['field'] = 'field_lb_brands_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_brand_manager_target_id']['id'] = 'field_lb_brand_manager_target_id';
  $handler->display->display_options['relationships']['field_lb_brand_manager_target_id']['table'] = 'field_data_field_lb_brand_manager';
  $handler->display->display_options['relationships']['field_lb_brand_manager_target_id']['field'] = 'field_lb_brand_manager_target_id';
  $handler->display->display_options['relationships']['field_lb_brand_manager_target_id']['relationship'] = 'field_lb_brands_target_id';
  /* Field: Contact ID - excluded */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['ui_name'] = 'Contact ID - excluded';
  $handler->display->display_options['fields']['contact_id']['label'] = '';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['label'] = 'Name';
  $handler->display->display_options['fields']['contact_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name']['alter']['path'] = 'crm-core/contact/[contact_id]';
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
  /* Field: Field: Business Address */
  $handler->display->display_options['fields']['field_ao_business_address']['id'] = 'field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['table'] = 'field_data_field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['field'] = 'field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_ao_business_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Field: Business Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_ao_business_address_locality']['id'] = 'field_ao_business_address_locality';
  $handler->display->display_options['fields']['field_ao_business_address_locality']['table'] = 'field_data_field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address_locality']['field'] = 'field_ao_business_address_locality';
  $handler->display->display_options['fields']['field_ao_business_address_locality']['label'] = 'City';
  /* Field: Field: Business Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['field_ao_business_address_administrative_area']['id'] = 'field_ao_business_address_administrative_area';
  $handler->display->display_options['fields']['field_ao_business_address_administrative_area']['table'] = 'field_data_field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address_administrative_area']['field'] = 'field_ao_business_address_administrative_area';
  $handler->display->display_options['fields']['field_ao_business_address_administrative_area']['label'] = 'State';
  /* Field: Field: Business Address - Postal code */
  $handler->display->display_options['fields']['field_ao_business_address_postal_code']['id'] = 'field_ao_business_address_postal_code';
  $handler->display->display_options['fields']['field_ao_business_address_postal_code']['table'] = 'field_data_field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address_postal_code']['field'] = 'field_ao_business_address_postal_code';
  $handler->display->display_options['fields']['field_ao_business_address_postal_code']['label'] = 'Zip';
  /* Field: Field: Primary Telephone */
  $handler->display->display_options['fields']['field_ao_primary_telephone']['id'] = 'field_ao_primary_telephone';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['table'] = 'field_data_field_ao_primary_telephone';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['field'] = 'field_ao_primary_telephone';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['click_sort_column'] = 'number';
  /* Field: CRM Core Contact: Consumer email address */
  $handler->display->display_options['fields']['field_lb_consumer_email']['id'] = 'field_lb_consumer_email';
  $handler->display->display_options['fields']['field_lb_consumer_email']['table'] = 'field_data_field_lb_consumer_email';
  $handler->display->display_options['fields']['field_lb_consumer_email']['field'] = 'field_lb_consumer_email';
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_ao_website']['id'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['table'] = 'field_data_field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['field'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['click_sort_column'] = 'url';
  /* Field: CRM Core Contact: Parent company */
  $handler->display->display_options['fields']['field_lb_parent_company']['id'] = 'field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['table'] = 'field_data_field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['field'] = 'field_lb_parent_company';
  /* Field: CRM Core Contact: Fixed Cut-off Date */
  $handler->display->display_options['fields']['field_lb_cutoff_date']['id'] = 'field_lb_cutoff_date';
  $handler->display->display_options['fields']['field_lb_cutoff_date']['table'] = 'field_data_field_lb_cutoff_date';
  $handler->display->display_options['fields']['field_lb_cutoff_date']['field'] = 'field_lb_cutoff_date';
  $handler->display->display_options['fields']['field_lb_cutoff_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: CRM Core Contact: Brands */
  $handler->display->display_options['fields']['field_lb_brands']['id'] = 'field_lb_brands';
  $handler->display->display_options['fields']['field_lb_brands']['table'] = 'field_data_field_lb_brands';
  $handler->display->display_options['fields']['field_lb_brands']['field'] = 'field_lb_brands';
  $handler->display->display_options['fields']['field_lb_brands']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_lb_brands']['delta_offset'] = '0';
  /* Field: CRM Core Contact: Logo user */
  $handler->display->display_options['fields']['field_lb_logo_user']['id'] = 'field_lb_logo_user';
  $handler->display->display_options['fields']['field_lb_logo_user']['table'] = 'field_data_field_lb_logo_user';
  $handler->display->display_options['fields']['field_lb_logo_user']['field'] = 'field_lb_logo_user';
  /* Field: Content: Facebook */
  $handler->display->display_options['fields']['field_lb_facebook']['id'] = 'field_lb_facebook';
  $handler->display->display_options['fields']['field_lb_facebook']['table'] = 'field_data_field_lb_facebook';
  $handler->display->display_options['fields']['field_lb_facebook']['field'] = 'field_lb_facebook';
  $handler->display->display_options['fields']['field_lb_facebook']['relationship'] = 'field_lb_brands_target_id';
  /* Field: Content: Twitter */
  $handler->display->display_options['fields']['field_lb_twitter']['id'] = 'field_lb_twitter';
  $handler->display->display_options['fields']['field_lb_twitter']['table'] = 'field_data_field_lb_twitter';
  $handler->display->display_options['fields']['field_lb_twitter']['field'] = 'field_lb_twitter';
  $handler->display->display_options['fields']['field_lb_twitter']['relationship'] = 'field_lb_brands_target_id';
  /* Field: Content: Instagram */
  $handler->display->display_options['fields']['field_lb_instagram']['id'] = 'field_lb_instagram';
  $handler->display->display_options['fields']['field_lb_instagram']['table'] = 'field_data_field_lb_instagram';
  $handler->display->display_options['fields']['field_lb_instagram']['field'] = 'field_lb_instagram';
  $handler->display->display_options['fields']['field_lb_instagram']['relationship'] = 'field_lb_brands_target_id';
  /* Field: Content: Pinterest */
  $handler->display->display_options['fields']['field_lb_pinterest']['id'] = 'field_lb_pinterest';
  $handler->display->display_options['fields']['field_lb_pinterest']['table'] = 'field_data_field_lb_pinterest';
  $handler->display->display_options['fields']['field_lb_pinterest']['field'] = 'field_lb_pinterest';
  $handler->display->display_options['fields']['field_lb_pinterest']['relationship'] = 'field_lb_brands_target_id';
  /* Field: Content: Brand manager */
  $handler->display->display_options['fields']['field_lb_brand_manager']['id'] = 'field_lb_brand_manager';
  $handler->display->display_options['fields']['field_lb_brand_manager']['table'] = 'field_data_field_lb_brand_manager';
  $handler->display->display_options['fields']['field_lb_brand_manager']['field'] = 'field_lb_brand_manager';
  $handler->display->display_options['fields']['field_lb_brand_manager']['relationship'] = 'field_lb_brands_target_id';
  $handler->display->display_options['fields']['field_lb_brand_manager']['settings'] = array(
    'link' => 0,
  );
  /* Field: CRM Core Contact: Home Address */
  $handler->display->display_options['fields']['field_ao_home_address']['id'] = 'field_ao_home_address';
  $handler->display->display_options['fields']['field_ao_home_address']['table'] = 'field_data_field_ao_home_address';
  $handler->display->display_options['fields']['field_ao_home_address']['field'] = 'field_ao_home_address';
  $handler->display->display_options['fields']['field_ao_home_address']['relationship'] = 'field_lb_brand_manager_target_id';
  $handler->display->display_options['fields']['field_ao_home_address']['label'] = 'BM Address';
  $handler->display->display_options['fields']['field_ao_home_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_ao_home_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: CRM Core Contact: Home Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['field_ao_home_address_administrative_area']['id'] = 'field_ao_home_address_administrative_area';
  $handler->display->display_options['fields']['field_ao_home_address_administrative_area']['table'] = 'field_data_field_ao_home_address';
  $handler->display->display_options['fields']['field_ao_home_address_administrative_area']['field'] = 'field_ao_home_address_administrative_area';
  $handler->display->display_options['fields']['field_ao_home_address_administrative_area']['relationship'] = 'field_lb_brand_manager_target_id';
  $handler->display->display_options['fields']['field_ao_home_address_administrative_area']['label'] = 'BM State';
  /* Field: CRM Core Contact: Home Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_ao_home_address_locality']['id'] = 'field_ao_home_address_locality';
  $handler->display->display_options['fields']['field_ao_home_address_locality']['table'] = 'field_data_field_ao_home_address';
  $handler->display->display_options['fields']['field_ao_home_address_locality']['field'] = 'field_ao_home_address_locality';
  $handler->display->display_options['fields']['field_ao_home_address_locality']['relationship'] = 'field_lb_brand_manager_target_id';
  $handler->display->display_options['fields']['field_ao_home_address_locality']['label'] = 'BM City';
  /* Field: CRM Core Contact: Home Address - Postal code */
  $handler->display->display_options['fields']['field_ao_home_address_postal_code']['id'] = 'field_ao_home_address_postal_code';
  $handler->display->display_options['fields']['field_ao_home_address_postal_code']['table'] = 'field_data_field_ao_home_address';
  $handler->display->display_options['fields']['field_ao_home_address_postal_code']['field'] = 'field_ao_home_address_postal_code';
  $handler->display->display_options['fields']['field_ao_home_address_postal_code']['relationship'] = 'field_lb_brand_manager_target_id';
  $handler->display->display_options['fields']['field_ao_home_address_postal_code']['label'] = 'BM Zip';
  /* Field: Field: Primary Telephone */
  $handler->display->display_options['fields']['field_ao_primary_telephone_1']['id'] = 'field_ao_primary_telephone_1';
  $handler->display->display_options['fields']['field_ao_primary_telephone_1']['table'] = 'field_data_field_ao_primary_telephone';
  $handler->display->display_options['fields']['field_ao_primary_telephone_1']['field'] = 'field_ao_primary_telephone';
  $handler->display->display_options['fields']['field_ao_primary_telephone_1']['relationship'] = 'field_lb_brand_manager_target_id';
  $handler->display->display_options['fields']['field_ao_primary_telephone_1']['label'] = 'BM Phone';
  $handler->display->display_options['fields']['field_ao_primary_telephone_1']['click_sort_column'] = 'number';
  /* Field: Field: Email Address */
  $handler->display->display_options['fields']['field_ao_email_address_1']['id'] = 'field_ao_email_address_1';
  $handler->display->display_options['fields']['field_ao_email_address_1']['table'] = 'field_data_field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address_1']['field'] = 'field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address_1']['relationship'] = 'field_lb_brand_manager_target_id';
  $handler->display->display_options['fields']['field_ao_email_address_1']['label'] = 'BM Email';
  /* Field: Content: UPC Prefix */
  $handler->display->display_options['fields']['field_lb_upc']['id'] = 'field_lb_upc';
  $handler->display->display_options['fields']['field_lb_upc']['table'] = 'field_data_field_lb_upc';
  $handler->display->display_options['fields']['field_lb_upc']['field'] = 'field_lb_upc';
  $handler->display->display_options['fields']['field_lb_upc']['relationship'] = 'field_lb_brands_target_id';
  $handler->display->display_options['fields']['field_lb_upc']['label'] = 'UPC Code';
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company' => 'company',
  );
  /* Filter criterion: CRM Core Contact: Company */
  $handler->display->display_options['filters']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['filters']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['contact_name']['expose']['operator_id'] = 'contact_name_op';
  $handler->display->display_options['filters']['contact_name']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['contact_name']['expose']['operator'] = 'contact_name_op';
  $handler->display->display_options['filters']['contact_name']['expose']['identifier'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['path'] = 'crm-core/reports/lb_companies/all';
  $handler->display->display_options['menu']['title'] = 'Profiles';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Export */
  $handler = $view->new_display('views_data_export', 'Export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'crm-core/reports/lb_companies/all/export.csv';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['return_path'] = 'crm-core/reports/lb_companies/all';
  $handler->display->display_options['segment_size'] = '100';
  $export['lb_companies_report'] = $view;

  $view = new view();
  $view->name = 'lb_company_activity_feed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'LB company activity feed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Activity feed';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'label' => 'label',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'label' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['id'] = 'field_activity_participants_target_id';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['table'] = 'field_data_field_activity_participants';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['field'] = 'field_activity_participants_target_id';
  /* Field: CRM Core Activity: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: CRM Core Activity: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'F j, Y';
  /* Sort criterion: CRM Core Activity: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: CRM Core Activity: Activity ID */
  $handler->display->display_options['sorts']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['sorts']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['sorts']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['sorts']['activity_id']['order'] = 'DESC';
  /* Contextual filter: CRM Core Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['relationship'] = 'field_activity_participants_target_id';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'contact_id' => array(
      'type' => 'panel',
      'context' => 'entity:crm_core_activity.activity-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'CRM Core Contact: Contact ID',
    ),
  );
  $export['lb_company_activity_feed'] = $view;

  $view = new view();
  $view->name = 'lb_company_application_status';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'LB company application status';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Application status';
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
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['id'] = 'field_activity_participants_target_id';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['table'] = 'field_data_field_activity_participants';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['field'] = 'field_activity_participants_target_id';
  /* Field: CRM Core Activity Type: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'crm_core_activity_type';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Sort criterion: CRM Core Activity: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: CRM Core Activity: Activity ID */
  $handler->display->display_options['sorts']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['sorts']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['sorts']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['sorts']['activity_id']['order'] = 'DESC';
  /* Contextual filter: CRM Core Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['relationship'] = 'field_activity_participants_target_id';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lb_application_request' => 'lb_application_request',
    'lb_application_request_approved' => 'lb_application_request_approved',
    'lb_application_request_denied' => 'lb_application_request_denied',
    'lb_company_application_approved' => 'lb_company_application_approved',
    'lb_company_application_initiated' => 'lb_company_application_initiated',
    'lb_company_application_rejected' => 'lb_company_application_rejected',
    'lb_company_application_submitted' => 'lb_company_application_submitted',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'contact_id' => array(
      'type' => 'panel',
      'context' => 'entity:crm_core_activity.activity-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'CRM Core Contact: Contact ID',
    ),
  );
  $export['lb_company_application_status'] = $view;

  $view = new view();
  $view->name = 'lb_company_marketing_contact';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'LB company marketing contact';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Marketing Contact';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: CRM Core Contact: Relation: brand manager for (crm_core_contact → crm_core_contact) */
  $handler->display->display_options['relationships']['relation_lb_marketing_contact_crm_core_contact']['id'] = 'relation_lb_marketing_contact_crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_marketing_contact_crm_core_contact']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_marketing_contact_crm_core_contact']['field'] = 'relation_lb_marketing_contact_crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_marketing_contact_crm_core_contact']['label'] = 'Marketing contact';
  $handler->display->display_options['relationships']['relation_lb_marketing_contact_crm_core_contact']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_lb_marketing_contact_crm_core_contact']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_lb_marketing_contact_crm_core_contact']['entity_deduplication_right'] = 0;
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['label'] = '';
  $handler->display->display_options['fields']['contact_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name']['alter']['path'] = 'crm-core-contact/[contact_id]';
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
  /* Field: Field: Business Address */
  $handler->display->display_options['fields']['field_ao_business_address']['id'] = 'field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['table'] = 'field_data_field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['field'] = 'field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ao_business_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_ao_business_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Field: Email Address */
  $handler->display->display_options['fields']['field_ao_email_address']['id'] = 'field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['table'] = 'field_data_field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['field'] = 'field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['hide_empty'] = TRUE;
  /* Field: Field: Primary Telephone */
  $handler->display->display_options['fields']['field_ao_primary_telephone']['id'] = 'field_ao_primary_telephone';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['table'] = 'field_data_field_ao_primary_telephone';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['field'] = 'field_ao_primary_telephone';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ao_primary_telephone']['click_sort_column'] = 'number';
  /* Contextual filter: CRM Core Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['relationship'] = 'relation_lb_marketing_contact_crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'individual' => 'individual',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'contact_id' => array(
      'type' => 'panel',
      'context' => 'entity:crm_core_activity.activity-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'CRM Core Contact: Contact ID',
    ),
  );
  $export['lb_company_marketing_contact'] = $view;

  $view = new view();
  $view->name = 'lb_company_page_brands_managers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'Company page: Brands managers';
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
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit Brand Manager';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'crm-core/contact/[contact_id]/edit';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['relationship'] = 'relation_lb_marketing_contact_crm_core_contact';
  $handler->display->display_options['fields']['contact_name']['label'] = 'Name';
  $handler->display->display_options['fields']['contact_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name']['alter']['path'] = 'crm-core/contact/[contact_id]';
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
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'not found';
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
  $handler->display->display_options['pane_category']['name'] = 'LB: Company page';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'contact_id' => array(
      'type' => 'panel',
      'context' => 'entity:crm_core_activity.activity-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'CRM Core Contact: Contact ID',
    ),
  );
  $export['lb_company_page_brands_managers'] = $view;

  $view = new view();
  $view->name = 'lb_company_page_manufacturers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'Company page: Manufacturers';
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
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['id'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['field'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['required'] = TRUE;
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
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Declaration';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'crm-core/activity';
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id_1']['id'] = 'contact_id_1';
  $handler->display->display_options['fields']['contact_id_1']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id_1']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id_1']['link_to_contact'] = 0;
  /* Field: CRM Core Contact: Declaration of compliance */
  $handler->display->display_options['fields']['field_lb_declaration']['id'] = 'field_lb_declaration';
  $handler->display->display_options['fields']['field_lb_declaration']['table'] = 'field_data_field_lb_declaration';
  $handler->display->display_options['fields']['field_lb_declaration']['field'] = 'field_lb_declaration';
  $handler->display->display_options['fields']['field_lb_declaration']['relationship'] = 'relation_lb_manufacturer_crm_core_contact';
  $handler->display->display_options['fields']['field_lb_declaration']['label'] = 'Declaration';
  $handler->display->display_options['fields']['field_lb_declaration']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lb_declaration']['type'] = 'file_url_plain';
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
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'not found';
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
  /* Filter criterion: CRM Core Contact: Contractor type (field_lb_contractor_type) */
  $handler->display->display_options['filters']['field_lb_contractor_type_value']['id'] = 'field_lb_contractor_type_value';
  $handler->display->display_options['filters']['field_lb_contractor_type_value']['table'] = 'field_data_field_lb_contractor_type';
  $handler->display->display_options['filters']['field_lb_contractor_type_value']['field'] = 'field_lb_contractor_type_value';
  $handler->display->display_options['filters']['field_lb_contractor_type_value']['operator'] = 'empty';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'LB: Company page';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'contact_id' => array(
      'type' => 'panel',
      'context' => 'entity:crm_core_activity.activity-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'CRM Core Contact: Contact ID',
    ),
  );
  $export['lb_company_page_manufacturers'] = $view;

  $view = new view();
  $view->name = 'lb_company_page_primary_contact';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'Company page: Primary contact';
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
  $handler->display->display_options['fields']['contact_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name']['alter']['path'] = 'crm-core/contact/[contact_id]';
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
    'individual' => 'individual',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'LB: Company page';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'contact_id' => array(
      'type' => 'panel',
      'context' => 'entity:crm_core_activity.activity-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'CRM Core Contact: Contact ID',
    ),
  );
  $export['lb_company_page_primary_contact'] = $view;

  $view = new view();
  $view->name = 'lb_company_page_recent_company_activities';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'Company page: Recent company activities';
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
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_activity_participants_crm_core_activity']['id'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_activity_participants_crm_core_activity']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['reverse_field_activity_participants_crm_core_activity']['field'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_activity_participants_crm_core_activity']['relationship'] = 'relation_lb_primary_contact_crm_core_contact';
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
  $handler->display->display_options['fields']['contact_name']['relationship'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['fields']['contact_name']['label'] = '';
  $handler->display->display_options['fields']['contact_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name']['alter']['path'] = 'crm-core/contact/[contact_id]';
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
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'F, d Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: CRM Core Activity: Date */
  $handler->display->display_options['fields']['field_activity_date']['id'] = 'field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['table'] = 'field_data_field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['field'] = 'field_activity_date';
  $handler->display->display_options['fields']['field_activity_date']['relationship'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['fields']['field_activity_date']['label'] = '';
  $handler->display->display_options['fields']['field_activity_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_activity_date']['settings'] = array(
    'format_type' => 'month_day_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: CRM Core Activity: Activity ID */
  $handler->display->display_options['sorts']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['sorts']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['sorts']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['sorts']['activity_id']['relationship'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['sorts']['activity_id']['order'] = 'DESC';
  /* Sort criterion: CRM Core Activity: Date (field_activity_date) */
  $handler->display->display_options['sorts']['field_activity_date_value']['id'] = 'field_activity_date_value';
  $handler->display->display_options['sorts']['field_activity_date_value']['table'] = 'field_data_field_activity_date';
  $handler->display->display_options['sorts']['field_activity_date_value']['field'] = 'field_activity_date_value';
  $handler->display->display_options['sorts']['field_activity_date_value']['relationship'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['sorts']['field_activity_date_value']['order'] = 'DESC';
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
  $handler->display->display_options['pane_category']['name'] = 'LB: Company page';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'contact_id' => array(
      'type' => 'panel',
      'context' => 'entity:crm_core_activity.activity-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'CRM Core Contact: Contact ID',
    ),
  );
  $export['lb_company_page_recent_company_activities'] = $view;

  $view = new view();
  $view->name = 'lb_company_page_suppliers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'Company page: Suppliers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Ingredient Suppliers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
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
  $handler->display->display_options['empty']['area']['content'] = 'No results.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: CRM Core Contact: Relation: supplies (crm_core_contact → crm_core_contact) */
  $handler->display->display_options['relationships']['relation_lb_supplier_crm_core_contact']['id'] = 'relation_lb_supplier_crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_supplier_crm_core_contact']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_supplier_crm_core_contact']['field'] = 'relation_lb_supplier_crm_core_contact';
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
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['id'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['field'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['required'] = TRUE;
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
  $handler->display->display_options['fields']['contact_name']['label'] = 'Supplier';
  $handler->display->display_options['fields']['contact_name']['alter']['path'] = 'crm-core/contact/[contact_id]';
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
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Declaration';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'crm-core/activity';
  /* Field: CRM Core Contact: Declaration of compliance */
  $handler->display->display_options['fields']['field_lb_declaration']['id'] = 'field_lb_declaration';
  $handler->display->display_options['fields']['field_lb_declaration']['table'] = 'field_data_field_lb_declaration';
  $handler->display->display_options['fields']['field_lb_declaration']['field'] = 'field_lb_declaration';
  $handler->display->display_options['fields']['field_lb_declaration']['relationship'] = 'relation_lb_supplier_crm_core_contact';
  $handler->display->display_options['fields']['field_lb_declaration']['label'] = 'Declaration';
  $handler->display->display_options['fields']['field_lb_declaration']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lb_declaration']['type'] = 'file_url_plain';
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
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'not found';
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
  /* Filter criterion: CRM Core Contact: Contractor type (field_lb_contractor_type) */
  $handler->display->display_options['filters']['field_lb_contractor_type_value']['id'] = 'field_lb_contractor_type_value';
  $handler->display->display_options['filters']['field_lb_contractor_type_value']['table'] = 'field_data_field_lb_contractor_type';
  $handler->display->display_options['filters']['field_lb_contractor_type_value']['field'] = 'field_lb_contractor_type_value';
  $handler->display->display_options['filters']['field_lb_contractor_type_value']['operator'] = 'empty';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_category']['name'] = 'LB: Company page';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'contact_id' => array(
      'type' => 'panel',
      'context' => 'entity:crm_core_activity.activity-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'CRM Core Contact: Contact ID',
    ),
  );
  $export['lb_company_page_suppliers'] = $view;

  $view = new view();
  $view->name = 'lb_company_primary_contact';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'LB company primary contact';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Company Affiliation';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: CRM Core Contact: Relation: primary contact for (crm_core_contact → crm_core_contact) */
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['id'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['field'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['label'] = 'Primary contact';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['entity_deduplication_right'] = 0;
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['label'] = '';
  $handler->display->display_options['fields']['contact_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name']['alter']['path'] = 'crm-core-contact/[contact_id]';
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
  /* Field: Field: Business Address */
  $handler->display->display_options['fields']['field_ao_business_address']['id'] = 'field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['table'] = 'field_data_field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['field'] = 'field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_ao_business_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Field: Email Address */
  $handler->display->display_options['fields']['field_ao_email_address']['id'] = 'field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['table'] = 'field_data_field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['field'] = 'field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['label'] = 'Email';
  /* Field: Field: Primary Telephone */
  $handler->display->display_options['fields']['field_ao_primary_telephone']['id'] = 'field_ao_primary_telephone';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['table'] = 'field_data_field_ao_primary_telephone';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['field'] = 'field_ao_primary_telephone';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ao_primary_telephone']['click_sort_column'] = 'number';
  /* Contextual filter: CRM Core Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['relationship'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'individual' => 'individual',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'contact_id' => array(
      'type' => 'panel',
      'context' => 'entity:crm_core_activity.activity-id',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'CRM Core Contact: Contact ID',
    ),
  );
  $export['lb_company_primary_contact'] = $view;

  return $export;
}
