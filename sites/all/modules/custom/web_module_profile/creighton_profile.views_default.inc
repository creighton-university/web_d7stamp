<?php
/**
 * @file
 * creighton_profile.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function creighton_profile_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'profiles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Profiles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Administration';
  $handler->display->display_options['css_class'] = 'faculty-profile';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_profile2_type_target_id']['id'] = 'field_profile2_type_target_id';
  $handler->display->display_options['relationships']['field_profile2_type_target_id']['table'] = 'field_data_field_profile2_type';
  $handler->display->display_options['relationships']['field_profile2_type_target_id']['field'] = 'field_profile2_type_target_id';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_profile2_image']['id'] = 'field_profile2_image';
  $handler->display->display_options['fields']['field_profile2_image']['table'] = 'field_data_field_profile2_image';
  $handler->display->display_options['fields']['field_profile2_image']['field'] = 'field_profile2_image';
  $handler->display->display_options['fields']['field_profile2_image']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile2_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_profile2_image']['settings'] = array(
    'picture_group' => 'profile2',
    'fallback_image_style' => '',
    'image_link' => '',
    'colorbox' => 'profile2',
  );
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_profile2_name']['id'] = 'field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['table'] = 'field_data_field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['field'] = 'field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_profile2_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_profile2_position']['id'] = 'field_profile2_position';
  $handler->display->display_options['fields']['field_profile2_position']['table'] = 'field_data_field_profile2_position';
  $handler->display->display_options['fields']['field_profile2_position']['field'] = 'field_profile2_position';
  $handler->display->display_options['fields']['field_profile2_position']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_position']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_profile2_position']['separator'] = '<br>';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View Profile';
  /* Sort criterion: Name Components: Family */
  $handler->display->display_options['sorts']['field_profile2_name_family']['id'] = 'field_profile2_name_family';
  $handler->display->display_options['sorts']['field_profile2_name_family']['table'] = 'field_data_field_profile2_name';
  $handler->display->display_options['sorts']['field_profile2_name_family']['field'] = 'field_profile2_name_family';
  /* Sort criterion: Name Components: Given */
  $handler->display->display_options['sorts']['field_profile2_name_given']['id'] = 'field_profile2_name_given';
  $handler->display->display_options['sorts']['field_profile2_name_given']['table'] = 'field_data_field_profile2_name';
  $handler->display->display_options['sorts']['field_profile2_name_given']['field'] = 'field_profile2_name_given';
  /* Sort criterion: Name Components: Middle name(s) */
  $handler->display->display_options['sorts']['field_profile2_name_middle']['id'] = 'field_profile2_name_middle';
  $handler->display->display_options['sorts']['field_profile2_name_middle']['table'] = 'field_data_field_profile2_name';
  $handler->display->display_options['sorts']['field_profile2_name_middle']['field'] = 'field_profile2_name_middle';
  /* Sort criterion: Content revision: Updated date */
  $handler->display->display_options['sorts']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['sorts']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['sorts']['timestamp']['field'] = 'timestamp';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_profile2_type_target_id';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profile' => 'profile',
  );

  /* Display: Faculty - block */
  $handler = $view->new_display('block', 'Faculty - block', 'faculty');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'faculty-profile';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_profile2_image']['id'] = 'field_profile2_image';
  $handler->display->display_options['fields']['field_profile2_image']['table'] = 'field_data_field_profile2_image';
  $handler->display->display_options['fields']['field_profile2_image']['field'] = 'field_profile2_image';
  $handler->display->display_options['fields']['field_profile2_image']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_profile2_image']['element_class'] = 'image-wrapper';
  $handler->display->display_options['fields']['field_profile2_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile2_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_profile2_image']['settings'] = array(
    'picture_group' => 'profile2',
    'fallback_image_style' => '',
    'image_link' => '',
    'colorbox' => 'profile2',
  );
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_profile2_name']['id'] = 'field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['table'] = 'field_data_field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['field'] = 'field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_name']['alter']['text'] = '<h4>[field_profile2_name]</h4>';
  $handler->display->display_options['fields']['field_profile2_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_profile2_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_profile2_position']['id'] = 'field_profile2_position';
  $handler->display->display_options['fields']['field_profile2_position']['table'] = 'field_data_field_profile2_position';
  $handler->display->display_options['fields']['field_profile2_position']['field'] = 'field_profile2_position';
  $handler->display->display_options['fields']['field_profile2_position']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_position']['alter']['text'] = '<p class="profile-position">[field_profile2_position]</p>';
  $handler->display->display_options['fields']['field_profile2_position']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_position']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_position']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_position']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_profile2_position']['separator'] = '<br>';
  /* Field: Content: Specialties */
  $handler->display->display_options['fields']['field_profile2_specialties']['id'] = 'field_profile2_specialties';
  $handler->display->display_options['fields']['field_profile2_specialties']['table'] = 'field_data_field_profile2_specialties';
  $handler->display->display_options['fields']['field_profile2_specialties']['field'] = 'field_profile2_specialties';
  $handler->display->display_options['fields']['field_profile2_specialties']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_specialties']['alter']['text'] = '<div class="specialty-item">[field_profile2_specialties]</div>';
  $handler->display->display_options['fields']['field_profile2_specialties']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_profile2_specialties']['element_class'] = 'profile-specialties';
  $handler->display->display_options['fields']['field_profile2_specialties']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_specialties']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_specialties']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_profile2_specialties']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_profile2_specialties']['delta_offset'] = '0';
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_profile2_phone']['id'] = 'field_profile2_phone';
  $handler->display->display_options['fields']['field_profile2_phone']['table'] = 'field_data_field_profile2_phone';
  $handler->display->display_options['fields']['field_profile2_phone']['field'] = 'field_profile2_phone';
  /* Field: Content: E-mail */
  $handler->display->display_options['fields']['field_profile2_email']['id'] = 'field_profile2_email';
  $handler->display->display_options['fields']['field_profile2_email']['table'] = 'field_data_field_profile2_email';
  $handler->display->display_options['fields']['field_profile2_email']['field'] = 'field_profile2_email';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<p class="faculty-profile-link">[view_node]</p>';
  $handler->display->display_options['fields']['view_node']['element_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View Profile';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_profile2_type_target_id';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['default_argument_options']['argument'] = 'Faculty';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profile' => 'profile',
  );
  /* Filter criterion: Content: Additional Organization (field_additional_organization) */
  $handler->display->display_options['filters']['field_additional_organization_value']['id'] = 'field_additional_organization_value';
  $handler->display->display_options['filters']['field_additional_organization_value']['table'] = 'field_data_field_additional_organization';
  $handler->display->display_options['filters']['field_additional_organization_value']['field'] = 'field_additional_organization_value';
  $handler->display->display_options['filters']['field_additional_organization_value']['value'] = array(
    'faculty' => 'faculty',
  );

  /* Display: Adjunct - block */
  $handler = $view->new_display('block', 'Adjunct - block', 'adjunct');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_profile2_name']['id'] = 'field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['table'] = 'field_data_field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['field'] = 'field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile2_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_profile2_name']['alter']['path'] = '[view_node]';
  $handler->display->display_options['fields']['field_profile2_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_profile2_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '[field_profile2_name]';
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_profile2_type_target_id';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['default_argument_options']['argument'] = 'Adjunct Faculty';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';

  /* Display: Administration - block */
  $handler = $view->new_display('block', 'Administration - block', 'administration');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_profile2_image']['id'] = 'field_profile2_image';
  $handler->display->display_options['fields']['field_profile2_image']['table'] = 'field_data_field_profile2_image';
  $handler->display->display_options['fields']['field_profile2_image']['field'] = 'field_profile2_image';
  $handler->display->display_options['fields']['field_profile2_image']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_profile2_image']['element_class'] = 'image-wrapper';
  $handler->display->display_options['fields']['field_profile2_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile2_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_profile2_image']['settings'] = array(
    'picture_group' => 'profile2',
    'fallback_image_style' => '',
    'image_link' => '',
    'colorbox' => 'profile2',
  );
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_profile2_name']['id'] = 'field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['table'] = 'field_data_field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['field'] = 'field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_name']['alter']['text'] = '<h4>[field_profile2_name]</h4>';
  $handler->display->display_options['fields']['field_profile2_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_profile2_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_profile2_position']['id'] = 'field_profile2_position';
  $handler->display->display_options['fields']['field_profile2_position']['table'] = 'field_data_field_profile2_position';
  $handler->display->display_options['fields']['field_profile2_position']['field'] = 'field_profile2_position';
  $handler->display->display_options['fields']['field_profile2_position']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_position']['alter']['text'] = '<p class="profile-position">[field_profile2_position]</p>';
  $handler->display->display_options['fields']['field_profile2_position']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_position']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_position']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_position']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_profile2_position']['separator'] = '<br>';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<p class="faculty-profile-link">[view_node]</p>';
  $handler->display->display_options['fields']['view_node']['element_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View Profile';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_profile2_type_target_id';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['default_argument_options']['argument'] = 'Administration';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';

  /* Display: Support Staff - block */
  $handler = $view->new_display('block', 'Support Staff - block', 'support_staff');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_profile2_image']['id'] = 'field_profile2_image';
  $handler->display->display_options['fields']['field_profile2_image']['table'] = 'field_data_field_profile2_image';
  $handler->display->display_options['fields']['field_profile2_image']['field'] = 'field_profile2_image';
  $handler->display->display_options['fields']['field_profile2_image']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_profile2_image']['element_class'] = 'image-wrapper';
  $handler->display->display_options['fields']['field_profile2_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile2_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_profile2_image']['settings'] = array(
    'picture_group' => 'profile2',
    'fallback_image_style' => '',
    'image_link' => '',
    'colorbox' => 'profile2',
  );
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_profile2_name']['id'] = 'field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['table'] = 'field_data_field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['field'] = 'field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_name']['alter']['text'] = '<h4>[field_profile2_name]</h4>';
  $handler->display->display_options['fields']['field_profile2_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_profile2_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_profile2_position']['id'] = 'field_profile2_position';
  $handler->display->display_options['fields']['field_profile2_position']['table'] = 'field_data_field_profile2_position';
  $handler->display->display_options['fields']['field_profile2_position']['field'] = 'field_profile2_position';
  $handler->display->display_options['fields']['field_profile2_position']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_position']['alter']['text'] = '<p class="profile-position">[field_profile2_position]</p>';
  $handler->display->display_options['fields']['field_profile2_position']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_position']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_position']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_position']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_profile2_position']['separator'] = '<br>';
  /* Field: Content: E-mail */
  $handler->display->display_options['fields']['field_profile2_email']['id'] = 'field_profile2_email';
  $handler->display->display_options['fields']['field_profile2_email']['table'] = 'field_data_field_profile2_email';
  $handler->display->display_options['fields']['field_profile2_email']['field'] = 'field_profile2_email';
  $handler->display->display_options['fields']['field_profile2_email']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_email']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_email']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_email']['element_default_classes'] = FALSE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_profile2_phone']['id'] = 'field_profile2_phone';
  $handler->display->display_options['fields']['field_profile2_phone']['table'] = 'field_data_field_profile2_phone';
  $handler->display->display_options['fields']['field_profile2_phone']['field'] = 'field_profile2_phone';
  $handler->display->display_options['fields']['field_profile2_phone']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_phone']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_phone']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_phone']['element_default_classes'] = FALSE;
  /* Field: Content: Office Location */
  $handler->display->display_options['fields']['field_profile2_office_location']['id'] = 'field_profile2_office_location';
  $handler->display->display_options['fields']['field_profile2_office_location']['table'] = 'field_data_field_profile2_office_location';
  $handler->display->display_options['fields']['field_profile2_office_location']['field'] = 'field_profile2_office_location';
  $handler->display->display_options['fields']['field_profile2_office_location']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_office_location']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_office_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_office_location']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_office_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Name Components: Family */
  $handler->display->display_options['sorts']['field_profile2_name_family']['id'] = 'field_profile2_name_family';
  $handler->display->display_options['sorts']['field_profile2_name_family']['table'] = 'field_data_field_profile2_name';
  $handler->display->display_options['sorts']['field_profile2_name_family']['field'] = 'field_profile2_name_family';
  /* Sort criterion: Name Components: Given */
  $handler->display->display_options['sorts']['field_profile2_name_given']['id'] = 'field_profile2_name_given';
  $handler->display->display_options['sorts']['field_profile2_name_given']['table'] = 'field_data_field_profile2_name';
  $handler->display->display_options['sorts']['field_profile2_name_given']['field'] = 'field_profile2_name_given';
  /* Sort criterion: Name Components: Middle name(s) */
  $handler->display->display_options['sorts']['field_profile2_name_middle']['id'] = 'field_profile2_name_middle';
  $handler->display->display_options['sorts']['field_profile2_name_middle']['table'] = 'field_data_field_profile2_name';
  $handler->display->display_options['sorts']['field_profile2_name_middle']['field'] = 'field_profile2_name_middle';
  /* Sort criterion: Name Components: Family */
  $handler->display->display_options['sorts']['field_profile2_name_family_1']['id'] = 'field_profile2_name_family_1';
  $handler->display->display_options['sorts']['field_profile2_name_family_1']['table'] = 'field_data_field_profile2_name';
  $handler->display->display_options['sorts']['field_profile2_name_family_1']['field'] = 'field_profile2_name_family';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_profile2_type_target_id';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['default_argument_options']['argument'] = 'Support Staff';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';

  /* Display: Contact Info - Block */
  $handler = $view->new_display('block', 'Contact Info - Block', 'contact_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h3>Contact</h3>';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: E-mail */
  $handler->display->display_options['fields']['field_profile2_email']['id'] = 'field_profile2_email';
  $handler->display->display_options['fields']['field_profile2_email']['table'] = 'field_data_field_profile2_email';
  $handler->display->display_options['fields']['field_profile2_email']['field'] = 'field_profile2_email';
  $handler->display->display_options['fields']['field_profile2_email']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_email']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_email']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_profile2_email']['element_wrapper_class'] = 'profile-email';
  $handler->display->display_options['fields']['field_profile2_email']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_email']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_profile2_email']['type'] = 'email_spamspan';
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_profile2_phone']['id'] = 'field_profile2_phone';
  $handler->display->display_options['fields']['field_profile2_phone']['table'] = 'field_data_field_profile2_phone';
  $handler->display->display_options['fields']['field_profile2_phone']['field'] = 'field_profile2_phone';
  $handler->display->display_options['fields']['field_profile2_phone']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_phone']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_phone']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_profile2_phone']['element_wrapper_class'] = 'profile-phone';
  $handler->display->display_options['fields']['field_profile2_phone']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_phone']['hide_empty'] = TRUE;
  /* Field: Content: Office Location */
  $handler->display->display_options['fields']['field_profile2_office_location']['id'] = 'field_profile2_office_location';
  $handler->display->display_options['fields']['field_profile2_office_location']['table'] = 'field_data_field_profile2_office_location';
  $handler->display->display_options['fields']['field_profile2_office_location']['field'] = 'field_profile2_office_location';
  $handler->display->display_options['fields']['field_profile2_office_location']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_office_location']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_office_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_office_location']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['field_profile2_office_location']['element_wrapper_class'] = 'profile-office-location';
  $handler->display->display_options['fields']['field_profile2_office_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_office_location']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'profile' => 'profile',
  );
  $handler->display->display_options['arguments']['nid']['validate_options']['access'] = TRUE;

  /* Display: Leadership - block */
  $handler = $view->new_display('block', 'Leadership - block', 'leadership');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'faculty-profile';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_profile2_image']['id'] = 'field_profile2_image';
  $handler->display->display_options['fields']['field_profile2_image']['table'] = 'field_data_field_profile2_image';
  $handler->display->display_options['fields']['field_profile2_image']['field'] = 'field_profile2_image';
  $handler->display->display_options['fields']['field_profile2_image']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_profile2_image']['element_class'] = 'image-wrapper';
  $handler->display->display_options['fields']['field_profile2_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile2_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_profile2_image']['settings'] = array(
    'picture_group' => 'profile2',
    'fallback_image_style' => '',
    'image_link' => '',
    'colorbox' => 'profile2',
  );
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_profile2_name']['id'] = 'field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['table'] = 'field_data_field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['field'] = 'field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_name']['alter']['text'] = '<h4>[field_profile2_name]</h4>';
  $handler->display->display_options['fields']['field_profile2_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_profile2_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_profile2_position']['id'] = 'field_profile2_position';
  $handler->display->display_options['fields']['field_profile2_position']['table'] = 'field_data_field_profile2_position';
  $handler->display->display_options['fields']['field_profile2_position']['field'] = 'field_profile2_position';
  $handler->display->display_options['fields']['field_profile2_position']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_position']['alter']['text'] = '<p class="profile-position">[field_profile2_position]</p>';
  $handler->display->display_options['fields']['field_profile2_position']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_position']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_position']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_position']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_profile2_position']['separator'] = '<br>';
  /* Field: Content: Specialties */
  $handler->display->display_options['fields']['field_profile2_specialties']['id'] = 'field_profile2_specialties';
  $handler->display->display_options['fields']['field_profile2_specialties']['table'] = 'field_data_field_profile2_specialties';
  $handler->display->display_options['fields']['field_profile2_specialties']['field'] = 'field_profile2_specialties';
  $handler->display->display_options['fields']['field_profile2_specialties']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_specialties']['alter']['text'] = '<div class="specialty-item">[field_profile2_specialties]</div>';
  $handler->display->display_options['fields']['field_profile2_specialties']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_profile2_specialties']['element_class'] = 'profile-specialties';
  $handler->display->display_options['fields']['field_profile2_specialties']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_specialties']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_specialties']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_profile2_specialties']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_profile2_specialties']['delta_offset'] = '0';
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_profile2_phone']['id'] = 'field_profile2_phone';
  $handler->display->display_options['fields']['field_profile2_phone']['table'] = 'field_data_field_profile2_phone';
  $handler->display->display_options['fields']['field_profile2_phone']['field'] = 'field_profile2_phone';
  /* Field: Content: E-mail */
  $handler->display->display_options['fields']['field_profile2_email']['id'] = 'field_profile2_email';
  $handler->display->display_options['fields']['field_profile2_email']['table'] = 'field_data_field_profile2_email';
  $handler->display->display_options['fields']['field_profile2_email']['field'] = 'field_profile2_email';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<p class="faculty-profile-link">[view_node]</p>';
  $handler->display->display_options['fields']['view_node']['element_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View Profile';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_profile2_type_target_id';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['default_argument_options']['argument'] = 'Leadership';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profile' => 'profile',
  );

  /* Display: Werner - block */
  $handler = $view->new_display('block', 'Werner - block', 'werner');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'faculty-profile';
  $handler->display->display_options['display_description'] = 'Faculty + Werner Attribute';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_profile2_image']['id'] = 'field_profile2_image';
  $handler->display->display_options['fields']['field_profile2_image']['table'] = 'field_data_field_profile2_image';
  $handler->display->display_options['fields']['field_profile2_image']['field'] = 'field_profile2_image';
  $handler->display->display_options['fields']['field_profile2_image']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_profile2_image']['element_class'] = 'image-wrapper';
  $handler->display->display_options['fields']['field_profile2_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile2_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_profile2_image']['settings'] = array(
    'picture_group' => 'profile2',
    'fallback_image_style' => '',
    'image_link' => '',
    'colorbox' => 'profile2',
  );
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_profile2_name']['id'] = 'field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['table'] = 'field_data_field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['field'] = 'field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_name']['alter']['text'] = '<h4>[field_profile2_name]</h4>';
  $handler->display->display_options['fields']['field_profile2_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_profile2_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_profile2_position']['id'] = 'field_profile2_position';
  $handler->display->display_options['fields']['field_profile2_position']['table'] = 'field_data_field_profile2_position';
  $handler->display->display_options['fields']['field_profile2_position']['field'] = 'field_profile2_position';
  $handler->display->display_options['fields']['field_profile2_position']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_position']['alter']['text'] = '<p class="profile-position">[field_profile2_position]</p>';
  $handler->display->display_options['fields']['field_profile2_position']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_position']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_position']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_position']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_profile2_position']['separator'] = '<br>';
  /* Field: Content: Specialties */
  $handler->display->display_options['fields']['field_profile2_specialties']['id'] = 'field_profile2_specialties';
  $handler->display->display_options['fields']['field_profile2_specialties']['table'] = 'field_data_field_profile2_specialties';
  $handler->display->display_options['fields']['field_profile2_specialties']['field'] = 'field_profile2_specialties';
  $handler->display->display_options['fields']['field_profile2_specialties']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_specialties']['alter']['text'] = '<div class="specialty-item">[field_profile2_specialties]</div>';
  $handler->display->display_options['fields']['field_profile2_specialties']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_profile2_specialties']['element_class'] = 'profile-specialties';
  $handler->display->display_options['fields']['field_profile2_specialties']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_specialties']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_specialties']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_profile2_specialties']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_profile2_specialties']['delta_offset'] = '0';
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_profile2_phone']['id'] = 'field_profile2_phone';
  $handler->display->display_options['fields']['field_profile2_phone']['table'] = 'field_data_field_profile2_phone';
  $handler->display->display_options['fields']['field_profile2_phone']['field'] = 'field_profile2_phone';
  /* Field: Content: E-mail */
  $handler->display->display_options['fields']['field_profile2_email']['id'] = 'field_profile2_email';
  $handler->display->display_options['fields']['field_profile2_email']['table'] = 'field_data_field_profile2_email';
  $handler->display->display_options['fields']['field_profile2_email']['field'] = 'field_profile2_email';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<p class="faculty-profile-link">[view_node]</p>';
  $handler->display->display_options['fields']['view_node']['element_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View Profile';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_profile2_type_target_id';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['default_argument_options']['argument'] = 'Faculty';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profile' => 'profile',
  );
  /* Filter criterion: Content: Additional Organization (field_additional_organization) */
  $handler->display->display_options['filters']['field_additional_organization_value']['id'] = 'field_additional_organization_value';
  $handler->display->display_options['filters']['field_additional_organization_value']['table'] = 'field_data_field_additional_organization';
  $handler->display->display_options['filters']['field_additional_organization_value']['field'] = 'field_additional_organization_value';
  $handler->display->display_options['filters']['field_additional_organization_value']['value'] = array(
    'werner' => 'werner',
  );

  /* Display: Manual Taxonomy - block */
  $handler = $view->new_display('block', 'Manual Taxonomy - block', 'manualtaxonomy');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'faculty-profile';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_profile2_image']['id'] = 'field_profile2_image';
  $handler->display->display_options['fields']['field_profile2_image']['table'] = 'field_data_field_profile2_image';
  $handler->display->display_options['fields']['field_profile2_image']['field'] = 'field_profile2_image';
  $handler->display->display_options['fields']['field_profile2_image']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_profile2_image']['element_class'] = 'image-wrapper';
  $handler->display->display_options['fields']['field_profile2_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile2_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_profile2_image']['settings'] = array(
    'picture_group' => 'profile2',
    'fallback_image_style' => '',
    'image_link' => '',
    'colorbox' => 'profile2',
  );
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_profile2_name']['id'] = 'field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['table'] = 'field_data_field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['field'] = 'field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_name']['alter']['text'] = '<h4>[field_profile2_name]</h4>';
  $handler->display->display_options['fields']['field_profile2_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_profile2_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_profile2_position']['id'] = 'field_profile2_position';
  $handler->display->display_options['fields']['field_profile2_position']['table'] = 'field_data_field_profile2_position';
  $handler->display->display_options['fields']['field_profile2_position']['field'] = 'field_profile2_position';
  $handler->display->display_options['fields']['field_profile2_position']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_position']['alter']['text'] = '<p class="profile-position">[field_profile2_position]</p>';
  $handler->display->display_options['fields']['field_profile2_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_position']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_position']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_profile2_position']['separator'] = '<br>';
  /* Field: Content: Specialties */
  $handler->display->display_options['fields']['field_profile2_specialties']['id'] = 'field_profile2_specialties';
  $handler->display->display_options['fields']['field_profile2_specialties']['table'] = 'field_data_field_profile2_specialties';
  $handler->display->display_options['fields']['field_profile2_specialties']['field'] = 'field_profile2_specialties';
  $handler->display->display_options['fields']['field_profile2_specialties']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_specialties']['alter']['text'] = '<div class="specialty-item">[field_profile2_specialties]</div>';
  $handler->display->display_options['fields']['field_profile2_specialties']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_profile2_specialties']['element_class'] = 'profile-specialties';
  $handler->display->display_options['fields']['field_profile2_specialties']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_specialties']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_specialties']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_profile2_specialties']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_profile2_specialties']['delta_offset'] = '0';
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_profile2_phone']['id'] = 'field_profile2_phone';
  $handler->display->display_options['fields']['field_profile2_phone']['table'] = 'field_data_field_profile2_phone';
  $handler->display->display_options['fields']['field_profile2_phone']['field'] = 'field_profile2_phone';
  /* Field: Content: E-mail */
  $handler->display->display_options['fields']['field_profile2_email']['id'] = 'field_profile2_email';
  $handler->display->display_options['fields']['field_profile2_email']['table'] = 'field_data_field_profile2_email';
  $handler->display->display_options['fields']['field_profile2_email']['field'] = 'field_profile2_email';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<p class="faculty-profile-link">[view_node]</p>';
  $handler->display->display_options['fields']['view_node']['element_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View Profile';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="views-row views-row-1 views-row-odd views-row-first">
    <div class="fac-staff-ldr-profile-photo">
 [field_profile2_image]
 <div class="fac-staff-ldr-profile-content">
  <h4>[field_profile2_name]</h4>
      <p class="profile-positions">[field_profile2_position]</p>
        <div class="profile-specialties"><div class="specialty-item">[field_profile2_specialties]</div></div>    
      <p class="profile-email"></p><div class="field-content">[field_profile2_email]</div><p></p>
        <p class="profile-phone"></p><div class="field-content">[field_profile2_phone]</div><p></p>
  </div>
<p class="fac-ldr-profile-link">[view_node]</p>
  </div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_profile2_type_target_id';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['default_argument_options']['argument'] = 'Faculty';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profile' => 'profile',
  );

  /* Display: Manual Taxonomy Adjunct - block */
  $handler = $view->new_display('block', 'Manual Taxonomy Adjunct - block', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_profile2_name']['id'] = 'field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['table'] = 'field_data_field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['field'] = 'field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_profile2_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_profile2_name']['alter']['path'] = '[view_node]';
  $handler->display->display_options['fields']['field_profile2_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_profile2_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '[field_profile2_name]';
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_profile2_type_target_id';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['default_argument_options']['argument'] = 'Adjunct Faculty';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';

  /* Display: No profile link */
  $handler = $view->new_display('block', 'No profile link', 'no_profile_link');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'faculty-profile';
  $handler->display->display_options['display_description'] = 'No profile link';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_profile2_image']['id'] = 'field_profile2_image';
  $handler->display->display_options['fields']['field_profile2_image']['table'] = 'field_data_field_profile2_image';
  $handler->display->display_options['fields']['field_profile2_image']['field'] = 'field_profile2_image';
  $handler->display->display_options['fields']['field_profile2_image']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_profile2_image']['element_class'] = 'image-wrapper';
  $handler->display->display_options['fields']['field_profile2_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile2_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_profile2_image']['settings'] = array(
    'picture_group' => 'profile2',
    'fallback_image_style' => '',
    'image_link' => '',
    'colorbox' => 'profile2',
  );
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_profile2_name']['id'] = 'field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['table'] = 'field_data_field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['field'] = 'field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_name']['alter']['text'] = '<h4>[field_profile2_name]</h4>';
  $handler->display->display_options['fields']['field_profile2_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_profile2_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_profile2_position']['id'] = 'field_profile2_position';
  $handler->display->display_options['fields']['field_profile2_position']['table'] = 'field_data_field_profile2_position';
  $handler->display->display_options['fields']['field_profile2_position']['field'] = 'field_profile2_position';
  $handler->display->display_options['fields']['field_profile2_position']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_position']['alter']['text'] = '<p class="profile-position">[field_profile2_position]</p>';
  $handler->display->display_options['fields']['field_profile2_position']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_position']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_position']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_position']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_profile2_position']['separator'] = '<br>';
  /* Field: Content: E-mail */
  $handler->display->display_options['fields']['field_profile2_email']['id'] = 'field_profile2_email';
  $handler->display->display_options['fields']['field_profile2_email']['table'] = 'field_data_field_profile2_email';
  $handler->display->display_options['fields']['field_profile2_email']['field'] = 'field_profile2_email';
  $handler->display->display_options['fields']['field_profile2_email']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_email']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_email']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_email']['element_default_classes'] = FALSE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_profile2_phone']['id'] = 'field_profile2_phone';
  $handler->display->display_options['fields']['field_profile2_phone']['table'] = 'field_data_field_profile2_phone';
  $handler->display->display_options['fields']['field_profile2_phone']['field'] = 'field_profile2_phone';
  $handler->display->display_options['fields']['field_profile2_phone']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_phone']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_phone']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_phone']['element_default_classes'] = FALSE;
  /* Field: Content: Office Location */
  $handler->display->display_options['fields']['field_profile2_office_location']['id'] = 'field_profile2_office_location';
  $handler->display->display_options['fields']['field_profile2_office_location']['table'] = 'field_data_field_profile2_office_location';
  $handler->display->display_options['fields']['field_profile2_office_location']['field'] = 'field_profile2_office_location';
  $handler->display->display_options['fields']['field_profile2_office_location']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_office_location']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_office_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_office_location']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_office_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Name Components: Family */
  $handler->display->display_options['sorts']['field_profile2_name_family']['id'] = 'field_profile2_name_family';
  $handler->display->display_options['sorts']['field_profile2_name_family']['table'] = 'field_data_field_profile2_name';
  $handler->display->display_options['sorts']['field_profile2_name_family']['field'] = 'field_profile2_name_family';
  /* Sort criterion: Name Components: Given */
  $handler->display->display_options['sorts']['field_profile2_name_given']['id'] = 'field_profile2_name_given';
  $handler->display->display_options['sorts']['field_profile2_name_given']['table'] = 'field_data_field_profile2_name';
  $handler->display->display_options['sorts']['field_profile2_name_given']['field'] = 'field_profile2_name_given';
  /* Sort criterion: Name Components: Middle name(s) */
  $handler->display->display_options['sorts']['field_profile2_name_middle']['id'] = 'field_profile2_name_middle';
  $handler->display->display_options['sorts']['field_profile2_name_middle']['table'] = 'field_data_field_profile2_name';
  $handler->display->display_options['sorts']['field_profile2_name_middle']['field'] = 'field_profile2_name_middle';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_profile2_type_target_id';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['default_argument_options']['argument'] = 'Support Staff';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';

  /* Display: No profile link sort update */
  $handler = $view->new_display('block', 'No profile link sort update', 'no_profile_link_sort_updated');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'faculty-profile';
  $handler->display->display_options['display_description'] = 'No profile link sorted by updated date';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_profile2_image']['id'] = 'field_profile2_image';
  $handler->display->display_options['fields']['field_profile2_image']['table'] = 'field_data_field_profile2_image';
  $handler->display->display_options['fields']['field_profile2_image']['field'] = 'field_profile2_image';
  $handler->display->display_options['fields']['field_profile2_image']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_profile2_image']['element_class'] = 'image-wrapper';
  $handler->display->display_options['fields']['field_profile2_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile2_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_profile2_image']['settings'] = array(
    'picture_group' => 'profile2',
    'fallback_image_style' => '',
    'image_link' => '',
    'colorbox' => 'profile2',
  );
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_profile2_name']['id'] = 'field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['table'] = 'field_data_field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['field'] = 'field_profile2_name';
  $handler->display->display_options['fields']['field_profile2_name']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_name']['alter']['text'] = '<h4>[field_profile2_name]</h4>';
  $handler->display->display_options['fields']['field_profile2_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_name']['click_sort_column'] = 'title';
  $handler->display->display_options['fields']['field_profile2_name']['settings'] = array(
    'format' => 'default',
    'markup' => 0,
    'output' => 'default',
    'multiple' => 'default',
    'multiple_delimiter' => ', ',
    'multiple_and' => 'text',
    'multiple_delimiter_precedes_last' => 'never',
    'multiple_el_al_min' => '3',
    'multiple_el_al_first' => '1',
  );
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_profile2_position']['id'] = 'field_profile2_position';
  $handler->display->display_options['fields']['field_profile2_position']['table'] = 'field_data_field_profile2_position';
  $handler->display->display_options['fields']['field_profile2_position']['field'] = 'field_profile2_position';
  $handler->display->display_options['fields']['field_profile2_position']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_position']['alter']['text'] = '<p class="profile-position">[field_profile2_position]</p>';
  $handler->display->display_options['fields']['field_profile2_position']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_position']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_position']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_position']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_profile2_position']['separator'] = '<br>';
  /* Field: Content: E-mail */
  $handler->display->display_options['fields']['field_profile2_email']['id'] = 'field_profile2_email';
  $handler->display->display_options['fields']['field_profile2_email']['table'] = 'field_data_field_profile2_email';
  $handler->display->display_options['fields']['field_profile2_email']['field'] = 'field_profile2_email';
  $handler->display->display_options['fields']['field_profile2_email']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_email']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_email']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_email']['element_default_classes'] = FALSE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_profile2_phone']['id'] = 'field_profile2_phone';
  $handler->display->display_options['fields']['field_profile2_phone']['table'] = 'field_data_field_profile2_phone';
  $handler->display->display_options['fields']['field_profile2_phone']['field'] = 'field_profile2_phone';
  $handler->display->display_options['fields']['field_profile2_phone']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_phone']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_phone']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_phone']['element_default_classes'] = FALSE;
  /* Field: Content: Office Location */
  $handler->display->display_options['fields']['field_profile2_office_location']['id'] = 'field_profile2_office_location';
  $handler->display->display_options['fields']['field_profile2_office_location']['table'] = 'field_data_field_profile2_office_location';
  $handler->display->display_options['fields']['field_profile2_office_location']['field'] = 'field_profile2_office_location';
  $handler->display->display_options['fields']['field_profile2_office_location']['label'] = '';
  $handler->display->display_options['fields']['field_profile2_office_location']['element_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_office_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_profile2_office_location']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_profile2_office_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Sort criterion: Name Components: Family */
  $handler->display->display_options['sorts']['field_profile2_name_family']['id'] = 'field_profile2_name_family';
  $handler->display->display_options['sorts']['field_profile2_name_family']['table'] = 'field_data_field_profile2_name';
  $handler->display->display_options['sorts']['field_profile2_name_family']['field'] = 'field_profile2_name_family';
  /* Sort criterion: Name Components: Given */
  $handler->display->display_options['sorts']['field_profile2_name_given']['id'] = 'field_profile2_name_given';
  $handler->display->display_options['sorts']['field_profile2_name_given']['table'] = 'field_data_field_profile2_name';
  $handler->display->display_options['sorts']['field_profile2_name_given']['field'] = 'field_profile2_name_given';
  /* Sort criterion: Name Components: Middle name(s) */
  $handler->display->display_options['sorts']['field_profile2_name_middle']['id'] = 'field_profile2_name_middle';
  $handler->display->display_options['sorts']['field_profile2_name_middle']['table'] = 'field_data_field_profile2_name';
  $handler->display->display_options['sorts']['field_profile2_name_middle']['field'] = 'field_profile2_name_middle';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_profile2_type_target_id';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['default_argument_options']['argument'] = 'Support Staff';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $export['profiles'] = $view;

  return $export;
}
