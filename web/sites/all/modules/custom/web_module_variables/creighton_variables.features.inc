<?php
/**
 * @file
 * creighton_variables.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function creighton_variables_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels" && $api == "pipelines") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function creighton_variables_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_custom_date_formats().
 */
function creighton_variables_custom_date_formats() {
  $custom_date_formats = array();
  $custom_date_formats['M j, Y'] = 'M j, Y';
  $custom_date_formats['g:i a'] = 'g:i a';
  return $custom_date_formats;
}

/**
 * Implements hook_date_format_types().
 */
function creighton_variables_date_format_types() {
  $format_types = array();
  // Exported date format type: time_only_12_hr_
  $format_types['time_only_12_hr_'] = 'Time only (12 hr)';
  // Exported date format type: us_standard_date_only_
  $format_types['us_standard_date_only_'] = 'US Standard (date only)';
  return $format_types;
}
