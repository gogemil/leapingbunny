<?php
/**
 * @file
 * ableorganizer_dashboard.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function ableorganizer_dashboard_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ao_dashboard';
  $page->task = 'page';
  $page->admin_title = 'Dashboard';
  $page->admin_description = 'The administrative dashboard for AbleOrganizer';
  $page->path = 'crm-core/ableorganizer_dashboard';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
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
  $handler->name = 'page_ao_dashboard_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ao_dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
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
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => 'dashboard-layout',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '',
        'region_separation' => '',
        'row_separation' => '',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'right',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => '60.128570837984206',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'grid-8 dashboard-left',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'right',
        'width' => '39.871429162015794',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'grid-4 dashboard-right',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'center' => NULL,
    ),
    'center' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = 'Dashboard';
  $display->uuid = 'f45bbab7-51bb-49e6-9a87-fec605013e3e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a33af45c-3282-4daa-a1d5-659f93df9f14';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'ao_dashboard_act_stream-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'activity-feed',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a33af45c-3282-4daa-a1d5-659f93df9f14';
    $display->content['new-a33af45c-3282-4daa-a1d5-659f93df9f14'] = $pane;
    $display->panels['center'][0] = 'new-a33af45c-3282-4daa-a1d5-659f93df9f14';
    $pane = new stdClass();
    $pane->pid = 'new-4a012e8f-783b-4c20-9be8-d3c82462d325';
    $pane->panel = 'right';
    $pane->type = 'quick_links';
    $pane->subtype = 'quick_links';
    $pane->shown = FALSE;
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'quick-links',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4a012e8f-783b-4c20-9be8-d3c82462d325';
    $display->content['new-4a012e8f-783b-4c20-9be8-d3c82462d325'] = $pane;
    $display->panels['right'][0] = 'new-4a012e8f-783b-4c20-9be8-d3c82462d325';
    $pane = new stdClass();
    $pane->pid = 'new-8137ef0d-62f6-4248-a7a8-5bd4c74bb812';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'cmcd_total_figures-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'summary-pane',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8137ef0d-62f6-4248-a7a8-5bd4c74bb812';
    $display->content['new-8137ef0d-62f6-4248-a7a8-5bd4c74bb812'] = $pane;
    $display->panels['right'][1] = 'new-8137ef0d-62f6-4248-a7a8-5bd4c74bb812';
    $pane = new stdClass();
    $pane->pid = 'new-ac5bf4d3-357c-452d-bcc7-6e9fcfc96635';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'cmcp_overview_widget-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'summary-pane',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'ac5bf4d3-357c-452d-bcc7-6e9fcfc96635';
    $display->content['new-ac5bf4d3-357c-452d-bcc7-6e9fcfc96635'] = $pane;
    $display->panels['right'][2] = 'new-ac5bf4d3-357c-452d-bcc7-6e9fcfc96635';
    $pane = new stdClass();
    $pane->pid = 'new-1fb506e5-73e3-47c7-87a2-9ded544141cd';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'cmcv_volunteer_summary-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'summary-pane',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '1fb506e5-73e3-47c7-87a2-9ded544141cd';
    $display->content['new-1fb506e5-73e3-47c7-87a2-9ded544141cd'] = $pane;
    $display->panels['right'][3] = 'new-1fb506e5-73e3-47c7-87a2-9ded544141cd';
    $pane = new stdClass();
    $pane->pid = 'new-2ee9bc97-f8f0-4997-bb11-cf9710bb61eb';
    $pane->panel = 'right';
    $pane->type = 'event_metrics';
    $pane->subtype = 'event_metrics';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'text' => '',
      'override_title' => 1,
      'override_title_text' => 'Event Summary',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'summary-pane',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '2ee9bc97-f8f0-4997-bb11-cf9710bb61eb';
    $display->content['new-2ee9bc97-f8f0-4997-bb11-cf9710bb61eb'] = $pane;
    $display->panels['right'][4] = 'new-2ee9bc97-f8f0-4997-bb11-cf9710bb61eb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ao_dashboard'] = $page;

  return $pages;

}
