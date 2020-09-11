<?php
/**
 * @file
 * creighton_block_types.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function creighton_block_types_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'featured_content_2';
  $breakpoint_group->name = 'Featured Content 2';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.max_width_20em',
    1 => 'custom.user.max_width_30em',
    2 => 'custom.user.max_width_42_5em',
    3 => 'custom.user.max_width_50em',
    4 => 'custom.user.max_width_56_25em',
    5 => 'custom.user.min_width_56_26em',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['featured_content_2'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'featured_related_content';
  $breakpoint_group->name = 'Featured Related Content';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.max_width_35_4375em',
    1 => 'custom.user.max_width_56_25em',
    2 => 'custom.user.min_width_56_26em',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['featured_related_content'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'footer_badge';
  $breakpoint_group->name = 'Footer Badge';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.max_width_56_25em',
    1 => 'custom.user.min_width_56_26em',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['footer_badge'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'front_page_slider';
  $breakpoint_group->name = 'Front Page Slider';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.max_width_20em',
    1 => NULL,
    2 => 'custom.user.max_width_30em',
    3 => 'custom.user.max_width_40em',
    4 => 'custom.user.max_width_50em',
    5 => 'custom.user.max_width_56_25em',
    6 => 'custom.user.min_width_56_26em',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['front_page_slider'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'front_page_slider_alt';
  $breakpoint_group->name = 'Front Page Slider Alt';
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
  $export['front_page_slider_alt'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'header_background_image';
  $breakpoint_group->name = 'Header Background Image';
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
  $export['header_background_image'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'inline_slider';
  $breakpoint_group->name = 'Inline Slider';
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
  $export['inline_slider'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'profile_block_image';
  $breakpoint_group->name = 'Profile Block Image';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.max_width_20em',
    1 => 'custom.user.max_width_56_25em',
    2 => 'custom.user.min_width_56_26em',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['profile_block_image'] = $breakpoint_group;

  return $export;
}
