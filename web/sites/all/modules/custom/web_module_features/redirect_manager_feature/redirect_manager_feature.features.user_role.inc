<?php
/**
 * @file
 * redirect_manager_feature.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function redirect_manager_feature_user_default_roles() {
  $roles = array();

  // Exported role: redirect manager.
  $roles['redirect manager'] = array(
    'name' => 'redirect manager',
    'weight' => 6,
  );

  return $roles;
}
