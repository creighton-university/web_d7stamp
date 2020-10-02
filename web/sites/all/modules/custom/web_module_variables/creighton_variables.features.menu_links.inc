<?php
/**
 * @file
 * creighton_variables.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function creighton_variables_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_help:http://www.creighton.edu/web/resources.
  $menu_links['management_help:http://www.creighton.edu/web/resources'] = array(
    'menu_name' => 'management',
    'link_path' => 'http://www.creighton.edu/web/resources',
    'router_path' => '',
    'link_title' => 'Help',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_help:http://www.creighton.edu/web/resources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 50,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Help');

  return $menu_links;
}
