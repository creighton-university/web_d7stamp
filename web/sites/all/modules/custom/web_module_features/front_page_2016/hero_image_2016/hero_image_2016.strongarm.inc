<?php
/**
 * @file
 * hero_image_2016.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function hero_image_2016_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_slider_content_pattern';
  $strongarm->value = 'node/[node:nid]/[node:title]';
  $export['pathauto_node_slider_content_pattern'] = $strongarm;

  return $export;
}
