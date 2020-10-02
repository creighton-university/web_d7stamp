<?php
/**
 * @file
 * creighton_webform_rules.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function creighton_webform_rules_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
