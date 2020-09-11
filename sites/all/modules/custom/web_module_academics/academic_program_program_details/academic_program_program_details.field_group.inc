<?php
/**
 * @file
 * academic_program_program_details.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function academic_program_program_details_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_academic_interests|node|academic_program|form';
  $field_group->group_name = 'group_academic_interests';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'academic_program';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Academic Interests',
    'weight' => '13',
    'children' => array(
      0 => 'field_aca_prg_interests',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Academic Interests',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-academic-interests field-group-fieldset',
        'description' => 'Academic Interests Information.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_academic_interests|node|academic_program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_associates|node|academic_program|form';
  $field_group->group_name = 'group_associates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'academic_program';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Associates',
    'weight' => '15',
    'children' => array(
      0 => 'field_aca_prg_associates_online',
      1 => 'field_aca_prg_associates_page',
      2 => 'field_aca_prg_associates_title',
      3 => 'field_aca_prg_assoc_onlineonly',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Associates',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-associates field-group-fieldset',
        'description' => 'Associates Degree Information',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_associates|node|academic_program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bachelors|node|academic_program|form';
  $field_group->group_name = 'group_bachelors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'academic_program';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bachelors',
    'weight' => '17',
    'children' => array(
      0 => 'field_aca_prg_bachelors',
      1 => 'field_aca_prg_bachelors_online',
      2 => 'field_aca_prg_bachelors_page',
      3 => 'field_aca_prg_bach_onlineonly',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Bachelors',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-bachelors field-group-fieldset',
        'description' => 'Bachelors Information',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_bachelors|node|academic_program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_certifiate|node|academic_program|form';
  $field_group->group_name = 'group_certifiate';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'academic_program';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Certificate',
    'weight' => '14',
    'children' => array(
      0 => 'field_aca_prg_certificate_online',
      1 => 'field_aca_prg_certificate_page',
      2 => 'field_aca_prg_certificate_title',
      3 => 'field_aca_prg_cert_onlineonly',
      4 => 'field_aca_prg_cert_grad',
      5 => 'field_aca_prg_cert_undergrad',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Certificate',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-certificate field-group-fieldset',
        'description' => 'Certificate Information',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_certifiate|node|academic_program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doctorate|node|academic_program|form';
  $field_group->group_name = 'group_doctorate';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'academic_program';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Doctorate',
    'weight' => '19',
    'children' => array(
      0 => 'field_aca_prg_doctorate_online',
      1 => 'field_aca_prg_doctorate_page',
      2 => 'field_aca_prg_doctorate_title',
      3 => 'field_aca_prg_doc_onlineonly',
      4 => 'field_aca_prg_doc_doctorate',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Doctorate',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-doctorate field-group-fieldset',
        'description' => 'Doctorate Information',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_doctorate|node|academic_program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_masters|node|academic_program|form';
  $field_group->group_name = 'group_masters';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'academic_program';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Masters',
    'weight' => '18',
    'children' => array(
      0 => 'field_aca_prg_masters_online',
      1 => 'field_aca_prg_masters_page',
      2 => 'field_aca_prg_masters_title',
      3 => 'field_aca_prg_masters_onlineonly',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Masters',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-masters field-group-fieldset',
        'description' => 'Masters Information',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_masters|node|academic_program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_minor|node|academic_program|form';
  $field_group->group_name = 'group_minor';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'academic_program';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Minor',
    'weight' => '16',
    'children' => array(
      0 => 'field_aca_prg_minor_online',
      1 => 'field_aca_prg_minor_page',
      2 => 'field_aca_prg_minor_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Minor',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-minor field-group-fieldset',
        'description' => 'Minor Information',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_minor|node|academic_program|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_program_offerings|node|academic_program|form';
  $field_group->group_name = 'group_program_offerings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'academic_program';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Program Offerings',
    'weight' => '7',
    'children' => array(
      0 => 'field_aca_prg_accelerated',
      1 => 'field_aca_prg_offered_tag',
      2 => 'field_aca_prg_online',
      3 => 'field_aca_prg_professional',
      4 => 'field_aca_pgm_hybrid',
      5 => 'field_aca_prg_college_school',
      6 => 'field_aca_prg_dual_programs',
      7 => 'field_aca_bachelors_to_masters',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Program Offerings',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-program-offerings field-group-fieldset',
        'description' => 'Program Offerings Information',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_program_offerings|node|academic_program|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Academic Interests');
  t('Associates');
  t('Bachelors');
  t('Certificate');
  t('Doctorate');
  t('Masters');
  t('Minor');
  t('Program Offerings');

  return $field_groups;
}
