<?php
/**
 * @file
 * creighton_variables.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function creighton_variables_filter_default_formats() {
  $formats = array();

  // Exported format: Mail HTML.
  $formats['mail_html'] = array(
    'format' => 'mail_html',
    'name' => 'Mail HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  return $formats;
}
