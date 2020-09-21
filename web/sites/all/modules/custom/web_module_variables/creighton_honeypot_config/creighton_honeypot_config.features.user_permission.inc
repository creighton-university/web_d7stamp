<?php
/**
 * @file
 * creighton_honeypot_config.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function creighton_honeypot_config_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer honeypot'.
  $permissions['administer honeypot'] = array(
    'name' => 'administer honeypot',
    'roles' => array(),
    'module' => 'honeypot',
  );

  // Exported permission: 'bypass honeypot protection'.
  $permissions['bypass honeypot protection'] = array(
    'name' => 'bypass honeypot protection',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'honeypot',
  );

  return $permissions;
}
