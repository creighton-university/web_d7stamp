<?php
/**
 * @file
 * profiles_student_international.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function profiles_student_international_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_info|node|profile_student_international|default';
  $field_group->group_name = 'group_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'profile_student_international';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'contact info',
    'weight' => '2',
    'children' => array(
      0 => 'field_international_profile_city',
      1 => 'field_international_profile_stat',
      2 => 'field_international_profile_coun',
      3 => 'field_international_profile_majo',
      4 => 'field_international_profile_mino',
      5 => 'field_international_profile_grad',
      6 => 'field_international_profile_coll',
      7 => 'field_international_profile_emai',
      8 => 'field_international_profile_head',
      9 => 'field_international_profile_lang',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'contact info',
      'instance_settings' => array(
        'classes' => 'group-intl-student-contact-info',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_contact_info|node|profile_student_international|default'] = $field_group;

  return $export;
}
