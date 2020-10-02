<?php
/**
 * @file
 * creighton_block_types.layouts.inc
 */

/**
 * Implements hook_default_panels_layout().
 */
function creighton_block_types_default_panels_layout() {
  $export = array();

  $layout = new stdClass();
  $layout->disabled = FALSE; /* Edit this to true to make a default layout disabled initially */
  $layout->api_version = 1;
  $layout->name = 'academics_search_layout';
  $layout->admin_title = 'Front Page Academics Search and Schools Colleges';
  $layout->admin_description = '';
  $layout->category = 'creighton';
  $layout->plugin = 'flexible';
  $layout->settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
        'class' => 'schools-colleges-shadow',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
        'class' => '',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_',
          1 => 'schools_colleges',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
          1 => 'right',
        ),
        'parent' => 'main',
        'class' => 'major-feature',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'left title',
        'width' => '50',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'right title',
        'width' => '50',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'left_' => array(
        'type' => 'region',
        'title' => 'left',
        'width' => '50',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'pane-cu-academics-search',
      ),
      'schools_colleges' => array(
        'type' => 'region',
        'title' => 'schools-colleges',
        'width' => '50',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'schools-colleges',
      ),
    ),
  );
  $export['academics_search_layout'] = $layout;

  return $export;
}
