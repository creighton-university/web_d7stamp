<?php
/**
 * @file
 * remote_content_setup_remote_site.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function remote_content_setup_remote_site_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function remote_content_setup_remote_site_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
