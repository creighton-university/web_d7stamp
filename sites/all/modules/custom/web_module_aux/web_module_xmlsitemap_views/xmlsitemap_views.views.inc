<?php

/**
 * Implements hook_views_plugins().
 */
function xmlsitemap_views_views_plugins() {
  $path = drupal_get_path('module', 'xmlsitemap_views');
  $plugins = array();
  $plugins['display_extender']['xmlsitemap_views'] = array(
    'title' => t('XML Sitemap'),
    'help' => t('Include or Exclude display from XML Sitemap'),
    'path' => $path,
    'handler' => 'xmlsitemap_views_views_plugin_display_extender',
  );
  return $plugins;
}
