<?php

function lbunny_theme() {
  return array(
    'lbunny_brands_form' => array(
      'render element' => 'form',
      'template' => 'templates/forms/lbunny-brands-form',
    )
  );
}

/**
 * Implements hook_css_alter().
 */
function lbunny_css_alter(&$css) {
  if (isset($css['sites/default/files/fontyourface/font.css'])) {
    unset($css['sites/default/files/fontyourface/font.css']);
  }
}

/**
 * Implements hook_preprocess_html().
 */
function lbunny_preprocess_html(&$vars) {
  $path = drupal_get_normal_path(variable_get('site_404', ''));
  $current = current_path();
  if ($current == $path) {
    $vars['classes_array'][] = 'site-404';
  }
}

/**
 * Implements hook_preprocess_page().
 */
function lbunny_preprocess_page(&$variables) {
  if (drupal_is_front_page()) {
    $variables['title'] = '';
  }
  // Add back to my company link on brand/partnership/promotion pages.
  if (isset($variables['node']->type)) {
    $allowed = array('brand', 'partnership', 'promotion');
    if (in_array($variables['node']->type, $allowed)) {
      $link = NULL;
      // Add link for regular users.
      // Restrict this for only when brands are being
      // added/edit by the user of the related company, not when viewing
      // other brands.
      $account = $GLOBALS['user'];
      if ($variables['node']->uid == $account->uid) {
        if(!user_access('bypass node access')){
          $link = l('Back to my company', 'user');
        }
        if (!empty($link)) {
          $variables['return_link'] = $link;
        }
      }
    }
  }

}

/**
 * Implements hook_form_alter().
 */
function lbunny_form_alter(&$form, &$form_state, $form_id) {
  switch ($form['#id']) {
    case 'search-block-form':
      $form['search_block_form']['#attributes']['placeholder'] = t('Search');
      break;

    case 'crm-core-profile-entry-form-mailing-list-signup':
    case 'crm-core-profile-entry-form-mailing-list-signup--2':
      $form['crm_core_contact_individual_contact_name_given']['#title'] = '';
      $form['crm_core_contact_individual_contact_name_given']['#attributes']['placeholder'] = t('First Name');
      $form['crm_core_contact_individual_contact_name_family']['#title'] = '';
      $form['crm_core_contact_individual_contact_name_family']['#attributes']['placeholder'] = t('Last Name');
      $form['field_ao_email_address'][LANGUAGE_NONE][0]['email']['#title'] = '';
      $form['field_ao_email_address'][LANGUAGE_NONE][0]['email']['#attributes']['placeholder'] = t('Email Address');
      break;

    case 'views-exposed-form-lb-brands-page':
    case 'views-exposed-form-lb-brands-page-1':
      $form['#theme'] = 'lbunny_brands_form';

      $form['#info']['filter-title']['label'] = '';
      $form['title']['#attributes']['placeholder'] = t('Find a company...');
      break;

    case 'user-login':
      drupal_set_title(t('Company login'));
      $form['name']['#title'] = '';
      $form['pass']['#title'] = '';
      $form['name']['#attributes']['placeholder'] = t('Username');
      $form['name']['#description'] = '';
      $form['pass']['#attributes']['placeholder'] = t('Password');
      $form['pass']['#description'] = '';
      $form['pass']['#suffix'] = l(t('Forgot User Name / Password'), 'user/password', array('attributes' => array('class' => 'user-forgot')));
      $form['actions']['submit']['#value'] = t('Login');
      break;

    case 'crm-core-profile-entry-form-register-company':
      $form['individual_contact']['#prefix'] = '<h2>' . t('Your Contact Information') . '</h2>';
      $form['contact_name']['#prefix'] = '<h2>' . t('About Your Company') . '</h2>';
      $form['field_ao_business_address'][LANGUAGE_NONE][0]['#type'] = 'container';
      $form['actions']['submit']['#value'] = t('Register Your Company');
      break;

    case 'crm-core-profile-entry-form-contact-us':
      $form['crm_core_contact_individual_contact_name_given']['#attributes']['placeholder'] = t('First Name');
      $form['crm_core_contact_individual_contact_name_family']['#attributes']['placeholder'] = t('Last Name');
      $form['field_ao_email_address'][LANGUAGE_NONE][0]['email']['#attributes']['placeholder'] = t('Email Address');
      $form['field_body'][LANGUAGE_NONE][0]['value']['#attributes']['placeholder'] = t('Comments / Questions');
      $form['actions']['reset'] = array(
        '#markup' => '<input class="form-button" value="' . t('Clear form') . '" type="reset">',
      );
      break;

    case 'crm-core-profile-entry-form-request-guide':
      $form['actions']['submit']['#value'] = t('Request Your Guide');
      $form['field_ao_home_address'][LANGUAGE_NONE][0]['#required'] = TRUE;
      $form['field_mailing_list'][LANGUAGE_NONE]['#description'] = t('Yes, I would like to subscribe to Leaping Bunny’s monthly eNewsletter');
      $form['crm_core_contact_individual_contact_name_given']['#title'] = t('First Name');
      $form['crm_core_contact_individual_contact_name_given']['#required'] = TRUE;
      $form['crm_core_contact_individual_contact_name_family']['#title'] = t('Last Name');
      $form['crm_core_contact_individual_contact_name_family']['#required'] = TRUE;
      break;
  }
}

