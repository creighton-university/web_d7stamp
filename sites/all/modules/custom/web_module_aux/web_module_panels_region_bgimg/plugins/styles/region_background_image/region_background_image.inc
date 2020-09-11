<?php

/**
 * @file
 * Definition of the 'Background image' region style.
 */
$plugin = array(
  'region_background_image' => array(
    'title' => t('Background image'),
    'description' => t('Configure a background image for a panels region'),
    'render region' => 'region_background_image_render_region',
    'settings form' => 'region_background_image_settings_form',
    'hook theme' => array(
      'region_background_image' => array(
        'variables' => array('content' => NULL, 'settings' => NULL),
        'path' => drupal_get_path('module', 'panels_region_bgimg') .'/plugins/styles/region_background_image',
        'template' => 'panels-region-bgimg',
      ),
    ),
  ),
);

/**
 * Render callback.
 */
function theme_region_background_image_render_region($vars) {
  $content = '';
  if(is_array($vars['panes'])) {
    foreach ($vars['panes'] as $pane_id => $pane_output) {
      $content .= $pane_output;
    }
  }
  if (empty($content)) {
    return;
  }
  return theme('region_background_image', array('content' => $content, 'settings' => $vars['settings']));
}

function region_background_image_settings_form($style_settings) {
  $form['region_background_image'] = array(
    '#type' => 'media',
    '#input' => TRUE,
    '#media_options' => array(
      'global' => array(
        'types' => array(
          'image' => 'image',
        ),
        'schemes' => array(
          'public' => 'public',
        ),
        'file_directory' => 'panels_region_bgimg',
        'file_extensions' => 'png gif jpg jpeg',
        'uri_scheme' => 'public',
      ),
    ),
    '#title' => t('Background image for region'),
    '#description' => t('Choose a background image to use with this region'),
    '#required' => TRUE,
    '#default_value' => (isset($style_settings['region_background_image'])) ? $style_settings['region_background_image'] : '',
  );

  return $form;
}
