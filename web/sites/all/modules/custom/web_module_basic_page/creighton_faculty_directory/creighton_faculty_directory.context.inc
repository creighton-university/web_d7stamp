<?php
/**
 * @file
 * creighton_faculty_directory.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function creighton_faculty_directory_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'faculty-profile-sidebar';
  $context->description = 'Contact info sidebar';
  $context->tag = 'Faculty Directory';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'faculty_directory_profile' => 'faculty_directory_profile',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-2e019ab2ef1de93205ed58d593eb2e58' => array(
          'module' => 'views',
          'delta' => '2e019ab2ef1de93205ed58d593eb2e58',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact info sidebar');
  t('Faculty Directory');
  $export['faculty-profile-sidebar'] = $context;

  return $export;
}
