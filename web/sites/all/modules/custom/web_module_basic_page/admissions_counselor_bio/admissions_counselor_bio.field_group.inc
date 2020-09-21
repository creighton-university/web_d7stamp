<?php
/**
 * @file
 * admissions_counselor_bio.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function admissions_counselor_bio_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_counselor_contact_info|node|counselor|default';
  $field_group->group_name = 'group_counselor_contact_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'counselor';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'counselor-contact-info',
    'weight' => '1',
    'children' => array(
      0 => 'field_email_link',
      1 => 'field_fax',
      2 => 'field_full_name',
      3 => 'field_instant_messaging',
      4 => 'field_phone',
      5 => 'field_title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'counselor-contact-info',
      'instance_settings' => array(
        'classes' => 'group-counselor-contact-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_counselor_contact_info|node|counselor|default'] = $field_group;

  return $export;
}
