<?php
/**
 * @file
 * creighton_media.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function creighton_media_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function creighton_media_image_default_styles() {
  $styles = array();

  // Exported image style: available_programs_icon.
  $styles['available_programs_icon'] = array(
    'label' => 'Available Programs Icon',
    'effects' => array(),
  );

  // Exported image style: body_full_width.
  $styles['body_full_width'] = array(
    'label' => 'Body Full Width',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_full_width_custom_user_max_width_20em_1_5x.
  $styles['body_full_width_custom_user_max_width_20em_1_5x'] = array(
    'label' => 'body_full_width_custom_user_max_width_20em_1_5x',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 361,
          'height' => 112,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_full_width_custom_user_max_width_20em_1x.
  $styles['body_full_width_custom_user_max_width_20em_1x'] = array(
    'label' => 'body_full_width_custom_user_max_width_20em_1x',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 241,
          'height' => 75,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_full_width_custom_user_max_width_20em_2x.
  $styles['body_full_width_custom_user_max_width_20em_2x'] = array(
    'label' => 'body_full_width_custom_user_max_width_20em_2x',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 482,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_full_width_custom_user_max_width_30em_1_5x.
  $styles['body_full_width_custom_user_max_width_30em_1_5x'] = array(
    'label' => 'body_full_width_custom_user_max_width_30em_1_5x',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 601,
          'height' => 187,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_full_width_custom_user_max_width_30em_1x.
  $styles['body_full_width_custom_user_max_width_30em_1x'] = array(
    'label' => 'body_full_width_custom_user_max_width_30em_1x',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 401,
          'height' => 125,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_full_width_custom_user_max_width_30em_2x.
  $styles['body_full_width_custom_user_max_width_30em_2x'] = array(
    'label' => 'body_full_width_custom_user_max_width_30em_2x',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 802,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_full_width_custom_user_max_width_40em_1_5x.
  $styles['body_full_width_custom_user_max_width_40em_1_5x'] = array(
    'label' => 'body_full_width_custom_user_max_width_40em_1_5x',
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 841,
          'height' => 262,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_full_width_custom_user_max_width_40em_1x.
  $styles['body_full_width_custom_user_max_width_40em_1x'] = array(
    'label' => 'body_full_width_custom_user_max_width_40em_1x',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 561,
          'height' => 175,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_full_width_custom_user_max_width_40em_2x.
  $styles['body_full_width_custom_user_max_width_40em_2x'] = array(
    'label' => 'body_full_width_custom_user_max_width_40em_2x',
    'effects' => array(
      12 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1122,
          'height' => 350,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_full_width_custom_user_max_width_50em_1_5x.
  $styles['body_full_width_custom_user_max_width_50em_1_5x'] = array(
    'label' => 'body_full_width_custom_user_max_width_50em_1_5x',
    'effects' => array(
      14 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1081,
          'height' => 337,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_full_width_custom_user_max_width_50em_1x.
  $styles['body_full_width_custom_user_max_width_50em_1x'] = array(
    'label' => 'body_full_width_custom_user_max_width_50em_1x',
    'effects' => array(
      13 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 721,
          'height' => 225,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_full_width_custom_user_max_width_50em_2x.
  $styles['body_full_width_custom_user_max_width_50em_2x'] = array(
    'label' => 'body_full_width_custom_user_max_width_50em_2x',
    'effects' => array(
      15 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1442,
          'height' => 450,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_full_width_custom_user_max_width_56_25em_1_5x.
  $styles['body_full_width_custom_user_max_width_56_25em_1_5x'] = array(
    'label' => 'body_full_width_custom_user_max_width_56_25em_1_5x',
    'effects' => array(
      17 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 915,
          'height' => 285,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_full_width_custom_user_max_width_56_25em_1x.
  $styles['body_full_width_custom_user_max_width_56_25em_1x'] = array(
    'label' => 'body_full_width_custom_user_max_width_56_25em_1x',
    'effects' => array(
      16 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 610,
          'height' => 190,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_full_width_custom_user_max_width_56_25em_2x.
  $styles['body_full_width_custom_user_max_width_56_25em_2x'] = array(
    'label' => 'body_full_width_custom_user_max_width_56_25em_2x',
    'effects' => array(
      18 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1220,
          'height' => 380,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_full_width_custom_user_min_width_56_26em_1_5x.
  $styles['body_full_width_custom_user_min_width_56_26em_1_5x'] = array(
    'label' => 'body_full_width_custom_user_min_width_56_26em_1_5x',
    'effects' => array(
      23 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 375,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_full_width_custom_user_min_width_56_26em_1x.
  $styles['body_full_width_custom_user_min_width_56_26em_1x'] = array(
    'label' => 'body_full_width_custom_user_min_width_56_26em_1x',
    'effects' => array(
      22 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_full_width_custom_user_min_width_56_26em_2x.
  $styles['body_full_width_custom_user_min_width_56_26em_2x'] = array(
    'label' => 'body_full_width_custom_user_min_width_56_26em_2x',
    'effects' => array(
      24 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 500,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_partial_width.
  $styles['body_partial_width'] = array(
    'label' => 'Body Partial Width',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_partial_width_custom_user_max_width_20em_1_5x.
  $styles['body_partial_width_custom_user_max_width_20em_1_5x'] = array(
    'label' => 'body_partial_width_custom_user_max_width_20em_1_5x',
    'effects' => array(
      20 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 361,
          'height' => 301,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_partial_width_custom_user_max_width_20em_1x.
  $styles['body_partial_width_custom_user_max_width_20em_1x'] = array(
    'label' => 'body_partial_width_custom_user_max_width_20em_1x',
    'effects' => array(
      19 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 241,
          'height' => 201,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_partial_width_custom_user_max_width_20em_2x.
  $styles['body_partial_width_custom_user_max_width_20em_2x'] = array(
    'label' => 'body_partial_width_custom_user_max_width_20em_2x',
    'effects' => array(
      21 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 482,
          'height' => 402,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_partial_width_custom_user_max_width_56_25em_1_5x.
  $styles['body_partial_width_custom_user_max_width_56_25em_1_5x'] = array(
    'label' => 'body_partial_width_custom_user_max_width_56_25em_1_5x',
    'effects' => array(
      26 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 450,
          'height' => 375,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_partial_width_custom_user_max_width_56_25em_1x.
  $styles['body_partial_width_custom_user_max_width_56_25em_1x'] = array(
    'label' => 'body_partial_width_custom_user_max_width_56_25em_1x',
    'effects' => array(
      25 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_partial_width_custom_user_max_width_56_25em_2x.
  $styles['body_partial_width_custom_user_max_width_56_25em_2x'] = array(
    'label' => 'body_partial_width_custom_user_max_width_56_25em_2x',
    'effects' => array(
      27 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 500,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_partial_width_custom_user_min_width_56_26em_1_5x.
  $styles['body_partial_width_custom_user_min_width_56_26em_1_5x'] = array(
    'label' => 'body_partial_width_custom_user_min_width_56_26em_1_5x',
    'effects' => array(
      29 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 450,
          'height' => 375,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_partial_width_custom_user_min_width_56_26em_1x.
  $styles['body_partial_width_custom_user_min_width_56_26em_1x'] = array(
    'label' => 'body_partial_width_custom_user_min_width_56_26em_1x',
    'effects' => array(
      28 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_partial_width_custom_user_min_width_56_26em_2x.
  $styles['body_partial_width_custom_user_min_width_56_26em_2x'] = array(
    'label' => 'body_partial_width_custom_user_min_width_56_26em_2x',
    'effects' => array(
      30 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 500,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_profile.
  $styles['body_profile'] = array(
    'label' => 'Body Profile',
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

  // Exported image style: body_profile_custom_user_max_width_56_25em_1_5x.
  $styles['body_profile_custom_user_max_width_56_25em_1_5x'] = array(
    'label' => 'body_profile_custom_user_max_width_56_25em_1_5x',
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

  // Exported image style: body_profile_custom_user_max_width_56_25em_1x.
  $styles['body_profile_custom_user_max_width_56_25em_1x'] = array(
    'label' => 'body_profile_custom_user_max_width_56_25em_1x',
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

  // Exported image style: body_profile_custom_user_max_width_56_25em_2x.
  $styles['body_profile_custom_user_max_width_56_25em_2x'] = array(
    'label' => 'body_profile_custom_user_max_width_56_25em_2x',
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

  // Exported image style: body_profile_custom_user_min_width_56_26em_1_5x.
  $styles['body_profile_custom_user_min_width_56_26em_1_5x'] = array(
    'label' => 'body_profile_custom_user_min_width_56_26em_1_5x',
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

  // Exported image style: body_profile_custom_user_min_width_56_26em_1x.
  $styles['body_profile_custom_user_min_width_56_26em_1x'] = array(
    'label' => 'body_profile_custom_user_min_width_56_26em_1x',
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

  // Exported image style: body_profile_custom_user_min_width_56_26em_2x.
  $styles['body_profile_custom_user_min_width_56_26em_2x'] = array(
    'label' => 'body_profile_custom_user_min_width_56_26em_2x',
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

  // Exported image style: body_small_partial_width.
  $styles['body_small_partial_width'] = array(
    'label' => 'Body Small Partial Width',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 166,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_small_partial_width_custom_user_max_width_56_25em_1_5x.
  $styles['body_small_partial_width_custom_user_max_width_56_25em_1_5x'] = array(
    'label' => 'body_small_partial_width_custom_user_max_width_56_25em_1_5x',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 249,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_small_partial_width_custom_user_max_width_56_25em_1x.
  $styles['body_small_partial_width_custom_user_max_width_56_25em_1x'] = array(
    'label' => 'body_small_partial_width_custom_user_max_width_56_25em_1x',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 166,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_small_partial_width_custom_user_max_width_56_25em_2x.
  $styles['body_small_partial_width_custom_user_max_width_56_25em_2x'] = array(
    'label' => 'body_small_partial_width_custom_user_max_width_56_25em_2x',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 332,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_small_partial_width_custom_user_min_width_56_26em_1_5x.
  $styles['body_small_partial_width_custom_user_min_width_56_26em_1_5x'] = array(
    'label' => 'body_small_partial_width_custom_user_min_width_56_26em_1_5x',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 300,
          'height' => 249,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_small_partial_width_custom_user_min_width_56_26em_1x.
  $styles['body_small_partial_width_custom_user_min_width_56_26em_1x'] = array(
    'label' => 'body_small_partial_width_custom_user_min_width_56_26em_1x',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 166,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_small_partial_width_custom_user_min_width_56_26em_2x.
  $styles['body_small_partial_width_custom_user_min_width_56_26em_2x'] = array(
    'label' => 'body_small_partial_width_custom_user_min_width_56_26em_2x',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 332,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_thumbnail.
  $styles['body_thumbnail'] = array(
    'label' => 'Body Thumbnail',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 83,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_thumbnail_custom_user_max_width_56_25em_1_5x.
  $styles['body_thumbnail_custom_user_max_width_56_25em_1_5x'] = array(
    'label' => 'body_thumbnail_custom_user_max_width_56_25em_1_5x',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 125,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_thumbnail_custom_user_max_width_56_25em_1x.
  $styles['body_thumbnail_custom_user_max_width_56_25em_1x'] = array(
    'label' => 'body_thumbnail_custom_user_max_width_56_25em_1x',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 83,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_thumbnail_custom_user_max_width_56_25em_2x.
  $styles['body_thumbnail_custom_user_max_width_56_25em_2x'] = array(
    'label' => 'body_thumbnail_custom_user_max_width_56_25em_2x',
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 166,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_thumbnail_custom_user_min_width_56_26em_1_5x.
  $styles['body_thumbnail_custom_user_min_width_56_26em_1_5x'] = array(
    'label' => 'body_thumbnail_custom_user_min_width_56_26em_1_5x',
    'effects' => array(
      13 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 125,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_thumbnail_custom_user_min_width_56_26em_1x.
  $styles['body_thumbnail_custom_user_min_width_56_26em_1x'] = array(
    'label' => 'body_thumbnail_custom_user_min_width_56_26em_1x',
    'effects' => array(
      12 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 83,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: body_thumbnail_custom_user_min_width_56_26em_2x.
  $styles['body_thumbnail_custom_user_min_width_56_26em_2x'] = array(
    'label' => 'body_thumbnail_custom_user_min_width_56_26em_2x',
    'effects' => array(
      14 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 166,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
