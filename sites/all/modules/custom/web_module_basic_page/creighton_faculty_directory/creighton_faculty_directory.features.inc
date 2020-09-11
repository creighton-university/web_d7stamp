<?php
/**
 * @file
 * creighton_faculty_directory.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function creighton_faculty_directory_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function creighton_faculty_directory_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
