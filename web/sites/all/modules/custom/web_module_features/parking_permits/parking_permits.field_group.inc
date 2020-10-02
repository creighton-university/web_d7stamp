<?php
/**
 * @file
 * parking_permits.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function parking_permits_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|user|user|default';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Detailed Information',
    'weight' => '31',
    'children' => array(
      0 => 'field_payroll_type',
      1 => 'field_person_type',
      2 => 'field_employee_number',
      3 => 'field_bill_periodic',
      4 => 'field_bill_annual',
      5 => 'field_full_time_part_time',
      6 => 'field_delvry_pt',
      7 => 'field_org',
      8 => 'field_rcomment',
      9 => 'field_hrms_date',
      10 => 'field_bldg',
      11 => 'field_hrms_reference',
      12 => 'field_date_of_last_hub_update',
      13 => 'field_mail_drop',
      14 => 'field_location',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Detailed Information',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_details|user|user|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Detailed Information');

  return $field_groups;
}
