<?php
/**
 * @file
 * remote_content_setup_remote_site.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function remote_content_setup_remote_site_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'academic_program_title';
  $view->description = 'This view displays the title field per node';
  $view->tag = 'Academics';
  $view->base_table = 'node';
  $view->human_name = 'Academic Program Title';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'icon-dash';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Program Details Image */
  $handler->display->display_options['fields']['field_pgm_dts_image']['id'] = 'field_pgm_dts_image';
  $handler->display->display_options['fields']['field_pgm_dts_image']['table'] = 'field_data_field_pgm_dts_image';
  $handler->display->display_options['fields']['field_pgm_dts_image']['field'] = 'field_pgm_dts_image';
  $handler->display->display_options['fields']['field_pgm_dts_image']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pgm_dts_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pgm_dts_image']['type'] = 'remote_picture';
  $handler->display->display_options['fields']['field_pgm_dts_image']['settings'] = array(
    'picture_group' => 'front_page_slider_alt',
    'fallback_image_style' => 'front_page_slider_alt',
    'image_link' => '',
    'colorbox' => 'front_page_slider_alt',
  );
  /* Field: Content: Degree Name */
  $handler->display->display_options['fields']['field_pgm_dts_degree_name']['id'] = 'field_pgm_dts_degree_name';
  $handler->display->display_options['fields']['field_pgm_dts_degree_name']['table'] = 'field_data_field_pgm_dts_degree_name';
  $handler->display->display_options['fields']['field_pgm_dts_degree_name']['field'] = 'field_pgm_dts_degree_name';
  $handler->display->display_options['fields']['field_pgm_dts_degree_name']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_degree_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pgm_dts_degree_name']['element_label_colon'] = FALSE;
  /* Field: Content: Program name */
  $handler->display->display_options['fields']['field_pgm_dts_program_name']['id'] = 'field_pgm_dts_program_name';
  $handler->display->display_options['fields']['field_pgm_dts_program_name']['table'] = 'field_data_field_pgm_dts_program_name';
  $handler->display->display_options['fields']['field_pgm_dts_program_name']['field'] = 'field_pgm_dts_program_name';
  $handler->display->display_options['fields']['field_pgm_dts_program_name']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_program_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pgm_dts_program_name']['alter']['text'] = '[field_pgm_dts_program_name] ([field_pgm_dts_degree_name])';
  $handler->display->display_options['fields']['field_pgm_dts_program_name']['element_type'] = 'h1';
  $handler->display->display_options['fields']['field_pgm_dts_program_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pgm_dts_program_name']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_pgm_dts_program_name']['element_default_classes'] = FALSE;
  /* Field: Content: Academic Unit */
  $handler->display->display_options['fields']['field_pgm_dts_academic_unit']['id'] = 'field_pgm_dts_academic_unit';
  $handler->display->display_options['fields']['field_pgm_dts_academic_unit']['table'] = 'field_data_field_pgm_dts_academic_unit';
  $handler->display->display_options['fields']['field_pgm_dts_academic_unit']['field'] = 'field_pgm_dts_academic_unit';
  $handler->display->display_options['fields']['field_pgm_dts_academic_unit']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_academic_unit']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_pgm_dts_academic_unit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pgm_dts_academic_unit']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_pgm_dts_academic_unit']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_pgm_dts_academic_unit']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_pgm_dts_academic_unit']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_pgm_dts_academic_unit']['delta_offset'] = '0';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['nid']['validate_options']['code'] = '/* 
$argument is passed in from URL 
$handler->argument needs to be node id 
return TRUE
*/

