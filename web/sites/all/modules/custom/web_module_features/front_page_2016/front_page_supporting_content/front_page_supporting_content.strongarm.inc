<?php
/**
 * @file
 * front_page_supporting_content.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function front_page_supporting_content_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_fp_supporting_content';
  $strongarm->value = array();
  $export['menu_options_fp_supporting_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_fp_supporting_content';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_fp_supporting_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_fp_supporting_content';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_fp_supporting_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_fp_supporting_content';
  $strongarm->value = '1';
  $export['node_preview_fp_supporting_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_fp_supporting_content';
  $strongarm->value = 0;
  $export['node_submitted_fp_supporting_content'] = $strongarm;

  return $export;
}
