<?php
/**
 * @file
 * creighton_block_types.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function creighton_block_types_default_picture_mapping() {
  $export = array();

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'featured_content_2';
  $picture_mapping->breakpoint_group = 'featured_content_2';
  $picture_mapping->mapping = array(
    'custom.user.max_width_20em' => array(
      '1x' => 'featured_content_2_custom_user_max_width_20em_1x',
      '1.5x' => 'featured_related_content_custom_user_max_width_56_25em_1_5x',
      '2x' => 'featured_content_2_custom_user_max_width_20em_2x',
    ),
    'custom.user.max_width_30em' => array(
      '1x' => 'featured_content_2_custom_user_max_width_30em_1x',
      '1.5x' => 'featured_content_2_custom_user_max_width_30em_1_5x',
      '2x' => 'featured_content_2_custom_user_max_width_30em_2x',
    ),
    'custom.user.max_width_42_5em' => array(
      '1x' => 'featured_content_2_custom_user_max_width_42_5em_1x',
      '1.5x' => 'featured_content_2_custom_user_max_width_42_5em_1_5x',
      '2x' => 'featured_content_2_custom_user_max_width_42_5em_2x',
    ),
    'custom.user.max_width_50em' => array(
      '1x' => 'featured_content_2_custom_user_max_width_50em_1x',
      '1.5x' => 'featured_content_2_custom_user_max_width_50em_1_5x',
      '2x' => 'featured_content_2_custom_user_max_width_50em_2x',
    ),
    'custom.user.max_width_56_25em' => array(
      '1x' => 'featured_content_2_custom_user_max_width_56_25em_1x',
      '1.5x' => 'featured_content_2_custom_user_max_width_56_25em_1_5x',
      '2x' => 'featured_content_2_custom_user_max_width_56_25em_2x',
    ),
    'custom.user.min_width_56_26em' => array(
      '1x' => 'featured_content_2_custom_user_min_width_56_26em_1x',
      '1.5x' => 'featured_content_2_custom_user_min_width_56_26em_1_5x',
      '2x' => 'featured_content_2_custom_user_min_width_56_26em_2x',
    ),
  );
  $export['featured_content_2'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'featured_related_content';
  $picture_mapping->breakpoint_group = 'featured_related_content';
  $picture_mapping->mapping = array(
    'custom.user.max_width_35_4375em' => array(
      '1x' => 'featured_related_content_custom_user_max_width_35_4375em_1x',
      '1.5x' => 'featured_related_content_custom_user_max_width_35_4375em_1x',
      '2x' => 'featured_related_content_custom_user_max_width_35_4375em_1x',
    ),
    'custom.user.max_width_56_25em' => array(
      '1x' => 'featured_related_content_custom_user_max_width_56_25em_1x',
      '1.5x' => 'featured_related_content_custom_user_max_width_56_25em_1_5x',
      '2x' => 'featured_related_content_custom_user_max_width_56_25em_2x',
    ),
    'custom.user.min_width_56_26em' => array(
      '1x' => 'featured_related_content_custom_user_min_width_56_26em_1x',
      '1.5x' => 'featured_related_content_custom_user_min_width_56_26em_1_5x',
      '2x' => 'featured_related_content_custom_user_min_width_56_26em_2x',
    ),
  );
  $export['featured_related_content'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'footer_badge';
  $picture_mapping->breakpoint_group = 'footer_badge';
  $picture_mapping->mapping = array(
    'custom.user.max_width_56_25em' => array(
      '1x' => 'footer_badge_custom_user_max_width_56_25em_1x',
      '1.5x' => 'footer_badge_custom_user_max_width_56_25em_1_5x',
      '2x' => 'footer_badge_custom_user_max_width_56_25em_2x',
    ),
    'custom.user.min_width_56_26em' => array(
      '1x' => 'footer_badge_custom_user_min_width_56_26em_1x',
      '1.5x' => 'footer_badge_custom_user_min_width_56_26em_1_5x',
      '2x' => 'footer_badge_custom_user_min_width_56_26em_2x',
    ),
  );
  $export['footer_badge'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'front_page_slider';
  $picture_mapping->breakpoint_group = 'front_page_slider';
  $picture_mapping->mapping = array(
    'custom.user.max_width_20em' => array(
      '1x' => 'front_page_slider_custom_user_max_width_20em_1x',
      '1.5x' => 'front_page_slider_custom_user_max_width_20em_1_5x',
      '2x' => 'front_page_slider_custom_user_max_width_20em_2x',
    ),
    'custom.user.min_width_78_125em' => array(
      '1x' => 'front_page_slider_custom_user_min_width_78_125em_1x',
      '1.5x' => 'front_page_slider_custom_user_min_width_78_125em_1_5x',
      '2x' => 'front_page_slider_custom_user_min_width_78_125em_2x',
    ),
    'custom.user.max_width_30em' => array(
      '1x' => 'front_page_slider_custom_user_max_width_30em_1x',
      '1.5x' => 'front_page_slider_custom_user_max_width_30em_1_5x',
      '2x' => 'front_page_slider_custom_user_max_width_30em_2x',
    ),
    'custom.user.max_width_40em' => array(
      '1x' => 'front_page_slider_custom_user_max_width_40em_1x',
      '1.5x' => 'front_page_slider_custom_user_max_width_40em_1_5x',
      '2x' => 'front_page_slider_custom_user_max_width_40em_2x',
    ),
    'custom.user.max_width_50em' => array(
      '1x' => 'front_page_slider_custom_user_max_width_50em_1x',
      '1.5x' => 'front_page_slider_custom_user_max_width_50em_1x',
      '2x' => 'front_page_slider_custom_user_max_width_50em_2x',
    ),
    'custom.user.max_width_56_25em' => array(
      '1x' => 'front_page_slider_custom_user_max_width_56_25em_1x',
      '1.5x' => 'front_page_slider_custom_user_max_width_56_25em_1_5x',
      '2x' => 'front_page_slider_custom_user_max_width_56_25em_2x',
    ),
    'custom.user.min_width_56_26em' => array(
      '1x' => 'front_page_slider_custom_user_min_width_56_26em_1x',
      '1.5x' => 'front_page_slider_custom_user_min_width_56_26em_1_5x',
      '2x' => 'front_page_slider_custom_user_min_width_56_26em_2x',
    ),
  );
  $export['front_page_slider'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'front_page_slider_alt';
  $picture_mapping->breakpoint_group = 'front_page_slider_alt';
  $picture_mapping->mapping = array(
    'custom.user.max_width_20em' => array(
      '1x' => 'front_page_slider_alt_custom_user_max_width_20em_1x',
      '1.5x' => 'front_page_slider_alt_custom_user_max_width_20em_1_5x',
      '2x' => 'front_page_slider_alt_custom_user_max_width_20em_2x',
    ),
    'custom.user.max_width_30em' => array(
      '1x' => 'front_page_slider_alt_custom_user_max_width_30em_1x',
      '1.5x' => 'front_page_slider_alt_custom_user_max_width_30em_1_5x',
      '2x' => 'front_page_slider_alt_custom_user_max_width_30em_2x',
    ),
    'custom.user.max_width_40em' => array(
      '1x' => 'front_page_slider_alt_custom_user_max_width_40em_1x',
      '1.5x' => 'front_page_slider_alt_custom_user_max_width_40em_1_5x',
      '2x' => 'front_page_slider_alt_custom_user_max_width_40em_2x',
    ),
    'custom.user.max_width_50em' => array(
      '1x' => 'front_page_slider_alt_custom_user_max_width_50em_1x',
      '1.5x' => 'front_page_slider_alt_custom_user_max_width_50em_1_5x',
      '2x' => 'front_page_slider_alt_custom_user_max_width_50em_2x',
    ),
    'custom.user.max_width_56_25em' => array(
      '1x' => 'front_page_slider_alt_custom_user_max_width_56_25em_1x',
      '1.5x' => 'front_page_slider_alt_custom_user_max_width_56_25em_1_5x',
      '2x' => 'front_page_slider_alt_custom_user_max_width_56_25em_2x',
    ),
    'custom.user.min_width_56_26em' => array(
      '1x' => 'front_page_slider_alt_custom_user_min_width_56_26em_1x',
      '1.5x' => 'front_page_slider_alt_custom_user_min_width_56_26em_1_5x',
      '2x' => 'front_page_slider_alt_custom_user_min_width_56_26em_2x',
    ),
  );
  $export['front_page_slider_alt'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'header_background_image';
  $picture_mapping->breakpoint_group = 'header_background_image';
  $picture_mapping->mapping = array(
    'custom.user.max_width_20em' => array(
      '1x' => 'header_background_image_custom_user_max_width_20em_1x',
      '1.5x' => 'header_background_image_custom_user_max_width_20em_1_5x',
      '2x' => 'header_background_image_custom_user_max_width_20em_2x',
    ),
    'custom.user.max_width_30em' => array(
      '1x' => 'header_background_image_custom_user_max_width_30em_1x',
      '1.5x' => 'header_background_image_custom_user_max_width_30em_1_5x',
      '2x' => 'header_background_image_custom_user_max_width_30em_2x',
    ),
    'custom.user.max_width_40em' => array(
      '1x' => 'header_background_image_custom_user_max_width_40em_1x',
      '1.5x' => 'header_background_image_custom_user_max_width_40em_1_5x',
      '2x' => 'header_background_image_custom_user_max_width_40em_2x',
    ),
    'custom.user.max_width_50em' => array(
      '1x' => 'header_background_image_custom_user_max_width_50em_1x',
      '1.5x' => 'header_background_image_custom_user_max_width_50em_1_5x',
      '2x' => 'header_background_image_custom_user_max_width_50em_2x',
    ),
    'custom.user.max_width_56_25em' => array(
      '1x' => 'header_background_image_custom_user_max_width_56_25em_1x',
      '1.5x' => 'header_background_image_custom_user_max_width_56_25em_1_5x',
      '2x' => 'header_background_image_custom_user_max_width_56_25em_2x',
    ),
    'custom.user.min_width_56_26em' => array(
      '1x' => 'header_background_image_custom_user_min_width_56_26em_1x',
      '1.5x' => 'header_background_image_custom_user_min_width_56_26em_1_5x',
      '2x' => 'header_background_image_custom_user_min_width_56_26em_2x',
    ),
  );
  $export['header_background_image'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'inline_slider';
  $picture_mapping->breakpoint_group = 'inline_slider';
  $picture_mapping->mapping = array(
    'custom.user.max_width_20em' => array(
      '1x' => 'inline_slider_custom_user_max_width_20em_1x',
      '1.5x' => 'inline_slider_custom_user_max_width_20em_1_5x',
      '2x' => 'inline_slider_custom_user_max_width_20em_2x',
    ),
    'custom.user.max_width_30em' => array(
      '1x' => 'inline_slider_custom_user_max_width_30em_1x',
      '1.5x' => 'inline_slider_custom_user_max_width_30em_1_5x',
      '2x' => 'inline_slider_custom_user_max_width_30em_2x',
    ),
    'custom.user.max_width_40em' => array(
      '1x' => 'inline_slider_custom_user_max_width_40em_1x',
      '1.5x' => 'inline_slider_custom_user_max_width_40em_1_5x',
      '2x' => 'inline_slider_custom_user_max_width_40em_2x',
    ),
    'custom.user.max_width_50em' => array(
      '1x' => 'inline_slider_custom_user_max_width_50em_1x',
      '1.5x' => 'inline_slider_custom_user_max_width_50em_1_5x',
      '2x' => 'inline_slider_custom_user_max_width_50em_2x',
    ),
    'custom.user.max_width_56_25em' => array(
      '1x' => 'inline_slider_custom_user_max_width_56_25em_1x',
      '1.5x' => 'inline_slider_custom_user_max_width_56_25em_1_5x',
      '2x' => 'inline_slider_custom_user_max_width_56_25em_2x',
    ),
    'custom.user.min_width_56_26em' => array(
      '1x' => 'inline_slider_custom_user_min_width_56_26em_1x',
      '1.5x' => 'inline_slider_custom_user_min_width_56_26em_1_5x',
      '2x' => 'inline_slider_custom_user_min_width_56_26em_2x',
    ),
  );
  $export['inline_slider'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'profile_block_image';
  $picture_mapping->breakpoint_group = 'profile_block_image';
  $picture_mapping->mapping = array(
    'custom.user.max_width_20em' => array(
      '1x' => 'profile_image_block_custom_user_max_width_20em_1x',
      '1.5x' => 'profile_image_block_custom_user_max_width_20em_1_5x',
      '2x' => 'profile_image_block_custom_user_max_width_20em_2x',
    ),
    'custom.user.max_width_56_25em' => array(
      '1x' => 'profile_image_block_custom_user_max_width_56_25em_1x',
      '1.5x' => 'profile_image_block_custom_user_max_width_20em_1_5x',
      '2x' => 'profile_image_block_custom_user_max_width_56_25em_2x',
    ),
    'custom.user.min_width_56_26em' => array(
      '1x' => 'profile_image_block_custom_user_min_width_56_26em_1x',
      '1.5x' => 'profile_image_block_custom_user_min_width_56_26em_1_5x',
      '2x' => 'profile_image_block_custom_user_min_width_56_26em_2x',
    ),
  );
  $export['profile_block_image'] = $picture_mapping;

  return $export;
}
