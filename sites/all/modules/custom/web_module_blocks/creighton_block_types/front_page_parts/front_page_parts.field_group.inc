<?php
/**
 * @file
 * front_page_parts.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function front_page_parts_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_front_page_elements_link|node|front_page_elements|form';
  $field_group->group_name = 'group_front_page_elements_link';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'front_page_elements';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Front Page Elements Link',
    'weight' => '10',
    'children' => array(
      0 => 'field_fp_elements_external_link',
      1 => 'field_fp_elements_internal_link',
      2 => 'field_fp_elements_link_text',
      3 => 'field_fp_elements_link_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-front-page-elements-link field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_front_page_elements_link|node|front_page_elements|form'] = $field_group;

  return $export;
}
