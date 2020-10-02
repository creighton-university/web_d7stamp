<?php
/**
 * @file
 * intercollege_transfer_workflow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function intercollege_transfer_workflow_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'creighton_workflow_dashboard';
  $view->description = 'Show all content and their workflow state.';
  $view->tag = 'workflow';
  $view->base_table = 'node';
  $view->human_name = 'Creighton Workflow dashboard';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Workflow';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'type' => 'type',
    'name' => 'name',
    'hid_1' => 'hid_1',
    'sid' => 'sid',
    'stamp' => 'stamp',
    'name_1' => 'name_1',
    'comment' => 'comment',
    'workflow_node' => 'workflow_node',
    'edit_comment' => 'workflow_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'hid_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'stamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'workflow_node' => array(
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'edit_comment' => array(
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
  $handler->display->display_options['empty']['area']['content'] = 'No active transfers found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid_3']['id'] = 'uid_3';
  $handler->display->display_options['relationships']['uid_3']['table'] = 'node';
  $handler->display->display_options['relationships']['uid_3']['field'] = 'uid';
  /* Relationship: Workflow current: User */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['label'] = 'Current user';
  /* Field: Content: NetID */
  $handler->display->display_options['fields']['field_netid']['id'] = 'field_netid';
  $handler->display->display_options['fields']['field_netid']['table'] = 'field_data_field_netid';
  $handler->display->display_options['fields']['field_netid']['field'] = 'field_netid';
  /* Field: Content: College you wish to Enter */
  $handler->display->display_options['fields']['field_transfer_college']['id'] = 'field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['table'] = 'field_data_field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['field'] = 'field_transfer_college';
  /* Field: Content: Reason for request: */
  $handler->display->display_options['fields']['field_reason_for_request']['id'] = 'field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['table'] = 'field_data_field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['field'] = 'field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['label'] = 'Reason';
  $handler->display->display_options['fields']['field_reason_for_request']['alter']['text'] = 'TEST';
  $handler->display->display_options['fields']['field_reason_for_request']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reason_for_request']['element_default_classes'] = FALSE;
  /* Field: Content: Transfer semester */
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['id'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['table'] = 'field_data_field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['field'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['label'] = 'Transfer semester/year: Semester';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid_3';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: Workflow current: Transition ID */
  $handler->display->display_options['fields']['hid_1']['id'] = 'hid_1';
  $handler->display->display_options['fields']['hid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['hid_1']['field'] = 'hid';
  $handler->display->display_options['fields']['hid_1']['label'] = 'hid';
  $handler->display->display_options['fields']['hid_1']['exclude'] = TRUE;
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  /* Field: Workflow current: Time */
  $handler->display->display_options['fields']['stamp']['id'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['stamp']['field'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['label'] = 'Since';
  $handler->display->display_options['fields']['stamp']['date_format'] = 'raw time ago';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'By';
  /* Field: Workflow current: Comment */
  $handler->display->display_options['fields']['comment']['id'] = 'comment';
  $handler->display->display_options['fields']['comment']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['comment']['field'] = 'comment';
  /* Field: Content: Workflow link */
  $handler->display->display_options['fields']['workflow_node']['id'] = 'workflow_node';
  $handler->display->display_options['fields']['workflow_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['workflow_node']['field'] = 'workflow_node';
  $handler->display->display_options['fields']['workflow_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['workflow_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['workflow_node']['alter']['text'] = 'view history';
  /* Field: Workflow current: Edit comment */
  $handler->display->display_options['fields']['edit_comment']['id'] = 'edit_comment';
  $handler->display->display_options['fields']['edit_comment']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['edit_comment']['field'] = 'edit_comment';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/cict/[nid]?destination=workflow/future">View</a>
<a href="/ccd/[nid]?destination=workflow/current">Current Dean</a>
<a href="/cfd/[nid]?destination=workflow/future">Approving Dean Decision</a>
<a href="/workflow/future/[field_netid]?destination=workflow/denied">Transfer History</a>
';
  /* Sort criterion: Workflow current: Time */
  $handler->display->display_options['sorts']['stamp']['id'] = 'stamp';
  $handler->display->display_options['sorts']['stamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['sorts']['stamp']['field'] = 'stamp';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'intercollege_transfer' => 'intercollege_transfer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    4 => '4',
    9 => '9',
    2 => '2',
    8 => '8',
    5 => '5',
    10 => '10',
    3 => '3',
    11 => '11',
    6 => '6',
    7 => '7',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Current state';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;

  /* Display: Summary */
  $handler = $view->new_display('page', 'Summary', 'page_1');
  $handler->display->display_options['display_description'] = 'A list of all executed transitions';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_netid' => 'field_netid',
    'field_current_college' => 'field_current_college',
    'field_transfer_college' => 'field_transfer_college',
    'field_reason_for_request' => 'field_reason_for_request',
    'field_transfer_semester_year_sem' => 'field_transfer_semester_year_sem',
    'nid' => 'nid',
    'title' => 'title',
    'type' => 'type',
    'name' => 'name',
    'hid_1' => 'hid_1',
    'sid' => 'sid',
    'stamp' => 'stamp',
    'name_1' => 'name_1',
    'comment' => 'comment',
    'workflow_node' => 'workflow_node',
    'edit_comment' => 'workflow_node',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'field_netid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_current_college' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_college' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reason_for_request' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_semester_year_sem' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'hid_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'stamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'workflow_node' => array(
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'edit_comment' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: NetID */
  $handler->display->display_options['fields']['field_netid']['id'] = 'field_netid';
  $handler->display->display_options['fields']['field_netid']['table'] = 'field_data_field_netid';
  $handler->display->display_options['fields']['field_netid']['field'] = 'field_netid';
  /* Field: Content: College you wish to Enter */
  $handler->display->display_options['fields']['field_transfer_college']['id'] = 'field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['table'] = 'field_data_field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['field'] = 'field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['label'] = 'College To Enter';
  /* Field: Content: Reason for request: */
  $handler->display->display_options['fields']['field_reason_for_request']['id'] = 'field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['table'] = 'field_data_field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['field'] = 'field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['label'] = 'Reason';
  /* Field: Content: Transfer semester */
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['id'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['table'] = 'field_data_field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['field'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['label'] = 'Transfer Semester';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid_3';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: Workflow current: Transition ID */
  $handler->display->display_options['fields']['hid_1']['id'] = 'hid_1';
  $handler->display->display_options['fields']['hid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['hid_1']['field'] = 'hid';
  $handler->display->display_options['fields']['hid_1']['label'] = 'hid';
  $handler->display->display_options['fields']['hid_1']['exclude'] = TRUE;
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  /* Field: Workflow current: Time */
  $handler->display->display_options['fields']['stamp']['id'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['stamp']['field'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['label'] = 'Since';
  $handler->display->display_options['fields']['stamp']['date_format'] = 'raw time ago';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'By';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  /* Field: Workflow current: Comment */
  $handler->display->display_options['fields']['comment']['id'] = 'comment';
  $handler->display->display_options['fields']['comment']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['comment']['field'] = 'comment';
  /* Field: Content: Workflow link */
  $handler->display->display_options['fields']['workflow_node']['id'] = 'workflow_node';
  $handler->display->display_options['fields']['workflow_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['workflow_node']['field'] = 'workflow_node';
  $handler->display->display_options['fields']['workflow_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['workflow_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['workflow_node']['alter']['text'] = 'view history';
  /* Field: Workflow current: Edit comment */
  $handler->display->display_options['fields']['edit_comment']['id'] = 'edit_comment';
  $handler->display->display_options['fields']['edit_comment']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['edit_comment']['field'] = 'edit_comment';
  $handler->display->display_options['path'] = 'workflow/all';
  $handler->display->display_options['menu']['title'] = 'Summary';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Workflow';
  $handler->display->display_options['tab_options']['description'] = 'Your workflow dashboard';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Business Current Dean Workflow */
  $handler = $view->new_display('page', 'Business Current Dean Workflow', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Business Current Dean Workflow';
  $handler->display->display_options['display_description'] = 'A list of all executed transitions';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    10 => '10',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'sid',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_netid' => 'field_netid',
    'field_transfer_college' => 'field_transfer_college',
    'field_reason_for_request' => 'field_reason_for_request',
    'field_transfer_semester_year_sem' => 'field_transfer_semester_year_sem',
    'nid' => 'nid',
    'title' => 'title',
    'type' => 'type',
    'name' => 'name',
    'hid_1' => 'hid_1',
    'sid' => 'sid',
    'stamp' => 'stamp',
    'name_1' => 'name_1',
    'comment' => 'comment',
    'workflow_node' => 'workflow_node',
    'edit_comment' => 'workflow_node',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'field_netid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_college' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reason_for_request' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_semester_year_sem' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'hid_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'stamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'workflow_node' => array(
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'edit_comment' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: NetID */
  $handler->display->display_options['fields']['field_netid']['id'] = 'field_netid';
  $handler->display->display_options['fields']['field_netid']['table'] = 'field_data_field_netid';
  $handler->display->display_options['fields']['field_netid']['field'] = 'field_netid';
  /* Field: Field: Current College */
  $handler->display->display_options['fields']['field_current_college_autofill']['id'] = 'field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['table'] = 'field_data_field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['field'] = 'field_current_college_autofill';
  /* Field: Content: College you wish to Enter */
  $handler->display->display_options['fields']['field_transfer_college']['id'] = 'field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['table'] = 'field_data_field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['field'] = 'field_transfer_college';
  /* Field: Content: Reason for request: */
  $handler->display->display_options['fields']['field_reason_for_request']['id'] = 'field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['table'] = 'field_data_field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['field'] = 'field_reason_for_request';
  /* Field: Content: Transfer semester */
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['id'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['table'] = 'field_data_field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['field'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['label'] = 'Transfer semester/year: Semester';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid_3';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: Workflow current: Transition ID */
  $handler->display->display_options['fields']['hid_1']['id'] = 'hid_1';
  $handler->display->display_options['fields']['hid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['hid_1']['field'] = 'hid';
  $handler->display->display_options['fields']['hid_1']['label'] = 'hid';
  $handler->display->display_options['fields']['hid_1']['exclude'] = TRUE;
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Current State';
  /* Field: Workflow current: Time */
  $handler->display->display_options['fields']['stamp']['id'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['stamp']['field'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['label'] = 'Since';
  $handler->display->display_options['fields']['stamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['stamp']['second_date_format'] = 'time_only_12_hr_';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'By';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  /* Field: Workflow current: Comment */
  $handler->display->display_options['fields']['comment']['id'] = 'comment';
  $handler->display->display_options['fields']['comment']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['comment']['field'] = 'comment';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/ccd/[nid]?destination=workflow/ict/business">Current Dean</a>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'intercollege_transfer' => 'intercollege_transfer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    12 => '12',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Current state';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  /* Filter criterion: Field: Current College (field_current_college_autofill) */
  $handler->display->display_options['filters']['field_current_college_autofill_value']['id'] = 'field_current_college_autofill_value';
  $handler->display->display_options['filters']['field_current_college_autofill_value']['table'] = 'field_data_field_current_college_autofill';
  $handler->display->display_options['filters']['field_current_college_autofill_value']['field'] = 'field_current_college_autofill_value';
  $handler->display->display_options['filters']['field_current_college_autofill_value']['value'] = 'Heider College of Business';
  $handler->display->display_options['filters']['field_current_college_autofill_value']['group'] = 1;
  $handler->display->display_options['path'] = 'workflow/business';
  $handler->display->display_options['menu']['title'] = 'Business Dean';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['name'] = 'menu-business-workflow';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Business';
  $handler->display->display_options['tab_options']['description'] = 'Your workflow dashboard';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'menu-business-workflow';

  /* Display: Business Future Dean Workflow */
  $handler = $view->new_display('page', 'Business Future Dean Workflow', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Business Future Dean Workflow';
  $handler->display->display_options['display_description'] = 'A list of all executed transitions';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    10 => '10',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'sid',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_netid' => 'field_netid',
    'field_transfer_college' => 'field_transfer_college',
    'field_reason_for_request' => 'field_reason_for_request',
    'field_transfer_semester_year_sem' => 'field_transfer_semester_year_sem',
    'nid' => 'nid',
    'title' => 'title',
    'type' => 'type',
    'name' => 'name',
    'hid_1' => 'hid_1',
    'sid' => 'sid',
    'stamp' => 'stamp',
    'name_1' => 'name_1',
    'comment' => 'comment',
    'workflow_node' => 'workflow_node',
    'edit_comment' => 'workflow_node',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'field_netid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_college' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reason_for_request' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_semester_year_sem' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'hid_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'stamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'workflow_node' => array(
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'edit_comment' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: NetID */
  $handler->display->display_options['fields']['field_netid']['id'] = 'field_netid';
  $handler->display->display_options['fields']['field_netid']['table'] = 'field_data_field_netid';
  $handler->display->display_options['fields']['field_netid']['field'] = 'field_netid';
  /* Field: Field: Current College */
  $handler->display->display_options['fields']['field_current_college_autofill']['id'] = 'field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['table'] = 'field_data_field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['field'] = 'field_current_college_autofill';
  /* Field: Content: College you wish to Enter */
  $handler->display->display_options['fields']['field_transfer_college']['id'] = 'field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['table'] = 'field_data_field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['field'] = 'field_transfer_college';
  /* Field: Content: Reason for request: */
  $handler->display->display_options['fields']['field_reason_for_request']['id'] = 'field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['table'] = 'field_data_field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['field'] = 'field_reason_for_request';
  /* Field: Content: Transfer semester */
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['id'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['table'] = 'field_data_field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['field'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['label'] = 'Transfer semester/year: Semester';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid_3';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: Workflow current: Transition ID */
  $handler->display->display_options['fields']['hid_1']['id'] = 'hid_1';
  $handler->display->display_options['fields']['hid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['hid_1']['field'] = 'hid';
  $handler->display->display_options['fields']['hid_1']['label'] = 'hid';
  $handler->display->display_options['fields']['hid_1']['exclude'] = TRUE;
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Current State';
  /* Field: Workflow current: Time */
  $handler->display->display_options['fields']['stamp']['id'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['stamp']['field'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['label'] = 'Since';
  $handler->display->display_options['fields']['stamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['stamp']['second_date_format'] = 'time_only_12_hr_';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'By';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  /* Field: Workflow current: Comment */
  $handler->display->display_options['fields']['comment']['id'] = 'comment';
  $handler->display->display_options['fields']['comment']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['comment']['field'] = 'comment';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/cfd/[nid]?destination=workflow/ict/business">Approving Dean Decision</a>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'intercollege_transfer' => 'intercollege_transfer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    13 => '13',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Current state';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  /* Filter criterion: Content: College you wish to Enter (field_transfer_college) */
  $handler->display->display_options['filters']['field_transfer_college_value']['id'] = 'field_transfer_college_value';
  $handler->display->display_options['filters']['field_transfer_college_value']['table'] = 'field_data_field_transfer_college';
  $handler->display->display_options['filters']['field_transfer_college_value']['field'] = 'field_transfer_college_value';
  $handler->display->display_options['filters']['field_transfer_college_value']['value'] = array(
    'HCB' => 'HCB',
  );
  $handler->display->display_options['filters']['field_transfer_college_value']['group'] = 1;
  $handler->display->display_options['path'] = 'workflow/business';
  $handler->display->display_options['menu']['title'] = 'Business Entering';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-business-workflow';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Business Entering';
  $handler->display->display_options['tab_options']['description'] = 'Your workflow dashboard';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'menu-business-workflow';

  /* Display: Business Past Transfers */
  $handler = $view->new_display('page', 'Business Past Transfers', 'page_14');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Business Past Transfers';
  $handler->display->display_options['display_description'] = 'A list of all executed transitions';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    10 => '10',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'sid',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_netid' => 'field_netid',
    'field_current_college_autofill' => 'field_current_college_autofill',
    'field_transfer_college' => 'field_transfer_college',
    'field_reason_for_request' => 'field_reason_for_request',
    'field_transfer_semester_year_sem' => 'field_transfer_semester_year_sem',
    'nid' => 'nid',
    'title' => 'title',
    'type' => 'type',
    'name' => 'name',
    'hid_1' => 'hid_1',
    'sid' => 'sid',
    'stamp' => 'stamp',
    'name_1' => 'name_1',
    'comment' => 'comment',
    'workflow_node' => 'workflow_node',
    'edit_comment' => 'workflow_node',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'field_netid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_current_college_autofill' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_college' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reason_for_request' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_semester_year_sem' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'hid_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'stamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'workflow_node' => array(
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'edit_comment' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No past transfers found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: NetID */
  $handler->display->display_options['fields']['field_netid']['id'] = 'field_netid';
  $handler->display->display_options['fields']['field_netid']['table'] = 'field_data_field_netid';
  $handler->display->display_options['fields']['field_netid']['field'] = 'field_netid';
  /* Field: Field: Current College */
  $handler->display->display_options['fields']['field_current_college_autofill']['id'] = 'field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['table'] = 'field_data_field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['field'] = 'field_current_college_autofill';
  /* Field: Content: College you wish to Enter */
  $handler->display->display_options['fields']['field_transfer_college']['id'] = 'field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['table'] = 'field_data_field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['field'] = 'field_transfer_college';
  /* Field: Content: Reason for request: */
  $handler->display->display_options['fields']['field_reason_for_request']['id'] = 'field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['table'] = 'field_data_field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['field'] = 'field_reason_for_request';
  /* Field: Content: Transfer semester */
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['id'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['table'] = 'field_data_field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['field'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['label'] = 'Transfer semester/year: Semester';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid_3';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: Workflow current: Transition ID */
  $handler->display->display_options['fields']['hid_1']['id'] = 'hid_1';
  $handler->display->display_options['fields']['hid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['hid_1']['field'] = 'hid';
  $handler->display->display_options['fields']['hid_1']['label'] = 'hid';
  $handler->display->display_options['fields']['hid_1']['exclude'] = TRUE;
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Current State';
  /* Field: Workflow current: Time */
  $handler->display->display_options['fields']['stamp']['id'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['stamp']['field'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['label'] = 'Since';
  $handler->display->display_options['fields']['stamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['stamp']['second_date_format'] = 'time_only_12_hr_';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'By';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  /* Field: Workflow current: Comment */
  $handler->display->display_options['fields']['comment']['id'] = 'comment';
  $handler->display->display_options['fields']['comment']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['comment']['field'] = 'comment';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/printpdf/cict/[nid]">PDF Copy</a>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'intercollege_transfer' => 'intercollege_transfer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    3 => '3',
    11 => '11',
    6 => '6',
    7 => '7',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Current state';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  /* Filter criterion: Content: College you wish to Enter (field_transfer_college) */
  $handler->display->display_options['filters']['field_transfer_college_value']['id'] = 'field_transfer_college_value';
  $handler->display->display_options['filters']['field_transfer_college_value']['table'] = 'field_data_field_transfer_college';
  $handler->display->display_options['filters']['field_transfer_college_value']['field'] = 'field_transfer_college_value';
  $handler->display->display_options['filters']['field_transfer_college_value']['value'] = array(
    'HCB' => 'HCB',
  );
  $handler->display->display_options['filters']['field_transfer_college_value']['group'] = 1;
  $handler->display->display_options['path'] = 'workflow/ccas';
  $handler->display->display_options['menu']['title'] = 'Summary';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Workflow';
  $handler->display->display_options['tab_options']['description'] = 'Your workflow dashboard';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: SPAHP Current Dean Summary */
  $handler = $view->new_display('page', 'SPAHP Current Dean Summary', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'SPAHP Current Dean Summary';
  $handler->display->display_options['display_description'] = 'A list of all executed transitions';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    11 => '11',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'sid',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_netid' => 'field_netid',
    'field_transfer_college' => 'field_transfer_college',
    'field_reason_for_request' => 'field_reason_for_request',
    'field_transfer_semester_year_sem' => 'field_transfer_semester_year_sem',
    'nid' => 'nid',
    'title' => 'title',
    'type' => 'type',
    'name' => 'name',
    'hid_1' => 'hid_1',
    'sid' => 'sid',
    'stamp' => 'stamp',
    'name_1' => 'name_1',
    'comment' => 'comment',
    'workflow_node' => 'workflow_node',
    'edit_comment' => 'workflow_node',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'field_netid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_college' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reason_for_request' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_semester_year_sem' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'hid_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'stamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'workflow_node' => array(
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'edit_comment' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: NetID */
  $handler->display->display_options['fields']['field_netid']['id'] = 'field_netid';
  $handler->display->display_options['fields']['field_netid']['table'] = 'field_data_field_netid';
  $handler->display->display_options['fields']['field_netid']['field'] = 'field_netid';
  /* Field: Field: Current College */
  $handler->display->display_options['fields']['field_current_college_autofill']['id'] = 'field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['table'] = 'field_data_field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['field'] = 'field_current_college_autofill';
  /* Field: Content: College you wish to Enter */
  $handler->display->display_options['fields']['field_transfer_college']['id'] = 'field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['table'] = 'field_data_field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['field'] = 'field_transfer_college';
  /* Field: Content: Reason for request: */
  $handler->display->display_options['fields']['field_reason_for_request']['id'] = 'field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['table'] = 'field_data_field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['field'] = 'field_reason_for_request';
  /* Field: Content: Transfer semester */
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['id'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['table'] = 'field_data_field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['field'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['label'] = 'Transfer semester/year: Semester';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid_3';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: Workflow current: Transition ID */
  $handler->display->display_options['fields']['hid_1']['id'] = 'hid_1';
  $handler->display->display_options['fields']['hid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['hid_1']['field'] = 'hid';
  $handler->display->display_options['fields']['hid_1']['label'] = 'hid';
  $handler->display->display_options['fields']['hid_1']['exclude'] = TRUE;
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Current State';
  /* Field: Workflow current: Time */
  $handler->display->display_options['fields']['stamp']['id'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['stamp']['field'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['label'] = 'Since';
  $handler->display->display_options['fields']['stamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['stamp']['second_date_format'] = 'time_only_12_hr_';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'By';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  /* Field: Workflow current: Comment */
  $handler->display->display_options['fields']['comment']['id'] = 'comment';
  $handler->display->display_options['fields']['comment']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['comment']['field'] = 'comment';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/ccd/[nid]?destination=workflow/ict/spahp">Current Dean</a>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'intercollege_transfer' => 'intercollege_transfer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    12 => '12',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Current state';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  /* Filter criterion: Field: Current Class (field_current_class:format) */
  $handler->display->display_options['filters']['field_current_class_format']['id'] = 'field_current_class_format';
  $handler->display->display_options['filters']['field_current_class_format']['table'] = 'field_data_field_current_class';
  $handler->display->display_options['filters']['field_current_class_format']['field'] = 'field_current_class_format';
  $handler->display->display_options['filters']['field_current_class_format']['value'] = 'School of Pharmacy & Hlth Prof';
  $handler->display->display_options['filters']['field_current_class_format']['group'] = 1;
  $handler->display->display_options['path'] = 'workflow/spahp';
  $handler->display->display_options['menu']['title'] = 'Spahp';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['name'] = 'menu-business-workflow';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Spahp';
  $handler->display->display_options['tab_options']['description'] = 'spahp';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: SPAHP Future Dean Summary */
  $handler = $view->new_display('page', 'SPAHP Future Dean Summary', 'page_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'SPAHP Future Dean Summary';
  $handler->display->display_options['display_description'] = 'A list of all executed transitions';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    11 => '11',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'sid',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_netid' => 'field_netid',
    'field_transfer_college' => 'field_transfer_college',
    'field_reason_for_request' => 'field_reason_for_request',
    'field_transfer_semester_year_sem' => 'field_transfer_semester_year_sem',
    'nid' => 'nid',
    'title' => 'title',
    'type' => 'type',
    'name' => 'name',
    'hid_1' => 'hid_1',
    'sid' => 'sid',
    'stamp' => 'stamp',
    'name_1' => 'name_1',
    'comment' => 'comment',
    'workflow_node' => 'workflow_node',
    'edit_comment' => 'workflow_node',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'field_netid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_college' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reason_for_request' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_semester_year_sem' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'hid_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'stamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'workflow_node' => array(
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'edit_comment' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: NetID */
  $handler->display->display_options['fields']['field_netid']['id'] = 'field_netid';
  $handler->display->display_options['fields']['field_netid']['table'] = 'field_data_field_netid';
  $handler->display->display_options['fields']['field_netid']['field'] = 'field_netid';
  /* Field: Field: Current College */
  $handler->display->display_options['fields']['field_current_college_autofill']['id'] = 'field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['table'] = 'field_data_field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['field'] = 'field_current_college_autofill';
  /* Field: Content: College you wish to Enter */
  $handler->display->display_options['fields']['field_transfer_college']['id'] = 'field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['table'] = 'field_data_field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['field'] = 'field_transfer_college';
  /* Field: Content: Reason for request: */
  $handler->display->display_options['fields']['field_reason_for_request']['id'] = 'field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['table'] = 'field_data_field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['field'] = 'field_reason_for_request';
  /* Field: Content: Transfer semester */
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['id'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['table'] = 'field_data_field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['field'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['label'] = 'Transfer semester/year: Semester';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid_3';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: Workflow current: Transition ID */
  $handler->display->display_options['fields']['hid_1']['id'] = 'hid_1';
  $handler->display->display_options['fields']['hid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['hid_1']['field'] = 'hid';
  $handler->display->display_options['fields']['hid_1']['label'] = 'hid';
  $handler->display->display_options['fields']['hid_1']['exclude'] = TRUE;
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Current State';
  /* Field: Workflow current: Time */
  $handler->display->display_options['fields']['stamp']['id'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['stamp']['field'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['label'] = 'Since';
  $handler->display->display_options['fields']['stamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['stamp']['second_date_format'] = 'time_only_12_hr_';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'By';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  /* Field: Workflow current: Comment */
  $handler->display->display_options['fields']['comment']['id'] = 'comment';
  $handler->display->display_options['fields']['comment']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['comment']['field'] = 'comment';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/cfd/[nid]?destination=workflow/ict/spahp">Approving Dean Decision</a>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'intercollege_transfer' => 'intercollege_transfer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    13 => '13',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Current state';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  /* Filter criterion: Content: College you wish to Enter (field_transfer_college) */
  $handler->display->display_options['filters']['field_transfer_college_value']['id'] = 'field_transfer_college_value';
  $handler->display->display_options['filters']['field_transfer_college_value']['table'] = 'field_data_field_transfer_college';
  $handler->display->display_options['filters']['field_transfer_college_value']['field'] = 'field_transfer_college_value';
  $handler->display->display_options['filters']['field_transfer_college_value']['value'] = array(
    'SPAHP' => 'SPAHP',
  );
  $handler->display->display_options['filters']['field_transfer_college_value']['group'] = 1;
  $handler->display->display_options['path'] = 'workflow/spahp';
  $handler->display->display_options['menu']['title'] = 'Spahp';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['name'] = 'menu-business-workflow';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Spahp';
  $handler->display->display_options['tab_options']['description'] = 'spahp';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: CCAS Current Dean Summary */
  $handler = $view->new_display('page', 'CCAS Current Dean Summary', 'page_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'CCAS Current Dean Summary';
  $handler->display->display_options['display_description'] = 'A list of all executed transitions';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'sid',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_netid' => 'field_netid',
    'field_current_college_autofill' => 'field_current_college_autofill',
    'field_transfer_college' => 'field_transfer_college',
    'field_reason_for_request' => 'field_reason_for_request',
    'field_transfer_semester_year_sem' => 'field_transfer_semester_year_sem',
    'nid' => 'nid',
    'title' => 'title',
    'type' => 'type',
    'name' => 'name',
    'hid_1' => 'hid_1',
    'sid' => 'sid',
    'stamp' => 'stamp',
    'name_1' => 'name_1',
    'comment' => 'comment',
    'workflow_node' => 'workflow_node',
    'edit_comment' => 'workflow_node',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'field_netid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_current_college_autofill' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_college' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reason_for_request' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_semester_year_sem' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'hid_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'stamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'workflow_node' => array(
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'edit_comment' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: NetID */
  $handler->display->display_options['fields']['field_netid']['id'] = 'field_netid';
  $handler->display->display_options['fields']['field_netid']['table'] = 'field_data_field_netid';
  $handler->display->display_options['fields']['field_netid']['field'] = 'field_netid';
  /* Field: Field: Current College */
  $handler->display->display_options['fields']['field_current_college_autofill']['id'] = 'field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['table'] = 'field_data_field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['field'] = 'field_current_college_autofill';
  /* Field: Content: College you wish to Enter */
  $handler->display->display_options['fields']['field_transfer_college']['id'] = 'field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['table'] = 'field_data_field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['field'] = 'field_transfer_college';
  /* Field: Content: Reason for request: */
  $handler->display->display_options['fields']['field_reason_for_request']['id'] = 'field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['table'] = 'field_data_field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['field'] = 'field_reason_for_request';
  /* Field: Content: Transfer semester */
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['id'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['table'] = 'field_data_field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['field'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['label'] = 'Transfer semester/year: Semester';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid_3';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: Workflow current: Transition ID */
  $handler->display->display_options['fields']['hid_1']['id'] = 'hid_1';
  $handler->display->display_options['fields']['hid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['hid_1']['field'] = 'hid';
  $handler->display->display_options['fields']['hid_1']['label'] = 'hid';
  $handler->display->display_options['fields']['hid_1']['exclude'] = TRUE;
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Current State';
  /* Field: Workflow current: Time */
  $handler->display->display_options['fields']['stamp']['id'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['stamp']['field'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['label'] = 'Since';
  $handler->display->display_options['fields']['stamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['stamp']['second_date_format'] = 'time_only_12_hr_';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'By';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  /* Field: Workflow current: Comment */
  $handler->display->display_options['fields']['comment']['id'] = 'comment';
  $handler->display->display_options['fields']['comment']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['comment']['field'] = 'comment';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/ccd/[nid]?destination=workflow/ict/ccas">Current Dean</a>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'intercollege_transfer' => 'intercollege_transfer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    12 => '12',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Current state';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  /* Filter criterion: Field: Current College (field_current_college_autofill) */
  $handler->display->display_options['filters']['field_current_college_autofill_value']['id'] = 'field_current_college_autofill_value';
  $handler->display->display_options['filters']['field_current_college_autofill_value']['table'] = 'field_data_field_current_college_autofill';
  $handler->display->display_options['filters']['field_current_college_autofill_value']['field'] = 'field_current_college_autofill_value';
  $handler->display->display_options['filters']['field_current_college_autofill_value']['value'] = 'College of Arts and Sciences';
  $handler->display->display_options['filters']['field_current_college_autofill_value']['group'] = 1;
  $handler->display->display_options['path'] = 'workflow/ccas';
  $handler->display->display_options['menu']['title'] = 'Summary';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Workflow';
  $handler->display->display_options['tab_options']['description'] = 'Your workflow dashboard';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: CCAS Future Dean Summary */
  $handler = $view->new_display('page', 'CCAS Future Dean Summary', 'page_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'CCAS Future Dean Summary';
  $handler->display->display_options['display_description'] = 'A list of all executed transitions';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'sid',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_netid' => 'field_netid',
    'field_current_college_autofill' => 'field_current_college_autofill',
    'field_transfer_college' => 'field_transfer_college',
    'field_reason_for_request' => 'field_reason_for_request',
    'field_transfer_semester_year_sem' => 'field_transfer_semester_year_sem',
    'nid' => 'nid',
    'title' => 'title',
    'type' => 'type',
    'name' => 'name',
    'hid_1' => 'hid_1',
    'sid' => 'sid',
    'stamp' => 'stamp',
    'name_1' => 'name_1',
    'comment' => 'comment',
    'workflow_node' => 'workflow_node',
    'edit_comment' => 'workflow_node',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'field_netid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_current_college_autofill' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_college' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reason_for_request' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_semester_year_sem' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'hid_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'stamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'workflow_node' => array(
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'edit_comment' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: NetID */
  $handler->display->display_options['fields']['field_netid']['id'] = 'field_netid';
  $handler->display->display_options['fields']['field_netid']['table'] = 'field_data_field_netid';
  $handler->display->display_options['fields']['field_netid']['field'] = 'field_netid';
  /* Field: Field: Current College */
  $handler->display->display_options['fields']['field_current_college_autofill']['id'] = 'field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['table'] = 'field_data_field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['field'] = 'field_current_college_autofill';
  /* Field: Content: College you wish to Enter */
  $handler->display->display_options['fields']['field_transfer_college']['id'] = 'field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['table'] = 'field_data_field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['field'] = 'field_transfer_college';
  /* Field: Content: Reason for request: */
  $handler->display->display_options['fields']['field_reason_for_request']['id'] = 'field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['table'] = 'field_data_field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['field'] = 'field_reason_for_request';
  /* Field: Content: Transfer semester */
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['id'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['table'] = 'field_data_field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['field'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['label'] = 'Transfer semester/year: Semester';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid_3';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: Workflow current: Transition ID */
  $handler->display->display_options['fields']['hid_1']['id'] = 'hid_1';
  $handler->display->display_options['fields']['hid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['hid_1']['field'] = 'hid';
  $handler->display->display_options['fields']['hid_1']['label'] = 'hid';
  $handler->display->display_options['fields']['hid_1']['exclude'] = TRUE;
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Current State';
  /* Field: Workflow current: Time */
  $handler->display->display_options['fields']['stamp']['id'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['stamp']['field'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['label'] = 'Since';
  $handler->display->display_options['fields']['stamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['stamp']['second_date_format'] = 'time_only_12_hr_';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'By';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  /* Field: Workflow current: Comment */
  $handler->display->display_options['fields']['comment']['id'] = 'comment';
  $handler->display->display_options['fields']['comment']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['comment']['field'] = 'comment';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/cfd/[nid]?destination=workflow/ict/ccas">Approving Dean Decision</a>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'intercollege_transfer' => 'intercollege_transfer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    13 => '13',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Current state';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  /* Filter criterion: Content: College you wish to Enter (field_transfer_college) */
  $handler->display->display_options['filters']['field_transfer_college_value']['id'] = 'field_transfer_college_value';
  $handler->display->display_options['filters']['field_transfer_college_value']['table'] = 'field_data_field_transfer_college';
  $handler->display->display_options['filters']['field_transfer_college_value']['field'] = 'field_transfer_college_value';
  $handler->display->display_options['filters']['field_transfer_college_value']['value'] = array(
    'CCAS' => 'CCAS',
  );
  $handler->display->display_options['filters']['field_transfer_college_value']['group'] = 1;
  $handler->display->display_options['path'] = 'workflow/ccas';
  $handler->display->display_options['menu']['title'] = 'Summary';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Workflow';
  $handler->display->display_options['tab_options']['description'] = 'Your workflow dashboard';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: CCAS Past Transfers */
  $handler = $view->new_display('page', 'CCAS Past Transfers', 'page_13');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'CCAS Past Transfers';
  $handler->display->display_options['display_description'] = 'A list of all executed transitions';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'sid',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_netid' => 'field_netid',
    'field_current_college_autofill' => 'field_current_college_autofill',
    'field_transfer_college' => 'field_transfer_college',
    'field_reason_for_request' => 'field_reason_for_request',
    'field_transfer_semester_year_sem' => 'field_transfer_semester_year_sem',
    'nid' => 'nid',
    'title' => 'title',
    'type' => 'type',
    'name' => 'name',
    'hid_1' => 'hid_1',
    'sid' => 'sid',
    'stamp' => 'stamp',
    'name_1' => 'name_1',
    'comment' => 'comment',
    'workflow_node' => 'workflow_node',
    'edit_comment' => 'workflow_node',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'field_netid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_current_college_autofill' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_college' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reason_for_request' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_semester_year_sem' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'hid_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'stamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'workflow_node' => array(
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'edit_comment' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No past transfers found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: NetID */
  $handler->display->display_options['fields']['field_netid']['id'] = 'field_netid';
  $handler->display->display_options['fields']['field_netid']['table'] = 'field_data_field_netid';
  $handler->display->display_options['fields']['field_netid']['field'] = 'field_netid';
  /* Field: Field: Current College */
  $handler->display->display_options['fields']['field_current_college_autofill']['id'] = 'field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['table'] = 'field_data_field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['field'] = 'field_current_college_autofill';
  /* Field: Content: College you wish to Enter */
  $handler->display->display_options['fields']['field_transfer_college']['id'] = 'field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['table'] = 'field_data_field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['field'] = 'field_transfer_college';
  /* Field: Content: Reason for request: */
  $handler->display->display_options['fields']['field_reason_for_request']['id'] = 'field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['table'] = 'field_data_field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['field'] = 'field_reason_for_request';
  /* Field: Content: Transfer semester */
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['id'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['table'] = 'field_data_field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['field'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['label'] = 'Transfer semester/year: Semester';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid_3';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: Workflow current: Transition ID */
  $handler->display->display_options['fields']['hid_1']['id'] = 'hid_1';
  $handler->display->display_options['fields']['hid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['hid_1']['field'] = 'hid';
  $handler->display->display_options['fields']['hid_1']['label'] = 'hid';
  $handler->display->display_options['fields']['hid_1']['exclude'] = TRUE;
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Current State';
  /* Field: Workflow current: Time */
  $handler->display->display_options['fields']['stamp']['id'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['stamp']['field'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['label'] = 'Since';
  $handler->display->display_options['fields']['stamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['stamp']['second_date_format'] = 'time_only_12_hr_';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'By';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  /* Field: Workflow current: Comment */
  $handler->display->display_options['fields']['comment']['id'] = 'comment';
  $handler->display->display_options['fields']['comment']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['comment']['field'] = 'comment';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/printpdf/cict/[nid]">PDF Copy</a>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'intercollege_transfer' => 'intercollege_transfer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    3 => '3',
    11 => '11',
    6 => '6',
    7 => '7',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Current state';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  /* Filter criterion: Content: College you wish to Enter (field_transfer_college) */
  $handler->display->display_options['filters']['field_transfer_college_value']['id'] = 'field_transfer_college_value';
  $handler->display->display_options['filters']['field_transfer_college_value']['table'] = 'field_data_field_transfer_college';
  $handler->display->display_options['filters']['field_transfer_college_value']['field'] = 'field_transfer_college_value';
  $handler->display->display_options['filters']['field_transfer_college_value']['value'] = array(
    'CCAS' => 'CCAS',
  );
  $handler->display->display_options['filters']['field_transfer_college_value']['group'] = 1;
  $handler->display->display_options['path'] = 'workflow/ccas';
  $handler->display->display_options['menu']['title'] = 'Summary';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Workflow';
  $handler->display->display_options['tab_options']['description'] = 'Your workflow dashboard';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: CPS Current Dean Summary */
  $handler = $view->new_display('page', 'CPS Current Dean Summary', 'page_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'CPS Current Dean Summary';
  $handler->display->display_options['display_description'] = 'A list of all executed transitions';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    9 => '9',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'sid',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_netid' => 'field_netid',
    'field_current_college_autofill' => 'field_current_college_autofill',
    'field_transfer_college' => 'field_transfer_college',
    'field_reason_for_request' => 'field_reason_for_request',
    'field_transfer_semester_year_sem' => 'field_transfer_semester_year_sem',
    'nid' => 'nid',
    'title' => 'title',
    'type' => 'type',
    'name' => 'name',
    'hid_1' => 'hid_1',
    'sid' => 'sid',
    'stamp' => 'stamp',
    'name_1' => 'name_1',
    'comment' => 'comment',
    'workflow_node' => 'workflow_node',
    'edit_comment' => 'workflow_node',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'field_netid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_current_college_autofill' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_college' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reason_for_request' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_semester_year_sem' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'hid_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'stamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'workflow_node' => array(
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'edit_comment' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: NetID */
  $handler->display->display_options['fields']['field_netid']['id'] = 'field_netid';
  $handler->display->display_options['fields']['field_netid']['table'] = 'field_data_field_netid';
  $handler->display->display_options['fields']['field_netid']['field'] = 'field_netid';
  /* Field: Field: Current College */
  $handler->display->display_options['fields']['field_current_college_autofill']['id'] = 'field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['table'] = 'field_data_field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['field'] = 'field_current_college_autofill';
  /* Field: Content: College you wish to Enter */
  $handler->display->display_options['fields']['field_transfer_college']['id'] = 'field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['table'] = 'field_data_field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['field'] = 'field_transfer_college';
  /* Field: Content: Reason for request: */
  $handler->display->display_options['fields']['field_reason_for_request']['id'] = 'field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['table'] = 'field_data_field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['field'] = 'field_reason_for_request';
  /* Field: Content: Transfer semester */
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['id'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['table'] = 'field_data_field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['field'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['label'] = 'Transfer semester/year: Semester';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid_3';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: Workflow current: Transition ID */
  $handler->display->display_options['fields']['hid_1']['id'] = 'hid_1';
  $handler->display->display_options['fields']['hid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['hid_1']['field'] = 'hid';
  $handler->display->display_options['fields']['hid_1']['label'] = 'hid';
  $handler->display->display_options['fields']['hid_1']['exclude'] = TRUE;
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Current State';
  /* Field: Workflow current: Time */
  $handler->display->display_options['fields']['stamp']['id'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['stamp']['field'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['label'] = 'Since';
  $handler->display->display_options['fields']['stamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['stamp']['second_date_format'] = 'time_only_12_hr_';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'By';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  /* Field: Workflow current: Comment */
  $handler->display->display_options['fields']['comment']['id'] = 'comment';
  $handler->display->display_options['fields']['comment']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['comment']['field'] = 'comment';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/ccd/[nid]?destination=workflow/ict/cps">Current Dean</a>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'intercollege_transfer' => 'intercollege_transfer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    12 => '12',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Current state';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  /* Filter criterion: Field: Current College (field_current_college_autofill) */
  $handler->display->display_options['filters']['field_current_college_autofill_value']['id'] = 'field_current_college_autofill_value';
  $handler->display->display_options['filters']['field_current_college_autofill_value']['table'] = 'field_data_field_current_college_autofill';
  $handler->display->display_options['filters']['field_current_college_autofill_value']['field'] = 'field_current_college_autofill_value';
  $handler->display->display_options['filters']['field_current_college_autofill_value']['value'] = 'Coll of Professional Studies';
  $handler->display->display_options['filters']['field_current_college_autofill_value']['group'] = 1;
  $handler->display->display_options['path'] = 'workflow/cps';
  $handler->display->display_options['menu']['title'] = 'Summary';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Workflow';
  $handler->display->display_options['tab_options']['description'] = 'Your workflow dashboard';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: CPS Future Dean Summary */
  $handler = $view->new_display('page', 'CPS Future Dean Summary', 'page_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'CPS Future Dean Summary';
  $handler->display->display_options['display_description'] = 'A list of all executed transitions';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    9 => '9',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'sid',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_netid' => 'field_netid',
    'field_current_college_autofill' => 'field_current_college_autofill',
    'field_transfer_college' => 'field_transfer_college',
    'field_reason_for_request' => 'field_reason_for_request',
    'field_transfer_semester_year_sem' => 'field_transfer_semester_year_sem',
    'nid' => 'nid',
    'title' => 'title',
    'type' => 'type',
    'name' => 'name',
    'hid_1' => 'hid_1',
    'sid' => 'sid',
    'stamp' => 'stamp',
    'name_1' => 'name_1',
    'comment' => 'comment',
    'workflow_node' => 'workflow_node',
    'edit_comment' => 'workflow_node',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'field_netid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_current_college_autofill' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_college' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reason_for_request' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_semester_year_sem' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'hid_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'stamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'workflow_node' => array(
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'edit_comment' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: NetID */
  $handler->display->display_options['fields']['field_netid']['id'] = 'field_netid';
  $handler->display->display_options['fields']['field_netid']['table'] = 'field_data_field_netid';
  $handler->display->display_options['fields']['field_netid']['field'] = 'field_netid';
  /* Field: Field: Current College */
  $handler->display->display_options['fields']['field_current_college_autofill']['id'] = 'field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['table'] = 'field_data_field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['field'] = 'field_current_college_autofill';
  /* Field: Content: College you wish to Enter */
  $handler->display->display_options['fields']['field_transfer_college']['id'] = 'field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['table'] = 'field_data_field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['field'] = 'field_transfer_college';
  /* Field: Content: Reason for request: */
  $handler->display->display_options['fields']['field_reason_for_request']['id'] = 'field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['table'] = 'field_data_field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['field'] = 'field_reason_for_request';
  /* Field: Content: Transfer semester */
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['id'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['table'] = 'field_data_field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['field'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['label'] = 'Transfer semester/year: Semester';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid_3';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: Workflow current: Transition ID */
  $handler->display->display_options['fields']['hid_1']['id'] = 'hid_1';
  $handler->display->display_options['fields']['hid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['hid_1']['field'] = 'hid';
  $handler->display->display_options['fields']['hid_1']['label'] = 'hid';
  $handler->display->display_options['fields']['hid_1']['exclude'] = TRUE;
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Current State';
  /* Field: Workflow current: Time */
  $handler->display->display_options['fields']['stamp']['id'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['stamp']['field'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['label'] = 'Since';
  $handler->display->display_options['fields']['stamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['stamp']['second_date_format'] = 'time_only_12_hr_';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'By';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  /* Field: Workflow current: Comment */
  $handler->display->display_options['fields']['comment']['id'] = 'comment';
  $handler->display->display_options['fields']['comment']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['comment']['field'] = 'comment';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/cfd/[nid]?destination=workflow/ict/cps">Approving Dean Decision</a>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'intercollege_transfer' => 'intercollege_transfer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    13 => '13',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Current state';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  /* Filter criterion: Content: College you wish to Enter (field_transfer_college) */
  $handler->display->display_options['filters']['field_transfer_college_value']['id'] = 'field_transfer_college_value';
  $handler->display->display_options['filters']['field_transfer_college_value']['table'] = 'field_data_field_transfer_college';
  $handler->display->display_options['filters']['field_transfer_college_value']['field'] = 'field_transfer_college_value';
  $handler->display->display_options['filters']['field_transfer_college_value']['value'] = array(
    'CPS' => 'CPS',
  );
  $handler->display->display_options['filters']['field_transfer_college_value']['group'] = 1;
  $handler->display->display_options['path'] = 'workflow/cps';
  $handler->display->display_options['menu']['title'] = 'Summary';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Workflow';
  $handler->display->display_options['tab_options']['description'] = 'Your workflow dashboard';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: CPS Past Transfers */
  $handler = $view->new_display('page', 'CPS Past Transfers', 'page_15');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'CPS Past Transfers';
  $handler->display->display_options['display_description'] = 'A list of all executed transitions';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    9 => '9',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'sid',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_netid' => 'field_netid',
    'field_current_college_autofill' => 'field_current_college_autofill',
    'field_transfer_college' => 'field_transfer_college',
    'field_reason_for_request' => 'field_reason_for_request',
    'field_transfer_semester_year_sem' => 'field_transfer_semester_year_sem',
    'nid' => 'nid',
    'title' => 'title',
    'type' => 'type',
    'name' => 'name',
    'hid_1' => 'hid_1',
    'sid' => 'sid',
    'stamp' => 'stamp',
    'name_1' => 'name_1',
    'comment' => 'comment',
    'workflow_node' => 'workflow_node',
    'edit_comment' => 'workflow_node',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'field_netid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_current_college_autofill' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_college' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reason_for_request' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_semester_year_sem' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'hid_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'stamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'workflow_node' => array(
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'edit_comment' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No past transfers found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: NetID */
  $handler->display->display_options['fields']['field_netid']['id'] = 'field_netid';
  $handler->display->display_options['fields']['field_netid']['table'] = 'field_data_field_netid';
  $handler->display->display_options['fields']['field_netid']['field'] = 'field_netid';
  /* Field: Field: Current College */
  $handler->display->display_options['fields']['field_current_college_autofill']['id'] = 'field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['table'] = 'field_data_field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['field'] = 'field_current_college_autofill';
  /* Field: Content: College you wish to Enter */
  $handler->display->display_options['fields']['field_transfer_college']['id'] = 'field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['table'] = 'field_data_field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['field'] = 'field_transfer_college';
  /* Field: Content: Reason for request: */
  $handler->display->display_options['fields']['field_reason_for_request']['id'] = 'field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['table'] = 'field_data_field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['field'] = 'field_reason_for_request';
  /* Field: Content: Transfer semester */
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['id'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['table'] = 'field_data_field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['field'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['label'] = 'Transfer semester/year: Semester';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid_3';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: Workflow current: Transition ID */
  $handler->display->display_options['fields']['hid_1']['id'] = 'hid_1';
  $handler->display->display_options['fields']['hid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['hid_1']['field'] = 'hid';
  $handler->display->display_options['fields']['hid_1']['label'] = 'hid';
  $handler->display->display_options['fields']['hid_1']['exclude'] = TRUE;
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Current State';
  /* Field: Workflow current: Time */
  $handler->display->display_options['fields']['stamp']['id'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['stamp']['field'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['label'] = 'Since';
  $handler->display->display_options['fields']['stamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['stamp']['second_date_format'] = 'time_only_12_hr_';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'By';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  /* Field: Workflow current: Comment */
  $handler->display->display_options['fields']['comment']['id'] = 'comment';
  $handler->display->display_options['fields']['comment']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['comment']['field'] = 'comment';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/printpdf/cict/[nid]">PDF Copy</a>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'intercollege_transfer' => 'intercollege_transfer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    3 => '3',
    11 => '11',
    6 => '6',
    7 => '7',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Current state';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  /* Filter criterion: Content: College you wish to Enter (field_transfer_college) */
  $handler->display->display_options['filters']['field_transfer_college_value']['id'] = 'field_transfer_college_value';
  $handler->display->display_options['filters']['field_transfer_college_value']['table'] = 'field_data_field_transfer_college';
  $handler->display->display_options['filters']['field_transfer_college_value']['field'] = 'field_transfer_college_value';
  $handler->display->display_options['filters']['field_transfer_college_value']['value'] = array(
    'CPS' => 'CPS',
  );
  $handler->display->display_options['filters']['field_transfer_college_value']['group'] = 1;
  $handler->display->display_options['path'] = 'workflow/ccas';
  $handler->display->display_options['menu']['title'] = 'Summary';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Workflow';
  $handler->display->display_options['tab_options']['description'] = 'Your workflow dashboard';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Nursing Current Dean Summary */
  $handler = $view->new_display('page', 'Nursing Current Dean Summary', 'page_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Nursing Current Dean Summary';
  $handler->display->display_options['display_description'] = 'A list of all executed transitions';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    8 => '8',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'sid',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_netid' => 'field_netid',
    'field_transfer_college' => 'field_transfer_college',
    'field_reason_for_request' => 'field_reason_for_request',
    'field_transfer_semester_year_sem' => 'field_transfer_semester_year_sem',
    'nid' => 'nid',
    'title' => 'title',
    'type' => 'type',
    'name' => 'name',
    'hid_1' => 'hid_1',
    'sid' => 'sid',
    'stamp' => 'stamp',
    'name_1' => 'name_1',
    'comment' => 'comment',
    'workflow_node' => 'workflow_node',
    'edit_comment' => 'workflow_node',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'field_netid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_college' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reason_for_request' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_semester_year_sem' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'hid_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'stamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'workflow_node' => array(
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'edit_comment' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: NetID */
  $handler->display->display_options['fields']['field_netid']['id'] = 'field_netid';
  $handler->display->display_options['fields']['field_netid']['table'] = 'field_data_field_netid';
  $handler->display->display_options['fields']['field_netid']['field'] = 'field_netid';
  /* Field: Field: Current College */
  $handler->display->display_options['fields']['field_current_college_autofill']['id'] = 'field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['table'] = 'field_data_field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['field'] = 'field_current_college_autofill';
  /* Field: Content: College you wish to Enter */
  $handler->display->display_options['fields']['field_transfer_college']['id'] = 'field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['table'] = 'field_data_field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['field'] = 'field_transfer_college';
  /* Field: Content: Reason for request: */
  $handler->display->display_options['fields']['field_reason_for_request']['id'] = 'field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['table'] = 'field_data_field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['field'] = 'field_reason_for_request';
  /* Field: Content: Transfer semester */
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['id'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['table'] = 'field_data_field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['field'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['label'] = 'Transfer semester/year: Semester';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid_3';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: Workflow current: Transition ID */
  $handler->display->display_options['fields']['hid_1']['id'] = 'hid_1';
  $handler->display->display_options['fields']['hid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['hid_1']['field'] = 'hid';
  $handler->display->display_options['fields']['hid_1']['label'] = 'hid';
  $handler->display->display_options['fields']['hid_1']['exclude'] = TRUE;
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Current State';
  /* Field: Workflow current: Time */
  $handler->display->display_options['fields']['stamp']['id'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['stamp']['field'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['label'] = 'Since';
  $handler->display->display_options['fields']['stamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['stamp']['second_date_format'] = 'time_only_12_hr_';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'By';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  /* Field: Workflow current: Comment */
  $handler->display->display_options['fields']['comment']['id'] = 'comment';
  $handler->display->display_options['fields']['comment']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['comment']['field'] = 'comment';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/ccd/[nid]?destination=workflow/ict/nursing">Current Dean</a>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'intercollege_transfer' => 'intercollege_transfer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    12 => '12',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Current state';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  /* Filter criterion: Field: Current College (field_current_college_autofill) */
  $handler->display->display_options['filters']['field_current_college_autofill_value']['id'] = 'field_current_college_autofill_value';
  $handler->display->display_options['filters']['field_current_college_autofill_value']['table'] = 'field_data_field_current_college_autofill';
  $handler->display->display_options['filters']['field_current_college_autofill_value']['field'] = 'field_current_college_autofill_value';
  $handler->display->display_options['filters']['field_current_college_autofill_value']['value'] = 'College of Nursing';
  $handler->display->display_options['path'] = 'workflow/nursing';
  $handler->display->display_options['menu']['title'] = 'Summary';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Workflow';
  $handler->display->display_options['tab_options']['description'] = 'Your workflow dashboard';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Nursing Future Dean Summary */
  $handler = $view->new_display('page', 'Nursing Future Dean Summary', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Nursing Future Dean Summary';
  $handler->display->display_options['display_description'] = 'A list of all executed transitions';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    8 => '8',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'sid',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_netid' => 'field_netid',
    'field_transfer_college' => 'field_transfer_college',
    'field_reason_for_request' => 'field_reason_for_request',
    'field_transfer_semester_year_sem' => 'field_transfer_semester_year_sem',
    'nid' => 'nid',
    'title' => 'title',
    'type' => 'type',
    'name' => 'name',
    'hid_1' => 'hid_1',
    'sid' => 'sid',
    'stamp' => 'stamp',
    'name_1' => 'name_1',
    'comment' => 'comment',
    'workflow_node' => 'workflow_node',
    'edit_comment' => 'workflow_node',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'field_netid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_college' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reason_for_request' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_semester_year_sem' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'hid_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'stamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'workflow_node' => array(
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'edit_comment' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: NetID */
  $handler->display->display_options['fields']['field_netid']['id'] = 'field_netid';
  $handler->display->display_options['fields']['field_netid']['table'] = 'field_data_field_netid';
  $handler->display->display_options['fields']['field_netid']['field'] = 'field_netid';
  /* Field: Field: Current College */
  $handler->display->display_options['fields']['field_current_college_autofill']['id'] = 'field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['table'] = 'field_data_field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['field'] = 'field_current_college_autofill';
  /* Field: Content: College you wish to Enter */
  $handler->display->display_options['fields']['field_transfer_college']['id'] = 'field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['table'] = 'field_data_field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['field'] = 'field_transfer_college';
  /* Field: Content: Reason for request: */
  $handler->display->display_options['fields']['field_reason_for_request']['id'] = 'field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['table'] = 'field_data_field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['field'] = 'field_reason_for_request';
  /* Field: Content: Transfer semester */
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['id'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['table'] = 'field_data_field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['field'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['label'] = 'Transfer semester/year: Semester';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid_3';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: Workflow current: Transition ID */
  $handler->display->display_options['fields']['hid_1']['id'] = 'hid_1';
  $handler->display->display_options['fields']['hid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['hid_1']['field'] = 'hid';
  $handler->display->display_options['fields']['hid_1']['label'] = 'hid';
  $handler->display->display_options['fields']['hid_1']['exclude'] = TRUE;
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Current State';
  /* Field: Workflow current: Time */
  $handler->display->display_options['fields']['stamp']['id'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['stamp']['field'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['label'] = 'Since';
  $handler->display->display_options['fields']['stamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['stamp']['second_date_format'] = 'time_only_12_hr_';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'By';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  /* Field: Workflow current: Comment */
  $handler->display->display_options['fields']['comment']['id'] = 'comment';
  $handler->display->display_options['fields']['comment']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['comment']['field'] = 'comment';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/cfd/[nid]?destination=workflow/ict/nursing">Approving Dean Decision</a>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'intercollege_transfer' => 'intercollege_transfer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    13 => '13',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Current state';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  /* Filter criterion: Content: College you wish to Enter (field_transfer_college) */
  $handler->display->display_options['filters']['field_transfer_college_value']['id'] = 'field_transfer_college_value';
  $handler->display->display_options['filters']['field_transfer_college_value']['table'] = 'field_data_field_transfer_college';
  $handler->display->display_options['filters']['field_transfer_college_value']['field'] = 'field_transfer_college_value';
  $handler->display->display_options['filters']['field_transfer_college_value']['value'] = array(
    'NURS' => 'NURS',
  );
  $handler->display->display_options['filters']['field_transfer_college_value']['group'] = 1;
  $handler->display->display_options['path'] = 'workflow/nursing';
  $handler->display->display_options['menu']['title'] = 'Summary';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Workflow';
  $handler->display->display_options['tab_options']['description'] = 'Your workflow dashboard';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Nursing Past Transfers */
  $handler = $view->new_display('page', 'Nursing Past Transfers', 'page_16');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Nursing Past Transfers';
  $handler->display->display_options['display_description'] = 'A list of all executed transitions';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    8 => '8',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'sid',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_netid' => 'field_netid',
    'field_current_college_autofill' => 'field_current_college_autofill',
    'field_transfer_college' => 'field_transfer_college',
    'field_reason_for_request' => 'field_reason_for_request',
    'field_transfer_semester_year_sem' => 'field_transfer_semester_year_sem',
    'nid' => 'nid',
    'title' => 'title',
    'type' => 'type',
    'name' => 'name',
    'hid_1' => 'hid_1',
    'sid' => 'sid',
    'stamp' => 'stamp',
    'name_1' => 'name_1',
    'comment' => 'comment',
    'workflow_node' => 'workflow_node',
    'edit_comment' => 'workflow_node',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'field_netid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_current_college_autofill' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_college' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reason_for_request' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_semester_year_sem' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'hid_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'stamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'workflow_node' => array(
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'edit_comment' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No past transfers found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: NetID */
  $handler->display->display_options['fields']['field_netid']['id'] = 'field_netid';
  $handler->display->display_options['fields']['field_netid']['table'] = 'field_data_field_netid';
  $handler->display->display_options['fields']['field_netid']['field'] = 'field_netid';
  /* Field: Field: Current College */
  $handler->display->display_options['fields']['field_current_college_autofill']['id'] = 'field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['table'] = 'field_data_field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['field'] = 'field_current_college_autofill';
  /* Field: Content: College you wish to Enter */
  $handler->display->display_options['fields']['field_transfer_college']['id'] = 'field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['table'] = 'field_data_field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['field'] = 'field_transfer_college';
  /* Field: Content: Reason for request: */
  $handler->display->display_options['fields']['field_reason_for_request']['id'] = 'field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['table'] = 'field_data_field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['field'] = 'field_reason_for_request';
  /* Field: Content: Transfer semester */
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['id'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['table'] = 'field_data_field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['field'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['label'] = 'Transfer semester/year: Semester';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['exclude'] = TRUE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid_3';
  $handler->display->display_options['fields']['name']['label'] = 'Author';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: Workflow current: Transition ID */
  $handler->display->display_options['fields']['hid_1']['id'] = 'hid_1';
  $handler->display->display_options['fields']['hid_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['hid_1']['field'] = 'hid';
  $handler->display->display_options['fields']['hid_1']['label'] = 'hid';
  $handler->display->display_options['fields']['hid_1']['exclude'] = TRUE;
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Current State';
  /* Field: Workflow current: Time */
  $handler->display->display_options['fields']['stamp']['id'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['stamp']['field'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['label'] = 'Since';
  $handler->display->display_options['fields']['stamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['stamp']['second_date_format'] = 'time_only_12_hr_';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'By';
  $handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
  /* Field: Workflow current: Comment */
  $handler->display->display_options['fields']['comment']['id'] = 'comment';
  $handler->display->display_options['fields']['comment']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['comment']['field'] = 'comment';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/printpdf/cict/[nid]">PDF Copy</a>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'intercollege_transfer' => 'intercollege_transfer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    3 => '3',
    11 => '11',
    6 => '6',
    7 => '7',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Current state';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  /* Filter criterion: Content: College you wish to Enter (field_transfer_college) */
  $handler->display->display_options['filters']['field_transfer_college_value']['id'] = 'field_transfer_college_value';
  $handler->display->display_options['filters']['field_transfer_college_value']['table'] = 'field_data_field_transfer_college';
  $handler->display->display_options['filters']['field_transfer_college_value']['field'] = 'field_transfer_college_value';
  $handler->display->display_options['filters']['field_transfer_college_value']['value'] = array(
    'NURS' => 'NURS',
  );
  $handler->display->display_options['filters']['field_transfer_college_value']['group'] = 1;
  $handler->display->display_options['path'] = 'workflow/ccas';
  $handler->display->display_options['menu']['title'] = 'Summary';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Workflow';
  $handler->display->display_options['tab_options']['description'] = 'Your workflow dashboard';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Registrar */
  $handler = $view->new_display('page', 'Registrar', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Registrar Workflow';
  $handler->display->display_options['display_description'] = 'A list of all executed transitions';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    13 => '13',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'sid',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_netid' => 'field_netid',
    'field_current_college_autofill' => 'field_current_college_autofill',
    'field_transfer_college' => 'field_transfer_college',
    'field_reason_for_request' => 'field_reason_for_request',
    'field_transfer_semester_year_sem' => 'field_transfer_semester_year_sem',
    'nid' => 'nid',
    'title' => 'title',
    'type' => 'type',
    'name' => 'name',
    'hid_1' => 'hid_1',
    'sid' => 'sid',
    'stamp' => 'stamp',
    'name_1' => 'name_1',
    'comment' => 'comment',
    'field_future_academic_dean_name' => 'field_future_academic_dean_name',
    'workflow_node' => 'workflow_node',
    'edit_comment' => 'workflow_node',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'field_netid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_current_college_autofill' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_college' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reason_for_request' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_semester_year_sem' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'hid_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'stamp' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'comment' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_future_academic_dean_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'workflow_node' => array(
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'edit_comment' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: NetID */
  $handler->display->display_options['fields']['field_netid']['id'] = 'field_netid';
  $handler->display->display_options['fields']['field_netid']['table'] = 'field_data_field_netid';
  $handler->display->display_options['fields']['field_netid']['field'] = 'field_netid';
  /* Field: Field: Current College */
  $handler->display->display_options['fields']['field_current_college_autofill']['id'] = 'field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['table'] = 'field_data_field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['field'] = 'field_current_college_autofill';
  /* Field: Content: College you wish to Enter */
  $handler->display->display_options['fields']['field_transfer_college']['id'] = 'field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['table'] = 'field_data_field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['field'] = 'field_transfer_college';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Current State';
  /* Field: Workflow current: Comment */
  $handler->display->display_options['fields']['comment']['id'] = 'comment';
  $handler->display->display_options['fields']['comment']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['comment']['field'] = 'comment';
  /* Field: Workflow current: Time */
  $handler->display->display_options['fields']['stamp']['id'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['stamp']['field'] = 'stamp';
  $handler->display->display_options['fields']['stamp']['label'] = 'Since';
  $handler->display->display_options['fields']['stamp']['date_format'] = 'short';
  $handler->display->display_options['fields']['stamp']['second_date_format'] = 'time_only_12_hr_';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="/printpdf/cict/[nid]">PDF Copy</a>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'intercollege_transfer' => 'intercollege_transfer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Content Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Workflow current: New state name */
  $handler->display->display_options['filters']['sid']['id'] = 'sid';
  $handler->display->display_options['filters']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['filters']['sid']['field'] = 'sid';
  $handler->display->display_options['filters']['sid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['sid']['group'] = 1;
  $handler->display->display_options['filters']['sid']['expose']['operator_id'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['label'] = 'Current state';
  $handler->display->display_options['filters']['sid']['expose']['operator'] = 'sid_op';
  $handler->display->display_options['filters']['sid']['expose']['identifier'] = 'sid';
  $handler->display->display_options['filters']['sid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['sid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['sid']['expose']['workflow_reduce_wid'] = FALSE;
  $handler->display->display_options['path'] = 'workflow/registrar';
  $handler->display->display_options['menu']['title'] = 'Summary';
  $handler->display->display_options['menu']['weight'] = '-1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Workflow';
  $handler->display->display_options['tab_options']['description'] = 'Your workflow dashboard';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['creighton_workflow_dashboard'] = $view;

  $view = new view();
  $view->name = 'current_dean_display';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Current Dean Display';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Content: College you wish to Enter */
  $handler->display->display_options['fields']['field_transfer_college']['id'] = 'field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['table'] = 'field_data_field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['field'] = 'field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['label'] = '';
  $handler->display->display_options['fields']['field_transfer_college']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_transfer_college']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_transfer_college']['element_class'] = 'blue';
  $handler->display->display_options['fields']['field_transfer_college']['element_label_colon'] = FALSE;
  /* Field: Field: Current College */
  $handler->display->display_options['fields']['field_current_college_autofill']['id'] = 'field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['table'] = 'field_data_field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['field'] = 'field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['label'] = '';
  $handler->display->display_options['fields']['field_current_college_autofill']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_college_autofill']['element_label_colon'] = FALSE;
  /* Field: Field: Cumulative GPA */
  $handler->display->display_options['fields']['field_cumulative_gpa']['id'] = 'field_cumulative_gpa';
  $handler->display->display_options['fields']['field_cumulative_gpa']['table'] = 'field_data_field_cumulative_gpa';
  $handler->display->display_options['fields']['field_cumulative_gpa']['field'] = 'field_cumulative_gpa';
  $handler->display->display_options['fields']['field_cumulative_gpa']['label'] = '';
  $handler->display->display_options['fields']['field_cumulative_gpa']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cumulative_gpa']['element_label_colon'] = FALSE;
  /* Field: Content: Current Academic Dean */
  $handler->display->display_options['fields']['field_current_academic_dean']['id'] = 'field_current_academic_dean';
  $handler->display->display_options['fields']['field_current_academic_dean']['table'] = 'field_data_field_current_academic_dean';
  $handler->display->display_options['fields']['field_current_academic_dean']['field'] = 'field_current_academic_dean';
  $handler->display->display_options['fields']['field_current_academic_dean']['label'] = '';
  $handler->display->display_options['fields']['field_current_academic_dean']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_academic_dean']['element_label_colon'] = FALSE;
  /* Field: Field: Current advisor */
  $handler->display->display_options['fields']['field_current_advisor']['id'] = 'field_current_advisor';
  $handler->display->display_options['fields']['field_current_advisor']['table'] = 'field_data_field_current_advisor';
  $handler->display->display_options['fields']['field_current_advisor']['field'] = 'field_current_advisor';
  $handler->display->display_options['fields']['field_current_advisor']['label'] = '';
  $handler->display->display_options['fields']['field_current_advisor']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_advisor']['element_label_colon'] = FALSE;
  /* Field: Field: Current Class */
  $handler->display->display_options['fields']['field_current_class']['id'] = 'field_current_class';
  $handler->display->display_options['fields']['field_current_class']['table'] = 'field_data_field_current_class';
  $handler->display->display_options['fields']['field_current_class']['field'] = 'field_current_class';
  $handler->display->display_options['fields']['field_current_class']['label'] = '';
  $handler->display->display_options['fields']['field_current_class']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_class']['element_label_colon'] = FALSE;
  /* Field: Content: Current Dean Name */
  $handler->display->display_options['fields']['field_current_dean_name']['id'] = 'field_current_dean_name';
  $handler->display->display_options['fields']['field_current_dean_name']['table'] = 'field_data_field_current_dean_name';
  $handler->display->display_options['fields']['field_current_dean_name']['field'] = 'field_current_dean_name';
  $handler->display->display_options['fields']['field_current_dean_name']['label'] = '';
  $handler->display->display_options['fields']['field_current_dean_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_dean_name']['element_label_colon'] = FALSE;
  /* Field: Field: Current Mailing Address */
  $handler->display->display_options['fields']['field_current_mailing_address']['id'] = 'field_current_mailing_address';
  $handler->display->display_options['fields']['field_current_mailing_address']['table'] = 'field_data_field_current_mailing_address';
  $handler->display->display_options['fields']['field_current_mailing_address']['field'] = 'field_current_mailing_address';
  $handler->display->display_options['fields']['field_current_mailing_address']['label'] = '';
  $handler->display->display_options['fields']['field_current_mailing_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_mailing_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_current_mailing_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_current_mailing_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Field: Current major */
  $handler->display->display_options['fields']['field_current_major']['id'] = 'field_current_major';
  $handler->display->display_options['fields']['field_current_major']['table'] = 'field_data_field_current_major';
  $handler->display->display_options['fields']['field_current_major']['field'] = 'field_current_major';
  $handler->display->display_options['fields']['field_current_major']['label'] = '';
  $handler->display->display_options['fields']['field_current_major']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_major']['element_label_colon'] = FALSE;
  /* Field: Content: Intended major */
  $handler->display->display_options['fields']['field_intended_major']['id'] = 'field_intended_major';
  $handler->display->display_options['fields']['field_intended_major']['table'] = 'field_data_field_intended_major';
  $handler->display->display_options['fields']['field_intended_major']['field'] = 'field_intended_major';
  $handler->display->display_options['fields']['field_intended_major']['label'] = '';
  $handler->display->display_options['fields']['field_intended_major']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_intended_major']['element_label_colon'] = FALSE;
  /* Field: Content: NetID */
  $handler->display->display_options['fields']['field_netid']['id'] = 'field_netid';
  $handler->display->display_options['fields']['field_netid']['table'] = 'field_data_field_netid';
  $handler->display->display_options['fields']['field_netid']['field'] = 'field_netid';
  $handler->display->display_options['fields']['field_netid']['exclude'] = TRUE;
  /* Field: Content: Reason for request: */
  $handler->display->display_options['fields']['field_reason_for_request']['id'] = 'field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['table'] = 'field_data_field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['field'] = 'field_reason_for_request';
  $handler->display->display_options['fields']['field_reason_for_request']['label'] = '';
  $handler->display->display_options['fields']['field_reason_for_request']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reason_for_request']['element_label_colon'] = FALSE;
  /* Field: Content: Signature */
  $handler->display->display_options['fields']['field_signature']['id'] = 'field_signature';
  $handler->display->display_options['fields']['field_signature']['table'] = 'field_data_field_signature';
  $handler->display->display_options['fields']['field_signature']['field'] = 'field_signature';
  $handler->display->display_options['fields']['field_signature']['label'] = '';
  $handler->display->display_options['fields']['field_signature']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_signature']['element_label_colon'] = FALSE;
  /* Field: Content: Transfer semester */
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['id'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['table'] = 'field_data_field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['field'] = 'field_transfer_semester_year_sem';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['label'] = '';
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_transfer_semester_year_sem']['element_label_colon'] = FALSE;
  /* Field: Content: Transfer Year */
  $handler->display->display_options['fields']['field_year']['id'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['table'] = 'field_data_field_year';
  $handler->display->display_options['fields']['field_year']['field'] = 'field_year';
  $handler->display->display_options['fields']['field_year']['label'] = '';
  $handler->display->display_options['fields']['field_year']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_year']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<p class="text_regular"><strong>Name:</strong> [field_first_name] [field_last_name]</p>
<p class="text_regular"><strong>NetID:</strong> [field_netid]</p>
<br>
<h4>Academic info</h4>
<p class="text_regular"><strong>Current college:</strong> [field_current_college_autofill]</p>
<p class="text_regular"><strong>Current major:</strong> [field_current_major] </p>
<p class="text_regular"><strong>Current class:</strong> [field_current_class]</p>
<p class="text_regular"><strong>Current advisor:</strong> [field_current_advisor]</p>
<p class="text_regular"><strong>Cumulative GPA:</strong> [field_cumulative_gpa]</p>
<br>
<h4>Requested Change</h4>
<p class="text_regular"><strong>Requested college:</strong> [field_transfer_college]</p>
<p class="text_regular"><strong>Intended major:</strong> [field_intended_major]</p>
<p class="text_regular"><strong>Requested transfer year/semester:</strong> [field_transfer_semester_year_sem]/[field_year]</p>
<p class="text_regular"><strong>Reason for request:</strong>[field_reason_for_request]</p>
<hr>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'intercollege_transfer' => 'intercollege_transfer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Dean Display */
  $handler = $view->new_display('page', 'Dean Display', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'current-dean-display';

  /* Display: Current Dean Display */
  $handler = $view->new_display('page', 'Current Dean Display', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_current_academic_dean_editable' => 'field_current_academic_dean_editable',
    'field_current_dean_name_editable' => 'field_current_academic_dean_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_current_academic_dean_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_current_dean_name_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['batch_size'] = '10';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Current Academic Dean (editable) */
  $handler->display->display_options['fields']['field_current_academic_dean_editable']['id'] = 'field_current_academic_dean_editable';
  $handler->display->display_options['fields']['field_current_academic_dean_editable']['table'] = 'field_data_field_current_academic_dean';
  $handler->display->display_options['fields']['field_current_academic_dean_editable']['field'] = 'field_current_academic_dean_editable';
  $handler->display->display_options['fields']['field_current_academic_dean_editable']['label'] = 'Current Academic Dean';
  $handler->display->display_options['fields']['field_current_academic_dean_editable']['element_label_type'] = 'h4';
  $handler->display->display_options['fields']['field_current_academic_dean_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_current_academic_dean_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_current_academic_dean_editable']['suppress_description'] = 0;
  /* Field: Content: Current Dean Name (editable) */
  $handler->display->display_options['fields']['field_current_dean_name_editable']['id'] = 'field_current_dean_name_editable';
  $handler->display->display_options['fields']['field_current_dean_name_editable']['table'] = 'field_data_field_current_dean_name';
  $handler->display->display_options['fields']['field_current_dean_name_editable']['field'] = 'field_current_dean_name_editable';
  $handler->display->display_options['fields']['field_current_dean_name_editable']['label'] = 'Dean Signature';
  $handler->display->display_options['fields']['field_current_dean_name_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_current_dean_name_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_current_dean_name_editable']['suppress_description'] = 0;
  $handler->display->display_options['path'] = 'dean-edit';

  /* Display: Future Dean Display */
  $handler = $view->new_display('page', 'Future Dean Display', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'editableviews_table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_application_decision_editable' => 'field_application_decision_editable',
    'field_accepted_semester_year_editable' => 'field_application_decision_editable',
    'field_deferred_til_editable' => 'field_application_decision_editable',
    'field_decline_reason_editable' => 'field_application_decision_editable',
    'field_future_academic_dean_name_editable' => 'field_application_decision_editable',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_application_decision_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_accepted_semester_year_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_deferred_til_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_decline_reason_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_future_academic_dean_name_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['batch_size'] = '10';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Application Decision (editable) */
  $handler->display->display_options['fields']['field_application_decision_editable']['id'] = 'field_application_decision_editable';
  $handler->display->display_options['fields']['field_application_decision_editable']['table'] = 'field_data_field_application_decision';
  $handler->display->display_options['fields']['field_application_decision_editable']['field'] = 'field_application_decision_editable';
  $handler->display->display_options['fields']['field_application_decision_editable']['label'] = 'Application Decision';
  $handler->display->display_options['fields']['field_application_decision_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_application_decision_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_application_decision_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_application_decision_editable']['suppress_description'] = 0;
  /* Field: Content: Accepted Semester/Year (editable) */
  $handler->display->display_options['fields']['field_accepted_semester_year_editable']['id'] = 'field_accepted_semester_year_editable';
  $handler->display->display_options['fields']['field_accepted_semester_year_editable']['table'] = 'field_data_field_accepted_semester_year';
  $handler->display->display_options['fields']['field_accepted_semester_year_editable']['field'] = 'field_accepted_semester_year_editable';
  $handler->display->display_options['fields']['field_accepted_semester_year_editable']['label'] = '';
  $handler->display->display_options['fields']['field_accepted_semester_year_editable']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_accepted_semester_year_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_accepted_semester_year_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_accepted_semester_year_editable']['suppress_description'] = 0;
  /* Field: Content: Deferred til (editable) */
  $handler->display->display_options['fields']['field_deferred_til_editable']['id'] = 'field_deferred_til_editable';
  $handler->display->display_options['fields']['field_deferred_til_editable']['table'] = 'field_data_field_deferred_til';
  $handler->display->display_options['fields']['field_deferred_til_editable']['field'] = 'field_deferred_til_editable';
  $handler->display->display_options['fields']['field_deferred_til_editable']['label'] = 'Deferred Until';
  $handler->display->display_options['fields']['field_deferred_til_editable']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_deferred_til_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_deferred_til_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_deferred_til_editable']['suppress_description'] = 0;
  /* Field: Content: Decline Reason (editable) */
  $handler->display->display_options['fields']['field_decline_reason_editable']['id'] = 'field_decline_reason_editable';
  $handler->display->display_options['fields']['field_decline_reason_editable']['table'] = 'field_data_field_decline_reason';
  $handler->display->display_options['fields']['field_decline_reason_editable']['field'] = 'field_decline_reason_editable';
  $handler->display->display_options['fields']['field_decline_reason_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_decline_reason_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_decline_reason_editable']['suppress_description'] = 0;
  /* Field: Content: Future Academic Dean Name (editable) */
  $handler->display->display_options['fields']['field_future_academic_dean_name_editable']['id'] = 'field_future_academic_dean_name_editable';
  $handler->display->display_options['fields']['field_future_academic_dean_name_editable']['table'] = 'field_data_field_future_academic_dean_name';
  $handler->display->display_options['fields']['field_future_academic_dean_name_editable']['field'] = 'field_future_academic_dean_name_editable';
  $handler->display->display_options['fields']['field_future_academic_dean_name_editable']['widget_type'] = '0';
  $handler->display->display_options['fields']['field_future_academic_dean_name_editable']['suppress_label'] = 0;
  $handler->display->display_options['fields']['field_future_academic_dean_name_editable']['suppress_description'] = 0;
  $handler->display->display_options['path'] = 'decision-edit';

  /* Display: 2nd Dean Display */
  $handler = $view->new_display('page', '2nd Dean Display', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Current Academic Dean */
  $handler->display->display_options['fields']['field_current_academic_dean_1']['id'] = 'field_current_academic_dean_1';
  $handler->display->display_options['fields']['field_current_academic_dean_1']['table'] = 'field_data_field_current_academic_dean';
  $handler->display->display_options['fields']['field_current_academic_dean_1']['field'] = 'field_current_academic_dean';
  $handler->display->display_options['fields']['field_current_academic_dean_1']['label'] = '';
  $handler->display->display_options['fields']['field_current_academic_dean_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_academic_dean_1']['element_label_type'] = 'h4';
  $handler->display->display_options['fields']['field_current_academic_dean_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_current_academic_dean_1']['hide_empty'] = TRUE;
  /* Field: Content: Current Dean Name */
  $handler->display->display_options['fields']['field_current_dean_name_1']['id'] = 'field_current_dean_name_1';
  $handler->display->display_options['fields']['field_current_dean_name_1']['table'] = 'field_data_field_current_dean_name';
  $handler->display->display_options['fields']['field_current_dean_name_1']['field'] = 'field_current_dean_name';
  $handler->display->display_options['fields']['field_current_dean_name_1']['label'] = '';
  $handler->display->display_options['fields']['field_current_dean_name_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_current_dean_name_1']['alter']['text'] = '<p class="text_regular"><b>[field_current_dean_name_1]</b></p>';
  $handler->display->display_options['fields']['field_current_dean_name_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_current_dean_name_1']['hide_empty'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Current Dean Decision';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<p class="text_regular"><strong>Current Dean Comments</strong>: <i>[field_current_academic_dean_1]</i></p>
<p class="text_regular"><strong>Current Dean Signature</strong>: [field_current_dean_name_1]</p>';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = 'h4';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['empty'] = 'No Decision Yet.';
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  $handler->display->display_options['path'] = 'future-dean-display';

  /* Display: Workflow State */
  $handler = $view->new_display('page', 'Workflow State', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Status';
  $handler->display->display_options['fields']['sid']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['sid']['element_wrapper_class'] = 'text_orange text_large';
  /* Field: Workflow current: Old state name */
  $handler->display->display_options['fields']['old_sid']['id'] = 'old_sid';
  $handler->display->display_options['fields']['old_sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['old_sid']['field'] = 'old_sid';
  $handler->display->display_options['fields']['old_sid']['exclude'] = TRUE;
  $handler->display->display_options['path'] = 'future-dean-display';

  /* Display: Results Display */
  $handler = $view->new_display('page', 'Results Display', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Application Decision */
  $handler->display->display_options['fields']['field_application_decision']['id'] = 'field_application_decision';
  $handler->display->display_options['fields']['field_application_decision']['table'] = 'field_data_field_application_decision';
  $handler->display->display_options['fields']['field_application_decision']['field'] = 'field_application_decision';
  $handler->display->display_options['fields']['field_application_decision']['element_type'] = '0';
  $handler->display->display_options['fields']['field_application_decision']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_application_decision']['hide_empty'] = TRUE;
  /* Field: Content: Accepted Semester/Year */
  $handler->display->display_options['fields']['field_accepted_semester_year']['id'] = 'field_accepted_semester_year';
  $handler->display->display_options['fields']['field_accepted_semester_year']['table'] = 'field_data_field_accepted_semester_year';
  $handler->display->display_options['fields']['field_accepted_semester_year']['field'] = 'field_accepted_semester_year';
  $handler->display->display_options['fields']['field_accepted_semester_year']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_accepted_semester_year']['hide_empty'] = TRUE;
  /* Field: Content: Decline Reason */
  $handler->display->display_options['fields']['field_decline_reason']['id'] = 'field_decline_reason';
  $handler->display->display_options['fields']['field_decline_reason']['table'] = 'field_data_field_decline_reason';
  $handler->display->display_options['fields']['field_decline_reason']['field'] = 'field_decline_reason';
  $handler->display->display_options['fields']['field_decline_reason']['hide_empty'] = TRUE;
  /* Field: Content: Deferred til */
  $handler->display->display_options['fields']['field_deferred_til']['id'] = 'field_deferred_til';
  $handler->display->display_options['fields']['field_deferred_til']['table'] = 'field_data_field_deferred_til';
  $handler->display->display_options['fields']['field_deferred_til']['field'] = 'field_deferred_til';
  $handler->display->display_options['fields']['field_deferred_til']['label'] = 'Deferred Until';
  $handler->display->display_options['fields']['field_deferred_til']['element_type'] = '0';
  $handler->display->display_options['fields']['field_deferred_til']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_deferred_til']['hide_empty'] = TRUE;
  /* Field: Content: Future Academic Dean Name */
  $handler->display->display_options['fields']['field_future_academic_dean_name']['id'] = 'field_future_academic_dean_name';
  $handler->display->display_options['fields']['field_future_academic_dean_name']['table'] = 'field_data_field_future_academic_dean_name';
  $handler->display->display_options['fields']['field_future_academic_dean_name']['field'] = 'field_future_academic_dean_name';
  $handler->display->display_options['fields']['field_future_academic_dean_name']['label'] = 'Future Academic Dean';
  $handler->display->display_options['fields']['field_future_academic_dean_name']['element_type'] = '0';
  $handler->display->display_options['fields']['field_future_academic_dean_name']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_future_academic_dean_name']['hide_empty'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<p class="text_regular"><strong>Accepted Semester/Year</strong>: <i>[field_accepted_semester_year]</i></p>
<p class="text_regular"><strong>Current Dean Comments</strong>: <i>[field_current_academic_dean_1]</i></p>
<p class="text_regular"><strong>Current Dean Signature</strong>: <b>[field_current_dean_name_1]</b></p>';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = 'h4';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['empty'] = 'No Decision Yet.';
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  /* Field: Workflow current: Timestamp */
  $handler->display->display_options['fields']['timestamp_1']['id'] = 'timestamp_1';
  $handler->display->display_options['fields']['timestamp_1']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['timestamp_1']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp_1']['label'] = '';
  $handler->display->display_options['fields']['timestamp_1']['element_type'] = 'em';
  $handler->display->display_options['fields']['timestamp_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['timestamp_1']['date_format'] = 'long';
  $handler->display->display_options['fields']['timestamp_1']['second_date_format'] = 'time_only_12_hr_';
  $handler->display->display_options['path'] = 'future-dean-display';

  /* Display: Workflow State (Service) */
  $handler = $view->new_display('services', 'Workflow State (Service)', 'services_1');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'ict-workflow-status';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'intercollege_transfer' => 'intercollege_transfer',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['operator_id'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['label'] = 'Nid';
  $handler->display->display_options['filters']['nid']['expose']['operator'] = 'nid_op';
  $handler->display->display_options['filters']['nid']['expose']['identifier'] = 'nid';
  $handler->display->display_options['filters']['nid']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['nid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
  );
  $handler->display->display_options['path'] = 'workflow-status';

  /* Display: PDF Page */
  $handler = $view->new_display('pdf', 'PDF Page', 'pdf_1');
  $export['current_dean_display'] = $view;

  $view = new view();
  $view->name = 'transfer_viewer';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'transfer-viewer';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'transfer-viewer';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_transfer_college' => 'field_transfer_college',
    'field_transfer_college_editable' => 'field_transfer_college_editable',
    'field_current_college_autofill' => 'field_current_college_autofill',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_college' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_college_editable' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_current_college_autofill' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Current College */
  $handler->display->display_options['fields']['field_current_college_autofill']['id'] = 'field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['table'] = 'field_data_field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['field'] = 'field_current_college_autofill';
  /* Field: Content: College you wish to Enter */
  $handler->display->display_options['fields']['field_transfer_college']['id'] = 'field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['table'] = 'field_data_field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['field'] = 'field_transfer_college';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'time_only_12_hr_';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'time_only_12_hr_';
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'transfer-viewer';
  $export['transfer_viewer'] = $view;

  $view = new view();
  $view->name = 'user_transfer_status';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'user-transfer-status';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'user-transfer-status';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_netid' => 'field_netid',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_first_name',
    'field_current_college_autofill' => 'field_current_college_autofill',
    'field_transfer_college' => 'field_transfer_college',
    'sid' => 'sid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_netid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_current_college_autofill' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_transfer_college' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'sid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: NetID */
  $handler->display->display_options['fields']['field_netid']['id'] = 'field_netid';
  $handler->display->display_options['fields']['field_netid']['table'] = 'field_data_field_netid';
  $handler->display->display_options['fields']['field_netid']['field'] = 'field_netid';
  /* Field: Field: Current College */
  $handler->display->display_options['fields']['field_current_college_autofill']['id'] = 'field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['table'] = 'field_data_field_current_college_autofill';
  $handler->display->display_options['fields']['field_current_college_autofill']['field'] = 'field_current_college_autofill';
  /* Field: Content: College you wish to Enter */
  $handler->display->display_options['fields']['field_transfer_college']['id'] = 'field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['table'] = 'field_data_field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['field'] = 'field_transfer_college';
  $handler->display->display_options['fields']['field_transfer_college']['label'] = 'Future College';
  /* Field: Workflow current: New state name */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'workflow_node_current';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = 'Transfer Status';
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['uid']['validate_options']['type'] = 'either';
  $handler->display->display_options['arguments']['uid']['validate']['fail'] = 'empty';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'user-transfer-status';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['user_transfer_status'] = $view;

  return $export;
}
