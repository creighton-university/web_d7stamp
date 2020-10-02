<?php
/**
 * @file
 * creighton_media.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function creighton_media_default_picture_mapping() {
  $export = array();

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'available_programs_icon';
  $picture_mapping->breakpoint_group = 'available_programs_icon';
  $picture_mapping->mapping = array(
    'custom.user.max_width_56_25em' => array(
      '1x' => 'available_programs_icon',
      '1.5x' => 'available_programs_icon',
      '2x' => 'available_programs_icon',
    ),
    'custom.user.min_width_56_26em' => array(
      '1x' => 'available_programs_icon',
      '1.5x' => 'available_programs_icon',
      '2x' => 'available_programs_icon',
    ),
  );
  $export['available_programs_icon'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'body_full_width';
  $picture_mapping->breakpoint_group = 'body_full_width';
  $picture_mapping->mapping = array(
    'custom.user.max_width_20em' => array(
      '1x' => 'body_full_width_custom_user_max_width_20em_1x',
      '1.5x' => 'body_full_width_custom_user_max_width_20em_1_5x',
      '2x' => 'body_full_width_custom_user_max_width_20em_2x',
    ),
    'custom.user.max_width_30em' => array(
      '1x' => 'body_full_width_custom_user_max_width_30em_1x',
      '1.5x' => 'body_full_width_custom_user_max_width_30em_1_5x',
      '2x' => 'body_full_width_custom_user_max_width_30em_2x',
    ),
    'custom.user.max_width_40em' => array(
      '1x' => 'body_full_width_custom_user_max_width_40em_1x',
      '1.5x' => 'body_full_width_custom_user_max_width_40em_1_5x',
      '2x' => 'body_full_width_custom_user_max_width_40em_2x',
    ),
    'custom.user.max_width_50em' => array(
      '1x' => 'body_full_width_custom_user_max_width_50em_1x',
      '1.5x' => 'body_full_width_custom_user_max_width_50em_1_5x',
      '2x' => 'body_full_width_custom_user_max_width_50em_2x',
    ),
    'custom.user.max_width_56_25em' => array(
      '1x' => 'body_full_width_custom_user_max_width_56_25em_1x',
      '1.5x' => 'body_full_width_custom_user_max_width_56_25em_1_5x',
      '2x' => 'body_full_width_custom_user_min_width_56_26em_2x',
    ),
    'custom.user.min_width_56_26em' => array(
      '1x' => 'body_full_width_custom_user_min_width_56_26em_1x',
      '1.5x' => 'body_full_width_custom_user_min_width_56_26em_1_5x',
      '2x' => 'body_full_width_custom_user_min_width_56_26em_2x',
    ),
  );
  $export['body_full_width'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'body_partial_width';
  $picture_mapping->breakpoint_group = 'body_partial_width';
  $picture_mapping->mapping = array(
    'custom.user.max_width_20em' => array(
      '1x' => 'body_partial_width_custom_user_max_width_20em_1x',
      '1.5x' => 'body_partial_width_custom_user_max_width_20em_1_5x',
      '2x' => 'body_partial_width_custom_user_max_width_20em_2x',
    ),
    'custom.user.max_width_56_25em' => array(
      '1x' => 'body_partial_width_custom_user_max_width_56_25em_1x',
      '1.5x' => 'body_partial_width_custom_user_max_width_56_25em_1_5x',
      '2x' => 'body_partial_width_custom_user_max_width_56_25em_2x',
    ),
    'custom.user.min_width_56_26em' => array(
      '1x' => 'body_partial_width_custom_user_min_width_56_26em_1x',
      '1.5x' => 'body_partial_width_custom_user_min_width_56_26em_1_5x',
      '2x' => 'body_partial_width_custom_user_min_width_56_26em_2x',
    ),
  );
  $export['body_partial_width'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'body_profile';
  $picture_mapping->breakpoint_group = 'body_profile';
  $picture_mapping->mapping = array(
    'custom.user.max_width_56_25em' => array(
      '1x' => 'body_profile_custom_user_max_width_56_25em_1x',
      '1.5x' => 'body_profile_custom_user_max_width_56_25em_1_5x',
      '2x' => 'body_profile_custom_user_max_width_56_25em_2x',
    ),
    'custom.user.min_width_56_26em' => array(
      '1x' => 'body_profile_custom_user_min_width_56_26em_1x',
      '1.5x' => 'body_profile_custom_user_min_width_56_26em_1_5x',
      '2x' => 'body_profile_custom_user_min_width_56_26em_2x',
    ),
  );
  $export['body_profile'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'body_small_partial_width';
  $picture_mapping->breakpoint_group = 'body_small_partial_width';
  $picture_mapping->mapping = array(
    'custom.user.max_width_56_25em' => array(
      '1x' => 'body_small_partial_width_custom_user_max_width_56_25em_1x',
      '1.5x' => 'body_small_partial_width_custom_user_max_width_56_25em_1_5x',
      '2x' => 'body_small_partial_width_custom_user_max_width_56_25em_2x',
    ),
    'custom.user.min_width_56_26em' => array(
      '1x' => 'body_small_partial_width_custom_user_min_width_56_26em_1x',
      '1.5x' => 'body_small_partial_width_custom_user_min_width_56_26em_1_5x',
      '2x' => 'body_small_partial_width_custom_user_min_width_56_26em_2x',
    ),
  );
  $export['body_small_partial_width'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'body_thumbnail';
  $picture_mapping->breakpoint_group = 'body_thumbnail';
  $picture_mapping->mapping = array(
    'custom.user.max_width_56_25em' => array(
      '1x' => 'body_thumbnail_custom_user_max_width_56_25em_1x',
      '1.5x' => 'body_thumbnail_custom_user_max_width_56_25em_1_5x',
      '2x' => 'body_thumbnail_custom_user_max_width_56_25em_2x',
    ),
    'custom.user.min_width_56_26em' => array(
      '1x' => 'body_thumbnail_custom_user_min_width_56_26em_1x',
      '1.5x' => 'body_thumbnail_custom_user_min_width_56_26em_1_5x',
      '2x' => 'body_thumbnail_custom_user_min_width_56_26em_2x',
    ),
  );
  $export['body_thumbnail'] = $picture_mapping;

  return $export;
}
