<?php
/**
 * @file
 * lb_companies.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function lb_companies_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'view_panel_context_2';
  $handler->task = 'view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'LB variant for organization contact',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:crm_core_contact',
          'settings' => array(
            'type' => array(
              'company' => 'company',
            ),
          ),
          'context' => 'argument_entity_id:crm_core_contact_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
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
    ),
  );
  $display->cache = array();
  $display->title = '%crm_core_contact:contact_name';
  $display->uuid = 'f46b9c0d-5884-4373-b0b4-b0817f233ca5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d1312b3f-030f-4b85-bc92-04e1a32fa718';
    $pane->panel = 'bottom';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd1312b3f-030f-4b85-bc92-04e1a32fa718';
    $display->content['new-d1312b3f-030f-4b85-bc92-04e1a32fa718'] = $pane;
    $display->panels['bottom'][0] = 'new-d1312b3f-030f-4b85-bc92-04e1a32fa718';
    $pane = new stdClass();
    $pane->pid = 'new-166876bf-7000-40e6-b538-a95c9fde38da';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'lb_user_profile_brands';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 1,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => 'argument_entity_id:crm_core_contact_1.contact-id',
      ),
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
    $pane->uuid = '166876bf-7000-40e6-b538-a95c9fde38da';
    $display->content['new-166876bf-7000-40e6-b538-a95c9fde38da'] = $pane;
    $display->panels['bottom'][1] = 'new-166876bf-7000-40e6-b538-a95c9fde38da';
    $pane = new stdClass();
    $pane->pid = 'new-b846a37f-659a-4259-8b48-17be074781f1';
    $pane->panel = 'left_above';
    $pane->type = 'entity_view';
    $pane->subtype = 'crm_core_contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'company',
      'context' => 'argument_entity_id:crm_core_contact_1',
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
    $pane->uuid = 'b846a37f-659a-4259-8b48-17be074781f1';
    $display->content['new-b846a37f-659a-4259-8b48-17be074781f1'] = $pane;
    $display->panels['left_above'][0] = 'new-b846a37f-659a-4259-8b48-17be074781f1';
    $pane = new stdClass();
    $pane->pid = 'new-de785973-e542-4274-aedb-feb7c3416430';
    $pane->panel = 'left_above';
    $pane->type = 'pc_button';
    $pane->subtype = 'pc_button';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'de785973-e542-4274-aedb-feb7c3416430';
    $display->content['new-de785973-e542-4274-aedb-feb7c3416430'] = $pane;
    $display->panels['left_above'][1] = 'new-de785973-e542-4274-aedb-feb7c3416430';
    $pane = new stdClass();
    $pane->pid = 'new-36a3474b-1942-4e7f-bc2c-edb614fe7af1';
    $pane->panel = 'left_above';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_company_page_primary_contact-panel_pane_1';
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
    $pane->uuid = '36a3474b-1942-4e7f-bc2c-edb614fe7af1';
    $display->content['new-36a3474b-1942-4e7f-bc2c-edb614fe7af1'] = $pane;
    $display->panels['left_above'][2] = 'new-36a3474b-1942-4e7f-bc2c-edb614fe7af1';
    $pane = new stdClass();
    $pane->pid = 'new-84711b20-03a1-4495-afb4-1767ad577ebe';
    $pane->panel = 'left_above';
    $pane->type = 'bmc_button';
    $pane->subtype = 'bmc_button';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '84711b20-03a1-4495-afb4-1767ad577ebe';
    $display->content['new-84711b20-03a1-4495-afb4-1767ad577ebe'] = $pane;
    $display->panels['left_above'][3] = 'new-84711b20-03a1-4495-afb4-1767ad577ebe';
    $pane = new stdClass();
    $pane->pid = 'new-69648797-e96b-458d-9a36-b48bcbce09fa';
    $pane->panel = 'left_above';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_company_page_brands_managers-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '69648797-e96b-458d-9a36-b48bcbce09fa';
    $display->content['new-69648797-e96b-458d-9a36-b48bcbce09fa'] = $pane;
    $display->panels['left_above'][4] = 'new-69648797-e96b-458d-9a36-b48bcbce09fa';
    $pane = new stdClass();
    $pane->pid = 'new-e89f41e7-1581-4166-84d7-cdcae0b9d4e5';
    $pane->panel = 'middle';
    $pane->type = 'sup_button';
    $pane->subtype = 'sup_button';
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
    $pane->uuid = 'e89f41e7-1581-4166-84d7-cdcae0b9d4e5';
    $display->content['new-e89f41e7-1581-4166-84d7-cdcae0b9d4e5'] = $pane;
    $display->panels['middle'][0] = 'new-e89f41e7-1581-4166-84d7-cdcae0b9d4e5';
    $pane = new stdClass();
    $pane->pid = 'new-9e5e1d1c-5bd3-4d85-852d-85a23a8bca28';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_company_page_suppliers-panel_pane_1';
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
    $pane->uuid = '9e5e1d1c-5bd3-4d85-852d-85a23a8bca28';
    $display->content['new-9e5e1d1c-5bd3-4d85-852d-85a23a8bca28'] = $pane;
    $display->panels['middle'][1] = 'new-9e5e1d1c-5bd3-4d85-852d-85a23a8bca28';
    $pane = new stdClass();
    $pane->pid = 'new-2f6c10d1-6067-4dc7-97a1-0cb2f4ce7db1';
    $pane->panel = 'middle';
    $pane->type = 'mc_button';
    $pane->subtype = 'mc_button';
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
    $pane->uuid = '2f6c10d1-6067-4dc7-97a1-0cb2f4ce7db1';
    $display->content['new-2f6c10d1-6067-4dc7-97a1-0cb2f4ce7db1'] = $pane;
    $display->panels['middle'][2] = 'new-2f6c10d1-6067-4dc7-97a1-0cb2f4ce7db1';
    $pane = new stdClass();
    $pane->pid = 'new-8e13de13-0a8e-43c5-9ed9-ac4a33023eae';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_company_page_manufacturers-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '8e13de13-0a8e-43c5-9ed9-ac4a33023eae';
    $display->content['new-8e13de13-0a8e-43c5-9ed9-ac4a33023eae'] = $pane;
    $display->panels['middle'][3] = 'new-8e13de13-0a8e-43c5-9ed9-ac4a33023eae';
    $pane = new stdClass();
    $pane->pid = 'new-c93a851e-295a-421b-a7da-07a3ba5c3bd4';
    $pane->panel = 'right_above';
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
    $pane->uuid = 'c93a851e-295a-421b-a7da-07a3ba5c3bd4';
    $display->content['new-c93a851e-295a-421b-a7da-07a3ba5c3bd4'] = $pane;
    $display->panels['right_above'][0] = 'new-c93a851e-295a-421b-a7da-07a3ba5c3bd4';
    $pane = new stdClass();
    $pane->pid = 'new-ea471abb-2e5e-4f76-8230-1f65ed27f13f';
    $pane->panel = 'right_above';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_company_page_recent_company_activities-panel_pane_1';
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
    $pane->uuid = 'ea471abb-2e5e-4f76-8230-1f65ed27f13f';
    $display->content['new-ea471abb-2e5e-4f76-8230-1f65ed27f13f'] = $pane;
    $display->panels['right_above'][1] = 'new-ea471abb-2e5e-4f76-8230-1f65ed27f13f';
    $pane = new stdClass();
    $pane->pid = 'new-0b65c570-8594-47cd-9222-745a3fb0c763';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_company_primary_contact-panel_pane_1';
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
    $pane->uuid = '0b65c570-8594-47cd-9222-745a3fb0c763';
    $display->content['new-0b65c570-8594-47cd-9222-745a3fb0c763'] = $pane;
    $display->panels['top'][0] = 'new-0b65c570-8594-47cd-9222-745a3fb0c763';
    $pane = new stdClass();
    $pane->pid = 'new-9e052ff1-897d-4405-bfe5-f2848e598324';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_company_marketing_contact-panel_pane_1';
    $pane->shown = FALSE;
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
    $pane->uuid = '9e052ff1-897d-4405-bfe5-f2848e598324';
    $display->content['new-9e052ff1-897d-4405-bfe5-f2848e598324'] = $pane;
    $display->panels['top'][1] = 'new-9e052ff1-897d-4405-bfe5-f2848e598324';
    $pane = new stdClass();
    $pane->pid = 'new-81a98c7d-1258-43ab-a800-7915c679dc89';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_company_application_status-panel_pane_1';
    $pane->shown = FALSE;
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
    $pane->uuid = '81a98c7d-1258-43ab-a800-7915c679dc89';
    $display->content['new-81a98c7d-1258-43ab-a800-7915c679dc89'] = $pane;
    $display->panels['top'][2] = 'new-81a98c7d-1258-43ab-a800-7915c679dc89';
    $pane = new stdClass();
    $pane->pid = 'new-bb6addf8-0de5-4631-a95c-c5c0481b80b8';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_company_activity_feed-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'bb6addf8-0de5-4631-a95c-c5c0481b80b8';
    $display->content['new-bb6addf8-0de5-4631-a95c-c5c0481b80b8'] = $pane;
    $display->panels['top'][3] = 'new-bb6addf8-0de5-4631-a95c-c5c0481b80b8';
    $pane = new stdClass();
    $pane->pid = 'new-150a7311-7486-4542-a7a4-994837707302';
    $pane->panel = 'top';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '150a7311-7486-4542-a7a4-994837707302';
    $display->content['new-150a7311-7486-4542-a7a4-994837707302'] = $pane;
    $display->panels['top'][4] = 'new-150a7311-7486-4542-a7a4-994837707302';
    $pane = new stdClass();
    $pane->pid = 'new-dc86b955-103b-4d63-b22d-a8fb42f422e3';
    $pane->panel = 'top';
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'dc86b955-103b-4d63-b22d-a8fb42f422e3';
    $display->content['new-dc86b955-103b-4d63-b22d-a8fb42f422e3'] = $pane;
    $display->panels['top'][5] = 'new-dc86b955-103b-4d63-b22d-a8fb42f422e3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['view_panel_context_2'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function lb_companies_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'lb_company_application_certification_activity';
  $page->task = 'page';
  $page->admin_title = 'Application for certification';
  $page->admin_description = '';
  $page->path = 'company/%crm_core_contact/application';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'crm_core_contact' => array(
      'id' => 1,
      'identifier' => 'CRM Core Contact: ID',
      'name' => 'entity_id:crm_core_contact',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_lb_company_application_certification_activity_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'lb_company_application_certification_activity';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Company application for certification',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
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
  $display->uuid = '1a023600-e46a-4434-ba56-4265a68e4ab8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e53d44f4-1fff-4a2b-aaf0-5c8c4e510f6c';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e53d44f4-1fff-4a2b-aaf0-5c8c4e510f6c';
    $display->content['new-e53d44f4-1fff-4a2b-aaf0-5c8c4e510f6c'] = $pane;
    $display->panels['middle'][0] = 'new-e53d44f4-1fff-4a2b-aaf0-5c8c4e510f6c';
    $pane = new stdClass();
    $pane->pid = 'new-c93dfadc-c77d-4e17-b2b4-0a1083d5fdd1';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_application_section_a-panel_pane_2';
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
    $pane->uuid = 'c93dfadc-c77d-4e17-b2b4-0a1083d5fdd1';
    $display->content['new-c93dfadc-c77d-4e17-b2b4-0a1083d5fdd1'] = $pane;
    $display->panels['middle'][1] = 'new-c93dfadc-c77d-4e17-b2b4-0a1083d5fdd1';
    $pane = new stdClass();
    $pane->pid = 'new-1eef5143-96b7-402e-a409-0bffc747aa78';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_application_section_b-panel_pane_2';
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
    $pane->uuid = '1eef5143-96b7-402e-a409-0bffc747aa78';
    $display->content['new-1eef5143-96b7-402e-a409-0bffc747aa78'] = $pane;
    $display->panels['middle'][2] = 'new-1eef5143-96b7-402e-a409-0bffc747aa78';
    $pane = new stdClass();
    $pane->pid = 'new-f55cd3b4-f0ca-4d3f-a5f8-1529ee8c4a72';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_application_section_c-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'f55cd3b4-f0ca-4d3f-a5f8-1529ee8c4a72';
    $display->content['new-f55cd3b4-f0ca-4d3f-a5f8-1529ee8c4a72'] = $pane;
    $display->panels['middle'][3] = 'new-f55cd3b4-f0ca-4d3f-a5f8-1529ee8c4a72';
    $pane = new stdClass();
    $pane->pid = 'new-f75c4e10-69f1-411b-8da4-e308863013fd';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_application_section_d_company-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'f75c4e10-69f1-411b-8da4-e308863013fd';
    $display->content['new-f75c4e10-69f1-411b-8da4-e308863013fd'] = $pane;
    $display->panels['middle'][4] = 'new-f75c4e10-69f1-411b-8da4-e308863013fd';
    $pane = new stdClass();
    $pane->pid = 'new-c150d760-f980-4276-9131-dd429538f74f';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_application_section_e-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'c150d760-f980-4276-9131-dd429538f74f';
    $display->content['new-c150d760-f980-4276-9131-dd429538f74f'] = $pane;
    $display->panels['middle'][5] = 'new-c150d760-f980-4276-9131-dd429538f74f';
    $pane = new stdClass();
    $pane->pid = 'new-67686d0e-37e7-4996-bda8-74abf8377476';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_application_section_f-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '67686d0e-37e7-4996-bda8-74abf8377476';
    $display->content['new-67686d0e-37e7-4996-bda8-74abf8377476'] = $pane;
    $display->panels['middle'][6] = 'new-67686d0e-37e7-4996-bda8-74abf8377476';
    $pane = new stdClass();
    $pane->pid = 'new-d5cb34b7-d8fe-47d9-af19-734b53e23017';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'lb_application_section_g_company_page-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'd5cb34b7-d8fe-47d9-af19-734b53e23017';
    $display->content['new-d5cb34b7-d8fe-47d9-af19-734b53e23017'] = $pane;
    $display->panels['middle'][7] = 'new-d5cb34b7-d8fe-47d9-af19-734b53e23017';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['lb_company_application_certification_activity'] = $page;

  return $pages;

}
