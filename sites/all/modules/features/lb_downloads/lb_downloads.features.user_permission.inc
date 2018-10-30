<?php
/**
 * @file
 * lb_downloads.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function lb_downloads_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  return $permissions;
}
