<?php
/**
 * @file
 * redirect_manager_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function redirect_manager_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access draggableviews'.
  $permissions['access draggableviews'] = array(
    'name' => 'access draggableviews',
    'roles' => array(
      'redirect manager' => 'redirect manager',
    ),
    'module' => 'draggableviews',
  );

  // Exported permission: 'add terms in redirect_manager_host'.
  $permissions['add terms in redirect_manager_host'] = array(
    'name' => 'add terms in redirect_manager_host',
    'roles' => array(
      'redirect manager' => 'redirect manager',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'administer redirect manager'.
  $permissions['administer redirect manager'] = array(
    'name' => 'administer redirect manager',
    'roles' => array(
      'redirect manager' => 'redirect manager',
    ),
    'module' => 'redirect_manager',
  );

  // Exported permission: 'administer redirect_manager_host vocabulary terms'.
  $permissions['administer redirect_manager_host vocabulary terms'] = array(
    'name' => 'administer redirect_manager_host vocabulary terms',
    'roles' => array(
      'redirect manager' => 'redirect manager',
    ),
    'module' => 'vppr',
  );

  // Exported permission: 'create redirect_manager_url_redirect content'.
  $permissions['create redirect_manager_url_redirect content'] = array(
    'name' => 'create redirect_manager_url_redirect content',
    'roles' => array(
      'redirect manager' => 'redirect manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any redirect_manager_url_redirect content'.
  $permissions['delete any redirect_manager_url_redirect content'] = array(
    'name' => 'delete any redirect_manager_url_redirect content',
    'roles' => array(
      'redirect manager' => 'redirect manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own redirect_manager_url_redirect content'.
  $permissions['delete own redirect_manager_url_redirect content'] = array(
    'name' => 'delete own redirect_manager_url_redirect content',
    'roles' => array(
      'redirect manager' => 'redirect manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in redirect_manager_host'.
  $permissions['delete terms in redirect_manager_host'] = array(
    'name' => 'delete terms in redirect_manager_host',
    'roles' => array(
      'redirect manager' => 'redirect manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any redirect_manager_url_redirect content'.
  $permissions['edit any redirect_manager_url_redirect content'] = array(
    'name' => 'edit any redirect_manager_url_redirect content',
    'roles' => array(
      'redirect manager' => 'redirect manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own redirect_manager_url_redirect content'.
  $permissions['edit own redirect_manager_url_redirect content'] = array(
    'name' => 'edit own redirect_manager_url_redirect content',
    'roles' => array(
      'redirect manager' => 'redirect manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in redirect_manager_host'.
  $permissions['edit terms in redirect_manager_host'] = array(
    'name' => 'edit terms in redirect_manager_host',
    'roles' => array(
      'redirect manager' => 'redirect manager',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
