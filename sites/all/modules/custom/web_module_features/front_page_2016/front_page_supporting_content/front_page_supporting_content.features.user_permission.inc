<?php
/**
 * @file
 * front_page_supporting_content.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function front_page_supporting_content_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fp_supporting_content content'.
  $permissions['create fp_supporting_content content'] = array(
    'name' => 'create fp_supporting_content content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any fp_supporting_content content'.
  $permissions['delete any fp_supporting_content content'] = array(
    'name' => 'delete any fp_supporting_content content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own fp_supporting_content content'.
  $permissions['delete own fp_supporting_content content'] = array(
    'name' => 'delete own fp_supporting_content content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any fp_supporting_content content'.
  $permissions['edit any fp_supporting_content content'] = array(
    'name' => 'edit any fp_supporting_content content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own fp_supporting_content content'.
  $permissions['edit own fp_supporting_content content'] = array(
    'name' => 'edit own fp_supporting_content content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
