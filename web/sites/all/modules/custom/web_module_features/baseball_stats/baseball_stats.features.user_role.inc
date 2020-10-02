<?php
/**
 * @file
 * baseball_stats.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function baseball_stats_user_default_roles() {
  $roles = array();

  // Exported role: stats manager.
  $roles['stats manager'] = array(
    'name' => 'stats manager',
    'weight' => 6,
  );

  return $roles;
}
