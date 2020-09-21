<?php
/**
 * @file
 * creighton_global_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function creighton_global_roles_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: advanced author.
  $roles['advanced author'] = array(
    'name' => 'advanced author',
    'weight' => 5,
  );

  // Exported role: author.
  $roles['author'] = array(
    'name' => 'author',
    'weight' => 4,
  );

  // Exported role: manager.
  $roles['manager'] = array(
    'name' => 'manager',
    'weight' => 3,
  );

  return $roles;
}
