<?php

/**
 * implementation of hook_panels_layouts
 */
// Plugin definition
$plugin = array(
  'title' => t('Front page two column'),
  'category' => t('creighton'),
  'icon' => 'front-page-twocol.png',
  'theme' => 'panels-front-page-twocol',
  'theme arguments' => array('id', 'content'),
  'css' => 'front-page-twocol.css',
  'regions' => array(
	  /**
	  * These are not right. They are from the "front_page_alt" template --cbu04905
	  */
    'top_section_2col' => t('Top Section'),
    'second_section_left_2col' => t('Left Second Section'),
    'second_section_right_2col' => t('Right Second Section')
     ),
);





