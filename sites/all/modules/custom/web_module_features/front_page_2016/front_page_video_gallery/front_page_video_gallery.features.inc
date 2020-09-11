<?php
/**
 * @file
 * front_page_video_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function front_page_video_gallery_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "flexslider_picture" && $api == "flexslider_picture_optionset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "video_embed_field" && $api == "default_video_embed_styles") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function front_page_video_gallery_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function front_page_video_gallery_image_default_styles() {
  $styles = array();

  // Exported image style: flexslider_video_preview.
  $styles['flexslider_video_preview'] = array(
    'label' => 'flexslider_video_preview',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 572,
          'height' => 321,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function front_page_video_gallery_node_info() {
  $items = array(
    'front_page_video_gallery' => array(
      'name' => t('FP Video Gallery'),
      'base' => 'node_content',
      'description' => t('Front Page Video gallery using flexslider'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
