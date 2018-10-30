<?php
/**
 * @file
 * lb_declaration_forms.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function lb_declaration_forms_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'lb_decl_product_compliance';
  $view->description = 'Provides a list of declarations of product compliance received in the system';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'Declarations of Product Compliance';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Product Compliance';
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
    'field_activity_participants_1' => 'field_activity_participants_1',
    'field_lb_company_1' => 'field_lb_company_1',
    'created' => 'created',
    'contact_name' => 'contact_name',
    'contact_name_1' => 'contact_name_1',
    'field_lb_printed_name' => 'field_lb_printed_name',
    'field_lb_sig_name' => 'field_lb_sig_name',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing_1',
    'nothing_2' => 'nothing_2',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'activity_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_activity_participants_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lb_company_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
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
    'contact_name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lb_printed_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lb_sig_name' => array(
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
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['id'] = 'field_activity_participants_target_id';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['table'] = 'field_data_field_activity_participants';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['field'] = 'field_activity_participants_target_id';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['label'] = 'Manufacturer';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_company_target_id']['id'] = 'field_lb_company_target_id';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['table'] = 'field_data_field_lb_company';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['field'] = 'field_lb_company_target_id';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['label'] = 'Company';
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['activity_id']['separator'] = '';
  /* Field: Manufacturer ID */
  $handler->display->display_options['fields']['field_activity_participants_1']['id'] = 'field_activity_participants_1';
  $handler->display->display_options['fields']['field_activity_participants_1']['table'] = 'field_data_field_activity_participants';
  $handler->display->display_options['fields']['field_activity_participants_1']['field'] = 'field_activity_participants';
  $handler->display->display_options['fields']['field_activity_participants_1']['ui_name'] = 'Manufacturer ID';
  $handler->display->display_options['fields']['field_activity_participants_1']['label'] = '';
  $handler->display->display_options['fields']['field_activity_participants_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_activity_participants_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_activity_participants_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_activity_participants_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_activity_participants_1']['delta_offset'] = '0';
  /* Field: Company ID */
  $handler->display->display_options['fields']['field_lb_company_1']['id'] = 'field_lb_company_1';
  $handler->display->display_options['fields']['field_lb_company_1']['table'] = 'field_data_field_lb_company';
  $handler->display->display_options['fields']['field_lb_company_1']['field'] = 'field_lb_company';
  $handler->display->display_options['fields']['field_lb_company_1']['ui_name'] = 'Company ID';
  $handler->display->display_options['fields']['field_lb_company_1']['label'] = '';
  $handler->display->display_options['fields']['field_lb_company_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lb_company_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lb_company_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_lb_company_1']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
  );
  /* Field: CRM Core Activity: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date Received';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['relationship'] = 'field_activity_participants_target_id';
  $handler->display->display_options['fields']['contact_name']['label'] = 'Manufacturer Name';
  $handler->display->display_options['fields']['contact_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name']['alter']['path'] = 'crm-core/contact/[field_activity_participants_1]';
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
  $handler->display->display_options['fields']['contact_name_1']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['contact_name_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name_1']['alter']['path'] = 'crm-core/contact/[field_lb_company_1]';
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
  /* Field: CRM Core Activity: Printed Name */
  $handler->display->display_options['fields']['field_lb_printed_name']['id'] = 'field_lb_printed_name';
  $handler->display->display_options['fields']['field_lb_printed_name']['table'] = 'field_data_field_lb_printed_name';
  $handler->display->display_options['fields']['field_lb_printed_name']['field'] = 'field_lb_printed_name';
  $handler->display->display_options['fields']['field_lb_printed_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_lb_printed_name']['settings'] = array(
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
  /* Field: CRM Core Activity: Signatory name */
  $handler->display->display_options['fields']['field_lb_sig_name']['id'] = 'field_lb_sig_name';
  $handler->display->display_options['fields']['field_lb_sig_name']['table'] = 'field_data_field_lb_sig_name';
  $handler->display->display_options['fields']['field_lb_sig_name']['field'] = 'field_lb_sig_name';
  /* Field: Field: Position */
  $handler->display->display_options['fields']['field_lb_contact_position']['id'] = 'field_lb_contact_position';
  $handler->display->display_options['fields']['field_lb_contact_position']['table'] = 'field_data_field_lb_contact_position';
  $handler->display->display_options['fields']['field_lb_contact_position']['field'] = 'field_lb_contact_position';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'View Link';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'crm-core/contact/[field_lb_company_1]/activity/[activity_id]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Edit Link';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'crm-core/contact/[field_lb_company_1]/activity/[activity_id]/edit';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="btn btn-blue btn-dark btn-simple">[nothing]</div> <div class="btn btn-blue btn-dark btn-simple">[nothing_1]</div>';
  /* Sort criterion: CRM Core Activity: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'declaration_product_compliance' => 'declaration_product_compliance',
  );
  /* Filter criterion: CRM Core Contact: Company */
  $handler->display->display_options['filters']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['filters']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['relationship'] = 'field_activity_participants_target_id';
  $handler->display->display_options['filters']['contact_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['contact_name']['expose']['operator_id'] = 'contact_name_op';
  $handler->display->display_options['filters']['contact_name']['expose']['label'] = 'Manufacturer';
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
  $handler->display->display_options['filters']['contact_name_1']['relationship'] = 'field_lb_company_target_id';
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
  $handler->display->display_options['path'] = 'crm-core/reports/lb_decl/product_compliance';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Products';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Declarations';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'features';
  $export['lb_decl_product_compliance'] = $view;

  $view = new view();
  $view->name = 'lb_decl_product_participants';
  $view->description = 'Entity reference view showing all companies that have submitted declarations of product compliance';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'Declarations of Product Compliance Participants';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['id'] = 'field_activity_participants_target_id';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['table'] = 'field_data_field_activity_participants';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['field'] = 'field_activity_participants_target_id';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['label'] = 'Contact';
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['relationship'] = 'field_activity_participants_target_id';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Activity: Participants */
  $handler->display->display_options['fields']['field_activity_participants']['id'] = 'field_activity_participants';
  $handler->display->display_options['fields']['field_activity_participants']['table'] = 'field_data_field_activity_participants';
  $handler->display->display_options['fields']['field_activity_participants']['field'] = 'field_activity_participants';
  $handler->display->display_options['fields']['field_activity_participants']['label'] = '';
  $handler->display->display_options['fields']['field_activity_participants']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_activity_participants']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_activity_participants']['delta_offset'] = '0';
  /* Sort criterion: CRM Core Activity: Participants (field_activity_participants) */
  $handler->display->display_options['sorts']['field_activity_participants_target_id']['id'] = 'field_activity_participants_target_id';
  $handler->display->display_options['sorts']['field_activity_participants_target_id']['table'] = 'field_data_field_activity_participants';
  $handler->display->display_options['sorts']['field_activity_participants_target_id']['field'] = 'field_activity_participants_target_id';
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'declaration_product_compliance' => 'declaration_product_compliance',
    'declaration_raw_material' => 'declaration_raw_material',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_activity_participants' => 'field_activity_participants',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['lb_decl_product_participants'] = $view;

  $view = new view();
  $view->name = 'lb_declarations_of_raw_material_compliance';
  $view->description = 'Provides a list of declarations of product compliance received in the system';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'Declarations of Raw Material Compliance';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Raw Materials';
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
    'field_activity_participants_1' => 'field_activity_participants_1',
    'field_lb_company_1' => 'field_lb_company_1',
    'created' => 'created',
    'contact_name' => 'contact_name',
    'contact_name_1' => 'contact_name_1',
    'field_lb_printed_name' => 'field_lb_printed_name',
    'field_lb_sig_name' => 'field_lb_sig_name',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing_1',
    'nothing_2' => 'nothing_2',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'activity_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_activity_participants_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lb_company_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
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
    'contact_name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lb_printed_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lb_sig_name' => array(
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
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['id'] = 'field_activity_participants_target_id';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['table'] = 'field_data_field_activity_participants';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['field'] = 'field_activity_participants_target_id';
  $handler->display->display_options['relationships']['field_activity_participants_target_id']['label'] = 'Manufacturer';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_lb_company_target_id']['id'] = 'field_lb_company_target_id';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['table'] = 'field_data_field_lb_company';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['field'] = 'field_lb_company_target_id';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['label'] = 'Company';
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['activity_id']['separator'] = '';
  /* Field: Manufacturer ID */
  $handler->display->display_options['fields']['field_activity_participants_1']['id'] = 'field_activity_participants_1';
  $handler->display->display_options['fields']['field_activity_participants_1']['table'] = 'field_data_field_activity_participants';
  $handler->display->display_options['fields']['field_activity_participants_1']['field'] = 'field_activity_participants';
  $handler->display->display_options['fields']['field_activity_participants_1']['ui_name'] = 'Manufacturer ID';
  $handler->display->display_options['fields']['field_activity_participants_1']['label'] = '';
  $handler->display->display_options['fields']['field_activity_participants_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_activity_participants_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_activity_participants_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_activity_participants_1']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_activity_participants_1']['delta_offset'] = '0';
  /* Field: Company ID */
  $handler->display->display_options['fields']['field_lb_company_1']['id'] = 'field_lb_company_1';
  $handler->display->display_options['fields']['field_lb_company_1']['table'] = 'field_data_field_lb_company';
  $handler->display->display_options['fields']['field_lb_company_1']['field'] = 'field_lb_company';
  $handler->display->display_options['fields']['field_lb_company_1']['ui_name'] = 'Company ID';
  $handler->display->display_options['fields']['field_lb_company_1']['label'] = '';
  $handler->display->display_options['fields']['field_lb_company_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lb_company_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lb_company_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_lb_company_1']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
  );
  /* Field: CRM Core Activity: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Date Received';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['relationship'] = 'field_activity_participants_target_id';
  $handler->display->display_options['fields']['contact_name']['label'] = 'Manufacturer Name';
  $handler->display->display_options['fields']['contact_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name']['alter']['path'] = 'crm-core/contact/[field_activity_participants_1]';
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
  $handler->display->display_options['fields']['contact_name_1']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['contact_name_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name_1']['alter']['path'] = 'crm-core/contact/[field_lb_company_1]';
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
  /* Field: CRM Core Activity: Printed Name */
  $handler->display->display_options['fields']['field_lb_printed_name']['id'] = 'field_lb_printed_name';
  $handler->display->display_options['fields']['field_lb_printed_name']['table'] = 'field_data_field_lb_printed_name';
  $handler->display->display_options['fields']['field_lb_printed_name']['field'] = 'field_lb_printed_name';
  $handler->display->display_options['fields']['field_lb_printed_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_lb_printed_name']['settings'] = array(
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
  /* Field: CRM Core Activity: Signatory name */
  $handler->display->display_options['fields']['field_lb_sig_name']['id'] = 'field_lb_sig_name';
  $handler->display->display_options['fields']['field_lb_sig_name']['table'] = 'field_data_field_lb_sig_name';
  $handler->display->display_options['fields']['field_lb_sig_name']['field'] = 'field_lb_sig_name';
  /* Field: Field: Position */
  $handler->display->display_options['fields']['field_lb_contact_position']['id'] = 'field_lb_contact_position';
  $handler->display->display_options['fields']['field_lb_contact_position']['table'] = 'field_data_field_lb_contact_position';
  $handler->display->display_options['fields']['field_lb_contact_position']['field'] = 'field_lb_contact_position';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'View Link';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'crm-core/contact/[field_lb_company_1]/activity/[activity_id]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Edit Link';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'crm-core/contact/[field_lb_company_1]/activity/[activity_id]/edit';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<div class="btn btn-blue btn-dark btn-simple">[nothing]</div> <div class="btn btn-blue btn-dark btn-simple">[nothing_1]</div>';
  /* Sort criterion: CRM Core Activity: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'crm_core_activity';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: CRM Core Activity: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_activity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'declaration_raw_material' => 'declaration_raw_material',
  );
  /* Filter criterion: CRM Core Contact: Company */
  $handler->display->display_options['filters']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['filters']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['relationship'] = 'field_activity_participants_target_id';
  $handler->display->display_options['filters']['contact_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['contact_name']['expose']['operator_id'] = 'contact_name_op';
  $handler->display->display_options['filters']['contact_name']['expose']['label'] = 'Manufacturer';
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
  $handler->display->display_options['filters']['contact_name_1']['relationship'] = 'field_lb_company_target_id';
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
  $handler->display->display_options['path'] = 'crm-core/reports/lb_decl/raw_materials';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Raw Materials';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Declarations';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'features';
  $export['lb_declarations_of_raw_material_compliance'] = $view;

  $view = new view();
  $view->name = 'lb_licensing_form';
  $view->description = 'This is a run down of all application requests in the system';
  $view->tag = 'default';
  $view->base_table = 'crm_core_activity';
  $view->human_name = 'LB Licensing Form';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Licensing Form Applications';
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
    'contact_name' => 'contact_name',
    'created' => 'created',
    'contact_name_1' => 'contact_name_1',
    'field_ao_business_address' => 'field_ao_business_address',
    'field_ao_website' => 'field_ao_website',
    'field_lb_referred_by' => 'field_lb_referred_by',
    'field_lb_parent_company' => 'field_lb_parent_company',
    'activity_id_1' => 'activity_id_1',
    'label' => 'label',
    'title' => 'title',
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
    'activity_id_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'label' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="results-summary">Displaying @start - @end of @total.</div>';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="detail-buttons">
<div class="btn btn-orange btn-simple"><a href="crm-core/reports/lb_requests_export/applications/requests">Export to CSV</a></div>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Company */
  $handler->display->display_options['relationships']['field_lb_company_target_id']['id'] = 'field_lb_company_target_id';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['table'] = 'field_data_field_lb_company';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['field'] = 'field_lb_company_target_id';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['ui_name'] = 'Company';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['label'] = 'Company';
  $handler->display->display_options['relationships']['field_lb_company_target_id']['required'] = TRUE;
  /* Field: CRM Core Activity: Activity ID */
  $handler->display->display_options['fields']['activity_id']['id'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['table'] = 'crm_core_activity';
  $handler->display->display_options['fields']['activity_id']['field'] = 'activity_id';
  $handler->display->display_options['fields']['activity_id']['label'] = '';
  $handler->display->display_options['fields']['activity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['activity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['activity_id']['separator'] = '';
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['contact_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Activity: Company */
  $handler->display->display_options['fields']['field_lb_company']['id'] = 'field_lb_company';
  $handler->display->display_options['fields']['field_lb_company']['table'] = 'field_data_field_lb_company';
  $handler->display->display_options['fields']['field_lb_company']['field'] = 'field_lb_company';
  $handler->display->display_options['fields']['field_lb_company']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_lb_company']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_lb_company']['settings'] = array(
    'link' => 0,
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
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_ao_website']['id'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['table'] = 'field_data_field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['field'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['relationship'] = 'field_lb_company_target_id';
  $handler->display->display_options['fields']['field_ao_website']['click_sort_column'] = 'url';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'View';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = 'crm-core/contact/[contact_id]/activity/[activity_id]/edit';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="btn btn-blue btn-dark btn-simple">[nothing]</div> <div class="btn btn-blue btn-dark btn-simple">[nothing_2]</div>
';
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
    'logo_licensing_application' => 'logo_licensing_application',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'crm-core/reports/lb_licenses/logos';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Logos';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Licenses';
  $handler->display->display_options['tab_options']['weight'] = '-10';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'crm-core/reports/lb_requests_export/applications/requests';
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';
  $export['lb_licensing_form'] = $view;

  return $export;
}
