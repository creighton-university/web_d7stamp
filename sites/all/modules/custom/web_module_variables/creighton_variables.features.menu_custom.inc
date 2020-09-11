<?php
/**
 * @file
 * creighton_variables.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function creighton_variables_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
  );
  // Exported menu: menu-transaction-menu.
  $menus['menu-transaction-menu'] = array(
    'menu_name' => 'menu-transaction-menu',
    'title' => 'Transaction Menu',
    'description' => '',
  );
  // Exported menu: menu-utility-menu.
  $menus['menu-utility-menu'] = array(
    'menu_name' => 'menu-utility-menu',
    'title' => 'Utility Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Management');
  t('The <em>Management</em> menu contains links for administrative tasks.');
  t('Transaction Menu');
  t('Utility Menu');

  return $menus;
}