$previous = db_set_active( $view->display_handler->options[\'remote_database\'] );
$source = db_query("SELECT source FROM url_alias WHERE alias LIKE \'%/$argument\'")->fetchField();
$nodeId = explode(\'/\',$source);

$handler->argument = $nodeId[1];
db_set_active($previous);
return TRUE;';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Block (remote) */
  $handler = $view->new_display('remote_block', 'Block (remote)', 'remote_block_1');
  $handler->display->display_options['remote_database'] = 'hub';
  $export['academic_program_title'] = $view;

  $view = new view();
  $view->name = 'academics_matrix';
  $view->description = 'Creighton offers majors, minors, degrees and certificates in more than 160 academic areas through 9 schools and colleges.';
  $view->tag = 'Academics';
  $view->base_table = 'node';
  $view->human_name = 'Academics Programs Matrix';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Academic Programs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '3';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_aca_prg_title' => 'field_aca_prg_title',
    'field_aca_prg_bachelors_page' => 'field_aca_prg_bachelors_page',
    'field_aca_prg_bachelors' => 'field_aca_prg_bachelors',
    'field_aca_prg_minor_page' => 'field_aca_prg_minor_page',
    'field_aca_prg_minor_title' => 'field_aca_prg_bachelors',
    'field_aca_prg_masters_page' => 'field_aca_prg_masters_page',
    'field_aca_prg_masters_title' => 'field_aca_prg_masters_title',
    'field_aca_prg_doctorate_page' => 'field_aca_prg_doctorate_page',
    'field_aca_prg_doctorate_title' => 'field_aca_prg_doctorate_title',
    'field_aca_prg_certificate_page' => 'field_aca_prg_certificate_page',
    'field_aca_prg_certificate_title' => 'field_aca_prg_certificate_title',
    'field_aca_prg_associates_page' => 'field_aca_prg_associates_page',
    'field_aca_prg_associates_title' => 'field_aca_prg_associates_title',
    'field_aca_prg_certificate_online' => 'field_aca_prg_certificate_title',
    'field_aca_prg_associates_online' => 'field_aca_prg_associates_title',
    'field_aca_prg_minor_online' => 'field_aca_prg_bachelors',
    'field_aca_prg_bachelors_online' => 'field_aca_prg_bachelors',
    'field_aca_prg_masters_online' => 'field_aca_prg_masters_title',
    'field_aca_prg_doctorate_online' => 'field_aca_prg_doctorate_title',
    'field_aca_prg_cert_onlineonly' => 'field_aca_prg_certificate_title',
    'field_aca_prg_assoc_onlineonly' => 'field_aca_prg_associates_title',
    'field_aca_prg_bach_onlineonly' => 'field_aca_prg_bachelors',
    'field_aca_prg_masters_onlineonly' => 'field_aca_prg_masters_title',
    'field_aca_prg_doc_onlineonly' => 'field_aca_prg_doctorate_title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_aca_prg_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_bachelors_page' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_aca_prg_bachelors' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_minor_page' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_aca_prg_minor_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_masters_page' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_aca_prg_masters_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_doctorate_page' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_aca_prg_doctorate_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_certificate_page' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_aca_prg_certificate_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_associates_page' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_aca_prg_associates_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_certificate_online' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_associates_online' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_minor_online' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_bachelors_online' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_masters_online' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_doctorate_online' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_cert_onlineonly' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_assoc_onlineonly' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_bach_onlineonly' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_masters_onlineonly' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_doc_onlineonly' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php
$letters = array( \'A\', \'B\', \'C\', \'D\', \'E\', \'F\', \'G\', \'H\', \'I\', \'J\', \'K\', \'L\', \'M\', \'N\', \'O\', \'P\', \'Q\', \'R\', \'S\', \'T\', \'U\', \'V\', \'W\', \'X\', \'Y\', \'Z\');
$alphaList = \'\';
foreach ($letters as $letter) {
  $alphaList .= \'<span class="alpha-filter-letter"><a href="/programs?alpha=\' . strtolower($letter) . \'">\' . $letter . \'</a></span>\';
}
print \'<div class="alpha-filter">\' . $alphaList . \'</div>\';
?>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No programs available with those filter conditions.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Relationship: Content: Academic Interests (field_aca_prg_interests) */
  $handler->display->display_options['relationships']['field_aca_prg_interests_tid']['id'] = 'field_aca_prg_interests_tid';
  $handler->display->display_options['relationships']['field_aca_prg_interests_tid']['table'] = 'field_data_field_aca_prg_interests';
  $handler->display->display_options['relationships']['field_aca_prg_interests_tid']['field'] = 'field_aca_prg_interests_tid';
  /* Field: Content: Academic Program Title */
  $handler->display->display_options['fields']['field_aca_prg_title']['id'] = 'field_aca_prg_title';
  $handler->display->display_options['fields']['field_aca_prg_title']['table'] = 'field_data_field_aca_prg_title';
  $handler->display->display_options['fields']['field_aca_prg_title']['field'] = 'field_aca_prg_title';
  $handler->display->display_options['fields']['field_aca_prg_title']['label'] = 'PROGRAM';
  $handler->display->display_options['fields']['field_aca_prg_title']['element_label_colon'] = FALSE;
  /* Field: Content: Bachelors Page */
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['id'] = 'field_aca_prg_bachelors_page';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['table'] = 'field_data_field_aca_prg_bachelors_page';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['field'] = 'field_aca_prg_bachelors_page';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Bachelors Link Text */
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['id'] = 'field_aca_prg_bachelors';
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['table'] = 'field_data_field_aca_prg_bachelors';
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['field'] = 'field_aca_prg_bachelors';
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['label'] = 'BACHELOR\'S';
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['alter']['path'] = 'program/[field_aca_prg_bachelors_page]';
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['element_label_colon'] = FALSE;
  /* Field: Content: Minor Page */
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['id'] = 'field_aca_prg_minor_page';
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['table'] = 'field_data_field_aca_prg_minor_page';
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['field'] = 'field_aca_prg_minor_page';
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Minor Link Text */
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['id'] = 'field_aca_prg_minor_title';
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['table'] = 'field_data_field_aca_prg_minor_title';
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['field'] = 'field_aca_prg_minor_title';
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['label'] = 'BACHELOR\'S';
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['alter']['path'] = 'program/[field_aca_prg_minor_page]';
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['element_label_colon'] = FALSE;
  /* Field: Content: Masters Page */
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['id'] = 'field_aca_prg_masters_page';
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['table'] = 'field_data_field_aca_prg_masters_page';
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['field'] = 'field_aca_prg_masters_page';
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Masters Link Text */
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['id'] = 'field_aca_prg_masters_title';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['table'] = 'field_data_field_aca_prg_masters_title';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['field'] = 'field_aca_prg_masters_title';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['label'] = 'MASTER\'S';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['path'] = 'program/[field_aca_prg_masters_page]';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['element_label_colon'] = FALSE;
  /* Field: Content: Doctorate Page */
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['id'] = 'field_aca_prg_doctorate_page';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['table'] = 'field_data_field_aca_prg_doctorate_page';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['field'] = 'field_aca_prg_doctorate_page';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['alter']['path'] = 'node/[field_aca_prg_doctorate_page]';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Doctorate Link Text */
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['id'] = 'field_aca_prg_doctorate_title';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['table'] = 'field_data_field_aca_prg_doctorate_title';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['field'] = 'field_aca_prg_doctorate_title';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['label'] = 'DOCTORATE';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['path'] = 'program/[field_aca_prg_doctorate_page]';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['element_label_colon'] = FALSE;
  /* Field: Content: Certificate Page */
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['id'] = 'field_aca_prg_certificate_page';
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['table'] = 'field_data_field_aca_prg_certificate_page';
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['field'] = 'field_aca_prg_certificate_page';
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Certificate Link Text */
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['id'] = 'field_aca_prg_certificate_title';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['table'] = 'field_data_field_aca_prg_certificate_title';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['field'] = 'field_aca_prg_certificate_title';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['label'] = 'CERTIFICATE';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['path'] = 'program/[field_aca_prg_certificate_page]';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['element_label_colon'] = FALSE;
  /* Field: Content: Associates Page */
  $handler->display->display_options['fields']['field_aca_prg_associates_page']['id'] = 'field_aca_prg_associates_page';
  $handler->display->display_options['fields']['field_aca_prg_associates_page']['table'] = 'field_data_field_aca_prg_associates_page';
  $handler->display->display_options['fields']['field_aca_prg_associates_page']['field'] = 'field_aca_prg_associates_page';
  $handler->display->display_options['fields']['field_aca_prg_associates_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_associates_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_associates_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_associates_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Associates Link Text */
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['id'] = 'field_aca_prg_associates_title';
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['table'] = 'field_data_field_aca_prg_associates_title';
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['field'] = 'field_aca_prg_associates_title';
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['label'] = 'ASSOCIATES';
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['alter']['path'] = 'program/[field_aca_prg_associates_page]';
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['element_label_colon'] = FALSE;
  /* Field: Content: Certificate Online Link */
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['id'] = 'field_aca_prg_certificate_online';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['table'] = 'field_data_field_aca_prg_certificate_online';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['field'] = 'field_aca_prg_certificate_online';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['text'] = 'Online';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['path'] = '[field_aca_prg_certificate_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['type'] = 'link_title_plain';
  /* Field: Content: Associates Online Link */
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['id'] = 'field_aca_prg_associates_online';
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['table'] = 'field_data_field_aca_prg_associates_online';
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['field'] = 'field_aca_prg_associates_online';
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['alter']['path'] = '[field_aca_prg_associates_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['type'] = 'link_title_plain';
  /* Field: Content: Minor Online Link */
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['id'] = 'field_aca_prg_minor_online';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['table'] = 'field_data_field_aca_prg_minor_online';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['field'] = 'field_aca_prg_minor_online';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['alter']['path'] = '[field_aca_prg_minor_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['type'] = 'link_title_plain';
  /* Field: Content: Bachelors Online Link */
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['id'] = 'field_aca_prg_bachelors_online';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['table'] = 'field_data_field_aca_prg_bachelors_online';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['field'] = 'field_aca_prg_bachelors_online';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['alter']['path'] = '[field_aca_prg_bachelors_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['type'] = 'link_title_plain';
  /* Field: Content: Masters Online Link */
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['id'] = 'field_aca_prg_masters_online';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['table'] = 'field_data_field_aca_prg_masters_online';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['field'] = 'field_aca_prg_masters_online';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['path'] = '[field_aca_prg_masters_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['type'] = 'link_title_plain';
  /* Field: Content: Doctorate Online Link */
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['id'] = 'field_aca_prg_doctorate_online';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['table'] = 'field_data_field_aca_prg_doctorate_online';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['field'] = 'field_aca_prg_doctorate_online';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['path'] = '[field_aca_prg_doctorate_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['type'] = 'link_title_plain';
  /* Field: Content: Certificate Online Only */
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['id'] = 'field_aca_prg_cert_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['table'] = 'field_data_field_aca_prg_cert_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['field'] = 'field_aca_prg_cert_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['alter']['path'] = '[field_aca_prg_cert_onlineonly-url]';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['alter']['link_class'] = 'online-course online-only';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['type'] = 'link_title_plain';
  /* Field: Content: Associates Online Only */
  $handler->display->display_options['fields']['field_aca_prg_assoc_onlineonly']['id'] = 'field_aca_prg_assoc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_assoc_onlineonly']['table'] = 'field_data_field_aca_prg_assoc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_assoc_onlineonly']['field'] = 'field_aca_prg_assoc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_assoc_onlineonly']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_assoc_onlineonly']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_assoc_onlineonly']['alter']['path'] = '[field_aca_prg_assoc_onlineonly-url]';
  $handler->display->display_options['fields']['field_aca_prg_assoc_onlineonly']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_assoc_onlineonly']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_assoc_onlineonly']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_assoc_onlineonly']['alter']['link_class'] = 'online-course online-only';
  $handler->display->display_options['fields']['field_aca_prg_assoc_onlineonly']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_assoc_onlineonly']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_assoc_onlineonly']['type'] = 'link_title_plain';
  /* Field: Content: Bachelors Online Only */
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['id'] = 'field_aca_prg_bach_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['table'] = 'field_data_field_aca_prg_bach_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['field'] = 'field_aca_prg_bach_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['alter']['path'] = '[field_aca_prg_bach_onlineonly-url]';
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['alter']['link_class'] = 'online-course online-only';
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['type'] = 'link_title_plain';
  /* Field: Content: Masters Online Only */
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['id'] = 'field_aca_prg_masters_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['table'] = 'field_data_field_aca_prg_masters_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['field'] = 'field_aca_prg_masters_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['alter']['path'] = '[field_aca_prg_masters_onlineonly-url]';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['alter']['link_class'] = 'online-course online-only';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['type'] = 'link_title_plain';
  /* Field: Content: Doctorate Online Only */
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['id'] = 'field_aca_prg_doc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['table'] = 'field_data_field_aca_prg_doc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['field'] = 'field_aca_prg_doc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['alter']['path'] = '[field_aca_prg_doc_onlineonly-url]';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['alter']['link_class'] = 'online-course online-only';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['type'] = 'link_title_plain';
  /* Sort criterion: Content: Academic Program Title (field_aca_prg_title) */
  $handler->display->display_options['sorts']['field_aca_prg_title_value']['id'] = 'field_aca_prg_title_value';
  $handler->display->display_options['sorts']['field_aca_prg_title_value']['table'] = 'field_data_field_aca_prg_title';
  $handler->display->display_options['sorts']['field_aca_prg_title_value']['field'] = 'field_aca_prg_title_value';
  $handler->display->display_options['sorts']['field_aca_prg_title_value']['expose']['label'] = 'Academic Program Title (field_aca_prg_title)';
  /* Contextual filter: Content: Academic Program Title (field_aca_prg_title) */
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['id'] = 'field_aca_prg_title_value';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['table'] = 'field_data_field_aca_prg_title';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['field'] = 'field_aca_prg_title_value';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['default_argument_options']['argument'] = 'a';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['summary_options']['separator'] = '|';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['limit'] = '1';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['case'] = 'upper';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['path_case'] = 'lower';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
    3 => 'OR',
  );
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
    'academic_program' => 'academic_program',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Academic Program Title (field_aca_prg_title) */
  $handler->display->display_options['filters']['field_aca_prg_title_value_1']['id'] = 'field_aca_prg_title_value_1';
  $handler->display->display_options['filters']['field_aca_prg_title_value_1']['table'] = 'field_data_field_aca_prg_title';
  $handler->display->display_options['filters']['field_aca_prg_title_value_1']['field'] = 'field_aca_prg_title_value';
  $handler->display->display_options['filters']['field_aca_prg_title_value_1']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_aca_prg_title_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_aca_prg_title_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_aca_prg_title_value_1']['expose']['operator_id'] = 'field_aca_prg_title_value_1_op';
  $handler->display->display_options['filters']['field_aca_prg_title_value_1']['expose']['label'] = 'Begins with:';
  $handler->display->display_options['filters']['field_aca_prg_title_value_1']['expose']['operator'] = 'field_aca_prg_title_value_1_op';
  $handler->display->display_options['filters']['field_aca_prg_title_value_1']['expose']['identifier'] = 'alpha';
  $handler->display->display_options['filters']['field_aca_prg_title_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Online (field_aca_prg_online) */
  $handler->display->display_options['filters']['field_aca_prg_online_value']['id'] = 'field_aca_prg_online_value';
  $handler->display->display_options['filters']['field_aca_prg_online_value']['table'] = 'field_data_field_aca_prg_online';
  $handler->display->display_options['filters']['field_aca_prg_online_value']['field'] = 'field_aca_prg_online_value';
  $handler->display->display_options['filters']['field_aca_prg_online_value']['value'] = array(
    0 => '0',
    1 => '1',
  );
  $handler->display->display_options['filters']['field_aca_prg_online_value']['group'] = 1;
  $handler->display->display_options['filters']['field_aca_prg_online_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_aca_prg_online_value']['expose']['operator_id'] = 'field_aca_prg_online_value_op';
  $handler->display->display_options['filters']['field_aca_prg_online_value']['expose']['label'] = 'Online (field_aca_prg_online)';
  $handler->display->display_options['filters']['field_aca_prg_online_value']['expose']['operator'] = 'field_aca_prg_online_value_op';
  $handler->display->display_options['filters']['field_aca_prg_online_value']['expose']['identifier'] = 'field_aca_prg_online_value';
  $handler->display->display_options['filters']['field_aca_prg_online_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_aca_prg_online_value']['group_info']['label'] = 'Online';
  $handler->display->display_options['filters']['field_aca_prg_online_value']['group_info']['identifier'] = 'online';
  $handler->display->display_options['filters']['field_aca_prg_online_value']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_aca_prg_online_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Campus',
      'operator' => 'or',
      'value' => array(
        0 => '0',
      ),
    ),
    2 => array(
      'title' => 'Online',
      'operator' => 'or',
      'value' => array(
        1 => '1',
      ),
    ),
  );
  /* Filter criterion: Content: Dual Programs (field_aca_prg_dual_programs) */
  $handler->display->display_options['filters']['field_aca_prg_dual_programs_value']['id'] = 'field_aca_prg_dual_programs_value';
  $handler->display->display_options['filters']['field_aca_prg_dual_programs_value']['table'] = 'field_data_field_aca_prg_dual_programs';
  $handler->display->display_options['filters']['field_aca_prg_dual_programs_value']['field'] = 'field_aca_prg_dual_programs_value';
  $handler->display->display_options['filters']['field_aca_prg_dual_programs_value']['group'] = 1;
  $handler->display->display_options['filters']['field_aca_prg_dual_programs_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_aca_prg_dual_programs_value']['expose']['operator_id'] = 'field_aca_prg_dual_programs_value_op';
  $handler->display->display_options['filters']['field_aca_prg_dual_programs_value']['expose']['label'] = 'Dual Programs (field_aca_prg_dual_programs)';
  $handler->display->display_options['filters']['field_aca_prg_dual_programs_value']['expose']['operator'] = 'field_aca_prg_dual_programs_value_op';
  $handler->display->display_options['filters']['field_aca_prg_dual_programs_value']['expose']['identifier'] = 'field_aca_prg_dual_programs_value';
  $handler->display->display_options['filters']['field_aca_prg_dual_programs_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_aca_prg_dual_programs_value']['group_info']['label'] = 'Dual Programs';
  $handler->display->display_options['filters']['field_aca_prg_dual_programs_value']['group_info']['identifier'] = 'dual_programs';
  $handler->display->display_options['filters']['field_aca_prg_dual_programs_value']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_aca_prg_dual_programs_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Dual Programs',
      'operator' => 'or',
      'value' => array(
        1 => '1',
      ),
    ),
    2 => array(
      'title' => 'Dual Programs',
      'operator' => 'or',
      'value' => array(
        0 => '0',
      ),
    ),
  );
  /* Filter criterion: Content: Accelerated (field_aca_prg_accelerated) */
  $handler->display->display_options['filters']['field_aca_prg_accelerated_value']['id'] = 'field_aca_prg_accelerated_value';
  $handler->display->display_options['filters']['field_aca_prg_accelerated_value']['table'] = 'field_data_field_aca_prg_accelerated';
  $handler->display->display_options['filters']['field_aca_prg_accelerated_value']['field'] = 'field_aca_prg_accelerated_value';
  $handler->display->display_options['filters']['field_aca_prg_accelerated_value']['value'] = array(
    0 => '0',
    1 => '1',
  );
  $handler->display->display_options['filters']['field_aca_prg_accelerated_value']['group'] = 1;
  $handler->display->display_options['filters']['field_aca_prg_accelerated_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_aca_prg_accelerated_value']['expose']['operator_id'] = 'field_aca_prg_accelerated_value_op';
  $handler->display->display_options['filters']['field_aca_prg_accelerated_value']['expose']['label'] = 'Accelerated (field_aca_prg_accelerated)';
  $handler->display->display_options['filters']['field_aca_prg_accelerated_value']['expose']['operator'] = 'field_aca_prg_accelerated_value_op';
  $handler->display->display_options['filters']['field_aca_prg_accelerated_value']['expose']['identifier'] = 'accelerated';
  $handler->display->display_options['filters']['field_aca_prg_accelerated_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_aca_prg_accelerated_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_aca_prg_accelerated_value']['group_info']['label'] = 'Accelerated';
  $handler->display->display_options['filters']['field_aca_prg_accelerated_value']['group_info']['identifier'] = 'accelerated';
  $handler->display->display_options['filters']['field_aca_prg_accelerated_value']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_aca_prg_accelerated_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Traditional',
      'operator' => 'or',
      'value' => array(
        0 => '0',
      ),
    ),
    2 => array(
      'title' => 'Accelerated',
      'operator' => 'or',
      'value' => array(
        1 => '1',
      ),
    ),
  );
  /* Filter criterion: Content: Professional (field_aca_prg_professional) */
  $handler->display->display_options['filters']['field_aca_prg_professional_value']['id'] = 'field_aca_prg_professional_value';
  $handler->display->display_options['filters']['field_aca_prg_professional_value']['table'] = 'field_data_field_aca_prg_professional';
  $handler->display->display_options['filters']['field_aca_prg_professional_value']['field'] = 'field_aca_prg_professional_value';
  $handler->display->display_options['filters']['field_aca_prg_professional_value']['value'] = array(
    0 => '0',
    1 => '1',
  );
  $handler->display->display_options['filters']['field_aca_prg_professional_value']['group'] = 1;
  $handler->display->display_options['filters']['field_aca_prg_professional_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_aca_prg_professional_value']['expose']['operator_id'] = 'field_aca_prg_professional_value_op';
  $handler->display->display_options['filters']['field_aca_prg_professional_value']['expose']['label'] = 'Professional (field_aca_prg_professional)';
  $handler->display->display_options['filters']['field_aca_prg_professional_value']['expose']['operator'] = 'field_aca_prg_professional_value_op';
  $handler->display->display_options['filters']['field_aca_prg_professional_value']['expose']['identifier'] = 'professional';
  $handler->display->display_options['filters']['field_aca_prg_professional_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_aca_prg_professional_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_aca_prg_professional_value']['group_info']['label'] = 'Professional:';
  $handler->display->display_options['filters']['field_aca_prg_professional_value']['group_info']['identifier'] = 'professional';
  $handler->display->display_options['filters']['field_aca_prg_professional_value']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_aca_prg_professional_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Professional',
      'operator' => 'or',
      'value' => array(
        1 => '1',
      ),
    ),
    2 => array(
      'title' => 'Non Professional',
      'operator' => 'or',
      'value' => array(
        0 => '0',
      ),
    ),
  );
  /* Filter criterion: Content: Programs Offered Tag (field_aca_prg_offered_tag) */
  $handler->display->display_options['filters']['field_aca_prg_offered_tag_tid']['id'] = 'field_aca_prg_offered_tag_tid';
  $handler->display->display_options['filters']['field_aca_prg_offered_tag_tid']['table'] = 'field_data_field_aca_prg_offered_tag';
  $handler->display->display_options['filters']['field_aca_prg_offered_tag_tid']['field'] = 'field_aca_prg_offered_tag_tid';
  $handler->display->display_options['filters']['field_aca_prg_offered_tag_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_aca_prg_offered_tag_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_aca_prg_offered_tag_tid']['expose']['operator_id'] = 'field_aca_prg_offered_tag_tid_op';
  $handler->display->display_options['filters']['field_aca_prg_offered_tag_tid']['expose']['label'] = 'Programs Offered:';
  $handler->display->display_options['filters']['field_aca_prg_offered_tag_tid']['expose']['operator'] = 'field_aca_prg_offered_tag_tid_op';
  $handler->display->display_options['filters']['field_aca_prg_offered_tag_tid']['expose']['identifier'] = 'prg_offered';
  $handler->display->display_options['filters']['field_aca_prg_offered_tag_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_aca_prg_offered_tag_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_aca_prg_offered_tag_tid']['vocabulary'] = 'academic_programs_offerings';
  $handler->display->display_options['filters']['field_aca_prg_offered_tag_tid']['hierarchy'] = 1;
  /* Filter criterion: Content: Academic Program Title (field_aca_prg_title) */
  $handler->display->display_options['filters']['field_aca_prg_title_value']['id'] = 'field_aca_prg_title_value';
  $handler->display->display_options['filters']['field_aca_prg_title_value']['table'] = 'field_data_field_aca_prg_title';
  $handler->display->display_options['filters']['field_aca_prg_title_value']['field'] = 'field_aca_prg_title_value';
  $handler->display->display_options['filters']['field_aca_prg_title_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_aca_prg_title_value']['group'] = 2;
  $handler->display->display_options['filters']['field_aca_prg_title_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_aca_prg_title_value']['expose']['operator_id'] = 'field_aca_prg_title_value_op';
  $handler->display->display_options['filters']['field_aca_prg_title_value']['expose']['label'] = 'SEARCH';
  $handler->display->display_options['filters']['field_aca_prg_title_value']['expose']['operator'] = 'field_aca_prg_title_value_op';
  $handler->display->display_options['filters']['field_aca_prg_title_value']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['field_aca_prg_title_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_13']['id'] = 'name_13';
  $handler->display->display_options['filters']['name_13']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_13']['field'] = 'name';
  $handler->display->display_options['filters']['name_13']['relationship'] = 'field_aca_prg_interests_tid';
  $handler->display->display_options['filters']['name_13']['group'] = 3;
  $handler->display->display_options['filters']['name_13']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_13']['expose']['operator_id'] = 'name_13_op';
  $handler->display->display_options['filters']['name_13']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name_13']['expose']['operator'] = 'name_13_op';
  $handler->display->display_options['filters']['name_13']['expose']['identifier'] = 'name_13';
  $handler->display->display_options['filters']['name_13']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_2']['id'] = 'name_2';
  $handler->display->display_options['filters']['name_2']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_2']['field'] = 'name';
  $handler->display->display_options['filters']['name_2']['relationship'] = 'field_aca_prg_interests_tid';
  $handler->display->display_options['filters']['name_2']['group'] = 3;
  $handler->display->display_options['filters']['name_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_2']['expose']['operator_id'] = 'name_2_op';
  $handler->display->display_options['filters']['name_2']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name_2']['expose']['operator'] = 'name_2_op';
  $handler->display->display_options['filters']['name_2']['expose']['identifier'] = 'name_2';
  $handler->display->display_options['filters']['name_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_14']['id'] = 'name_14';
  $handler->display->display_options['filters']['name_14']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_14']['field'] = 'name';
  $handler->display->display_options['filters']['name_14']['relationship'] = 'field_aca_prg_interests_tid';
  $handler->display->display_options['filters']['name_14']['group'] = 3;
  $handler->display->display_options['filters']['name_14']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_14']['expose']['operator_id'] = 'name_14_op';
  $handler->display->display_options['filters']['name_14']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name_14']['expose']['operator'] = 'name_14_op';
  $handler->display->display_options['filters']['name_14']['expose']['identifier'] = 'name_14';
  $handler->display->display_options['filters']['name_14']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_3']['id'] = 'name_3';
  $handler->display->display_options['filters']['name_3']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_3']['field'] = 'name';
  $handler->display->display_options['filters']['name_3']['relationship'] = 'field_aca_prg_interests_tid';
  $handler->display->display_options['filters']['name_3']['group'] = 3;
  $handler->display->display_options['filters']['name_3']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_3']['expose']['operator_id'] = 'name_3_op';
  $handler->display->display_options['filters']['name_3']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name_3']['expose']['operator'] = 'name_3_op';
  $handler->display->display_options['filters']['name_3']['expose']['identifier'] = 'name_3';
  $handler->display->display_options['filters']['name_3']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_4']['id'] = 'name_4';
  $handler->display->display_options['filters']['name_4']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_4']['field'] = 'name';
  $handler->display->display_options['filters']['name_4']['relationship'] = 'field_aca_prg_interests_tid';
  $handler->display->display_options['filters']['name_4']['group'] = 3;
  $handler->display->display_options['filters']['name_4']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_4']['expose']['operator_id'] = 'name_4_op';
  $handler->display->display_options['filters']['name_4']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name_4']['expose']['operator'] = 'name_4_op';
  $handler->display->display_options['filters']['name_4']['expose']['identifier'] = 'name_4';
  $handler->display->display_options['filters']['name_4']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_5']['id'] = 'name_5';
  $handler->display->display_options['filters']['name_5']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_5']['field'] = 'name';
  $handler->display->display_options['filters']['name_5']['relationship'] = 'field_aca_prg_interests_tid';
  $handler->display->display_options['filters']['name_5']['group'] = 3;
  $handler->display->display_options['filters']['name_5']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_5']['expose']['operator_id'] = 'name_5_op';
  $handler->display->display_options['filters']['name_5']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name_5']['expose']['operator'] = 'name_5_op';
  $handler->display->display_options['filters']['name_5']['expose']['identifier'] = 'name_5';
  $handler->display->display_options['filters']['name_5']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_6']['id'] = 'name_6';
  $handler->display->display_options['filters']['name_6']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_6']['field'] = 'name';
  $handler->display->display_options['filters']['name_6']['relationship'] = 'field_aca_prg_interests_tid';
  $handler->display->display_options['filters']['name_6']['group'] = 3;
  $handler->display->display_options['filters']['name_6']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_6']['expose']['operator_id'] = 'name_6_op';
  $handler->display->display_options['filters']['name_6']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name_6']['expose']['operator'] = 'name_6_op';
  $handler->display->display_options['filters']['name_6']['expose']['identifier'] = 'name_6';
  $handler->display->display_options['filters']['name_6']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_7']['id'] = 'name_7';
  $handler->display->display_options['filters']['name_7']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_7']['field'] = 'name';
  $handler->display->display_options['filters']['name_7']['relationship'] = 'field_aca_prg_interests_tid';
  $handler->display->display_options['filters']['name_7']['group'] = 3;
  $handler->display->display_options['filters']['name_7']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_7']['expose']['operator_id'] = 'name_7_op';
  $handler->display->display_options['filters']['name_7']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name_7']['expose']['operator'] = 'name_7_op';
  $handler->display->display_options['filters']['name_7']['expose']['identifier'] = 'name_7';
  $handler->display->display_options['filters']['name_7']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_9']['id'] = 'name_9';
  $handler->display->display_options['filters']['name_9']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_9']['field'] = 'name';
  $handler->display->display_options['filters']['name_9']['relationship'] = 'field_aca_prg_interests_tid';
  $handler->display->display_options['filters']['name_9']['group'] = 3;
  $handler->display->display_options['filters']['name_9']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_9']['expose']['operator_id'] = 'name_9_op';
  $handler->display->display_options['filters']['name_9']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name_9']['expose']['operator'] = 'name_9_op';
  $handler->display->display_options['filters']['name_9']['expose']['identifier'] = 'name_9';
  $handler->display->display_options['filters']['name_9']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_8']['id'] = 'name_8';
  $handler->display->display_options['filters']['name_8']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_8']['field'] = 'name';
  $handler->display->display_options['filters']['name_8']['relationship'] = 'field_aca_prg_interests_tid';
  $handler->display->display_options['filters']['name_8']['group'] = 3;
  $handler->display->display_options['filters']['name_8']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_8']['expose']['operator_id'] = 'name_8_op';
  $handler->display->display_options['filters']['name_8']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name_8']['expose']['operator'] = 'name_8_op';
  $handler->display->display_options['filters']['name_8']['expose']['identifier'] = 'name_8';
  $handler->display->display_options['filters']['name_8']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_10']['id'] = 'name_10';
  $handler->display->display_options['filters']['name_10']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_10']['field'] = 'name';
  $handler->display->display_options['filters']['name_10']['relationship'] = 'field_aca_prg_interests_tid';
  $handler->display->display_options['filters']['name_10']['group'] = 3;
  $handler->display->display_options['filters']['name_10']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_10']['expose']['operator_id'] = 'name_10_op';
  $handler->display->display_options['filters']['name_10']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name_10']['expose']['operator'] = 'name_10_op';
  $handler->display->display_options['filters']['name_10']['expose']['identifier'] = 'name_10';
  $handler->display->display_options['filters']['name_10']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_11']['id'] = 'name_11';
  $handler->display->display_options['filters']['name_11']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_11']['field'] = 'name';
  $handler->display->display_options['filters']['name_11']['relationship'] = 'field_aca_prg_interests_tid';
  $handler->display->display_options['filters']['name_11']['group'] = 3;
  $handler->display->display_options['filters']['name_11']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_11']['expose']['operator_id'] = 'name_11_op';
  $handler->display->display_options['filters']['name_11']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name_11']['expose']['operator'] = 'name_11_op';
  $handler->display->display_options['filters']['name_11']['expose']['identifier'] = 'name_11';
  $handler->display->display_options['filters']['name_11']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_12']['id'] = 'name_12';
  $handler->display->display_options['filters']['name_12']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_12']['field'] = 'name';
  $handler->display->display_options['filters']['name_12']['relationship'] = 'field_aca_prg_interests_tid';
  $handler->display->display_options['filters']['name_12']['group'] = 3;
  $handler->display->display_options['filters']['name_12']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_12']['expose']['operator_id'] = 'name_12_op';
  $handler->display->display_options['filters']['name_12']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name_12']['expose']['operator'] = 'name_12_op';
  $handler->display->display_options['filters']['name_12']['expose']['identifier'] = 'name_12';
  $handler->display->display_options['filters']['name_12']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'field_aca_prg_interests_tid';
  $handler->display->display_options['filters']['name']['group'] = 3;
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['name']['group_info']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['group_info']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['group_info']['multiple'] = TRUE;
  $handler->display->display_options['filters']['name']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Arts',
      'operator' => '=',
      'value' => 'Arts',
    ),
    2 => array(
      'title' => 'Law',
      'operator' => '=',
      'value' => 'Law',
    ),
    3 => array(
      'title' => 'Ministry',
      'operator' => '=',
      'value' => 'Ministry',
    ),
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_1']['id'] = 'name_1';
  $handler->display->display_options['filters']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_1']['field'] = 'name';
  $handler->display->display_options['filters']['name_1']['relationship'] = 'field_aca_prg_interests_tid';
  $handler->display->display_options['filters']['name_1']['group'] = 3;
  $handler->display->display_options['filters']['name_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name_1']['expose']['operator_id'] = 'name_1_op';
  $handler->display->display_options['filters']['name_1']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name_1']['expose']['operator'] = 'name_1_op';
  $handler->display->display_options['filters']['name_1']['expose']['identifier'] = 'name_1';
  $handler->display->display_options['filters']['name_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Certificate - Undergrad (field_aca_prg_cert_undergrad) */
  $handler->display->display_options['filters']['field_aca_prg_cert_undergrad_value']['id'] = 'field_aca_prg_cert_undergrad_value';
  $handler->display->display_options['filters']['field_aca_prg_cert_undergrad_value']['table'] = 'field_data_field_aca_prg_cert_undergrad';
  $handler->display->display_options['filters']['field_aca_prg_cert_undergrad_value']['field'] = 'field_aca_prg_cert_undergrad_value';
  $handler->display->display_options['filters']['field_aca_prg_cert_undergrad_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_aca_prg_cert_undergrad_value']['expose']['operator_id'] = 'field_aca_prg_cert_undergrad_value_op';
  $handler->display->display_options['filters']['field_aca_prg_cert_undergrad_value']['expose']['label'] = 'Certificate - Undergrad (field_aca_prg_cert_undergrad)';
  $handler->display->display_options['filters']['field_aca_prg_cert_undergrad_value']['expose']['operator'] = 'field_aca_prg_cert_undergrad_value_op';
  $handler->display->display_options['filters']['field_aca_prg_cert_undergrad_value']['expose']['identifier'] = 'field_aca_prg_cert_undergrad_value';
  $handler->display->display_options['filters']['field_aca_prg_cert_undergrad_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_aca_prg_cert_undergrad_value']['group_info']['label'] = 'Undergrad Certificate';
  $handler->display->display_options['filters']['field_aca_prg_cert_undergrad_value']['group_info']['identifier'] = 'undergrad_cert';
  $handler->display->display_options['filters']['field_aca_prg_cert_undergrad_value']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_aca_prg_cert_undergrad_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Undergrad Certificate',
      'operator' => 'or',
      'value' => array(
        1 => '1',
      ),
    ),
    2 => array(
      'title' => 'Undergrad Certificate',
      'operator' => 'or',
      'value' => array(
        0 => '0',
      ),
    ),
  );
  /* Filter criterion: Content: Certificate - Graduate (field_aca_prg_cert_grad) */
  $handler->display->display_options['filters']['field_aca_prg_cert_grad_value']['id'] = 'field_aca_prg_cert_grad_value';
  $handler->display->display_options['filters']['field_aca_prg_cert_grad_value']['table'] = 'field_data_field_aca_prg_cert_grad';
  $handler->display->display_options['filters']['field_aca_prg_cert_grad_value']['field'] = 'field_aca_prg_cert_grad_value';
  $handler->display->display_options['filters']['field_aca_prg_cert_grad_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_aca_prg_cert_grad_value']['expose']['operator_id'] = 'field_aca_prg_cert_grad_value_op';
  $handler->display->display_options['filters']['field_aca_prg_cert_grad_value']['expose']['label'] = 'Certificate - Graduate (field_aca_prg_cert_grad)';
  $handler->display->display_options['filters']['field_aca_prg_cert_grad_value']['expose']['operator'] = 'field_aca_prg_cert_grad_value_op';
  $handler->display->display_options['filters']['field_aca_prg_cert_grad_value']['expose']['identifier'] = 'field_aca_prg_cert_grad_value';
  $handler->display->display_options['filters']['field_aca_prg_cert_grad_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_aca_prg_cert_grad_value']['group_info']['label'] = 'Graduate Certificate';
  $handler->display->display_options['filters']['field_aca_prg_cert_grad_value']['group_info']['identifier'] = 'grad_cert';
  $handler->display->display_options['filters']['field_aca_prg_cert_grad_value']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_aca_prg_cert_grad_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Graduate Certificate',
      'operator' => 'or',
      'value' => array(
        1 => '1',
      ),
    ),
    2 => array(
      'title' => 'Graduate Certificate',
      'operator' => 'or',
      'value' => array(
        0 => '0',
      ),
    ),
  );
  /* Filter criterion: Content: Doctorate (field_aca_prg_doc_doctorate) */
  $handler->display->display_options['filters']['field_aca_prg_doc_doctorate_value']['id'] = 'field_aca_prg_doc_doctorate_value';
  $handler->display->display_options['filters']['field_aca_prg_doc_doctorate_value']['table'] = 'field_data_field_aca_prg_doc_doctorate';
  $handler->display->display_options['filters']['field_aca_prg_doc_doctorate_value']['field'] = 'field_aca_prg_doc_doctorate_value';
  $handler->display->display_options['filters']['field_aca_prg_doc_doctorate_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_aca_prg_doc_doctorate_value']['expose']['operator_id'] = 'field_aca_prg_doc_doctorate_value_op';
  $handler->display->display_options['filters']['field_aca_prg_doc_doctorate_value']['expose']['label'] = 'Doctorate (field_aca_prg_doc_doctorate)';
  $handler->display->display_options['filters']['field_aca_prg_doc_doctorate_value']['expose']['operator'] = 'field_aca_prg_doc_doctorate_value_op';
  $handler->display->display_options['filters']['field_aca_prg_doc_doctorate_value']['expose']['identifier'] = 'field_aca_prg_doc_doctorate_value';
  $handler->display->display_options['filters']['field_aca_prg_doc_doctorate_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_aca_prg_doc_doctorate_value']['group_info']['label'] = 'Doctorate';
  $handler->display->display_options['filters']['field_aca_prg_doc_doctorate_value']['group_info']['identifier'] = 'doctorate';
  $handler->display->display_options['filters']['field_aca_prg_doc_doctorate_value']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_aca_prg_doc_doctorate_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Doctorate',
      'operator' => 'or',
      'value' => array(
        1 => '1',
      ),
    ),
    2 => array(
      'title' => 'Doctorate',
      'operator' => 'or',
      'value' => array(
        0 => '0',
      ),
    ),
  );
  /* Filter criterion: Content: Bachelors to Masters (field_aca_bachelors_to_masters) */
  $handler->display->display_options['filters']['field_aca_bachelors_to_masters_value']['id'] = 'field_aca_bachelors_to_masters_value';
  $handler->display->display_options['filters']['field_aca_bachelors_to_masters_value']['table'] = 'field_data_field_aca_bachelors_to_masters';
  $handler->display->display_options['filters']['field_aca_bachelors_to_masters_value']['field'] = 'field_aca_bachelors_to_masters_value';
  $handler->display->display_options['filters']['field_aca_bachelors_to_masters_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_aca_bachelors_to_masters_value']['expose']['operator_id'] = 'field_aca_bachelors_to_masters_value_op';
  $handler->display->display_options['filters']['field_aca_bachelors_to_masters_value']['expose']['label'] = 'Bachelors to Masters (field_aca_bachelors_to_masters)';
  $handler->display->display_options['filters']['field_aca_bachelors_to_masters_value']['expose']['operator'] = 'field_aca_bachelors_to_masters_value_op';
  $handler->display->display_options['filters']['field_aca_bachelors_to_masters_value']['expose']['identifier'] = 'field_aca_bachelors_to_masters_value';
  $handler->display->display_options['filters']['field_aca_bachelors_to_masters_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_aca_bachelors_to_masters_value']['group_info']['label'] = 'Accelerated Bachelor\'s to Master\'s';
  $handler->display->display_options['filters']['field_aca_bachelors_to_masters_value']['group_info']['identifier'] = 'bachelors_to_masters';
  $handler->display->display_options['filters']['field_aca_bachelors_to_masters_value']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_aca_bachelors_to_masters_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Accelerated Bachelor\'s to Master\'s',
      'operator' => 'or',
      'value' => array(
        1 => '1',
      ),
    ),
    2 => array(
      'title' => 'Accelerated Bachelor\'s to Master\'s',
      'operator' => 'or',
      'value' => array(
        0 => '0',
      ),
    ),
  );

  /* Display: Page (remote) */
  $handler = $view->new_display('remote_page', 'Page (remote)', 'remote_page_1');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_aca_prg_interests_tid';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['vocabularies'] = array(
    'academic_interests' => 'academic_interests',
  );
  $handler->display->display_options['arguments']['name']['validate_options']['type'] = 'name';
  $handler->display->display_options['arguments']['name']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Contextual filter: Content: Academic Program Title (field_aca_prg_title) */
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['id'] = 'field_aca_prg_title_value';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['table'] = 'field_data_field_aca_prg_title';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['field'] = 'field_aca_prg_title_value';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['default_argument_options']['argument'] = 'a';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['limit'] = '1';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['case'] = 'upper';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['path_case'] = 'lower';
  $handler->display->display_options['path'] = 'programs';
  $handler->display->display_options['menu']['title'] = 'Glossary';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['remote_database'] = 'hub';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['root_node'] = 'Creighton Academic Programs';
  $handler->display->display_options['style_options']['item_node'] = 'Program';
  $handler->display->display_options['path'] = 'program/programs-export.xml';
  $export['academics_matrix'] = $view;

  $view = new view();
  $view->name = 'academics_program';
  $view->description = 'This view displays the academics node view';
  $view->tag = 'Academics';
  $view->base_table = 'node';
  $view->human_name = 'Academics Program View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '"We\'re sorry, that program does not exist or something has changed. 
  <a href="/programs">Return to the list of programs.</a>"';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Academic Unit */
  $handler->display->display_options['fields']['field_pgm_dts_academic_unit']['id'] = 'field_pgm_dts_academic_unit';
  $handler->display->display_options['fields']['field_pgm_dts_academic_unit']['table'] = 'field_data_field_pgm_dts_academic_unit';
  $handler->display->display_options['fields']['field_pgm_dts_academic_unit']['field'] = 'field_pgm_dts_academic_unit';
  $handler->display->display_options['fields']['field_pgm_dts_academic_unit']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_academic_unit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pgm_dts_academic_unit']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_pgm_dts_academic_unit']['delta_offset'] = '0';
  /* Field: Content: Other Programs Available */
  $handler->display->display_options['fields']['field_pgm_dts_other_programs']['id'] = 'field_pgm_dts_other_programs';
  $handler->display->display_options['fields']['field_pgm_dts_other_programs']['table'] = 'field_data_field_pgm_dts_other_programs';
  $handler->display->display_options['fields']['field_pgm_dts_other_programs']['field'] = 'field_pgm_dts_other_programs';
  $handler->display->display_options['fields']['field_pgm_dts_other_programs']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_other_programs']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pgm_dts_other_programs']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_pgm_dts_other_programs']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_pgm_dts_other_programs']['multi_type'] = 'ul';
  /* Field: Content: Outcomes */
  $handler->display->display_options['fields']['field_pgm_dts_outcomes']['id'] = 'field_pgm_dts_outcomes';
  $handler->display->display_options['fields']['field_pgm_dts_outcomes']['table'] = 'field_data_field_pgm_dts_outcomes';
  $handler->display->display_options['fields']['field_pgm_dts_outcomes']['field'] = 'field_pgm_dts_outcomes';
  $handler->display->display_options['fields']['field_pgm_dts_outcomes']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_outcomes']['element_label_colon'] = FALSE;
  /* Field: Content: Pgm Details Description */
  $handler->display->display_options['fields']['field_pgm_details_description']['id'] = 'field_pgm_details_description';
  $handler->display->display_options['fields']['field_pgm_details_description']['table'] = 'field_data_field_pgm_details_description';
  $handler->display->display_options['fields']['field_pgm_details_description']['field'] = 'field_pgm_details_description';
  $handler->display->display_options['fields']['field_pgm_details_description']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_details_description']['element_label_colon'] = FALSE;
  /* Field: Content: Program Details Image */
  $handler->display->display_options['fields']['field_pgm_dts_image']['id'] = 'field_pgm_dts_image';
  $handler->display->display_options['fields']['field_pgm_dts_image']['table'] = 'field_data_field_pgm_dts_image';
  $handler->display->display_options['fields']['field_pgm_dts_image']['field'] = 'field_pgm_dts_image';
  $handler->display->display_options['fields']['field_pgm_dts_image']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pgm_dts_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pgm_dts_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pgm_dts_image']['type'] = 'remote_picture';
  $handler->display->display_options['fields']['field_pgm_dts_image']['settings'] = array(
    'picture_group' => 'body_full_width',
    'fallback_image_style' => 'body_full_width',
    'image_link' => '',
    'colorbox' => 'featured_content_2',
  );
  /* Field: Content: Program name */
  $handler->display->display_options['fields']['field_pgm_dts_program_name']['id'] = 'field_pgm_dts_program_name';
  $handler->display->display_options['fields']['field_pgm_dts_program_name']['table'] = 'field_data_field_pgm_dts_program_name';
  $handler->display->display_options['fields']['field_pgm_dts_program_name']['field'] = 'field_pgm_dts_program_name';
  $handler->display->display_options['fields']['field_pgm_dts_program_name']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_program_name']['element_label_colon'] = FALSE;
  /* Field: Content: Related programs */
  $handler->display->display_options['fields']['field_pgm_dts_related_programs']['id'] = 'field_pgm_dts_related_programs';
  $handler->display->display_options['fields']['field_pgm_dts_related_programs']['table'] = 'field_data_field_pgm_dts_related_programs';
  $handler->display->display_options['fields']['field_pgm_dts_related_programs']['field'] = 'field_pgm_dts_related_programs';
  $handler->display->display_options['fields']['field_pgm_dts_related_programs']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_related_programs']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pgm_dts_related_programs']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pgm_dts_related_programs']['alter']['path'] = 'program/[field_pgm_dts_related_programs]';
  $handler->display->display_options['fields']['field_pgm_dts_related_programs']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_pgm_dts_related_programs']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pgm_dts_related_programs']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_pgm_dts_related_programs']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_pgm_dts_related_programs']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_pgm_dts_related_programs']['multi_type'] = 'ul';
  /* Field: Content: Secondary Content */
  $handler->display->display_options['fields']['field_content_secondary_content']['id'] = 'field_content_secondary_content';
  $handler->display->display_options['fields']['field_content_secondary_content']['table'] = 'field_data_field_content_secondary_content';
  $handler->display->display_options['fields']['field_content_secondary_content']['field'] = 'field_content_secondary_content';
  $handler->display->display_options['fields']['field_content_secondary_content']['label'] = '';
  $handler->display->display_options['fields']['field_content_secondary_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_secondary_content']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_content_secondary_content']['delta_offset'] = '0';
  /* Field: Content: Specializations */
  $handler->display->display_options['fields']['field_pgm_dts_specializations']['id'] = 'field_pgm_dts_specializations';
  $handler->display->display_options['fields']['field_pgm_dts_specializations']['table'] = 'field_data_field_pgm_dts_specializations';
  $handler->display->display_options['fields']['field_pgm_dts_specializations']['field'] = 'field_pgm_dts_specializations';
  $handler->display->display_options['fields']['field_pgm_dts_specializations']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_specializations']['element_label_colon'] = FALSE;
  /* Field: Content: Tab - Admissions Requirements */
  $handler->display->display_options['fields']['field_pgm_dts_admissions_reqs']['id'] = 'field_pgm_dts_admissions_reqs';
  $handler->display->display_options['fields']['field_pgm_dts_admissions_reqs']['table'] = 'field_data_field_pgm_dts_admissions_reqs';
  $handler->display->display_options['fields']['field_pgm_dts_admissions_reqs']['field'] = 'field_pgm_dts_admissions_reqs';
  $handler->display->display_options['fields']['field_pgm_dts_admissions_reqs']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_admissions_reqs']['element_label_colon'] = FALSE;
  /* Field: Content: Tab - Curriculum */
  $handler->display->display_options['fields']['field_pgm_dts_tab_curriculum']['id'] = 'field_pgm_dts_tab_curriculum';
  $handler->display->display_options['fields']['field_pgm_dts_tab_curriculum']['table'] = 'field_data_field_pgm_dts_tab_curriculum';
  $handler->display->display_options['fields']['field_pgm_dts_tab_curriculum']['field'] = 'field_pgm_dts_tab_curriculum';
  $handler->display->display_options['fields']['field_pgm_dts_tab_curriculum']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_tab_curriculum']['element_label_colon'] = FALSE;
  /* Field: Content: Tab - Internships */
  $handler->display->display_options['fields']['field_pgm_dts_tab_internships']['id'] = 'field_pgm_dts_tab_internships';
  $handler->display->display_options['fields']['field_pgm_dts_tab_internships']['table'] = 'field_data_field_pgm_dts_tab_internships';
  $handler->display->display_options['fields']['field_pgm_dts_tab_internships']['field'] = 'field_pgm_dts_tab_internships';
  $handler->display->display_options['fields']['field_pgm_dts_tab_internships']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_tab_internships']['element_label_colon'] = FALSE;
  /* Field: Content: Tab - Research Opportunities */
  $handler->display->display_options['fields']['field_pgm_dts_research_opp']['id'] = 'field_pgm_dts_research_opp';
  $handler->display->display_options['fields']['field_pgm_dts_research_opp']['table'] = 'field_data_field_pgm_dts_research_opp';
  $handler->display->display_options['fields']['field_pgm_dts_research_opp']['field'] = 'field_pgm_dts_research_opp';
  $handler->display->display_options['fields']['field_pgm_dts_research_opp']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_research_opp']['element_label_colon'] = FALSE;
  /* Field: Content: Tab - Student Organizations */
  $handler->display->display_options['fields']['field_pgm_dts_tab_organizations']['id'] = 'field_pgm_dts_tab_organizations';
  $handler->display->display_options['fields']['field_pgm_dts_tab_organizations']['table'] = 'field_data_field_pgm_dts_tab_organizations';
  $handler->display->display_options['fields']['field_pgm_dts_tab_organizations']['field'] = 'field_pgm_dts_tab_organizations';
  $handler->display->display_options['fields']['field_pgm_dts_tab_organizations']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_tab_organizations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pgm_dts_tab_organizations']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_pgm_dts_tab_organizations']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
  );
  $handler->display->display_options['fields']['field_pgm_dts_tab_organizations']['delta_limit'] = '10';
  $handler->display->display_options['fields']['field_pgm_dts_tab_organizations']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_pgm_dts_tab_organizations']['multi_type'] = 'ul';
  /* Field: Content: Tab - Tuition and Scholarships */
  $handler->display->display_options['fields']['field_pgm_dts_tab_tuition']['id'] = 'field_pgm_dts_tab_tuition';
  $handler->display->display_options['fields']['field_pgm_dts_tab_tuition']['table'] = 'field_data_field_pgm_dts_tab_tuition';
  $handler->display->display_options['fields']['field_pgm_dts_tab_tuition']['field'] = 'field_pgm_dts_tab_tuition';
  $handler->display->display_options['fields']['field_pgm_dts_tab_tuition']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_tab_tuition']['element_label_colon'] = FALSE;
  /* Field: Content: Tab - What You'll Learn */
  $handler->display->display_options['fields']['field_pgm_dts_tab_learn']['id'] = 'field_pgm_dts_tab_learn';
  $handler->display->display_options['fields']['field_pgm_dts_tab_learn']['table'] = 'field_data_field_pgm_dts_tab_learn';
  $handler->display->display_options['fields']['field_pgm_dts_tab_learn']['field'] = 'field_pgm_dts_tab_learn';
  $handler->display->display_options['fields']['field_pgm_dts_tab_learn']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_tab_learn']['element_label_colon'] = FALSE;
  /* Field: Content: Program Availibility */
  $handler->display->display_options['fields']['field_pgm_dts_availibility']['id'] = 'field_pgm_dts_availibility';
  $handler->display->display_options['fields']['field_pgm_dts_availibility']['table'] = 'field_data_field_pgm_dts_availibility';
  $handler->display->display_options['fields']['field_pgm_dts_availibility']['field'] = 'field_pgm_dts_availibility';
  $handler->display->display_options['fields']['field_pgm_dts_availibility']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_availibility']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pgm_dts_availibility']['delta_offset'] = '0';
  /* Field: Content: Tab - Custom 1 */
  $handler->display->display_options['fields']['field_tab_custom']['id'] = 'field_tab_custom';
  $handler->display->display_options['fields']['field_tab_custom']['table'] = 'field_data_field_tab_custom';
  $handler->display->display_options['fields']['field_tab_custom']['field'] = 'field_tab_custom';
  $handler->display->display_options['fields']['field_tab_custom']['label'] = '';
  $handler->display->display_options['fields']['field_tab_custom']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tab_custom']['alter']['text'] = '<h3 class="accordion-custom-tab">
        <a href="#accordion-custom-tab">[field_tab_custom-summary] 
