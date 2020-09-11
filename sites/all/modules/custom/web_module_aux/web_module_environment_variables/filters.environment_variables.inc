<?php

/**
 * @file
 * Custom filter for use with Backup and Migrate.
 */

class environment_variables_backup_migrate_filter extends backup_migrate_filter {
  /**
   * This is executed after a successful backup restore.
   */
  function restore_succeed($settings, $message, $params) {
    // include autodetect file and run autodetect script
    module_load_include('inc', 'environment_variables', 'environment_variables.autodetect');
    _environment_variables_autodetect_environment();

    // reset environment override to autodetected environment when restoring database from file
    variable_set('environment_variables_environment', variable_get('environment_variables_autodetect_environment'));

    // include initializecontrol file and run initializecontrol script to control all available settings for autodetected environment
    module_load_include('inc', 'environment_variables', 'environment_variables.initializecontrol');
    _environment_variables_initializecontrol();

    // include applysettings file and run applysettings script
    module_load_include('inc', 'environment_variables', 'environment_variables.applysettings');
    _environment_variables_applysettings();
  }
}
