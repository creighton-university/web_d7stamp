<?php
/**
 * @file
 * front_page_social_media_cards.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function front_page_social_media_cards_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create fp_social_media_cards content'.
  $permissions['create fp_social_media_cards content'] = array(
    'name' => 'create fp_social_media_cards content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any fp_social_media_cards content'.
  $permissions['delete any fp_social_media_cards content'] = array(
    'name' => 'delete any fp_social_media_cards content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own fp_social_media_cards content'.
  $permissions['delete own fp_social_media_cards content'] = array(
    'name' => 'delete own fp_social_media_cards content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any fp_social_media_cards content'.
  $permissions['edit any fp_social_media_cards content'] = array(
    'name' => 'edit any fp_social_media_cards content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own fp_social_media_cards content'.
  $permissions['edit own fp_social_media_cards content'] = array(
    'name' => 'edit own fp_social_media_cards content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
