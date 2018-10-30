<?php
/**
 * @file
 * lb_downloads.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function lb_downloads_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'lb_downloads';
  $page->task = 'page';
  $page->admin_title = 'LB Downloads';
  $page->admin_description = '';
  $page->path = 'downloads';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_lb_downloads_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'lb_downloads';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Page',
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
  $display->layout = 'zen_no_wrapper';
  $display->layout_settings = array(
    'main_classes' => '',
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Downloads';
  $display->uuid = '901165f8-6195-4ef8-b02b-39004cd880f1';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_lb_downloads_panel_context';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2f22f1fc-6d5c-43e4-8cb0-15f84e992a67';
  $pane->panel = 'main';
  $pane->type = 'views_panes';
  $pane->subtype = 'lb_downloads-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_lb_download_type_tid' => 'Facebook Cover Photos',
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
  $pane->uuid = '2f22f1fc-6d5c-43e4-8cb0-15f84e992a67';
  $display->content['new-2f22f1fc-6d5c-43e4-8cb0-15f84e992a67'] = $pane;
  $display->panels['main'][0] = 'new-2f22f1fc-6d5c-43e4-8cb0-15f84e992a67';
  $pane = new stdClass();
  $pane->pid = 'new-306eb04e-6c06-44cf-8305-373730f97a7e';
  $pane->panel = 'main';
  $pane->type = 'views_panes';
  $pane->subtype = 'lb_downloads-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_lb_download_type_tid' => 'Facebook Profile Pictures',
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
  $pane->uuid = '306eb04e-6c06-44cf-8305-373730f97a7e';
  $display->content['new-306eb04e-6c06-44cf-8305-373730f97a7e'] = $pane;
  $display->panels['main'][1] = 'new-306eb04e-6c06-44cf-8305-373730f97a7e';
  $pane = new stdClass();
  $pane->pid = 'new-136755a9-60ff-4238-a0b9-be20c91eeaad';
  $pane->panel = 'main';
  $pane->type = 'views_panes';
  $pane->subtype = 'lb_downloads-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_lb_download_type_tid' => 'Smartphone Backgrounds',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '136755a9-60ff-4238-a0b9-be20c91eeaad';
  $display->content['new-136755a9-60ff-4238-a0b9-be20c91eeaad'] = $pane;
  $display->panels['main'][2] = 'new-136755a9-60ff-4238-a0b9-be20c91eeaad';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['lb_downloads'] = $page;

  return $pages;

}
