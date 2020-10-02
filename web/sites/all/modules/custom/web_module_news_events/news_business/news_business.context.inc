<?php
/**
 * @file
 * news_business.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function news_business_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_breadcrumb';
  $context->description = '';
  $context->tag = 'News';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'news' => 'news',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'creighton_crumbs' => array(
      0 => 'main-menu:node/378',
    ),
    'menu' => array(
      0 => 'main-menu:node/378',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('News');
  $export['news_breadcrumb'] = $context;

  return $export;
}
