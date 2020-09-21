<?php
/**
 * @file
 * creighton_campus_alerts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function creighton_campus_alerts_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
}
