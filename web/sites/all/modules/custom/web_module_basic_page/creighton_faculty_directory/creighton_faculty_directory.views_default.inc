<?php
/**
 * @file
 * creighton_faculty_directory.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function creighton_faculty_directory_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'faculty_directory_list_new_json';
  $view->description = '';
  $view->tag = 'faculty-directory';
  $view->base_table = 'json';
  $view->human_name = 'faculty-directory-list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'faculty-directory-profile';
  $handler->display->display_options['css_class'] = 'faculty-directory-list-item';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['json_file'] = 'https://dms.creighton.edu/rest/faculty-list.php';
  $handler->display->display_options['query']['options']['row_apath'] = '/';
  $handler->display->display_options['query']['options']['enable_pagination_query_parameters'] = 0;
  $handler->display->display_options['query']['options']['show_errors'] = 1;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<!-- CSS for faculty-list -->
<style>
.view-id-faculty_directory_list_new_json .view-content {
	display:flex;
	flex-wrap: wrap;
}
.view-id-faculty_directory_list_new_json .view-content .views-row {
	display:flex;
	flex-direction: column;
	flex-wrap: wrap;
	align-items: flex-start;
	justify-content: flex-start;
}

.view-id-faculty_directory_list_new_json .view-content .views-row p.fac-ldr-profile-link {
  	display:flex;
  align-self: flex-end;
  flex-grow:1; /* default 0 */
}
.view-id-faculty_directory_list_new_json .view-content .views-row p.fac-ldr-profile-link a {
	align-self: flex-end;
}
.view-id-faculty_directory_list_new_json .view-content .views-row .fac-staff-ldr-profile-photo {
	flex: 0 0 auto;
}
</style>
';
  $handler->display->display_options['footer']['area']['format'] = 'full_html_plus_media';
  /* Field: field_faculty_first_name: value */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'json';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = 'First Name';
  $handler->display->display_options['fields']['value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value']['key'] = 'field_faculty_first_name';
  /* Field: field_faculty_middle_name: value */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'json';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = 'Middle Name';
  $handler->display->display_options['fields']['value_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_1']['key'] = 'field_faculty_middle_name';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Middle Initial';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$midInitial = substr($row->value_1,0,1) . ". ";
