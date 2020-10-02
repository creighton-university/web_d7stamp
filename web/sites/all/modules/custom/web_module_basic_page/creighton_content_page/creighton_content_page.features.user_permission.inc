<?php
/**
 * @file
 * creighton_content_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function creighton_content_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create content_page content'.
  $permissions['create content_page content'] = array(
    'name' => 'create content_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'author' => 'author',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any content_page content'.
  $permissions['delete any content_page content'] = array(
    'name' => 'delete any content_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own content_page content'.
  $permissions['delete own content_page content'] = array(
    'name' => 'delete own content_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any content_page content'.
  $permissions['edit any content_page content'] = array(
    'name' => 'edit any content_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'author' => 'author',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own content_page content'.
  $permissions['edit own content_page content'] = array(
    'name' => 'edit own content_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'author' => 'author',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'publish button publish any content_page'.
  $permissions['publish button publish any content_page'] = array(
    'name' => 'publish button publish any content_page',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'author' => 'author',
      'manager' => 'manager',
    ),
    'module' => 'publish_button',
  );

  // Exported permission: 'publish button publish own content_page'.
  $permissions['publish button publish own content_page'] = array(
    'name' => 'publish button publish own content_page',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'author' => 'author',
      'manager' => 'manager',
    ),
    'module' => 'publish_button',
  );

  // Exported permission: 'publish button unpublish any content_page'.
  $permissions['publish button unpublish any content_page'] = array(
    'name' => 'publish button unpublish any content_page',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'author' => 'author',
      'manager' => 'manager',
    ),
    'module' => 'publish_button',
  );

  // Exported permission: 'publish button unpublish own content_page'.
  $permissions['publish button unpublish own content_page'] = array(
    'name' => 'publish button unpublish own content_page',
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
