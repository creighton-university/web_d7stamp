<?php

/**
 * implementation of hook_panels_layouts
 */
// Plugin definition
$plugin = array(
  'title' => t('Front Page Alternate'),
  'category' => t('creighton'),
  'icon' => 'front_page_alt.png',
  'theme' => 'panels_front_page_alt',
  'theme arguments' => array('id', 'content'),
  'css' => 'front_page_alt.css',
  'regions' => array(
    'top_section' => t('Top Section'),
    'second_section_left' => t('Left Second Section'),
    'second_section_right' => t('Right Second Section'),
    'third_section' => t('Third Section'),
    'bottom_left_section' => t('Bottom Left Section'),
    'bottom_right_section' => t('Bottom Right Section')
  ),
);

