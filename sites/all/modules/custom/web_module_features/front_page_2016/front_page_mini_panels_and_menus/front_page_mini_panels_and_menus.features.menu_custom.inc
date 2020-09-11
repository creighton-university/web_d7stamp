<?php
/**
 * @file
 * front_page_mini_panels_and_menus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function front_page_mini_panels_and_menus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-9-schools-and-colleges.
  $menus['menu-9-schools-and-colleges'] = array(
    'menu_name' => 'menu-9-schools-and-colleges',
    'title' => '9 Schools and Colleges',
    'description' => '',
  );
  // Exported menu: menu-9-schools-and-colleges-col-.
  $menus['menu-9-schools-and-colleges-col-'] = array(
    'menu_name' => 'menu-9-schools-and-colleges-col-',
    'title' => '9 Schools and Colleges',
    'description' => '',
  );
  // Exported menu: menu-information-for.
  $menus['menu-information-for'] = array(
    'menu_name' => 'menu-information-for',
    'title' => 'Information for',
    'description' => '',
  );
  // Exported menu: menu-information-for-col-2.
  $menus['menu-information-for-col-2'] = array(
    'menu_name' => 'menu-information-for-col-2',
    'title' => 'Information for',
    'description' => '',
  );
  // Exported menu: menu-menu-icons.
  $menus['menu-menu-icons'] = array(
    'menu_name' => 'menu-menu-icons',
    'title' => 'Menu Icons',
    'description' => 'Includes "Make a Gift", "Campus Maps", and "A-Z Index" icons.',
  );
  // Exported menu: menu-resources.
  $menus['menu-resources'] = array(
    'menu_name' => 'menu-resources',
    'title' => 'Resources',
    'description' => 'for Current Students, Faculty and Staff',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('9 Schools and Colleges');
  t('Includes "Make a Gift", "Campus Maps", and "A-Z Index" icons.');
  t('Information for');
  t('Menu Icons');
  t('Resources');
  t('for Current Students, Faculty and Staff');

  return $menus;
}
