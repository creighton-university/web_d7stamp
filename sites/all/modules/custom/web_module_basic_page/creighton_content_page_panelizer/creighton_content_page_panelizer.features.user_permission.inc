<?php
/**
 * @file
 * creighton_content_page_panelizer.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function creighton_content_page_panelizer_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node content_page choice'.
  $permissions['administer panelizer node content_page choice'] = array(
    'name' => 'administer panelizer node content_page choice',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node content_page content'.
  $permissions['administer panelizer node content_page content'] = array(
    'name' => 'administer panelizer node content_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node content_page context'.
  $permissions['administer panelizer node content_page context'] = array(
    'name' => 'administer panelizer node content_page context',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node content_page defaults'.
  $permissions['administer panelizer node content_page defaults'] = array(
    'name' => 'administer panelizer node content_page defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node content_page layout'.
  $permissions['administer panelizer node content_page layout'] = array(
    'name' => 'administer panelizer node content_page layout',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node content_page overview'.
  $permissions['administer panelizer node content_page overview'] = array(
    'name' => 'administer panelizer node content_page overview',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node content_page settings'.
  $permissions['administer panelizer node content_page settings'] = array(
    'name' => 'administer panelizer node content_page settings',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'panelizer',
  );

  return $permissions;
}
