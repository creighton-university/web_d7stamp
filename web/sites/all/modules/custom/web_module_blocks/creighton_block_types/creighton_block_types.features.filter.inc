<?php
/**
 * @file
 * creighton_block_types.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function creighton_block_types_filter_default_formats() {
  $formats = array();

  // Exported format: Slider Headline.
  $formats['slider_headline'] = array(
    'format' => 'slider_headline',
    'name' => 'Slider Headline',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<strong>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
    ),
  );

  return $formats;
}
