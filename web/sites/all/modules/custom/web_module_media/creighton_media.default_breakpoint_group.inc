<?php
/**
 * @file
 * creighton_media.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function creighton_media_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'available_programs_icon';
  $breakpoint_group->name = 'Available Programs Icon';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.max_width_56_25em',
    1 => 'custom.user.min_width_56_26em',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['available_programs_icon'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'body_full_width';
  $breakpoint_group->name = 'Body Full Width';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.max_width_20em',
    1 => 'custom.user.max_width_30em',
    2 => 'custom.user.max_width_40em',
    3 => 'custom.user.max_width_50em',
    4 => 'custom.user.max_width_56_25em',
    5 => 'custom.user.min_width_56_26em',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['body_full_width'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'body_partial_width';
  $breakpoint_group->name = 'Body Partial Width';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.max_width_20em',
    1 => 'custom.user.max_width_56_25em',
    2 => 'custom.user.min_width_56_26em',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['body_partial_width'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'body_profile';
  $breakpoint_group->name = 'Body Profile';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.max_width_56_25em',
    1 => 'custom.user.min_width_56_26em',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['body_profile'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'body_small_partial_width';
  $breakpoint_group->name = 'Body Small Partial Width';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.max_width_56_25em',
    1 => 'custom.user.min_width_56_26em',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['body_small_partial_width'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'body_thumbnail';
  $breakpoint_group->name = 'Body Thumbnail';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.max_width_56_25em',
    1 => 'custom.user.min_width_56_26em',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['body_thumbnail'] = $breakpoint_group;

  return $export;
}
