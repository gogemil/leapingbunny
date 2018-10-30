<?php
/**
 * @file
 * lb_application_report.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function lb_application_report_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'lb_application_approved';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'LB Application Approved';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Approved';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No applications have been approved.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_company_target_id']['id'] = 'field_lb_company_target_id';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['table'] = 'field_data_field_lb_company';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['field'] = 'field_lb_company_target_id';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['label'] = 'company';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['id'] = 'field_lb_primary_contact_target_id';
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['table'] = 'field_data_field_lb_primary_contact';
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['field'] = 'field_lb_primary_contact_target_id';
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['label'] = 'contact';
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['relationship'] = 'field_lb_company_target_id';
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
  $handler->display->display_options['fields']['contact_name_1']['relationship'] = 'field_lb_primary_contact_target_id';
  $handler->display->display_options['fields']['contact_name_1']['label'] = 'Primary contact';
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
  /* Field: Field: Business Address */
  $handler->display->display_options['fields']['field_ao_business_address']['id'] = 'field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['table'] = 'field_data_field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['field'] = 'field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['field_ao_business_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_ao_business_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_ao_website']['id'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['table'] = 'field_data_field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['field'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['field_ao_website']['click_sort_column'] = 'url';
  /* Field: CRM Core Activity: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: CRM Core Activity: Recommitment date */
  $handler->display->display_options['fields']['field_lb_recommitment_date']['id'] = 'field_lb_recommitment_date';
  $handler->display->display_options['fields']['field_lb_recommitment_date']['table'] = 'field_data_field_lb_recommitment_date';
  $handler->display->display_options['fields']['field_lb_recommitment_date']['field'] = 'field_lb_recommitment_date';
  $handler->display->display_options['fields']['field_lb_recommitment_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: CRM Core Contact: Parent company */
  $handler->display->display_options['fields']['field_lb_parent_company']['id'] = 'field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['table'] = 'field_data_field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['field'] = 'field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['relationship'] = 'field_lb_company_target_id';
  /* Field: CRM Core Contact: Referred by */
  $handler->display->display_options['fields']['field_lb_referred_by']['id'] = 'field_lb_referred_by';
  $handler->display->display_options['fields']['field_lb_referred_by']['table'] = 'field_data_field_lb_referred_by';
  $handler->display->display_options['fields']['field_lb_referred_by']['field'] = 'field_lb_referred_by';
  $handler->display->display_options['fields']['field_lb_referred_by']['relationship'] = 'field_lb_company_target_id';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Status';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Closed';
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lb_company_application_approved' => 'lb_company_application_approved',
  );
  /* Filter criterion: CRM Core Activity: Recommitment date (field_lb_recommitment_date) */
  $handler->display->display_options['filters']['field_lb_recommitment_date_value']['id'] = 'field_lb_recommitment_date_value';
  $handler->display->display_options['filters']['field_lb_recommitment_date_value']['table'] = 'field_data_field_lb_recommitment_date';
  $handler->display->display_options['filters']['field_lb_recommitment_date_value']['field'] = 'field_lb_recommitment_date_value';
  $handler->display->display_options['filters']['field_lb_recommitment_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_lb_recommitment_date_value']['default_date'] = 'now';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'crm-core/reports/lba/applications/approved';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Approved';
  $handler->display->display_options['menu']['weight'] = '-7';
  $handler->display->display_options['menu']['name'] = 'features';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['lb_application_approved'] = $view;

  $view = new view();
  $view->name = 'lb_application_closed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'LB Application Closed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Closed';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No applications have been closed';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_company_target_id']['id'] = 'field_lb_company_target_id';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['table'] = 'field_data_field_lb_company';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['field'] = 'field_lb_company_target_id';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['label'] = 'company';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['id'] = 'field_lb_primary_contact_target_id';
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['table'] = 'field_data_field_lb_primary_contact';
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['field'] = 'field_lb_primary_contact_target_id';
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['label'] = 'contact';
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['relationship'] = 'field_lb_company_target_id';
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
  $handler->display->display_options['fields']['contact_name_1']['relationship'] = 'field_lb_primary_contact_target_id';
  $handler->display->display_options['fields']['contact_name_1']['label'] = 'Primary contact';
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
  /* Field: Field: Business Address */
  $handler->display->display_options['fields']['field_ao_business_address']['id'] = 'field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['table'] = 'field_data_field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['field'] = 'field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['field_ao_business_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_ao_business_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_ao_website']['id'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['table'] = 'field_data_field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['field'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['field_ao_website']['click_sort_column'] = 'url';
  /* Field: CRM Core Activity: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: CRM Core Activity: Recommitment date */
  $handler->display->display_options['fields']['field_lb_recommitment_date']['id'] = 'field_lb_recommitment_date';
  $handler->display->display_options['fields']['field_lb_recommitment_date']['table'] = 'field_data_field_lb_recommitment_date';
  $handler->display->display_options['fields']['field_lb_recommitment_date']['field'] = 'field_lb_recommitment_date';
  $handler->display->display_options['fields']['field_lb_recommitment_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: CRM Core Contact: Parent company */
  $handler->display->display_options['fields']['field_lb_parent_company']['id'] = 'field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['table'] = 'field_data_field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['field'] = 'field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['relationship'] = 'field_lb_company_target_id';
  /* Field: CRM Core Contact: Referred by */
  $handler->display->display_options['fields']['field_lb_referred_by']['id'] = 'field_lb_referred_by';
  $handler->display->display_options['fields']['field_lb_referred_by']['table'] = 'field_data_field_lb_referred_by';
  $handler->display->display_options['fields']['field_lb_referred_by']['field'] = 'field_lb_referred_by';
  $handler->display->display_options['fields']['field_lb_referred_by']['relationship'] = 'field_lb_company_target_id';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Status';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Closed';
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lb_company_application_approved' => 'lb_company_application_approved',
  );
  /* Filter criterion: CRM Core Activity: Recommitment date (field_lb_recommitment_date) */
  $handler->display->display_options['filters']['field_lb_recommitment_date_value']['id'] = 'field_lb_recommitment_date_value';
  $handler->display->display_options['filters']['field_lb_recommitment_date_value']['table'] = 'field_data_field_lb_recommitment_date';
  $handler->display->display_options['filters']['field_lb_recommitment_date_value']['field'] = 'field_lb_recommitment_date_value';
  $handler->display->display_options['filters']['field_lb_recommitment_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_lb_recommitment_date_value']['default_date'] = 'now';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'crm-core/reports/lba/applications/closed';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Closed';
  $handler->display->display_options['menu']['weight'] = '-7';
  $handler->display->display_options['menu']['name'] = 'features';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['lb_application_closed'] = $view;

  $view = new view();
  $view->name = 'lb_application_recommitment_due';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'LB Application Recommitment Due';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recommitment Due';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No recommitments are due.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_company_target_id']['id'] = 'field_lb_company_target_id';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['table'] = 'field_data_field_lb_company';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['field'] = 'field_lb_company_target_id';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['label'] = 'company';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['id'] = 'field_lb_primary_contact_target_id';
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['table'] = 'field_data_field_lb_primary_contact';
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['field'] = 'field_lb_primary_contact_target_id';
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['label'] = 'contact';
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['relationship'] = 'field_lb_company_target_id';
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
  $handler->display->display_options['fields']['contact_name_1']['relationship'] = 'field_lb_primary_contact_target_id';
  $handler->display->display_options['fields']['contact_name_1']['label'] = 'Primary contact';
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
  /* Field: Field: Business Address */
  $handler->display->display_options['fields']['field_ao_business_address']['id'] = 'field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['table'] = 'field_data_field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['field'] = 'field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['field_ao_business_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_ao_business_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_ao_website']['id'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['table'] = 'field_data_field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['field'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['field_ao_website']['click_sort_column'] = 'url';
  /* Field: CRM Core Activity: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: CRM Core Activity: Recommitment date */
  $handler->display->display_options['fields']['field_lb_recommitment_date']['id'] = 'field_lb_recommitment_date';
  $handler->display->display_options['fields']['field_lb_recommitment_date']['table'] = 'field_data_field_lb_recommitment_date';
  $handler->display->display_options['fields']['field_lb_recommitment_date']['field'] = 'field_lb_recommitment_date';
  $handler->display->display_options['fields']['field_lb_recommitment_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: CRM Core Contact: Parent company */
  $handler->display->display_options['fields']['field_lb_parent_company']['id'] = 'field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['table'] = 'field_data_field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['field'] = 'field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['relationship'] = 'field_lb_company_target_id';
  /* Field: CRM Core Contact: Referred by */
  $handler->display->display_options['fields']['field_lb_referred_by']['id'] = 'field_lb_referred_by';
  $handler->display->display_options['fields']['field_lb_referred_by']['table'] = 'field_data_field_lb_referred_by';
  $handler->display->display_options['fields']['field_lb_referred_by']['field'] = 'field_lb_referred_by';
  $handler->display->display_options['fields']['field_lb_referred_by']['relationship'] = 'field_lb_company_target_id';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Status';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Recommitment due';
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lb_company_application_approved' => 'lb_company_application_approved',
  );
  /* Filter criterion: CRM Core Activity: Recommitment date (field_lb_recommitment_date) */
  $handler->display->display_options['filters']['field_lb_recommitment_date_value']['id'] = 'field_lb_recommitment_date_value';
  $handler->display->display_options['filters']['field_lb_recommitment_date_value']['table'] = 'field_data_field_lb_recommitment_date';
  $handler->display->display_options['filters']['field_lb_recommitment_date_value']['field'] = 'field_lb_recommitment_date_value';
  $handler->display->display_options['filters']['field_lb_recommitment_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_lb_recommitment_date_value']['default_date'] = '+2 months';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'crm-core/reports/lba/applications/recommit';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Recommitment due';
  $handler->display->display_options['menu']['weight'] = '-7';
  $handler->display->display_options['menu']['name'] = 'features';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['lb_application_recommitment_due'] = $view;

  $view = new view();
  $view->name = 'lb_application_request';
  $view->description = 'This is a run down of all application requests in the system';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'Application Request';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Requests to Apply';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'activity_id' => 'activity_id',
    'field_lb_primary_contact' => 'field_lb_primary_contact',
    'field_lb_company' => 'field_lb_company',
    'views_bulk_operations' => 'views_bulk_operations',
    'created' => 'created',
    'contact_name' => 'contact_name',
    'contact_name_1' => 'contact_name_1',
    'field_ao_business_address' => 'field_ao_business_address',
    'field_ao_website' => 'field_ao_website',
    'field_lb_referred_by' => 'field_lb_referred_by',
    'field_lb_parent_company' => 'field_lb_parent_company',
    'label' => 'label',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'activity_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lb_primary_contact' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lb_company' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
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
    'contact_name_1' => array(
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
    'field_ao_website' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lb_referred_by' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lb_parent_company' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'label' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="results-summary">Displaying @start - @end of @total</div>
<div class="detail-buttons">
<div class="btn btn-orange btn-simple"><a href="crm-core/reports/lb_requests/applications/requests/csv-export">Export to CSV</a></div>
</div>';
  /* Relationship: Company */
  $handler->display->display_options['relationships']['field_lb_company_target_id']['id'] = 'field_lb_company_target_id';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['table'] = 'field_data_field_lb_company';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['field'] = 'field_lb_company_target_id';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['ui_name'] = 'Company';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['label'] = 'Company';
  /* Relationship: Primary Contact */
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['id'] = 'field_lb_primary_contact_target_id';
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['table'] = 'field_data_field_lb_primary_contact';
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['field'] = 'field_lb_primary_contact_target_id';
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['ui_name'] = 'Primary Contact';
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['label'] = 'Primary Contact';
  /* Relationship: Status */
  $handler->display->display_options['relationships']['field_lb_request_outcome_target_id']['id'] = 'field_lb_request_outcome_target_id';
  $handler->display->display_options['relationships']['field_lb_request_outcome_target_id']['table'] = 'field_data_field_lb_request_outcome';
  $handler->display->display_options['relationships']['field_lb_request_outcome_target_id']['field'] = 'field_lb_request_outcome_target_id';
  $handler->display->display_options['relationships']['field_lb_request_outcome_target_id']['ui_name'] = 'Status';
  $handler->display->display_options['relationships']['field_lb_request_outcome_target_id']['label'] = 'Status';
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['label'] = '';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['activity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['activity_id']['separator'] = '';
  /* Field: Company Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['contact_id']['ui_name'] = 'Company Contact ID';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Activity: Primary contact */
  $handler->display->display_options['fields']['field_lb_primary_contact']['id'] = 'field_lb_primary_contact';
  $handler->display->display_options['fields']['field_lb_primary_contact']['table'] = 'field_data_field_lb_primary_contact';
  $handler->display->display_options['fields']['field_lb_primary_contact']['field'] = 'field_lb_primary_contact';
  $handler->display->display_options['fields']['field_lb_primary_contact']['label'] = '';
  $handler->display->display_options['fields']['field_lb_primary_contact']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lb_primary_contact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lb_primary_contact']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_lb_primary_contact']['settings'] = array(
    'link' => 0,
  );
  /* Field: CRM Core Activity: Company */
  $handler->display->display_options['fields']['field_lb_company']['id'] = 'field_lb_company';
  $handler->display->display_options['fields']['field_lb_company']['table'] = 'field_data_field_lb_company';
  $handler->display->display_options['fields']['field_lb_company']['field'] = 'field_lb_company';
  $handler->display->display_options['fields']['field_lb_company']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lb_company']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_lb_company']['settings'] = array(
    'link' => 0,
  );
  /* Field: Bulk operations: CRM Core Contact */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::lb_application_report_deny_request' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_registration_request_foreign' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_registration_request_info' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_application_report_approve_request' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: CRM Core Activity: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'M d, Y';
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['contact_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name']['alter']['path'] = 'crm-core/contact/[field_lb_company]';
  $handler->display->display_options['fields']['contact_name']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['contact_name']['click_sort_column'] = 'family';
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
  $handler->display->display_options['fields']['contact_name_1']['relationship'] = 'field_lb_primary_contact_target_id';
  $handler->display->display_options['fields']['contact_name_1']['label'] = 'Primary Contact';
  $handler->display->display_options['fields']['contact_name_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name_1']['alter']['path'] = 'crm-core/contact/[field_lb_primary_contact]';
  $handler->display->display_options['fields']['contact_name_1']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['contact_name_1']['click_sort_column'] = 'family';
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
  /* Field: Field: Business Address */
  $handler->display->display_options['fields']['field_ao_business_address']['id'] = 'field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['table'] = 'field_data_field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['field'] = 'field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['field_ao_business_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ao_business_address']['click_sort_column'] = 'administrative_area';
  $handler->display->display_options['fields']['field_ao_business_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_ao_website']['id'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['table'] = 'field_data_field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['field'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['field_ao_website']['click_sort_column'] = 'url';
  /* Field: CRM Core Contact: Referred by */
  $handler->display->display_options['fields']['field_lb_referred_by']['id'] = 'field_lb_referred_by';
  $handler->display->display_options['fields']['field_lb_referred_by']['table'] = 'field_data_field_lb_referred_by';
  $handler->display->display_options['fields']['field_lb_referred_by']['field'] = 'field_lb_referred_by';
  $handler->display->display_options['fields']['field_lb_referred_by']['relationship'] = 'field_lb_company_target_id';
  /* Field: CRM Core Contact: Parent company */
  $handler->display->display_options['fields']['field_lb_parent_company']['id'] = 'field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['table'] = 'field_data_field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['field'] = 'field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['relationship'] = 'field_lb_company_target_id';
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id_1']['id'] = 'activity_id_1';
  $handler->display->display_options['fields']['activity_id_1']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id_1']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id_1']['relationship'] = 'reverse_field_lb_application_request_crm_core_activity';
  $handler->display->display_options['fields']['activity_id_1']['exclude'] = TRUE;
  /* Field: CRM Core Activity Type: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'crm_core_activity_type';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['relationship'] = 'field_lb_request_outcome_target_id';
  $handler->display->display_options['fields']['label']['label'] = 'Status';
  $handler->display->display_options['fields']['label']['empty'] = '---';
  /* Field: View Request Link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'View Request Link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View Request';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'btn btn-blue';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: CRM Core Activity: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
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
  $handler->display->display_options['filters']['type_1']['relationship'] = 'field_lb_request_outcome_target_id';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'lb_application_request_approved' => 'lb_application_request_approved',
    'lb_application_request_denied' => 'lb_application_request_denied',
    'lb_application_request_foreign' => 'lb_application_request_foreign',
    'lb_application_request_needs_inf' => 'lb_application_request_needs_inf',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type_2']['id'] = 'type_2';
  $handler->display->display_options['filters']['type_2']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type_2']['field'] = 'type';
  $handler->display->display_options['filters']['type_2']['relationship'] = 'field_lb_request_outcome_target_id';
  $handler->display->display_options['filters']['type_2']['operator'] = 'empty';
  $handler->display->display_options['filters']['type_2']['group'] = 2;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['label'] = '';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['activity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['activity_id']['separator'] = '';
  /* Field: Company Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['contact_id']['ui_name'] = 'Company Contact ID';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Activity: Primary contact */
  $handler->display->display_options['fields']['field_lb_primary_contact']['id'] = 'field_lb_primary_contact';
  $handler->display->display_options['fields']['field_lb_primary_contact']['table'] = 'field_data_field_lb_primary_contact';
  $handler->display->display_options['fields']['field_lb_primary_contact']['field'] = 'field_lb_primary_contact';
  $handler->display->display_options['fields']['field_lb_primary_contact']['label'] = '';
  $handler->display->display_options['fields']['field_lb_primary_contact']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lb_primary_contact']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lb_primary_contact']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_lb_primary_contact']['settings'] = array(
    'link' => 0,
  );
  /* Field: CRM Core Activity: Company */
  $handler->display->display_options['fields']['field_lb_company']['id'] = 'field_lb_company';
  $handler->display->display_options['fields']['field_lb_company']['table'] = 'field_data_field_lb_company';
  $handler->display->display_options['fields']['field_lb_company']['field'] = 'field_lb_company';
  $handler->display->display_options['fields']['field_lb_company']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lb_company']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_lb_company']['settings'] = array(
    'link' => 0,
  );
  /* Field: Bulk operations: CRM Core Contact */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::lb_application_report_deny_request' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_registration_request_foreign' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_registration_request_info' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_application_report_approve_request' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: CRM Core Activity: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'M d, Y';
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['contact_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name']['alter']['path'] = 'crm-core/contact/[field_lb_company]';
  $handler->display->display_options['fields']['contact_name']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['contact_name']['click_sort_column'] = 'family';
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
  $handler->display->display_options['fields']['contact_name_1']['relationship'] = 'field_lb_primary_contact_target_id';
  $handler->display->display_options['fields']['contact_name_1']['label'] = 'Primary Contact';
  $handler->display->display_options['fields']['contact_name_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name_1']['alter']['path'] = 'crm-core/contact/[field_lb_primary_contact]';
  $handler->display->display_options['fields']['contact_name_1']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['contact_name_1']['click_sort_column'] = 'family';
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
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_ao_website']['id'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['table'] = 'field_data_field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['field'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['field_ao_website']['click_sort_column'] = 'url';
  /* Field: CRM Core Contact: Parent company */
  $handler->display->display_options['fields']['field_lb_parent_company']['id'] = 'field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['table'] = 'field_data_field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['field'] = 'field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['relationship'] = 'field_lb_company_target_id';
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id_1']['id'] = 'activity_id_1';
  $handler->display->display_options['fields']['activity_id_1']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id_1']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id_1']['relationship'] = 'reverse_field_lb_application_request_crm_core_activity';
  $handler->display->display_options['fields']['activity_id_1']['exclude'] = TRUE;
  /* Field: CRM Core Activity Type: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'crm_core_activity_type';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['relationship'] = 'field_lb_request_outcome_target_id';
  $handler->display->display_options['fields']['label']['label'] = 'Status';
  $handler->display->display_options['fields']['label']['empty'] = '---';
  /* Field: View Request Link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'View Request Link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View Request';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'btn btn-blue';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'crm-core/reports/lb_requests/applications/requests';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Requests';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Requests';
  $handler->display->display_options['tab_options']['weight'] = '-10';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'crm-core/reports/lb_requests/applications/requests/csv-export';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page' => 0,
  );
  $export['lb_application_request'] = $view;

  $view = new view();
  $view->name = 'lb_application_request_about_your_company';
  $view->description = 'This displays contact information for application requests';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'Application Request: About Your Company';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'About Your Company';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'This information cannot be displayed.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Company */
  $handler->display->display_options['relationships']['field_lb_company_target_id']['id'] = 'field_lb_company_target_id';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['table'] = 'field_data_field_lb_company';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['field'] = 'field_lb_company_target_id';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['ui_name'] = 'Company';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['label'] = 'Company';
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  /* Field: CRM Core Activity: Company */
  $handler->display->display_options['fields']['field_lb_company']['id'] = 'field_lb_company';
  $handler->display->display_options['fields']['field_lb_company']['table'] = 'field_data_field_lb_company';
  $handler->display->display_options['fields']['field_lb_company']['field'] = 'field_lb_company';
  $handler->display->display_options['fields']['field_lb_company']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lb_company']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_lb_company']['settings'] = array(
    'link' => 0,
  );
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['contact_name']['label'] = 'Name';
  $handler->display->display_options['fields']['contact_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name']['alter']['path'] = 'crm-core/contact/[field_lb_company]';
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
  $handler->display->display_options['fields']['field_ao_business_address']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['field_ao_business_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_ao_business_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Field: Primary Telephone */
  $handler->display->display_options['fields']['field_ao_primary_telephone']['id'] = 'field_ao_primary_telephone';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['table'] = 'field_data_field_ao_primary_telephone';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['field'] = 'field_ao_primary_telephone';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['click_sort_column'] = 'number';
  /* Field: CRM Core Contact: Fax */
  $handler->display->display_options['fields']['field_lb_fax']['id'] = 'field_lb_fax';
  $handler->display->display_options['fields']['field_lb_fax']['table'] = 'field_data_field_lb_fax';
  $handler->display->display_options['fields']['field_lb_fax']['field'] = 'field_lb_fax';
  $handler->display->display_options['fields']['field_lb_fax']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['field_lb_fax']['click_sort_column'] = 'number';
  /* Field: CRM Core Contact: Toll-free phone */
  $handler->display->display_options['fields']['field_lb_toll_free_telephone']['id'] = 'field_lb_toll_free_telephone';
  $handler->display->display_options['fields']['field_lb_toll_free_telephone']['table'] = 'field_data_field_lb_toll_free_telephone';
  $handler->display->display_options['fields']['field_lb_toll_free_telephone']['field'] = 'field_lb_toll_free_telephone';
  $handler->display->display_options['fields']['field_lb_toll_free_telephone']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['field_lb_toll_free_telephone']['click_sort_column'] = 'number';
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_ao_website']['id'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['table'] = 'field_data_field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['field'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['field_ao_website']['click_sort_column'] = 'url';
  /* Field: CRM Core Contact: Parent company */
  $handler->display->display_options['fields']['field_lb_parent_company']['id'] = 'field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['table'] = 'field_data_field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['field'] = 'field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['relationship'] = 'field_lb_company_target_id';
  /* Field: CRM Core Contact: Referred by */
  $handler->display->display_options['fields']['field_lb_referred_by']['id'] = 'field_lb_referred_by';
  $handler->display->display_options['fields']['field_lb_referred_by']['table'] = 'field_data_field_lb_referred_by';
  $handler->display->display_options['fields']['field_lb_referred_by']['field'] = 'field_lb_referred_by';
  $handler->display->display_options['fields']['field_lb_referred_by']['relationship'] = 'field_lb_company_target_id';
  /* Contextual filter: CRM Core Activity: Activity ID */
  $handler->display->display_options['arguments']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['arguments']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['arguments']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['arguments']['activity_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['activity_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['activity_id']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['activity_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['activity_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['activity_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lb_application_request' => 'lb_application_request',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'LB Requests: About Your Company';
  $handler->display->display_options['pane_description'] = 'Lists \'About Your Company\' info related to an application request.';
  $handler->display->display_options['pane_category']['name'] = 'LB: Requests';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'activity_id' => array(
      'type' => 'panel',
      'context' => 'entity:crm_core_activity.activity-id',
      'context_optional' => 0,
      'panel' => '3',
      'fixed' => '',
      'label' => 'CRM Core Activity: Activity ID',
    ),
  );
  $export['lb_application_request_about_your_company'] = $view;

  $view = new view();
  $view->name = 'lb_application_request_approved';
  $view->description = 'This is a run down of all application requests in the system';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'Application Requests - Approved';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Pending Requests';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'contact_id' => 'contact_id',
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
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="results-summary">Displaying @start - @end of @total</div>
<div class="detail-buttons">
<div class="btn btn-orange btn-simple"><a href="crm-core/reports/lb_requests/applications/requests-pinding/csv-export">Export to CSV</a></div>
</div>';
  /* Relationship: CRM Core Contact: Relation: primary contact for (crm_core_contact → crm_core_contact) */
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['id'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['field'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['label'] = 'Primary contact';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['entity_deduplication_right'] = 0;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['id'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['field'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['label'] = 'Application request activity';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_request_outcome_target_id']['id'] = 'field_lb_request_outcome_target_id';
  $handler->display->display_options['relationships']['field_lb_request_outcome_target_id']['table'] = 'field_data_field_lb_request_outcome';
  $handler->display->display_options['relationships']['field_lb_request_outcome_target_id']['field'] = 'field_lb_request_outcome_target_id';
  $handler->display->display_options['relationships']['field_lb_request_outcome_target_id']['relationship'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['relationships']['field_lb_request_outcome_target_id']['label'] = 'Application request outcome';
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['label'] = 'Company ID';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id_1']['id'] = 'contact_id_1';
  $handler->display->display_options['fields']['contact_id_1']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id_1']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id_1']['relationship'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['fields']['contact_id_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id_1']['link_to_contact'] = 0;
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['relationship'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['activity_id']['separator'] = '';
  /* Field: Bulk operations: CRM Core Contact */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::lb_application_report_deny_request' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: CRM Core Activity: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['fields']['created']['element_type'] = 'strong';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'M d, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name']['alter']['path'] = 'crm-core/contact/[contact_id]';
  $handler->display->display_options['fields']['contact_name']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['contact_name']['click_sort_column'] = 'family';
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
  $handler->display->display_options['fields']['contact_name_1']['relationship'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['fields']['contact_name_1']['label'] = 'Primary contact';
  $handler->display->display_options['fields']['contact_name_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name_1']['alter']['path'] = 'crm-core/contact/[contact_id_1]';
  $handler->display->display_options['fields']['contact_name_1']['alter']['target'] = '_blank';
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
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_ao_website']['id'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['table'] = 'field_data_field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['field'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ao_website']['type'] = 'link_url';
  /* Field: CRM Core Contact: Referred by */
  $handler->display->display_options['fields']['field_lb_referred_by']['id'] = 'field_lb_referred_by';
  $handler->display->display_options['fields']['field_lb_referred_by']['table'] = 'field_data_field_lb_referred_by';
  $handler->display->display_options['fields']['field_lb_referred_by']['field'] = 'field_lb_referred_by';
  /* Field: CRM Core Contact: Parent company */
  $handler->display->display_options['fields']['field_lb_parent_company']['id'] = 'field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['table'] = 'field_data_field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['field'] = 'field_lb_parent_company';
  /* Field: Status */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Status';
  $handler->display->display_options['fields']['nothing']['label'] = 'Status';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Pending';
  /* Field: View Request */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'View Request';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'View Request';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]';
  $handler->display->display_options['fields']['nothing_1']['alter']['link_class'] = 'btn btn-blue';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Sort criterion: CRM Core Activity: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company' => 'company',
  );
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'lb_application_request' => 'lb_application_request',
  );
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type_2']['id'] = 'type_2';
  $handler->display->display_options['filters']['type_2']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type_2']['field'] = 'type';
  $handler->display->display_options['filters']['type_2']['relationship'] = 'field_lb_request_outcome_target_id';
  $handler->display->display_options['filters']['type_2']['value'] = array(
    'lb_application_request_approved' => 'lb_application_request_approved',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'crm-core/reports/lb_requests/applications/requests-pending';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Pending';
  $handler->display->display_options['menu']['weight'] = '11';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'crm-core/reports/lb_requests/applications/requests-pinding/csv-export';
  $export['lb_application_request_approved'] = $view;

  $view = new view();
  $view->name = 'lb_application_request_approved_string';
  $view->description = 'This displays at the top of an activity indicating a request has been approved.';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'LB: Application Request Approved String';
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
  /* Relationship: Request */
  $handler->display->display_options['relationships']['field_lb_application_request_target_id']['id'] = 'field_lb_application_request_target_id';
  $handler->display->display_options['relationships']['field_lb_application_request_target_id']['table'] = 'field_data_field_lb_application_request';
  $handler->display->display_options['relationships']['field_lb_application_request_target_id']['field'] = 'field_lb_application_request_target_id';
  $handler->display->display_options['relationships']['field_lb_application_request_target_id']['ui_name'] = 'Request';
  $handler->display->display_options['relationships']['field_lb_application_request_target_id']['label'] = 'Request';
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  /* Field: CRM Core Activity: Application request */
  $handler->display->display_options['fields']['field_lb_application_request']['id'] = 'field_lb_application_request';
  $handler->display->display_options['fields']['field_lb_application_request']['table'] = 'field_data_field_lb_application_request';
  $handler->display->display_options['fields']['field_lb_application_request']['field'] = 'field_lb_application_request';
  $handler->display->display_options['fields']['field_lb_application_request']['label'] = '';
  $handler->display->display_options['fields']['field_lb_application_request']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lb_application_request']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lb_application_request']['settings'] = array(
    'link' => 0,
  );
  /* Field: CRM Core Activity: Company */
  $handler->display->display_options['fields']['field_lb_company']['id'] = 'field_lb_company';
  $handler->display->display_options['fields']['field_lb_company']['table'] = 'field_data_field_lb_company';
  $handler->display->display_options['fields']['field_lb_company']['field'] = 'field_lb_company';
  $handler->display->display_options['fields']['field_lb_company']['label'] = '';
  $handler->display->display_options['fields']['field_lb_company']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lb_company']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lb_company']['settings'] = array(
    'link' => 0,
  );
  /* Field: Activity ID for the original request */
  $handler->display->display_options['fields']['activity_id_1']['id'] = 'activity_id_1';
  $handler->display->display_options['fields']['activity_id_1']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id_1']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id_1']['relationship'] = 'field_lb_application_request_target_id';
  $handler->display->display_options['fields']['activity_id_1']['ui_name'] = 'Activity ID for the original request';
  $handler->display->display_options['fields']['activity_id_1']['label'] = '';
  $handler->display->display_options['fields']['activity_id_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['activity_id_1']['alter']['text'] = 'A request to apply for certification was approved. <a href="[activity_id_1]">View original request.</a>';
  $handler->display->display_options['fields']['activity_id_1']['element_label_colon'] = FALSE;
  /* Contextual filter: CRM Core Activity: Activity ID */
  $handler->display->display_options['arguments']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['arguments']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['arguments']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['arguments']['activity_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['activity_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['activity_id']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['activity_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['activity_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['activity_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lb_application_request_approved' => 'lb_application_request_approved',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Request Approved';
  $handler->display->display_options['pane_description'] = 'Displays at the top of an application approved page';
  $handler->display->display_options['pane_category']['name'] = 'LB: Requests';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['lb_application_request_approved_string'] = $view;

  $view = new view();
  $view->name = 'lb_application_request_contact_info';
  $view->description = 'This displays contact information for application requests';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'Application Request: Contact Info';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Company Information';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'This information cannot be displayed.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Primary Contact */
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['id'] = 'field_lb_primary_contact_target_id';
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['table'] = 'field_data_field_lb_primary_contact';
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['field'] = 'field_lb_primary_contact_target_id';
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['ui_name'] = 'Primary Contact';
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['label'] = 'Primary Contact';
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  /* Field: CRM Core Activity: Primary contact */
  $handler->display->display_options['fields']['field_lb_primary_contact']['id'] = 'field_lb_primary_contact';
  $handler->display->display_options['fields']['field_lb_primary_contact']['table'] = 'field_data_field_lb_primary_contact';
  $handler->display->display_options['fields']['field_lb_primary_contact']['field'] = 'field_lb_primary_contact';
  $handler->display->display_options['fields']['field_lb_primary_contact']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lb_primary_contact']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_lb_primary_contact']['settings'] = array(
    'view_mode' => 'primary_contact',
    'links' => 1,
  );
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['relationship'] = 'field_lb_primary_contact_target_id';
  $handler->display->display_options['fields']['contact_name']['label'] = 'Name';
  $handler->display->display_options['fields']['contact_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name']['alter']['path'] = 'crm-core/contact/[field_lb_primary_contact]';
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
  /* Field: Field: Position */
  $handler->display->display_options['fields']['field_lb_contact_position']['id'] = 'field_lb_contact_position';
  $handler->display->display_options['fields']['field_lb_contact_position']['table'] = 'field_data_field_lb_contact_position';
  $handler->display->display_options['fields']['field_lb_contact_position']['field'] = 'field_lb_contact_position';
  $handler->display->display_options['fields']['field_lb_contact_position']['relationship'] = 'field_lb_primary_contact_target_id';
  /* Field: Field: Email Address */
  $handler->display->display_options['fields']['field_ao_email_address']['id'] = 'field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['table'] = 'field_data_field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['field'] = 'field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['relationship'] = 'field_lb_primary_contact_target_id';
  /* Field: Field: Primary Telephone */
  $handler->display->display_options['fields']['field_ao_primary_telephone']['id'] = 'field_ao_primary_telephone';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['table'] = 'field_data_field_ao_primary_telephone';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['field'] = 'field_ao_primary_telephone';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['relationship'] = 'field_lb_primary_contact_target_id';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['click_sort_column'] = 'number';
  /* Contextual filter: CRM Core Activity: Activity ID */
  $handler->display->display_options['arguments']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['arguments']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['arguments']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['arguments']['activity_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['activity_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['activity_id']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['activity_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['activity_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['activity_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lb_application_request' => 'lb_application_request',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'LB Requests: Company Information';
  $handler->display->display_options['pane_description'] = 'Lists company information related to an application request.';
  $handler->display->display_options['pane_category']['name'] = 'LB: Requests';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'activity_id' => array(
      'type' => 'panel',
      'context' => 'entity:crm_core_activity.activity-id',
      'context_optional' => 0,
      'panel' => '3',
      'fixed' => '',
      'label' => 'CRM Core Activity: Activity ID',
    ),
  );
  $export['lb_application_request_contact_info'] = $view;

  $view = new view();
  $view->name = 'lb_application_requests_denied';
  $view->description = 'This is a run down of all application requests in the system that have been denied.';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'Application Requests - Denied';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Denied Requests';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'contact_id' => 'contact_id',
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
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="results-summary">Displaying @start - @end of @total</div>
<div class="detail-buttons">
<div class="btn btn-orange btn-simple"><a href="crm-core/reports/lb_requests/applications/requests-pinding/csv-export">Export to CSV</a></div>
</div>';
  /* Relationship: CRM Core Contact: Relation: primary contact for (crm_core_contact → crm_core_contact) */
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['id'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['field'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['label'] = 'Primary contact';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['entity_deduplication_right'] = 0;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['id'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['field'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['label'] = 'Application request activity';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_request_outcome_target_id']['id'] = 'field_lb_request_outcome_target_id';
  $handler->display->display_options['relationships']['field_lb_request_outcome_target_id']['table'] = 'field_data_field_lb_request_outcome';
  $handler->display->display_options['relationships']['field_lb_request_outcome_target_id']['field'] = 'field_lb_request_outcome_target_id';
  $handler->display->display_options['relationships']['field_lb_request_outcome_target_id']['relationship'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['relationships']['field_lb_request_outcome_target_id']['label'] = 'Application request outcome';
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['label'] = 'Company ID';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id_1']['id'] = 'contact_id_1';
  $handler->display->display_options['fields']['contact_id_1']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id_1']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id_1']['relationship'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['fields']['contact_id_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id_1']['link_to_contact'] = 0;
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['relationship'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['activity_id']['separator'] = '';
  /* Field: Bulk operations: CRM Core Contact */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::lb_application_report_approve_request' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: CRM Core Activity: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['fields']['created']['element_type'] = 'strong';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'M d, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name']['alter']['path'] = 'crm-core/contact/[contact_id]';
  $handler->display->display_options['fields']['contact_name']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['contact_name']['click_sort_column'] = 'family';
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
  $handler->display->display_options['fields']['contact_name_1']['relationship'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['fields']['contact_name_1']['label'] = 'Primary contact';
  $handler->display->display_options['fields']['contact_name_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name_1']['alter']['path'] = 'crm-core/contact/[contact_id_1]';
  $handler->display->display_options['fields']['contact_name_1']['alter']['target'] = '_blank';
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
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_ao_website']['id'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['table'] = 'field_data_field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['field'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ao_website']['type'] = 'link_url';
  /* Field: Status */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Status';
  $handler->display->display_options['fields']['nothing']['label'] = 'Status';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Denied';
  /* Field: CRM Core Activity: Justification */
  $handler->display->display_options['fields']['field_lb_justification']['id'] = 'field_lb_justification';
  $handler->display->display_options['fields']['field_lb_justification']['table'] = 'field_data_field_lb_justification';
  $handler->display->display_options['fields']['field_lb_justification']['field'] = 'field_lb_justification';
  $handler->display->display_options['fields']['field_lb_justification']['relationship'] = 'field_lb_request_outcome_target_id';
  /* Field: View Request */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'View Request';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'View Request';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]';
  $handler->display->display_options['fields']['nothing_1']['alter']['link_class'] = 'btn btn-blue';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Sort criterion: CRM Core Activity: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company' => 'company',
  );
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'lb_application_request' => 'lb_application_request',
  );
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type_2']['id'] = 'type_2';
  $handler->display->display_options['filters']['type_2']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type_2']['field'] = 'type';
  $handler->display->display_options['filters']['type_2']['relationship'] = 'field_lb_request_outcome_target_id';
  $handler->display->display_options['filters']['type_2']['value'] = array(
    'lb_application_request_denied' => 'lb_application_request_denied',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'crm-core/reports/lb_requests/applications/requests-denied';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Denied';
  $handler->display->display_options['menu']['weight'] = '12';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'crm-core/reports/lb_requests/applications/requests-denied/csv-export';
  $export['lb_application_requests_denied'] = $view;

  $view = new view();
  $view->name = 'lb_application_section_a';
  $view->description = 'Displays section A of the application, when being viewed as a page';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'LB Application: Section A';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Section A';
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
  $handler->display->display_options['empty']['area']['content'] = 'This information cannot be displayed.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Contact: Trading name */
  $handler->display->display_options['fields']['field_lb_trading_name']['id'] = 'field_lb_trading_name';
  $handler->display->display_options['fields']['field_lb_trading_name']['table'] = 'field_data_field_lb_trading_name';
  $handler->display->display_options['fields']['field_lb_trading_name']['field'] = 'field_lb_trading_name';
  /* Field: CRM Core Contact: Consumer email address */
  $handler->display->display_options['fields']['field_lb_consumer_email']['id'] = 'field_lb_consumer_email';
  $handler->display->display_options['fields']['field_lb_consumer_email']['table'] = 'field_data_field_lb_consumer_email';
  $handler->display->display_options['fields']['field_lb_consumer_email']['field'] = 'field_lb_consumer_email';
  /* Field: CRM Core Contact: Date established */
  $handler->display->display_options['fields']['field_lb_date_established']['id'] = 'field_lb_date_established';
  $handler->display->display_options['fields']['field_lb_date_established']['table'] = 'field_data_field_lb_date_established';
  $handler->display->display_options['fields']['field_lb_date_established']['field'] = 'field_lb_date_established';
  $handler->display->display_options['fields']['field_lb_date_established']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: CRM Core Contact: Legal status */
  $handler->display->display_options['fields']['field_lb_legal_status']['id'] = 'field_lb_legal_status';
  $handler->display->display_options['fields']['field_lb_legal_status']['table'] = 'field_data_field_lb_legal_status';
  $handler->display->display_options['fields']['field_lb_legal_status']['field'] = 'field_lb_legal_status';
  /* Field: Field: Manufactures own goods */
  $handler->display->display_options['fields']['field_lb_manufactures_own']['id'] = 'field_lb_manufactures_own';
  $handler->display->display_options['fields']['field_lb_manufactures_own']['table'] = 'field_data_field_lb_manufactures_own';
  $handler->display->display_options['fields']['field_lb_manufactures_own']['field'] = 'field_lb_manufactures_own';
  /* Field: Field: Manufactures goods for other companies */
  $handler->display->display_options['fields']['field_lb_manufactures_other']['id'] = 'field_lb_manufactures_other';
  $handler->display->display_options['fields']['field_lb_manufactures_other']['table'] = 'field_data_field_lb_manufactures_other';
  $handler->display->display_options['fields']['field_lb_manufactures_other']['field'] = 'field_lb_manufactures_other';
  /* Field: Field: Contracts manufacturing */
  $handler->display->display_options['fields']['field_lb_contracts_manufacturing']['id'] = 'field_lb_contracts_manufacturing';
  $handler->display->display_options['fields']['field_lb_contracts_manufacturing']['table'] = 'field_data_field_lb_contracts_manufacturing';
  $handler->display->display_options['fields']['field_lb_contracts_manufacturing']['field'] = 'field_lb_contracts_manufacturing';
  /* Contextual filter: CRM Core Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['contact_id']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company' => 'company',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'LB Application: Section A';
  $handler->display->display_options['pane_description'] = 'Displays the fields stored in section A of the application for certification';
  $handler->display->display_options['pane_category']['name'] = 'LB: Applications';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'contact_id' => array(
      'type' => 'panel',
      'context' => 'entity:crm_core_activity.field_lb_company',
      'context_optional' => 0,
      'panel' => '2',
      'fixed' => '',
      'label' => 'CRM Core Contact: Contact ID',
    ),
  );

  /* Display: Company */
  $handler = $view->new_display('panel_pane', 'Company', 'panel_pane_2');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: CRM Core Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['contact_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_title'] = 'LB Application: Section A company';
  $handler->display->display_options['pane_description'] = 'Displays the fields stored in section A of the application for certification';
  $handler->display->display_options['pane_category']['name'] = 'LB: Applications';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'contact_id' => array(
      'type' => 'panel',
      'context' => 'entity:crm_core_activity.field_lb_company',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'CRM Core Contact: Contact ID',
    ),
  );
  $export['lb_application_section_a'] = $view;

  $view = new view();
  $view->name = 'lb_application_section_b';
  $view->description = 'Displays the contents of section B of the application on the activity page';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'LB Application: Section B';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Section B';
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
  $handler->display->display_options['empty']['area']['content'] = 'This section cannot be displayed.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Contact: Fixed Cut-off Date */
  $handler->display->display_options['fields']['field_lb_cutoff_date']['id'] = 'field_lb_cutoff_date';
  $handler->display->display_options['fields']['field_lb_cutoff_date']['table'] = 'field_data_field_lb_cutoff_date';
  $handler->display->display_options['fields']['field_lb_cutoff_date']['field'] = 'field_lb_cutoff_date';
  $handler->display->display_options['fields']['field_lb_cutoff_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Contextual filter: CRM Core Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['contact_id']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company' => 'company',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'LB Application: Section B';
  $handler->display->display_options['pane_description'] = 'Displays the fields stored in section B of the application for certification';
  $handler->display->display_options['pane_category']['name'] = 'LB: Applications';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: Company */
  $handler = $view->new_display('panel_pane', 'Company', 'panel_pane_2');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: CRM Core Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['contact_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_title'] = 'LB Application: Section B company';
  $handler->display->display_options['pane_description'] = 'Displays the fields stored in section B of the application for certification';
  $handler->display->display_options['pane_category']['name'] = 'LB: Applications';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['lb_application_section_b'] = $view;

  $view = new view();
  $view->name = 'lb_application_section_c';
  $view->description = 'Displays section A of the application, when being viewed as a page';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'LB Application: Section C';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Section C';
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
  $handler->display->display_options['empty']['area']['content'] = 'This information cannot be displayed.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Contact: Animal testing for finished goods */
  $handler->display->display_options['fields']['field_lb_tests_goods']['id'] = 'field_lb_tests_goods';
  $handler->display->display_options['fields']['field_lb_tests_goods']['table'] = 'field_data_field_lb_tests_goods';
  $handler->display->display_options['fields']['field_lb_tests_goods']['field'] = 'field_lb_tests_goods';
  /* Field: CRM Core Contact: Animal testing for ingredients */
  $handler->display->display_options['fields']['field_lb_tests_ingredients']['id'] = 'field_lb_tests_ingredients';
  $handler->display->display_options['fields']['field_lb_tests_ingredients']['table'] = 'field_data_field_lb_tests_ingredients';
  $handler->display->display_options['fields']['field_lb_tests_ingredients']['field'] = 'field_lb_tests_ingredients';
  /* Field: CRM Core Contact: Animal testing by affiliates */
  $handler->display->display_options['fields']['field_lb_dirty_affiliates']['id'] = 'field_lb_dirty_affiliates';
  $handler->display->display_options['fields']['field_lb_dirty_affiliates']['table'] = 'field_data_field_lb_dirty_affiliates';
  $handler->display->display_options['fields']['field_lb_dirty_affiliates']['field'] = 'field_lb_dirty_affiliates';
  /* Field: CRM Core Contact: Animal testing by contractor */
  $handler->display->display_options['fields']['field_lb_dirty_contractor']['id'] = 'field_lb_dirty_contractor';
  $handler->display->display_options['fields']['field_lb_dirty_contractor']['table'] = 'field_data_field_lb_dirty_contractor';
  $handler->display->display_options['fields']['field_lb_dirty_contractor']['field'] = 'field_lb_dirty_contractor';
  /* Field: CRM Core Contact: Animal testing by subcontractor */
  $handler->display->display_options['fields']['field_lb_dirty_subcontractor']['id'] = 'field_lb_dirty_subcontractor';
  $handler->display->display_options['fields']['field_lb_dirty_subcontractor']['table'] = 'field_data_field_lb_dirty_subcontractor';
  $handler->display->display_options['fields']['field_lb_dirty_subcontractor']['field'] = 'field_lb_dirty_subcontractor';
  /* Field: CRM Core Contact: Tests before cutoff date */
  $handler->display->display_options['fields']['field_lb_tests_before_cutoff']['id'] = 'field_lb_tests_before_cutoff';
  $handler->display->display_options['fields']['field_lb_tests_before_cutoff']['table'] = 'field_data_field_lb_tests_before_cutoff';
  $handler->display->display_options['fields']['field_lb_tests_before_cutoff']['field'] = 'field_lb_tests_before_cutoff';
  /* Contextual filter: CRM Core Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['contact_id']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company' => 'company',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'LB Application: Section C';
  $handler->display->display_options['pane_description'] = 'Displays the fields stored in section C of the application for certification';
  $handler->display->display_options['pane_category']['name'] = 'LB: Applications';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'contact_id' => array(
      'type' => 'panel',
      'context' => 'entity:crm_core_activity.field_lb_company',
      'context_optional' => 0,
      'panel' => '2',
      'fixed' => '',
      'label' => 'CRM Core Contact: Contact ID',
    ),
  );

  /* Display: Company */
  $handler = $view->new_display('panel_pane', 'Company', 'panel_pane_2');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: CRM Core Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['contact_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_title'] = 'LB Application: Section C company';
  $handler->display->display_options['pane_description'] = 'Displays the fields stored in section C of the application for certification';
  $handler->display->display_options['pane_category']['name'] = 'LB: Applications';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'contact_id' => array(
      'type' => 'panel',
      'context' => 'entity:crm_core_activity.field_lb_company',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'CRM Core Contact: Contact ID',
    ),
  );
  $export['lb_application_section_c'] = $view;

  $view = new view();
  $view->name = 'lb_application_section_d';
  $view->description = 'Displays section D of the application, when being viewed as a page';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'LB Application: Section D';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Section D';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['label'] = 'Manufacturers';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'lb_application_section_d_manufacturers:panel_pane_1';
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view_1']['id'] = 'view_1';
  $handler->display->display_options['footer']['view_1']['table'] = 'views';
  $handler->display->display_options['footer']['view_1']['field'] = 'view';
  $handler->display->display_options['footer']['view_1']['label'] = 'Suppliers';
  $handler->display->display_options['footer']['view_1']['view_to_insert'] = 'lb_application_section_d_suppliers:panel_pane_1';
  /* Relationship: Company contact */
  $handler->display->display_options['relationships']['field_lb_company_target_id']['id'] = 'field_lb_company_target_id';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['table'] = 'field_data_field_lb_company';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['field'] = 'field_lb_company_target_id';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['ui_name'] = 'Company contact';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['label'] = 'Company contact';
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  /* Field: CRM Core Activity: Agree to monitoring */
  $handler->display->display_options['fields']['field_lb_agree_monitoring']['id'] = 'field_lb_agree_monitoring';
  $handler->display->display_options['fields']['field_lb_agree_monitoring']['table'] = 'field_data_field_lb_agree_monitoring';
  $handler->display->display_options['fields']['field_lb_agree_monitoring']['field'] = 'field_lb_agree_monitoring';
  /* Field: CRM Core Activity: Agree to recommit */
  $handler->display->display_options['fields']['field_lb_agree_recommit']['id'] = 'field_lb_agree_recommit';
  $handler->display->display_options['fields']['field_lb_agree_recommit']['table'] = 'field_data_field_lb_agree_recommit';
  $handler->display->display_options['fields']['field_lb_agree_recommit']['field'] = 'field_lb_agree_recommit';
  /* Field: CRM Core Activity: Agree to audit */
  $handler->display->display_options['fields']['field_lb_agree_audit']['id'] = 'field_lb_agree_audit';
  $handler->display->display_options['fields']['field_lb_agree_audit']['table'] = 'field_data_field_lb_agree_audit';
  $handler->display->display_options['fields']['field_lb_agree_audit']['field'] = 'field_lb_agree_audit';
  /* Field: CRM Core Activity: Suppliers option */
  $handler->display->display_options['fields']['field_lb_suppliers_option']['id'] = 'field_lb_suppliers_option';
  $handler->display->display_options['fields']['field_lb_suppliers_option']['table'] = 'field_data_field_lb_suppliers_option';
  $handler->display->display_options['fields']['field_lb_suppliers_option']['field'] = 'field_lb_suppliers_option';
  $handler->display->display_options['fields']['field_lb_suppliers_option']['hide_empty'] = TRUE;
  /* Field: CRM Core Activity: Sample purchase order */
  $handler->display->display_options['fields']['field_lb_sample_purchase_order']['id'] = 'field_lb_sample_purchase_order';
  $handler->display->display_options['fields']['field_lb_sample_purchase_order']['table'] = 'field_data_field_lb_sample_purchase_order';
  $handler->display->display_options['fields']['field_lb_sample_purchase_order']['field'] = 'field_lb_sample_purchase_order';
  $handler->display->display_options['fields']['field_lb_sample_purchase_order']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_lb_sample_purchase_order']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lb_sample_purchase_order']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_lb_sample_purchase_order']['settings'] = array(
    'text' => 'Download [file:name]',
  );
  /* Contextual filter: CRM Core Activity: Activity ID */
  $handler->display->display_options['arguments']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['arguments']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['arguments']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['arguments']['activity_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['activity_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['activity_id']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['activity_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['activity_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['activity_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lb_application' => 'lb_application',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'LB Application: Section D';
  $handler->display->display_options['pane_description'] = 'Displays the fields stored in section D of the application for certification';
  $handler->display->display_options['pane_category']['name'] = 'LB: Applications';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['lb_application_section_d'] = $view;

  $view = new view();
  $view->name = 'lb_application_section_d_company';
  $view->description = 'Displays section D of the application, when being viewed as a page';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'LB Application: Section D company';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Section D';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['id'] = 'field_activity_participants_target_id';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['table'] = 'field_data_field_activity_participants';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['field'] = 'field_activity_participants_target_id';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['required'] = TRUE;
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  /* Field: CRM Core Activity: Agree to monitoring */
  $handler->display->display_options['fields']['field_lb_agree_monitoring']['id'] = 'field_lb_agree_monitoring';
  $handler->display->display_options['fields']['field_lb_agree_monitoring']['table'] = 'field_data_field_lb_agree_monitoring';
  $handler->display->display_options['fields']['field_lb_agree_monitoring']['field'] = 'field_lb_agree_monitoring';
  /* Field: CRM Core Activity: Agree to recommit */
  $handler->display->display_options['fields']['field_lb_agree_recommit']['id'] = 'field_lb_agree_recommit';
  $handler->display->display_options['fields']['field_lb_agree_recommit']['table'] = 'field_data_field_lb_agree_recommit';
  $handler->display->display_options['fields']['field_lb_agree_recommit']['field'] = 'field_lb_agree_recommit';
  /* Field: CRM Core Activity: Agree to audit */
  $handler->display->display_options['fields']['field_lb_agree_audit']['id'] = 'field_lb_agree_audit';
  $handler->display->display_options['fields']['field_lb_agree_audit']['table'] = 'field_data_field_lb_agree_audit';
  $handler->display->display_options['fields']['field_lb_agree_audit']['field'] = 'field_lb_agree_audit';
  /* Contextual filter: CRM Core Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['relationship'] = 'field_activity_participants_target_id';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['contact_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lb_application' => 'lb_application',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'LB Application: Section D company';
  $handler->display->display_options['pane_description'] = 'Displays the fields stored in section D of the application for certification';
  $handler->display->display_options['pane_category']['name'] = 'LB: Applications';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['lb_application_section_d_company'] = $view;

  $view = new view();
  $view->name = 'lb_application_section_d_manufacturers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'LB Application: Section D manufacturers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manufacturers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Manufacturers:';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  /* Relationship: Manufacturers */
  $handler->display->display_options['relationships']['relation_lb_manufacturer_crm_core_contact']['id'] = 'relation_lb_manufacturer_crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_manufacturer_crm_core_contact']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_manufacturer_crm_core_contact']['field'] = 'relation_lb_manufacturer_crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_manufacturer_crm_core_contact']['ui_name'] = 'Manufacturers';
  $handler->display->display_options['relationships']['relation_lb_manufacturer_crm_core_contact']['label'] = 'Manufacturers';
  $handler->display->display_options['relationships']['relation_lb_manufacturer_crm_core_contact']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_lb_manufacturer_crm_core_contact']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_lb_manufacturer_crm_core_contact']['entity_deduplication_right'] = 0;
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['relationship'] = 'relation_lb_manufacturer_crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['relationship'] = 'relation_lb_manufacturer_crm_core_contact';
  $handler->display->display_options['fields']['contact_name']['label'] = '';
  $handler->display->display_options['fields']['contact_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name']['alter']['path'] = 'crm-core/contact/[contact_id]';
  $handler->display->display_options['fields']['contact_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contact_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['contact_name']['settings'] = array(
    'format' => 'default',
    'markup' => 1,
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
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['contact_id']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company' => 'company',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['lb_application_section_d_manufacturers'] = $view;

  $view = new view();
  $view->name = 'lb_application_section_d_suppliers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'LB Application: Section D suppliers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manufacturers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Suppliers:';
  $handler->display->display_options['header']['area']['format'] = 'plain_text';
  /* Relationship: Suppliers */
  $handler->display->display_options['relationships']['relation_lb_supplier_crm_core_contact']['id'] = 'relation_lb_supplier_crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_supplier_crm_core_contact']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_supplier_crm_core_contact']['field'] = 'relation_lb_supplier_crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_supplier_crm_core_contact']['ui_name'] = 'Suppliers';
  $handler->display->display_options['relationships']['relation_lb_supplier_crm_core_contact']['label'] = 'Suppliers';
  $handler->display->display_options['relationships']['relation_lb_supplier_crm_core_contact']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_lb_supplier_crm_core_contact']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_lb_supplier_crm_core_contact']['entity_deduplication_right'] = 0;
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['relationship'] = 'relation_lb_supplier_crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['relationship'] = 'relation_lb_supplier_crm_core_contact';
  $handler->display->display_options['fields']['contact_name']['label'] = '';
  $handler->display->display_options['fields']['contact_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name']['alter']['path'] = 'crm-core/contact/[contact_id]';
  $handler->display->display_options['fields']['contact_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contact_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['contact_name']['settings'] = array(
    'format' => 'default',
    'markup' => 1,
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
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['contact_id']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company' => 'company',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['lb_application_section_d_suppliers'] = $view;

  $view = new view();
  $view->name = 'lb_application_section_e';
  $view->description = 'Displays section A of the application, when being viewed as a page';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'LB Application: Section E';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Section E';
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
  $handler->display->display_options['empty']['area']['content'] = 'This information cannot be displayed.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Application */
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['id'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['field'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['ui_name'] = 'Application';
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['label'] = 'Application';
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: Field: Uses distributors */
  $handler->display->display_options['fields']['field_lb_distributors']['id'] = 'field_lb_distributors';
  $handler->display->display_options['fields']['field_lb_distributors']['table'] = 'field_data_field_lb_distributors';
  $handler->display->display_options['fields']['field_lb_distributors']['field'] = 'field_lb_distributors';
  $handler->display->display_options['fields']['field_lb_distributors']['relationship'] = 'reverse_field_lb_company_crm_core_activity';
  /* Field: CRM Core Activity: Distributor contract */
  $handler->display->display_options['fields']['field_lb_distributor_contract']['id'] = 'field_lb_distributor_contract';
  $handler->display->display_options['fields']['field_lb_distributor_contract']['table'] = 'field_data_field_lb_distributor_contract';
  $handler->display->display_options['fields']['field_lb_distributor_contract']['field'] = 'field_lb_distributor_contract';
  $handler->display->display_options['fields']['field_lb_distributor_contract']['relationship'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['fields']['field_lb_distributor_contract']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_lb_distributor_contract']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lb_distributor_contract']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_lb_distributor_contract']['settings'] = array(
    'text' => 'Download [file:name]',
  );
  /* Sort criterion: CRM Core Activity: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: CRM Core Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['contact_id']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: CRM Core Activity: Activity ID */
  $handler->display->display_options['arguments']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['arguments']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['arguments']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['arguments']['activity_id']['relationship'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['arguments']['activity_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['activity_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['activity_id']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['activity_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['activity_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['activity_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company' => 'company',
  );
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'lb_application' => 'lb_application',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'LB Application: Section E';
  $handler->display->display_options['pane_description'] = 'Displays the fields stored in section E of the application for certification';
  $handler->display->display_options['pane_category']['name'] = 'LB: Applications';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'contact_id' => array(
      'type' => 'panel',
      'context' => 'entity:crm_core_activity.field_lb_company',
      'context_optional' => 0,
      'panel' => '2',
      'fixed' => '',
      'label' => 'CRM Core Contact: Contact ID',
    ),
  );

  /* Display: Company */
  $handler = $view->new_display('panel_pane', 'Company', 'panel_pane_2');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: CRM Core Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['contact_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_title'] = 'LB Application: Section E company';
  $handler->display->display_options['pane_description'] = 'Displays the fields stored in section E of the application for certification';
  $handler->display->display_options['pane_category']['name'] = 'LB: Applications';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'contact_id' => array(
      'type' => 'panel',
      'context' => 'entity:crm_core_activity.field_lb_company',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'CRM Core Contact: Contact ID',
    ),
  );
  $export['lb_application_section_e'] = $view;

  $view = new view();
  $view->name = 'lb_application_section_f';
  $view->description = 'Displays section A of the application, when being viewed as a page';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'LB Application: Section F';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Section F';
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
  $handler->display->display_options['empty']['area']['content'] = 'This information cannot be displayed.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Contact: Brands */
  $handler->display->display_options['fields']['field_lb_brands']['id'] = 'field_lb_brands';
  $handler->display->display_options['fields']['field_lb_brands']['table'] = 'field_data_field_lb_brands';
  $handler->display->display_options['fields']['field_lb_brands']['field'] = 'field_lb_brands';
  $handler->display->display_options['fields']['field_lb_brands']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_lb_brands']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_lb_brands']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_lb_brands']['multi_type'] = 'ul';
  /* Contextual filter: CRM Core Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['contact_id']['default_argument_options']['index'] = '2';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company' => 'company',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'LB Application: Section F';
  $handler->display->display_options['pane_description'] = 'Displays the fields stored in section F of the application for certification';
  $handler->display->display_options['pane_category']['name'] = 'LB: Applications';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'contact_id' => array(
      'type' => 'panel',
      'context' => 'entity:crm_core_activity.field_lb_company',
      'context_optional' => 0,
      'panel' => '2',
      'fixed' => '',
      'label' => 'CRM Core Contact: Contact ID',
    ),
  );

  /* Display: Company */
  $handler = $view->new_display('panel_pane', 'Company', 'panel_pane_2');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: CRM Core Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['contact_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['pane_title'] = 'LB Application: Section F company';
  $handler->display->display_options['pane_description'] = 'Displays the fields stored in section F of the application for certification';
  $handler->display->display_options['pane_category']['name'] = 'LB: Applications';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'contact_id' => array(
      'type' => 'panel',
      'context' => 'entity:crm_core_activity.field_lb_company',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'CRM Core Contact: Contact ID',
    ),
  );
  $export['lb_application_section_f'] = $view;

  $view = new view();
  $view->name = 'lb_application_section_g';
  $view->description = 'Displays section D of the application, when being viewed as a page';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'LB Application: Section G';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Section G';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  /* Field: CRM Core Activity: Signatory company */
  $handler->display->display_options['fields']['field_lb_sig_company']['id'] = 'field_lb_sig_company';
  $handler->display->display_options['fields']['field_lb_sig_company']['table'] = 'field_data_field_lb_sig_company';
  $handler->display->display_options['fields']['field_lb_sig_company']['field'] = 'field_lb_sig_company';
  /* Field: CRM Core Activity: Signatory date */
  $handler->display->display_options['fields']['field_lb_sig_date']['id'] = 'field_lb_sig_date';
  $handler->display->display_options['fields']['field_lb_sig_date']['table'] = 'field_data_field_lb_sig_date';
  $handler->display->display_options['fields']['field_lb_sig_date']['field'] = 'field_lb_sig_date';
  $handler->display->display_options['fields']['field_lb_sig_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: CRM Core Activity: Signatory email */
  $handler->display->display_options['fields']['field_lb_sig_mail']['id'] = 'field_lb_sig_mail';
  $handler->display->display_options['fields']['field_lb_sig_mail']['table'] = 'field_data_field_lb_sig_mail';
  $handler->display->display_options['fields']['field_lb_sig_mail']['field'] = 'field_lb_sig_mail';
  /* Field: CRM Core Activity: Signatory name */
  $handler->display->display_options['fields']['field_lb_sig_name']['id'] = 'field_lb_sig_name';
  $handler->display->display_options['fields']['field_lb_sig_name']['table'] = 'field_data_field_lb_sig_name';
  $handler->display->display_options['fields']['field_lb_sig_name']['field'] = 'field_lb_sig_name';
  /* Field: CRM Core Activity: Signatory title */
  $handler->display->display_options['fields']['field_lb_sig_title']['id'] = 'field_lb_sig_title';
  $handler->display->display_options['fields']['field_lb_sig_title']['table'] = 'field_data_field_lb_sig_title';
  $handler->display->display_options['fields']['field_lb_sig_title']['field'] = 'field_lb_sig_title';
  /* Contextual filter: CRM Core Activity: Activity ID */
  $handler->display->display_options['arguments']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['arguments']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['arguments']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['arguments']['activity_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['activity_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['activity_id']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['activity_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['activity_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['activity_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lb_application' => 'lb_application',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'LB Application: Section G';
  $handler->display->display_options['pane_description'] = 'Displays the fields stored in section G of the application for certification';
  $handler->display->display_options['pane_category']['name'] = 'LB: Applications';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $export['lb_application_section_g'] = $view;

  $view = new view();
  $view->name = 'lb_application_section_g_company_page';
  $view->description = 'Displays section D of the application, when being viewed as a page';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'LB Application: Section G company page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Section G';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['id'] = 'field_activity_participants_target_id';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['table'] = 'field_data_field_activity_participants';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['field'] = 'field_activity_participants_target_id';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['required'] = TRUE;
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  /* Field: CRM Core Activity: Signatory company */
  $handler->display->display_options['fields']['field_lb_sig_company']['id'] = 'field_lb_sig_company';
  $handler->display->display_options['fields']['field_lb_sig_company']['table'] = 'field_data_field_lb_sig_company';
  $handler->display->display_options['fields']['field_lb_sig_company']['field'] = 'field_lb_sig_company';
  /* Field: CRM Core Activity: Signatory date */
  $handler->display->display_options['fields']['field_lb_sig_date']['id'] = 'field_lb_sig_date';
  $handler->display->display_options['fields']['field_lb_sig_date']['table'] = 'field_data_field_lb_sig_date';
  $handler->display->display_options['fields']['field_lb_sig_date']['field'] = 'field_lb_sig_date';
  $handler->display->display_options['fields']['field_lb_sig_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: CRM Core Activity: Signatory email */
  $handler->display->display_options['fields']['field_lb_sig_mail']['id'] = 'field_lb_sig_mail';
  $handler->display->display_options['fields']['field_lb_sig_mail']['table'] = 'field_data_field_lb_sig_mail';
  $handler->display->display_options['fields']['field_lb_sig_mail']['field'] = 'field_lb_sig_mail';
  /* Field: CRM Core Activity: Signatory name */
  $handler->display->display_options['fields']['field_lb_sig_name']['id'] = 'field_lb_sig_name';
  $handler->display->display_options['fields']['field_lb_sig_name']['table'] = 'field_data_field_lb_sig_name';
  $handler->display->display_options['fields']['field_lb_sig_name']['field'] = 'field_lb_sig_name';
  /* Field: CRM Core Activity: Signatory title */
  $handler->display->display_options['fields']['field_lb_sig_title']['id'] = 'field_lb_sig_title';
  $handler->display->display_options['fields']['field_lb_sig_title']['table'] = 'field_data_field_lb_sig_title';
  $handler->display->display_options['fields']['field_lb_sig_title']['field'] = 'field_lb_sig_title';
  /* Contextual filter: CRM Core Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['relationship'] = 'field_activity_participants_target_id';
  $handler->display->display_options['arguments']['contact_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['contact_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['contact_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['contact_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['contact_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lb_application' => 'lb_application',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'LB Application: Section G company';
  $handler->display->display_options['pane_description'] = 'Displays the fields stored in section G of the application for certification';
  $handler->display->display_options['pane_category']['name'] = 'LB: Applications';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['argument_input'] = array(
    'contact_id' => array(
      'type' => 'panel',
      'context' => 'entity:crm_core_activity.activity-id',
      'context_optional' => 0,
      'panel' => '2',
      'fixed' => '',
      'label' => 'CRM Core Contact: Contact ID',
    ),
  );
  $export['lb_application_section_g_company_page'] = $view;

  $view = new view();
  $view->name = 'lb_applications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'LB Applications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Applications';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_company_target_id']['id'] = 'field_lb_company_target_id';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['table'] = 'field_data_field_lb_company';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['field'] = 'field_lb_company_target_id';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['label'] = 'company';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['id'] = 'field_lb_primary_contact_target_id';
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['table'] = 'field_data_field_lb_primary_contact';
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['field'] = 'field_lb_primary_contact_target_id';
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['label'] = 'primary contact';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_lb_application_request_crm_core_activity']['id'] = 'reverse_field_lb_application_request_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_lb_application_request_crm_core_activity']['table'] = 'crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_lb_application_request_crm_core_activity']['field'] = 'reverse_field_lb_application_request_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_lb_application_request_crm_core_activity']['label'] = 'approval or denial';
  /* Field: Bulk operations: CRM Core Activity */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::lb_application_report_approve_request' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_application_report_deny_request' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['contact_name']['label'] = 'Company name';
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
  $handler->display->display_options['fields']['contact_name']['group_column'] = 'entity_id';
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name_1']['id'] = 'contact_name_1';
  $handler->display->display_options['fields']['contact_name_1']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name_1']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name_1']['relationship'] = 'field_lb_primary_contact_target_id';
  $handler->display->display_options['fields']['contact_name_1']['label'] = 'Primary contact';
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
  $handler->display->display_options['fields']['contact_name_1']['group_column'] = 'entity_id';
  /* Field: Field: Business Address */
  $handler->display->display_options['fields']['field_ao_business_address']['id'] = 'field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['table'] = 'field_data_field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['field'] = 'field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['field_ao_business_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_ao_business_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_ao_business_address']['group_column'] = 'entity_id';
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_ao_website']['id'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['table'] = 'field_data_field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['field'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['field_ao_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ao_website']['group_column'] = 'entity_id';
  /* Field: CRM Core Contact: Parent company */
  $handler->display->display_options['fields']['field_lb_parent_company']['id'] = 'field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['table'] = 'field_data_field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['field'] = 'field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['relationship'] = 'field_lb_company_target_id';
  /* Field: CRM Core Contact: Referred by */
  $handler->display->display_options['fields']['field_lb_referred_by']['id'] = 'field_lb_referred_by';
  $handler->display->display_options['fields']['field_lb_referred_by']['table'] = 'field_data_field_lb_referred_by';
  $handler->display->display_options['fields']['field_lb_referred_by']['field'] = 'field_lb_referred_by';
  $handler->display->display_options['fields']['field_lb_referred_by']['relationship'] = 'field_lb_company_target_id';
  /* Field: CRM Core Activity Type: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'crm_core_activity_type';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['relationship'] = 'reverse_field_lb_application_request_crm_core_activity';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['exclude'] = TRUE;
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Status';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[label]';
  $handler->display->display_options['fields']['nothing']['empty'] = 'Pending';
  /* Sort criterion: CRM Core Activity: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'reverse_field_lb_application_request_crm_core_activity';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lb_application' => 'lb_application',
  );
  /* Filter criterion: CRM Core Contact: Company */
  $handler->display->display_options['filters']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['filters']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['filters']['contact_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['contact_name']['expose']['operator_id'] = 'contact_name_op';
  $handler->display->display_options['filters']['contact_name']['expose']['label'] = 'Company';
  $handler->display->display_options['filters']['contact_name']['expose']['operator'] = 'contact_name_op';
  $handler->display->display_options['filters']['contact_name']['expose']['identifier'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: CRM Core Contact: Company */
  $handler->display->display_options['filters']['contact_name_1']['id'] = 'contact_name_1';
  $handler->display->display_options['filters']['contact_name_1']['table'] = 'field_data_contact_name';
  $handler->display->display_options['filters']['contact_name_1']['field'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name_1']['relationship'] = 'field_lb_primary_contact_target_id';
  $handler->display->display_options['filters']['contact_name_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['contact_name_1']['expose']['operator_id'] = 'contact_name_1_op';
  $handler->display->display_options['filters']['contact_name_1']['expose']['label'] = 'Company';
  $handler->display->display_options['filters']['contact_name_1']['expose']['operator'] = 'contact_name_1_op';
  $handler->display->display_options['filters']['contact_name_1']['expose']['identifier'] = 'contact_name_1';
  $handler->display->display_options['filters']['contact_name_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'crm-core/reports/lba/applications/overview';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Overview';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['menu']['name'] = 'crm-core-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Applications';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'features';
  $export['lb_applications'] = $view;

  $view = new view();
  $view->name = 'lb_applications_active';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'LB Applications Active';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Applications - Active Companies';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'contact_id' => 'contact_id',
    'activity_id' => 'activity_id',
    'views_bulk_operations' => 'views_bulk_operations',
    'contact_name' => 'contact_name',
    'contact_name_family' => 'contact_name_family',
    'created' => 'created',
    'type' => 'type',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'contact_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'activity_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
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
    'contact_name_family' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
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
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="results-summary">Displaying @start - @end of @total</div>
<div class="detail-buttons">
<div class="btn btn-orange btn-simple"><a href="/crm-core/reports/lb_applications/active/csv-export">Export to CSV</a></div>
</div>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no approved applications at this time.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['id'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['table'] = 'field_data_field_lb_current_application';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['field'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['label'] = 'Application';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['id'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['table'] = 'field_data_field_lb_application_outcome';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['field'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['label'] = 'Status(outcome)';
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['fields']['activity_id']['label'] = 'Application Activity ID';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['activity_id']['separator'] = '';
  /* Field: Bulk operations: CRM Core Contact */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::lb_application_report_approve_application' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_registration_application_close' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_application_report_recommitment_due' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_registration_application_cancel' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['exclude'] = TRUE;
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
  /* Field: Name Components: Family */
  $handler->display->display_options['fields']['contact_name_family']['id'] = 'contact_name_family';
  $handler->display->display_options['fields']['contact_name_family']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name_family']['field'] = 'contact_name_family';
  $handler->display->display_options['fields']['contact_name_family']['label'] = 'Company';
  $handler->display->display_options['fields']['contact_name_family']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name_family']['alter']['path'] = 'crm-core/contact/[contact_id]';
  /* Field: CRM Core Activity: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: CRM Core Activity: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['fields']['type']['label'] = 'Status';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View Application';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]';
  /* Sort criterion: CRM Core Activity: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company' => 'company',
  );
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'lb_company_application_approved' => 'lb_company_application_approved',
    'lb_recommitment_due' => 'lb_recommitment_due',
    'lb_recommitment_submitted' => 'lb_recommitment_submitted',
  );
  /* Filter criterion: CRM Core Contact: Company */
  $handler->display->display_options['filters']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['filters']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['contact_name']['expose']['operator_id'] = 'contact_name_op';
  $handler->display->display_options['filters']['contact_name']['expose']['label'] = 'Company';
  $handler->display->display_options['filters']['contact_name']['expose']['operator'] = 'contact_name_op';
  $handler->display->display_options['filters']['contact_name']['expose']['identifier'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'crm-core/reports/lb_applications/active';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Active Companies';
  $handler->display->display_options['menu']['weight'] = '-4';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Applications';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'crm-core/reports/lb_applications/active/csv-export';
  $export['lb_applications_active'] = $view;

  $view = new view();
  $view->name = 'lb_applications_for_certification';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'LB Applications for Certification';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Applications - All';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'contact_id' => 'contact_id',
    'activity_id' => 'activity_id',
    'views_bulk_operations' => 'views_bulk_operations',
    'contact_name' => 'contact_name',
    'created' => 'created',
    'type' => 'type',
    'nothing' => 'nothing',
    'field_lb_primary_contact' => 'field_lb_primary_contact',
    'contact_name_family' => 'contact_name_family',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'contact_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'activity_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
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
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
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
    'field_lb_primary_contact' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'contact_name_family' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="results-summary">Displaying @start - @end of @total</div>
<div class="detail-buttons">
<div class="btn btn-orange btn-simple"><a href="/crm-core/reports/lb_applications/all/csv-export">Export to CSV</a></div>
</div>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Looks like there is no applications yet.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['id'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['table'] = 'field_data_field_lb_current_application';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['field'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['label'] = 'Application';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['id'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['table'] = 'field_data_field_lb_application_outcome';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['field'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['label'] = 'Status(outcome)';
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['fields']['activity_id']['label'] = 'Application Activity ID';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['activity_id']['separator'] = '';
  /* Field: Bulk operations: CRM Core Contact */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::lb_application_report_approve_application' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_application_report_deny_application' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
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
  /* Field: CRM Core Activity: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: CRM Core Activity: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['fields']['type']['label'] = 'Status';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View Application';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]';
  /* Sort criterion: CRM Core Activity: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company' => 'company',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['fields']['activity_id']['label'] = 'Application Activity ID';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['activity_id']['separator'] = '';
  /* Field: Bulk operations: CRM Core Contact */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::lb_application_report_approve_application' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_registration_application_close' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_application_report_recommitment_due' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_registration_application_cancel' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['exclude'] = TRUE;
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
  /* Field: Name Components: Family */
  $handler->display->display_options['fields']['contact_name_family']['id'] = 'contact_name_family';
  $handler->display->display_options['fields']['contact_name_family']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name_family']['field'] = 'contact_name_family';
  $handler->display->display_options['fields']['contact_name_family']['label'] = 'Company';
  $handler->display->display_options['fields']['contact_name_family']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name_family']['alter']['path'] = 'crm-core/contact/[contact_id]';
  /* Field: CRM Core Activity: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: CRM Core Activity: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['fields']['type']['label'] = 'Status';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View Application';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]';
  /* Field: CRM Core Activity: Primary contact */
  $handler->display->display_options['fields']['field_lb_primary_contact']['id'] = 'field_lb_primary_contact';
  $handler->display->display_options['fields']['field_lb_primary_contact']['table'] = 'field_data_field_lb_primary_contact';
  $handler->display->display_options['fields']['field_lb_primary_contact']['field'] = 'field_lb_primary_contact';
  $handler->display->display_options['fields']['field_lb_primary_contact']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['path'] = 'crm-core/reports/lb_applications/all';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Applications';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Applications';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'crm-core/reports/lb_applications/all/csv-export';
  $export['lb_applications_for_certification'] = $view;

  $view = new view();
  $view->name = 'lb_applications_for_certification_approved';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'LB Applications for Certification Approved';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Applications - Approved';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'contact_id' => 'contact_id',
    'activity_id' => 'activity_id',
    'views_bulk_operations' => 'views_bulk_operations',
    'contact_name' => 'contact_name',
    'contact_name_family' => 'contact_name_family',
    'created' => 'created',
    'type' => 'type',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'contact_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'activity_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
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
    'contact_name_family' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
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
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="results-summary">Displaying @start - @end of @total</div>
<div class="detail-buttons">
<div class="btn btn-orange btn-simple"><a href="/crm-core/reports/lb_applications/approved/csv-export">Export to CSV</a></div>
</div>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no approved applications at this time.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['id'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['table'] = 'field_data_field_lb_current_application';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['field'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['label'] = 'Application';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['id'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['table'] = 'field_data_field_lb_application_outcome';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['field'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['label'] = 'Status(outcome)';
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['fields']['activity_id']['label'] = 'Application Activity ID';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['activity_id']['separator'] = '';
  /* Field: Bulk operations: CRM Core Contact */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::lb_application_report_approve_application' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_registration_application_close' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_application_report_recommitment_due' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_registration_application_cancel' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['exclude'] = TRUE;
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
  /* Field: Name Components: Family */
  $handler->display->display_options['fields']['contact_name_family']['id'] = 'contact_name_family';
  $handler->display->display_options['fields']['contact_name_family']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name_family']['field'] = 'contact_name_family';
  $handler->display->display_options['fields']['contact_name_family']['label'] = 'Company';
  $handler->display->display_options['fields']['contact_name_family']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name_family']['alter']['path'] = 'crm-core/contact/[contact_id]';
  /* Field: CRM Core Activity: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: CRM Core Activity: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['fields']['type']['label'] = 'Status';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View Application';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]';
  /* Sort criterion: CRM Core Activity: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company' => 'company',
  );
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'lb_company_application_approved' => 'lb_company_application_approved',
  );
  /* Filter criterion: CRM Core Contact: Company */
  $handler->display->display_options['filters']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['filters']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['contact_name']['expose']['operator_id'] = 'contact_name_op';
  $handler->display->display_options['filters']['contact_name']['expose']['label'] = 'Company';
  $handler->display->display_options['filters']['contact_name']['expose']['operator'] = 'contact_name_op';
  $handler->display->display_options['filters']['contact_name']['expose']['identifier'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'crm-core/reports/lb_applications/approved';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Approved';
  $handler->display->display_options['menu']['weight'] = '-7';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Applications';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'crm-core/reports/lb_applications/approved/csv-export';
  $export['lb_applications_for_certification_approved'] = $view;

  $view = new view();
  $view->name = 'lb_applications_for_certification_closed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'LB Applications for Certification Closed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Applications - Closed';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="results-summary">Displaying @start - @end of @total</div>
<div class="detail-buttons">
<div class="btn btn-orange btn-simple"><a href="/crm-core/reports/lb_applications/denied/csv-export">Export to CSV</a></div>
</div>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no closed applications at this time.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['id'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['table'] = 'field_data_field_lb_current_application';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['field'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['label'] = 'Application';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['id'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['table'] = 'field_data_field_lb_application_outcome';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['field'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['label'] = 'Status(outcome)';
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['fields']['activity_id']['label'] = 'Application Activity ID';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['activity_id']['separator'] = '';
  /* Field: Bulk operations: CRM Core Contact */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::lb_application_report_approve_application' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_registration_application_close' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_application_report_recommitment_due' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_registration_application_cancel' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['exclude'] = TRUE;
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
  /* Field: Name Components: Family */
  $handler->display->display_options['fields']['contact_name_family']['id'] = 'contact_name_family';
  $handler->display->display_options['fields']['contact_name_family']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name_family']['field'] = 'contact_name_family';
  $handler->display->display_options['fields']['contact_name_family']['label'] = 'Company';
  $handler->display->display_options['fields']['contact_name_family']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name_family']['alter']['path'] = 'crm-core/contact/[contact_id]';
  /* Field: CRM Core Activity: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: CRM Core Activity: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['fields']['type']['label'] = 'Status';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View Application';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]';
  /* Sort criterion: CRM Core Activity: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company' => 'company',
  );
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'lb_company_application_closed' => 'lb_company_application_closed',
  );
  /* Filter criterion: CRM Core Contact: Company */
  $handler->display->display_options['filters']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['filters']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['contact_name']['expose']['operator_id'] = 'contact_name_op';
  $handler->display->display_options['filters']['contact_name']['expose']['label'] = 'Company';
  $handler->display->display_options['filters']['contact_name']['expose']['operator'] = 'contact_name_op';
  $handler->display->display_options['filters']['contact_name']['expose']['identifier'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'crm-core/reports/lb_applications/closed';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Closed';
  $handler->display->display_options['menu']['weight'] = '-4';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Applications';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'crm-core/reports/lb_applications/closed/csv-export';
  $export['lb_applications_for_certification_closed'] = $view;

  $view = new view();
  $view->name = 'lb_applications_for_certification_denied';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'LB Applications for Certification Denied';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Applications - Denied';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="results-summary">Displaying @start - @end of @total</div>
<div class="detail-buttons">
<div class="btn btn-orange btn-simple"><a href="/crm-core/reports/lb_applications/denied/csv-export">Export to CSV</a></div>
</div>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no denied applications at this time.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['id'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['table'] = 'field_data_field_lb_current_application';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['field'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['label'] = 'Application';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['id'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['table'] = 'field_data_field_lb_application_outcome';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['field'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['label'] = 'Status(outcome)';
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['fields']['activity_id']['label'] = 'Application Activity ID';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['activity_id']['separator'] = '';
  /* Field: Bulk operations: CRM Core Contact */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::lb_application_report_approve_application' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_registration_application_cancel' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_registration_application_close' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_application_report_deny_application' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
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
  /* Field: CRM Core Activity: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: CRM Core Activity: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['fields']['type']['label'] = 'Status';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View Application';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]';
  /* Sort criterion: CRM Core Activity: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company' => 'company',
  );
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'lb_company_application_rejected' => 'lb_company_application_rejected',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['path'] = 'crm-core/reports/lb_applications/denied';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Denied';
  $handler->display->display_options['menu']['weight'] = '-6';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Applications';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'crm-core/reports/lb_applications/denied/csv-export';
  $export['lb_applications_for_certification_denied'] = $view;

  $view = new view();
  $view->name = 'lb_applications_for_certification_pending';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'LB Applications for Certification Pending';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Applications - Pending';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'contact_id' => 'contact_id',
    'activity_id' => 'activity_id',
    'views_bulk_operations' => 'views_bulk_operations',
    'contact_name' => 'contact_name',
    'contact_name_family' => 'contact_name_family',
    'created' => 'created',
    'type' => 'type',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'contact_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'activity_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
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
    'contact_name_family' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
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
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="results-summary">Displaying @start - @end of @total</div>
<div class="detail-buttons">
  <div class="btn btn-orange btn-simple"><a href="/crm-core/reports/lb_applications/pending/csv-export">Export to CSV</a></div>
</div>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Looks like there is no pending  applications.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['id'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['table'] = 'field_data_field_lb_current_application';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['field'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['label'] = 'Application';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['id'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['table'] = 'field_data_field_lb_application_outcome';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['field'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['label'] = 'Status(outcome)';
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['fields']['activity_id']['label'] = 'Application Activity ID';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['activity_id']['separator'] = '';
  /* Field: Bulk operations: CRM Core Contact */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::lb_application_report_approve_application' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_registration_application_close' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_application_report_recommitment_due' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_registration_application_cancel' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['exclude'] = TRUE;
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
  /* Field: Name Components: Family */
  $handler->display->display_options['fields']['contact_name_family']['id'] = 'contact_name_family';
  $handler->display->display_options['fields']['contact_name_family']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name_family']['field'] = 'contact_name_family';
  $handler->display->display_options['fields']['contact_name_family']['label'] = 'Company';
  $handler->display->display_options['fields']['contact_name_family']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name_family']['alter']['path'] = 'crm-core/contact/[contact_id]';
  /* Field: CRM Core Activity: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: CRM Core Activity: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['fields']['type']['label'] = 'Status';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View Application';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]';
  /* Sort criterion: CRM Core Activity: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company' => 'company',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'lb_company_application_initiated' => 'lb_company_application_initiated',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 2;
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type_2']['id'] = 'type_2';
  $handler->display->display_options['filters']['type_2']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type_2']['field'] = 'type';
  $handler->display->display_options['filters']['type_2']['relationship'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['filters']['type_2']['operator'] = 'empty';
  $handler->display->display_options['filters']['type_2']['group'] = 2;
  /* Filter criterion: CRM Core Contact: Company */
  $handler->display->display_options['filters']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['filters']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['contact_name']['expose']['operator_id'] = 'contact_name_op';
  $handler->display->display_options['filters']['contact_name']['expose']['label'] = 'Company';
  $handler->display->display_options['filters']['contact_name']['expose']['operator'] = 'contact_name_op';
  $handler->display->display_options['filters']['contact_name']['expose']['identifier'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'crm-core/reports/lb_applications/pending';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Pending';
  $handler->display->display_options['menu']['weight'] = '-9';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Applications';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'crm-core/reports/lb_applications/pending/csv-export';
  $export['lb_applications_for_certification_pending'] = $view;

  $view = new view();
  $view->name = 'lb_applications_for_certification_removed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'LB Applications for Certification Removed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Applications - Removed';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'contact_id' => 'contact_id',
    'activity_id' => 'activity_id',
    'views_bulk_operations' => 'views_bulk_operations',
    'contact_name' => 'contact_name',
    'contact_name_family' => 'contact_name_family',
    'created' => 'created',
    'type' => 'type',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'contact_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'activity_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
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
    'contact_name_family' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
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
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="results-summary">Displaying @start - @end of @total</div>
<div class="detail-buttons">
<div class="btn btn-orange btn-simple"><a href="/crm-core/reports/lb_applications/denied/csv-export">Export to CSV</a></div>
</div>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no removed applications at this time.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['id'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['table'] = 'field_data_field_lb_current_application';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['field'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['label'] = 'Application';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['id'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['table'] = 'field_data_field_lb_application_outcome';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['field'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['label'] = 'Status(outcome)';
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['fields']['activity_id']['label'] = 'Application Activity ID';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['activity_id']['separator'] = '';
  /* Field: Bulk operations: CRM Core Contact */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::lb_application_report_approve_application' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_registration_application_close' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_application_report_recommitment_due' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_registration_application_cancel' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['exclude'] = TRUE;
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
  /* Field: Name Components: Family */
  $handler->display->display_options['fields']['contact_name_family']['id'] = 'contact_name_family';
  $handler->display->display_options['fields']['contact_name_family']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name_family']['field'] = 'contact_name_family';
  $handler->display->display_options['fields']['contact_name_family']['label'] = 'Company';
  $handler->display->display_options['fields']['contact_name_family']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name_family']['alter']['path'] = 'crm-core/contact/[contact_id]';
  /* Field: CRM Core Activity: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: CRM Core Activity: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['fields']['type']['label'] = 'Status';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View Application';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]';
  /* Sort criterion: CRM Core Activity: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company' => 'company',
  );
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'lb_company_application_canceled' => 'lb_company_application_canceled',
  );
  /* Filter criterion: CRM Core Contact: Company */
  $handler->display->display_options['filters']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['filters']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['contact_name']['expose']['operator_id'] = 'contact_name_op';
  $handler->display->display_options['filters']['contact_name']['expose']['label'] = 'Company';
  $handler->display->display_options['filters']['contact_name']['expose']['operator'] = 'contact_name_op';
  $handler->display->display_options['filters']['contact_name']['expose']['identifier'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'crm-core/reports/lb_applications/removed';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Removed';
  $handler->display->display_options['menu']['weight'] = '-3';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Applications';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'crm-core/reports/lb_applications/removed/csv-export';
  $export['lb_applications_for_certification_removed'] = $view;

  $view = new view();
  $view->name = 'lb_applications_for_certification_submitted';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'LB Applications for Certification Submitted';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Applications - Submitted';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'contact_id' => 'contact_id',
    'activity_id' => 'activity_id',
    'views_bulk_operations' => 'views_bulk_operations',
    'contact_name' => 'contact_name',
    'contact_name_family' => 'contact_name_family',
    'created' => 'created',
    'type' => 'type',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'contact_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'activity_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
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
    'contact_name_family' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
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
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="results-summary">Displaying @start - @end of @total</div>
<div class="detail-buttons">
<div class="btn btn-orange btn-simple"><a href="/crm-core/reports/lb_applications/submitted/csv-export">Export to CSV</a></div>
</div>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no completed applications waiting for a decision at this time.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['id'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['table'] = 'field_data_field_lb_current_application';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['field'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['label'] = 'Application';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['id'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['table'] = 'field_data_field_lb_application_outcome';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['field'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['label'] = 'Status(outcome)';
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['fields']['activity_id']['label'] = 'Application Activity ID';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['activity_id']['separator'] = '';
  /* Field: Bulk operations: CRM Core Contact */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::lb_application_report_approve_application' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_registration_application_close' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_application_report_recommitment_due' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_registration_application_cancel' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['exclude'] = TRUE;
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
  /* Field: Name Components: Family */
  $handler->display->display_options['fields']['contact_name_family']['id'] = 'contact_name_family';
  $handler->display->display_options['fields']['contact_name_family']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name_family']['field'] = 'contact_name_family';
  $handler->display->display_options['fields']['contact_name_family']['label'] = 'Company';
  $handler->display->display_options['fields']['contact_name_family']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name_family']['alter']['path'] = 'crm-core/contact/[contact_id]';
  /* Field: CRM Core Activity: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: CRM Core Activity: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['fields']['type']['label'] = 'Status';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View Application';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]';
  /* Sort criterion: CRM Core Activity: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company' => 'company',
  );
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'lb_company_application_submitted' => 'lb_company_application_submitted',
    'lb_recommitment_submitted' => 'lb_recommitment_submitted',
  );
  /* Filter criterion: CRM Core Contact: Company */
  $handler->display->display_options['filters']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['filters']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['contact_name']['expose']['operator_id'] = 'contact_name_op';
  $handler->display->display_options['filters']['contact_name']['expose']['label'] = 'Company';
  $handler->display->display_options['filters']['contact_name']['expose']['operator'] = 'contact_name_op';
  $handler->display->display_options['filters']['contact_name']['expose']['identifier'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'crm-core/reports/lb_applications/submitted';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Submitted';
  $handler->display->display_options['menu']['weight'] = '-8';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Applications';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'crm-core/reports/lb_applications/submitted/csv-export';
  $export['lb_applications_for_certification_submitted'] = $view;

  $view = new view();
  $view->name = 'lb_applications_pending';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'LB Applications Pending';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Applications Pending';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No applications are pending.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_company_target_id']['id'] = 'field_lb_company_target_id';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['table'] = 'field_data_field_lb_company';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['field'] = 'field_lb_company_target_id';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['label'] = 'company';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['id'] = 'field_lb_primary_contact_target_id';
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['table'] = 'field_data_field_lb_primary_contact';
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['field'] = 'field_lb_primary_contact_target_id';
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['label'] = 'primary contact';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_application_request_target_id']['id'] = 'field_lb_application_request_target_id';
  $handler->display->display_options['relationships']['field_lb_application_request_target_id']['table'] = 'field_data_field_lb_application_request';
  $handler->display->display_options['relationships']['field_lb_application_request_target_id']['field'] = 'field_lb_application_request_target_id';
  $handler->display->display_options['relationships']['field_lb_application_request_target_id']['label'] = 'request';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_request_outcome_target_id']['id'] = 'field_lb_request_outcome_target_id';
  $handler->display->display_options['relationships']['field_lb_request_outcome_target_id']['table'] = 'field_data_field_lb_request_outcome';
  $handler->display->display_options['relationships']['field_lb_request_outcome_target_id']['field'] = 'field_lb_request_outcome_target_id';
  $handler->display->display_options['relationships']['field_lb_request_outcome_target_id']['relationship'] = 'field_lb_application_request_target_id';
  $handler->display->display_options['relationships']['field_lb_request_outcome_target_id']['label'] = 'approval';
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['contact_name']['group_column'] = 'entity_id';
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name_1']['id'] = 'contact_name_1';
  $handler->display->display_options['fields']['contact_name_1']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name_1']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name_1']['relationship'] = 'field_lb_primary_contact_target_id';
  $handler->display->display_options['fields']['contact_name_1']['label'] = 'Primary contact';
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
  $handler->display->display_options['fields']['contact_name_1']['group_column'] = 'entity_id';
  /* Field: Field: Business Address */
  $handler->display->display_options['fields']['field_ao_business_address']['id'] = 'field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['table'] = 'field_data_field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['field'] = 'field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['field_ao_business_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_ao_business_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_ao_business_address']['group_column'] = 'entity_id';
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_ao_website']['id'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['table'] = 'field_data_field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['field'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['field_ao_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ao_website']['group_column'] = 'entity_id';
  /* Field: CRM Core Contact: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: CRM Core Activity: Recommitment date */
  $handler->display->display_options['fields']['field_lb_recommitment_date']['id'] = 'field_lb_recommitment_date';
  $handler->display->display_options['fields']['field_lb_recommitment_date']['table'] = 'field_data_field_lb_recommitment_date';
  $handler->display->display_options['fields']['field_lb_recommitment_date']['field'] = 'field_lb_recommitment_date';
  $handler->display->display_options['fields']['field_lb_recommitment_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: CRM Core Contact: Parent company */
  $handler->display->display_options['fields']['field_lb_parent_company']['id'] = 'field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['table'] = 'field_data_field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['field'] = 'field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['relationship'] = 'field_lb_company_target_id';
  /* Field: CRM Core Contact: Referred by */
  $handler->display->display_options['fields']['field_lb_referred_by']['id'] = 'field_lb_referred_by';
  $handler->display->display_options['fields']['field_lb_referred_by']['table'] = 'field_data_field_lb_referred_by';
  $handler->display->display_options['fields']['field_lb_referred_by']['field'] = 'field_lb_referred_by';
  $handler->display->display_options['fields']['field_lb_referred_by']['relationship'] = 'field_lb_company_target_id';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Status';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Pending';
  /* Filter criterion: CRM Core Contact: Company */
  $handler->display->display_options['filters']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['filters']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['filters']['contact_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['contact_name']['expose']['operator_id'] = 'contact_name_op';
  $handler->display->display_options['filters']['contact_name']['expose']['label'] = 'Company';
  $handler->display->display_options['filters']['contact_name']['expose']['operator'] = 'contact_name_op';
  $handler->display->display_options['filters']['contact_name']['expose']['identifier'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: CRM Core Contact: Company */
  $handler->display->display_options['filters']['contact_name_1']['id'] = 'contact_name_1';
  $handler->display->display_options['filters']['contact_name_1']['table'] = 'field_data_contact_name';
  $handler->display->display_options['filters']['contact_name_1']['field'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name_1']['relationship'] = 'field_lb_primary_contact_target_id';
  $handler->display->display_options['filters']['contact_name_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['contact_name_1']['expose']['operator_id'] = 'contact_name_1_op';
  $handler->display->display_options['filters']['contact_name_1']['expose']['label'] = 'Primary contact';
  $handler->display->display_options['filters']['contact_name_1']['expose']['operator'] = 'contact_name_1_op';
  $handler->display->display_options['filters']['contact_name_1']['expose']['identifier'] = 'contact_name_1';
  $handler->display->display_options['filters']['contact_name_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lb_application' => 'lb_application',
  );
  /* Filter criterion: CRM Core Activity: Outcome (field_lb_application_outcome) */
  $handler->display->display_options['filters']['field_lb_application_outcome_target_id']['id'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['filters']['field_lb_application_outcome_target_id']['table'] = 'field_data_field_lb_application_outcome';
  $handler->display->display_options['filters']['field_lb_application_outcome_target_id']['field'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['filters']['field_lb_application_outcome_target_id']['operator'] = 'empty';
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'field_lb_request_outcome_target_id';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'lb_application_request_approved' => 'lb_application_request_approved',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'crm-core/reports/lba/applications/ms-listed';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Pending';
  $handler->display->display_options['menu']['weight'] = '-7';
  $handler->display->display_options['menu']['name'] = 'features';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['lb_applications_pending'] = $view;

  $view = new view();
  $view->name = 'lb_applications_submitted';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'LB Applications Submitted';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Applications Submitted';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No submitted applications found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_company_target_id']['id'] = 'field_lb_company_target_id';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['table'] = 'field_data_field_lb_company';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['field'] = 'field_lb_company_target_id';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['label'] = 'company';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['id'] = 'field_lb_primary_contact_target_id';
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['table'] = 'field_data_field_lb_primary_contact';
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['field'] = 'field_lb_primary_contact_target_id';
  $handler->display->display_options['relationships']['field_lb_primary_contact_target_id']['label'] = 'primary contact';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_application_target_id']['id'] = 'field_lb_application_target_id';
  $handler->display->display_options['relationships']['field_lb_application_target_id']['table'] = 'field_data_field_lb_application';
  $handler->display->display_options['relationships']['field_lb_application_target_id']['field'] = 'field_lb_application_target_id';
  $handler->display->display_options['relationships']['field_lb_application_target_id']['label'] = 'application';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_lb_application_crm_core_activity']['id'] = 'reverse_field_lb_application_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_lb_application_crm_core_activity']['table'] = 'crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_lb_application_crm_core_activity']['field'] = 'reverse_field_lb_application_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_lb_application_crm_core_activity']['relationship'] = 'field_lb_application_target_id';
  $handler->display->display_options['relationships']['reverse_field_lb_application_crm_core_activity']['label'] = 'application approved';
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['relationship'] = 'field_lb_company_target_id';
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
  $handler->display->display_options['fields']['contact_name_1']['relationship'] = 'field_lb_primary_contact_target_id';
  $handler->display->display_options['fields']['contact_name_1']['label'] = 'Primary contact';
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
  /* Field: Field: Business Address */
  $handler->display->display_options['fields']['field_ao_business_address']['id'] = 'field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['table'] = 'field_data_field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['field'] = 'field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['field_ao_business_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_ao_business_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_ao_website']['id'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['table'] = 'field_data_field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['field'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['field_ao_website']['click_sort_column'] = 'url';
  /* Field: CRM Core Activity: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: CRM Core Contact: Parent company */
  $handler->display->display_options['fields']['field_lb_parent_company']['id'] = 'field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['table'] = 'field_data_field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['field'] = 'field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['relationship'] = 'field_lb_company_target_id';
  /* Field: CRM Core Contact: Referred by */
  $handler->display->display_options['fields']['field_lb_referred_by']['id'] = 'field_lb_referred_by';
  $handler->display->display_options['fields']['field_lb_referred_by']['table'] = 'field_data_field_lb_referred_by';
  $handler->display->display_options['fields']['field_lb_referred_by']['field'] = 'field_lb_referred_by';
  $handler->display->display_options['fields']['field_lb_referred_by']['relationship'] = 'field_lb_company_target_id';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Status';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Submitted';
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'lb_company_application_submitted' => 'lb_company_application_submitted',
  );
  /* Filter criterion: CRM Core Contact: Company */
  $handler->display->display_options['filters']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['filters']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['filters']['contact_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['contact_name']['expose']['operator_id'] = 'contact_name_op';
  $handler->display->display_options['filters']['contact_name']['expose']['label'] = 'Company';
  $handler->display->display_options['filters']['contact_name']['expose']['operator'] = 'contact_name_op';
  $handler->display->display_options['filters']['contact_name']['expose']['identifier'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: CRM Core Contact: Company */
  $handler->display->display_options['filters']['contact_name_1']['id'] = 'contact_name_1';
  $handler->display->display_options['filters']['contact_name_1']['table'] = 'field_data_contact_name';
  $handler->display->display_options['filters']['contact_name_1']['field'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name_1']['relationship'] = 'field_lb_primary_contact_target_id';
  $handler->display->display_options['filters']['contact_name_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['contact_name_1']['expose']['operator_id'] = 'contact_name_1_op';
  $handler->display->display_options['filters']['contact_name_1']['expose']['label'] = 'Contact';
  $handler->display->display_options['filters']['contact_name_1']['expose']['operator'] = 'contact_name_1_op';
  $handler->display->display_options['filters']['contact_name_1']['expose']['identifier'] = 'contact_name_1';
  $handler->display->display_options['filters']['contact_name_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: CRM Core Activity: Outcome (field_lb_application_outcome) */
  $handler->display->display_options['filters']['field_lb_application_outcome_target_id']['id'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['filters']['field_lb_application_outcome_target_id']['table'] = 'field_data_field_lb_application_outcome';
  $handler->display->display_options['filters']['field_lb_application_outcome_target_id']['field'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['filters']['field_lb_application_outcome_target_id']['relationship'] = 'field_lb_application_target_id';
  $handler->display->display_options['filters']['field_lb_application_outcome_target_id']['operator'] = 'empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'crm-core/reports/lba/applications/submitted';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Submitted';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['lb_applications_submitted'] = $view;

  $view = new view();
  $view->name = 'lb_recommitments';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'LB Recommitments';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Applications - Past Due Recommitments';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'contact_id' => 'contact_id',
    'activity_id' => 'activity_id',
    'views_bulk_operations' => 'views_bulk_operations',
    'contact_name' => 'contact_name',
    'contact_name_family' => 'contact_name_family',
    'created' => 'created',
    'type' => 'type',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'contact_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'activity_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
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
    'contact_name_family' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
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
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="results-summary">Displaying @start - @end of @total</div>
<div class="detail-buttons">
<div class="btn btn-orange btn-simple"><a href="/crm-core/reports/lb_applications/recommitments/csv-export">Export to CSV</a></div>
</div>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Looks like there is no recommitments yet.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['id'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['table'] = 'field_data_field_lb_current_application';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['field'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['label'] = 'Application';
  $handler->display->display_options['relationships']['field_lb_current_application_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['id'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['table'] = 'field_data_field_lb_application_outcome';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['field'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['relationships']['field_lb_application_outcome_target_id']['label'] = 'Status(outcome)';
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['fields']['activity_id']['label'] = 'Application Activity ID';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['activity_id']['separator'] = '';
  /* Field: Bulk operations: CRM Core Contact */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::lb_application_report_approve_application' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_registration_application_close' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_application_report_recommitment_due' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_registration_application_cancel' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['exclude'] = TRUE;
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
  /* Field: Name Components: Family */
  $handler->display->display_options['fields']['contact_name_family']['id'] = 'contact_name_family';
  $handler->display->display_options['fields']['contact_name_family']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name_family']['field'] = 'contact_name_family';
  $handler->display->display_options['fields']['contact_name_family']['label'] = 'Company';
  $handler->display->display_options['fields']['contact_name_family']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name_family']['alter']['path'] = 'crm-core/contact/[contact_id]';
  /* Field: CRM Core Activity: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: CRM Core Activity: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['fields']['type']['label'] = 'Status';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View Application';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]';
  /* Field: CRM Core Contact: Logo user */
  $handler->display->display_options['fields']['field_lb_logo_user']['id'] = 'field_lb_logo_user';
  $handler->display->display_options['fields']['field_lb_logo_user']['table'] = 'field_data_field_lb_logo_user';
  $handler->display->display_options['fields']['field_lb_logo_user']['field'] = 'field_lb_logo_user';
  /* Sort criterion: CRM Core Activity: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company' => 'company',
  );
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'lb_recommitment_due' => 'lb_recommitment_due',
  );
  /* Filter criterion: CRM Core Activity: Date created */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['relationship'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['filters']['created']['operator'] = '<=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-1 month';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['fields']['activity_id']['label'] = 'Application Activity ID';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['activity_id']['separator'] = '';
  /* Field: Bulk operations: CRM Core Contact */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::lb_application_report_approve_application' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_registration_application_close' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_application_report_recommitment_due' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_registration_application_cancel' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['exclude'] = TRUE;
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
  /* Field: Name Components: Family */
  $handler->display->display_options['fields']['contact_name_family']['id'] = 'contact_name_family';
  $handler->display->display_options['fields']['contact_name_family']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name_family']['field'] = 'contact_name_family';
  $handler->display->display_options['fields']['contact_name_family']['label'] = 'Company';
  $handler->display->display_options['fields']['contact_name_family']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name_family']['alter']['path'] = 'crm-core/contact/[contact_id]';
  /* Field: CRM Core Activity: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: CRM Core Activity: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['fields']['type']['label'] = 'Status';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View Application';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]';
  /* Field: CRM Core Contact: Logo user */
  $handler->display->display_options['fields']['field_lb_logo_user']['id'] = 'field_lb_logo_user';
  $handler->display->display_options['fields']['field_lb_logo_user']['table'] = 'field_data_field_lb_logo_user';
  $handler->display->display_options['fields']['field_lb_logo_user']['field'] = 'field_lb_logo_user';
  /* Field: Field: Email Address */
  $handler->display->display_options['fields']['field_ao_email_address']['id'] = 'field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['table'] = 'field_data_field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['field'] = 'field_ao_email_address';
  /* Field: CRM Core Activity: Date created */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['relationship'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['fields']['created_1']['label'] = 'Recommitment due date';
  $handler->display->display_options['fields']['created_1']['date_format'] = 'long';
  $handler->display->display_options['fields']['created_1']['second_date_format'] = 'long';
  $handler->display->display_options['path'] = 'crm-core/reports/lb_applications/pastdue_recommitments';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Past Due Recommitments';
  $handler->display->display_options['menu']['weight'] = '-5';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Applications';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['fields']['activity_id']['label'] = 'Application Activity ID';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['activity_id']['separator'] = '';
  /* Field: Bulk operations: CRM Core Contact */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::lb_application_report_approve_application' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_registration_application_close' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_application_report_recommitment_due' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_registration_application_cancel' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['exclude'] = TRUE;
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
  /* Field: Name Components: Family */
  $handler->display->display_options['fields']['contact_name_family']['id'] = 'contact_name_family';
  $handler->display->display_options['fields']['contact_name_family']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name_family']['field'] = 'contact_name_family';
  $handler->display->display_options['fields']['contact_name_family']['label'] = 'Company';
  $handler->display->display_options['fields']['contact_name_family']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name_family']['alter']['path'] = 'crm-core/contact/[contact_id]';
  /* Field: CRM Core Activity: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_lb_current_application_target_id';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: CRM Core Activity: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['relationship'] = 'field_lb_application_outcome_target_id';
  $handler->display->display_options['fields']['type']['label'] = 'Status';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View Application';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]';
  /* Field: CRM Core Contact: Logo user */
  $handler->display->display_options['fields']['field_lb_logo_user']['id'] = 'field_lb_logo_user';
  $handler->display->display_options['fields']['field_lb_logo_user']['table'] = 'field_data_field_lb_logo_user';
  $handler->display->display_options['fields']['field_lb_logo_user']['field'] = 'field_lb_logo_user';
  /* Field: Field: Email Address */
  $handler->display->display_options['fields']['field_ao_email_address']['id'] = 'field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['table'] = 'field_data_field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['field'] = 'field_ao_email_address';
  $handler->display->display_options['path'] = 'crm-core/reports/lb_applications/recommitments/csv-export';
  $export['lb_recommitments'] = $view;

  $view = new view();
  $view->name = 'pending_application_requests_2';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'Pending application requests_2';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Pending application requests';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'Displaying @start - @end of @total requests.';
  /* Relationship: Application request activity */
  $handler->display->display_options['relationships']['reverse_field_activity_participants_crm_core_activity']['id'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_activity_participants_crm_core_activity']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['reverse_field_activity_participants_crm_core_activity']['field'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_activity_participants_crm_core_activity']['ui_name'] = 'Application request activity';
  $handler->display->display_options['relationships']['reverse_field_activity_participants_crm_core_activity']['label'] = 'Application request activity';
  $handler->display->display_options['relationships']['reverse_field_activity_participants_crm_core_activity']['required'] = TRUE;
  /* Field: Bulk operations: CRM Core Contact */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::lb_application_report_approve_application' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_application_report_approve_request' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Delete company',
    ),
    'action::lb_application_report_deny_application' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::lb_application_report_deny_request' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
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
  $handler->display->display_options['fields']['contact_name']['label'] = 'Company name';
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
  $handler->display->display_options['fields']['field_ao_business_address']['label'] = 'Address';
  $handler->display->display_options['fields']['field_ao_business_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_ao_business_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_ao_website']['id'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['table'] = 'field_data_field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['field'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['click_sort_column'] = 'url';
  /* Field: CRM Core Contact: Parent company */
  $handler->display->display_options['fields']['field_lb_parent_company']['id'] = 'field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['table'] = 'field_data_field_lb_parent_company';
  $handler->display->display_options['fields']['field_lb_parent_company']['field'] = 'field_lb_parent_company';
  /* Field: CRM Core Contact: Referred by */
  $handler->display->display_options['fields']['field_lb_referred_by']['id'] = 'field_lb_referred_by';
  $handler->display->display_options['fields']['field_lb_referred_by']['table'] = 'field_data_field_lb_referred_by';
  $handler->display->display_options['fields']['field_lb_referred_by']['field'] = 'field_lb_referred_by';
  /* Field: CRM Core Activity: Delete link */
  $handler->display->display_options['fields']['delete_crm_activity']['id'] = 'delete_crm_activity';
  $handler->display->display_options['fields']['delete_crm_activity']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['delete_crm_activity']['field'] = 'delete_crm_activity';
  $handler->display->display_options['fields']['delete_crm_activity']['relationship'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['fields']['delete_crm_activity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_crm_activity']['text'] = 'Delete';
  $handler->display->display_options['fields']['delete_crm_activity']['redirect'] = 1;
  /* Field: CRM Core Activity: Edit link */
  $handler->display->display_options['fields']['edit_crm_activity']['id'] = 'edit_crm_activity';
  $handler->display->display_options['fields']['edit_crm_activity']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['edit_crm_activity']['field'] = 'edit_crm_activity';
  $handler->display->display_options['fields']['edit_crm_activity']['relationship'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['fields']['edit_crm_activity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_crm_activity']['text'] = 'Edit';
  $handler->display->display_options['fields']['edit_crm_activity']['redirect'] = 1;
  /* Field: CRM Core Activity: Link */
  $handler->display->display_options['fields']['view_crm_activity']['id'] = 'view_crm_activity';
  $handler->display->display_options['fields']['view_crm_activity']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['view_crm_activity']['field'] = 'view_crm_activity';
  $handler->display->display_options['fields']['view_crm_activity']['relationship'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['fields']['view_crm_activity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_crm_activity']['text'] = 'View';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[view_crm_activity] | [edit_crm_activity] | [delete_crm_activity]';
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company' => 'company',
  );
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_activity_participants_crm_core_activity';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'lb_application' => 'lb_application',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'crm-core/pending-application-requests';
  $handler->display->display_options['menu']['title'] = 'Applications';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['name'] = 'crm-core-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['pending_application_requests_2'] = $view;

  $view = new view();
  $view->name = 'requested_shopping_guides';
  $view->description = 'This is a run down of all application requests in the system';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'Requested Shopping Guides';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Requested Shopping Guides';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'activity_id' => 'activity_id',
    'contact_id' => 'contact_id',
    'created' => 'created',
    'contact_name' => 'contact_name',
    'field_ao_home_address' => 'field_ao_home_address',
    'field_ao_home_address_locality' => 'field_ao_home_address_locality',
    'field_ao_home_address_administrative_area' => 'field_ao_home_address_administrative_area',
    'field_ao_home_address_postal_code' => 'field_ao_home_address_postal_code',
    'field_ao_home_address_country' => 'field_ao_home_address_country',
    'activity_string' => 'activity_string',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'activity_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'contact_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
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
    'field_ao_home_address' => array(
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
    'field_ao_home_address_administrative_area' => array(
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
    'field_ao_home_address_country' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'activity_string' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="results-summary">Displaying @start - @end of @total</div>
<div class="detail-buttons">
<div class="btn btn-orange btn-simple"><a href="/crm-core/reports/lb_requests/shopping-guides/requests/csv-export">Export to CSV</a></div>
</div>';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['id'] = 'field_activity_participants_target_id';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['table'] = 'field_data_field_activity_participants';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['field'] = 'field_activity_participants_target_id';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['label'] = 'CRM Core Contact';
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['label'] = '';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['activity_id']['element_label_colon'] = FALSE;
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['relationship'] = 'field_activity_participants_target_id';
  $handler->display->display_options['fields']['contact_id']['label'] = '';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Activity: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'M d, Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['relationship'] = 'field_activity_participants_target_id';
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
  /* Field: CRM Core Contact: Home Address */
  $handler->display->display_options['fields']['field_ao_home_address']['id'] = 'field_ao_home_address';
  $handler->display->display_options['fields']['field_ao_home_address']['table'] = 'field_data_field_ao_home_address';
  $handler->display->display_options['fields']['field_ao_home_address']['field'] = 'field_ao_home_address';
  $handler->display->display_options['fields']['field_ao_home_address']['relationship'] = 'field_activity_participants_target_id';
  $handler->display->display_options['fields']['field_ao_home_address']['label'] = 'Address';
  $handler->display->display_options['fields']['field_ao_home_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ao_home_address']['alter']['text'] = '[field_ao_home_address-thoroughfare]  [field_ao_home_address-premise]';
  $handler->display->display_options['fields']['field_ao_home_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_ao_home_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(),
  );
  /* Field: CRM Core Contact: Home Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_ao_home_address_locality']['id'] = 'field_ao_home_address_locality';
  $handler->display->display_options['fields']['field_ao_home_address_locality']['table'] = 'field_data_field_ao_home_address';
  $handler->display->display_options['fields']['field_ao_home_address_locality']['field'] = 'field_ao_home_address_locality';
  $handler->display->display_options['fields']['field_ao_home_address_locality']['relationship'] = 'field_activity_participants_target_id';
  $handler->display->display_options['fields']['field_ao_home_address_locality']['label'] = 'City';
  /* Field: CRM Core Contact: Home Address - Administrative area (i.e. State / Province) */
  $handler->display->display_options['fields']['field_ao_home_address_administrative_area']['id'] = 'field_ao_home_address_administrative_area';
  $handler->display->display_options['fields']['field_ao_home_address_administrative_area']['table'] = 'field_data_field_ao_home_address';
  $handler->display->display_options['fields']['field_ao_home_address_administrative_area']['field'] = 'field_ao_home_address_administrative_area';
  $handler->display->display_options['fields']['field_ao_home_address_administrative_area']['relationship'] = 'field_activity_participants_target_id';
  $handler->display->display_options['fields']['field_ao_home_address_administrative_area']['label'] = 'State';
  /* Field: CRM Core Contact: Home Address - Postal code */
  $handler->display->display_options['fields']['field_ao_home_address_postal_code']['id'] = 'field_ao_home_address_postal_code';
  $handler->display->display_options['fields']['field_ao_home_address_postal_code']['table'] = 'field_data_field_ao_home_address';
  $handler->display->display_options['fields']['field_ao_home_address_postal_code']['field'] = 'field_ao_home_address_postal_code';
  $handler->display->display_options['fields']['field_ao_home_address_postal_code']['relationship'] = 'field_activity_participants_target_id';
  $handler->display->display_options['fields']['field_ao_home_address_postal_code']['label'] = 'Postal Code';
  /* Field: CRM Core Contact: Home Address - Country */
  $handler->display->display_options['fields']['field_ao_home_address_country']['id'] = 'field_ao_home_address_country';
  $handler->display->display_options['fields']['field_ao_home_address_country']['table'] = 'field_data_field_ao_home_address';
  $handler->display->display_options['fields']['field_ao_home_address_country']['field'] = 'field_ao_home_address_country';
  $handler->display->display_options['fields']['field_ao_home_address_country']['relationship'] = 'field_activity_participants_target_id';
  $handler->display->display_options['fields']['field_ao_home_address_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_ao_home_address_country']['display_name'] = 1;
  /* Field: CRM Core Activity Type: Activity string */
  $handler->display->display_options['fields']['activity_string']['id'] = 'activity_string';
  $handler->display->display_options['fields']['activity_string']['table'] = 'crm_core_activity_type';
  $handler->display->display_options['fields']['activity_string']['field'] = 'activity_string';
  $handler->display->display_options['fields']['activity_string']['label'] = 'Status';
  /* Field: View Request Link */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'View Request Link';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View Request';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]';
  $handler->display->display_options['fields']['nothing']['alter']['link_class'] = 'btn btn-blue';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: CRM Core Activity: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'shopping_guide_request' => 'shopping_guide_request',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'crm-core/reports/lb_requests/shopping-guides/requests';
  $handler->display->display_options['menu']['title'] = 'Requests';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Requests';
  $handler->display->display_options['tab_options']['weight'] = '-10';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'crm-core/reports/lb_requests/shopping-guides/requests/csv-export';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page' => 0,
  );
  $export['requested_shopping_guides'] = $view;

  return $export;
}
