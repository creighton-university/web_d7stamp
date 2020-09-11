<?php
/**
 * @file
 * profiles_student_international.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function profiles_student_international_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function profiles_student_international_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function profiles_student_international_node_info() {
  $items = array(
    'profile_student_international' => array(
      'name' => t('Profile Student International'),
      'base' => 'node_content',
      'description' => t('Profile for international students on admissions site.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
