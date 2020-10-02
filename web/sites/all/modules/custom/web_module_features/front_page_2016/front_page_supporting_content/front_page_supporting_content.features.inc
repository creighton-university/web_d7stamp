<?php
/**
 * @file
 * front_page_supporting_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function front_page_supporting_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function front_page_supporting_content_node_info() {
  $items = array(
    'fp_supporting_content' => array(
      'name' => t('FP Supporting Content'),
      'base' => 'node_content',
      'description' => t('These content items are specific nodes designed to support the front page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
