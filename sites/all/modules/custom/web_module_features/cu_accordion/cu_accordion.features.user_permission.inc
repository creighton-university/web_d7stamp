<?php
/**
 * @file
 * cu_accordion.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cu_accordion_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create accordion_content content'.
  $permissions['create accordion_content content'] = array(
    'name' => 'create accordion_content content',
    'roles' => array(
      'advanced author' => 'advanced author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create any page_title bean'.
  $permissions['create any page_title bean'] = array(
    'name' => 'create any page_title bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'delete any accordion_content content'.
  $permissions['delete any accordion_content content'] = array(
    'name' => 'delete any accordion_content content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any page_title bean'.
  $permissions['delete any page_title bean'] = array(
    'name' => 'delete any page_title bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'delete own accordion_content content'.
  $permissions['delete own accordion_content content'] = array(
    'name' => 'delete own accordion_content content',
    'roles' => array(
      'advanced author' => 'advanced author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any accordion_content content'.
  $permissions['edit any accordion_content content'] = array(
    'name' => 'edit any accordion_content content',
    'roles' => array(
      'advanced author' => 'advanced author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page_title bean'.
  $permissions['edit any page_title bean'] = array(
    'name' => 'edit any page_title bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'edit own accordion_content content'.
  $permissions['edit own accordion_content content'] = array(
    'name' => 'edit own accordion_content content',
    'roles' => array(
      'advanced author' => 'advanced author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any page_title bean'.
  $permissions['view any page_title bean'] = array(
    'name' => 'view any page_title bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
