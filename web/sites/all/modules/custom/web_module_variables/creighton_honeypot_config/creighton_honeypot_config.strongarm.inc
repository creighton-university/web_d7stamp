<?php
/**
 * @file
 * creighton_honeypot_config.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function creighton_honeypot_config_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_element_name';
  $strongarm->value = 'url';
  $export['honeypot_element_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_2tier_page_node_form';
  $strongarm->value = 0;
  $export['honeypot_form_2tier_page_node_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_academic_program_node_form';
  $strongarm->value = 0;
  $export['honeypot_form_academic_program_node_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_academic_unit_node_form';
  $strongarm->value = 0;
  $export['honeypot_form_academic_unit_node_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_content_page_node_form';
  $strongarm->value = 0;
  $export['honeypot_form_content_page_node_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_imported_calendar_node_form';
  $strongarm->value = 0;
  $export['honeypot_form_imported_calendar_node_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_imported_news_node_form';
  $strongarm->value = 0;
  $export['honeypot_form_imported_news_node_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_panel_node_form';
  $strongarm->value = 0;
  $export['honeypot_form_panel_node_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_program_details_node_form';
  $strongarm->value = 0;
  $export['honeypot_form_program_details_node_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_student_organizations_node_form';
  $strongarm->value = 0;
  $export['honeypot_form_student_organizations_node_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_user_pass';
  $strongarm->value = 0;
  $export['honeypot_form_user_pass'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_user_register_form';
  $strongarm->value = 0;
  $export['honeypot_form_user_register_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_webforms';
  $strongarm->value = 0;
  $export['honeypot_form_webforms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_form_webform_node_form';
  $strongarm->value = 0;
  $export['honeypot_form_webform_node_form'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_log';
  $strongarm->value = 1;
  $export['honeypot_log'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_protect_all_forms';
  $strongarm->value = 1;
  $export['honeypot_protect_all_forms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'honeypot_time_limit';
  $strongarm->value = '5';
  $export['honeypot_time_limit'] = $strongarm;

  return $export;
}