</a>
<div id="accordion-custom-tab" class="acc-content">[field_tab_custom-value]</div>';
  $handler->display->display_options['fields']['field_tab_custom']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tab_custom']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_tab_custom']['delta_offset'] = '0';
  /* Field: Content: Tab - Custom 2 */
  $handler->display->display_options['fields']['field_tab_custom_2']['id'] = 'field_tab_custom_2';
  $handler->display->display_options['fields']['field_tab_custom_2']['table'] = 'field_data_field_tab_custom_2';
  $handler->display->display_options['fields']['field_tab_custom_2']['field'] = 'field_tab_custom_2';
  $handler->display->display_options['fields']['field_tab_custom_2']['label'] = '';
  $handler->display->display_options['fields']['field_tab_custom_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tab_custom_2']['alter']['text'] = '<h3 class="accordion-custom-tab_2">
        <a href="#accordion-custom-tab_2">[field_tab_custom-summary] 
</a>
<div id="accordion-custom-tab_2" class="acc-content">[field_tab_custom-value]</div>';
  $handler->display->display_options['fields']['field_tab_custom_2']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['nid']['validate_options']['code'] = '/* 
$argument is passed in from URL 
$handler->argument needs to be node id 
return TRUE
*/

$previous = db_set_active( $view->display_handler->options[\'remote_database\'] );
$source = db_query("SELECT source FROM url_alias WHERE alias LIKE \'%/$argument\'")->fetchField();
$nodeId = explode(\'/\',$source);

$handler->argument = $nodeId[1];
db_set_active($previous);
return TRUE;';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page (remote) */
  $handler = $view->new_display('remote_page', 'Page (remote)', 'remote_page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Academic Unit */
  $handler->display->display_options['fields']['field_pgm_dts_academic_unit']['id'] = 'field_pgm_dts_academic_unit';
  $handler->display->display_options['fields']['field_pgm_dts_academic_unit']['table'] = 'field_data_field_pgm_dts_academic_unit';
  $handler->display->display_options['fields']['field_pgm_dts_academic_unit']['field'] = 'field_pgm_dts_academic_unit';
  $handler->display->display_options['fields']['field_pgm_dts_academic_unit']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_academic_unit']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pgm_dts_academic_unit']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_pgm_dts_academic_unit']['delta_offset'] = '0';
  /* Field: Content: Other Programs Available */
  $handler->display->display_options['fields']['field_pgm_dts_other_programs']['id'] = 'field_pgm_dts_other_programs';
  $handler->display->display_options['fields']['field_pgm_dts_other_programs']['table'] = 'field_data_field_pgm_dts_other_programs';
  $handler->display->display_options['fields']['field_pgm_dts_other_programs']['field'] = 'field_pgm_dts_other_programs';
  $handler->display->display_options['fields']['field_pgm_dts_other_programs']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_other_programs']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_pgm_dts_other_programs']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pgm_dts_other_programs']['alter']['path'] = '[field_pgm_dts_other_programs-url]';
  $handler->display->display_options['fields']['field_pgm_dts_other_programs']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_pgm_dts_other_programs']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_pgm_dts_other_programs']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_pgm_dts_other_programs']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pgm_dts_other_programs']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_pgm_dts_other_programs']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_pgm_dts_other_programs']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_pgm_dts_other_programs']['multi_type'] = 'ul';
  /* Field: Content: Outcomes */
  $handler->display->display_options['fields']['field_pgm_dts_outcomes']['id'] = 'field_pgm_dts_outcomes';
  $handler->display->display_options['fields']['field_pgm_dts_outcomes']['table'] = 'field_data_field_pgm_dts_outcomes';
  $handler->display->display_options['fields']['field_pgm_dts_outcomes']['field'] = 'field_pgm_dts_outcomes';
  $handler->display->display_options['fields']['field_pgm_dts_outcomes']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_outcomes']['element_label_colon'] = FALSE;
  /* Field: Content: Pgm Details Description */
  $handler->display->display_options['fields']['field_pgm_details_description']['id'] = 'field_pgm_details_description';
  $handler->display->display_options['fields']['field_pgm_details_description']['table'] = 'field_data_field_pgm_details_description';
  $handler->display->display_options['fields']['field_pgm_details_description']['field'] = 'field_pgm_details_description';
  $handler->display->display_options['fields']['field_pgm_details_description']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_details_description']['element_label_colon'] = FALSE;
  /* Field: Content: Program Details Image */
  $handler->display->display_options['fields']['field_pgm_dts_image']['id'] = 'field_pgm_dts_image';
  $handler->display->display_options['fields']['field_pgm_dts_image']['table'] = 'field_data_field_pgm_dts_image';
  $handler->display->display_options['fields']['field_pgm_dts_image']['field'] = 'field_pgm_dts_image';
  $handler->display->display_options['fields']['field_pgm_dts_image']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pgm_dts_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pgm_dts_image']['type'] = 'remote_picture';
  $handler->display->display_options['fields']['field_pgm_dts_image']['settings'] = array(
    'picture_group' => 'body_full_width',
    'fallback_image_style' => 'body_full_width',
    'image_link' => '',
    'colorbox' => 'featured_content_2',
  );
  /* Field: Content: Program name */
  $handler->display->display_options['fields']['field_pgm_dts_program_name']['id'] = 'field_pgm_dts_program_name';
  $handler->display->display_options['fields']['field_pgm_dts_program_name']['table'] = 'field_data_field_pgm_dts_program_name';
  $handler->display->display_options['fields']['field_pgm_dts_program_name']['field'] = 'field_pgm_dts_program_name';
  $handler->display->display_options['fields']['field_pgm_dts_program_name']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_program_name']['element_label_colon'] = FALSE;
  /* Field: Content: Related programs */
  $handler->display->display_options['fields']['field_pgm_dts_related_programs']['id'] = 'field_pgm_dts_related_programs';
  $handler->display->display_options['fields']['field_pgm_dts_related_programs']['table'] = 'field_data_field_pgm_dts_related_programs';
  $handler->display->display_options['fields']['field_pgm_dts_related_programs']['field'] = 'field_pgm_dts_related_programs';
  $handler->display->display_options['fields']['field_pgm_dts_related_programs']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_related_programs']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_pgm_dts_related_programs']['alter']['path'] = 'program/[field_pgm_dts_related_programs]';
  $handler->display->display_options['fields']['field_pgm_dts_related_programs']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_pgm_dts_related_programs']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_pgm_dts_related_programs']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pgm_dts_related_programs']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_pgm_dts_related_programs']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_pgm_dts_related_programs']['multi_type'] = 'ul';
  /* Field: Content: Secondary Content */
  $handler->display->display_options['fields']['field_content_secondary_content']['id'] = 'field_content_secondary_content';
  $handler->display->display_options['fields']['field_content_secondary_content']['table'] = 'field_data_field_content_secondary_content';
  $handler->display->display_options['fields']['field_content_secondary_content']['field'] = 'field_content_secondary_content';
  $handler->display->display_options['fields']['field_content_secondary_content']['label'] = '';
  $handler->display->display_options['fields']['field_content_secondary_content']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_secondary_content']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_content_secondary_content']['delta_offset'] = '0';
  /* Field: Content: Specializations */
  $handler->display->display_options['fields']['field_pgm_dts_specializations']['id'] = 'field_pgm_dts_specializations';
  $handler->display->display_options['fields']['field_pgm_dts_specializations']['table'] = 'field_data_field_pgm_dts_specializations';
  $handler->display->display_options['fields']['field_pgm_dts_specializations']['field'] = 'field_pgm_dts_specializations';
  $handler->display->display_options['fields']['field_pgm_dts_specializations']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_specializations']['element_label_colon'] = FALSE;
  /* Field: Content: Tab - Admissions Requirements */
  $handler->display->display_options['fields']['field_pgm_dts_admissions_reqs']['id'] = 'field_pgm_dts_admissions_reqs';
  $handler->display->display_options['fields']['field_pgm_dts_admissions_reqs']['table'] = 'field_data_field_pgm_dts_admissions_reqs';
  $handler->display->display_options['fields']['field_pgm_dts_admissions_reqs']['field'] = 'field_pgm_dts_admissions_reqs';
  $handler->display->display_options['fields']['field_pgm_dts_admissions_reqs']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_admissions_reqs']['element_label_colon'] = FALSE;
  /* Field: Content: Tab - Curriculum */
  $handler->display->display_options['fields']['field_pgm_dts_tab_curriculum']['id'] = 'field_pgm_dts_tab_curriculum';
  $handler->display->display_options['fields']['field_pgm_dts_tab_curriculum']['table'] = 'field_data_field_pgm_dts_tab_curriculum';
  $handler->display->display_options['fields']['field_pgm_dts_tab_curriculum']['field'] = 'field_pgm_dts_tab_curriculum';
  $handler->display->display_options['fields']['field_pgm_dts_tab_curriculum']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_tab_curriculum']['element_label_colon'] = FALSE;
  /* Field: Content: Tab - Internships */
  $handler->display->display_options['fields']['field_pgm_dts_tab_internships']['id'] = 'field_pgm_dts_tab_internships';
  $handler->display->display_options['fields']['field_pgm_dts_tab_internships']['table'] = 'field_data_field_pgm_dts_tab_internships';
  $handler->display->display_options['fields']['field_pgm_dts_tab_internships']['field'] = 'field_pgm_dts_tab_internships';
  $handler->display->display_options['fields']['field_pgm_dts_tab_internships']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_tab_internships']['element_label_colon'] = FALSE;
  /* Field: Content: Tab - Research Opportunities */
  $handler->display->display_options['fields']['field_pgm_dts_research_opp']['id'] = 'field_pgm_dts_research_opp';
  $handler->display->display_options['fields']['field_pgm_dts_research_opp']['table'] = 'field_data_field_pgm_dts_research_opp';
  $handler->display->display_options['fields']['field_pgm_dts_research_opp']['field'] = 'field_pgm_dts_research_opp';
  $handler->display->display_options['fields']['field_pgm_dts_research_opp']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_research_opp']['element_label_colon'] = FALSE;
  /* Field: Content: Tab - Student Organizations */
  $handler->display->display_options['fields']['field_pgm_dts_tab_organizations']['id'] = 'field_pgm_dts_tab_organizations';
  $handler->display->display_options['fields']['field_pgm_dts_tab_organizations']['table'] = 'field_data_field_pgm_dts_tab_organizations';
  $handler->display->display_options['fields']['field_pgm_dts_tab_organizations']['field'] = 'field_pgm_dts_tab_organizations';
  $handler->display->display_options['fields']['field_pgm_dts_tab_organizations']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_tab_organizations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pgm_dts_tab_organizations']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_pgm_dts_tab_organizations']['settings'] = array(
    'view_mode' => 'default',
    'links' => 0,
  );
  $handler->display->display_options['fields']['field_pgm_dts_tab_organizations']['delta_limit'] = '10';
  $handler->display->display_options['fields']['field_pgm_dts_tab_organizations']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_pgm_dts_tab_organizations']['multi_type'] = 'ul';
  /* Field: Content: Tab - Tuition and Scholarships */
  $handler->display->display_options['fields']['field_pgm_dts_tab_tuition']['id'] = 'field_pgm_dts_tab_tuition';
  $handler->display->display_options['fields']['field_pgm_dts_tab_tuition']['table'] = 'field_data_field_pgm_dts_tab_tuition';
  $handler->display->display_options['fields']['field_pgm_dts_tab_tuition']['field'] = 'field_pgm_dts_tab_tuition';
  $handler->display->display_options['fields']['field_pgm_dts_tab_tuition']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_tab_tuition']['element_label_colon'] = FALSE;
  /* Field: Content: Tab - What You'll Learn */
  $handler->display->display_options['fields']['field_pgm_dts_tab_learn']['id'] = 'field_pgm_dts_tab_learn';
  $handler->display->display_options['fields']['field_pgm_dts_tab_learn']['table'] = 'field_data_field_pgm_dts_tab_learn';
  $handler->display->display_options['fields']['field_pgm_dts_tab_learn']['field'] = 'field_pgm_dts_tab_learn';
  $handler->display->display_options['fields']['field_pgm_dts_tab_learn']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_tab_learn']['element_label_colon'] = FALSE;
  /* Field: Content: Tab - Custom 1 */
  $handler->display->display_options['fields']['field_tab_custom']['id'] = 'field_tab_custom';
  $handler->display->display_options['fields']['field_tab_custom']['table'] = 'field_data_field_tab_custom';
  $handler->display->display_options['fields']['field_tab_custom']['field'] = 'field_tab_custom';
  $handler->display->display_options['fields']['field_tab_custom']['label'] = '';
  $handler->display->display_options['fields']['field_tab_custom']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tab_custom']['alter']['text'] = '<h3 class="accordion-custom-tab">
        <a href="#accordion-custom-tab">[field_tab_custom-summary] 
