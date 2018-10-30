<?php
/**
 * @file
 * lb_crm_core_contacts_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function lb_crm_core_contacts_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'lb_crm_core_contacts';
  $view->description = 'AbleOrganizer list of all contacts in the system';
  $view->tag = 'AbleOrganizer';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'lb_crm_core_contacts';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Contacts';
  $handler->display->display_options['css_class'] = 'fancy-headers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view any crm_core_contact entity';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'type' => 'type',
    'contact_id' => 'contact_id',
    'contact_name' => 'contact_name',
    'nothing_4' => 'nothing_4',
    'field_ao_business_address' => 'field_ao_business_address',
    'field_ao_primary_telephone' => 'field_ao_primary_telephone',
    'field_ao_email_address' => 'field_ao_email_address',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing_1',
    'nothing_2' => 'nothing_2',
    'nothing_3' => 'nothing_3',
  );
  $handler->display->display_options['style_options']['default'] = 'contact_name';
  $handler->display->display_options['style_options']['info'] = array(
    'type' => array(
      'sortable' => 1,
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
    'contact_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_4' => array(
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
    'nothing_3' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['summary'] = 'List of contacts';
  /* Header: Results summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['ui_name'] = 'Results summary';
  $handler->display->display_options['header']['result']['empty'] = TRUE;
  $handler->display->display_options['header']['result']['content'] = '<div class="results-summary">Displaying @start - @end of @total contacts.</div>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no contacts available. <a href="crm-core/contact/add">Add one now</a>.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['id'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['field'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['required'] = TRUE;
  /* Field: Bulk operations: CRM Core Contact */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Delete Contact',
    ),
    'action::crm_core_contact_join_into_household_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::crm_core_contact_merge_contacts_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Edit Contacts',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::crm_core_contact_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Send e-mail message',
    ),
  );
  /* Field: CRM Core Contact: Contact Type */
  $handler->display->display_options['fields']['type_1']['id'] = 'type_1';
  $handler->display->display_options['fields']['type_1']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['type_1']['field'] = 'type';
  $handler->display->display_options['fields']['type_1']['label'] = '';
  $handler->display->display_options['fields']['type_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type_1']['link_to_contact_type'] = 0;
  $handler->display->display_options['fields']['type_1']['machine_name'] = 1;
  /* Field: Contact Icon */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['ui_name'] = 'Contact Icon';
  $handler->display->display_options['fields']['nothing_4']['label'] = '';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = '<div class="ao_contact_icon ao_contact_[type_1]"><span></span></div>';
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['contact_name']['label'] = 'Name';
  $handler->display->display_options['fields']['contact_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['contact_name']['alter']['text'] = '<div class="contact-icon"></div> [contact_name]';
  $handler->display->display_options['fields']['contact_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name']['alter']['path'] = 'crm-core/contact/[contact_id]';
  $handler->display->display_options['fields']['contact_name']['element_class'] = 'field-object';
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
  /* Field: Field: Business Address */
  $handler->display->display_options['fields']['field_ao_business_address']['id'] = 'field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['table'] = 'field_data_field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['field'] = 'field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['label'] = 'Address';
  $handler->display->display_options['fields']['field_ao_business_address']['empty'] = '---';
  $handler->display->display_options['fields']['field_ao_business_address']['click_sort_column'] = 'locality';
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
  $handler->display->display_options['fields']['field_ao_primary_telephone']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['empty'] = '---';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['click_sort_column'] = 'number';
  /* Field: Field: Email Address */
  $handler->display->display_options['fields']['field_ao_email_address']['id'] = 'field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['table'] = 'field_data_field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['field'] = 'field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['empty'] = '---';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'View Link';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'crm-core/contact/[contact_id]/view';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Edit Link';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'crm-core/contact/[contact_id]/edit';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'Delete Link';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Delete';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = 'crm-core/contact/[contact_id]/delete';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<div class="btn btn-blue btn-dark btn-simple">[nothing]</div> <div class="btn btn-green btn-dark btn-simple">[nothing_1]</div> <div class="btn btn-red btn-dark btn-simple">[nothing_2]</div>';
  /* Sort criterion: Name Components: Title */
  $handler->display->display_options['sorts']['contact_name_title']['id'] = 'contact_name_title';
  $handler->display->display_options['sorts']['contact_name_title']['table'] = 'field_data_contact_name';
  $handler->display->display_options['sorts']['contact_name_title']['field'] = 'contact_name_title';
  /* Filter criterion: CRM Core Contact Types: Disabled contact type */
  $handler->display->display_options['filters']['disabled']['id'] = 'disabled';
  $handler->display->display_options['filters']['disabled']['table'] = 'crm_core_contact_type';
  $handler->display->display_options['filters']['disabled']['field'] = 'disabled';
  $handler->display->display_options['filters']['disabled']['value']['value'] = '0';
  $handler->display->display_options['filters']['disabled']['group'] = 1;
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company' => 'company',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Contact Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: CRM Core Contact: Company */
  $handler->display->display_options['filters']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['filters']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['group'] = 1;
  $handler->display->display_options['filters']['contact_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['contact_name']['expose']['operator_id'] = 'contact_name_op';
  $handler->display->display_options['filters']['contact_name']['expose']['label'] = 'Contact Name';
  $handler->display->display_options['filters']['contact_name']['expose']['operator'] = 'contact_name_op';
  $handler->display->display_options['filters']['contact_name']['expose']['identifier'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: CRM Core Contact: Contractor type (field_lb_contractor_type) */
  $handler->display->display_options['filters']['field_lb_contractor_type_value']['id'] = 'field_lb_contractor_type_value';
  $handler->display->display_options['filters']['field_lb_contractor_type_value']['table'] = 'field_data_field_lb_contractor_type';
  $handler->display->display_options['filters']['field_lb_contractor_type_value']['field'] = 'field_lb_contractor_type_value';
  $handler->display->display_options['filters']['field_lb_contractor_type_value']['operator'] = 'empty';

  /* Display: Company Contacts */
  $handler = $view->new_display('page', 'Company Contacts', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'crm-core/contact';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Contacts';
  $handler->display->display_options['menu']['weight'] = '0';
  $export['lb_crm_core_contacts'] = $view;

  $view = new view();
  $view->name = 'lb_crm_core_contacts_individuals';
  $view->description = 'AbleOrganizer list of all contacts in the system';
  $view->tag = 'AbleOrganizer';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'lb_crm_core_contacts_individuals';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Contacts';
  $handler->display->display_options['css_class'] = 'fancy-headers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view any crm_core_contact entity';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'type' => 'type',
    'contact_id' => 'contact_id',
    'contact_name' => 'contact_name',
    'nothing_4' => 'nothing_4',
    'field_ao_business_address' => 'field_ao_business_address',
    'field_ao_primary_telephone' => 'field_ao_primary_telephone',
    'field_ao_email_address' => 'field_ao_email_address',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing_1',
    'nothing_2' => 'nothing_2',
    'nothing_3' => 'nothing_3',
  );
  $handler->display->display_options['style_options']['default'] = 'contact_name';
  $handler->display->display_options['style_options']['info'] = array(
    'type' => array(
      'sortable' => 1,
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
    'contact_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_4' => array(
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
    'nothing_3' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['summary'] = 'List of contacts';
  /* Header: Results summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['ui_name'] = 'Results summary';
  $handler->display->display_options['header']['result']['empty'] = TRUE;
  $handler->display->display_options['header']['result']['content'] = '<div class="results-summary">Displaying @start - @end of @total contacts.</div>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'There are no contacts available. <a href="crm-core/contact/add">Add one now</a>.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: CRM Core Contact: Relation: primary contact for (crm_core_contact → crm_core_contact) */
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['id'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['field'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['r_index'] = '-1';
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['entity_deduplication_left'] = 0;
  $handler->display->display_options['relationships']['relation_lb_primary_contact_crm_core_contact']['entity_deduplication_right'] = 0;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['id'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['table'] = 'crm_core_contact';
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['field'] = 'reverse_field_lb_company_crm_core_activity';
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['relationship'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['relationships']['reverse_field_lb_company_crm_core_activity']['required'] = TRUE;
  /* Field: Bulk operations: CRM Core Contact */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Delete Contact',
    ),
    'action::crm_core_contact_join_into_household_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::crm_core_contact_merge_contacts_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Edit Contacts',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::crm_core_contact_send_email_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Send e-mail message',
    ),
  );
  /* Field: CRM Core Contact: Contact Type */
  $handler->display->display_options['fields']['type_1']['id'] = 'type_1';
  $handler->display->display_options['fields']['type_1']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['type_1']['field'] = 'type';
  $handler->display->display_options['fields']['type_1']['label'] = '';
  $handler->display->display_options['fields']['type_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['type_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['type_1']['link_to_contact_type'] = 0;
  $handler->display->display_options['fields']['type_1']['machine_name'] = 1;
  /* Field: Contact Icon */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['ui_name'] = 'Contact Icon';
  $handler->display->display_options['fields']['nothing_4']['label'] = '';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = '<div class="ao_contact_icon ao_contact_[type_1]"><span></span></div>';
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['contact_name']['label'] = 'Name';
  $handler->display->display_options['fields']['contact_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['contact_name']['alter']['text'] = '<div class="contact-icon"></div> [contact_name]';
  $handler->display->display_options['fields']['contact_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['contact_name']['alter']['path'] = 'crm-core/contact/[contact_id]';
  $handler->display->display_options['fields']['contact_name']['element_class'] = 'field-object';
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
  /* Field: Field: Business Address */
  $handler->display->display_options['fields']['field_ao_business_address']['id'] = 'field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['table'] = 'field_data_field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['field'] = 'field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address']['label'] = 'Address';
  $handler->display->display_options['fields']['field_ao_business_address']['empty'] = '---';
  $handler->display->display_options['fields']['field_ao_business_address']['click_sort_column'] = 'locality';
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
  $handler->display->display_options['fields']['field_ao_primary_telephone']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['empty'] = '---';
  $handler->display->display_options['fields']['field_ao_primary_telephone']['click_sort_column'] = 'number';
  /* Field: Field: Email Address */
  $handler->display->display_options['fields']['field_ao_email_address']['id'] = 'field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['table'] = 'field_data_field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['field'] = 'field_ao_email_address';
  $handler->display->display_options['fields']['field_ao_email_address']['empty'] = '---';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'View Link';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'View';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'crm-core/contact/[contact_id]/view';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Edit Link';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'crm-core/contact/[contact_id]/edit';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'Delete Link';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Delete';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = 'crm-core/contact/[contact_id]/delete';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = 'Operations';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<div class="btn btn-blue btn-dark btn-simple">[nothing]</div> <div class="btn btn-green btn-dark btn-simple">[nothing_1]</div> <div class="btn btn-red btn-dark btn-simple">[nothing_2]</div>';
  /* Sort criterion: Name Components: Title */
  $handler->display->display_options['sorts']['contact_name_title']['id'] = 'contact_name_title';
  $handler->display->display_options['sorts']['contact_name_title']['table'] = 'field_data_contact_name';
  $handler->display->display_options['sorts']['contact_name_title']['field'] = 'contact_name_title';
  /* Filter criterion: CRM Core Contact Types: Disabled contact type */
  $handler->display->display_options['filters']['disabled']['id'] = 'disabled';
  $handler->display->display_options['filters']['disabled']['table'] = 'crm_core_contact_type';
  $handler->display->display_options['filters']['disabled']['field'] = 'disabled';
  $handler->display->display_options['filters']['disabled']['value']['value'] = '0';
  /* Filter criterion: CRM Core Contact: Contact Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'crm_core_contact';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'individual' => 'individual',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Contact Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: CRM Core Contact: Company */
  $handler->display->display_options['filters']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['filters']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['contact_name']['expose']['operator_id'] = 'contact_name_op';
  $handler->display->display_options['filters']['contact_name']['expose']['label'] = 'Contact Name';
  $handler->display->display_options['filters']['contact_name']['expose']['operator'] = 'contact_name_op';
  $handler->display->display_options['filters']['contact_name']['expose']['identifier'] = 'contact_name';
  $handler->display->display_options['filters']['contact_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: CRM Core Contact: Contractor type (field_lb_contractor_type) */
  $handler->display->display_options['filters']['field_lb_contractor_type_value']['id'] = 'field_lb_contractor_type_value';
  $handler->display->display_options['filters']['field_lb_contractor_type_value']['table'] = 'field_data_field_lb_contractor_type';
  $handler->display->display_options['filters']['field_lb_contractor_type_value']['field'] = 'field_lb_contractor_type_value';
  $handler->display->display_options['filters']['field_lb_contractor_type_value']['relationship'] = 'relation_lb_primary_contact_crm_core_contact';
  $handler->display->display_options['filters']['field_lb_contractor_type_value']['operator'] = 'empty';

  /* Display: Individual Contacts */
  $handler = $view->new_display('page', 'Individual Contacts', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'crm-core/contact/individuals';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Contacts';
  $handler->display->display_options['menu']['weight'] = '0';
  $export['lb_crm_core_contacts_individuals'] = $view;

  return $export;
}
