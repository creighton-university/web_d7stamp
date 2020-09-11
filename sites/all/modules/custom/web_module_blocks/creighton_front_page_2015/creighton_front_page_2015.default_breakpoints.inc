<?php
/**
 * @file
 * creighton_front_page_2015.default_breakpoints.inc
 */

/**
 * Implements hook_default_breakpoints().
 */
function creighton_front_page_2015_default_breakpoints() {
  $export = array();

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.user.min_width_78_125em';
  $breakpoint->name = 'Min-width: 78.125em';
  $breakpoint->breakpoint = '(min-width: 78.125em)';
  $breakpoint->source = 'user';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 0;
  $breakpoint->multipliers = array(
    '1x' => '1x',
    '1.5x' => '1.5x',
    '2x' => '2x',
  );
  $export['custom.user.min_width_78_125em'] = $breakpoint;

  return $export;
}
