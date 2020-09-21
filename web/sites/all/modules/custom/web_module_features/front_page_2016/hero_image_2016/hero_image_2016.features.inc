<?php
/**
 * @file
 * hero_image_2016.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hero_image_2016_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "flexslider_picture" && $api == "flexslider_picture_optionset") {
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
function hero_image_2016_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function hero_image_2016_image_default_styles() {
  $styles = array();

  // Exported image style: front_page_slider_2016.
  $styles['front_page_slider_2016'] = array(
    'label' => 'Front Page Slider 2016',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1300,
          'height' => 580,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_2016_custom_user_max_width_20em_1x.
  $styles['front_page_slider_2016_custom_user_max_width_20em_1x'] = array(
    'label' => 'front_page_slider_2016_custom_user_max_width_20em_1x',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 370,
          'height' => 233,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_2016_custom_user_max_width_20em_2x.
  $styles['front_page_slider_2016_custom_user_max_width_20em_2x'] = array(
    'label' => 'front_page_slider_2016_custom_user_max_width_20em_2x',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 740,
          'height' => 466,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_2016_custom_user_max_width_30em_1x.
  $styles['front_page_slider_2016_custom_user_max_width_30em_1x'] = array(
    'label' => 'front_page_slider_2016_custom_user_max_width_30em_1x',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 302,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_2016_custom_user_max_width_30em_2x.
  $styles['front_page_slider_2016_custom_user_max_width_30em_2x'] = array(
    'label' => 'front_page_slider_2016_custom_user_max_width_30em_2x',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 960,
          'height' => 610,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_2016_custom_user_max_width_35_4375em_1x.
  $styles['front_page_slider_2016_custom_user_max_width_35_4375em_1x'] = array(
    'label' => 'front_page_slider_2016_custom_user_max_width_35_4375em_1x',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 286,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_2016_custom_user_max_width_35_4375em_2x.
  $styles['front_page_slider_2016_custom_user_max_width_35_4375em_2x'] = array(
    'label' => 'front_page_slider_2016_custom_user_max_width_35_4375em_2x',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1280,
          'height' => 572,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_2016_custom_user_max_width_40em_1x.
  $styles['front_page_slider_2016_custom_user_max_width_40em_1x'] = array(
    'label' => 'front_page_slider_2016_custom_user_max_width_40em_1x',
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 286,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_2016_custom_user_max_width_40em_2x.
  $styles['front_page_slider_2016_custom_user_max_width_40em_2x'] = array(
    'label' => 'front_page_slider_2016_custom_user_max_width_40em_2x',
    'effects' => array(
      12 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1280,
          'height' => 572,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_2016_custom_user_max_width_42_5em_1x.
  $styles['front_page_slider_2016_custom_user_max_width_42_5em_1x'] = array(
    'label' => 'front_page_slider_2016_custom_user_max_width_42_5em_1x',
    'effects' => array(
      13 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 357,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_2016_custom_user_max_width_42_5em_2x.
  $styles['front_page_slider_2016_custom_user_max_width_42_5em_2x'] = array(
    'label' => 'front_page_slider_2016_custom_user_max_width_42_5em_2x',
    'effects' => array(
      14 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 714,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_2016_custom_user_max_width_50em_1x.
  $styles['front_page_slider_2016_custom_user_max_width_50em_1x'] = array(
    'label' => 'front_page_slider_2016_custom_user_max_width_50em_1x',
    'effects' => array(
      15 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1300,
          'height' => 580,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_2016_custom_user_max_width_50em_2x.
  $styles['front_page_slider_2016_custom_user_max_width_50em_2x'] = array(
    'label' => 'front_page_slider_2016_custom_user_max_width_50em_2x',
    'effects' => array(
      16 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 2600,
          'height' => 1160,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_2016_custom_user_max_width_56_25em_1x.
  $styles['front_page_slider_2016_custom_user_max_width_56_25em_1x'] = array(
    'label' => 'front_page_slider_2016_custom_user_max_width_56_25em_1x',
    'effects' => array(
      17 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1300,
          'height' => 580,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_2016_custom_user_max_width_56_25em_2x.
  $styles['front_page_slider_2016_custom_user_max_width_56_25em_2x'] = array(
    'label' => 'front_page_slider_2016_custom_user_max_width_56_25em_2x',
    'effects' => array(
      18 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 2600,
          'height' => 1160,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_2016_custom_user_min_width_56_26em_1x.
  $styles['front_page_slider_2016_custom_user_min_width_56_26em_1x'] = array(
    'label' => 'front_page_slider_2016_custom_user_min_width_56_26em_1x',
    'effects' => array(
      19 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1300,
          'height' => 580,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_2016_custom_user_min_width_56_26em_2x.
  $styles['front_page_slider_2016_custom_user_min_width_56_26em_2x'] = array(
    'label' => 'front_page_slider_2016_custom_user_min_width_56_26em_2x',
    'effects' => array(
      20 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 2600,
          'height' => 1160,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_2016_custom_user_min_width_78_125em_1x.
  $styles['front_page_slider_2016_custom_user_min_width_78_125em_1x'] = array(
    'label' => 'front_page_slider_2016_custom_user_min_width_78_125em_1x',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1300,
          'height' => 580,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_page_slider_2016_custom_user_min_width_78_125em_2x.
  $styles['front_page_slider_2016_custom_user_min_width_78_125em_2x'] = array(
    'label' => 'front_page_slider_2016_custom_user_min_width_78_125em_2x',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 2600,
          'height' => 1160,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: social_media_cards.
  $styles['social_media_cards'] = array(
    'label' => 'Social Media Cards',
    'effects' => array(
      21 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 380,
          'height' => 380,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: social_media_cards_custom_user_max_width_56_25em_1_5x.
  $styles['social_media_cards_custom_user_max_width_56_25em_1_5x'] = array(
    'label' => 'social_media_cards_custom_user_max_width_56_25em_1_5x',
    'effects' => array(
      23 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 190,
          'height' => 190,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: social_media_cards_custom_user_max_width_56_25em_1x.
  $styles['social_media_cards_custom_user_max_width_56_25em_1x'] = array(
    'label' => 'social_media_cards_custom_user_max_width_56_25em_1x',
    'effects' => array(
      22 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 190,
          'height' => 190,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: social_media_cards_custom_user_max_width_56_25em_2x.
  $styles['social_media_cards_custom_user_max_width_56_25em_2x'] = array(
    'label' => 'social_media_cards_custom_user_max_width_56_25em_2x',
    'effects' => array(
      24 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 380,
          'height' => 380,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: social_media_cards_custom_user_min_width_56_26em_1_5x.
  $styles['social_media_cards_custom_user_min_width_56_26em_1_5x'] = array(
    'label' => 'social_media_cards_custom_user_min_width_56_26em_1_5x',
    'effects' => array(
      26 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 190,
          'height' => 190,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: social_media_cards_custom_user_min_width_56_26em_1x.
  $styles['social_media_cards_custom_user_min_width_56_26em_1x'] = array(
    'label' => 'social_media_cards_custom_user_min_width_56_26em_1x',
    'effects' => array(
      25 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 190,
          'height' => 190,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: social_media_cards_custom_user_min_width_56_26em_2x.
  $styles['social_media_cards_custom_user_min_width_56_26em_2x'] = array(
    'label' => 'social_media_cards_custom_user_min_width_56_26em_2x',
    'effects' => array(
      27 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 380,
          'height' => 380,
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
function hero_image_2016_node_info() {
  $items = array(
    'slider_content' => array(
      'name' => t('FP Hero Slider Content'),
      'base' => 'node_content',
      'description' => t('Front page slider content item.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