</a></h3>
<div class="acc-content" id="accordion-custom-tab">[field_tab_custom-value]</div>';
  $handler->display->display_options['fields']['field_tab_custom']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tab_custom']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tab_custom']['separator'] = '';
  /* Field: Content: Tab - Custom 2 */
  $handler->display->display_options['fields']['field_tab_custom_2']['id'] = 'field_tab_custom_2';
  $handler->display->display_options['fields']['field_tab_custom_2']['table'] = 'field_data_field_tab_custom_2';
  $handler->display->display_options['fields']['field_tab_custom_2']['field'] = 'field_tab_custom_2';
  $handler->display->display_options['fields']['field_tab_custom_2']['label'] = '';
  $handler->display->display_options['fields']['field_tab_custom_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tab_custom_2']['alter']['text'] = '<h3 class="accordion-custom-tab_2">
        <a href="#accordion-custom-tab_2">[field_tab_custom_2-summary] 
</a>
</h3>
<div id="accordion-custom-tab_2" class="acc-content">[field_tab_custom_2-value]</div>';
  $handler->display->display_options['fields']['field_tab_custom_2']['element_label_colon'] = FALSE;
  /* Field: Content: Tab - Custom 3 */
  $handler->display->display_options['fields']['field_tab_custom_3']['id'] = 'field_tab_custom_3';
  $handler->display->display_options['fields']['field_tab_custom_3']['table'] = 'field_data_field_tab_custom_3';
  $handler->display->display_options['fields']['field_tab_custom_3']['field'] = 'field_tab_custom_3';
  $handler->display->display_options['fields']['field_tab_custom_3']['label'] = '';
  $handler->display->display_options['fields']['field_tab_custom_3']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tab_custom_3']['alter']['text'] = '<h3 class="accordion-custom-tab_3">
        <a href="#accordion-custom-tab_3">[field_tab_custom_3-summary] 
