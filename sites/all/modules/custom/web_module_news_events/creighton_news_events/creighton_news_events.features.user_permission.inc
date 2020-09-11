<?php
/**
 * @file
 * creighton_news_events.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function creighton_news_events_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'clear calendar_importer feeds'.
  $permissions['clear calendar_importer feeds'] = array(
    'name' => 'clear calendar_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear news_importer feeds'.
  $permissions['clear news_importer feeds'] = array(
    'name' => 'clear news_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'create imported_calendar content'.
  $permissions['create imported_calendar content'] = array(
    'name' => 'create imported_calendar content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create imported_news content'.
  $permissions['create imported_news content'] = array(
    'name' => 'create imported_news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any imported_calendar content'.
  $permissions['delete any imported_calendar content'] = array(
    'name' => 'delete any imported_calendar content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any imported_news content'.
  $permissions['delete any imported_news content'] = array(
    'name' => 'delete any imported_news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own imported_calendar content'.
  $permissions['delete own imported_calendar content'] = array(
    'name' => 'delete own imported_calendar content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own imported_news content'.
  $permissions['delete own imported_news content'] = array(
    'name' => 'delete own imported_news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any imported_calendar content'.
  $permissions['edit any imported_calendar content'] = array(
    'name' => 'edit any imported_calendar content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any imported_news content'.
  $permissions['edit any imported_news content'] = array(
    'name' => 'edit any imported_news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own imported_calendar content'.
  $permissions['edit own imported_calendar content'] = array(
    'name' => 'edit own imported_calendar content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own imported_news content'.
  $permissions['edit own imported_news content'] = array(
    'name' => 'edit own imported_news content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'import calendar_importer feeds'.
  $permissions['import calendar_importer feeds'] = array(
    'name' => 'import calendar_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import news_importer feeds'.
  $permissions['import news_importer feeds'] = array(
    'name' => 'import news_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'tamper calendar_importer'.
  $permissions['tamper calendar_importer'] = array(
    'name' => 'tamper calendar_importer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper news_importer'.
  $permissions['tamper news_importer'] = array(
    'name' => 'tamper news_importer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unlock calendar_importer feeds'.
  $permissions['unlock calendar_importer feeds'] = array(
    'name' => 'unlock calendar_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock news_importer feeds'.
  $permissions['unlock news_importer feeds'] = array(
    'name' => 'unlock news_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  return $permissions;
}
