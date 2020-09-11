<?php
/**
 * @file
 * admissions_counselor_bio.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function admissions_counselor_bio_ctools_plugin_api($module = NULL, $api = NULL) {
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
function admissions_counselor_bio_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function admissions_counselor_bio_node_info() {
  $items = array(
    'counselor' => array(
      'name' => t('Counselor'),
      'base' => 'node_content',
      'description' => t('Admissions counselor description and contact information.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
