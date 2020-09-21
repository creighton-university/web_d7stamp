<?php
/**
 * @file
 * events_admissions.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function events_admissions_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'event_mapper';
  $feeds_importer->config = array(
    'name' => 'Event Mapper',
    'description' => 'An event feed for CUInvolved Calendar (CampusLabs)',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'title',
          'xpathparser:3' => 'link',
          'xpathparser:2' => 'description',
          'xpathparser:4' => 'start',
          'xpathparser:5' => 'end',
          'xpathparser:6' => 'location',
          'xpathparser:7' => 'guid',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:3' => 0,
          'xpathparser:2' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
        ),
        'context' => '//channel/item',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 'context',
            'xpathparser:0' => 'xpathparser:0',
            'xpathparser:3' => 'xpathparser:3',
            'xpathparser:2' => 'xpathparser:2',
            'xpathparser:4' => 'xpathparser:4',
            'xpathparser:5' => 'xpathparser:5',
            'xpathparser:6' => 'xpathparser:6',
            'xpathparser:7' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '604800',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_signup_link:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'body',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_event_date:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_event_date:end',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_event_location',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'xpathparser:7',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 1,
        'bundle' => 'event',
        'insert_new' => '1',
        'update_non_existent' => 'skip',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '0',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['event_mapper'] = $feeds_importer;

  return $export;
}
