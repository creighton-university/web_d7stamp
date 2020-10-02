<?php
/**
 * @file
 * redirect_manager_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function redirect_manager_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'redirect_manager';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Redirect Manager';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Redirect List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class'] = 'view-row-status-[status]';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'field_redirect_manager_url' => 'field_redirect_manager_url',
    'field_redirect_manager_host' => 'field_redirect_manager_host',
    'nothing' => 'nothing',
    'field_redirect_manager_dest' => 'field_redirect_manager_dest',
    'draggableviews' => 'draggableviews',
    'edit_node' => 'edit_node',
    'delete_node' => 'delete_node',
    'nothing_1' => 'nothing_1',
    'status' => 'status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_redirect_manager_url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_redirect_manager_host' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_redirect_manager_dest' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="node/add/redirect-manager-url-redirect?destination=redirect-list-sorting">Add New Redirect</a> | <a href="admin/structure/taxonomy/redirect_manager_host">Manage Redirect Hosts</a>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_redirect_manager_url']['id'] = 'field_redirect_manager_url';
  $handler->display->display_options['fields']['field_redirect_manager_url']['table'] = 'field_data_field_redirect_manager_url';
  $handler->display->display_options['fields']['field_redirect_manager_url']['field'] = 'field_redirect_manager_url';
  $handler->display->display_options['fields']['field_redirect_manager_url']['label'] = '';
  $handler->display->display_options['fields']['field_redirect_manager_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_redirect_manager_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_redirect_manager_url']['type'] = 'text_plain';
  /* Field: Content: Host */
  $handler->display->display_options['fields']['field_redirect_manager_host']['id'] = 'field_redirect_manager_host';
  $handler->display->display_options['fields']['field_redirect_manager_host']['table'] = 'field_data_field_redirect_manager_host';
  $handler->display->display_options['fields']['field_redirect_manager_host']['field'] = 'field_redirect_manager_host';
  $handler->display->display_options['fields']['field_redirect_manager_host']['label'] = '';
  $handler->display->display_options['fields']['field_redirect_manager_host']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_redirect_manager_host']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_redirect_manager_host']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Redirect URL';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_redirect_manager_host][field_redirect_manager_url]';
  /* Field: Content: Destination */
  $handler->display->display_options['fields']['field_redirect_manager_dest']['id'] = 'field_redirect_manager_dest';
  $handler->display->display_options['fields']['field_redirect_manager_dest']['table'] = 'field_data_field_redirect_manager_dest';
  $handler->display->display_options['fields']['field_redirect_manager_dest']['field'] = 'field_redirect_manager_dest';
  $handler->display->display_options['fields']['field_redirect_manager_dest']['type'] = 'text_plain';
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['hierarchy_handler'] = 'draggableviews_hierarchy_handler_native';
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 1;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[edit_node] &nbsp; [delete_node]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = '';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['type'] = 'boolean';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_redirect_manager_url']['id'] = 'field_redirect_manager_url';
  $handler->display->display_options['fields']['field_redirect_manager_url']['table'] = 'field_data_field_redirect_manager_url';
  $handler->display->display_options['fields']['field_redirect_manager_url']['field'] = 'field_redirect_manager_url';
  $handler->display->display_options['fields']['field_redirect_manager_url']['label'] = '';
  $handler->display->display_options['fields']['field_redirect_manager_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_redirect_manager_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_redirect_manager_url']['type'] = 'text_plain';
  /* Field: Content: Host */
  $handler->display->display_options['fields']['field_redirect_manager_host']['id'] = 'field_redirect_manager_host';
  $handler->display->display_options['fields']['field_redirect_manager_host']['table'] = 'field_data_field_redirect_manager_host';
  $handler->display->display_options['fields']['field_redirect_manager_host']['field'] = 'field_redirect_manager_host';
  $handler->display->display_options['fields']['field_redirect_manager_host']['label'] = '';
  $handler->display->display_options['fields']['field_redirect_manager_host']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_redirect_manager_host']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_redirect_manager_host']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Redirect URL';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_redirect_manager_host][field_redirect_manager_url]';
  /* Field: Content: Destination */
  $handler->display->display_options['fields']['field_redirect_manager_dest']['id'] = 'field_redirect_manager_dest';
  $handler->display->display_options['fields']['field_redirect_manager_dest']['table'] = 'field_data_field_redirect_manager_dest';
  $handler->display->display_options['fields']['field_redirect_manager_dest']['field'] = 'field_redirect_manager_dest';
  $handler->display->display_options['fields']['field_redirect_manager_dest']['type'] = 'text_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['path'] = 'redirect-list';

  /* Display: Page (sorting) */
  $handler = $view->new_display('page', 'Page (sorting)', 'page_1');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'redirect_manager:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 0;
  $handler->display->display_options['path'] = 'redirect-list-sorting';

  /* Display: Page (redirect manager) */
  $handler = $view->new_display('redirect_manager_page', 'Page (redirect manager)', 'redirect_manager_page_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_redirect_manager_url']['id'] = 'field_redirect_manager_url';
  $handler->display->display_options['fields']['field_redirect_manager_url']['table'] = 'field_data_field_redirect_manager_url';
  $handler->display->display_options['fields']['field_redirect_manager_url']['field'] = 'field_redirect_manager_url';
  $handler->display->display_options['fields']['field_redirect_manager_url']['label'] = '';
  $handler->display->display_options['fields']['field_redirect_manager_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_redirect_manager_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_redirect_manager_url']['type'] = 'text_plain';
  /* Field: Content: Host */
  $handler->display->display_options['fields']['field_redirect_manager_host']['id'] = 'field_redirect_manager_host';
  $handler->display->display_options['fields']['field_redirect_manager_host']['table'] = 'field_data_field_redirect_manager_host';
  $handler->display->display_options['fields']['field_redirect_manager_host']['field'] = 'field_redirect_manager_host';
  $handler->display->display_options['fields']['field_redirect_manager_host']['label'] = '';
  $handler->display->display_options['fields']['field_redirect_manager_host']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_redirect_manager_host']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_redirect_manager_host']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Redirect URL';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_redirect_manager_host][field_redirect_manager_url]';
  /* Field: Content: Destination */
  $handler->display->display_options['fields']['field_redirect_manager_dest']['id'] = 'field_redirect_manager_dest';
  $handler->display->display_options['fields']['field_redirect_manager_dest']['table'] = 'field_data_field_redirect_manager_dest';
  $handler->display->display_options['fields']['field_redirect_manager_dest']['field'] = 'field_redirect_manager_dest';
  $handler->display->display_options['fields']['field_redirect_manager_dest']['type'] = 'text_plain';
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['hierarchy_handler'] = 'draggableviews_hierarchy_handler_native';
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 1;
  /* Field: Content: Case Insensitive */
  $handler->display->display_options['fields']['field_redirect_manager_case_ins']['id'] = 'field_redirect_manager_case_ins';
  $handler->display->display_options['fields']['field_redirect_manager_case_ins']['table'] = 'field_data_field_redirect_manager_case_ins';
  $handler->display->display_options['fields']['field_redirect_manager_case_ins']['field'] = 'field_redirect_manager_case_ins';
  $handler->display->display_options['fields']['field_redirect_manager_case_ins']['type'] = 'list_key';
  /* Field: Content: Wildcard */
  $handler->display->display_options['fields']['field_redirect_manager_wildcard']['id'] = 'field_redirect_manager_wildcard';
  $handler->display->display_options['fields']['field_redirect_manager_wildcard']['table'] = 'field_data_field_redirect_manager_wildcard';
  $handler->display->display_options['fields']['field_redirect_manager_wildcard']['field'] = 'field_redirect_manager_wildcard';
  $handler->display->display_options['fields']['field_redirect_manager_wildcard']['type'] = 'list_key';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['path'] = 'vcl-extract';
  $export['redirect_manager'] = $view;

  return $export;
}
