<?php
/**
 * @file
 * creighton_honeypot_config.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function creighton_honeypot_config_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
