<?php
/**
 * @file
 * academic_program_program_details.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function academic_program_program_details_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in academic_interests'.
  $permissions['add terms in academic_interests'] = array(
    'name' => 'add terms in academic_interests',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in academic_programs_offerings'.
  $permissions['add terms in academic_programs_offerings'] = array(
    'name' => 'add terms in academic_programs_offerings',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'create academic_program content'.
  $permissions['create academic_program content'] = array(
    'name' => 'create academic_program content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create academic_unit content'.
  $permissions['create academic_unit content'] = array(
    'name' => 'create academic_unit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create program_details content'.
  $permissions['create program_details content'] = array(
    'name' => 'create program_details content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any academic_program content'.
  $permissions['delete any academic_program content'] = array(
    'name' => 'delete any academic_program content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any academic_unit content'.
  $permissions['delete any academic_unit content'] = array(
    'name' => 'delete any academic_unit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any program_details content'.
  $permissions['delete any program_details content'] = array(
    'name' => 'delete any program_details content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own academic_program content'.
  $permissions['delete own academic_program content'] = array(
    'name' => 'delete own academic_program content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own academic_unit content'.
  $permissions['delete own academic_unit content'] = array(
    'name' => 'delete own academic_unit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own program_details content'.
  $permissions['delete own program_details content'] = array(
    'name' => 'delete own program_details content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in academic_interests'.
  $permissions['delete terms in academic_interests'] = array(
    'name' => 'delete terms in academic_interests',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in academic_programs_offerings'.
  $permissions['delete terms in academic_programs_offerings'] = array(
    'name' => 'delete terms in academic_programs_offerings',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any academic_program content'.
  $permissions['edit any academic_program content'] = array(
    'name' => 'edit any academic_program content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any academic_unit content'.
  $permissions['edit any academic_unit content'] = array(
    'name' => 'edit any academic_unit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any program_details content'.
  $permissions['edit any program_details content'] = array(
    'name' => 'edit any program_details content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own academic_program content'.
  $permissions['edit own academic_program content'] = array(
    'name' => 'edit own academic_program content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own academic_unit content'.
  $permissions['edit own academic_unit content'] = array(
    'name' => 'edit own academic_unit content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own program_details content'.
  $permissions['edit own program_details content'] = array(
    'name' => 'edit own program_details content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in academic_interests'.
  $permissions['edit terms in academic_interests'] = array(
    'name' => 'edit terms in academic_interests',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in academic_programs_offerings'.
  $permissions['edit terms in academic_programs_offerings'] = array(
    'name' => 'edit terms in academic_programs_offerings',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
