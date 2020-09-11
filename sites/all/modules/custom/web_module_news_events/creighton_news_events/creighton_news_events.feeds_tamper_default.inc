<?php
/**
 * @file
 * creighton_news_events.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function creighton_news_events_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'calendar_importer-xpathparser_1-strtotime';
  $feeds_tamper->importer = 'calendar_importer';
  $feeds_tamper->source = 'xpathparser:1';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'String to Unix timestamp';
  $export['calendar_importer-xpathparser_1-strtotime'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'calendar_importer-xpathparser_5-default_value';
  $feeds_tamper->importer = 'calendar_importer';
  $feeds_tamper->source = 'xpathparser:5';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => '18',
    'only_if_empty' => 0,
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Set value or default value';
  $export['calendar_importer-xpathparser_5-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'calendar_importer-xpathparser_5-explode';
  $feeds_tamper->importer = 'calendar_importer';
  $feeds_tamper->source = 'xpathparser:5';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['calendar_importer-xpathparser_5-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'calendar_importer-xpathparser_6-hash';
  $feeds_tamper->importer = 'calendar_importer';
  $feeds_tamper->source = 'xpathparser:6';
  $feeds_tamper->plugin_id = 'hash';
  $feeds_tamper->settings = array(
    'override' => 1,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Calculate hash';
  $export['calendar_importer-xpathparser_6-hash'] = $feeds_tamper;

  return $export;
}
