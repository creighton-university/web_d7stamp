<?php
/**
 * @file
 * creighton_2tier_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function creighton_2tier_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create 2tier_page content'.
  $permissions['create 2tier_page content'] = array(
    'name' => 'create 2tier_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any 2tier_page content'.
  $permissions['delete any 2tier_page content'] = array(
    'name' => 'delete any 2tier_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own 2tier_page content'.
  $permissions['delete own 2tier_page content'] = array(
    'name' => 'delete own 2tier_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any 2tier_page content'.
  $permissions['edit any 2tier_page content'] = array(
    'name' => 'edit any 2tier_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own 2tier_page content'.
  $permissions['edit own 2tier_page content'] = array(
    'name' => 'edit own 2tier_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'publish button publish any 2tier_page'.
  $permissions['publish button publish any 2tier_page'] = array(
    'name' => 'publish button publish any 2tier_page',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'author' => 'author',
      'manager' => 'manager',
    ),
    'module' => 'publish_button',
  );

  // Exported permission: 'publish button publish own 2tier_page'.
  $permissions['publish button publish own 2tier_page'] = array(
    'name' => 'publish button publish own 2tier_page',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'author' => 'author',
      'manager' => 'manager',
    ),
    'module' => 'publish_button',
  );

  // Exported permission: 'publish button unpublish any 2tier_page'.
  $permissions['publish button unpublish any 2tier_page'] = array(
    'name' => 'publish button unpublish any 2tier_page',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'author' => 'author',
      'manager' => 'manager',
    ),
    'module' => 'publish_button',
  );

  // Exported permission: 'publish button unpublish own 2tier_page'.
  $permissions['publish button unpublish own 2tier_page'] = array(
    'name' => 'publish button unpublish own 2tier_page',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'author' => 'author',
      'manager' => 'manager',
    ),
    'module' => 'publish_button',
  );

  return $permissions;
}