/**
 * Implements hook_menu_link().
 */
function lbunny_menu_link__main_menu($variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '><div class="menu-item-container">' . $output . $sub_menu . "</div></li>";
}

/**
 * Implements theme_form_element_label().
 */
function lbunny_form_element_label($variables) {
  $element = $variables['element'];
  // This is also used in the installer, pre-database setup.
  $t = get_t();

  // If title and required marker are both empty, output no label.
  if ((!isset($element['#title']) || $element['#title'] === '') && empty($element['#required'])) {
    return '';
  }

  // If the element is required, a required marker is appended to the label.
  $required = !empty($element['#required']) ? theme('form_required_marker', array('element' => $element)) : '';

  $title = filter_xss_admin($element['#title']);

  $attributes = array();
  // Style the label as class option to display inline with the element.
  if ($element['#title_display'] == 'after') {
    $attributes['class'] = 'option';
  }
  // Show label only to screen readers to avoid disruption in visual flows.
  elseif ($element['#title_display'] == 'invisible') {
    $attributes['class'] = 'element-invisible';
  }

  if (!empty($element['#id'])) {
    $attributes['for'] = $element['#id'];
  }

  // The leading whitespace helps visually separate fields from inline labels.
  return ' <label' . drupal_attributes($attributes) . '>' . $t('!title!required', array('!title' => $title, '!required' => $required)) . "</label>\n";
}

/**
 * Implements theme_form_element()).
 */
function lbunny_form_element($variables) {
  $element = &$variables['element'];

  // This function is invoked as theme wrapper, but the rendered form element
  // may not necessarily have been processed by form_builder().
  $element += array(
    '#title_display' => 'before',
  );

  // Add element #id for #type 'item'.
  if (isset($element['#markup']) && !empty($element['#id'])) {
    $attributes['id'] = $element['#id'];
  }
  // Add element's #type and #name as class to aid with JS/CSS selectors.
  $attributes['class'] = array('form-item');
  if (!empty($element['#type'])) {
    $attributes['class'][] = 'form-type-' . strtr($element['#type'], '_', '-');
  }
  if (!empty($element['#name'])) {
    $attributes['class'][] = 'form-item-' . strtr($element['#name'], array(' ' => '-', '_' => '-', '[' => '-', ']' => ''));
  }
  // Add a class for disabled elements to facilitate cross-browser styling.
  if (!empty($element['#attributes']['disabled'])) {
    $attributes['class'][] = 'form-disabled';
  }
  $output = '<div' . drupal_attributes($attributes) . '>' . "\n";

  // If #title is not set, we don't display any label or required marker.
  if (!isset($element['#title'])) {
    $element['#title_display'] = 'none';
  }
  $prefix = isset($element['#field_prefix']) ? '<span class="field-prefix">' . $element['#field_prefix'] . '</span> ' : '';
  $suffix = isset($element['#field_suffix']) ? ' <span class="field-suffix">' . $element['#field_suffix'] . '</span>' : '';

  switch ($element['#title_display']) {
    case 'before':
    case 'invisible':
      $output .= ' ' . theme('form_element_label', $variables);
      $output .= ' <div class="form-element-wrapper">' . $prefix . $element['#children'] . $suffix . "</div>\n";
      break;

    case 'after':
      $output .= ' ' . $prefix . $element['#children'] . $suffix;
      $output .= ' <div class="form-element-wrapper">' . theme('form_element_label', $variables) . "</div>\n";
      break;

    case 'none':
    case 'attribute':
      // Output no label and no required marker, only the children.
      $output .= ' ' . $prefix . $element['#children'] . $suffix . "\n";
      break;
  }

  if (!empty($element['#description'])) {
    $output .= '<div class="description">' . $element['#description'] . "</div>\n";
  }

  $output .= "</div>\n";

  return $output;
}

