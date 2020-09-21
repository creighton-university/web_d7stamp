<?php
/**
 * @file
 * parking_permits.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function parking_permits_user_default_roles() {
  $roles = array();

  // Exported role: Dispatcher.
  $roles['Dispatcher'] = array(
    'name' => 'Dispatcher',
    'weight' => 6,
  );

  // Exported role: PermitManager.
  $roles['PermitManager'] = array(
    'name' => 'PermitManager',
    'weight' => 7,
  );

  return $roles;
}