return $midInitial;';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php echo $value; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: field_faculty_last_name: value */
  $handler->display->display_options['fields']['value_2']['id'] = 'value_2';
  $handler->display->display_options['fields']['value_2']['table'] = 'json';
  $handler->display->display_options['fields']['value_2']['field'] = 'value';
  $handler->display->display_options['fields']['value_2']['label'] = 'Last Name';
  $handler->display->display_options['fields']['value_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_2']['key'] = 'field_faculty_last_name';
  /* Field: field_faculty_name_suffix: value */
  $handler->display->display_options['fields']['value_3']['id'] = 'value_3';
  $handler->display->display_options['fields']['value_3']['table'] = 'json';
  $handler->display->display_options['fields']['value_3']['field'] = 'value';
  $handler->display->display_options['fields']['value_3']['label'] = 'Suffix';
  $handler->display->display_options['fields']['value_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_3']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['value_3']['alter']['text'] = ', [value_3]';
  $handler->display->display_options['fields']['value_3']['key'] = 'field_faculty_name_suffix';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[value] [php][value_2][value_3]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: field_faculty_email: value */
  $handler->display->display_options['fields']['value_4']['id'] = 'value_4';
  $handler->display->display_options['fields']['value_4']['table'] = 'json';
  $handler->display->display_options['fields']['value_4']['field'] = 'value';
  $handler->display->display_options['fields']['value_4']['label'] = '';
  $handler->display->display_options['fields']['value_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_4']['key'] = 'field_faculty_email';
  /* Field: rank/field_fc_rank_his_academic_rank: value */
  $handler->display->display_options['fields']['value_5']['id'] = 'value_5';
  $handler->display->display_options['fields']['value_5']['table'] = 'json';
  $handler->display->display_options['fields']['value_5']['field'] = 'value';
  $handler->display->display_options['fields']['value_5']['label'] = '';
  $handler->display->display_options['fields']['value_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_5']['key'] = 'rank/field_fc_rank_his_academic_rank';
  /* Field: school: value */
  $handler->display->display_options['fields']['value_6']['id'] = 'value_6';
  $handler->display->display_options['fields']['value_6']['table'] = 'json';
  $handler->display->display_options['fields']['value_6']['field'] = 'value';
  $handler->display->display_options['fields']['value_6']['label'] = '';
  $handler->display->display_options['fields']['value_6']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_6']['key'] = 'school';
  /* Field: specializations/specializations: value */
  $handler->display->display_options['fields']['value_7']['id'] = 'value_7';
  $handler->display->display_options['fields']['value_7']['table'] = 'json';
  $handler->display->display_options['fields']['value_7']['field'] = 'value';
  $handler->display->display_options['fields']['value_7']['label'] = '';
  $handler->display->display_options['fields']['value_7']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_7']['key'] = 'specializations/specializations';
  /* Field: field_faculty_work_number: value */
  $handler->display->display_options['fields']['value_8']['id'] = 'value_8';
  $handler->display->display_options['fields']['value_8']['table'] = 'json';
  $handler->display->display_options['fields']['value_8']['field'] = 'value';
  $handler->display->display_options['fields']['value_8']['label'] = '';
  $handler->display->display_options['fields']['value_8']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_8']['key'] = 'field_faculty_work_number';
  /* Field: nid: value */
  $handler->display->display_options['fields']['value_9']['id'] = 'value_9';
  $handler->display->display_options['fields']['value_9']['table'] = 'json';
  $handler->display->display_options['fields']['value_9']['field'] = 'value';
  $handler->display->display_options['fields']['value_9']['label'] = '';
  $handler->display->display_options['fields']['value_9']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_9']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_9']['key'] = 'nid';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<a href="http://drupalvm.dev/faculty-directory-profile/[value_9]">View Profile</a>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Sort criterion: field_faculty_last_name: value */
  $handler->display->display_options['sorts']['value']['id'] = 'value';
  $handler->display->display_options['sorts']['value']['table'] = 'json';
  $handler->display->display_options['sorts']['value']['field'] = 'value';
  $handler->display->display_options['sorts']['value']['key'] = 'field_faculty_last_name';
  /* Contextual filter: school-json-query */
  $handler->display->display_options['arguments']['query_string']['id'] = 'query_string';
  $handler->display->display_options['arguments']['query_string']['table'] = 'json';
  $handler->display->display_options['arguments']['query_string']['field'] = 'query_string';
  $handler->display->display_options['arguments']['query_string']['ui_name'] = 'school-json-query';
  $handler->display->display_options['arguments']['query_string']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['query_string']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['query_string']['name'] = 'school';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Json: Query String */
  $handler->display->display_options['arguments']['query_string']['id'] = 'query_string';
  $handler->display->display_options['arguments']['query_string']['table'] = 'json';
  $handler->display->display_options['arguments']['query_string']['field'] = 'query_string';
  $handler->display->display_options['arguments']['query_string']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['query_string']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['query_string']['name'] = 'school';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'academics/faculty/faculty-directory-list';

  /* Display: List with Tags */
  $handler = $view->new_display('block', 'List with Tags', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: field_faculty_first_name: value */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'json';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = 'First Name';
  $handler->display->display_options['fields']['value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value']['key'] = 'field_faculty_first_name';
  /* Field: field_faculty_middle_name: value */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'json';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = 'Middle Name';
  $handler->display->display_options['fields']['value_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_1']['key'] = 'field_faculty_middle_name';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Middle Initial';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$midInitial = substr($row->value_1,0,1) . ". ";
return $midInitial;';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php echo $value; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: field_faculty_last_name: value */
  $handler->display->display_options['fields']['value_2']['id'] = 'value_2';
  $handler->display->display_options['fields']['value_2']['table'] = 'json';
  $handler->display->display_options['fields']['value_2']['field'] = 'value';
  $handler->display->display_options['fields']['value_2']['label'] = 'Last Name';
  $handler->display->display_options['fields']['value_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_2']['key'] = 'field_faculty_last_name';
  /* Field: field_faculty_name_suffix: value */
  $handler->display->display_options['fields']['value_3']['id'] = 'value_3';
  $handler->display->display_options['fields']['value_3']['table'] = 'json';
  $handler->display->display_options['fields']['value_3']['field'] = 'value';
  $handler->display->display_options['fields']['value_3']['label'] = 'Suffix';
  $handler->display->display_options['fields']['value_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_3']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['value_3']['alter']['text'] = ', [value_3]';
  $handler->display->display_options['fields']['value_3']['key'] = 'field_faculty_name_suffix';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[value] [php][value_2][value_3]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: field_faculty_email: value */
  $handler->display->display_options['fields']['value_4']['id'] = 'value_4';
  $handler->display->display_options['fields']['value_4']['table'] = 'json';
  $handler->display->display_options['fields']['value_4']['field'] = 'value';
  $handler->display->display_options['fields']['value_4']['label'] = '';
  $handler->display->display_options['fields']['value_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_4']['key'] = 'field_faculty_email';
  /* Field: rank/field_fc_rank_his_academic_rank: value */
  $handler->display->display_options['fields']['value_5']['id'] = 'value_5';
  $handler->display->display_options['fields']['value_5']['table'] = 'json';
  $handler->display->display_options['fields']['value_5']['field'] = 'value';
  $handler->display->display_options['fields']['value_5']['label'] = '';
  $handler->display->display_options['fields']['value_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_5']['key'] = 'rank/field_fc_rank_his_academic_rank';
  /* Field: school: value */
  $handler->display->display_options['fields']['value_6']['id'] = 'value_6';
  $handler->display->display_options['fields']['value_6']['table'] = 'json';
  $handler->display->display_options['fields']['value_6']['field'] = 'value';
  $handler->display->display_options['fields']['value_6']['label'] = '';
  $handler->display->display_options['fields']['value_6']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_6']['key'] = 'school';
  /* Field: specializations/specializations: value */
  $handler->display->display_options['fields']['value_7']['id'] = 'value_7';
  $handler->display->display_options['fields']['value_7']['table'] = 'json';
  $handler->display->display_options['fields']['value_7']['field'] = 'value';
  $handler->display->display_options['fields']['value_7']['label'] = '';
  $handler->display->display_options['fields']['value_7']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_7']['key'] = 'specializations/specializations';
  /* Field: field_faculty_work_number: value */
  $handler->display->display_options['fields']['value_8']['id'] = 'value_8';
  $handler->display->display_options['fields']['value_8']['table'] = 'json';
  $handler->display->display_options['fields']['value_8']['field'] = 'value';
  $handler->display->display_options['fields']['value_8']['label'] = '';
  $handler->display->display_options['fields']['value_8']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_8']['key'] = 'field_faculty_work_number';
  /* Field: nid: value */
  $handler->display->display_options['fields']['value_9']['id'] = 'value_9';
  $handler->display->display_options['fields']['value_9']['table'] = 'json';
  $handler->display->display_options['fields']['value_9']['field'] = 'value';
  $handler->display->display_options['fields']['value_9']['label'] = '';
  $handler->display->display_options['fields']['value_9']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_9']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_9']['key'] = 'nid';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<a href="http://drupalvm.dev/faculty-directory-profile/[value_9]">View Profile</a>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: web_tagging: value */
  $handler->display->display_options['fields']['value_10']['id'] = 'value_10';
  $handler->display->display_options['fields']['value_10']['table'] = 'json';
  $handler->display->display_options['fields']['value_10']['field'] = 'value';
  $handler->display->display_options['fields']['value_10']['label'] = 'web_tagging';
  $handler->display->display_options['fields']['value_10']['key'] = 'web_tagging';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Json: Query String */
  $handler->display->display_options['arguments']['query_string']['id'] = 'query_string';
  $handler->display->display_options['arguments']['query_string']['table'] = 'json';
  $handler->display->display_options['arguments']['query_string']['field'] = 'query_string';
  $handler->display->display_options['arguments']['query_string']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['query_string']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['query_string']['name'] = 'tag';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $export['faculty_directory_list_new_json'] = $view;

  $view = new view();
  $view->name = 'faculty_directory_profile';
  $view->description = 'individual faculty profile';
  $view->tag = 'faculty-directory';
  $view->base_table = 'json';
  $view->human_name = 'faculty-directory-profile';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'faculty-directory-profile';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['json_file'] = 'https://dms.creighton.edu/rest/faculty-profile.php';
  $handler->display->display_options['query']['options']['row_apath'] = '/';
  $handler->display->display_options['query']['options']['enable_pagination_query_parameters'] = 0;
  $handler->display->display_options['query']['options']['show_errors'] = 1;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: PHP sets title from fields */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['ui_name'] = 'PHP sets title from fields';
  $handler->display->display_options['header']['php']['php_output'] = '<?php 
  $view->build_info[\'title\'] = "{$view->result[0]->field_faculty_first_name} ";
  if(strlen($view->result[0]->views_php_2) && ctype_alpha($view->result[0]->views_php_2))
    $view->build_info[\'title\'] .= $view->result[0]->views_php_2 . ". ";
  $view->build_info[\'title\'] .= $view->result[0]->field_faculty_last_name;
  if(isset($view->result[0]->field_faculty_credential) && strlen($view->result[0]->field_faculty_credential)) {
    $view->build_info[\'title\'] .= ", {$view->result[0]->field_faculty_credential}";
  }
  if(isset($view->result[0]->field_faculty_name_suffix) && strlen($view->result[0]->field_faculty_name_suffix)) {
    $view->build_info[\'title\'] .= ", {$view->result[0]->field_faculty_name_suffix}";
  }
?>';
  /* Field: field_faculty_first_name: value */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'json';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = 'First Name';
  $handler->display->display_options['fields']['value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value']['key'] = 'field_faculty_first_name';
  /* Field: field_faculty_middle_name: value */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'json';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = 'Middle Name';
  $handler->display->display_options['fields']['value_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_1']['key'] = 'field_faculty_middle_name';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Middle Initial';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['php']['alter']['text'] = '[php].';
  $handler->display->display_options['fields']['php']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$midInitial = substr($row->value_1,0,1);
return $midInitial;';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php echo $value; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: field_faculty_last_name: value */
  $handler->display->display_options['fields']['value_2']['id'] = 'value_2';
  $handler->display->display_options['fields']['value_2']['table'] = 'json';
  $handler->display->display_options['fields']['value_2']['field'] = 'value';
  $handler->display->display_options['fields']['value_2']['label'] = 'Last Name';
  $handler->display->display_options['fields']['value_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_2']['key'] = 'field_faculty_last_name';
  /* Field: field_faculty_name_suffix: value */
  $handler->display->display_options['fields']['value_3']['id'] = 'value_3';
  $handler->display->display_options['fields']['value_3']['table'] = 'json';
  $handler->display->display_options['fields']['value_3']['field'] = 'value';
  $handler->display->display_options['fields']['value_3']['label'] = 'Suffix';
  $handler->display->display_options['fields']['value_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_3']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['value_3']['alter']['text'] = ', [value_3]';
  $handler->display->display_options['fields']['value_3']['key'] = 'field_faculty_name_suffix';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Contact [value] [php][value_2][value_3]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: field_faculty_email: value */
  $handler->display->display_options['fields']['value_4']['id'] = 'value_4';
  $handler->display->display_options['fields']['value_4']['table'] = 'json';
  $handler->display->display_options['fields']['value_4']['field'] = 'value';
  $handler->display->display_options['fields']['value_4']['label'] = '';
  $handler->display->display_options['fields']['value_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_4']['key'] = 'field_faculty_email';
  /* Contextual filter: fid */
  $handler->display->display_options['arguments']['query_string']['id'] = 'query_string';
  $handler->display->display_options['arguments']['query_string']['table'] = 'json';
  $handler->display->display_options['arguments']['query_string']['field'] = 'query_string';
  $handler->display->display_options['arguments']['query_string']['ui_name'] = 'fid';
  $handler->display->display_options['arguments']['query_string']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['query_string']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['query_string']['name'] = 'fid';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Json: Query String */
  $handler->display->display_options['arguments']['query_string']['id'] = 'query_string';
  $handler->display->display_options['arguments']['query_string']['table'] = 'json';
  $handler->display->display_options['arguments']['query_string']['field'] = 'query_string';
  $handler->display->display_options['arguments']['query_string']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['query_string']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['query_string']['name'] = 'fid';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'faculty-directory-profile';

  /* Display: faculty-profile-sidebar-block-contact */
  $handler = $view->new_display('block', 'faculty-profile-sidebar-block-contact', 'block_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<div class="block--copy-block sidebar-item contact-us">
</div>
';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'function writeJQ() {
return "<script>var sideblockTemp = jQuery("#faculty-profile-sideblock").html();jQuery(".block--copy-block.sidebar-item.contact-us").html(sideblockTemp);</script>";
}';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
print writeJQ();
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $export['faculty_directory_profile'] = $view;

  $view = new view();
  $view->name = 'faculty_directory_profile_sidebar';
  $view->description = '';
  $view->tag = 'faculty-directory';
  $view->base_table = 'node';
  $view->human_name = 'faculty-directory-profile-sidebar';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'faculty-directory-profile-sidebar';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
print \'<div class="block--copy-block sidebar-item contact-us"></div><script>var sideblockTemp = jQuery("#faculty-profile-sideblock").html();jQuery(".block--copy-block.sidebar-item.contact-us").html(sideblockTemp);</script>\';
?>
';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['faculty_directory_profile_sidebar'] = $view;

  $view = new view();
  $view->name = 'faculty_directory_search';
  $view->description = 'Search result list of faculty';
  $view->tag = 'faculty-directory';
  $view->base_table = 'json';
  $view->human_name = 'faculty-directory-search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'faculty-directory-profile';
  $handler->display->display_options['css_class'] = 'faculty-directory-search-item';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['json_file'] = 'https://dms.creighton.edu/rest/faculty-list.php';
  $handler->display->display_options['query']['options']['row_apath'] = '/';
  $handler->display->display_options['query']['options']['enable_pagination_query_parameters'] = 0;
  $handler->display->display_options['query']['options']['show_errors'] = 1;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: field_faculty_first_name: value */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'json';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = 'First Name';
  $handler->display->display_options['fields']['value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value']['key'] = 'field_faculty_first_name';
  /* Field: field_faculty_middle_name: value */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'json';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = 'Middle Name';
  $handler->display->display_options['fields']['value_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_1']['key'] = 'field_faculty_middle_name';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Middle Initial';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = '$midInitial = substr($row->value_1,0,1) . ". ";
return $midInitial;';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php echo $value; ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: field_faculty_last_name: value */
  $handler->display->display_options['fields']['value_2']['id'] = 'value_2';
  $handler->display->display_options['fields']['value_2']['table'] = 'json';
  $handler->display->display_options['fields']['value_2']['field'] = 'value';
  $handler->display->display_options['fields']['value_2']['label'] = 'Last Name';
  $handler->display->display_options['fields']['value_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_2']['key'] = 'field_faculty_last_name';
  /* Field: field_faculty_name_suffix: value */
  $handler->display->display_options['fields']['value_3']['id'] = 'value_3';
  $handler->display->display_options['fields']['value_3']['table'] = 'json';
  $handler->display->display_options['fields']['value_3']['field'] = 'value';
  $handler->display->display_options['fields']['value_3']['label'] = 'Suffix';
  $handler->display->display_options['fields']['value_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_3']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['value_3']['alter']['text'] = ', [value_3]';
  $handler->display->display_options['fields']['value_3']['key'] = 'field_faculty_name_suffix';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[value] [php][value_2][value_3]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: field_faculty_email: value */
  $handler->display->display_options['fields']['value_4']['id'] = 'value_4';
  $handler->display->display_options['fields']['value_4']['table'] = 'json';
  $handler->display->display_options['fields']['value_4']['field'] = 'value';
  $handler->display->display_options['fields']['value_4']['label'] = '';
  $handler->display->display_options['fields']['value_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_4']['key'] = 'field_faculty_email';
  /* Field: rank/field_fc_rank_his_academic_rank: value */
  $handler->display->display_options['fields']['value_5']['id'] = 'value_5';
  $handler->display->display_options['fields']['value_5']['table'] = 'json';
  $handler->display->display_options['fields']['value_5']['field'] = 'value';
  $handler->display->display_options['fields']['value_5']['label'] = '';
  $handler->display->display_options['fields']['value_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_5']['key'] = 'rank/field_fc_rank_his_academic_rank';
  /* Field: school: value */
  $handler->display->display_options['fields']['value_6']['id'] = 'value_6';
  $handler->display->display_options['fields']['value_6']['table'] = 'json';
  $handler->display->display_options['fields']['value_6']['field'] = 'value';
  $handler->display->display_options['fields']['value_6']['label'] = '';
  $handler->display->display_options['fields']['value_6']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_6']['key'] = 'school';
  /* Field: specializations/specializations: value */
  $handler->display->display_options['fields']['value_7']['id'] = 'value_7';
  $handler->display->display_options['fields']['value_7']['table'] = 'json';
  $handler->display->display_options['fields']['value_7']['field'] = 'value';
  $handler->display->display_options['fields']['value_7']['label'] = '';
  $handler->display->display_options['fields']['value_7']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_7']['key'] = 'specializations/specializations';
  /* Field: field_faculty_work_number: value */
  $handler->display->display_options['fields']['value_8']['id'] = 'value_8';
  $handler->display->display_options['fields']['value_8']['table'] = 'json';
  $handler->display->display_options['fields']['value_8']['field'] = 'value';
  $handler->display->display_options['fields']['value_8']['label'] = '';
  $handler->display->display_options['fields']['value_8']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_8']['key'] = 'field_faculty_work_number';
  /* Field: nid: value */
  $handler->display->display_options['fields']['value_9']['id'] = 'value_9';
  $handler->display->display_options['fields']['value_9']['table'] = 'json';
  $handler->display->display_options['fields']['value_9']['field'] = 'value';
  $handler->display->display_options['fields']['value_9']['label'] = '';
  $handler->display->display_options['fields']['value_9']['exclude'] = TRUE;
  $handler->display->display_options['fields']['value_9']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value_9']['key'] = 'nid';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<a href="http://drupalvm.dev/faculty-directory-profile/[value_9]">View Profile</a>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Sort criterion: field_faculty_last_name: value */
  $handler->display->display_options['sorts']['value']['id'] = 'value';
  $handler->display->display_options['sorts']['value']['table'] = 'json';
  $handler->display->display_options['sorts']['value']['field'] = 'value';
  $handler->display->display_options['sorts']['value']['key'] = 'field_faculty_last_name';
  /* Contextual filter: school-json-query */
  $handler->display->display_options['arguments']['query_string']['id'] = 'query_string';
  $handler->display->display_options['arguments']['query_string']['table'] = 'json';
  $handler->display->display_options['arguments']['query_string']['field'] = 'query_string';
  $handler->display->display_options['arguments']['query_string']['ui_name'] = 'school-json-query';
  $handler->display->display_options['arguments']['query_string']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['query_string']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['query_string']['name'] = 'school';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Json: Query String */
  $handler->display->display_options['arguments']['query_string']['id'] = 'query_string';
  $handler->display->display_options['arguments']['query_string']['table'] = 'json';
  $handler->display->display_options['arguments']['query_string']['field'] = 'query_string';
  $handler->display->display_options['arguments']['query_string']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['query_string']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['query_string']['name'] = 'school';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Headline & intro text';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="special">Faculty Directory</h2>
<p>The Creighton University faculty directory includes faculty members from each of the University\'s nine schools and colleges. The search tool below may be used to locate specific faculty information.</p>
<hr>';
  $handler->display->display_options['header']['area']['format'] = 'full_html_plus_media';
  $handler->display->display_options['path'] = 'academics/faculty-directory-search';
  $export['faculty_directory_search'] = $view;

  return $export;
}
