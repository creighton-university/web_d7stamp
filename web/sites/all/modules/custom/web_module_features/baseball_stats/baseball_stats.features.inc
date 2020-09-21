<?php
/**
 * @file
 * baseball_stats.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function baseball_stats_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function baseball_stats_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_custom_date_formats().
 */
function baseball_stats_custom_date_formats() {
  $custom_date_formats = array();
  return $custom_date_formats;
}

/**
 * Implements hook_date_format_types().
 */
function baseball_stats_date_format_types() {
  $format_types = array();
  // Exported date format type: medium_12hr
  $format_types['medium_12hr'] = 'Medium 12hr';
  return $format_types;
}

/**
 * Implements hook_node_info().
 */
function baseball_stats_node_info() {
  $items = array(
    'game' => array(
      'name' => t('Game'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'plate_appearance' => array(
      'name' => t('Plate Appearance'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'player' => array(
      'name' => t('Player'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'team' => array(
      'name' => t('Team'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
