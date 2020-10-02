<?php

/**
 * implementation of hook_panels_layouts
 */
// Plugin definition
$plugin = array(
  'title' => t('Front Page'),
  'category' => t('creighton'),
  'icon' => 'front_page.png',
  'theme' => 'panels_front_page',
  'theme arguments' => array('id', 'content'),
  'css' => 'front_page.css',
  'regions' => array(
    'top_section' => t('Top Section'),
    'second_section' => t('Second Section'),
    'third_section' => t('Third Section'),
    'fourth_section' => t('Fourth Section'),
    'bottom_left_section' => t('Bottom Left Section'),
    'bottom_right_section' => t('Bottom Right Section')
  ),
);

