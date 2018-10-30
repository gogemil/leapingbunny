<?php
/**
 * @file
 * lb_declaration_forms.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function lb_declaration_forms_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'logo_licensing_application';
  $page->task = 'page';
  $page->admin_title = 'Logo Licensing Application';
  $page->admin_description = '';
  $page->path = 'company/%crm_core_contact/logo-licensing-application';
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
  $handler->name = 'page_logo_licensing_application_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'logo_licensing_application';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => ' Logo Licensing Application',
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
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Logo Licensing Application';
  $display->uuid = '4fa9648c-9a45-44bb-b476-9558051d4352';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f94557f4-076e-45fc-86cd-8d913b4df0c0';
    $pane->panel = 'center';
    $pane->type = 'logo_licensing_app';
    $pane->subtype = 'logo_licensing_app';
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
    $pane->uuid = 'f94557f4-076e-45fc-86cd-8d913b4df0c0';
    $display->content['new-f94557f4-076e-45fc-86cd-8d913b4df0c0'] = $pane;
    $display->panels['center'][0] = 'new-f94557f4-076e-45fc-86cd-8d913b4df0c0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f94557f4-076e-45fc-86cd-8d913b4df0c0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['logo_licensing_application'] = $page;

  return $pages;

}
