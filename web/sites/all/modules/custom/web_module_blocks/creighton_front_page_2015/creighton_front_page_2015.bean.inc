<?php
/**
 * @file
 * creighton_front_page_2015.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function creighton_front_page_2015_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'footer_contact_info_and_links';
  $bean_type->label = 'Footer Contact Info and Links';
  $bean_type->options = '';
  $bean_type->description = 'Footer Contact Info and Links';
  $export['footer_contact_info_and_links'] = $bean_type;

  return $export;
}
