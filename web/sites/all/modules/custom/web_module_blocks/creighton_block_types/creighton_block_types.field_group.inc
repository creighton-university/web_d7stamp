<?php
/**
 * @file
 * creighton_block_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function creighton_block_types_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fp_audience_link_1|field_collection_item|field_front_page_audience|form';
  $field_group->group_name = 'group_fp_audience_link_1';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_front_page_audience';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_fp_audience_links';
  $field_group->data = array(
    'label' => 'Link 1',
    'weight' => '9',
    'children' => array(
      0 => 'field_fp_audience_external_link1',
      1 => 'field_fp_audience_internal_link1',
      2 => 'field_fp_audience_link_title_1',
      3 => 'field_fp_audience_link_type_1',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-fp-audience-link-1 field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_fp_audience_link_1|field_collection_item|field_front_page_audience|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fp_audience_link_2|field_collection_item|field_front_page_audience|form';
  $field_group->group_name = 'group_fp_audience_link_2';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_front_page_audience';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_fp_audience_links';
  $field_group->data = array(
    'label' => 'Link 2',
    'weight' => '10',
    'children' => array(
      0 => 'field_fp_audience_external_link2',
      1 => 'field_fp_audience_internal_link2',
      2 => 'field_fp_audience_link_title_2',
      3 => 'field_fp_audience_link_type_2',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-fp-audience-link-2 field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_fp_audience_link_2|field_collection_item|field_front_page_audience|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fp_audience_link_3|field_collection_item|field_front_page_audience|form';
  $field_group->group_name = 'group_fp_audience_link_3';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_front_page_audience';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_fp_audience_links';
  $field_group->data = array(
    'label' => 'Link 3',
    'weight' => '11',
    'children' => array(
      0 => 'field_fp_audience_external_link3',
      1 => 'field_fp_audience_internal_link3',
      2 => 'field_fp_audience_link_title_3',
      3 => 'field_fp_audience_link_type_3',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-fp-audience-link-3 field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_fp_audience_link_3|field_collection_item|field_front_page_audience|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fp_audience_link_4|field_collection_item|field_front_page_audience|form';
  $field_group->group_name = 'group_fp_audience_link_4';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_front_page_audience';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_fp_audience_links';
  $field_group->data = array(
    'label' => 'Link 4',
    'weight' => '12',
    'children' => array(
      0 => 'field_fp_audience_external_link4',
      1 => 'field_fp_audience_internal_link4',
      2 => 'field_fp_audience_link_title_4',
      3 => 'field_fp_audience_link_type_4',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-fp-audience-link-4 field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_fp_audience_link_4|field_collection_item|field_front_page_audience|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fp_audience_links|field_collection_item|field_front_page_audience|form';
  $field_group->group_name = 'group_fp_audience_links';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_front_page_audience';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Links',
    'weight' => '3',
    'children' => array(
      0 => 'group_fp_audience_link_1',
      1 => 'group_fp_audience_link_2',
      2 => 'group_fp_audience_link_3',
      3 => 'group_fp_audience_link_4',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-fp-audience-links field-group-tabs',
      ),
    ),
  );
  $field_groups['group_fp_audience_links|field_collection_item|field_front_page_audience|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fp_slide_multi_links|field_collection_item|field_front_page_slide_group_alt|form';
  $field_group->group_name = 'group_fp_slide_multi_links';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_front_page_slide_group_alt';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Multiple Links',
    'weight' => '3',
    'children' => array(
      0 => 'field_fp_slide_link_internal_1',
      1 => 'field_fp_slide_link_internal_2',
      2 => 'field_fp_slide_link_internal_3',
      3 => 'field_fp_slide_headline_multiple',
      4 => 'field_fp_text_multiple_links',
      5 => 'field_fp_slide_link_text_1',
      6 => 'field_fp_slide_link_text_2',
      7 => 'field_fp_slide_link_text_3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Multiple Links',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-fp-slide-multi-links field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_fp_slide_multi_links|field_collection_item|field_front_page_slide_group_alt|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fp_slide_one|field_collection_item|field_front_page_slide_group_alt|form';
  $field_group->group_name = 'group_fp_slide_one';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_front_page_slide_group_alt';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'One Link',
    'weight' => '2',
    'children' => array(
      0 => 'field_fp_slide_headline',
      1 => 'field_fp_slide_link_text',
      2 => 'field_external_link',
      3 => 'field_file_link',
      4 => 'field_int_link',
      5 => 'field_link_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'One Link',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-fp-slide-one field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_fp_slide_one|field_collection_item|field_front_page_slide_group_alt|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Link 1');
  t('Link 2');
  t('Link 3');
  t('Link 4');
  t('Links');
  t('Multiple Links');
  t('One Link');

  return $field_groups;
}
