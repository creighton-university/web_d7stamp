<?php
/**
 * @file
 * remote_content_setup_remote_site.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function remote_content_setup_remote_site_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'breadcrumb_programs';
  $context->description = '';
  $context->tag = 'Academics';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'program/*' => 'program/*',
        'local-program/*' => 'local-program/*',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'programs',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Academics');
  $export['breadcrumb_programs'] = $context;

  return $export;
}
