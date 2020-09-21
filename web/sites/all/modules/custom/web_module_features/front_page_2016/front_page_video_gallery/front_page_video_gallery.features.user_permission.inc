<?php
/**
 * @file
 * front_page_video_gallery.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function front_page_video_gallery_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create front_page_video_gallery content'.
  $permissions['create front_page_video_gallery content'] = array(
    'name' => 'create front_page_video_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any front_page_video_gallery content'.
  $permissions['delete any front_page_video_gallery content'] = array(
    'name' => 'delete any front_page_video_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own front_page_video_gallery content'.
  $permissions['delete own front_page_video_gallery content'] = array(
    'name' => 'delete own front_page_video_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any front_page_video_gallery content'.
  $permissions['edit any front_page_video_gallery content'] = array(
    'name' => 'edit any front_page_video_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own front_page_video_gallery content'.
  $permissions['edit own front_page_video_gallery content'] = array(
    'name' => 'edit own front_page_video_gallery content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
