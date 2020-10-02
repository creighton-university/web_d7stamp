<?php

function _environment_variables_autodetect_environment() {
  // determine environment
  global $base_url;
  if(strpos($base_url, '-dev') === FALSE) {
    if(strpos($base_url, '-stage') === FALSE) {
      variable_set('environment_variables_autodetect_environment', 'prod');
    } else {
      variable_set('environment_variables_autodetect_environment', 'stage');
    }
  } else {
    variable_set('environment_variables_autodetect_environment', 'dev');
  }
}
