<?php
/**
 * @file
 * lb_registration.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function lb_registration_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'crm_core_activity_view_panel_context';
  $handler->task = 'crm_core_activity_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'LB Application Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'lb-company-application',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:crm_core_activity',
          'settings' => array(
            'type' => array(
              'lb_application' => 'lb_application',
            ),
          ),
          'context' => 'argument_entity_id:crm_core_activity_2',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6a15ae04-2fc7-42b4-b054-ff480c5fe659';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8a55ca08-dc28-4ceb-bbb2-1a94dafb3b09';
    $pane->panel = 'middle';
    $pane->type = 'lb_registration_actions';
    $pane->subtype = 'lb_registration_actions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8a55ca08-dc28-4ceb-bbb2-1a94dafb3b09';
    $display->content['new-8a55ca08-dc28-4ceb-bbb2-1a94dafb3b09'] = $pane;
    $display->panels['middle'][0] = 'new-8a55ca08-dc28-4ceb-bbb2-1a94dafb3b09';
    $pane = new stdClass();
    $pane->pid = 'new-e33cec86-1388-4664-9baf-c5a69db886cc';
    $pane->panel = 'middle';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e33cec86-1388-4664-9baf-c5a69db886cc';
    $display->content['new-e33cec86-1388-4664-9baf-c5a69db886cc'] = $pane;
    $display->panels['middle'][1] = 'new-e33cec86-1388-4664-9baf-c5a69db886cc';
    $pane = new stdClass();
    $pane->pid = 'new-b0731a25-ab1b-423f-8ad3-7aa820a152e8';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_application_section_a-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'contact_id' => '817',
      ),
      'context' => array(
        0 => 'argument_entity_id:crm_core_activity_2',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'lb-app-section-a',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b0731a25-ab1b-423f-8ad3-7aa820a152e8';
    $display->content['new-b0731a25-ab1b-423f-8ad3-7aa820a152e8'] = $pane;
    $display->panels['middle'][2] = 'new-b0731a25-ab1b-423f-8ad3-7aa820a152e8';
    $pane = new stdClass();
    $pane->pid = 'new-f6e6815c-5cb3-4399-bb55-028c7ea5b837';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_application_section_b-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'lb-app-section-b',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'f6e6815c-5cb3-4399-bb55-028c7ea5b837';
    $display->content['new-f6e6815c-5cb3-4399-bb55-028c7ea5b837'] = $pane;
    $display->panels['middle'][3] = 'new-f6e6815c-5cb3-4399-bb55-028c7ea5b837';
    $pane = new stdClass();
    $pane->pid = 'new-27a103d9-6dc2-47b4-8b68-a4fd8c3cf275';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_application_section_c-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'lb-app-section-c',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '27a103d9-6dc2-47b4-8b68-a4fd8c3cf275';
    $display->content['new-27a103d9-6dc2-47b4-8b68-a4fd8c3cf275'] = $pane;
    $display->panels['middle'][4] = 'new-27a103d9-6dc2-47b4-8b68-a4fd8c3cf275';
    $pane = new stdClass();
    $pane->pid = 'new-a0312975-3426-4c5d-b050-2b5a66989c7a';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_application_section_d-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'lb-app-section-d',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'a0312975-3426-4c5d-b050-2b5a66989c7a';
    $display->content['new-a0312975-3426-4c5d-b050-2b5a66989c7a'] = $pane;
    $display->panels['middle'][5] = 'new-a0312975-3426-4c5d-b050-2b5a66989c7a';
    $pane = new stdClass();
    $pane->pid = 'new-eadbc66d-b050-4ff2-aeda-f573b240b8ca';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_application_section_e-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'lb-app-section-e',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'eadbc66d-b050-4ff2-aeda-f573b240b8ca';
    $display->content['new-eadbc66d-b050-4ff2-aeda-f573b240b8ca'] = $pane;
    $display->panels['middle'][6] = 'new-eadbc66d-b050-4ff2-aeda-f573b240b8ca';
    $pane = new stdClass();
    $pane->pid = 'new-4371ca48-8d36-4497-a639-783955694367';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_application_section_f-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'lb-app-section-f',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '4371ca48-8d36-4497-a639-783955694367';
    $display->content['new-4371ca48-8d36-4497-a639-783955694367'] = $pane;
    $display->panels['middle'][7] = 'new-4371ca48-8d36-4497-a639-783955694367';
    $pane = new stdClass();
    $pane->pid = 'new-2491a74f-45d6-423c-9b3f-4b0649554c80';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_application_section_g-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'lb-app-section-g',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '2491a74f-45d6-423c-9b3f-4b0649554c80';
    $display->content['new-2491a74f-45d6-423c-9b3f-4b0649554c80'] = $pane;
    $display->panels['middle'][8] = 'new-2491a74f-45d6-423c-9b3f-4b0649554c80';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['crm_core_activity_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'crm_core_activity_view_panel_context_2';
  $handler->task = 'crm_core_activity_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'LB Application Request',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'lb-application-request',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:crm_core_activity',
          'settings' => array(
            'type' => array(
              'lb_application_request' => 'lb_application_request',
            ),
          ),
          'context' => 'argument_entity_id:crm_core_activity_2',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8f203f96-3ac2-48e7-83bd-dc2f26a9849e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-439f6289-bd80-40b4-8761-811ab775256a';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_request_status-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '439f6289-bd80-40b4-8761-811ab775256a';
    $display->content['new-439f6289-bd80-40b4-8761-811ab775256a'] = $pane;
    $display->panels['middle'][0] = 'new-439f6289-bd80-40b4-8761-811ab775256a';
    $pane = new stdClass();
    $pane->pid = 'new-a00c22a7-bc01-4e81-81eb-87bdd71286d9';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_application_request_contact_info-panel_pane_1';
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
    $pane->uuid = 'a00c22a7-bc01-4e81-81eb-87bdd71286d9';
    $display->content['new-a00c22a7-bc01-4e81-81eb-87bdd71286d9'] = $pane;
    $display->panels['middle'][1] = 'new-a00c22a7-bc01-4e81-81eb-87bdd71286d9';
    $pane = new stdClass();
    $pane->pid = 'new-734de762-dd26-470f-8b1a-11c69c1c6618';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_application_request_about_your_company-panel_pane_1';
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
    $pane->uuid = '734de762-dd26-470f-8b1a-11c69c1c6618';
    $display->content['new-734de762-dd26-470f-8b1a-11c69c1c6618'] = $pane;
    $display->panels['middle'][2] = 'new-734de762-dd26-470f-8b1a-11c69c1c6618';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a00c22a7-bc01-4e81-81eb-87bdd71286d9';
  $handler->conf['display'] = $display;
  $export['crm_core_activity_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'crm_core_activity_view_panel_context_3';
  $handler->task = 'crm_core_activity_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'LB Application Request Approved',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'lb-application-request-approved',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:crm_core_activity',
          'settings' => array(
            'type' => array(
              'lb_application_request_approved' => 'lb_application_request_approved',
            ),
          ),
          'context' => 'argument_entity_id:crm_core_activity_2',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '2c2df437-87d8-4728-b697-be893ab33ecc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-881e9162-c129-47f2-afd3-7311f44ff78a';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_application_request_approved_string-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '881e9162-c129-47f2-afd3-7311f44ff78a';
    $display->content['new-881e9162-c129-47f2-afd3-7311f44ff78a'] = $pane;
    $display->panels['middle'][0] = 'new-881e9162-c129-47f2-afd3-7311f44ff78a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['crm_core_activity_view_panel_context_3'] = $handler;

  return $export;
}
