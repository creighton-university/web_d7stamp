<?php
/**
 * @file
 * front_page_mini_panels_and_menus.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function front_page_mini_panels_and_menus_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}
