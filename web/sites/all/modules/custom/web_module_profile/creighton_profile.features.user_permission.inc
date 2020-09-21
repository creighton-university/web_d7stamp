<?php
/**
 * @file
 * creighton_profile.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function creighton_profile_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in profile_specialties'.
  $permissions['add terms in profile_specialties'] = array(
    'name' => 'add terms in profile_specialties',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in profile_type'.
  $permissions['add terms in profile_type'] = array(
    'name' => 'add terms in profile_type',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'create profile content'.
  $permissions['create profile content'] = array(
    'name' => 'create profile content',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'author' => 'author',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any profile content'.
  $permissions['delete any profile content'] = array(
    'name' => 'delete any profile content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own profile content'.
  $permissions['delete own profile content'] = array(
    'name' => 'delete own profile content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in academic_unit'.
  $permissions['delete terms in academic_unit'] = array(
    'name' => 'delete terms in academic_unit',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in profile_specialties'.
  $permissions['delete terms in profile_specialties'] = array(
    'name' => 'delete terms in profile_specialties',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in profile_type'.
  $permissions['delete terms in profile_type'] = array(
    'name' => 'delete terms in profile_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any profile content'.
  $permissions['edit any profile content'] = array(
    'name' => 'edit any profile content',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'author' => 'author',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own profile content'.
  $permissions['edit own profile content'] = array(
    'name' => 'edit own profile content',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'author' => 'author',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in academic_unit'.
  $permissions['edit terms in academic_unit'] = array(
    'name' => 'edit terms in academic_unit',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in profile_specialties'.
  $permissions['edit terms in profile_specialties'] = array(
    'name' => 'edit terms in profile_specialties',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in profile_type'.
  $permissions['edit terms in profile_type'] = array(
    'name' => 'edit terms in profile_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'publish button publish any profile'.
  $permissions['publish button publish any profile'] = array(
    'name' => 'publish button publish any profile',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'author' => 'author',
      'manager' => 'manager',
    ),
    'module' => 'publish_button',
  );

  // Exported permission: 'publish button publish own profile'.
  $permissions['publish button publish own profile'] = array(
    'name' => 'publish button publish own profile',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'author' => 'author',
      'manager' => 'manager',
    ),
    'module' => 'publish_button',
  );

  // Exported permission: 'publish button unpublish any profile'.
  $permissions['publish button unpublish any profile'] = array(
    'name' => 'publish button unpublish any profile',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'author' => 'author',
      'manager' => 'manager',
    ),
    'module' => 'publish_button',
  );

  // Exported permission: 'publish button unpublish own profile'.
  $permissions['publish button unpublish own profile'] = array(
    'name' => 'publish button unpublish own profile',
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
