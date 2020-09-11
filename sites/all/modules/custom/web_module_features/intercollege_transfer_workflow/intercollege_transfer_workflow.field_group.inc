<?php
/**
 * @file
 * intercollege_transfer_workflow.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function intercollege_transfer_workflow_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_hidden|node|intercollege_transfer|form';
  $field_group->group_name = 'group_hidden';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'intercollege_transfer';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Hidden',
    'weight' => '6',
    'children' => array(
      0 => 'field_last_name',
      1 => 'field_first_name',
      2 => 'field_current_mailing_address',
      3 => 'field_current_class',
      4 => 'field_cumulative_gpa',
      5 => 'field_current_advisor',
      6 => 'field_current_major',
      7 => 'field_workflow',
      8 => 'field_netid',
      9 => 'field_current_college_autofill',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Hidden',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => 'studentHiddenData',
        'classes' => 'group-hidden field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_hidden|node|intercollege_transfer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_iii|node|intercollege_transfer|form';
  $field_group->group_name = 'group_section_iii';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'intercollege_transfer';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section III',
    'weight' => '15',
    'children' => array(
      0 => 'field_future_academic_dean_name',
      1 => 'field_application_decision',
      2 => 'field_accepted_semester_year',
      3 => 'field_deferred_til',
      4 => 'field_decline_reason',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_section_iii|node|intercollege_transfer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section_ii|node|intercollege_transfer|form';
  $field_group->group_name = 'group_section_ii';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'intercollege_transfer';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section II',
    'weight' => '14',
    'children' => array(
      0 => 'field_current_academic_dean',
      1 => 'field_current_dean_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_section_ii|node|intercollege_transfer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_student_information|user|user|default';
  $field_group->group_name = 'group_student_information';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Student Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
      2 => 'field_current_mailing_address',
      3 => 'field_current_college_autofill',
      4 => 'field_current_class',
      5 => 'field_current_advisor',
      6 => 'field_cumulative_gpa',
      7 => 'field_current_major',
      8 => 'field_netid_account',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Student Information',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-student-information field-group-fieldset',
        'description' => 'Below is information pulled at every login from the NEST.',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_student_information|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_student_information|user|user|form';
  $field_group->group_name = 'group_student_information';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Student Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_netid',
      1 => 'field_first_name',
      2 => 'field_last_name',
      3 => 'field_current_mailing_address',
      4 => 'field_current_college_autofill',
      5 => 'field_current_class',
      6 => 'field_current_advisor',
      7 => 'field_cumulative_gpa',
      8 => 'field_current_major',
      9 => 'field_netid_account',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-student-information field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_student_information|user|user|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Hidden');
  t('Section II');
  t('Section III');
  t('Student Information');

  return $field_groups;
}
