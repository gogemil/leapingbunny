<?php
/**
 * @file
 * User access wrapper for views. 
 * Allows you to embed a view in a panel, and set permissions around it.
 * This is useful for displaying panes that only appear for the user associated with a contact.
 */
$plugin = array(
  'single' => TRUE,
  'title' => t('User access wrapper'),
  'description' => t('User access wrapper for views. Allows you to embed a view that will only display for the currently logged in user.'),
  'category' => t('AbleOrganizer: User Profile'),
  'edit form' => 'ao_user_access_wrapper_form',
  'render callback' => 'ao_user_access_wrapper_render',
  'admin info' => 'ao_user_access_wrapper_admin_info',
  'defaults' => array(
    'display_title' => 1,
  ),
  'all contexts' => TRUE,
);

/**
 * Admin info.
 */
function ao_user_access_wrapper_admin_info($subtype, $conf, $contexts) {
  $default_desc = t('User access wrapper for views. Allows you to embed a view that will only display for the currently logged in user. This only works when there is a context for the user attached to the panel.');
  $block = new stdClass();
  $block->title = !empty($conf['panels_edit_name']) ? $conf['panels_edit_name'] : t('User access wrapper');
  $block->content = !empty($conf['panels_edit_desc']) ? $conf['panels_edit_desc'] : $default_desc;
  return $block;
}

/**
 * Settings form.
 */
function ao_user_access_wrapper_form($form, &$form_state) {
  
  $conf = $form_state['conf'];

  // name of the panel on the edit page
  $form['panels_edit_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Panels editor title'),
    '#description' => t('Enter the name of this pane to be displayed on the panels edit form.'),
    '#default_value' => !empty($conf['panels_edit_name']) ? $conf['panels_edit_name'] : '',
  );  
  
  // name of the panel on the edit page
  $form['panels_edit_desc'] = array(
    '#type' => 'textfield',
    '#title' => t('Panels editor description'),
    '#description' => t('Enter the name of this pane to be displayed on the panels edit form.'),
    '#default_value' => !empty($conf['panels_edit_name']) ? $conf['panels_edit_name'] : '',
  );  
  
  // add an autocomplete
  // should allow people to select views by machine name
  $form['view_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Views machine name'),
    '#description' => t('Enter the machine name of a view to display in this pane.'),
    '#autocomplete_path' => 'ao/view_name/autocomplete',
    '#default_value' => !empty($conf['view_name']) ? $conf['view_name'] : '',
  );  
  
  // This form element with autocomplete will be replaced by #ajax whenever the
  // author changes, allowing the search to be limited by user.
  $form['view_mode'] = array(
    '#type' => 'textfield',  
    '#title' => t('View display machine name'),
    '#description' => t('You can find the machine name for the display on the views edit page, under advanced -> other -> machine name.'),
    '#default_value' => !empty($conf['view_mode']) ? $conf['view_mode'] : '',
  );  
  
  // access control options
  $options = array(
    0 => t('the user who owns this account.'),
    1 => t('people with the selected role and the user who owns this account.'),
    2 => t('anyone viewing this account.'),
  );

  // access control
  $form['access_control'] = array(
    '#type' => 'radios',
    '#title' => t('Make this view visible to...'),
    '#default_value' => isset($conf['access_control']) ? $conf['access_control'] : 1,
    '#options' => $options,
    '#description' => t('Select the visibility settings for this view.'),
  );  

  // add permissions field
  $perms = array();
  $module_info = system_get_info('module');
  
  foreach (module_implements('permission') as $module) {
    $permissions = module_invoke($module, 'permission');
    foreach ($permissions as $name => $perm) {
      $perms[$module_info[$module]['name']][$name] = strip_tags($perm['title']);
    }
  }
  
  ksort($perms);

  $form['perm'] = array(
    '#type' => 'select',
    '#options' => $perms,
    '#title' => t('Selected role'),
    '#default_value' => $conf['perm'],
    '#description' => t('If selected permission is checked, only users with that permission will be able to access this pane.'),
  );
  
  return $form;
}

/**
 * Validate handler for settings form.
 */
function ao_user_access_wrapper_form_validate($form, &$form_state) {
  
  
  
}

/**
 * Submit handler for settings form.
 */
function ao_user_access_wrapper_form_submit($form, &$form_state) {
  
  // display title
  $form_state['conf']['panels_edit_name'] = $form_state['values']['panels_edit_name'];
  
  // display title
  $form_state['conf']['panels_edit_desc'] = $form_state['values']['panels_edit_desc'];
  
  // view name
  $form_state['conf']['view_name'] = $form_state['values']['view_name'];
  
  // view display
  $form_state['conf']['view_mode'] = $form_state['values']['view_mode'];
  
  // access control
  $form_state['conf']['access_control'] = $form_state['values']['access_control'];
  
  // perm
  $form_state['conf']['perm'] = $form_state['values']['perm'];
  
}

/**
 * Render callback.
 */
function ao_user_access_wrapper_render($subtype, $conf, $panel_args, $context = NULL) {
  
  global $user;
  
  // the context element to use for user account checks.
  // We are assuming the first user context is the one that counts.
  $ccheck = $context['argument_entity_id:user_1']->argument;
  
  // check access
  if($conf['access_control'] == 0 && $user->uid !== $ccheck){
    return;
  } 
    else if ($conf['access_control'] == 1 && !( $user->uid === $ccheck || user_access($conf['perm']) ) ) {
    return;
  }
  
  // initialize content
  $content = '';
  
  // put the args into a string that can be passed into the panel
  $args = '';
  foreach ($panel_args as $arg){
    $args = $args . $arg . ', ';
  }
  
  // display the view
  $view = views_get_view($conf['view_name']);
  $view->set_display($conf['view_mode']);
  $view->set_arguments($args);
  $view->pre_execute();
  $view->execute();
  $content .= $view->render();
  
  // dpm($content);
  
  $block = new stdClass();
  $block->title = $conf['override_title'] > 0 ? $conf['override_title_text'] : $view->get_title();
  $block->content = $content;

  return $block;
}
