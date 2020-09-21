<?php
/**
 * @file
 * baseball_stats.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function baseball_stats_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access PDF version'.
  $permissions['access PDF version'] = array(
    'name' => 'access PDF version',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'stats manager' => 'stats manager',
    ),
    'module' => 'print_pdf',
  );

  // Exported permission: 'add terms in conference'.
  $permissions['add terms in conference'] = array(
    'name' => 'add terms in conference',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in handedness'.
  $permissions['add terms in handedness'] = array(
    'name' => 'add terms in handedness',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in pitch_result'.
  $permissions['add terms in pitch_result'] = array(
    'name' => 'add terms in pitch_result',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in pitch_type'.
  $permissions['add terms in pitch_type'] = array(
    'name' => 'add terms in pitch_type',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in plate_appearance_result'.
  $permissions['add terms in plate_appearance_result'] = array(
    'name' => 'add terms in plate_appearance_result',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in position'.
  $permissions['add terms in position'] = array(
    'name' => 'add terms in position',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in season'.
  $permissions['add terms in season'] = array(
    'name' => 'add terms in season',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in zone_number'.
  $permissions['add terms in zone_number'] = array(
    'name' => 'add terms in zone_number',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'administer conference vocabulary terms'.
  $permissions['administer conference vocabulary terms'] = array(
    'name' => 'administer conference vocabulary terms',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'vppr',
  );

  // Exported permission: 'administer handedness vocabulary terms'.
  $permissions['administer handedness vocabulary terms'] = array(
    'name' => 'administer handedness vocabulary terms',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'vppr',
  );

  // Exported permission: 'administer pitch_result vocabulary terms'.
  $permissions['administer pitch_result vocabulary terms'] = array(
    'name' => 'administer pitch_result vocabulary terms',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'vppr',
  );

  // Exported permission: 'administer pitch_type vocabulary terms'.
  $permissions['administer pitch_type vocabulary terms'] = array(
    'name' => 'administer pitch_type vocabulary terms',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'vppr',
  );

  // Exported permission: 'administer plate_appearance_result vocabulary terms'.
  $permissions['administer plate_appearance_result vocabulary terms'] = array(
    'name' => 'administer plate_appearance_result vocabulary terms',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'vppr',
  );

  // Exported permission: 'administer position vocabulary terms'.
  $permissions['administer position vocabulary terms'] = array(
    'name' => 'administer position vocabulary terms',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'vppr',
  );

  // Exported permission: 'administer season vocabulary terms'.
  $permissions['administer season vocabulary terms'] = array(
    'name' => 'administer season vocabulary terms',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'vppr',
  );

  // Exported permission: 'administer zone_number vocabulary terms'.
  $permissions['administer zone_number vocabulary terms'] = array(
    'name' => 'administer zone_number vocabulary terms',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'vppr',
  );

  // Exported permission: 'assign stats manager role'.
  $permissions['assign stats manager role'] = array(
    'name' => 'assign stats manager role',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'create game content'.
  $permissions['create game content'] = array(
    'name' => 'create game content',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create plate_appearance content'.
  $permissions['create plate_appearance content'] = array(
    'name' => 'create plate_appearance content',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create player content'.
  $permissions['create player content'] = array(
    'name' => 'create player content',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create team content'.
  $permissions['create team content'] = array(
    'name' => 'create team content',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any game content'.
  $permissions['delete any game content'] = array(
    'name' => 'delete any game content',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any plate_appearance content'.
  $permissions['delete any plate_appearance content'] = array(
    'name' => 'delete any plate_appearance content',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any player content'.
  $permissions['delete any player content'] = array(
    'name' => 'delete any player content',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any team content'.
  $permissions['delete any team content'] = array(
    'name' => 'delete any team content',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own game content'.
  $permissions['delete own game content'] = array(
    'name' => 'delete own game content',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own plate_appearance content'.
  $permissions['delete own plate_appearance content'] = array(
    'name' => 'delete own plate_appearance content',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own player content'.
  $permissions['delete own player content'] = array(
    'name' => 'delete own player content',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own team content'.
  $permissions['delete own team content'] = array(
    'name' => 'delete own team content',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in conference'.
  $permissions['delete terms in conference'] = array(
    'name' => 'delete terms in conference',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in handedness'.
  $permissions['delete terms in handedness'] = array(
    'name' => 'delete terms in handedness',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in pitch_result'.
  $permissions['delete terms in pitch_result'] = array(
    'name' => 'delete terms in pitch_result',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in pitch_type'.
  $permissions['delete terms in pitch_type'] = array(
    'name' => 'delete terms in pitch_type',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in plate_appearance_result'.
  $permissions['delete terms in plate_appearance_result'] = array(
    'name' => 'delete terms in plate_appearance_result',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in position'.
  $permissions['delete terms in position'] = array(
    'name' => 'delete terms in position',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in season'.
  $permissions['delete terms in season'] = array(
    'name' => 'delete terms in season',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in zone_number'.
  $permissions['delete terms in zone_number'] = array(
    'name' => 'delete terms in zone_number',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any game content'.
  $permissions['edit any game content'] = array(
    'name' => 'edit any game content',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any plate_appearance content'.
  $permissions['edit any plate_appearance content'] = array(
    'name' => 'edit any plate_appearance content',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any player content'.
  $permissions['edit any player content'] = array(
    'name' => 'edit any player content',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any team content'.
  $permissions['edit any team content'] = array(
    'name' => 'edit any team content',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own game content'.
  $permissions['edit own game content'] = array(
    'name' => 'edit own game content',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own plate_appearance content'.
  $permissions['edit own plate_appearance content'] = array(
    'name' => 'edit own plate_appearance content',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own player content'.
  $permissions['edit own player content'] = array(
    'name' => 'edit own player content',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own team content'.
  $permissions['edit own team content'] = array(
    'name' => 'edit own team content',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in conference'.
  $permissions['edit terms in conference'] = array(
    'name' => 'edit terms in conference',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in handedness'.
  $permissions['edit terms in handedness'] = array(
    'name' => 'edit terms in handedness',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in pitch_result'.
  $permissions['edit terms in pitch_result'] = array(
    'name' => 'edit terms in pitch_result',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in pitch_type'.
  $permissions['edit terms in pitch_type'] = array(
    'name' => 'edit terms in pitch_type',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in plate_appearance_result'.
  $permissions['edit terms in plate_appearance_result'] = array(
    'name' => 'edit terms in plate_appearance_result',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in position'.
  $permissions['edit terms in position'] = array(
    'name' => 'edit terms in position',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in season'.
  $permissions['edit terms in season'] = array(
    'name' => 'edit terms in season',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in zone_number'.
  $permissions['edit terms in zone_number'] = array(
    'name' => 'edit terms in zone_number',
    'roles' => array(
      'stats manager' => 'stats manager',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
