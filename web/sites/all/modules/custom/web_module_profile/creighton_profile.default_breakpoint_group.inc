<?php
/**
 * @file
 * creighton_profile.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function creighton_profile_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'profile2';
  $breakpoint_group->name = 'Profile2';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.max_width_56_25em',
    1 => 'custom.user.min_width_56_26em',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['profile2'] = $breakpoint_group;

  return $export;
}
