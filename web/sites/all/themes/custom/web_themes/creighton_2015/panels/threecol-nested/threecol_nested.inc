<?php

/**
 * implementation of hook_panels_layouts
 */
// Plugin definition
$plugin = array(
  'title' => t('Three column nested'),
  'category' => t('creighton'),
  'icon' => 'threecol_nested.png',
  'theme' => 'panels_threecol_nested',
  'theme arguments' => array('id', 'content'),
  'css' => 'threecol_nested.css',
  'regions' => array(
    'left' => t('Left side'),
    'main' => t('Main column'),
    'nested_right' => t('Nested right side')
  ),
);

