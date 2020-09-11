<?php
/**
 * @file
 * creighton_campus_alerts.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function creighton_campus_alerts_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'block_header_alert';
  $bean_type->label = 'Header Alert';
  $bean_type->options = '';
  $bean_type->description = 'Block to have an alert message on the top of all pages.';
  $export['block_header_alert'] = $bean_type;

  return $export;
}
