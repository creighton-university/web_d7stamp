<?php
/**
 * @file
 * news_business.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function news_business_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create news content'.
  $permissions['create news content'] = array(
    'name' => 'create news content',
    'roles' => array(
      'advanced author' => 'advanced author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own news content'.
  $permissions['delete own news content'] = array(
    'name' => 'delete own news content',
    'roles' => array(
      'advanced author' => 'advanced author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any news content'.
  $permissions['edit any news content'] = array(
    'name' => 'edit any news content',
    'roles' => array(
      'advanced author' => 'advanced author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own news content'.
  $permissions['edit own news content'] = array(
    'name' => 'edit own news content',
    'roles' => array(
      'advanced author' => 'advanced author',
    ),
    'module' => 'node',
  );

  return $permissions;
}
