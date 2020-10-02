<?php
/**
 * @file
 * events_admissions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function events_admissions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function events_admissions_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_custom_date_formats().
 */
function events_admissions_custom_date_formats() {
  $custom_date_formats = array();
  $custom_date_formats['F j, Y'] = 'F j, Y';
  $custom_date_formats['M'] = 'M';
  $custom_date_formats['M j'] = 'M j';
  $custom_date_formats['j'] = 'j';
  return $custom_date_formats;
}

/**
 * Implements hook_date_format_types().
 */
function events_admissions_date_format_types() {
  $format_types = array();
  // Exported date format type: day
  $format_types['day'] = 'Day';
  // Exported date format type: day_only_no_zeros
  $format_types['day_only_no_zeros'] = 'day-only-no-zeros';
  // Exported date format type: month_full_day_year
  $format_types['month_full_day_year'] = 'Month (full) Day, Year';
  // Exported date format type: month_short_
  $format_types['month_short_'] = 'Month (short)';
  // Exported date format type: month_short_day
  $format_types['month_short_day'] = 'Month (short) Day';
  // Exported date format type: usa_long_am_pm
  $format_types['usa_long_am_pm'] = 'USA long am pm';
  return $format_types;
}

/**
 * Implements hook_image_default_styles().
 */
function events_admissions_image_default_styles() {
  $styles = array();

  // Exported image style: events_image.
  $styles['events_image'] = array(
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
    'label' => 'events_image',
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function events_admissions_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('An event content type with date field.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
