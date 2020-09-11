<?php
/**
 * @file
 * creighton_campus_alerts.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function creighton_campus_alerts_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create any block_header_alert bean'.
  $permissions['create any block_header_alert bean'] = array(
    'name' => 'create any block_header_alert bean',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any block_header_alert bean'.
  $permissions['delete any block_header_alert bean'] = array(
    'name' => 'delete any block_header_alert bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'edit any block_header_alert bean'.
  $permissions['edit any block_header_alert bean'] = array(
    'name' => 'edit any block_header_alert bean',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any block_header_alert bean'.
  $permissions['view any block_header_alert bean'] = array(
    'name' => 'view any block_header_alert bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
