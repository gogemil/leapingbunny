<?php
/**
 * @file
 * ao.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ao_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'AO User Profile',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'User company',
        'keyword' => 'user_company',
        'name' => 'user_company',
        'position' => '1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'CRM Core Contact',
        'keyword' => 'crm_core_contact',
        'name' => 'entity:crm_core_contact',
        'entity_id' => '762',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 2,
          1 => 1,
          2 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
          1 => 'right',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => 'user-profile-container-class',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'upper_top_above_wayup',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'upper_top_above_wayup' => array(
        'type' => 'region',
        'title' => 'Upper Top Above Wayup',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
      'upper_top_above_wayup' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ec2432e0-3332-41a5-af83-ff6e81b47820';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e88f331b-980b-4936-b9e1-f933f0952600';
    $pane->panel = 'center';
    $pane->type = 'supplier_contact_button';
    $pane->subtype = 'supplier_contact_button';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e88f331b-980b-4936-b9e1-f933f0952600';
    $display->content['new-e88f331b-980b-4936-b9e1-f933f0952600'] = $pane;
    $display->panels['center'][0] = 'new-e88f331b-980b-4936-b9e1-f933f0952600';
    $pane = new stdClass();
    $pane->pid = 'new-5195f4ac-6921-4cca-b79e-02ba53683b52';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_user_profile_suppliers-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'context_user_company_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5195f4ac-6921-4cca-b79e-02ba53683b52';
    $display->content['new-5195f4ac-6921-4cca-b79e-02ba53683b52'] = $pane;
    $display->panels['center'][1] = 'new-5195f4ac-6921-4cca-b79e-02ba53683b52';
    $pane = new stdClass();
    $pane->pid = 'new-07b4443b-f9fd-4019-9077-b84e32776cb4';
    $pane->panel = 'center';
    $pane->type = 'manufacturer_contact_button';
    $pane->subtype = 'manufacturer_contact_button';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '07b4443b-f9fd-4019-9077-b84e32776cb4';
    $display->content['new-07b4443b-f9fd-4019-9077-b84e32776cb4'] = $pane;
    $display->panels['center'][2] = 'new-07b4443b-f9fd-4019-9077-b84e32776cb4';
    $pane = new stdClass();
    $pane->pid = 'new-7f458b45-2519-4c78-adcc-2119b0d38e14';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_user_profile_manufacturers-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'context_user_company_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '7f458b45-2519-4c78-adcc-2119b0d38e14';
    $display->content['new-7f458b45-2519-4c78-adcc-2119b0d38e14'] = $pane;
    $display->panels['center'][3] = 'new-7f458b45-2519-4c78-adcc-2119b0d38e14';
    $pane = new stdClass();
    $pane->pid = 'new-c71fe89b-f82c-4fb9-8553-ffdf25e5ac38';
    $pane->panel = 'center';
    $pane->type = 'brand_contact_button';
    $pane->subtype = 'brand_contact_button';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c71fe89b-f82c-4fb9-8553-ffdf25e5ac38';
    $display->content['new-c71fe89b-f82c-4fb9-8553-ffdf25e5ac38'] = $pane;
    $display->panels['center'][4] = 'new-c71fe89b-f82c-4fb9-8553-ffdf25e5ac38';
    $pane = new stdClass();
    $pane->pid = 'new-428512f2-4201-42fe-bc6c-ba3c8a41da15';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_user_profile_brands-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'context_user_company_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '428512f2-4201-42fe-bc6c-ba3c8a41da15';
    $display->content['new-428512f2-4201-42fe-bc6c-ba3c8a41da15'] = $pane;
    $display->panels['center'][5] = 'new-428512f2-4201-42fe-bc6c-ba3c8a41da15';
    $pane = new stdClass();
    $pane->pid = 'new-407d7f49-b45c-44a1-abbd-f48d796da7aa';
    $pane->panel = 'left';
    $pane->type = 'primary_contact_button';
    $pane->subtype = 'primary_contact_button';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '407d7f49-b45c-44a1-abbd-f48d796da7aa';
    $display->content['new-407d7f49-b45c-44a1-abbd-f48d796da7aa'] = $pane;
    $display->panels['left'][0] = 'new-407d7f49-b45c-44a1-abbd-f48d796da7aa';
    $pane = new stdClass();
    $pane->pid = 'new-c9017e63-8afc-44ef-a6f0-d3cc42e979e5';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_user_profile_primary_contact-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'context_user_company_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c9017e63-8afc-44ef-a6f0-d3cc42e979e5';
    $display->content['new-c9017e63-8afc-44ef-a6f0-d3cc42e979e5'] = $pane;
    $display->panels['left'][1] = 'new-c9017e63-8afc-44ef-a6f0-d3cc42e979e5';
    $pane = new stdClass();
    $pane->pid = 'new-ea9dd22c-7944-48e3-959b-785719d7c42f';
    $pane->panel = 'left';
    $pane->type = 'marketing_contact_button';
    $pane->subtype = 'marketing_contact_button';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ea9dd22c-7944-48e3-959b-785719d7c42f';
    $display->content['new-ea9dd22c-7944-48e3-959b-785719d7c42f'] = $pane;
    $display->panels['left'][2] = 'new-ea9dd22c-7944-48e3-959b-785719d7c42f';
    $pane = new stdClass();
    $pane->pid = 'new-9f07cf96-01df-4203-bb87-c3cd3cb6ae76';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_user_profile_brands_managers-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'context_user_company_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '9f07cf96-01df-4203-bb87-c3cd3cb6ae76';
    $display->content['new-9f07cf96-01df-4203-bb87-c3cd3cb6ae76'] = $pane;
    $display->panels['left'][3] = 'new-9f07cf96-01df-4203-bb87-c3cd3cb6ae76';
    $pane = new stdClass();
    $pane->pid = 'new-0bafac2b-bb77-4792-ad4c-3679d235fc3f';
    $pane->panel = 'right';
    $pane->type = 'application_certification';
    $pane->subtype = 'application_certification';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0bafac2b-bb77-4792-ad4c-3679d235fc3f';
    $display->content['new-0bafac2b-bb77-4792-ad4c-3679d235fc3f'] = $pane;
    $display->panels['right'][0] = 'new-0bafac2b-bb77-4792-ad4c-3679d235fc3f';
    $pane = new stdClass();
    $pane->pid = 'new-21673c7f-bc05-4fc2-9b64-a38f6a0d5512';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_user_profile_recent_activities-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'context_user_company_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '21673c7f-bc05-4fc2-9b64-a38f6a0d5512';
    $display->content['new-21673c7f-bc05-4fc2-9b64-a38f6a0d5512'] = $pane;
    $display->panels['right'][1] = 'new-21673c7f-bc05-4fc2-9b64-a38f6a0d5512';
    $pane = new stdClass();
    $pane->pid = 'new-6707ac97-0d65-43e0-b1a9-c71be7896c95';
    $pane->panel = 'upper_top_above_wayup';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_user_profile_company-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'context_user_company_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6707ac97-0d65-43e0-b1a9-c71be7896c95';
    $display->content['new-6707ac97-0d65-43e0-b1a9-c71be7896c95'] = $pane;
    $display->panels['upper_top_above_wayup'][0] = 'new-6707ac97-0d65-43e0-b1a9-c71be7896c95';
    $pane = new stdClass();
    $pane->pid = 'new-02762c8a-b488-4b3a-9d26-8b31f06951c9';
    $pane->panel = 'upper_top_above_wayup';
    $pane->type = 'company_edit';
    $pane->subtype = 'company_edit';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '02762c8a-b488-4b3a-9d26-8b31f06951c9';
    $display->content['new-02762c8a-b488-4b3a-9d26-8b31f06951c9'] = $pane;
    $display->panels['upper_top_above_wayup'][1] = 'new-02762c8a-b488-4b3a-9d26-8b31f06951c9';
    $pane = new stdClass();
    $pane->pid = 'new-84462f5e-3bd7-457f-8518-993afef27d6e';
    $pane->panel = 'upper_top_above_wayup';
    $pane->type = 'lb_registration_print';
    $pane->subtype = 'lb_registration_print';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '84462f5e-3bd7-457f-8518-993afef27d6e';
    $display->content['new-84462f5e-3bd7-457f-8518-993afef27d6e'] = $pane;
    $display->panels['upper_top_above_wayup'][2] = 'new-84462f5e-3bd7-457f-8518-993afef27d6e';
    $pane = new stdClass();
    $pane->pid = 'new-bfa70c1e-4b8a-4ece-b007-056a29d77739';
    $pane->panel = 'upper_top_above_wayup';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'I need assistance link',
      'title' => '',
      'body' => '<p><a href="node/821">I need assistance</a></p>
',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-company-assistance',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'bfa70c1e-4b8a-4ece-b007-056a29d77739';
    $display->content['new-bfa70c1e-4b8a-4ece-b007-056a29d77739'] = $pane;
    $display->panels['upper_top_above_wayup'][3] = 'new-bfa70c1e-4b8a-4ece-b007-056a29d77739';
    $pane = new stdClass();
    $pane->pid = 'new-ebc43327-1d38-4b99-8139-83840d27eaa8';
    $pane->panel = 'upper_top_above_wayup';
    $pane->type = 'company_status';
    $pane->subtype = 'company_status';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'ebc43327-1d38-4b99-8139-83840d27eaa8';
    $display->content['new-ebc43327-1d38-4b99-8139-83840d27eaa8'] = $pane;
    $display->panels['upper_top_above_wayup'][4] = 'new-ebc43327-1d38-4b99-8139-83840d27eaa8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'view_panel_context';
  $handler->task = 'view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'AbleOrganizer Individual Contact Display Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'CRM Contact Type',
        'keyword' => 'crm_core_contact_type',
        'name' => 'entity:crm_core_contact_type',
        'entity_id' => '1',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:crm_core_contact',
          'settings' => array(
            'type' => array(
              'individual' => 'individual',
            ),
          ),
          'context' => 'argument_entity_id:crm_core_contact_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => '',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
        'class' => 'contact',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
          1 => 'right',
        ),
        'parent' => 'main',
        'class' => 'contact',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '37e04453-3da8-4b51-bdb5-1d5be69b502c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cfb18e15-964f-4ebf-9f59-61d16fafff34';
    $pane->panel = 'left';
    $pane->type = 'ao_user_picture';
    $pane->subtype = 'ao_user_picture';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'display_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cfb18e15-964f-4ebf-9f59-61d16fafff34';
    $display->content['new-cfb18e15-964f-4ebf-9f59-61d16fafff34'] = $pane;
    $display->panels['left'][0] = 'new-cfb18e15-964f-4ebf-9f59-61d16fafff34';
    $pane = new stdClass();
    $pane->pid = 'new-741ceaa9-b0b1-432a-b2a1-ecc2ba0c5d55';
    $pane->panel = 'left';
    $pane->type = 'entity_view';
    $pane->subtype = 'crm_core_contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:crm_core_contact_1',
      'override_title' => 1,
      'override_title_text' => 'Contact Information',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '741ceaa9-b0b1-432a-b2a1-ecc2ba0c5d55';
    $display->content['new-741ceaa9-b0b1-432a-b2a1-ecc2ba0c5d55'] = $pane;
    $display->panels['left'][1] = 'new-741ceaa9-b0b1-432a-b2a1-ecc2ba0c5d55';
    $pane = new stdClass();
    $pane->pid = 'new-98038485-8f81-4504-bc8a-32bc35de4351';
    $pane->panel = 'right';
    $pane->type = 'ao_contact_stats';
    $pane->subtype = 'ao_contact_stats';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'display_title' => 1,
      'title' => 'What I Stand For',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '98038485-8f81-4504-bc8a-32bc35de4351';
    $display->content['new-98038485-8f81-4504-bc8a-32bc35de4351'] = $pane;
    $display->panels['right'][0] = 'new-98038485-8f81-4504-bc8a-32bc35de4351';
    $pane = new stdClass();
    $pane->pid = 'new-06a0b812-d41e-4a83-b1d5-96f22c9fbb2b';
    $pane->panel = 'right';
    $pane->type = 'ao_5_recent_activities';
    $pane->subtype = 'ao_5_recent_activities';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'display_title' => 1,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '06a0b812-d41e-4a83-b1d5-96f22c9fbb2b';
    $display->content['new-06a0b812-d41e-4a83-b1d5-96f22c9fbb2b'] = $pane;
    $display->panels['right'][1] = 'new-06a0b812-d41e-4a83-b1d5-96f22c9fbb2b';
    $pane = new stdClass();
    $pane->pid = 'new-df35dbb8-ad30-4ad9-9685-b319c626b6d8';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ao_contact_map_individual-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'df35dbb8-ad30-4ad9-9685-b319c626b6d8';
    $display->content['new-df35dbb8-ad30-4ad9-9685-b319c626b6d8'] = $pane;
    $display->panels['right'][2] = 'new-df35dbb8-ad30-4ad9-9685-b319c626b6d8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['view_panel_context'] = $handler;

  return $export;
}
