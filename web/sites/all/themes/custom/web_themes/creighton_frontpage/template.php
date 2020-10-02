<?php
function creighton_frontpage_preprocess_html(&$variables) {
  //drupal_set_message('Hello!');
  drupal_add_js(drupal_get_path('theme', 'creighton_frontpage') . '/js/vendor/jquery-accessibleMegaMenu.js',
    array('group' => JS_LIBRARY,
      'every_page' => TRUE,
      'weight' => -1
    ));
}