</a>
</h3>
<div id="accordion-custom-tab_3" class="acc-content">[field_tab_custom_3-value]</div>';
  $handler->display->display_options['fields']['field_tab_custom_3']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
  //Convert whitespaces and underscore to dash
  echo strtolower(str_replace(" ", "-", $row->title));
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Meta Description */
  $handler->display->display_options['fields']['field_pgm_dts_metadescription']['id'] = 'field_pgm_dts_metadescription';
  $handler->display->display_options['fields']['field_pgm_dts_metadescription']['table'] = 'field_data_field_pgm_dts_metadescription';
  $handler->display->display_options['fields']['field_pgm_dts_metadescription']['field'] = 'field_pgm_dts_metadescription';
  $handler->display->display_options['fields']['field_pgm_dts_metadescription']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_metadescription']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pgm_dts_metadescription']['element_label_colon'] = FALSE;
  /* Field: Content: Meta Keywords */
  $handler->display->display_options['fields']['field_pgm_dts_metakeywords']['id'] = 'field_pgm_dts_metakeywords';
  $handler->display->display_options['fields']['field_pgm_dts_metakeywords']['table'] = 'field_data_field_pgm_dts_metakeywords';
  $handler->display->display_options['fields']['field_pgm_dts_metakeywords']['field'] = 'field_pgm_dts_metakeywords';
  $handler->display->display_options['fields']['field_pgm_dts_metakeywords']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_metakeywords']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pgm_dts_metakeywords']['element_label_colon'] = FALSE;
  /* Field: Content: Program Availibility */
  $handler->display->display_options['fields']['field_pgm_dts_availibility']['id'] = 'field_pgm_dts_availibility';
  $handler->display->display_options['fields']['field_pgm_dts_availibility']['table'] = 'field_data_field_pgm_dts_availibility';
  $handler->display->display_options['fields']['field_pgm_dts_availibility']['field'] = 'field_pgm_dts_availibility';
  $handler->display->display_options['fields']['field_pgm_dts_availibility']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_dts_availibility']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pgm_dts_availibility']['delta_offset'] = '0';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php 
  echo token_replace($data->_field_data[\'nid\'][\'entity\']->metatags[\'und\'][\'canonical\'][\'value\']);
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  $handler->display->display_options['metatags'] = array(
    'title' => array(
      'value' => '[field_pgm_dts_program_name] [view:title] | [site:name]',
    ),
    'description' => array(
      'value' => '[field_pgm_dts_metadescription]',
    ),
    'keywords' => array(
      'value' => '[field_pgm_dts_metakeywords]',
    ),
    'canonical' => array(
      'value' => '[php_1]',
    ),
  );
  $handler->display->display_options['path'] = 'program/%';
  $handler->display->display_options['remote_database'] = 'hub';
  $export['academics_program'] = $view;

  $view = new view();
  $view->name = 'academics_programs_matrix_college';
  $view->description = 'Creighton offers majors, minors, degrees and certificates in more than 160 academic areas through 9 schools and colleges.';
  $view->tag = 'Academics';
  $view->base_table = 'node';
  $view->human_name = 'Academics Programs Matrix College';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Academic Programs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '3';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_aca_prg_title' => 'field_aca_prg_title',
    'field_aca_prg_bachelors_page' => 'field_aca_prg_bachelors_page',
    'field_aca_prg_bachelors' => 'field_aca_prg_bachelors',
    'field_aca_prg_minor_page' => 'field_aca_prg_minor_page',
    'field_aca_prg_minor_title' => 'field_aca_prg_bachelors',
    'field_aca_prg_masters_page' => 'field_aca_prg_masters_page',
    'field_aca_prg_masters_title' => 'field_aca_prg_masters_title',
    'field_aca_prg_doctorate_page' => 'field_aca_prg_doctorate_page',
    'field_aca_prg_doctorate_title' => 'field_aca_prg_doctorate_title',
    'field_aca_prg_certificate_page' => 'field_aca_prg_certificate_page',
    'field_aca_prg_certificate_title' => 'field_aca_prg_certificate_title',
    'field_aca_prg_associates_page' => 'field_aca_prg_associates_page',
    'field_aca_prg_associates_title' => 'field_aca_prg_associates_title',
    'field_aca_prg_certificate_online' => 'field_aca_prg_certificate_title',
    'field_aca_prg_associates_online' => 'field_aca_prg_associates_title',
    'field_aca_prg_minor_online' => 'field_aca_prg_bachelors',
    'field_aca_prg_bachelors_online' => 'field_aca_prg_bachelors',
    'field_aca_prg_masters_online' => 'field_aca_prg_masters_title',
    'field_aca_prg_doctorate_online' => 'field_aca_prg_doctorate_title',
    'field_aca_prg_assoc_onlineonly' => 'field_aca_prg_certificate_title',
    'field_aca_prg_bach_onlineonly' => 'field_aca_prg_bachelors',
    'field_aca_prg_cert_onlineonly' => 'field_aca_prg_certificate_title',
    'field_aca_prg_doc_onlineonly' => 'field_aca_prg_doctorate_title',
    'field_aca_prg_masters_onlineonly' => 'field_aca_prg_masters_title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_aca_prg_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_bachelors_page' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_aca_prg_bachelors' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_minor_page' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_aca_prg_minor_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_masters_page' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_aca_prg_masters_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_doctorate_page' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_aca_prg_doctorate_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_certificate_page' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_aca_prg_certificate_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_associates_page' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_aca_prg_associates_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_certificate_online' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_associates_online' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_minor_online' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_bachelors_online' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_masters_online' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_doctorate_online' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_assoc_onlineonly' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_bach_onlineonly' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_cert_onlineonly' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_doc_onlineonly' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_masters_onlineonly' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No programs available with those filter conditions.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'academic_interests' => 0,
    'academic_programs_offerings' => 0,
    'academic_unit' => 0,
    'profile_specialties' => 0,
    'profile_type' => 0,
    'program' => 0,
  );
  /* Field: Content: Academic Program Title */
  $handler->display->display_options['fields']['field_aca_prg_title']['id'] = 'field_aca_prg_title';
  $handler->display->display_options['fields']['field_aca_prg_title']['table'] = 'field_data_field_aca_prg_title';
  $handler->display->display_options['fields']['field_aca_prg_title']['field'] = 'field_aca_prg_title';
  $handler->display->display_options['fields']['field_aca_prg_title']['label'] = 'PROGRAM';
  $handler->display->display_options['fields']['field_aca_prg_title']['element_label_colon'] = FALSE;
  /* Field: Content: Bachelors Page */
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['id'] = 'field_aca_prg_bachelors_page';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['table'] = 'field_data_field_aca_prg_bachelors_page';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['field'] = 'field_aca_prg_bachelors_page';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Bachelors Link Text */
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['id'] = 'field_aca_prg_bachelors';
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['table'] = 'field_data_field_aca_prg_bachelors';
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['field'] = 'field_aca_prg_bachelors';
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['label'] = 'BACHELOR\'S';
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['alter']['path'] = 'program/[field_aca_prg_bachelors_page]';
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['element_label_colon'] = FALSE;
  /* Field: Content: Minor Page */
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['id'] = 'field_aca_prg_minor_page';
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['table'] = 'field_data_field_aca_prg_minor_page';
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['field'] = 'field_aca_prg_minor_page';
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Minor Link Text */
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['id'] = 'field_aca_prg_minor_title';
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['table'] = 'field_data_field_aca_prg_minor_title';
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['field'] = 'field_aca_prg_minor_title';
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['label'] = 'BACHELOR\'S';
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['alter']['path'] = 'program/[field_aca_prg_minor_page]';
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['element_label_colon'] = FALSE;
  /* Field: Content: Masters Page */
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['id'] = 'field_aca_prg_masters_page';
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['table'] = 'field_data_field_aca_prg_masters_page';
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['field'] = 'field_aca_prg_masters_page';
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Masters Link Text */
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['id'] = 'field_aca_prg_masters_title';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['table'] = 'field_data_field_aca_prg_masters_title';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['field'] = 'field_aca_prg_masters_title';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['label'] = 'MASTER\'S';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['path'] = 'program/[field_aca_prg_masters_page]';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['element_label_colon'] = FALSE;
  /* Field: Content: Doctorate Page */
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['id'] = 'field_aca_prg_doctorate_page';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['table'] = 'field_data_field_aca_prg_doctorate_page';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['field'] = 'field_aca_prg_doctorate_page';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['alter']['path'] = 'node/[field_aca_prg_doctorate_page]';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Doctorate Link Text */
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['id'] = 'field_aca_prg_doctorate_title';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['table'] = 'field_data_field_aca_prg_doctorate_title';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['field'] = 'field_aca_prg_doctorate_title';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['label'] = 'DOCTORATE';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['path'] = 'program/[field_aca_prg_doctorate_page]';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['element_label_colon'] = FALSE;
  /* Field: Content: Certificate Page */
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['id'] = 'field_aca_prg_certificate_page';
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['table'] = 'field_data_field_aca_prg_certificate_page';
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['field'] = 'field_aca_prg_certificate_page';
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Certificate Link Text */
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['id'] = 'field_aca_prg_certificate_title';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['table'] = 'field_data_field_aca_prg_certificate_title';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['field'] = 'field_aca_prg_certificate_title';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['label'] = 'CERTIFICATE';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['path'] = 'program/[field_aca_prg_certificate_page]';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['element_label_colon'] = FALSE;
  /* Field: Content: Associates Page */
  $handler->display->display_options['fields']['field_aca_prg_associates_page']['id'] = 'field_aca_prg_associates_page';
  $handler->display->display_options['fields']['field_aca_prg_associates_page']['table'] = 'field_data_field_aca_prg_associates_page';
  $handler->display->display_options['fields']['field_aca_prg_associates_page']['field'] = 'field_aca_prg_associates_page';
  $handler->display->display_options['fields']['field_aca_prg_associates_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_associates_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_associates_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_associates_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Associates Link Text */
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['id'] = 'field_aca_prg_associates_title';
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['table'] = 'field_data_field_aca_prg_associates_title';
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['field'] = 'field_aca_prg_associates_title';
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['label'] = 'ASSOCIATES';
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['alter']['path'] = 'program/[field_aca_prg_associates_page]';
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['element_label_colon'] = FALSE;
  /* Field: Content: Certificate Online Link */
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['id'] = 'field_aca_prg_certificate_online';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['table'] = 'field_data_field_aca_prg_certificate_online';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['field'] = 'field_aca_prg_certificate_online';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['text'] = 'Online';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['path'] = '[field_aca_prg_certificate_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['type'] = 'link_title_plain';
  /* Field: Content: Associates Online Link */
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['id'] = 'field_aca_prg_associates_online';
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['table'] = 'field_data_field_aca_prg_associates_online';
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['field'] = 'field_aca_prg_associates_online';
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['alter']['path'] = '[field_aca_prg_associates_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['type'] = 'link_title_plain';
  /* Field: Content: Minor Online Link */
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['id'] = 'field_aca_prg_minor_online';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['table'] = 'field_data_field_aca_prg_minor_online';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['field'] = 'field_aca_prg_minor_online';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['alter']['path'] = '[field_aca_prg_minor_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['type'] = 'link_title_plain';
  /* Field: Content: Bachelors Online Link */
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['id'] = 'field_aca_prg_bachelors_online';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['table'] = 'field_data_field_aca_prg_bachelors_online';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['field'] = 'field_aca_prg_bachelors_online';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['alter']['path'] = '[field_aca_prg_bachelors_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['type'] = 'link_title_plain';
  /* Field: Content: Masters Online Link */
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['id'] = 'field_aca_prg_masters_online';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['table'] = 'field_data_field_aca_prg_masters_online';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['field'] = 'field_aca_prg_masters_online';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['path'] = '[field_aca_prg_masters_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['type'] = 'link_title_plain';
  /* Field: Content: Doctorate Online Link */
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['id'] = 'field_aca_prg_doctorate_online';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['table'] = 'field_data_field_aca_prg_doctorate_online';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['field'] = 'field_aca_prg_doctorate_online';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['path'] = '[field_aca_prg_doctorate_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['type'] = 'link_title_plain';
  /* Field: Content: Associates Online Only */
  $handler->display->display_options['fields']['field_aca_prg_assoc_onlineonly']['id'] = 'field_aca_prg_assoc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_assoc_onlineonly']['table'] = 'field_data_field_aca_prg_assoc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_assoc_onlineonly']['field'] = 'field_aca_prg_assoc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_assoc_onlineonly']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_assoc_onlineonly']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_assoc_onlineonly']['click_sort_column'] = 'url';
  /* Field: Content: Bachelors Online Only */
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['id'] = 'field_aca_prg_bach_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['table'] = 'field_data_field_aca_prg_bach_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['field'] = 'field_aca_prg_bach_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['click_sort_column'] = 'url';
  /* Field: Content: Certificate Online Only */
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['id'] = 'field_aca_prg_cert_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['table'] = 'field_data_field_aca_prg_cert_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['field'] = 'field_aca_prg_cert_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['click_sort_column'] = 'url';
  /* Field: Content: Doctorate Online Only */
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['id'] = 'field_aca_prg_doc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['table'] = 'field_data_field_aca_prg_doc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['field'] = 'field_aca_prg_doc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['click_sort_column'] = 'url';
  /* Field: Content: Masters Online Only */
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['id'] = 'field_aca_prg_masters_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['table'] = 'field_data_field_aca_prg_masters_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['field'] = 'field_aca_prg_masters_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Academic Program Title (field_aca_prg_title) */
  $handler->display->display_options['sorts']['field_aca_prg_title_value']['id'] = 'field_aca_prg_title_value';
  $handler->display->display_options['sorts']['field_aca_prg_title_value']['table'] = 'field_data_field_aca_prg_title';
  $handler->display->display_options['sorts']['field_aca_prg_title_value']['field'] = 'field_aca_prg_title_value';
  $handler->display->display_options['sorts']['field_aca_prg_title_value']['expose']['label'] = 'Academic Program Title (field_aca_prg_title)';
  /* Contextual filter: Content: Academic Program Title (field_aca_prg_title) */
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['id'] = 'field_aca_prg_title_value';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['table'] = 'field_data_field_aca_prg_title';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['field'] = 'field_aca_prg_title_value';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['default_argument_options']['argument'] = 'a';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['summary_options']['separator'] = '|';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['limit'] = '1';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['case'] = 'upper';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['path_case'] = 'lower';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'academic_program' => 'academic_program',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_1']['id'] = 'name_1';
  $handler->display->display_options['filters']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_1']['field'] = 'name';
  $handler->display->display_options['filters']['name_1']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name_1']['value'] = 'Conflict-Resolution';
  $handler->display->display_options['filters']['name_1']['group'] = 2;

  /* Display: Page (remote) */
  $handler = $view->new_display('remote_page', 'Page (remote)', 'remote_page_1');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Academic Program Title (field_aca_prg_title) */
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['id'] = 'field_aca_prg_title_value';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['table'] = 'field_data_field_aca_prg_title';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['field'] = 'field_aca_prg_title_value';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['default_argument_options']['argument'] = 'a';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['limit'] = '1';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['case'] = 'upper';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['path_case'] = 'lower';
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
    'academic_program' => 'academic_program',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'programs/college';
  $handler->display->display_options['menu']['title'] = 'Glossary';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['remote_database'] = 'hub';

  /* Display: CCAS (remote) */
  $handler = $view->new_display('remote_page', 'CCAS (remote)', 'remote_page_2');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Academic Program Title (field_aca_prg_title) */
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['id'] = 'field_aca_prg_title_value';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['table'] = 'field_data_field_aca_prg_title';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['field'] = 'field_aca_prg_title_value';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['default_argument_options']['argument'] = 'a';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['summary_options']['separator'] = '|';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['limit'] = '1';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['case'] = 'upper';
  $handler->display->display_options['arguments']['field_aca_prg_title_value']['path_case'] = 'lower';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'academic_program' => 'academic_program',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'college_ccas';
  $handler->display->display_options['filters']['name']['group'] = 2;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['name']['group_info']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['group_info']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['group_info']['multiple'] = TRUE;
  $handler->display->display_options['filters']['name']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Arts',
      'operator' => '=',
      'value' => 'Arts',
    ),
    2 => array(
      'title' => 'Law',
      'operator' => '=',
      'value' => 'Law',
    ),
    3 => array(
      'title' => 'Ministry',
      'operator' => '=',
      'value' => 'Ministry',
    ),
  );
  $handler->display->display_options['path'] = 'academics/degrees-majors-and-minors/ccas';
  $handler->display->display_options['remote_database'] = 'hub';

  /* Display: Law (remote) */
  $handler = $view->new_display('remote_page', 'Law (remote)', 'remote_page_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Academic Program Title */
  $handler->display->display_options['fields']['field_aca_prg_title']['id'] = 'field_aca_prg_title';
  $handler->display->display_options['fields']['field_aca_prg_title']['table'] = 'field_data_field_aca_prg_title';
  $handler->display->display_options['fields']['field_aca_prg_title']['field'] = 'field_aca_prg_title';
  $handler->display->display_options['fields']['field_aca_prg_title']['label'] = 'PROGRAM';
  $handler->display->display_options['fields']['field_aca_prg_title']['element_label_colon'] = FALSE;
  /* Field: Content: Masters Page */
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['id'] = 'field_aca_prg_masters_page';
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['table'] = 'field_data_field_aca_prg_masters_page';
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['field'] = 'field_aca_prg_masters_page';
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Masters Link Text */
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['id'] = 'field_aca_prg_masters_title';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['table'] = 'field_data_field_aca_prg_masters_title';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['field'] = 'field_aca_prg_masters_title';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['label'] = 'MASTER\'S';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['path'] = 'program/[field_aca_prg_masters_page]';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['element_label_colon'] = FALSE;
  /* Field: Content: Doctorate Page */
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['id'] = 'field_aca_prg_doctorate_page';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['table'] = 'field_data_field_aca_prg_doctorate_page';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['field'] = 'field_aca_prg_doctorate_page';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['alter']['path'] = 'node/[field_aca_prg_doctorate_page]';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Doctorate Link Text */
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['id'] = 'field_aca_prg_doctorate_title';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['table'] = 'field_data_field_aca_prg_doctorate_title';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['field'] = 'field_aca_prg_doctorate_title';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['label'] = 'DOCTORATE';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['path'] = 'program/[field_aca_prg_doctorate_page]';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['element_label_colon'] = FALSE;
  /* Field: Content: Certificate Page */
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['id'] = 'field_aca_prg_certificate_page';
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['table'] = 'field_data_field_aca_prg_certificate_page';
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['field'] = 'field_aca_prg_certificate_page';
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Certificate Link Text */
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['id'] = 'field_aca_prg_certificate_title';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['table'] = 'field_data_field_aca_prg_certificate_title';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['field'] = 'field_aca_prg_certificate_title';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['label'] = 'CERTIFICATE';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['path'] = 'program/[field_aca_prg_certificate_page]';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['element_label_colon'] = FALSE;
  /* Field: Content: Certificate Online Link */
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['id'] = 'field_aca_prg_certificate_online';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['table'] = 'field_data_field_aca_prg_certificate_online';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['field'] = 'field_aca_prg_certificate_online';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['text'] = 'Online';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['path'] = '[field_aca_prg_certificate_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['type'] = 'link_title_plain';
  /* Field: Content: Masters Online Link */
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['id'] = 'field_aca_prg_masters_online';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['table'] = 'field_data_field_aca_prg_masters_online';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['field'] = 'field_aca_prg_masters_online';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['path'] = '[field_aca_prg_masters_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['type'] = 'link_title_plain';
  /* Field: Content: Doctorate Online Link */
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['id'] = 'field_aca_prg_doctorate_online';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['table'] = 'field_data_field_aca_prg_doctorate_online';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['field'] = 'field_aca_prg_doctorate_online';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['path'] = '[field_aca_prg_doctorate_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['type'] = 'link_title_plain';
  /* Field: Content: Certificate Online Only */
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['id'] = 'field_aca_prg_cert_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['table'] = 'field_data_field_aca_prg_cert_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['field'] = 'field_aca_prg_cert_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['click_sort_column'] = 'url';
  /* Field: Content: Doctorate Online Only */
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['id'] = 'field_aca_prg_doc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['table'] = 'field_data_field_aca_prg_doc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['field'] = 'field_aca_prg_doc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['click_sort_column'] = 'url';
  /* Field: Content: Masters Online Only */
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['id'] = 'field_aca_prg_masters_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['table'] = 'field_data_field_aca_prg_masters_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['field'] = 'field_aca_prg_masters_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'academic_program' => 'academic_program',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name_1']['id'] = 'name_1';
  $handler->display->display_options['filters']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name_1']['field'] = 'name';
  $handler->display->display_options['filters']['name_1']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name_1']['value'] = 'college_law';
  $handler->display->display_options['filters']['name_1']['group'] = 2;
  $handler->display->display_options['path'] = 'academics/degrees-majors-and-minors/law';
  $handler->display->display_options['remote_database'] = 'hub';

  /* Display: Nursing (remote) */
  $handler = $view->new_display('remote_page', 'Nursing (remote)', 'remote_page_4');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Academic Program Title */
  $handler->display->display_options['fields']['field_aca_prg_title']['id'] = 'field_aca_prg_title';
  $handler->display->display_options['fields']['field_aca_prg_title']['table'] = 'field_data_field_aca_prg_title';
  $handler->display->display_options['fields']['field_aca_prg_title']['field'] = 'field_aca_prg_title';
  $handler->display->display_options['fields']['field_aca_prg_title']['label'] = 'PROGRAM';
  $handler->display->display_options['fields']['field_aca_prg_title']['element_label_colon'] = FALSE;
  /* Field: Content: Bachelors Page */
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['id'] = 'field_aca_prg_bachelors_page';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['table'] = 'field_data_field_aca_prg_bachelors_page';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['field'] = 'field_aca_prg_bachelors_page';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Bachelors Link Text */
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['id'] = 'field_aca_prg_bachelors';
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['table'] = 'field_data_field_aca_prg_bachelors';
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['field'] = 'field_aca_prg_bachelors';
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['label'] = 'BACHELOR\'S';
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['alter']['path'] = 'program/[field_aca_prg_bachelors_page]';
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['element_label_colon'] = FALSE;
  /* Field: Content: Minor Page */
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['id'] = 'field_aca_prg_minor_page';
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['table'] = 'field_data_field_aca_prg_minor_page';
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['field'] = 'field_aca_prg_minor_page';
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Minor Link Text */
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['id'] = 'field_aca_prg_minor_title';
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['table'] = 'field_data_field_aca_prg_minor_title';
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['field'] = 'field_aca_prg_minor_title';
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['label'] = 'BACHELOR\'S';
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['alter']['path'] = 'program/[field_aca_prg_minor_page]';
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['element_label_colon'] = FALSE;
  /* Field: Content: Masters Page */
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['id'] = 'field_aca_prg_masters_page';
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['table'] = 'field_data_field_aca_prg_masters_page';
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['field'] = 'field_aca_prg_masters_page';
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Masters Link Text */
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['id'] = 'field_aca_prg_masters_title';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['table'] = 'field_data_field_aca_prg_masters_title';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['field'] = 'field_aca_prg_masters_title';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['label'] = 'MASTER\'S';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['path'] = 'program/[field_aca_prg_masters_page]';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['element_label_colon'] = FALSE;
  /* Field: Content: Doctorate Page */
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['id'] = 'field_aca_prg_doctorate_page';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['table'] = 'field_data_field_aca_prg_doctorate_page';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['field'] = 'field_aca_prg_doctorate_page';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['alter']['path'] = 'node/[field_aca_prg_doctorate_page]';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Doctorate Link Text */
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['id'] = 'field_aca_prg_doctorate_title';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['table'] = 'field_data_field_aca_prg_doctorate_title';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['field'] = 'field_aca_prg_doctorate_title';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['label'] = 'DOCTORATE';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['path'] = 'program/[field_aca_prg_doctorate_page]';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['element_label_colon'] = FALSE;
  /* Field: Content: Certificate Page */
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['id'] = 'field_aca_prg_certificate_page';
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['table'] = 'field_data_field_aca_prg_certificate_page';
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['field'] = 'field_aca_prg_certificate_page';
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Certificate Link Text */
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['id'] = 'field_aca_prg_certificate_title';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['table'] = 'field_data_field_aca_prg_certificate_title';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['field'] = 'field_aca_prg_certificate_title';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['label'] = 'CERTIFICATE';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['path'] = 'program/[field_aca_prg_certificate_page]';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['element_label_colon'] = FALSE;
  /* Field: Content: Certificate Online Link */
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['id'] = 'field_aca_prg_certificate_online';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['table'] = 'field_data_field_aca_prg_certificate_online';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['field'] = 'field_aca_prg_certificate_online';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['text'] = 'Online';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['path'] = '[field_aca_prg_certificate_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['type'] = 'link_title_plain';
  /* Field: Content: Minor Online Link */
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['id'] = 'field_aca_prg_minor_online';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['table'] = 'field_data_field_aca_prg_minor_online';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['field'] = 'field_aca_prg_minor_online';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['alter']['path'] = '[field_aca_prg_minor_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['type'] = 'link_title_plain';
  /* Field: Content: Bachelors Online Link */
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['id'] = 'field_aca_prg_bachelors_online';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['table'] = 'field_data_field_aca_prg_bachelors_online';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['field'] = 'field_aca_prg_bachelors_online';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['alter']['path'] = '[field_aca_prg_bachelors_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['type'] = 'link_title_plain';
  /* Field: Content: Masters Online Link */
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['id'] = 'field_aca_prg_masters_online';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['table'] = 'field_data_field_aca_prg_masters_online';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['field'] = 'field_aca_prg_masters_online';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['path'] = '[field_aca_prg_masters_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['type'] = 'link_title_plain';
  /* Field: Content: Doctorate Online Link */
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['id'] = 'field_aca_prg_doctorate_online';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['table'] = 'field_data_field_aca_prg_doctorate_online';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['field'] = 'field_aca_prg_doctorate_online';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['path'] = '[field_aca_prg_doctorate_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['type'] = 'link_title_plain';
  /* Field: Content: Bachelors Online Only */
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['id'] = 'field_aca_prg_bach_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['table'] = 'field_data_field_aca_prg_bach_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['field'] = 'field_aca_prg_bach_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['click_sort_column'] = 'url';
  /* Field: Content: Certificate Online Only */
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['id'] = 'field_aca_prg_cert_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['table'] = 'field_data_field_aca_prg_cert_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['field'] = 'field_aca_prg_cert_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['click_sort_column'] = 'url';
  /* Field: Content: Doctorate Online Only */
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['id'] = 'field_aca_prg_doc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['table'] = 'field_data_field_aca_prg_doc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['field'] = 'field_aca_prg_doc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['click_sort_column'] = 'url';
  /* Field: Content: Masters Online Only */
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['id'] = 'field_aca_prg_masters_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['table'] = 'field_data_field_aca_prg_masters_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['field'] = 'field_aca_prg_masters_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
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
    'academic_program' => 'academic_program',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'college_nursing';
  $handler->display->display_options['filters']['name']['group'] = 2;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['name']['group_info']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['group_info']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['group_info']['multiple'] = TRUE;
  $handler->display->display_options['filters']['name']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Arts',
      'operator' => '=',
      'value' => 'Arts',
    ),
    2 => array(
      'title' => 'Law',
      'operator' => '=',
      'value' => 'Law',
    ),
    3 => array(
      'title' => 'Ministry',
      'operator' => '=',
      'value' => 'Ministry',
    ),
  );
  $handler->display->display_options['path'] = 'academics/degrees-majors-and-minors/nursing';
  $handler->display->display_options['remote_database'] = 'hub';

  /* Display: Werner (remote) */
  $handler = $view->new_display('remote_page', 'Werner (remote)', 'remote_page_5');
  $handler->display->display_options['path'] = 'werner-institute/graduate-degree-information/graduate-programs';
  $handler->display->display_options['remote_database'] = 'hub';
  $export['academics_programs_matrix_college'] = $view;

  $view = new view();
  $view->name = 'academics_secondary_content';
  $view->description = 'This view displays secondary content per node';
  $view->tag = 'Academics';
  $view->base_table = 'node';
  $view->human_name = 'Academics Secondary Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_content_secondary_content_target_id']['id'] = 'field_content_secondary_content_target_id';
  $handler->display->display_options['relationships']['field_content_secondary_content_target_id']['table'] = 'field_data_field_content_secondary_content';
  $handler->display->display_options['relationships']['field_content_secondary_content_target_id']['field'] = 'field_content_secondary_content_target_id';
  /* Field: Block: Rendered Block */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_bean';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['relationship'] = 'field_content_secondary_content_target_id';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['rendered_entity']['display'] = 'view';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['nid']['validate_options']['code'] = '/* 
$argument is passed in from URL 
$handler->argument needs to be node id 
return TRUE
*/

