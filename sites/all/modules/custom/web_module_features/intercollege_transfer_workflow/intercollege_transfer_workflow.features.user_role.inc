<?php
/**
 * @file
 * intercollege_transfer_workflow.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function intercollege_transfer_workflow_user_default_roles() {
  $roles = array();

  // Exported role: Business Dean.
  $roles['Business Dean'] = array(
    'name' => 'Business Dean',
    'weight' => 9,
  );

  // Exported role: CCAS Dean.
  $roles['CCAS Dean'] = array(
    'name' => 'CCAS Dean',
    'weight' => 6,
  );

  // Exported role: CPS Dean.
  $roles['CPS Dean'] = array(
    'name' => 'CPS Dean',
    'weight' => 8,
  );

  // Exported role: Nursing Dean.
  $roles['Nursing Dean'] = array(
    'name' => 'Nursing Dean',
    'weight' => 7,
  );

  // Exported role: SPAHP Dean.
  $roles['SPAHP Dean'] = array(
    'name' => 'SPAHP Dean',
    'weight' => 10,
  );

  // Exported role: student.
  $roles['student'] = array(
    'name' => 'student',
    'weight' => 11,
  );

  return $roles;
}
