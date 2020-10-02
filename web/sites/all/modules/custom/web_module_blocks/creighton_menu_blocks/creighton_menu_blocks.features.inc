<?php
/**
 * @file
 * creighton_menu_blocks.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function creighton_menu_blocks_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "menu_block" && $api == "menu_block") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
