<?php
/**
 * @file
 * intercollege_transfer_workflow.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function intercollege_transfer_workflow_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'shiblogin';
  $context->description = 'Shib Login Block';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'workflow/ict/nursing' => 'workflow/ict/nursing',
        'workflow/ict/business' => 'workflow/ict/business',
        'workflow/ict/spahp' => 'workflow/ict/spahp',
        'workflow/ict/ccas' => 'workflow/ict/ccas',
        'workflow/ict/cps' => 'workflow/ict/cps',
        'dean-dashboard' => 'dean-dashboard',
        '<front>' => '<front>',
      ),
    ),
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'shib_auth-login_box' => array(
          'module' => 'shib_auth',
          'delta' => 'login_box',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Shib Login Block');
  $export['shiblogin'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'workflow_menu_student';
  $context->description = 'Loads the workflow menu for student use.';
  $context->tag = 'workflow';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'users/*' => 'users/*',
        'node/add/intercollege-transfer' => 'node/add/intercollege-transfer',
        'ictcs/*' => 'ictcs/*',
        'user' => 'user',
        '<front>' => '<front>',
      ),
    ),
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-workflow' => array(
          'module' => 'menu',
          'delta' => 'menu-workflow',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Loads the workflow menu for student use.');
  t('workflow');
  $export['workflow_menu_student'] = $context;

  return $export;
}
