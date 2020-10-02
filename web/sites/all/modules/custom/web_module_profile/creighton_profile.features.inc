<?php
/**
 * @file
 * creighton_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function creighton_profile_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "cer" && $api == "default_cer_presets") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function creighton_profile_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function creighton_profile_image_default_styles() {
  $styles = array();

  // Exported image style: profile2.
  $styles['profile2'] = array(
    'label' => 'Profile2',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 170,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: profile2_custom_user_max_width_56_25em_1_5x.
  $styles['profile2_custom_user_max_width_56_25em_1_5x'] = array(
    'label' => 'profile2_custom_user_max_width_56_25em_1_5x',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 225,
          'height' => 255,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: profile2_custom_user_max_width_56_25em_1x.
  $styles['profile2_custom_user_max_width_56_25em_1x'] = array(
    'label' => 'profile2_custom_user_max_width_56_25em_1x',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 170,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: profile2_custom_user_max_width_56_25em_2x.
  $styles['profile2_custom_user_max_width_56_25em_2x'] = array(
    'label' => 'profile2_custom_user_max_width_56_25em_2x',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 340,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: profile2_custom_user_min_width_56_26em_1_5x.
  $styles['profile2_custom_user_min_width_56_26em_1_5x'] = array(
    'label' => 'profile2_custom_user_min_width_56_26em_1_5x',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 225,
          'height' => 255,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: profile2_custom_user_min_width_56_26em_1x.
  $styles['profile2_custom_user_min_width_56_26em_1x'] = array(
    'label' => 'profile2_custom_user_min_width_56_26em_1x',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 170,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: profile2_custom_user_min_width_56_26em_2x.
  $styles['profile2_custom_user_min_width_56_26em_2x'] = array(
    'label' => 'profile2_custom_user_min_width_56_26em_2x',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 340,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function creighton_profile_node_info() {
  $items = array(
    'profile' => array(
      'name' => t('Profile'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
