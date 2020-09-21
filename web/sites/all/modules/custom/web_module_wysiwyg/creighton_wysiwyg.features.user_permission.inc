<?php
/**
 * @file
 * creighton_wysiwyg.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function creighton_wysiwyg_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'show format selection for bean'.
  $permissions['show format selection for bean'] = array(
    'name' => 'show format selection for bean',
    'roles' => array(
      'advanced author' => 'advanced author',
      'author' => 'author',
      'manager' => 'manager',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for field_collection_item'.
  $permissions['show format selection for field_collection_item'] = array(
    'name' => 'show format selection for field_collection_item',
    'roles' => array(
      'advanced author' => 'advanced author',
      'author' => 'author',
      'manager' => 'manager',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for file'.
  $permissions['show format selection for file'] = array(
    'name' => 'show format selection for file',
    'roles' => array(
      'advanced author' => 'advanced author',
      'author' => 'author',
      'manager' => 'manager',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for node'.
  $permissions['show format selection for node'] = array(
    'name' => 'show format selection for node',
    'roles' => array(
      'advanced author' => 'advanced author',
      'author' => 'author',
      'manager' => 'manager',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for taxonomy_term'.
  $permissions['show format selection for taxonomy_term'] = array(
    'name' => 'show format selection for taxonomy_term',
    'roles' => array(
      'advanced author' => 'advanced author',
      'author' => 'author',
      'manager' => 'manager',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format selection for user'.
  $permissions['show format selection for user'] = array(
    'name' => 'show format selection for user',
    'roles' => array(
      'advanced author' => 'advanced author',
      'author' => 'author',
      'manager' => 'manager',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show format tips'.
  $permissions['show format tips'] = array(
    'name' => 'show format tips',
    'roles' => array(
      'advanced author' => 'advanced author',
      'author' => 'author',
      'manager' => 'manager',
    ),
    'module' => 'better_formats',
  );

  // Exported permission: 'show more format tips link'.
  $permissions['show more format tips link'] = array(
    'name' => 'show more format tips link',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'better_formats',
  );

  return $permissions;
}
