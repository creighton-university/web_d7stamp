<?php
/**
 * @file
 * creighton_content_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function creighton_content_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function creighton_content_page_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function creighton_content_page_node_info() {
  $items = array(
    'content_page' => array(
      'name' => t('Content Page'),
      'base' => 'node_content',
      'description' => t('Use <em>content pages</em> for your 3+ tier static content.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
