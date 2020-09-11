<?php
/**
 * @file
 * intercollege_transfer_workflow.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function intercollege_transfer_workflow_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-workflow.
  $menus['menu-workflow'] = array(
    'menu_name' => 'menu-workflow',
    'title' => 'Workflow',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Workflow');

  return $menus;
}
