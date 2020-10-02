<?php
/**
 * @file
 * creighton_spotlight.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function creighton_spotlight_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function creighton_spotlight_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function creighton_spotlight_image_default_styles() {
  $styles = array();

  // Exported image style: spotlight.
  $styles['spotlight'] = array(
    'label' => 'Spotlight',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 175,
          'height' => 220,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function creighton_spotlight_node_info() {
  $items = array(
    'spotlight' => array(
      'name' => t('Spotlight'),
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
