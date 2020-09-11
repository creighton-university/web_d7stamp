<?php
/**
 * @file
 * front_page_content_cards.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function front_page_content_cards_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fp_featured_content_cards content'.
  $permissions['create fp_featured_content_cards content'] = array(
    'name' => 'create fp_featured_content_cards content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any fp_featured_content_cards content'.
  $permissions['delete any fp_featured_content_cards content'] = array(
    'name' => 'delete any fp_featured_content_cards content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own fp_featured_content_cards content'.
  $permissions['delete own fp_featured_content_cards content'] = array(
    'name' => 'delete own fp_featured_content_cards content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any fp_featured_content_cards content'.
  $permissions['edit any fp_featured_content_cards content'] = array(
    'name' => 'edit any fp_featured_content_cards content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own fp_featured_content_cards content'.
  $permissions['edit own fp_featured_content_cards content'] = array(
    'name' => 'edit own fp_featured_content_cards content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
