<?php
/**
 * @file
 * profiles_student_international.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function profiles_student_international_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'profile_student_international_view';
  $view->description = 'Views of international students';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Profile Student International View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Profile Student International View';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: International profile thumbnail */
  $handler->display->display_options['fields']['field_international_profile_thum']['id'] = 'field_international_profile_thum';
  $handler->display->display_options['fields']['field_international_profile_thum']['table'] = 'field_data_field_international_profile_thum';
  $handler->display->display_options['fields']['field_international_profile_thum']['field'] = 'field_international_profile_thum';
  $handler->display->display_options['fields']['field_international_profile_thum']['label'] = '';
  $handler->display->display_options['fields']['field_international_profile_thum']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_international_profile_thum']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_international_profile_thum']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_international_profile_thum']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_international_profile_coun']['id'] = 'field_international_profile_coun';
  $handler->display->display_options['fields']['field_international_profile_coun']['table'] = 'field_data_field_international_profile_coun';
  $handler->display->display_options['fields']['field_international_profile_coun']['field'] = 'field_international_profile_coun';
  $handler->display->display_options['fields']['field_international_profile_coun']['label'] = '';
  $handler->display->display_options['fields']['field_international_profile_coun']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_international_profile_coun']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Grad year */
  $handler->display->display_options['fields']['field_international_profile_grad']['id'] = 'field_international_profile_grad';
  $handler->display->display_options['fields']['field_international_profile_grad']['table'] = 'field_data_field_international_profile_grad';
  $handler->display->display_options['fields']['field_international_profile_grad']['field'] = 'field_international_profile_grad';
  $handler->display->display_options['fields']['field_international_profile_grad']['label'] = '';
  $handler->display->display_options['fields']['field_international_profile_grad']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_international_profile_grad']['alter']['text'] = 'Class of [field_international_profile_grad]';
  $handler->display->display_options['fields']['field_international_profile_grad']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_international_profile_grad']['element_label_colon'] = FALSE;
  /* Field: Content: Major */
  $handler->display->display_options['fields']['field_international_profile_majo']['id'] = 'field_international_profile_majo';
  $handler->display->display_options['fields']['field_international_profile_majo']['table'] = 'field_data_field_international_profile_majo';
  $handler->display->display_options['fields']['field_international_profile_majo']['field'] = 'field_international_profile_majo';
  $handler->display->display_options['fields']['field_international_profile_majo']['label'] = '';
  $handler->display->display_options['fields']['field_international_profile_majo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_international_profile_majo']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="profile-stud-int-image">[field_international_profile_thum]</div>
<div class="profile-stud-int-info">
<div class="profile-stud-int-info-country">[field_international_profile_coun]</div>
<div class="profile-stud-int-info-name">[title]</div>
<div class="profile-stud-int-info-grad-year">[field_international_profile_grad]</div>
<div class="profile-stud-int-info-major">[field_international_profile_majo]</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Country (field_international_profile_coun) */
  $handler->display->display_options['sorts']['field_international_profile_coun_value']['id'] = 'field_international_profile_coun_value';
  $handler->display->display_options['sorts']['field_international_profile_coun_value']['table'] = 'field_data_field_international_profile_coun';
  $handler->display->display_options['sorts']['field_international_profile_coun_value']['field'] = 'field_international_profile_coun_value';
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
    'profile_student_international' => 'profile_student_international',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['profile_student_international_view'] = $view;

  return $export;
}
