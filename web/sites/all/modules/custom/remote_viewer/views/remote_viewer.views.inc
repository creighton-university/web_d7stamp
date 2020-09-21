<?php
/**
 * @file
 * Implements hook_views_plugins().
 */

/**
 * Define Page, Block, and Query for Remote Views.
 */
function remote_viewer_views_plugins() {
  $plugins = array(
    'display' => array(
      'remote_page' => array(
        'title' => t('Page (remote)'),
        'help' => t('Display the view as a page, with a URL and menu links.'),
        'handler' => 'remote_plugin_display_page',
        'theme' => 'views_view',
        'uses hook menu' => TRUE,
        'contextual links locations' => array('page'),
        'use ajax' => TRUE,
        'use pager' => TRUE,
        'use more' => TRUE,
        'accept attachments' => TRUE,
        'admin' => t('Page'),
        'help topic' => 'display-page',
      ),
      'remote_block' => array(
        'title' => t('Block (remote)'),
        'help' => t('Display the view as a block.'),
        'handler' => 'remote_plugin_display_block',
        'theme' => 'views_view',
        'uses hook block' => TRUE,
        'contextual links locations' => array('block'),
        'use ajax' => TRUE,
        'use pager' => TRUE,
        'use more' => TRUE,
        'accept attachments' => TRUE,
        'admin' => t('Block'),
        'help topic' => 'display-block',
      ),
    ),
    'query' => array(
      'remote_views_query' => array(
        'title' => t('Remote SQL Query'),
        'help' => t('Query will be generated and run using the Drupal database API on a remote database.'),
        'handler' => 'remote_plugin_query',
      ),
    ),
  );
  return $plugins;
}

/**
 * Implements hook_views_data_alter().
 */
function remote_viewer_views_data_alter(&$data) {
  $data['node']['table']['base']['query class'] = 'remote_views_query';
}

/**
 * Implements hook_views_pre_render().
 *
 * Get markup of all remote fields and filter for remote images to include
 * their styles.
 */
function remote_viewer_views_pre_render(&$view) {
  // Remote Views only.
  if (!empty($view->base_database) && isset($view->result[0])) {
    foreach ($view->result as $view_result_value) {
      foreach ($view_result_value as &$field_contents) {
        if(is_array($field_contents)) {
          if (array_key_exists(0, $field_contents) && isset($field_contents[0]['rendered'])) {
            $text = (isset($field_contents[0]['rendered']['#markup']) ? $field_contents[0]['rendered']['#markup'] : '');
            $field_contents[0]['rendered']['#markup'] = _remote_viewer_picture_filter_process($text);
          }
        }        
      }
    }
  }
}
/**
 * Helper Function to process image to get picture group and display.
 */
function _remote_viewer_picture_filter_process($text) {

  global $databases;
  global $base_url;
  // Strip off http:// or https://.
  $local_server = str_replace('http://', '', $base_url);
  $local_server = str_replace('https://', '', $local_server);
  
  $remote_content = RemoteViewerContentController::$remoteContent;
  $remote_server   = $databases[$remote_content]['default']['server'];
  
  // Find picture img tags.
  preg_match_all('/<img.*?data-picture-group=".*?>/i', $text, $images);


  if (!empty($images[0])) {
    foreach ($images[0] as $image) {
      // Create the render array expected by theme_picture_formatter.
      $image_render_array = _remote_viewer_picture_filter_prepare_image($image);
      if (!$image_render_array) {
        return $text;
      }
      // Get the responsive markup for this image.
      $new_markup = theme('picture_formatter', $image_render_array);
      // Replace local server for remote server.
      $new_markup = str_replace($local_server, $remote_server, $new_markup);

      // Replace the original img tag with the responsive markup.
      $text = str_replace($image, $new_markup, $text);
    }          
  }

  return $text;
}

/**
 * Helper Function to process image to get picture group and display.
 */
function _remote_viewer_picture_filter_prepare_image($image) {
  // Make sure the closing tag is right.
  $image = str_replace('/>', '>', $image);
  $image = str_replace('>', ' />', $image);

  // Parse the tag as xml.
  $xml = simplexml_load_string('<image>' . html_entity_decode($image, ENT_QUOTES, "utf-8") . '</image>');
  if (isset($xml->img[0]) && is_object($xml->img[0])) {
    $attributes = array();
    foreach ($xml->img[0]->attributes() as $a => $b) {
      $attributes[$a] = (string) $b;
    }
  }

  $fallback_image_style = '';
  $mappings = picture_mapping_load($attributes['data-picture-group']);
  $breakpoint_styles = picture_get_mapping_breakpoints($mappings, $fallback_image_style);

  // Make sure we have a src attribute.
  if (!isset($attributes['src'])) {
    return FALSE;
  }
  $src = $attributes['src'];

  // Make sure we have map src to uri.
  $temp_file = explode('files/', $src);
  $uri = 'public://' . $temp_file[1];

  if (!$uri) {
    return FALSE;
  }

  // $image_info = image_get_info($uri);
  $picture_groups = variable_get('picture_ckeditor_groups', array());
  $image_render_array = array(
    '#theme' => 'picture_formatter',
    '#item' => array(
      'style_name' => isset($picture_groups[$attributes['data-picture-group']]['fallback']) ? $picture_groups[$attributes['data-picture-group']]['fallback'] : '' ,
      'uri' => $uri,
      // 'width' => $image_info['width'],
      // 'height' => $image_info['height'],
      'data-picture-group' => $attributes['data-picture-group'],
      'data-picture-align' => isset($attributes['data-picture-align']) ? $attributes['data-picture-align'] : '',
      'alt' => isset($attributes['alt']) ? $attributes['alt'] : '',
      'title' => isset($attributes['title']) ? $attributes['title'] : '',
      // 'filemime' => $image_info['mime_type'],
    ),
    '#image_style' => isset($picture_groups[$attributes['data-picture-group']]['fallback']) ? $picture_groups[$attributes['data-picture-group']]['fallback'] : '' ,
    '#breakpoints' => $breakpoint_styles,
    '#path' => '',
  );

  return $image_render_array;
}
