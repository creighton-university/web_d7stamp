<?php
/**
 * @file
 * hero_image_2016.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function hero_image_2016_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'front_page_slider_2016';
  $breakpoint_group->name = 'Front Page Slider 2016';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.min_width_78_125em',
    1 => 'custom.user.max_width_20em',
    2 => 'custom.user.max_width_30em',
    3 => 'custom.user.max_width_35_4375em',
    4 => 'custom.user.max_width_40em',
    5 => 'custom.user.max_width_42_5em',
    6 => 'custom.user.max_width_50em',
    7 => 'custom.user.max_width_56_25em',
    8 => 'custom.user.min_width_56_26em',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['front_page_slider_2016'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'social_media_cards';
  $breakpoint_group->name = 'Social Media Cards';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.max_width_56_25em',
    1 => 'custom.user.min_width_56_26em',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['social_media_cards'] = $breakpoint_group;

  return $export;
}
