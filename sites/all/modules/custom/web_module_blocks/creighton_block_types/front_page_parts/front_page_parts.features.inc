<?php
/**
 * @file
 * front_page_parts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function front_page_parts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function front_page_parts_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function front_page_parts_node_info() {
  $items = array(
    'front_page_elements' => array(
      'name' => t('Front Page Elements'),
      'base' => 'node_content',
      'description' => t('The elements, usually copy and images, that go on the front page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'icon_button_with_text' => array(
      'name' => t('Icon Button With Text'),
      'base' => 'node_content',
      'description' => t('Call to action button with icon on the left, text to the right, on a white background.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
