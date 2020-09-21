<?php
/**
 * @file
 * creighton_profile.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function creighton_profile_default_picture_mapping() {
  $export = array();

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'profile2';
  $picture_mapping->breakpoint_group = 'profile2';
  $picture_mapping->mapping = array(
    'custom.user.max_width_56_25em' => array(
      '1x' => 'profile2_custom_user_max_width_56_25em_1x',
      '1.5x' => 'profile2_custom_user_max_width_56_25em_1_5x',
      '2x' => 'profile2_custom_user_max_width_56_25em_2x',
    ),
    'custom.user.min_width_56_26em' => array(
      '1x' => 'profile2_custom_user_min_width_56_26em_1x',
      '1.5x' => 'profile2_custom_user_min_width_56_26em_1_5x',
      '2x' => 'profile2_custom_user_min_width_56_26em_2x',
    ),
  );
  $export['profile2'] = $picture_mapping;

  return $export;
}
