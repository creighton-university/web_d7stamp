<?php
/**
 * @file
 * creighton_2tier_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function creighton_2tier_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function creighton_2tier_page_node_info() {
  $items = array(
    '2tier_page' => array(
      'name' => t('2nd Tier Page'),
      'base' => 'node_content',
      'description' => t('Use <em>2nd tier pages</em> for your 2nd tier static content.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
