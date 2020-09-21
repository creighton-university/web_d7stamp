<?php
/**
 * @file
 * jetspring_chat_blocks.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function jetspring_chat_blocks_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'jetspring_chat_block_placement';
  $context->description = '';
  $context->tag = 'jetspring';
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-jetspring_header_footer-block' => array(
          'module' => 'views',
          'delta' => 'jetspring_header_footer-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-jetspring_header_footer-block_1' => array(
          'module' => 'views',
          'delta' => 'jetspring_header_footer-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('jetspring');
  $export['jetspring_chat_block_placement'] = $context;

  return $export;
}
