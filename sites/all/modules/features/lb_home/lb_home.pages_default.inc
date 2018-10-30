<?php
/**
 * @file
 * lb_home.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function lb_home_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page';
  $page->task = 'page';
  $page->admin_title = 'Front page';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_page_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
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
  $display->layout = 'threecol_33_34_33_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'center' => NULL,
      'left' => NULL,
      'center_left' => NULL,
      'center_right' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '80b7596e-71be-43e9-9963-de16bf6c2496';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e2043829-b79e-465d-bc7e-1f7c65830ff9';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'lb_recent_promotions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 1,
      'override_title_text' => 'Exclusive Deals And Partnerships',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e2043829-b79e-465d-bc7e-1f7c65830ff9';
    $display->content['new-e2043829-b79e-465d-bc7e-1f7c65830ff9'] = $pane;
    $display->panels['bottom'][0] = 'new-e2043829-b79e-465d-bc7e-1f7c65830ff9';
    $pane = new stdClass();
    $pane->pid = 'new-ce8ef1f6-58eb-4fe6-bccd-6c062b16618e';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'holiday2016',
      'title' => '',
      'body' => '<table width="100%">
	<tbody>
		<tr>
			<td width="100%"><a href="http://www.leapingbunny.org/shop/holiday"><img alt="Click Here for Over 100 Holiday Deals" src="http://www.leapingbunny.org/sites/default/files/2016_holiday_hp-deals_banner.png" width="100%" /></a></td>
		</tr>
	</tbody>
</table>

<table width="100%">
	<tbody>
		<tr>
			<td width="15%">&nbsp;</td>
			<td onmouseout="this.style.backgroundColor=\'#075CAA\'" onmouseover="this.style.backgroundColor=\'#5AA573\'" style="padding:9px 7px 7px 7px; margin-left:3px; background-color:#075CAA; color:#075CAA; font-weight:bold; font-size:14px; border-radius:5px; text-align:center;" width="70%"><a href="http://www.leapingbunny.org/shop/holiday" style="text-decoration:none; font-weight:bold; color:#fff;">SHOP NOW</a></td>
			<td width="15%">&nbsp;</td>
		</tr>
	</tbody>
</table>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ce8ef1f6-58eb-4fe6-bccd-6c062b16618e';
    $display->content['new-ce8ef1f6-58eb-4fe6-bccd-6c062b16618e'] = $pane;
    $display->panels['top'][0] = 'new-ce8ef1f6-58eb-4fe6-bccd-6c062b16618e';
    $pane = new stdClass();
    $pane->pid = 'new-dd861ab1-613b-4ad2-a1b7-7ddab2840c18';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Frontpage-bunny image',
      'title' => '',
      'body' => '<p><img alt="Connecting compassionate consumers with cruelty-free companies" src="http://www.leapingbunny.org/sites/default/files/2016-08-11_homepage.jpg" /></p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'frontpage-bunny',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'dd861ab1-613b-4ad2-a1b7-7ddab2840c18';
    $display->content['new-dd861ab1-613b-4ad2-a1b7-7ddab2840c18'] = $pane;
    $display->panels['top'][1] = 'new-dd861ab1-613b-4ad2-a1b7-7ddab2840c18';
    $pane = new stdClass();
    $pane->pid = 'new-3a995012-5c73-4253-a650-c086cc5aad2e';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '"Search for companies" button',
      'title' => '',
      'body' => '<p><a href="/guide/brands">Search for companies</a></p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'search-for-companies',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3a995012-5c73-4253-a650-c086cc5aad2e';
    $display->content['new-3a995012-5c73-4253-a650-c086cc5aad2e'] = $pane;
    $display->panels['top'][2] = 'new-3a995012-5c73-4253-a650-c086cc5aad2e';
    $pane = new stdClass();
    $pane->pid = 'new-994cb1dd-4775-40b5-ba60-006ff31e1817';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Two Blocks',
      'title' => '',
      'body' => '<table style="width:100%;">
	<tbody>
		<tr>
			<td style="width:50%;"><a href="http://www.leapingbunny.org/guide/apps"><img src="http://www.leapingbunny.org/sites/default/files/hand_home.jpg" /></a></td>
			<td style="width:50%;"><a href="http://www.leapingbunny.org/guide/brands"><img src="http://www.leapingbunny.org/sites/default/files/companies_home.jpg" /></a></td>
		</tr>
	</tbody>
</table>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '994cb1dd-4775-40b5-ba60-006ff31e1817';
    $display->content['new-994cb1dd-4775-40b5-ba60-006ff31e1817'] = $pane;
    $display->panels['top'][3] = 'new-994cb1dd-4775-40b5-ba60-006ff31e1817';
    $pane = new stdClass();
    $pane->pid = 'new-450d6966-0745-4375-bcaf-a88270b3e3df';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'video',
      'title' => '',
      'body' => '<p style="border-bottom-color:#ccc; border-bottom-style:dashed; border-bottom-width:2px;" width="100%">&nbsp;</p>

<p>&nbsp;</p>

<p class="rtecenter" style="color:#5ba573; font-weight:black;"><strong><span style="font-size:36px;">AMY SMART SHOPS CRUELTY-FREE. DO YOU?</span></strong></p>

<div class="vidcontainer"><iframe allowfullscreen="" class="video" frameborder="0" src="https://www.youtube.com/embed/0TvSUwkJoY0"></iframe></div>
<style type="text/css">.vidcontainer {
    position: relative;
    width: 60%;
margin-left:auto;
margin-right:auto;
    height: 0;
    padding-bottom: 56.25%;
}
.video {
    position: absolute;
    top: 0;
    left: 0;
    width: 100%;
    height: 100%;
}
</style>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'video',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '450d6966-0745-4375-bcaf-a88270b3e3df';
    $display->content['new-450d6966-0745-4375-bcaf-a88270b3e3df'] = $pane;
    $display->panels['top'][4] = 'new-450d6966-0745-4375-bcaf-a88270b3e3df';
    $pane = new stdClass();
    $pane->pid = 'new-a46f988a-273f-4fbf-a9cf-09a49b58d62e';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'crm_core_profile-ccp_mailing_list_signup';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<a name="subscribe" ></a>Stay up to date',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'a46f988a-273f-4fbf-a9cf-09a49b58d62e';
    $display->content['new-a46f988a-273f-4fbf-a9cf-09a49b58d62e'] = $pane;
    $display->panels['top'][5] = 'new-a46f988a-273f-4fbf-a9cf-09a49b58d62e';
    $pane = new stdClass();
    $pane->pid = 'new-217f65c2-010a-481a-b090-e87467d3494c';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'test',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '217f65c2-010a-481a-b090-e87467d3494c';
    $display->content['new-217f65c2-010a-481a-b090-e87467d3494c'] = $pane;
    $display->panels['top'][6] = 'new-217f65c2-010a-481a-b090-e87467d3494c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}