$previous = db_set_active( $view->display_handler->options[\'remote_database\'] );
$source = db_query("SELECT source FROM url_alias WHERE alias LIKE \'%/$argument\'")->fetchField();
$nodeId = explode(\'/\',$source);

$handler->argument = $nodeId[1];
db_set_active($previous);

return TRUE;';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Block (remote) */
  $handler = $view->new_display('remote_block', 'Block (remote)', 'remote_block_1');
  $handler->display->display_options['block_description'] = 'Secondary Content Remote View';
  $handler->display->display_options['remote_database'] = 'hub';
  $export['academics_secondary_content'] = $view;

  $view = new view();
  $view->name = 'adult_degrees_clone_of_programs_matrix_by_tax_term';
  $view->description = 'Creighton offers majors, minors, degrees and certificates in more than 160 academic areas through 9 schools and colleges.';
  $view->tag = 'Academics';
  $view->base_table = 'node';
  $view->human_name = 'Adult Degrees Clone of Programs Matrix by Tax Term';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Programs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '3';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_aca_prg_title' => 'field_aca_prg_title',
    'field_aca_prg_bachelors_page' => 'field_aca_prg_bachelors_page',
    'field_aca_prg_bachelors' => 'field_aca_prg_bachelors',
    'field_aca_prg_minor_page' => 'field_aca_prg_minor_page',
    'field_aca_prg_minor_title' => 'field_aca_prg_bachelors',
    'field_aca_prg_certificate_page' => 'field_aca_prg_certificate_page',
    'field_aca_prg_certificate_title' => 'field_aca_prg_certificate_title',
    'field_aca_prg_associates_page' => 'field_aca_prg_associates_page',
    'field_aca_prg_associates_title' => 'field_aca_prg_associates_title',
    'field_aca_prg_certificate_online' => 'field_aca_prg_certificate_title',
    'field_aca_prg_associates_online' => 'field_aca_prg_associates_title',
    'field_aca_prg_minor_online' => 'field_aca_prg_bachelors',
    'field_aca_prg_bachelors_online' => 'field_aca_prg_bachelors',
    'field_aca_prg_assoc_onlineonly' => 'field_aca_prg_associates_title',
    'field_aca_prg_bach_onlineonly' => 'field_aca_prg_bachelors',
    'field_aca_prg_cert_onlineonly' => 'field_aca_prg_certificate_title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_aca_prg_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_bachelors_page' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_aca_prg_bachelors' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_minor_page' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_aca_prg_minor_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_certificate_page' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_aca_prg_certificate_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_associates_page' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_aca_prg_associates_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_certificate_online' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_associates_online' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_minor_online' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_bachelors_online' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_assoc_onlineonly' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_bach_onlineonly' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_cert_onlineonly' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No programs available with those filter conditions.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'college_school' => 'college_school',
    'academic_interests' => 0,
    'academic_programs_offerings' => 0,
    'academic_unit' => 0,
    'profile_specialties' => 0,
    'profile_type' => 0,
    'program' => 0,
  );
  /* Field: Content: Academic Program Title */
  $handler->display->display_options['fields']['field_aca_prg_title']['id'] = 'field_aca_prg_title';
  $handler->display->display_options['fields']['field_aca_prg_title']['table'] = 'field_data_field_aca_prg_title';
  $handler->display->display_options['fields']['field_aca_prg_title']['field'] = 'field_aca_prg_title';
  $handler->display->display_options['fields']['field_aca_prg_title']['label'] = 'PROGRAM';
  $handler->display->display_options['fields']['field_aca_prg_title']['element_label_colon'] = FALSE;
  /* Field: Content: Bachelors Page */
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['id'] = 'field_aca_prg_bachelors_page';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['table'] = 'field_data_field_aca_prg_bachelors_page';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['field'] = 'field_aca_prg_bachelors_page';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Bachelors Link Text */
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['id'] = 'field_aca_prg_bachelors';
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['table'] = 'field_data_field_aca_prg_bachelors';
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['field'] = 'field_aca_prg_bachelors';
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['label'] = 'BACHELOR\'S';
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['alter']['path'] = 'program/[field_aca_prg_bachelors_page]';
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['element_label_colon'] = FALSE;
  /* Field: Content: Minor Page */
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['id'] = 'field_aca_prg_minor_page';
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['table'] = 'field_data_field_aca_prg_minor_page';
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['field'] = 'field_aca_prg_minor_page';
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Minor Link Text */
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['id'] = 'field_aca_prg_minor_title';
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['table'] = 'field_data_field_aca_prg_minor_title';
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['field'] = 'field_aca_prg_minor_title';
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['label'] = 'BACHELOR\'S';
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['alter']['path'] = 'program/[field_aca_prg_minor_page]';
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['element_label_colon'] = FALSE;
  /* Field: Content: Certificate Page */
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['id'] = 'field_aca_prg_certificate_page';
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['table'] = 'field_data_field_aca_prg_certificate_page';
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['field'] = 'field_aca_prg_certificate_page';
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Certificate Link Text */
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['id'] = 'field_aca_prg_certificate_title';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['table'] = 'field_data_field_aca_prg_certificate_title';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['field'] = 'field_aca_prg_certificate_title';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['label'] = 'CERTIFICATE';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['path'] = 'program/[field_aca_prg_certificate_page]';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['element_label_colon'] = FALSE;
  /* Field: Content: Associates Page */
  $handler->display->display_options['fields']['field_aca_prg_associates_page']['id'] = 'field_aca_prg_associates_page';
  $handler->display->display_options['fields']['field_aca_prg_associates_page']['table'] = 'field_data_field_aca_prg_associates_page';
  $handler->display->display_options['fields']['field_aca_prg_associates_page']['field'] = 'field_aca_prg_associates_page';
  $handler->display->display_options['fields']['field_aca_prg_associates_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_associates_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_associates_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_associates_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Associates Link Text */
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['id'] = 'field_aca_prg_associates_title';
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['table'] = 'field_data_field_aca_prg_associates_title';
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['field'] = 'field_aca_prg_associates_title';
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['label'] = 'ASSOCIATES';
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['alter']['path'] = 'program/[field_aca_prg_associates_page]';
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['element_label_colon'] = FALSE;
  /* Field: Content: Certificate Online Link */
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['id'] = 'field_aca_prg_certificate_online';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['table'] = 'field_data_field_aca_prg_certificate_online';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['field'] = 'field_aca_prg_certificate_online';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['text'] = 'Online';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['path'] = '[field_aca_prg_certificate_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['type'] = 'link_title_plain';
  /* Field: Content: Associates Online Link */
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['id'] = 'field_aca_prg_associates_online';
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['table'] = 'field_data_field_aca_prg_associates_online';
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['field'] = 'field_aca_prg_associates_online';
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['alter']['path'] = '[field_aca_prg_associates_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['type'] = 'link_title_plain';
  /* Field: Content: Minor Online Link */
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['id'] = 'field_aca_prg_minor_online';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['table'] = 'field_data_field_aca_prg_minor_online';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['field'] = 'field_aca_prg_minor_online';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['alter']['path'] = '[field_aca_prg_minor_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['type'] = 'link_title_plain';
  /* Field: Content: Bachelors Online Link */
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['id'] = 'field_aca_prg_bachelors_online';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['table'] = 'field_data_field_aca_prg_bachelors_online';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['field'] = 'field_aca_prg_bachelors_online';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['alter']['path'] = '[field_aca_prg_bachelors_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['type'] = 'link_title_plain';
  /* Field: Content: Associates Online Only */
  $handler->display->display_options['fields']['field_aca_prg_assoc_onlineonly']['id'] = 'field_aca_prg_assoc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_assoc_onlineonly']['table'] = 'field_data_field_aca_prg_assoc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_assoc_onlineonly']['field'] = 'field_aca_prg_assoc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_assoc_onlineonly']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_assoc_onlineonly']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_assoc_onlineonly']['click_sort_column'] = 'url';
  /* Field: Content: Bachelors Online Only */
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['id'] = 'field_aca_prg_bach_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['table'] = 'field_data_field_aca_prg_bach_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['field'] = 'field_aca_prg_bach_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['click_sort_column'] = 'url';
  /* Field: Content: Certificate Online Only */
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['id'] = 'field_aca_prg_cert_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['table'] = 'field_data_field_aca_prg_cert_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['field'] = 'field_aca_prg_cert_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Academic Program Title (field_aca_prg_title) */
  $handler->display->display_options['sorts']['field_aca_prg_title_value']['id'] = 'field_aca_prg_title_value';
  $handler->display->display_options['sorts']['field_aca_prg_title_value']['table'] = 'field_data_field_aca_prg_title';
  $handler->display->display_options['sorts']['field_aca_prg_title_value']['field'] = 'field_aca_prg_title_value';
  $handler->display->display_options['sorts']['field_aca_prg_title_value']['expose']['label'] = 'Academic Program Title (field_aca_prg_title)';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['vocabularies'] = array(
    'college_school' => 'college_school',
  );
  $handler->display->display_options['arguments']['name']['validate_options']['type'] = 'name';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
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
    'academic_program' => 'academic_program',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page (remote) */
  $handler = $view->new_display('remote_page', 'Page (remote)', 'programs_matrix_taxonomy_remote_page_1');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>.l-region--sidebar-second > .block {
margin-bottom: 0;
}
</style>';
  $handler->display->display_options['header']['area']['format'] = 'full_html_plus_media';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['type'] = 'name';
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
    'academic_program' => 'academic_program',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'listings/%';
  $handler->display->display_options['menu']['title'] = 'Glossary';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['remote_database'] = 'hub';
  $export['adult_degrees_clone_of_programs_matrix_by_tax_term'] = $view;

  $view = new view();
  $view->name = 'gradschool_clone_of_programs_matrix_by_tax_term';
  $view->description = 'Creighton offers majors, minors, degrees and certificates in more than 160 academic areas through 9 schools and colleges.';
  $view->tag = 'Academics';
  $view->base_table = 'node';
  $view->human_name = 'Gradschool Clone of Programs Matrix by Tax Term';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Academic Programs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '3';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_aca_prg_title' => 'field_aca_prg_title',
    'field_aca_prg_masters_page' => 'field_aca_prg_masters_page',
    'field_aca_prg_masters_title' => 'field_aca_prg_masters_title',
    'field_aca_prg_doctorate_page' => 'field_aca_prg_doctorate_page',
    'field_aca_prg_doctorate_title' => 'field_aca_prg_doctorate_title',
    'field_aca_prg_certificate_page' => 'field_aca_prg_certificate_page',
    'field_aca_prg_certificate_title' => 'field_aca_prg_certificate_title',
    'field_aca_prg_certificate_online' => 'field_aca_prg_certificate_title',
    'field_aca_prg_masters_online' => 'field_aca_prg_masters_title',
    'field_aca_prg_doctorate_online' => 'field_aca_prg_doctorate_title',
    'field_aca_prg_cert_onlineonly' => 'field_aca_prg_certificate_title',
    'field_aca_prg_masters_onlineonly' => 'field_aca_prg_masters_title',
    'field_aca_prg_doc_onlineonly' => 'field_aca_prg_doctorate_title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_aca_prg_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_masters_page' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_aca_prg_masters_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_doctorate_page' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_aca_prg_doctorate_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_certificate_page' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_aca_prg_certificate_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_certificate_online' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_masters_online' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_doctorate_online' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_cert_onlineonly' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_masters_onlineonly' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_doc_onlineonly' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<style>
