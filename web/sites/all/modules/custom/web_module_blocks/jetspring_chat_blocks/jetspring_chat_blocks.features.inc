<?php
/**
 * @file
 * jetspring_chat_blocks.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jetspring_chat_blocks_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function jetspring_chat_blocks_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