/**
 * Implements hook_preprocess_view_field().
 */
function lbunny_preprocess_views_view_field(&$vars) {
  if ($vars['view']->name == 'lb_brands' && $vars['field']->field_alias == 'node_title' && strlen($vars['output']) == 1) {
    // Make the first letter of the title uppercase for the group.
    $vars['output'] = strtoupper($vars['output']);
    // Group special chars.
    $regexp = '/([^A-Za-z\s])/i';
    $iResults = preg_match_all($regexp, $vars['output'], $bMatches);
    if (isset($bMatches[0][0])) {
      $matched = $bMatches[0][0];
      if (!empty($matched)) {
        $vars['output'] = '#';
      }
    }
  }
}

/**
 * Implements hook_preprocess_views_view_unformatted().
 */
function lbunny_preprocess_views_view_unformatted(&$vars) {
  if ($vars['view']->name == 'lb_brands' && $vars['view']->current_display == 'page_1') {
    $vars['columns'] = 1;
    $vars['count'] = count($vars['rows']);
    $vars['row_count'] = ceil($vars['count'] / $vars['columns']);
    $vars['last_id'] = 0;
    $vars['rows'] = array_values($vars['rows']);
  }
}

function lbunny_preprocess_views_view_fields(&$vars) {
  if (isset($vars['view']->name)) {
    $function = __FUNCTION__ . '__' . $vars['view']->name . '__' . $vars['view']->current_display;
    if (function_exists($function)) {
     $function($vars);
    }
    $function1 = __FUNCTION__ . '__' . $vars['view']->name;
    if (function_exists($function1)) {
     $function1($vars);
    }
  }
}

/**
 * Preprocess theme function to print a single record from a row, with fields
 */
function lbunny_preprocess_views_view_fields__lb_partners(&$vars) {
  $vars['theme_hook_suggestions'][] = 'views_view_fields__lb_custom_partners_promotions';
}

/**
 * Preprocess theme function to print a single record from a row, with fields
 */
function lbunny_preprocess_views_view_fields__lb_promotions(&$vars) {
  $vars['theme_hook_suggestions'][] = 'views_view_fields__lb_custom_partners_promotions';
}

/**
* Preprocess theme function to print a single record from a row, with fields
*/
function lbunny_preprocess_views_view_fields__2016_holiday(&$vars) {
 $vars['theme_hook_suggestions'][] = 'views_view_fields__lb_custom_partners_promotions';
}

/**
 * Preprocess theme function to print a single record from a row, with fields
 */
function lbunny_preprocess_views_view_fields__lb_recent_promotions(&$vars) {
  $vars['theme_hook_suggestions'][] = 'views_view_fields__lb_custom_partners_promotions';
}

/**
 * Preprocess theme function to print a single record from a row, with fields
 */
function lbunny_preprocess_views_view_fields__lb_user_profile_brands(&$vars) {
  $vars['theme_hook_suggestions'][] = 'views_view_fields__lb_custom_user_profile_brands';
}
/**
 * Override theme_print_published
 */
function lbunny_print_published($vars) {
  global $base_url;

  $published_site = variable_get('site_name', 0);
  return $published_site ? t('Published on %site_name', array('%site_name' => $published_site)) : '';
}

/**
 * Implements hook_preprocess_HOOK().
 */
function lbunny_preprocess_print(&$variables) {
  $variables['print_title'] = htmlspecialchars_decode($variables['print_title']);
}
