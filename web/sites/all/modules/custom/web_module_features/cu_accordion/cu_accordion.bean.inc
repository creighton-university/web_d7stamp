<?php
/**
 * @file
 * cu_accordion.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function cu_accordion_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'page_title';
  $bean_type->label = 'Page Title';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['page_title'] = $bean_type;

  return $export;
}
