<?php

function _environment_variables_initializecontrol() {
  // set variable to control all settings for autodetected environment; this is only run upon site install or site restore via backup and migrate
  $cenv = variable_get('environment_variables_environment', variable_get('environment_variables_autodetect_environment'));
  $evs = variable_get('environment_variables');
  $arr = array();
  foreach($evs[$cenv] as $key=>$val) {
    $arr[$key] = $key;
  }
  variable_set('environment_variables_controlled_settings', $arr);
}
