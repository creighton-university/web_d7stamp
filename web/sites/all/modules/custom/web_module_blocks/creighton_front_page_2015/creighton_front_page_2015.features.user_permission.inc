<?php
/**
 * @file
 * creighton_front_page_2015.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function creighton_front_page_2015_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create any footer_contact_info_and_links bean'.
  $permissions['create any footer_contact_info_and_links bean'] = array(
    'name' => 'create any footer_contact_info_and_links bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'delete any footer_contact_info_and_links bean'.
  $permissions['delete any footer_contact_info_and_links bean'] = array(
    'name' => 'delete any footer_contact_info_and_links bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'edit any footer_contact_info_and_links bean'.
  $permissions['edit any footer_contact_info_and_links bean'] = array(
    'name' => 'edit any footer_contact_info_and_links bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'view any footer_contact_info_and_links bean'.
  $permissions['view any footer_contact_info_and_links bean'] = array(
    'name' => 'view any footer_contact_info_and_links bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
