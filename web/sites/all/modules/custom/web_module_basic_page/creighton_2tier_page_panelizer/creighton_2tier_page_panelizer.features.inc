<?php
/**
 * @file
 * creighton_2tier_page_panelizer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function creighton_2tier_page_panelizer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
