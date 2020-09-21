<?php
/**
 * @file
 * hero_image_2016.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function hero_image_2016_default_picture_mapping() {
  $export = array();

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'front_page_slider_2016';
  $picture_mapping->breakpoint_group = 'front_page_slider_2016';
  $picture_mapping->mapping = array(
    'custom.user.min_width_78_125em' => array(
      '1x' => 'front_page_slider_2016_custom_user_min_width_78_125em_1x',
      '1.5x' => 'front_page_slider_2016_custom_user_min_width_78_125em_1x',
      '2x' => 'front_page_slider_2016_custom_user_min_width_78_125em_2x',
    ),
    'custom.user.max_width_20em' => array(
      '1x' => 'front_page_slider_2016_custom_user_max_width_20em_1x',
      '1.5x' => 'front_page_slider_2016_custom_user_max_width_20em_1x',
      '2x' => 'front_page_slider_2016_custom_user_max_width_20em_2x',
    ),
    'custom.user.max_width_30em' => array(
      '1x' => 'front_page_slider_2016_custom_user_max_width_30em_1x',
      '1.5x' => 'front_page_slider_2016_custom_user_max_width_30em_1x',
      '2x' => 'front_page_slider_2016_custom_user_max_width_30em_2x',
    ),
    'custom.user.max_width_35_4375em' => array(
      '1x' => 'front_page_slider_2016_custom_user_max_width_35_4375em_1x',
      '1.5x' => 'front_page_slider_2016_custom_user_max_width_35_4375em_1x',
      '2x' => 'front_page_slider_2016_custom_user_max_width_35_4375em_2x',
    ),
    'custom.user.max_width_40em' => array(
      '1x' => 'front_page_slider_2016_custom_user_max_width_40em_1x',
      '1.5x' => 'front_page_slider_2016_custom_user_max_width_40em_1x',
      '2x' => 'front_page_slider_2016_custom_user_max_width_40em_2x',
    ),
    'custom.user.max_width_42_5em' => array(
      '1x' => 'front_page_slider_2016_custom_user_max_width_42_5em_1x',
      '1.5x' => 'front_page_slider_2016_custom_user_max_width_42_5em_1x',
      '2x' => 'front_page_slider_2016_custom_user_max_width_42_5em_2x',
    ),
    'custom.user.max_width_50em' => array(
      '1x' => 'front_page_slider_2016_custom_user_max_width_50em_1x',
      '1.5x' => 'front_page_slider_2016_custom_user_max_width_50em_1x',
      '2x' => 'front_page_slider_2016_custom_user_max_width_50em_2x',
    ),
    'custom.user.max_width_56_25em' => array(
      '1x' => 'front_page_slider_2016_custom_user_max_width_56_25em_1x',
      '1.5x' => 'front_page_slider_2016_custom_user_max_width_56_25em_1x',
      '2x' => 'front_page_slider_2016_custom_user_max_width_56_25em_2x',
    ),
    'custom.user.min_width_56_26em' => array(
      '1x' => 'front_page_slider_2016_custom_user_min_width_56_26em_1x',
      '1.5x' => 'front_page_slider_2016_custom_user_min_width_56_26em_1x',
      '2x' => 'front_page_slider_2016_custom_user_min_width_56_26em_2x',
    ),
  );
  $export['front_page_slider_2016'] = $picture_mapping;

  $picture_mapping = new stdClass();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 1;
  $picture_mapping->machine_name = 'social_media_cards';
  $picture_mapping->breakpoint_group = 'social_media_cards';
  $picture_mapping->mapping = array(
    'custom.user.max_width_56_25em' => array(
      '1x' => 'social_media_cards_custom_user_max_width_56_25em_1x',
      '1.5x' => 'social_media_cards_custom_user_max_width_56_25em_1_5x',
      '2x' => 'social_media_cards_custom_user_max_width_56_25em_2x',
    ),
    'custom.user.min_width_56_26em' => array(
      '1x' => 'social_media_cards_custom_user_min_width_56_26em_1x',
      '1.5x' => 'social_media_cards_custom_user_min_width_56_26em_1_5x',
      '2x' => 'social_media_cards_custom_user_min_width_56_26em_2x',
    ),
  );
  $export['social_media_cards'] = $picture_mapping;

  return $export;
}
