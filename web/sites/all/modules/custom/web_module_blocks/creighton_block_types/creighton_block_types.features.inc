<?php
/**
 * @file
 * creighton_block_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function creighton_block_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "cer" && $api == "default_cer_presets") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
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
 * Implements hook_views_api().
 */
function creighton_block_types_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function creighton_block_types_image_default_styles() {
  $styles = array();

  // Exported image style: featured_content_2.
  $styles['featured_content_2'] = array(
    'label' => 'Featured Content 2',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 601,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      3 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 601,
          'height' => 1202,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: featured_content_2_custom_user_max_width_20em_1_5x.
  $styles['featured_content_2_custom_user_max_width_20em_1_5x'] = array(
    'label' => 'featured_content_2_custom_user_max_width_20em_1_5x',
    'effects' => array(
      6 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 432,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      7 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 432,
          'height' => 864,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: featured_content_2_custom_user_max_width_20em_1x.
  $styles['featured_content_2_custom_user_max_width_20em_1x'] = array(
    'label' => 'featured_content_2_custom_user_max_width_20em_1x',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 288,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      5 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 288,
          'height' => 576,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: featured_content_2_custom_user_max_width_20em_2x.
  $styles['featured_content_2_custom_user_max_width_20em_2x'] = array(
    'label' => 'featured_content_2_custom_user_max_width_20em_2x',
    'effects' => array(
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 576,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      9 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 576,
          'height' => 1152,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: featured_content_2_custom_user_max_width_30em_1_5x.
  $styles['featured_content_2_custom_user_max_width_30em_1_5x'] = array(
    'label' => 'featured_content_2_custom_user_max_width_30em_1_5x',
    'effects' => array(
      12 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 602,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      13 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 602,
          'height' => 1204,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: featured_content_2_custom_user_max_width_30em_1x.
  $styles['featured_content_2_custom_user_max_width_30em_1x'] = array(
    'label' => 'featured_content_2_custom_user_max_width_30em_1x',
    'effects' => array(
      10 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 401,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      11 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 401,
          'height' => 802,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: featured_content_2_custom_user_max_width_30em_2x.
  $styles['featured_content_2_custom_user_max_width_30em_2x'] = array(
    'label' => 'featured_content_2_custom_user_max_width_30em_2x',
    'effects' => array(
      14 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 802,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      15 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 802,
          'height' => 1604,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: featured_content_2_custom_user_max_width_42_5em_1_5x.
  $styles['featured_content_2_custom_user_max_width_42_5em_1_5x'] = array(
    'label' => 'featured_content_2_custom_user_max_width_42_5em_1_5x',
    'effects' => array(
      18 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 902,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      19 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 902,
          'height' => 1804,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: featured_content_2_custom_user_max_width_42_5em_1x.
  $styles['featured_content_2_custom_user_max_width_42_5em_1x'] = array(
    'label' => 'featured_content_2_custom_user_max_width_42_5em_1x',
    'effects' => array(
      16 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 601,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      17 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 601,
          'height' => 1202,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: featured_content_2_custom_user_max_width_42_5em_2x.
  $styles['featured_content_2_custom_user_max_width_42_5em_2x'] = array(
    'label' => 'featured_content_2_custom_user_max_width_42_5em_2x',
    'effects' => array(
      20 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1202,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      21 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 1202,
          'height' => 2404,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: featured_content_2_custom_user_max_width_50em_1_5x.
  $styles['featured_content_2_custom_user_max_width_50em_1_5x'] = array(
    'label' => 'featured_content_2_custom_user_max_width_50em_1_5x',
    'effects' => array(
      24 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 429,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      25 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 429,
          'height' => 858,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: featured_content_2_custom_user_max_width_50em_1x.
  $styles['featured_content_2_custom_user_max_width_50em_1x'] = array(
    'label' => 'featured_content_2_custom_user_max_width_50em_1x',
    'effects' => array(
      22 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 286,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      23 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 286,
          'height' => 572,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: featured_content_2_custom_user_max_width_50em_2x.
  $styles['featured_content_2_custom_user_max_width_50em_2x'] = array(
    'label' => 'featured_content_2_custom_user_max_width_50em_2x',
    'effects' => array(
      26 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 572,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      27 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 572,
          'height' => 1144,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: featured_content_2_custom_user_max_width_56_25em_1_5x.
  $styles['featured_content_2_custom_user_max_width_56_25em_1_5x'] = array(
    'label' => 'featured_content_2_custom_user_max_width_56_25em_1_5x',
    'effects' => array(
      30 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 488,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      31 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 488,
          'height' => 976,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: featured_content_2_custom_user_max_width_56_25em_1x.
  $styles['featured_content_2_custom_user_max_width_56_25em_1x'] = array(
    'label' => 'featured_content_2_custom_user_max_width_56_25em_1x',
    'effects' => array(
      28 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 325,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      29 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 325,
          'height' => 650,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: featured_content_2_custom_user_max_width_56_25em_2x.
  $styles['featured_content_2_custom_user_max_width_56_25em_2x'] = array(
    'label' => 'featured_content_2_custom_user_max_width_56_25em_2x',
    'effects' => array(
      32 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 650,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      33 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 650,
          'height' => 1300,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: featured_content_2_custom_user_min_width_56_26em_1_5x.
  $styles['featured_content_2_custom_user_min_width_56_26em_1_5x'] = array(
    'label' => 'featured_content_2_custom_user_min_width_56_26em_1_5x',
    'effects' => array(
      36 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 776,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      37 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 776,
          'height' => 1552,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: featured_content_2_custom_user_min_width_56_26em_1x.
  $styles['featured_content_2_custom_user_min_width_56_26em_1x'] = array(
    'label' => 'featured_content_2_custom_user_min_width_56_26em_1x',
    'effects' => array(
      34 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 517,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      35 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 517,
          'height' => 1034,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: featured_content_2_custom_user_min_width_56_26em_2x.
  $styles['featured_content_2_custom_user_min_width_56_26em_2x'] = array(
    'label' => 'featured_content_2_custom_user_min_width_56_26em_2x',
    'effects' => array(
      38 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1034,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      39 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 1034,
          'height' => 2068,
          'anchor' => 'center-top',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: featured_related_content.
  $styles['featured_related_content'] = array(
    'label' => 'Featured Related Content',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 189,
          'height' => 140,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: featured_related_content_custom_user_max_width_35_4375em_1x.
  $styles['featured_related_content_custom_user_max_width_35_4375em_1x'] = array(
    'label' => 'featured_related_content_custom_user_max_width_35_4375em_1x',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1,
          'height' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: featured_related_content_custom_user_max_width_56_25em_1_5x.
  $styles['featured_related_content_custom_user_max_width_56_25em_1_5x'] = array(
    'label' => 'featured_related_content_custom_user_max_width_56_25em_1_5x',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 284,
          'height' => 210,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: featured_related_content_custom_user_max_width_56_25em_1x.
  $styles['featured_related_content_custom_user_max_width_56_25em_1x'] = array(
    'label' => 'featured_related_content_custom_user_max_width_56_25em_1x',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 189,
          'height' => 140,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: featured_related_content_custom_user_max_width_56_25em_2x.
  $styles['featured_related_content_custom_user_max_width_56_25em_2x'] = array(
    'label' => 'featured_related_content_custom_user_max_width_56_25em_2x',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 378,
          'height' => 280,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: featured_related_content_custom_user_min_width_56_26em_1_5x.
  $styles['featured_related_content_custom_user_min_width_56_26em_1_5x'] = array(
    'label' => 'featured_related_content_custom_user_min_width_56_26em_1_5x',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 284,
          'height' => 210,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: featured_related_content_custom_user_min_width_56_26em_1x.
  $styles['featured_related_content_custom_user_min_width_56_26em_1x'] = array(
    'label' => 'featured_related_content_custom_user_min_width_56_26em_1x',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 189,
          'height' => 140,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: featured_related_content_custom_user_min_width_56_26em_2x.
  $styles['featured_related_content_custom_user_min_width_56_26em_2x'] = array(
    'label' => 'featured_related_content_custom_user_min_width_56_26em_2x',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 378,
          'height' => 280,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: footer_badge.
  $styles['footer_badge'] = array(
    'label' => 'Footer Badge',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 241,
          'height' => 288,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: footer_badge_custom_user_max_width_56_25em_1_5x.
  $styles['footer_badge_custom_user_max_width_56_25em_1_5x'] = array(
    'label' => 'footer_badge_custom_user_max_width_56_25em_1_5x',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 362,
          'height' => 432,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: footer_badge_custom_user_max_width_56_25em_1x.
  $styles['footer_badge_custom_user_max_width_56_25em_1x'] = array(
    'label' => 'footer_badge_custom_user_max_width_56_25em_1x',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 241,
          'height' => 288,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: footer_badge_custom_user_max_width_56_25em_2x.
  $styles['footer_badge_custom_user_max_width_56_25em_2x'] = array(
    'label' => 'footer_badge_custom_user_max_width_56_25em_2x',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 482,
          'height' => 576,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: footer_badge_custom_user_min_width_56_26em_1_5x.
  $styles['footer_badge_custom_user_min_width_56_26em_1_5x'] = array(
    'label' => 'footer_badge_custom_user_min_width_56_26em_1_5x',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 362,
          'height' => 432,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: footer_badge_custom_user_min_width_56_26em_1x.
  $styles['footer_badge_custom_user_min_width_56_26em_1x'] = array(
    'label' => 'footer_badge_custom_user_min_width_56_26em_1x',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 241,
          'height' => 288,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: footer_badge_custom_user_min_width_56_26em_2x.
  $styles['footer_badge_custom_user_min_width_56_26em_2x'] = array(
    'label' => 'footer_badge_custom_user_min_width_56_26em_2x',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 482,
          'height' => 576,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider.
  $styles['front_page_slider'] = array(
    'label' => 'Front Page Slider',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1440,
          'height' => 665,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_alt.
  $styles['front_page_slider_alt'] = array(
    'label' => 'Front Page Slider Alt',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1440,
          'height' => 480,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_alt_custom_user_max_width_20em_1_5x.
  $styles['front_page_slider_alt_custom_user_max_width_20em_1_5x'] = array(
    'label' => 'front_page_slider_alt_custom_user_max_width_20em_1_5x',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 160,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_alt_custom_user_max_width_20em_1x.
  $styles['front_page_slider_alt_custom_user_max_width_20em_1x'] = array(
    'label' => 'front_page_slider_alt_custom_user_max_width_20em_1x',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 107,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_alt_custom_user_max_width_20em_2x.
  $styles['front_page_slider_alt_custom_user_max_width_20em_2x'] = array(
    'label' => 'front_page_slider_alt_custom_user_max_width_20em_2x',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 214,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_alt_custom_user_max_width_30em_1_5x.
  $styles['front_page_slider_alt_custom_user_max_width_30em_1_5x'] = array(
    'label' => 'front_page_slider_alt_custom_user_max_width_30em_1_5x',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 720,
          'height' => 240,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_alt_custom_user_max_width_30em_1x.
  $styles['front_page_slider_alt_custom_user_max_width_30em_1x'] = array(
    'label' => 'front_page_slider_alt_custom_user_max_width_30em_1x',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 160,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_alt_custom_user_max_width_30em_2x.
  $styles['front_page_slider_alt_custom_user_max_width_30em_2x'] = array(
    'label' => 'front_page_slider_alt_custom_user_max_width_30em_2x',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 320,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_alt_custom_user_max_width_40em_1_5x.
  $styles['front_page_slider_alt_custom_user_max_width_40em_1_5x'] = array(
    'label' => 'front_page_slider_alt_custom_user_max_width_40em_1_5x',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 320,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_alt_custom_user_max_width_40em_1x.
  $styles['front_page_slider_alt_custom_user_max_width_40em_1x'] = array(
    'label' => 'front_page_slider_alt_custom_user_max_width_40em_1x',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 214,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_alt_custom_user_max_width_40em_2x.
  $styles['front_page_slider_alt_custom_user_max_width_40em_2x'] = array(
    'label' => 'front_page_slider_alt_custom_user_max_width_40em_2x',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1280,
          'height' => 427,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_alt_custom_user_max_width_50em_1_5x.
  $styles['front_page_slider_alt_custom_user_max_width_50em_1_5x'] = array(
    'label' => 'front_page_slider_alt_custom_user_max_width_50em_1_5x',
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_alt_custom_user_max_width_50em_1x.
  $styles['front_page_slider_alt_custom_user_max_width_50em_1x'] = array(
    'label' => 'front_page_slider_alt_custom_user_max_width_50em_1x',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 267,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_alt_custom_user_max_width_50em_2x.
  $styles['front_page_slider_alt_custom_user_max_width_50em_2x'] = array(
    'label' => 'front_page_slider_alt_custom_user_max_width_50em_2x',
    'effects' => array(
      12 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 534,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_alt_custom_user_max_width_56_25em_1_5x.
  $styles['front_page_slider_alt_custom_user_max_width_56_25em_1_5x'] = array(
    'label' => 'front_page_slider_alt_custom_user_max_width_56_25em_1_5x',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1350,
          'height' => 450,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_alt_custom_user_max_width_56_25em_1x.
  $styles['front_page_slider_alt_custom_user_max_width_56_25em_1x'] = array(
    'label' => 'front_page_slider_alt_custom_user_max_width_56_25em_1x',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 900,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_alt_custom_user_max_width_56_25em_2x.
  $styles['front_page_slider_alt_custom_user_max_width_56_25em_2x'] = array(
    'label' => 'front_page_slider_alt_custom_user_max_width_56_25em_2x',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1800,
          'height' => 600,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_alt_custom_user_min_width_56_26em_1_5x.
  $styles['front_page_slider_alt_custom_user_min_width_56_26em_1_5x'] = array(
    'label' => 'front_page_slider_alt_custom_user_min_width_56_26em_1_5x',
    'effects' => array(
      14 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 2160,
          'height' => 720,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_alt_custom_user_min_width_56_26em_1x.
  $styles['front_page_slider_alt_custom_user_min_width_56_26em_1x'] = array(
    'label' => 'front_page_slider_alt_custom_user_min_width_56_26em_1x',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1440,
          'height' => 480,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_alt_custom_user_min_width_56_26em_2x.
  $styles['front_page_slider_alt_custom_user_min_width_56_26em_2x'] = array(
    'label' => 'front_page_slider_alt_custom_user_min_width_56_26em_2x',
    'effects' => array(
      15 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 2880,
          'height' => 960,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_custom_user_max_width_20em_1_5x.
  $styles['front_page_slider_custom_user_max_width_20em_1_5x'] = array(
    'label' => 'front_page_slider_custom_user_max_width_20em_1_5x',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 222,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_custom_user_max_width_20em_1x.
  $styles['front_page_slider_custom_user_max_width_20em_1x'] = array(
    'label' => 'front_page_slider_custom_user_max_width_20em_1x',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 148,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_custom_user_max_width_20em_2x.
  $styles['front_page_slider_custom_user_max_width_20em_2x'] = array(
    'label' => 'front_page_slider_custom_user_max_width_20em_2x',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 296,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_custom_user_max_width_30em_1_5x.
  $styles['front_page_slider_custom_user_max_width_30em_1_5x'] = array(
    'label' => 'front_page_slider_custom_user_max_width_30em_1_5x',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 720,
          'height' => 318,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_custom_user_max_width_30em_1x.
  $styles['front_page_slider_custom_user_max_width_30em_1x'] = array(
    'label' => 'front_page_slider_custom_user_max_width_30em_1x',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 212,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_custom_user_max_width_30em_2x.
  $styles['front_page_slider_custom_user_max_width_30em_2x'] = array(
    'label' => 'front_page_slider_custom_user_max_width_30em_2x',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 424,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_custom_user_max_width_40em_1_5x.
  $styles['front_page_slider_custom_user_max_width_40em_1_5x'] = array(
    'label' => 'front_page_slider_custom_user_max_width_40em_1_5x',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 423,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_custom_user_max_width_40em_1x.
  $styles['front_page_slider_custom_user_max_width_40em_1x'] = array(
    'label' => 'front_page_slider_custom_user_max_width_40em_1x',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 282,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_custom_user_max_width_40em_2x.
  $styles['front_page_slider_custom_user_max_width_40em_2x'] = array(
    'label' => 'front_page_slider_custom_user_max_width_40em_2x',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1280,
          'height' => 564,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_custom_user_max_width_50em_1_5x.
  $styles['front_page_slider_custom_user_max_width_50em_1_5x'] = array(
    'label' => 'front_page_slider_custom_user_max_width_50em_1_5x',
    'effects' => array(
      12 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 530,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_custom_user_max_width_50em_1x.
  $styles['front_page_slider_custom_user_max_width_50em_1x'] = array(
    'label' => 'front_page_slider_custom_user_max_width_50em_1x',
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 353,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_custom_user_max_width_50em_2x.
  $styles['front_page_slider_custom_user_max_width_50em_2x'] = array(
    'label' => 'front_page_slider_custom_user_max_width_50em_2x',
    'effects' => array(
      13 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 670,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_custom_user_max_width_56_25em_1_5x.
  $styles['front_page_slider_custom_user_max_width_56_25em_1_5x'] = array(
    'label' => 'front_page_slider_custom_user_max_width_56_25em_1_5x',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1350,
          'height' => 624,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_custom_user_max_width_56_25em_1x.
  $styles['front_page_slider_custom_user_max_width_56_25em_1x'] = array(
    'label' => 'front_page_slider_custom_user_max_width_56_25em_1x',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 900,
          'height' => 416,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_custom_user_max_width_56_25em_2x.
  $styles['front_page_slider_custom_user_max_width_56_25em_2x'] = array(
    'label' => 'front_page_slider_custom_user_max_width_56_25em_2x',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1800,
          'height' => 832,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_custom_user_min_width_56_26em_1_5x.
  $styles['front_page_slider_custom_user_min_width_56_26em_1_5x'] = array(
    'label' => 'front_page_slider_custom_user_min_width_56_26em_1_5x',
    'effects' => array(
      40 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 2160,
          'height' => 1328,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_custom_user_min_width_56_26em_1x.
  $styles['front_page_slider_custom_user_min_width_56_26em_1x'] = array(
    'label' => 'front_page_slider_custom_user_min_width_56_26em_1x',
    'effects' => array(
      32 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1440,
          'height' => 865,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_custom_user_min_width_56_26em_2x.
  $styles['front_page_slider_custom_user_min_width_56_26em_2x'] = array(
    'label' => 'front_page_slider_custom_user_min_width_56_26em_2x',
    'effects' => array(
      42 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 2880,
          'height' => 1730,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: header_background_image.
  $styles['header_background_image'] = array(
    'label' => 'Header Background Image',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: header_background_image_custom_user_max_width_20em_1_5x.
  $styles['header_background_image_custom_user_max_width_20em_1_5x'] = array(
    'label' => 'header_background_image_custom_user_max_width_20em_1_5x',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 120,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: header_background_image_custom_user_max_width_20em_1x.
  $styles['header_background_image_custom_user_max_width_20em_1x'] = array(
    'label' => 'header_background_image_custom_user_max_width_20em_1x',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 80,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: header_background_image_custom_user_max_width_20em_2x.
  $styles['header_background_image_custom_user_max_width_20em_2x'] = array(
    'label' => 'header_background_image_custom_user_max_width_20em_2x',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 160,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: header_background_image_custom_user_max_width_30em_1_5x.
  $styles['header_background_image_custom_user_max_width_30em_1_5x'] = array(
    'label' => 'header_background_image_custom_user_max_width_30em_1_5x',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 720,
          'height' => 180,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: header_background_image_custom_user_max_width_30em_1x.
  $styles['header_background_image_custom_user_max_width_30em_1x'] = array(
    'label' => 'header_background_image_custom_user_max_width_30em_1x',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 120,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: header_background_image_custom_user_max_width_30em_2x.
  $styles['header_background_image_custom_user_max_width_30em_2x'] = array(
    'label' => 'header_background_image_custom_user_max_width_30em_2x',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 240,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: header_background_image_custom_user_max_width_40em_1_5x.
  $styles['header_background_image_custom_user_max_width_40em_1_5x'] = array(
    'label' => 'header_background_image_custom_user_max_width_40em_1_5x',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 240,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: header_background_image_custom_user_max_width_40em_1x.
  $styles['header_background_image_custom_user_max_width_40em_1x'] = array(
    'label' => 'header_background_image_custom_user_max_width_40em_1x',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 160,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: header_background_image_custom_user_max_width_40em_2x.
  $styles['header_background_image_custom_user_max_width_40em_2x'] = array(
    'label' => 'header_background_image_custom_user_max_width_40em_2x',
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1280,
          'height' => 320,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: header_background_image_custom_user_max_width_50em_1_5x.
  $styles['header_background_image_custom_user_max_width_50em_1_5x'] = array(
    'label' => 'header_background_image_custom_user_max_width_50em_1_5x',
    'effects' => array(
      13 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: header_background_image_custom_user_max_width_50em_1x.
  $styles['header_background_image_custom_user_max_width_50em_1x'] = array(
    'label' => 'header_background_image_custom_user_max_width_50em_1x',
    'effects' => array(
      12 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: header_background_image_custom_user_max_width_50em_2x.
  $styles['header_background_image_custom_user_max_width_50em_2x'] = array(
    'label' => 'header_background_image_custom_user_max_width_50em_2x',
    'effects' => array(
      14 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: header_background_image_custom_user_max_width_56_25em_1_5x.
  $styles['header_background_image_custom_user_max_width_56_25em_1_5x'] = array(
    'label' => 'header_background_image_custom_user_max_width_56_25em_1_5x',
    'effects' => array(
      16 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1350,
          'height' => 338,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: header_background_image_custom_user_max_width_56_25em_1x.
  $styles['header_background_image_custom_user_max_width_56_25em_1x'] = array(
    'label' => 'header_background_image_custom_user_max_width_56_25em_1x',
    'effects' => array(
      15 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 900,
          'height' => 225,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: header_background_image_custom_user_max_width_56_25em_2x.
  $styles['header_background_image_custom_user_max_width_56_25em_2x'] = array(
    'label' => 'header_background_image_custom_user_max_width_56_25em_2x',
    'effects' => array(
      17 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1800,
          'height' => 450,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: header_background_image_custom_user_min_width_56_26em_1_5x.
  $styles['header_background_image_custom_user_min_width_56_26em_1_5x'] = array(
    'label' => 'header_background_image_custom_user_min_width_56_26em_1_5x',
    'effects' => array(
      19 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1800,
          'height' => 450,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: header_background_image_custom_user_min_width_56_26em_1x.
  $styles['header_background_image_custom_user_min_width_56_26em_1x'] = array(
    'label' => 'header_background_image_custom_user_min_width_56_26em_1x',
    'effects' => array(
      18 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: header_background_image_custom_user_min_width_56_26em_2x.
  $styles['header_background_image_custom_user_min_width_56_26em_2x'] = array(
    'label' => 'header_background_image_custom_user_min_width_56_26em_2x',
    'effects' => array(
      20 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 2400,
          'height' => 600,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: inline_slider.
  $styles['inline_slider'] = array(
    'label' => 'Inline Slider',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 452,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: inline_slider_custom_user_max_width_20em_1_5x.
  $styles['inline_slider_custom_user_max_width_20em_1_5x'] = array(
    'label' => 'inline_slider_custom_user_max_width_20em_1_5x',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 361,
          'height' => 204,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: inline_slider_custom_user_max_width_20em_1x.
  $styles['inline_slider_custom_user_max_width_20em_1x'] = array(
    'label' => 'inline_slider_custom_user_max_width_20em_1x',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 241,
          'height' => 136,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: inline_slider_custom_user_max_width_20em_2x.
  $styles['inline_slider_custom_user_max_width_20em_2x'] = array(
    'label' => 'inline_slider_custom_user_max_width_20em_2x',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 482,
          'height' => 272,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: inline_slider_custom_user_max_width_30em_1_5x.
  $styles['inline_slider_custom_user_max_width_30em_1_5x'] = array(
    'label' => 'inline_slider_custom_user_max_width_30em_1_5x',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 601,
          'height' => 339,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: inline_slider_custom_user_max_width_30em_1x.
  $styles['inline_slider_custom_user_max_width_30em_1x'] = array(
    'label' => 'inline_slider_custom_user_max_width_30em_1x',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 401,
          'height' => 226,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: inline_slider_custom_user_max_width_30em_2x.
  $styles['inline_slider_custom_user_max_width_30em_2x'] = array(
    'label' => 'inline_slider_custom_user_max_width_30em_2x',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 802,
          'height' => 452,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: inline_slider_custom_user_max_width_40em_1_5x.
  $styles['inline_slider_custom_user_max_width_40em_1_5x'] = array(
    'label' => 'inline_slider_custom_user_max_width_40em_1_5x',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 841,
          'height' => 476,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: inline_slider_custom_user_max_width_40em_1x.
  $styles['inline_slider_custom_user_max_width_40em_1x'] = array(
    'label' => 'inline_slider_custom_user_max_width_40em_1x',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 561,
          'height' => 317,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: inline_slider_custom_user_max_width_40em_2x.
  $styles['inline_slider_custom_user_max_width_40em_2x'] = array(
    'label' => 'inline_slider_custom_user_max_width_40em_2x',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1122,
          'height' => 634,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: inline_slider_custom_user_max_width_50em_1_5x.
  $styles['inline_slider_custom_user_max_width_50em_1_5x'] = array(
    'label' => 'inline_slider_custom_user_max_width_50em_1_5x',
    'effects' => array(
      12 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1081,
          'height' => 612,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: inline_slider_custom_user_max_width_50em_1x.
  $styles['inline_slider_custom_user_max_width_50em_1x'] = array(
    'label' => 'inline_slider_custom_user_max_width_50em_1x',
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 721,
          'height' => 408,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: inline_slider_custom_user_max_width_50em_2x.
  $styles['inline_slider_custom_user_max_width_50em_2x'] = array(
    'label' => 'inline_slider_custom_user_max_width_50em_2x',
    'effects' => array(
      13 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1442,
          'height' => 816,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: inline_slider_custom_user_max_width_56_25em_1_5x.
  $styles['inline_slider_custom_user_max_width_56_25em_1_5x'] = array(
    'label' => 'inline_slider_custom_user_max_width_56_25em_1_5x',
    'effects' => array(
      15 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 915,
          'height' => 517,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: inline_slider_custom_user_max_width_56_25em_1x.
  $styles['inline_slider_custom_user_max_width_56_25em_1x'] = array(
    'label' => 'inline_slider_custom_user_max_width_56_25em_1x',
    'effects' => array(
      14 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 610,
          'height' => 345,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: inline_slider_custom_user_max_width_56_25em_2x.
  $styles['inline_slider_custom_user_max_width_56_25em_2x'] = array(
    'label' => 'inline_slider_custom_user_max_width_56_25em_2x',
    'effects' => array(
      16 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1220,
          'height' => 690,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: inline_slider_custom_user_min_width_56_26em_1_5x.
  $styles['inline_slider_custom_user_min_width_56_26em_1_5x'] = array(
    'label' => 'inline_slider_custom_user_min_width_56_26em_1_5x',
    'effects' => array(
      18 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 678,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: inline_slider_custom_user_min_width_56_26em_1x.
  $styles['inline_slider_custom_user_min_width_56_26em_1x'] = array(
    'label' => 'inline_slider_custom_user_min_width_56_26em_1x',
    'effects' => array(
      17 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 452,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: inline_slider_custom_user_min_width_56_26em_2x.
  $styles['inline_slider_custom_user_min_width_56_26em_2x'] = array(
    'label' => 'inline_slider_custom_user_min_width_56_26em_2x',
    'effects' => array(
      19 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 904,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: profile_block_image.
  $styles['profile_block_image'] = array(
    'label' => 'Profile Block Image',
    'effects' => array(
      22 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 350,
          'height' => 160,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: profile_image_block_custom_user_max_width_20em_1_5x.
  $styles['profile_image_block_custom_user_max_width_20em_1_5x'] = array(
    'label' => 'profile_image_block_custom_user_max_width_20em_1_5x',
    'effects' => array(
      24 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 219,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: profile_image_block_custom_user_max_width_20em_1x.
  $styles['profile_image_block_custom_user_max_width_20em_1x'] = array(
    'label' => 'profile_image_block_custom_user_max_width_20em_1x',
    'effects' => array(
      23 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 146,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: profile_image_block_custom_user_max_width_20em_2x.
  $styles['profile_image_block_custom_user_max_width_20em_2x'] = array(
    'label' => 'profile_image_block_custom_user_max_width_20em_2x',
    'effects' => array(
      25 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 292,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: profile_image_block_custom_user_max_width_56_25em_1_5x.
  $styles['profile_image_block_custom_user_max_width_56_25em_1_5x'] = array(
    'label' => 'profile_image_block_custom_user_max_width_56_25em_1_5x',
    'effects' => array(
      27 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 525,
          'height' => 240,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: profile_image_block_custom_user_max_width_56_25em_1x.
  $styles['profile_image_block_custom_user_max_width_56_25em_1x'] = array(
    'label' => 'profile_image_block_custom_user_max_width_56_25em_1x',
    'effects' => array(
      26 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 350,
          'height' => 160,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: profile_image_block_custom_user_max_width_56_25em_2x.
  $styles['profile_image_block_custom_user_max_width_56_25em_2x'] = array(
    'label' => 'profile_image_block_custom_user_max_width_56_25em_2x',
    'effects' => array(
      28 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 700,
          'height' => 320,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: profile_image_block_custom_user_min_width_56_26em_1_5x.
  $styles['profile_image_block_custom_user_min_width_56_26em_1_5x'] = array(
    'label' => 'profile_image_block_custom_user_min_width_56_26em_1_5x',
    'effects' => array(
      30 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 525,
          'height' => 240,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: profile_image_block_custom_user_min_width_56_26em_1x.
  $styles['profile_image_block_custom_user_min_width_56_26em_1x'] = array(
    'label' => 'profile_image_block_custom_user_min_width_56_26em_1x',
    'effects' => array(
      29 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 350,
          'height' => 160,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: profile_image_block_custom_user_min_width_56_26em_2x.
  $styles['profile_image_block_custom_user_min_width_56_26em_2x'] = array(
    'label' => 'profile_image_block_custom_user_min_width_56_26em_2x',
    'effects' => array(
      31 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 700,
          'height' => 320,
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
function creighton_block_types_node_info() {
  $items = array(
    'field_link_repo' => array(
      'name' => t('Field Link Repo'),
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
