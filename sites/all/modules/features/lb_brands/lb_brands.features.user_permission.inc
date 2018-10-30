<?php
/**
 * @file
 * lb_brands.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function lb_brands_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_lb_facebook'.
  $permissions['create field_lb_facebook'] = array(
    'name' => 'create field_lb_facebook',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_lb_instagram'.
  $permissions['create field_lb_instagram'] = array(
    'name' => 'create field_lb_instagram',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_lb_pinterest'.
  $permissions['create field_lb_pinterest'] = array(
    'name' => 'create field_lb_pinterest',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_lb_twitter'.
  $permissions['create field_lb_twitter'] = array(
    'name' => 'create field_lb_twitter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_lb_facebook'.
  $permissions['edit field_lb_facebook'] = array(
    'name' => 'edit field_lb_facebook',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_lb_instagram'.
  $permissions['edit field_lb_instagram'] = array(
    'name' => 'edit field_lb_instagram',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_lb_pinterest'.
  $permissions['edit field_lb_pinterest'] = array(
    'name' => 'edit field_lb_pinterest',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_lb_twitter'.
  $permissions['edit field_lb_twitter'] = array(
    'name' => 'edit field_lb_twitter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_lb_facebook'.
  $permissions['edit own field_lb_facebook'] = array(
    'name' => 'edit own field_lb_facebook',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_lb_instagram'.
  $permissions['edit own field_lb_instagram'] = array(
    'name' => 'edit own field_lb_instagram',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_lb_pinterest'.
  $permissions['edit own field_lb_pinterest'] = array(
    'name' => 'edit own field_lb_pinterest',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_lb_twitter'.
  $permissions['edit own field_lb_twitter'] = array(
    'name' => 'edit own field_lb_twitter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_lb_facebook'.
  $permissions['view field_lb_facebook'] = array(
    'name' => 'view field_lb_facebook',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_lb_instagram'.
  $permissions['view field_lb_instagram'] = array(
    'name' => 'view field_lb_instagram',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_lb_pinterest'.
  $permissions['view field_lb_pinterest'] = array(
    'name' => 'view field_lb_pinterest',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_lb_twitter'.
  $permissions['view field_lb_twitter'] = array(
    'name' => 'view field_lb_twitter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_lb_facebook'.
  $permissions['view own field_lb_facebook'] = array(
    'name' => 'view own field_lb_facebook',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_lb_instagram'.
  $permissions['view own field_lb_instagram'] = array(
    'name' => 'view own field_lb_instagram',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_lb_pinterest'.
  $permissions['view own field_lb_pinterest'] = array(
    'name' => 'view own field_lb_pinterest',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_lb_twitter'.
  $permissions['view own field_lb_twitter'] = array(
    'name' => 'view own field_lb_twitter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