.has-two-sidebars .l-region--sidebar-second {
    width: 27.5% !important;
}
</style>';
  $handler->display->display_options['header']['area']['format'] = 'full_html_plus_media';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No programs available with those filter conditions.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'college_school' => 'college_school',
    'academic_interests' => 0,
    'academic_programs_offerings' => 0,
    'academic_unit' => 0,
    'profile_specialties' => 0,
    'profile_type' => 0,
    'program' => 0,
  );
  /* Field: Content: Academic Program Title */
  $handler->display->display_options['fields']['field_aca_prg_title']['id'] = 'field_aca_prg_title';
  $handler->display->display_options['fields']['field_aca_prg_title']['table'] = 'field_data_field_aca_prg_title';
  $handler->display->display_options['fields']['field_aca_prg_title']['field'] = 'field_aca_prg_title';
  $handler->display->display_options['fields']['field_aca_prg_title']['label'] = 'PROGRAM';
  $handler->display->display_options['fields']['field_aca_prg_title']['element_label_colon'] = FALSE;
  /* Field: Content: Masters Page */
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['id'] = 'field_aca_prg_masters_page';
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['table'] = 'field_data_field_aca_prg_masters_page';
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['field'] = 'field_aca_prg_masters_page';
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Masters Link Text */
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['id'] = 'field_aca_prg_masters_title';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['table'] = 'field_data_field_aca_prg_masters_title';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['field'] = 'field_aca_prg_masters_title';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['label'] = 'MASTER\'S';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['path'] = 'program/[field_aca_prg_masters_page]';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['element_label_colon'] = FALSE;
  /* Field: Content: Doctorate Page */
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['id'] = 'field_aca_prg_doctorate_page';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['table'] = 'field_data_field_aca_prg_doctorate_page';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['field'] = 'field_aca_prg_doctorate_page';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['alter']['path'] = 'node/[field_aca_prg_doctorate_page]';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Doctorate Link Text */
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['id'] = 'field_aca_prg_doctorate_title';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['table'] = 'field_data_field_aca_prg_doctorate_title';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['field'] = 'field_aca_prg_doctorate_title';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['label'] = 'DOCTORATE';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['path'] = 'program/[field_aca_prg_doctorate_page]';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['element_label_colon'] = FALSE;
  /* Field: Content: Certificate Page */
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['id'] = 'field_aca_prg_certificate_page';
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['table'] = 'field_data_field_aca_prg_certificate_page';
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['field'] = 'field_aca_prg_certificate_page';
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Certificate Link Text */
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['id'] = 'field_aca_prg_certificate_title';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['table'] = 'field_data_field_aca_prg_certificate_title';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['field'] = 'field_aca_prg_certificate_title';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['label'] = 'CERTIFICATE';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['path'] = 'program/[field_aca_prg_certificate_page]';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['element_label_colon'] = FALSE;
  /* Field: Content: Certificate Online Link */
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['id'] = 'field_aca_prg_certificate_online';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['table'] = 'field_data_field_aca_prg_certificate_online';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['field'] = 'field_aca_prg_certificate_online';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['text'] = 'Online';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['path'] = '[field_aca_prg_certificate_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['type'] = 'link_title_plain';
  /* Field: Content: Masters Online Link */
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['id'] = 'field_aca_prg_masters_online';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['table'] = 'field_data_field_aca_prg_masters_online';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['field'] = 'field_aca_prg_masters_online';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['path'] = '[field_aca_prg_masters_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['type'] = 'link_title_plain';
  /* Field: Content: Doctorate Online Link */
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['id'] = 'field_aca_prg_doctorate_online';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['table'] = 'field_data_field_aca_prg_doctorate_online';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['field'] = 'field_aca_prg_doctorate_online';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['path'] = '[field_aca_prg_doctorate_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['type'] = 'link_title_plain';
  /* Field: Content: Certificate Online Only */
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['id'] = 'field_aca_prg_cert_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['table'] = 'field_data_field_aca_prg_cert_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['field'] = 'field_aca_prg_cert_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['alter']['path'] = '[field_aca_prg_cert_onlineonly-url]';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['alter']['link_class'] = 'online-course online-only';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['type'] = 'link_title_plain';
  /* Field: Content: Masters Online Only */
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['id'] = 'field_aca_prg_masters_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['table'] = 'field_data_field_aca_prg_masters_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['field'] = 'field_aca_prg_masters_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['alter']['path'] = '[field_aca_prg_masters_onlineonly-url]';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['alter']['link_class'] = 'online-course online-only';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['type'] = 'link_title_plain';
  /* Field: Content: Doctorate Online Only */
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['id'] = 'field_aca_prg_doc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['table'] = 'field_data_field_aca_prg_doc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['field'] = 'field_aca_prg_doc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['alter']['path'] = '[field_aca_prg_doc_onlineonly-url]';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['alter']['link_class'] = 'online-course online-only';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['type'] = 'link_title_plain';
  /* Sort criterion: Content: Academic Program Title (field_aca_prg_title) */
  $handler->display->display_options['sorts']['field_aca_prg_title_value']['id'] = 'field_aca_prg_title_value';
  $handler->display->display_options['sorts']['field_aca_prg_title_value']['table'] = 'field_data_field_aca_prg_title';
  $handler->display->display_options['sorts']['field_aca_prg_title_value']['field'] = 'field_aca_prg_title_value';
  $handler->display->display_options['sorts']['field_aca_prg_title_value']['expose']['label'] = 'Academic Program Title (field_aca_prg_title)';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['vocabularies'] = array(
    'college_school' => 'college_school',
  );
  $handler->display->display_options['arguments']['name']['validate_options']['type'] = 'name';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
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
    'academic_program' => 'academic_program',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page (remote) */
  $handler = $view->new_display('remote_page', 'Page (remote)', 'programs_matrix_taxonomy_remote_page_1');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['type'] = 'name';
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
    'academic_program' => 'academic_program',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'all/listings/%';
  $handler->display->display_options['menu']['title'] = 'Glossary';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['remote_database'] = 'hub';
  $export['gradschool_clone_of_programs_matrix_by_tax_term'] = $view;

  $view = new view();
  $view->name = 'programs_matrix_by_tax_term';
  $view->description = 'Creighton offers majors, minors, degrees and certificates in more than 160 academic areas through 9 schools and colleges.';
  $view->tag = 'Academics';
  $view->base_table = 'node';
  $view->human_name = 'Programs Matrix by Tax Term';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Academic Programs';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '3';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_aca_prg_title' => 'field_aca_prg_title',
    'field_aca_prg_bachelors_page' => 'field_aca_prg_bachelors_page',
    'field_aca_prg_bachelors' => 'field_aca_prg_bachelors',
    'field_aca_prg_minor_page' => 'field_aca_prg_minor_page',
    'field_aca_prg_minor_title' => 'field_aca_prg_bachelors',
    'field_aca_prg_masters_page' => 'field_aca_prg_masters_page',
    'field_aca_prg_masters_title' => 'field_aca_prg_masters_title',
    'field_aca_prg_doctorate_page' => 'field_aca_prg_doctorate_page',
    'field_aca_prg_doctorate_title' => 'field_aca_prg_doctorate_title',
    'field_aca_prg_certificate_page' => 'field_aca_prg_certificate_page',
    'field_aca_prg_certificate_title' => 'field_aca_prg_certificate_title',
    'field_aca_prg_associates_page' => 'field_aca_prg_associates_page',
    'field_aca_prg_associates_title' => 'field_aca_prg_associates_title',
    'field_aca_prg_certificate_online' => 'field_aca_prg_certificate_title',
    'field_aca_prg_associates_online' => 'field_aca_prg_associates_title',
    'field_aca_prg_minor_online' => 'field_aca_prg_bachelors',
    'field_aca_prg_bachelors_online' => 'field_aca_prg_bachelors',
    'field_aca_prg_masters_online' => 'field_aca_prg_masters_title',
    'field_aca_prg_doctorate_online' => 'field_aca_prg_doctorate_title',
    'field_aca_prg_assoc_onlineonly' => 'field_aca_prg_associates_title',
    'field_aca_prg_bach_onlineonly' => 'field_aca_prg_bachelors',
    'field_aca_prg_cert_onlineonly' => 'field_aca_prg_certificate_title',
    'field_aca_prg_doc_onlineonly' => 'field_aca_prg_doctorate_title',
    'field_aca_prg_masters_onlineonly' => 'field_aca_prg_masters_title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_aca_prg_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_bachelors_page' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_aca_prg_bachelors' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_minor_page' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_aca_prg_minor_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_masters_page' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_aca_prg_masters_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_doctorate_page' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_aca_prg_doctorate_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_certificate_page' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_aca_prg_certificate_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_associates_page' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_aca_prg_associates_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_certificate_online' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_associates_online' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_minor_online' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_bachelors_online' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_masters_online' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_doctorate_online' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_assoc_onlineonly' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_bach_onlineonly' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_cert_onlineonly' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_doc_onlineonly' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_aca_prg_masters_onlineonly' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No programs available with those filter conditions.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'college_school' => 'college_school',
    'academic_interests' => 0,
    'academic_programs_offerings' => 0,
    'academic_unit' => 0,
    'profile_specialties' => 0,
    'profile_type' => 0,
    'program' => 0,
  );
  /* Field: Content: Academic Program Title */
  $handler->display->display_options['fields']['field_aca_prg_title']['id'] = 'field_aca_prg_title';
  $handler->display->display_options['fields']['field_aca_prg_title']['table'] = 'field_data_field_aca_prg_title';
  $handler->display->display_options['fields']['field_aca_prg_title']['field'] = 'field_aca_prg_title';
  $handler->display->display_options['fields']['field_aca_prg_title']['label'] = 'PROGRAM';
  $handler->display->display_options['fields']['field_aca_prg_title']['element_label_colon'] = FALSE;
  /* Field: Content: Bachelors Page */
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['id'] = 'field_aca_prg_bachelors_page';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['table'] = 'field_data_field_aca_prg_bachelors_page';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['field'] = 'field_aca_prg_bachelors_page';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Bachelors Link Text */
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['id'] = 'field_aca_prg_bachelors';
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['table'] = 'field_data_field_aca_prg_bachelors';
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['field'] = 'field_aca_prg_bachelors';
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['label'] = 'BACHELOR\'S';
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['alter']['path'] = 'program/[field_aca_prg_bachelors_page]';
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors']['element_label_colon'] = FALSE;
  /* Field: Content: Minor Page */
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['id'] = 'field_aca_prg_minor_page';
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['table'] = 'field_data_field_aca_prg_minor_page';
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['field'] = 'field_aca_prg_minor_page';
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_minor_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Minor Link Text */
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['id'] = 'field_aca_prg_minor_title';
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['table'] = 'field_data_field_aca_prg_minor_title';
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['field'] = 'field_aca_prg_minor_title';
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['label'] = 'BACHELOR\'S';
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['alter']['path'] = 'program/[field_aca_prg_minor_page]';
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_title']['element_label_colon'] = FALSE;
  /* Field: Content: Masters Page */
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['id'] = 'field_aca_prg_masters_page';
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['table'] = 'field_data_field_aca_prg_masters_page';
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['field'] = 'field_aca_prg_masters_page';
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Masters Link Text */
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['id'] = 'field_aca_prg_masters_title';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['table'] = 'field_data_field_aca_prg_masters_title';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['field'] = 'field_aca_prg_masters_title';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['label'] = 'MASTER\'S';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['path'] = 'program/[field_aca_prg_masters_page]';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['element_label_colon'] = FALSE;
  /* Field: Content: Doctorate Page */
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['id'] = 'field_aca_prg_doctorate_page';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['table'] = 'field_data_field_aca_prg_doctorate_page';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['field'] = 'field_aca_prg_doctorate_page';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['alter']['path'] = 'node/[field_aca_prg_doctorate_page]';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Doctorate Link Text */
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['id'] = 'field_aca_prg_doctorate_title';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['table'] = 'field_data_field_aca_prg_doctorate_title';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['field'] = 'field_aca_prg_doctorate_title';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['label'] = 'DOCTORATE';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['path'] = 'program/[field_aca_prg_doctorate_page]';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['element_label_colon'] = FALSE;
  /* Field: Content: Certificate Page */
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['id'] = 'field_aca_prg_certificate_page';
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['table'] = 'field_data_field_aca_prg_certificate_page';
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['field'] = 'field_aca_prg_certificate_page';
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Certificate Link Text */
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['id'] = 'field_aca_prg_certificate_title';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['table'] = 'field_data_field_aca_prg_certificate_title';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['field'] = 'field_aca_prg_certificate_title';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['label'] = 'CERTIFICATE';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['path'] = 'program/[field_aca_prg_certificate_page]';
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_title']['element_label_colon'] = FALSE;
  /* Field: Content: Associates Page */
  $handler->display->display_options['fields']['field_aca_prg_associates_page']['id'] = 'field_aca_prg_associates_page';
  $handler->display->display_options['fields']['field_aca_prg_associates_page']['table'] = 'field_data_field_aca_prg_associates_page';
  $handler->display->display_options['fields']['field_aca_prg_associates_page']['field'] = 'field_aca_prg_associates_page';
  $handler->display->display_options['fields']['field_aca_prg_associates_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_associates_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_associates_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_associates_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Associates Link Text */
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['id'] = 'field_aca_prg_associates_title';
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['table'] = 'field_data_field_aca_prg_associates_title';
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['field'] = 'field_aca_prg_associates_title';
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['label'] = 'ASSOCIATES';
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['alter']['path'] = 'program/[field_aca_prg_associates_page]';
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_associates_title']['element_label_colon'] = FALSE;
  /* Field: Content: Certificate Online Link */
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['id'] = 'field_aca_prg_certificate_online';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['table'] = 'field_data_field_aca_prg_certificate_online';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['field'] = 'field_aca_prg_certificate_online';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['text'] = 'Online';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['path'] = '[field_aca_prg_certificate_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_certificate_online']['type'] = 'link_title_plain';
  /* Field: Content: Associates Online Link */
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['id'] = 'field_aca_prg_associates_online';
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['table'] = 'field_data_field_aca_prg_associates_online';
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['field'] = 'field_aca_prg_associates_online';
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['alter']['path'] = '[field_aca_prg_associates_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_associates_online']['type'] = 'link_title_plain';
  /* Field: Content: Minor Online Link */
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['id'] = 'field_aca_prg_minor_online';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['table'] = 'field_data_field_aca_prg_minor_online';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['field'] = 'field_aca_prg_minor_online';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['alter']['path'] = '[field_aca_prg_minor_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_minor_online']['type'] = 'link_title_plain';
  /* Field: Content: Bachelors Online Link */
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['id'] = 'field_aca_prg_bachelors_online';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['table'] = 'field_data_field_aca_prg_bachelors_online';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['field'] = 'field_aca_prg_bachelors_online';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['alter']['path'] = '[field_aca_prg_bachelors_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_bachelors_online']['type'] = 'link_title_plain';
  /* Field: Content: Masters Online Link */
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['id'] = 'field_aca_prg_masters_online';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['table'] = 'field_data_field_aca_prg_masters_online';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['field'] = 'field_aca_prg_masters_online';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['path'] = '[field_aca_prg_masters_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['type'] = 'link_title_plain';
  /* Field: Content: Doctorate Online Link */
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['id'] = 'field_aca_prg_doctorate_online';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['table'] = 'field_data_field_aca_prg_doctorate_online';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['field'] = 'field_aca_prg_doctorate_online';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['path'] = '[field_aca_prg_doctorate_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['type'] = 'link_title_plain';
  /* Field: Content: Associates Online Only */
  $handler->display->display_options['fields']['field_aca_prg_assoc_onlineonly']['id'] = 'field_aca_prg_assoc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_assoc_onlineonly']['table'] = 'field_data_field_aca_prg_assoc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_assoc_onlineonly']['field'] = 'field_aca_prg_assoc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_assoc_onlineonly']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_assoc_onlineonly']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_assoc_onlineonly']['click_sort_column'] = 'url';
  /* Field: Content: Bachelors Online Only */
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['id'] = 'field_aca_prg_bach_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['table'] = 'field_data_field_aca_prg_bach_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['field'] = 'field_aca_prg_bach_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_bach_onlineonly']['click_sort_column'] = 'url';
  /* Field: Content: Certificate Online Only */
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['id'] = 'field_aca_prg_cert_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['table'] = 'field_data_field_aca_prg_cert_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['field'] = 'field_aca_prg_cert_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_cert_onlineonly']['click_sort_column'] = 'url';
  /* Field: Content: Doctorate Online Only */
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['id'] = 'field_aca_prg_doc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['table'] = 'field_data_field_aca_prg_doc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['field'] = 'field_aca_prg_doc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['click_sort_column'] = 'url';
  /* Field: Content: Masters Online Only */
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['id'] = 'field_aca_prg_masters_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['table'] = 'field_data_field_aca_prg_masters_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['field'] = 'field_aca_prg_masters_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Academic Program Title (field_aca_prg_title) */
  $handler->display->display_options['sorts']['field_aca_prg_title_value']['id'] = 'field_aca_prg_title_value';
  $handler->display->display_options['sorts']['field_aca_prg_title_value']['table'] = 'field_data_field_aca_prg_title';
  $handler->display->display_options['sorts']['field_aca_prg_title_value']['field'] = 'field_aca_prg_title_value';
  $handler->display->display_options['sorts']['field_aca_prg_title_value']['expose']['label'] = 'Academic Program Title (field_aca_prg_title)';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['vocabularies'] = array(
    'college_school' => 'college_school',
  );
  $handler->display->display_options['arguments']['name']['validate_options']['type'] = 'name';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
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
    'academic_program' => 'academic_program',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page (remote) */
  $handler = $view->new_display('remote_page', 'Page (remote)', 'programs_matrix_taxonomy_remote_page_1');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['type'] = 'name';
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
    'academic_program' => 'academic_program',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'listings/%';
  $handler->display->display_options['menu']['title'] = 'Glossary';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['remote_database'] = 'hub';

  /* Display: Page (remote) - SPAHP */
  $handler = $view->new_display('remote_page', 'Page (remote) - SPAHP', 'remote_page_1');
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Academic Program Title */
  $handler->display->display_options['fields']['field_aca_prg_title']['id'] = 'field_aca_prg_title';
  $handler->display->display_options['fields']['field_aca_prg_title']['table'] = 'field_data_field_aca_prg_title';
  $handler->display->display_options['fields']['field_aca_prg_title']['field'] = 'field_aca_prg_title';
  $handler->display->display_options['fields']['field_aca_prg_title']['label'] = 'PROGRAM';
  $handler->display->display_options['fields']['field_aca_prg_title']['element_label_colon'] = FALSE;
  /* Field: Content: Masters Page */
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['id'] = 'field_aca_prg_masters_page';
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['table'] = 'field_data_field_aca_prg_masters_page';
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['field'] = 'field_aca_prg_masters_page';
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_masters_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Masters Link Text */
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['id'] = 'field_aca_prg_masters_title';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['table'] = 'field_data_field_aca_prg_masters_title';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['field'] = 'field_aca_prg_masters_title';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['label'] = 'MASTER\'S';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['path'] = 'program/[field_aca_prg_masters_page]';
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_title']['element_label_colon'] = FALSE;
  /* Field: Content: Doctorate Page */
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['id'] = 'field_aca_prg_doctorate_page';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['table'] = 'field_data_field_aca_prg_doctorate_page';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['field'] = 'field_aca_prg_doctorate_page';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['alter']['path'] = 'node/[field_aca_prg_doctorate_page]';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_page']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Doctorate Link Text */
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['id'] = 'field_aca_prg_doctorate_title';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['table'] = 'field_data_field_aca_prg_doctorate_title';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['field'] = 'field_aca_prg_doctorate_title';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['label'] = 'DOCTORATE';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['path'] = 'program/[field_aca_prg_doctorate_page]';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_title']['element_label_colon'] = FALSE;
  /* Field: Content: Masters Online Link */
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['id'] = 'field_aca_prg_masters_online';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['table'] = 'field_data_field_aca_prg_masters_online';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['field'] = 'field_aca_prg_masters_online';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['path'] = '[field_aca_prg_masters_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_masters_online']['type'] = 'link_title_plain';
  /* Field: Content: Doctorate Online Link */
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['id'] = 'field_aca_prg_doctorate_online';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['table'] = 'field_data_field_aca_prg_doctorate_online';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['field'] = 'field_aca_prg_doctorate_online';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['path'] = '[field_aca_prg_doctorate_online-url]';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['alter']['link_class'] = 'online-course';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_aca_prg_doctorate_online']['type'] = 'link_title_plain';
  /* Field: Content: Doctorate Online Only */
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['id'] = 'field_aca_prg_doc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['table'] = 'field_data_field_aca_prg_doc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['field'] = 'field_aca_prg_doc_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_doc_onlineonly']['click_sort_column'] = 'url';
  /* Field: Content: Masters Online Only */
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['id'] = 'field_aca_prg_masters_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['table'] = 'field_data_field_aca_prg_masters_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['field'] = 'field_aca_prg_masters_onlineonly';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['label'] = '';
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aca_prg_masters_onlineonly']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['name']['validate_options']['type'] = 'name';
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
    'academic_program' => 'academic_program',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'listings/%';
  $handler->display->display_options['menu']['title'] = 'Glossary';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['remote_database'] = 'hub';
  $export['programs_matrix_by_tax_term'] = $view;

  return $export;
}
