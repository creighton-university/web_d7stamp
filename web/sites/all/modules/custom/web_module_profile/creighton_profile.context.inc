<?php
/**
 * @file
 * creighton_profile.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function creighton_profile_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'profile-contact-block';
  $context->description = '';
  $context->tag = 'profile';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'profile' => 'profile',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-profiles-contact_block' => array(
          'module' => 'views',
          'delta' => 'profiles-contact_block',
          'region' => 'sidebar_second',
          'weight' => '-22',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('profile');
  $export['profile-contact-block'] = $context;

  return $export;
}
