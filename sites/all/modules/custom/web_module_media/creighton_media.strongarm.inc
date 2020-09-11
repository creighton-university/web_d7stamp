<?php
/**
 * @file
 * creighton_media.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function creighton_media_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_alt';
  $strongarm->value = '[file:field_file_image_alt_text]';
  $export['file_entity_alt'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_default_allowed_extensions';
  $strongarm->value = 'jpg jpeg gif png txt doc docx xls xlsx pdf ppt pptx pps ppsx pub odt ods odp';
  $export['file_entity_default_allowed_extensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_file_upload_wizard_skip_fields';
  $strongarm->value = 0;
  $export['file_entity_file_upload_wizard_skip_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_file_upload_wizard_skip_file_type';
  $strongarm->value = 0;
  $export['file_entity_file_upload_wizard_skip_file_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_file_upload_wizard_skip_scheme';
  $strongarm->value = 0;
  $export['file_entity_file_upload_wizard_skip_scheme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_max_filesize';
  $strongarm->value = '7 MB';
  $export['file_entity_max_filesize'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_entity_title';
  $strongarm->value = '[file:field_file_image_title_text]';
  $export['file_entity_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_toolkit';
  $strongarm->value = 'gd';
  $export['image_toolkit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_icon_base_directory';
  $strongarm->value = 'public://media-icons';
  $export['media_icon_base_directory'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_default_render';
  $strongarm->value = 'field_attach';
  $export['media_wysiwyg_default_render'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_wysiwyg_allowed_types';
  $strongarm->value = array(
    0 => 'image',
    1 => 'video',
    2 => 'audio',
    3 => 'document',
  );
  $export['media_wysiwyg_wysiwyg_allowed_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media_wysiwyg_wysiwyg_upload_directory';
  $strongarm->value = 'media';
  $export['media_wysiwyg_wysiwyg_upload_directory'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_file_pattern';
  $strongarm->value = 'file/[file:name]';
  $export['pathauto_file_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'picture_ckeditor_groups';
  $strongarm->value = array(
    'available_programs_icon' => array(
      'enabled' => 1,
      'weight' => '1',
      'fallback' => 'thumbnail',
    ),
    'profile_block_image' => array(
      'enabled' => 0,
      'weight' => '1',
      'fallback' => 'featured_content_2',
    ),
    'body_full_width' => array(
      'enabled' => 1,
      'weight' => '1',
      'fallback' => 'body_full_width',
    ),
    'profile2' => array(
      'enabled' => 0,
      'weight' => '1',
      'fallback' => 'featured_content_2',
    ),
    'header_background_image' => array(
      'enabled' => 0,
      'weight' => '1',
      'fallback' => 'featured_content_2',
    ),
    'inline_slider' => array(
      'enabled' => 0,
      'weight' => '1',
      'fallback' => 'featured_content_2',
    ),
    'featured_content_2' => array(
      'enabled' => 0,
      'weight' => '1',
      'fallback' => 'featured_content_2',
    ),
    'front_page_slider_alt' => array(
      'enabled' => 0,
      'weight' => '1',
      'fallback' => 'featured_content_2',
    ),
    'featured_related_content' => array(
      'enabled' => 0,
      'weight' => '1',
      'fallback' => 'featured_content_2',
    ),
    'front_page_slider' => array(
      'enabled' => 0,
      'weight' => '1',
      'fallback' => 'featured_content_2',
    ),
    'body_partial_width' => array(
      'enabled' => 1,
      'weight' => '2',
      'fallback' => 'body_partial_width',
    ),
    'body_small_partial_width' => array(
      'enabled' => 1,
      'weight' => '3',
      'fallback' => 'body_small_partial_width',
    ),
    'body_profile' => array(
      'enabled' => 1,
      'weight' => '4',
      'fallback' => 'body_profile',
    ),
    'body_thumbnail' => array(
      'enabled' => 1,
      'weight' => '5',
      'fallback' => 'body_thumbnail',
    ),
  );
  $export['picture_ckeditor_groups'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'picture_ckeditor_label';
  $strongarm->value = 'Image size (required)';
  $export['picture_ckeditor_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'picture_implementation';
  $strongarm->value = 'weblinc';
  $export['picture_implementation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'portable_path_stream_wrappers';
  $strongarm->value = array(
    'public' => 'public',
    'private' => 'private',
  );
  $export['portable_path_stream_wrappers'] = $strongarm;

  return $export;
}
