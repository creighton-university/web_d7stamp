<?php
/**
 * @file
 * robots_global_config.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function robots_global_config_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer robots.txt'.
  $permissions['administer robots.txt'] = array(
    'name' => 'administer robots.txt',
    'roles' => array(),
    'module' => 'robotstxt',
  );

  return $permissions;
}
