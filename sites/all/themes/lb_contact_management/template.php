<?php
/**
 * @file
 * Contains the theme's functions to manipulate Drupal's default markup.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728096
 */

/**
 * Preprocessing information for the reports page
 */

function lb_contact_management_preprocess_crm_core_report_index(&$variables) {
	
	$report_items = array();
	$reports = $variables['reports'];
	
	$variables['column_a'] = array();
	$variables['column_b'] = array();
	
	if (!empty($reports)) {
	  
	  $idx = 0;
	  
	  // get the important ones first
	  $requests = $reports['lb_requests'];
	  $apps = $reports['lb_applications'];
	  $decls = $reports['lb_declarations'];
	  $lics = $reports['lb_licenses'];
	  unset($reports['lb_requests']);
	  unset($reports['lb_applications']);
	  unset($reports['lb_declarations']);
	  unset($reports['lb_licenses']);
    array_unshift($reports, $lics);
	  array_unshift($reports, $decls);
    array_unshift($reports, $apps);
	  array_unshift($reports, $requests);
    
		foreach ($reports as $key => $item) {
		  
			$items = array();
			foreach ($item['reports'] as $report) {
				$items[] = l($report['title'], $report['path']) . '<br />' . $report['description'];
			}
			
			if($idx % 2 == 0){
				$variables['column_a'][] = theme('item_list', array(
					'items' => $items,
					'title' => '<div class="crm_core_report_icon report-' . $key . '"></div>' . $item['title'],
				));
			} else {
				$variables['column_b'][] = theme('item_list', array(
						'items' => $items,
						'title' => '<div class="crm_core_report_icon report-' . $key . '"></div>' . $item['title'],
				));
			}
			$idx++;
		}
	}
	
}

/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("maintenance_page" in this case.)
 */
/* -- Delete this line if you want to use this function
function ao_contact_management_preprocess_maintenance_page(&$variables, $hook) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  ao_contact_management_preprocess_html($variables, $hook);
  ao_contact_management_preprocess_page($variables, $hook);
}
// */

/**
 * Override or insert variables into the html templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("html" in this case.)
 */
/* -- Delete this line if you want to use this function
function ao_contact_management_preprocess_html(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // The body tag's classes are controlled by the $classes_array variable. To
  // remove a class from $classes_array, use array_diff().
  //$variables['classes_array'] = array_diff($variables['classes_array'], array('class-to-remove'));
}
// */

/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */
/* -- Delete this line if you want to use this function
function ao_contact_management_preprocess_page(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the node templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
/* -- Delete this line if you want to use this function
function ao_contact_management_preprocess_node(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // Optionally, run node-type-specific preprocess functions, like
  // ao_contact_management_preprocess_node_page() or ao_contact_management_preprocess_node_story().
  $function = __FUNCTION__ . '_' . $variables['node']->type;
  if (function_exists($function)) {
    $function($variables, $hook);
  }
}
// */

/**
 * Override or insert variables into the comment templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function ao_contact_management_preprocess_comment(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the region templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("region" in this case.)
 */
/* -- Delete this line if you want to use this function
function ao_contact_management_preprocess_region(&$variables, $hook) {
  // Don't use Zen's region--sidebar.tpl.php template for sidebars.
  //if (strpos($variables['region'], 'sidebar_') === 0) {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('region__sidebar'));
  //}
}
// */

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
/* -- Delete this line if you want to use this function
function ao_contact_management_preprocess_block(&$variables, $hook) {
  // Add a count to all the blocks in the region.
  // $variables['classes_array'][] = 'count-' . $variables['block_id'];

  // By default, Zen will use the block--no-wrapper.tpl.php for the main
  // content. This optional bit of code undoes that:
  //if ($variables['block_html_id'] == 'block-system-main') {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('block__no_wrapper'));
  //}
}
// */
