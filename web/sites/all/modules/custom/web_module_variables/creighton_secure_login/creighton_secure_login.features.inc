<?php
/**
 * @file
 * creighton_secure_login.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function creighton_secure_login_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
