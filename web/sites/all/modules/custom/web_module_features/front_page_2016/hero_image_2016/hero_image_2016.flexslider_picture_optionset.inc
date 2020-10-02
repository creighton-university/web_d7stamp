<?php
/**
 * @file
 * hero_image_2016.flexslider_picture_optionset.inc
 */

/**
 * Implements hook_default_flexslider_picture_optionset().
 */
function hero_image_2016_default_flexslider_picture_optionset() {
  $export = array();

  $flexslider_picture_optionset = new stdClass();
  $flexslider_picture_optionset->disabled = FALSE; /* Edit this to true to make a default flexslider_picture_optionset disabled initially */
  $flexslider_picture_optionset->api_version = 1;
  $flexslider_picture_optionset->flexslider_optionset = 'front_page_slider';
  $flexslider_picture_optionset->imagestyle_type = 'image_style';
  $flexslider_picture_optionset->mapping = 'featured_content_2';
  $export['front_page_slider'] = $flexslider_picture_optionset;

  return $export;
}
