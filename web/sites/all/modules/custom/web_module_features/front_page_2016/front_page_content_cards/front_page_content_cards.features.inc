<?php
/**
 * @file
 * front_page_content_cards.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function front_page_content_cards_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function front_page_content_cards_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function front_page_content_cards_node_info() {
  $items = array(
    'fp_featured_content_cards' => array(
      'name' => t('FP Featured Content Cards'),
      'base' => 'node_content',
      'description' => t('Small pieces of content to shown as a group on the front page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
