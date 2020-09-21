<?php

function _environment_variables_applysettings() {
  // apply settings based on environment
  $cenv = variable_get('environment_variables_environment', variable_get('environment_variables_autodetect_environment'));
  $envcs = variable_get('environment_variables_controlled_settings');
  $evs = variable_get('environment_variables');
  foreach($envcs as $key=>$val) {
    if($val) {
      if(! isset($evs[$cenv][$key]['disabled'])) {
        if(! module_exists($key) && strpos($key, '_core_') === FALSE) {
          module_enable(array($key));
        }
        if(isset($evs[$cenv][$key]['settings']) && is_array($evs[$cenv][$key]['settings'])) {
          foreach($evs[$cenv][$key]['settings'] as $skey=>$sval) {
            variable_set($skey, $sval);
          }
        }
      } else {
        if(module_exists($key)) {
          module_disable(array($key));
        }
      }
    }
  }
}
