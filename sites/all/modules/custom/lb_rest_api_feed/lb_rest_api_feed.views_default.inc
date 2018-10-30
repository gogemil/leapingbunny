<?php
/**
 * @file
 * lb_rest_api_feed.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function lb_rest_api_feed_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'rest_api_brand';
  $view->description = 'This is a run down of all brands in the site, in JSON format';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'REST API Brand';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'brands';
  $handler->display->display_options['style_options']['top_child_object'] = 'brand';
  $handler->display->display_options['style_options']['plaintext_output'] = 0;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: UPC Prefix */
  $handler->display->display_options['fields']['field_lb_upc']['id'] = 'field_lb_upc';
  $handler->display->display_options['fields']['field_lb_upc']['table'] = 'field_data_field_lb_upc';
  $handler->display->display_options['fields']['field_lb_upc']['field'] = 'field_lb_upc';
  $handler->display->display_options['fields']['field_lb_upc']['label'] = 'upc_prefix';
  $handler->display->display_options['fields']['field_lb_upc']['element_label_colon'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_lb_description']['id'] = 'field_lb_description';
  $handler->display->display_options['fields']['field_lb_description']['table'] = 'field_data_field_lb_description';
  $handler->display->display_options['fields']['field_lb_description']['field'] = 'field_lb_description';
  $handler->display->display_options['fields']['field_lb_description']['label'] = 'description';
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = 'category_ids';
  $handler->display->display_options['fields']['term_node_tid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['alter']['text'] = '[term_node_tid-tid]';
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'animal_care' => 0,
    'certifications' => 0,
    'cosmetics' => 0,
    'countries' => 0,
    'distributors' => 0,
    'lb_download_image_type' => 0,
    'household_products' => 0,
    'personal_care' => 0,
    'lb_product_types' => 0,
    'tags' => 0,
  );
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_lb_brand_company']['id'] = 'field_lb_brand_company';
  $handler->display->display_options['fields']['field_lb_brand_company']['table'] = 'field_data_field_lb_brand_company';
  $handler->display->display_options['fields']['field_lb_brand_company']['field'] = 'field_lb_brand_company';
  $handler->display->display_options['fields']['field_lb_brand_company']['label'] = 'company_id';
  $handler->display->display_options['fields']['field_lb_brand_company']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lb_brand_company']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_lb_brand_company']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_lb_logo']['id'] = 'field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo']['table'] = 'field_data_field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo']['field'] = 'field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo']['label'] = 'logo_original';
  $handler->display->display_options['fields']['field_lb_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lb_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lb_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_lb_logo_1']['id'] = 'field_lb_logo_1';
  $handler->display->display_options['fields']['field_lb_logo_1']['table'] = 'field_data_field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo_1']['field'] = 'field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo_1']['label'] = 'logo_large';
  $handler->display->display_options['fields']['field_lb_logo_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lb_logo_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lb_logo_1']['settings'] = array(
    'image_style' => 'api_logo_large',
    'image_link' => '',
  );
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_lb_logo_2']['id'] = 'field_lb_logo_2';
  $handler->display->display_options['fields']['field_lb_logo_2']['table'] = 'field_data_field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo_2']['field'] = 'field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo_2']['label'] = 'logo_medium';
  $handler->display->display_options['fields']['field_lb_logo_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lb_logo_2']['settings'] = array(
    'image_style' => 'api_logo_medium',
    'image_link' => '',
  );
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_lb_logo_3']['id'] = 'field_lb_logo_3';
  $handler->display->display_options['fields']['field_lb_logo_3']['table'] = 'field_data_field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo_3']['field'] = 'field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo_3']['label'] = 'logo_thumbnail';
  $handler->display->display_options['fields']['field_lb_logo_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lb_logo_3']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lb_logo_3']['settings'] = array(
    'image_style' => 'api_logo_thumbnail',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_ao_website']['id'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['table'] = 'field_data_field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['field'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['click_sort_column'] = 'url';
  /* Field: Content: UPC Prefix */
  $handler->display->display_options['fields']['field_lb_upc']['id'] = 'field_lb_upc';
  $handler->display->display_options['fields']['field_lb_upc']['table'] = 'field_data_field_lb_upc';
  $handler->display->display_options['fields']['field_lb_upc']['field'] = 'field_lb_upc';
  $handler->display->display_options['fields']['field_lb_upc']['label'] = 'upc_prefix';
  $handler->display->display_options['fields']['field_lb_upc']['element_label_colon'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_lb_description']['id'] = 'field_lb_description';
  $handler->display->display_options['fields']['field_lb_description']['table'] = 'field_data_field_lb_description';
  $handler->display->display_options['fields']['field_lb_description']['field'] = 'field_lb_description';
  $handler->display->display_options['fields']['field_lb_description']['label'] = 'description';
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['label'] = 'category_ids';
  $handler->display->display_options['fields']['term_node_tid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['alter']['text'] = '[term_node_tid-tid]';
  $handler->display->display_options['fields']['term_node_tid']['link_to_taxonomy'] = FALSE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'animal_care' => 0,
    'certifications' => 0,
    'cosmetics' => 0,
    'countries' => 0,
    'distributors' => 0,
    'lb_download_image_type' => 0,
    'household_products' => 0,
    'personal_care' => 0,
    'lb_product_types' => 0,
    'tags' => 0,
  );
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_lb_brand_company']['id'] = 'field_lb_brand_company';
  $handler->display->display_options['fields']['field_lb_brand_company']['table'] = 'field_data_field_lb_brand_company';
  $handler->display->display_options['fields']['field_lb_brand_company']['field'] = 'field_lb_brand_company';
  $handler->display->display_options['fields']['field_lb_brand_company']['label'] = 'company_id';
  $handler->display->display_options['fields']['field_lb_brand_company']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lb_brand_company']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_lb_brand_company']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_lb_logo']['id'] = 'field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo']['table'] = 'field_data_field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo']['field'] = 'field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo']['label'] = 'logo_original';
  $handler->display->display_options['fields']['field_lb_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lb_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lb_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_lb_logo_1']['id'] = 'field_lb_logo_1';
  $handler->display->display_options['fields']['field_lb_logo_1']['table'] = 'field_data_field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo_1']['field'] = 'field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo_1']['label'] = 'logo_large';
  $handler->display->display_options['fields']['field_lb_logo_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lb_logo_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lb_logo_1']['settings'] = array(
    'image_style' => 'api_logo_large',
    'image_link' => '',
  );
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_lb_logo_2']['id'] = 'field_lb_logo_2';
  $handler->display->display_options['fields']['field_lb_logo_2']['table'] = 'field_data_field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo_2']['field'] = 'field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo_2']['label'] = 'logo_medium';
  $handler->display->display_options['fields']['field_lb_logo_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lb_logo_2']['settings'] = array(
    'image_style' => 'api_logo_medium',
    'image_link' => '',
  );
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_lb_logo_3']['id'] = 'field_lb_logo_3';
  $handler->display->display_options['fields']['field_lb_logo_3']['table'] = 'field_data_field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo_3']['field'] = 'field_lb_logo';
  $handler->display->display_options['fields']['field_lb_logo_3']['label'] = 'logo_thumbnail';
  $handler->display->display_options['fields']['field_lb_logo_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_lb_logo_3']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_lb_logo_3']['settings'] = array(
    'image_style' => 'api_logo_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['path'] = 'rest/api/brand';
  $export['rest_api_brand'] = $view;

  $view = new view();
  $view->name = 'rest_api_categories';
  $view->description = 'This is a run down of all categories in the site, in JSON format';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'REST API Categories';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'categories';
  $handler->display->display_options['style_options']['top_child_object'] = 'category';
  $handler->display->display_options['style_options']['plaintext_output'] = 0;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Field: Taxonomy vocabulary: Vocabulary ID */
  $handler->display->display_options['fields']['vid']['id'] = 'vid';
  $handler->display->display_options['fields']['vid']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['fields']['vid']['field'] = 'vid';
  $handler->display->display_options['fields']['vid']['label'] = 'vocabulary_id';
  $handler->display->display_options['fields']['vid']['separator'] = '';
  /* Field: Taxonomy vocabulary: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = 'vocabulary_name';
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = 'tid';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'term';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'animal_care' => 'animal_care',
    'cosmetics' => 'cosmetics',
    'household_products' => 'household_products',
    'personal_care' => 'personal_care',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'rest/api/categories';
  $export['rest_api_categories'] = $view;

  $view = new view();
  $view->name = 'rest_api_contacts';
  $view->description = 'This is a run down of all contacts in the site, in JSON format';
  $view->tag = 'default';
  $view->base_table = 'crm_core_contact';
  $view->human_name = 'REST API Contacts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '500';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'organizations';
  $handler->display->display_options['style_options']['top_child_object'] = 'organization';
  $handler->display->display_options['style_options']['plaintext_output'] = 0;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Field: CRM Core Contact: Contact ID */
  $handler->display->display_options['fields']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['fields']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['fields']['contact_id']['label'] = 'cid';
  $handler->display->display_options['fields']['contact_id']['link_to_contact'] = 0;
  /* Field: CRM Core Contact: Company */
  $handler->display->display_options['fields']['contact_name']['id'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['table'] = 'field_data_contact_name';
  $handler->display->display_options['fields']['contact_name']['field'] = 'contact_name';
  $handler->display->display_options['fields']['contact_name']['label'] = 'company_name';
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
  /* Field: Field: Website */
  $handler->display->display_options['fields']['field_ao_website']['id'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['table'] = 'field_data_field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['field'] = 'field_ao_website';
  $handler->display->display_options['fields']['field_ao_website']['label'] = 'website';
  $handler->display->display_options['fields']['field_ao_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ao_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ao_website']['type'] = 'link_plain';
  /* Field: Field: Business Address - Country */
  $handler->display->display_options['fields']['field_ao_business_address_country']['id'] = 'field_ao_business_address_country';
  $handler->display->display_options['fields']['field_ao_business_address_country']['table'] = 'field_data_field_ao_business_address';
  $handler->display->display_options['fields']['field_ao_business_address_country']['field'] = 'field_ao_business_address_country';
  $handler->display->display_options['fields']['field_ao_business_address_country']['label'] = 'canadian';
  $handler->display->display_options['fields']['field_ao_business_address_country']['display_name'] = 1;
  /* Field: CRM Core Contact: Dirty parent */
  $handler->display->display_options['fields']['field_lb_dirty_parent']['id'] = 'field_lb_dirty_parent';
  $handler->display->display_options['fields']['field_lb_dirty_parent']['table'] = 'field_data_field_lb_dirty_parent';
  $handler->display->display_options['fields']['field_lb_dirty_parent']['field'] = 'field_lb_dirty_parent';
  $handler->display->display_options['fields']['field_lb_dirty_parent']['label'] = 'dirty_parent';
  /* Field: CRM Core Contact: Logo user */
  $handler->display->display_options['fields']['field_lb_logo_user']['id'] = 'field_lb_logo_user';
  $handler->display->display_options['fields']['field_lb_logo_user']['table'] = 'field_data_field_lb_logo_user';
  $handler->display->display_options['fields']['field_lb_logo_user']['field'] = 'field_lb_logo_user';
  $handler->display->display_options['fields']['field_lb_logo_user']['label'] = 'logo_user';
  $handler->display->display_options['fields']['field_lb_logo_user']['element_label_colon'] = FALSE;
  /* Sort criterion: CRM Core Contact: Home Address - Last name */
  $handler->display->display_options['sorts']['field_ao_home_address_last_name']['id'] = 'field_ao_home_address_last_name';
  $handler->display->display_options['sorts']['field_ao_home_address_last_name']['table'] = 'field_data_field_ao_home_address';
  $handler->display->display_options['sorts']['field_ao_home_address_last_name']['field'] = 'field_ao_home_address_last_name';
  /* Contextual filter: CRM Core Contact: Contact ID */
  $handler->display->display_options['arguments']['contact_id']['id'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['table'] = 'crm_core_contact';
  $handler->display->display_options['arguments']['contact_id']['field'] = 'contact_id';
  $handler->display->display_options['arguments']['contact_id']['default_argument_type'] = 'fixed';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'rest/api/contacts';
  $export['rest_api_contacts'] = $view;

  $view = new view();
  $view->name = 'rest_api_partnership';
  $view->description = 'This is a run down of all partnerships in the site, in JSON format';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'REST API Partnership';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'partnerships';
  $handler->display->display_options['style_options']['top_child_object'] = 'partnership';
  $handler->display->display_options['style_options']['plaintext_output'] = 0;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Brand */
  $handler->display->display_options['fields']['field_brand']['id'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['table'] = 'field_data_field_brand';
  $handler->display->display_options['fields']['field_brand']['field'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['label'] = 'brand_id';
  $handler->display->display_options['fields']['field_brand']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_brand']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_brand']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_brand']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'description';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_partnership_url']['id'] = 'field_partnership_url';
  $handler->display->display_options['fields']['field_partnership_url']['table'] = 'field_data_field_partnership_url';
  $handler->display->display_options['fields']['field_partnership_url']['field'] = 'field_partnership_url';
  $handler->display->display_options['fields']['field_partnership_url']['label'] = 'url';
  $handler->display->display_options['fields']['field_partnership_url']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'rest/api/partnership';
  $export['rest_api_partnership'] = $view;

  $view = new view();
  $view->name = 'rest_api_promotion';
  $view->description = ' Display: Page In database Type: Term This is a run down of all products in the site, in JSON format';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'REST API Promotion';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'promotions';
  $handler->display->display_options['style_options']['top_child_object'] = 'promotion';
  $handler->display->display_options['style_options']['plaintext_output'] = 0;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Brand */
  $handler->display->display_options['fields']['field_brand']['id'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['table'] = 'field_data_field_brand';
  $handler->display->display_options['fields']['field_brand']['field'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['label'] = 'brand_id';
  $handler->display->display_options['fields']['field_brand']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_brand']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_brand']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Promotion Dates */
  $handler->display->display_options['fields']['field_promotion_dates']['id'] = 'field_promotion_dates';
  $handler->display->display_options['fields']['field_promotion_dates']['table'] = 'field_data_field_promotion_dates';
  $handler->display->display_options['fields']['field_promotion_dates']['field'] = 'field_promotion_dates';
  $handler->display->display_options['fields']['field_promotion_dates']['label'] = 'start_date';
  $handler->display->display_options['fields']['field_promotion_dates']['alter']['text'] = '[field_promotion_dates-value]';
  $handler->display->display_options['fields']['field_promotion_dates']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_promotion_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_promotion_dates']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_promotion_dates']['settings'] = array(
    'format_type' => 'month_day_year',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Promotion Dates */
  $handler->display->display_options['fields']['field_promotion_dates_1']['id'] = 'field_promotion_dates_1';
  $handler->display->display_options['fields']['field_promotion_dates_1']['table'] = 'field_data_field_promotion_dates';
  $handler->display->display_options['fields']['field_promotion_dates_1']['field'] = 'field_promotion_dates';
  $handler->display->display_options['fields']['field_promotion_dates_1']['label'] = 'end_date';
  $handler->display->display_options['fields']['field_promotion_dates_1']['alter']['text'] = '[field_promotion_dates_1-value2] ';
  $handler->display->display_options['fields']['field_promotion_dates_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_promotion_dates_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_promotion_dates_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_promotion_dates_1']['settings'] = array(
    'format_type' => 'month_day_year',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Promotion status */
  $handler->display->display_options['fields']['field_promotion_status']['id'] = 'field_promotion_status';
  $handler->display->display_options['fields']['field_promotion_status']['table'] = 'field_data_field_promotion_status';
  $handler->display->display_options['fields']['field_promotion_status']['field'] = 'field_promotion_status';
  $handler->display->display_options['fields']['field_promotion_status']['label'] = 'active_indicator';
  $handler->display->display_options['fields']['field_promotion_status']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'rest/api/promotion';
  $export['rest_api_promotion'] = $view;

  return $export;
}
