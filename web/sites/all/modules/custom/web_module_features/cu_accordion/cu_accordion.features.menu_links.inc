<?php
/**
 * @file
 * cu_accordion.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function cu_accordion_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_accordion-content:node/add/accordion-content
  $menu_links['navigation_accordion-content:node/add/accordion-content'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/accordion-content',
    'router_path' => 'node/add/accordion-content',
    'link_title' => 'Accordion Content',
    'options' => array(
      'identifier' => 'navigation_accordion-content:node/add/accordion-content',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Accordion Content');


  return $menu_links;
}
