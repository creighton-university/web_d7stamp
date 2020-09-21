<?php
/**
 * @file
 * intercollege_transfer_workflow.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function intercollege_transfer_workflow_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access print'.
  $permissions['access print'] = array(
    'name' => 'access print',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'author' => 'author',
      'manager' => 'manager',
    ),
    'module' => 'print',
  );

  // Exported permission: 'administer panelizer node intercollege_transfer defaults'.
  $permissions['administer panelizer node intercollege_transfer defaults'] = array(
    'name' => 'administer panelizer node intercollege_transfer defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer print'.
  $permissions['administer print'] = array(
    'name' => 'administer print',
    'roles' => array(),
    'module' => 'print',
  );

  // Exported permission: 'create field_accepted_semester_year'.
  $permissions['create field_accepted_semester_year'] = array(
    'name' => 'create field_accepted_semester_year',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_application_decision'.
  $permissions['create field_application_decision'] = array(
    'name' => 'create field_application_decision',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_cumulative_gpa'.
  $permissions['create field_cumulative_gpa'] = array(
    'name' => 'create field_cumulative_gpa',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_current_academic_dean'.
  $permissions['create field_current_academic_dean'] = array(
    'name' => 'create field_current_academic_dean',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_current_advisor'.
  $permissions['create field_current_advisor'] = array(
    'name' => 'create field_current_advisor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_current_class'.
  $permissions['create field_current_class'] = array(
    'name' => 'create field_current_class',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_current_college_autofill'.
  $permissions['create field_current_college_autofill'] = array(
    'name' => 'create field_current_college_autofill',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_current_dean_name'.
  $permissions['create field_current_dean_name'] = array(
    'name' => 'create field_current_dean_name',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_current_mailing_address'.
  $permissions['create field_current_mailing_address'] = array(
    'name' => 'create field_current_mailing_address',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_current_major'.
  $permissions['create field_current_major'] = array(
    'name' => 'create field_current_major',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_decline_reason'.
  $permissions['create field_decline_reason'] = array(
    'name' => 'create field_decline_reason',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_deferred_til'.
  $permissions['create field_deferred_til'] = array(
    'name' => 'create field_deferred_til',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_first_name'.
  $permissions['create field_first_name'] = array(
    'name' => 'create field_first_name',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_future_academic_dean_name'.
  $permissions['create field_future_academic_dean_name'] = array(
    'name' => 'create field_future_academic_dean_name',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_last_name'.
  $permissions['create field_last_name'] = array(
    'name' => 'create field_last_name',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_netid'.
  $permissions['create field_netid'] = array(
    'name' => 'create field_netid',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_netid_account'.
  $permissions['create field_netid_account'] = array(
    'name' => 'create field_netid_account',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create intercollege_transfer content'.
  $permissions['create intercollege_transfer content'] = array(
    'name' => 'create intercollege_transfer content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any intercollege_transfer content'.
  $permissions['delete any intercollege_transfer content'] = array(
    'name' => 'delete any intercollege_transfer content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own intercollege_transfer content'.
  $permissions['delete own intercollege_transfer content'] = array(
    'name' => 'delete own intercollege_transfer content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any intercollege_transfer content'.
  $permissions['edit any intercollege_transfer content'] = array(
    'name' => 'edit any intercollege_transfer content',
    'roles' => array(
      'Business Dean' => 'Business Dean',
      'CCAS Dean' => 'CCAS Dean',
      'CPS Dean' => 'CPS Dean',
      'Nursing Dean' => 'Nursing Dean',
      'SPAHP Dean' => 'SPAHP Dean',
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'author' => 'author',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_accepted_semester_year'.
  $permissions['edit field_accepted_semester_year'] = array(
    'name' => 'edit field_accepted_semester_year',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_application_decision'.
  $permissions['edit field_application_decision'] = array(
    'name' => 'edit field_application_decision',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_cumulative_gpa'.
  $permissions['edit field_cumulative_gpa'] = array(
    'name' => 'edit field_cumulative_gpa',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_current_academic_dean'.
  $permissions['edit field_current_academic_dean'] = array(
    'name' => 'edit field_current_academic_dean',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_current_advisor'.
  $permissions['edit field_current_advisor'] = array(
    'name' => 'edit field_current_advisor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_current_class'.
  $permissions['edit field_current_class'] = array(
    'name' => 'edit field_current_class',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_current_college_autofill'.
  $permissions['edit field_current_college_autofill'] = array(
    'name' => 'edit field_current_college_autofill',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_current_dean_name'.
  $permissions['edit field_current_dean_name'] = array(
    'name' => 'edit field_current_dean_name',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_current_mailing_address'.
  $permissions['edit field_current_mailing_address'] = array(
    'name' => 'edit field_current_mailing_address',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_current_major'.
  $permissions['edit field_current_major'] = array(
    'name' => 'edit field_current_major',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_decline_reason'.
  $permissions['edit field_decline_reason'] = array(
    'name' => 'edit field_decline_reason',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_deferred_til'.
  $permissions['edit field_deferred_til'] = array(
    'name' => 'edit field_deferred_til',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_first_name'.
  $permissions['edit field_first_name'] = array(
    'name' => 'edit field_first_name',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_future_academic_dean_name'.
  $permissions['edit field_future_academic_dean_name'] = array(
    'name' => 'edit field_future_academic_dean_name',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_last_name'.
  $permissions['edit field_last_name'] = array(
    'name' => 'edit field_last_name',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_netid'.
  $permissions['edit field_netid'] = array(
    'name' => 'edit field_netid',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_netid_account'.
  $permissions['edit field_netid_account'] = array(
    'name' => 'edit field_netid_account',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_accepted_semester_year'.
  $permissions['edit own field_accepted_semester_year'] = array(
    'name' => 'edit own field_accepted_semester_year',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_application_decision'.
  $permissions['edit own field_application_decision'] = array(
    'name' => 'edit own field_application_decision',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_cumulative_gpa'.
  $permissions['edit own field_cumulative_gpa'] = array(
    'name' => 'edit own field_cumulative_gpa',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_current_academic_dean'.
  $permissions['edit own field_current_academic_dean'] = array(
    'name' => 'edit own field_current_academic_dean',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_current_advisor'.
  $permissions['edit own field_current_advisor'] = array(
    'name' => 'edit own field_current_advisor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_current_class'.
  $permissions['edit own field_current_class'] = array(
    'name' => 'edit own field_current_class',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_current_college_autofill'.
  $permissions['edit own field_current_college_autofill'] = array(
    'name' => 'edit own field_current_college_autofill',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_current_dean_name'.
  $permissions['edit own field_current_dean_name'] = array(
    'name' => 'edit own field_current_dean_name',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_current_mailing_address'.
  $permissions['edit own field_current_mailing_address'] = array(
    'name' => 'edit own field_current_mailing_address',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_current_major'.
  $permissions['edit own field_current_major'] = array(
    'name' => 'edit own field_current_major',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_decline_reason'.
  $permissions['edit own field_decline_reason'] = array(
    'name' => 'edit own field_decline_reason',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_deferred_til'.
  $permissions['edit own field_deferred_til'] = array(
    'name' => 'edit own field_deferred_til',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_first_name'.
  $permissions['edit own field_first_name'] = array(
    'name' => 'edit own field_first_name',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_future_academic_dean_name'.
  $permissions['edit own field_future_academic_dean_name'] = array(
    'name' => 'edit own field_future_academic_dean_name',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_last_name'.
  $permissions['edit own field_last_name'] = array(
    'name' => 'edit own field_last_name',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_netid'.
  $permissions['edit own field_netid'] = array(
    'name' => 'edit own field_netid',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_netid_account'.
  $permissions['edit own field_netid_account'] = array(
    'name' => 'edit own field_netid_account',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own intercollege_transfer content'.
  $permissions['edit own intercollege_transfer content'] = array(
    'name' => 'edit own intercollege_transfer content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'node-specific print configuration'.
  $permissions['node-specific print configuration'] = array(
    'name' => 'node-specific print configuration',
    'roles' => array(),
    'module' => 'print_ui',
  );

  // Exported permission: 'view field_accepted_semester_year'.
  $permissions['view field_accepted_semester_year'] = array(
    'name' => 'view field_accepted_semester_year',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_application_decision'.
  $permissions['view field_application_decision'] = array(
    'name' => 'view field_application_decision',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_cumulative_gpa'.
  $permissions['view field_cumulative_gpa'] = array(
    'name' => 'view field_cumulative_gpa',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_current_academic_dean'.
  $permissions['view field_current_academic_dean'] = array(
    'name' => 'view field_current_academic_dean',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_current_advisor'.
  $permissions['view field_current_advisor'] = array(
    'name' => 'view field_current_advisor',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_current_class'.
  $permissions['view field_current_class'] = array(
    'name' => 'view field_current_class',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_current_college_autofill'.
  $permissions['view field_current_college_autofill'] = array(
    'name' => 'view field_current_college_autofill',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_current_dean_name'.
  $permissions['view field_current_dean_name'] = array(
    'name' => 'view field_current_dean_name',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_current_mailing_address'.
  $permissions['view field_current_mailing_address'] = array(
    'name' => 'view field_current_mailing_address',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_current_major'.
  $permissions['view field_current_major'] = array(
    'name' => 'view field_current_major',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_decline_reason'.
  $permissions['view field_decline_reason'] = array(
    'name' => 'view field_decline_reason',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_deferred_til'.
  $permissions['view field_deferred_til'] = array(
    'name' => 'view field_deferred_til',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_first_name'.
  $permissions['view field_first_name'] = array(
    'name' => 'view field_first_name',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_future_academic_dean_name'.
  $permissions['view field_future_academic_dean_name'] = array(
    'name' => 'view field_future_academic_dean_name',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_last_name'.
  $permissions['view field_last_name'] = array(
    'name' => 'view field_last_name',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_netid'.
  $permissions['view field_netid'] = array(
    'name' => 'view field_netid',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_netid_account'.
  $permissions['view field_netid_account'] = array(
    'name' => 'view field_netid_account',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_accepted_semester_year'.
  $permissions['view own field_accepted_semester_year'] = array(
    'name' => 'view own field_accepted_semester_year',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_application_decision'.
  $permissions['view own field_application_decision'] = array(
    'name' => 'view own field_application_decision',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_cumulative_gpa'.
  $permissions['view own field_cumulative_gpa'] = array(
    'name' => 'view own field_cumulative_gpa',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_current_academic_dean'.
  $permissions['view own field_current_academic_dean'] = array(
    'name' => 'view own field_current_academic_dean',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_current_advisor'.
  $permissions['view own field_current_advisor'] = array(
    'name' => 'view own field_current_advisor',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_current_class'.
  $permissions['view own field_current_class'] = array(
    'name' => 'view own field_current_class',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_current_college_autofill'.
  $permissions['view own field_current_college_autofill'] = array(
    'name' => 'view own field_current_college_autofill',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_current_dean_name'.
  $permissions['view own field_current_dean_name'] = array(
    'name' => 'view own field_current_dean_name',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_current_mailing_address'.
  $permissions['view own field_current_mailing_address'] = array(
    'name' => 'view own field_current_mailing_address',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_current_major'.
  $permissions['view own field_current_major'] = array(
    'name' => 'view own field_current_major',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_decline_reason'.
  $permissions['view own field_decline_reason'] = array(
    'name' => 'view own field_decline_reason',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_deferred_til'.
  $permissions['view own field_deferred_til'] = array(
    'name' => 'view own field_deferred_til',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_first_name'.
  $permissions['view own field_first_name'] = array(
    'name' => 'view own field_first_name',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_future_academic_dean_name'.
  $permissions['view own field_future_academic_dean_name'] = array(
    'name' => 'view own field_future_academic_dean_name',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_last_name'.
  $permissions['view own field_last_name'] = array(
    'name' => 'view own field_last_name',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_netid'.
  $permissions['view own field_netid'] = array(
    'name' => 'view own field_netid',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_netid_account'.
  $permissions['view own field_netid_account'] = array(
    'name' => 'view own field_netid_account',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
