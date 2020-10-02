<?php
/**
 * @file
 * creighton_news_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function creighton_news_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function creighton_news_events_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function creighton_news_events_node_info() {
  $items = array(
    'imported_calendar' => array(
      'name' => t('Imported Calendar'),
      'base' => 'node_content',
      'description' => t('Imported Calendar Feed Events.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'imported_news' => array(
      'name' => t('Imported News'),
      'base' => 'node_content',
      'description' => t('News imported from RSS feed.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
