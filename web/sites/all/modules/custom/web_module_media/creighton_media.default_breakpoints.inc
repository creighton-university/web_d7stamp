<?php
/**
 * @file
 * creighton_media.default_breakpoints.inc
 */

/**
 * Implements hook_default_breakpoints().
 */
function creighton_media_default_breakpoints() {
  $export = array();

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.user.max_width_20em';
  $breakpoint->name = 'Max-width 20em';
  $breakpoint->breakpoint = '(max-width: 20em)';
  $breakpoint->source = 'user';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 0;
  $breakpoint->multipliers = array(
    '1x' => '1x',
    '1.5x' => '1.5x',
    '2x' => '2x',
  );
  $export['custom.user.max_width_20em'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.user.max_width_30em';
  $breakpoint->name = 'Max-width 30em';
  $breakpoint->breakpoint = '(max-width: 30em)';
  $breakpoint->source = 'user';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 1;
  $breakpoint->multipliers = array(
    '1x' => '1x',
    '1.5x' => '1.5x',
    '2x' => '2x',
  );
  $export['custom.user.max_width_30em'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.user.max_width_35_4375em';
  $breakpoint->name = 'Max-width 35.4375em';
  $breakpoint->breakpoint = '(max-width: 35.4375em)';
  $breakpoint->source = 'user';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 2;
  $breakpoint->multipliers = array(
    '1x' => '1x',
    '1.5x' => '1.5x',
    '2x' => '2x',
  );
  $export['custom.user.max_width_35_4375em'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.user.max_width_40em';
  $breakpoint->name = 'Max-width 40em';
  $breakpoint->breakpoint = '(max-width: 40em)';
  $breakpoint->source = 'user';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 3;
  $breakpoint->multipliers = array(
    '1x' => '1x',
    '1.5x' => '1.5x',
    '2x' => '2x',
  );
  $export['custom.user.max_width_40em'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.user.max_width_42_5em';
  $breakpoint->name = 'Max-width: 42.5em';
  $breakpoint->breakpoint = '(max-width: 42.5em)';
  $breakpoint->source = 'user';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 4;
  $breakpoint->multipliers = array(
    '1x' => '1x',
    '1.5x' => '1.5x',
    '2x' => '2x',
  );
  $export['custom.user.max_width_42_5em'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.user.max_width_50em';
  $breakpoint->name = 'Max-width 50em';
  $breakpoint->breakpoint = '(max-width: 50em)';
  $breakpoint->source = 'user';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 5;
  $breakpoint->multipliers = array(
    '1x' => '1x',
    '1.5x' => '1.5x',
    '2x' => '2x',
  );
  $export['custom.user.max_width_50em'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.user.max_width_56_25em';
  $breakpoint->name = 'Max-width 56.25em';
  $breakpoint->breakpoint = '(max-width: 56.25em)';
  $breakpoint->source = 'user';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 6;
  $breakpoint->multipliers = array(
    '1x' => '1x',
    '1.5x' => '1.5x',
    '2x' => '2x',
  );
  $export['custom.user.max_width_56_25em'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.user.min_width_56_26em';
  $breakpoint->name = 'Min-width: 56.26em';
  $breakpoint->breakpoint = '(min-width: 56.26em)';
  $breakpoint->source = 'user';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 7;
  $breakpoint->multipliers = array(
    '1x' => '1x',
    '1.5x' => '1.5x',
    '2x' => '2x',
  );
  $export['custom.user.min_width_56_26em'] = $breakpoint;

  return $export;
}
