<?php
/**
 * @file
 * creighton_front_page_2015.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function creighton_front_page_2015_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function creighton_front_page_2015_image_default_styles() {
  $styles = array();

  // Exported image style: front_page_slider_custom_user_min_width_78_125em_1_5x.
  $styles['front_page_slider_custom_user_min_width_78_125em_1_5x'] = array(
    'label' => 'front_page_slider_custom_user_min_width_78_125em_1_5x',
    'effects' => array(
      38 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 2160,
          'height' => 1148,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_custom_user_min_width_78_125em_1x.
  $styles['front_page_slider_custom_user_min_width_78_125em_1x'] = array(
    'label' => 'front_page_slider_custom_user_min_width_78_125em_1x',
    'effects' => array(
      37 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1440,
          'height' => 765,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_custom_user_min_width_78_125em_2x.
  $styles['front_page_slider_custom_user_min_width_78_125em_2x'] = array(
    'label' => 'front_page_slider_custom_user_min_width_78_125em_2x',
    'effects' => array(
      39 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 2880,
          'height' => 1530,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
