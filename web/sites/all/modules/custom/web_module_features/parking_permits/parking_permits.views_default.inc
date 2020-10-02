<?php
/**
 * @file
 * parking_permits.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function parking_permits_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'fee_rate_table_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Fee rate table view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Fee rate table view';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    7 => '7',
    8 => '8',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '150';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_permit_year_frct' => 'field_permit_year_frct',
    'field_person_type_frct' => 'field_person_type_frct',
    'field_ft_pt_frct' => 'field_ft_pt_frct',
    'field_pay_cycle_frct' => 'field_pay_cycle_frct',
    'field_last_appl_date_frct' => 'field_last_appl_date_frct',
    'field_first_pymt_date_frct' => 'field_first_pymt_date_frct',
    'field_total_amt_frct' => 'field_total_amt_frct',
    'field_add_veh_amt_frct' => 'field_add_veh_amt_frct',
    'field_deductions_frct' => 'field_deductions_frct',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_permit_year_frct' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_person_type_frct' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ft_pt_frct' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pay_cycle_frct' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_appl_date_frct' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_pymt_date_frct' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_total_amt_frct' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_add_veh_amt_frct' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_deductions_frct' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: permit_year */
  $handler->display->display_options['fields']['field_permit_year_frct']['id'] = 'field_permit_year_frct';
  $handler->display->display_options['fields']['field_permit_year_frct']['table'] = 'field_data_field_permit_year_frct';
  $handler->display->display_options['fields']['field_permit_year_frct']['field'] = 'field_permit_year_frct';
  $handler->display->display_options['fields']['field_permit_year_frct']['label'] = 'Year';
  $handler->display->display_options['fields']['field_permit_year_frct']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: person_type */
  $handler->display->display_options['fields']['field_person_type_frct']['id'] = 'field_person_type_frct';
  $handler->display->display_options['fields']['field_person_type_frct']['table'] = 'field_data_field_person_type_frct';
  $handler->display->display_options['fields']['field_person_type_frct']['field'] = 'field_person_type_frct';
  $handler->display->display_options['fields']['field_person_type_frct']['label'] = 'FS or VP/Dean';
  /* Field: Content: ft_pt */
  $handler->display->display_options['fields']['field_ft_pt_frct']['id'] = 'field_ft_pt_frct';
  $handler->display->display_options['fields']['field_ft_pt_frct']['table'] = 'field_data_field_ft_pt_frct';
  $handler->display->display_options['fields']['field_ft_pt_frct']['field'] = 'field_ft_pt_frct';
  $handler->display->display_options['fields']['field_ft_pt_frct']['label'] = 'FT or PT';
  $handler->display->display_options['fields']['field_ft_pt_frct']['element_label_colon'] = FALSE;
  /* Field: Content: pay_cycle */
  $handler->display->display_options['fields']['field_pay_cycle_frct']['id'] = 'field_pay_cycle_frct';
  $handler->display->display_options['fields']['field_pay_cycle_frct']['table'] = 'field_data_field_pay_cycle_frct';
  $handler->display->display_options['fields']['field_pay_cycle_frct']['field'] = 'field_pay_cycle_frct';
  $handler->display->display_options['fields']['field_pay_cycle_frct']['label'] = 'Pay Cycle';
  /* Field: Content: last_appl_date */
  $handler->display->display_options['fields']['field_last_appl_date_frct']['id'] = 'field_last_appl_date_frct';
  $handler->display->display_options['fields']['field_last_appl_date_frct']['table'] = 'field_data_field_last_appl_date_frct';
  $handler->display->display_options['fields']['field_last_appl_date_frct']['field'] = 'field_last_appl_date_frct';
  $handler->display->display_options['fields']['field_last_appl_date_frct']['label'] = 'Last Appl. Date';
  $handler->display->display_options['fields']['field_last_appl_date_frct']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: first_pymt_date */
  $handler->display->display_options['fields']['field_first_pymt_date_frct']['id'] = 'field_first_pymt_date_frct';
  $handler->display->display_options['fields']['field_first_pymt_date_frct']['table'] = 'field_data_field_first_pymt_date_frct';
  $handler->display->display_options['fields']['field_first_pymt_date_frct']['field'] = 'field_first_pymt_date_frct';
  $handler->display->display_options['fields']['field_first_pymt_date_frct']['label'] = '1st Paymt Date';
  $handler->display->display_options['fields']['field_first_pymt_date_frct']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: total_amt */
  $handler->display->display_options['fields']['field_total_amt_frct']['id'] = 'field_total_amt_frct';
  $handler->display->display_options['fields']['field_total_amt_frct']['table'] = 'field_data_field_total_amt_frct';
  $handler->display->display_options['fields']['field_total_amt_frct']['field'] = 'field_total_amt_frct';
  $handler->display->display_options['fields']['field_total_amt_frct']['label'] = 'Tot Amt';
  $handler->display->display_options['fields']['field_total_amt_frct']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: add_veh_amt */
  $handler->display->display_options['fields']['field_add_veh_amt_frct']['id'] = 'field_add_veh_amt_frct';
  $handler->display->display_options['fields']['field_add_veh_amt_frct']['table'] = 'field_data_field_add_veh_amt_frct';
  $handler->display->display_options['fields']['field_add_veh_amt_frct']['field'] = 'field_add_veh_amt_frct';
  $handler->display->display_options['fields']['field_add_veh_amt_frct']['label'] = 'Add Veh Amt';
  $handler->display->display_options['fields']['field_add_veh_amt_frct']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: deductions */
  $handler->display->display_options['fields']['field_deductions_frct']['id'] = 'field_deductions_frct';
  $handler->display->display_options['fields']['field_deductions_frct']['table'] = 'field_data_field_deductions_frct';
  $handler->display->display_options['fields']['field_deductions_frct']['field'] = 'field_deductions_frct';
  $handler->display->display_options['fields']['field_deductions_frct']['label'] = 'Deductions';
  $handler->display->display_options['fields']['field_deductions_frct']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: permit_year (field_permit_year_frct) */
  $handler->display->display_options['sorts']['field_permit_year_frct_value']['id'] = 'field_permit_year_frct_value';
  $handler->display->display_options['sorts']['field_permit_year_frct_value']['table'] = 'field_data_field_permit_year_frct';
  $handler->display->display_options['sorts']['field_permit_year_frct_value']['field'] = 'field_permit_year_frct_value';
  $handler->display->display_options['sorts']['field_permit_year_frct_value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_permit_year_frct_value']['expose']['label'] = 'permit_year (field_permit_year_frct)';
  /* Sort criterion: Content: person_type (field_person_type_frct) */
  $handler->display->display_options['sorts']['field_person_type_frct_value']['id'] = 'field_person_type_frct_value';
  $handler->display->display_options['sorts']['field_person_type_frct_value']['table'] = 'field_data_field_person_type_frct';
  $handler->display->display_options['sorts']['field_person_type_frct_value']['field'] = 'field_person_type_frct_value';
  /* Sort criterion: Content: ft_pt (field_ft_pt_frct) */
  $handler->display->display_options['sorts']['field_ft_pt_frct_value']['id'] = 'field_ft_pt_frct_value';
  $handler->display->display_options['sorts']['field_ft_pt_frct_value']['table'] = 'field_data_field_ft_pt_frct';
  $handler->display->display_options['sorts']['field_ft_pt_frct_value']['field'] = 'field_ft_pt_frct_value';
  /* Sort criterion: Content: pay_cycle (field_pay_cycle_frct) */
  $handler->display->display_options['sorts']['field_pay_cycle_frct_value']['id'] = 'field_pay_cycle_frct_value';
  $handler->display->display_options['sorts']['field_pay_cycle_frct_value']['table'] = 'field_data_field_pay_cycle_frct';
  $handler->display->display_options['sorts']['field_pay_cycle_frct_value']['field'] = 'field_pay_cycle_frct_value';
  /* Sort criterion: Content: deductions (field_deductions_frct) */
  $handler->display->display_options['sorts']['field_deductions_frct_value']['id'] = 'field_deductions_frct_value';
  $handler->display->display_options['sorts']['field_deductions_frct_value']['table'] = 'field_data_field_deductions_frct';
  $handler->display->display_options['sorts']['field_deductions_frct_value']['field'] = 'field_deductions_frct_value';
  $handler->display->display_options['sorts']['field_deductions_frct_value']['order'] = 'DESC';
  /* Sort criterion: Content: total_amt (field_total_amt_frct) */
  $handler->display->display_options['sorts']['field_total_amt_frct_value']['id'] = 'field_total_amt_frct_value';
  $handler->display->display_options['sorts']['field_total_amt_frct_value']['table'] = 'field_data_field_total_amt_frct';
  $handler->display->display_options['sorts']['field_total_amt_frct_value']['field'] = 'field_total_amt_frct_value';
  $handler->display->display_options['sorts']['field_total_amt_frct_value']['order'] = 'DESC';
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
    'fee_rate_ct' => 'fee_rate_ct',
  );
  /* Filter criterion: Content: permit_year (field_permit_year_frct) */
  $handler->display->display_options['filters']['field_permit_year_frct_value']['id'] = 'field_permit_year_frct_value';
  $handler->display->display_options['filters']['field_permit_year_frct_value']['table'] = 'field_data_field_permit_year_frct';
  $handler->display->display_options['filters']['field_permit_year_frct_value']['field'] = 'field_permit_year_frct_value';
  $handler->display->display_options['filters']['field_permit_year_frct_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_permit_year_frct_value']['expose']['operator_id'] = 'field_permit_year_frct_value_op';
  $handler->display->display_options['filters']['field_permit_year_frct_value']['expose']['label'] = 'Permit Year';
  $handler->display->display_options['filters']['field_permit_year_frct_value']['expose']['operator'] = 'field_permit_year_frct_value_op';
  $handler->display->display_options['filters']['field_permit_year_frct_value']['expose']['identifier'] = 'field_permit_year_frct_value';
  $handler->display->display_options['filters']['field_permit_year_frct_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_permit_year_frct_value']['group_info']['label'] = 'permit_year (field_permit_year_frct)';
  $handler->display->display_options['filters']['field_permit_year_frct_value']['group_info']['identifier'] = 'field_permit_year_frct_value';
  $handler->display->display_options['filters']['field_permit_year_frct_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_permit_year_frct_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'fee-rate-table-view';

  /* Display: PBL query builder */
  $handler = $view->new_display('page', 'PBL query builder', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'PBL Query Builder';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: permit_year */
  $handler->display->display_options['fields']['field_permit_year_frct']['id'] = 'field_permit_year_frct';
  $handler->display->display_options['fields']['field_permit_year_frct']['table'] = 'field_data_field_permit_year_frct';
  $handler->display->display_options['fields']['field_permit_year_frct']['field'] = 'field_permit_year_frct';
  $handler->display->display_options['fields']['field_permit_year_frct']['label'] = 'Year';
  $handler->display->display_options['fields']['field_permit_year_frct']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: pay_cycle */
  $handler->display->display_options['fields']['field_pay_cycle_frct']['id'] = 'field_pay_cycle_frct';
  $handler->display->display_options['fields']['field_pay_cycle_frct']['table'] = 'field_data_field_pay_cycle_frct';
  $handler->display->display_options['fields']['field_pay_cycle_frct']['field'] = 'field_pay_cycle_frct';
  $handler->display->display_options['fields']['field_pay_cycle_frct']['label'] = 'Pay Cycle';
  /* Field: Content: last_appl_date */
  $handler->display->display_options['fields']['field_last_appl_date_frct']['id'] = 'field_last_appl_date_frct';
  $handler->display->display_options['fields']['field_last_appl_date_frct']['table'] = 'field_data_field_last_appl_date_frct';
  $handler->display->display_options['fields']['field_last_appl_date_frct']['field'] = 'field_last_appl_date_frct';
  $handler->display->display_options['fields']['field_last_appl_date_frct']['label'] = 'Last Appl. Date';
  $handler->display->display_options['fields']['field_last_appl_date_frct']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: first_pymt_date */
  $handler->display->display_options['fields']['field_first_pymt_date_frct']['id'] = 'field_first_pymt_date_frct';
  $handler->display->display_options['fields']['field_first_pymt_date_frct']['table'] = 'field_data_field_first_pymt_date_frct';
  $handler->display->display_options['fields']['field_first_pymt_date_frct']['field'] = 'field_first_pymt_date_frct';
  $handler->display->display_options['fields']['field_first_pymt_date_frct']['label'] = '1st Paymt Date';
  $handler->display->display_options['fields']['field_first_pymt_date_frct']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: deductions */
  $handler->display->display_options['fields']['field_deductions_frct']['id'] = 'field_deductions_frct';
  $handler->display->display_options['fields']['field_deductions_frct']['table'] = 'field_data_field_deductions_frct';
  $handler->display->display_options['fields']['field_deductions_frct']['field'] = 'field_deductions_frct';
  $handler->display->display_options['fields']['field_deductions_frct']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'PBL Link';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Download PBL';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'pbl-extract-csv/[field_pay_cycle_frct]/[field_first_pymt_date_frct]/[field_deductions_frct]';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
    'fee_rate_ct' => 'fee_rate_ct',
  );
  /* Filter criterion: Content: permit_year (field_permit_year_frct) */
  $handler->display->display_options['filters']['field_permit_year_frct_value']['id'] = 'field_permit_year_frct_value';
  $handler->display->display_options['filters']['field_permit_year_frct_value']['table'] = 'field_data_field_permit_year_frct';
  $handler->display->display_options['filters']['field_permit_year_frct_value']['field'] = 'field_permit_year_frct_value';
  $handler->display->display_options['filters']['field_permit_year_frct_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_permit_year_frct_value']['expose']['operator_id'] = 'field_permit_year_frct_value_op';
  $handler->display->display_options['filters']['field_permit_year_frct_value']['expose']['label'] = 'Permit Year';
  $handler->display->display_options['filters']['field_permit_year_frct_value']['expose']['operator'] = 'field_permit_year_frct_value_op';
  $handler->display->display_options['filters']['field_permit_year_frct_value']['expose']['identifier'] = 'field_permit_year_frct_value';
  $handler->display->display_options['filters']['field_permit_year_frct_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_permit_year_frct_value']['group_info']['label'] = 'permit_year (field_permit_year_frct)';
  $handler->display->display_options['filters']['field_permit_year_frct_value']['group_info']['identifier'] = 'field_permit_year_frct_value';
  $handler->display->display_options['filters']['field_permit_year_frct_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_permit_year_frct_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: pay_cycle (field_pay_cycle_frct) */
  $handler->display->display_options['filters']['field_pay_cycle_frct_value']['id'] = 'field_pay_cycle_frct_value';
  $handler->display->display_options['filters']['field_pay_cycle_frct_value']['table'] = 'field_data_field_pay_cycle_frct';
  $handler->display->display_options['filters']['field_pay_cycle_frct_value']['field'] = 'field_pay_cycle_frct_value';
  $handler->display->display_options['filters']['field_pay_cycle_frct_value']['value'] = array(
    'all' => 'all',
    'M' => 'M',
    'B' => 'B',
  );
  $handler->display->display_options['filters']['field_pay_cycle_frct_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pay_cycle_frct_value']['expose']['operator_id'] = 'field_pay_cycle_frct_value_op';
  $handler->display->display_options['filters']['field_pay_cycle_frct_value']['expose']['label'] = 'Pay Cycle';
  $handler->display->display_options['filters']['field_pay_cycle_frct_value']['expose']['operator'] = 'field_pay_cycle_frct_value_op';
  $handler->display->display_options['filters']['field_pay_cycle_frct_value']['expose']['identifier'] = 'field_pay_cycle_frct_value';
  $handler->display->display_options['filters']['field_pay_cycle_frct_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_pay_cycle_frct_value']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: first_pymt_date (field_first_pymt_date_frct) */
  $handler->display->display_options['filters']['field_first_pymt_date_frct_value']['id'] = 'field_first_pymt_date_frct_value';
  $handler->display->display_options['filters']['field_first_pymt_date_frct_value']['table'] = 'field_data_field_first_pymt_date_frct';
  $handler->display->display_options['filters']['field_first_pymt_date_frct_value']['field'] = 'field_first_pymt_date_frct_value';
  $handler->display->display_options['filters']['field_first_pymt_date_frct_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_first_pymt_date_frct_value']['expose']['operator_id'] = 'field_first_pymt_date_frct_value_op';
  $handler->display->display_options['filters']['field_first_pymt_date_frct_value']['expose']['label'] = 'First Payment Date';
  $handler->display->display_options['filters']['field_first_pymt_date_frct_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_first_pymt_date_frct_value']['expose']['operator'] = 'field_first_pymt_date_frct_value_op';
  $handler->display->display_options['filters']['field_first_pymt_date_frct_value']['expose']['identifier'] = 'field_first_pymt_date_frct_value';
  $handler->display->display_options['filters']['field_first_pymt_date_frct_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_first_pymt_date_frct_value']['form_type'] = 'date_popup';
  $handler->display->display_options['path'] = 'pbl-builder';
  $export['fee_rate_table_view'] = $view;

  $view = new view();
  $view->name = 'my_parking_permits';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'My Parking Permits';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
    7 => '7',
    8 => '8',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_sticker_to_vehicle_1_er' => 'field_sticker_to_vehicle_1_er',
    'field_sticker_to_vehicle_2_er' => 'field_sticker_to_vehicle_2_er',
    'field_sticker_to_vehicle_3_er' => 'field_sticker_to_vehicle_3_er',
    'field_vehyear_1' => 'field_vehyear_1',
    'field_vehmake_tax_1' => 'field_vehmake_tax_1',
    'field_vehmodel_1' => 'field_vehmodel_1',
    'field_vehcolor_tax' => 'field_vehcolor_tax',
    'field_vehstyle_tax' => 'field_vehstyle_tax',
    'field_vehyear_2' => 'field_vehyear_2',
    'field_vehmake_tax_2' => 'field_vehmake_tax_2',
    'field_vehmodel_2' => 'field_vehmodel_2',
    'field_vehcolor_tax_1' => 'field_vehcolor_tax_1',
    'field_vehstyle_tax_1' => 'field_vehstyle_tax_1',
    'field_vehyear_3' => 'field_vehyear_3',
    'field_vehmake_tax_3' => 'field_vehmake_tax_3',
    'field_vehmodel_3' => 'field_vehmodel_3',
    'field_vehcolor_tax_2' => 'field_vehcolor_tax_2',
    'field_vehstyle_tax_2' => 'field_vehstyle_tax_2',
    'field_permit_year_tax' => 'field_permit_year_tax',
    'nothing' => 'nothing',
    'field_sticker_num_1' => 'field_sticker_num_1',
    'nothing_1' => 'nothing_1',
    'field_sticker_num_2' => 'field_sticker_num_2',
    'nothing_2' => 'nothing_2',
    'field_sticker_num_3' => 'field_sticker_num_3',
    'field_authorization_select' => 'field_authorization_select',
    'php' => 'php',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_sticker_to_vehicle_1_er' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sticker_to_vehicle_2_er' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sticker_to_vehicle_3_er' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehyear_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehmake_tax_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehmodel_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehcolor_tax' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehstyle_tax' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehyear_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehmake_tax_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehmodel_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehcolor_tax_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehstyle_tax_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehyear_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehmake_tax_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehmodel_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehcolor_tax_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehstyle_tax_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_permit_year_tax' => array(
      'sortable' => 0,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sticker_num_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sticker_num_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sticker_num_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_authorization_select' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php
/*
  if(strlen($view->args[0])) {
    $tgt_user = user_load_by_name($view->args[0]);
  } else {
    global $user;
    $tgt_user = $user;
  }
*/
  global $user;
  $tgt_user = user_load($user->uid, TRUE);

  $pyeartax = taxonomy_vocabulary_machine_name_load(\'permityear\');
  $pyearq = new EntityFieldQuery();
  $pyearr = $pyearq
    ->entityCondition(\'entity_type\', \'taxonomy_term\')
    ->propertyCondition(\'vid\', (int) $pyeartax->vid, \'=\')
    ->propertyOrderBy(\'weight\')
    ->execute();
  $pyeartaxcurrtid = key($pyearr[\'taxonomy_term\']);

  $existing_permit_app = FALSE;
  foreach($results as $row) {
    if($row->field_field_permit_year_tax[0][\'raw\'][\'target_id\'] == $pyeartaxcurrtid) $existing_permit_app = TRUE;
  }

  if(! $existing_permit_app) {
    $ptypes = array(\'FS\' => \'Faculty/Staff\', \'AD\' => \'Dean\', \'VP\' => \'Vice President\');
    $taxterm = taxonomy_get_term_by_name($ptypes[$tgt_user->field_person_type[\'und\'][0][\'value\']], \'permit_holder_type\');

?>
<p>Done adding your vehicles? Great! Go ahead and apply for your parking permit.</p>
<a href="<?php echo base_path(); ?>node/add/permit2?destination=<?php echo current_path(); ?>&field_permit_holder_type_er_tax=<?php echo key($taxterm); ?>&field_permit_year_tax=<?php echo $pyeartaxcurrtid; ?>&field_netid_ref=<?php echo $tgt_user->uid; ?>&edit[field_delivery_location][und][0][value]=<?php echo $tgt_user->field_location[\'und\'][0][\'value\'];?>&edit[field_department][und][0][value]=<?php echo $tgt_user->field_org[\'und\'][0][\'value\'];?>" class="parking-button" id="parking-button-permit-add" role="button">Apply for Permit</a>
<?php
  }
?>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<em>No parking permits exist</em>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_sticker_to_vehicle_1_er_target_id']['id'] = 'field_sticker_to_vehicle_1_er_target_id';
  $handler->display->display_options['relationships']['field_sticker_to_vehicle_1_er_target_id']['table'] = 'field_data_field_sticker_to_vehicle_1_er';
  $handler->display->display_options['relationships']['field_sticker_to_vehicle_1_er_target_id']['field'] = 'field_sticker_to_vehicle_1_er_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_sticker_to_vehicle_2_er_target_id']['id'] = 'field_sticker_to_vehicle_2_er_target_id';
  $handler->display->display_options['relationships']['field_sticker_to_vehicle_2_er_target_id']['table'] = 'field_data_field_sticker_to_vehicle_2_er';
  $handler->display->display_options['relationships']['field_sticker_to_vehicle_2_er_target_id']['field'] = 'field_sticker_to_vehicle_2_er_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_sticker_to_vehicle_3_er_target_id']['id'] = 'field_sticker_to_vehicle_3_er_target_id';
  $handler->display->display_options['relationships']['field_sticker_to_vehicle_3_er_target_id']['table'] = 'field_data_field_sticker_to_vehicle_3_er';
  $handler->display->display_options['relationships']['field_sticker_to_vehicle_3_er_target_id']['field'] = 'field_sticker_to_vehicle_3_er_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_permit_year_tax_target_id']['id'] = 'field_permit_year_tax_target_id';
  $handler->display->display_options['relationships']['field_permit_year_tax_target_id']['table'] = 'field_data_field_permit_year_tax';
  $handler->display->display_options['relationships']['field_permit_year_tax_target_id']['field'] = 'field_permit_year_tax_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_permit_year_tax_node']['id'] = 'reverse_field_permit_year_tax_node';
  $handler->display->display_options['relationships']['reverse_field_permit_year_tax_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_permit_year_tax_node']['field'] = 'reverse_field_permit_year_tax_node';
  $handler->display->display_options['relationships']['reverse_field_permit_year_tax_node']['relationship'] = 'field_permit_year_tax_target_id';
  /* Field: Content: Primary Vehicle */
  $handler->display->display_options['fields']['field_sticker_to_vehicle_1_er']['id'] = 'field_sticker_to_vehicle_1_er';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_1_er']['table'] = 'field_data_field_sticker_to_vehicle_1_er';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_1_er']['field'] = 'field_sticker_to_vehicle_1_er';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_1_er']['label'] = 'sticker_to_vehicle_1_er';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_1_er']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sticker_to_vehicle_1_er']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sticker_to_vehicle_1_er']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_1_er']['settings'] = array(
    'view_mode' => 'token',
    'links' => 1,
    'use_content_language' => 1,
  );
  /* Field: Content: Secondary Vehicle */
  $handler->display->display_options['fields']['field_sticker_to_vehicle_2_er']['id'] = 'field_sticker_to_vehicle_2_er';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_2_er']['table'] = 'field_data_field_sticker_to_vehicle_2_er';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_2_er']['field'] = 'field_sticker_to_vehicle_2_er';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_2_er']['label'] = 'sticker_to_vehicle_2_er';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_2_er']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sticker_to_vehicle_2_er']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sticker_to_vehicle_2_er']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_2_er']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
    'use_content_language' => 1,
  );
  /* Field: Content: Tertiary Vehicle */
  $handler->display->display_options['fields']['field_sticker_to_vehicle_3_er']['id'] = 'field_sticker_to_vehicle_3_er';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_3_er']['table'] = 'field_data_field_sticker_to_vehicle_3_er';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_3_er']['field'] = 'field_sticker_to_vehicle_3_er';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_3_er']['label'] = 'sticker_to_vehicle_3_er';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_3_er']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sticker_to_vehicle_3_er']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sticker_to_vehicle_3_er']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_3_er']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
    'use_content_language' => 1,
  );
  /* Field: Field: Vehicle Year */
  $handler->display->display_options['fields']['field_vehyear_1']['id'] = 'field_vehyear_1';
  $handler->display->display_options['fields']['field_vehyear_1']['table'] = 'field_data_field_vehyear';
  $handler->display->display_options['fields']['field_vehyear_1']['field'] = 'field_vehyear';
  $handler->display->display_options['fields']['field_vehyear_1']['relationship'] = 'field_sticker_to_vehicle_1_er_target_id';
  $handler->display->display_options['fields']['field_vehyear_1']['label'] = 'Year 1';
  $handler->display->display_options['fields']['field_vehyear_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vehyear_1']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_vehyear_1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Vehicle Make */
  $handler->display->display_options['fields']['field_vehmake_tax_1']['id'] = 'field_vehmake_tax_1';
  $handler->display->display_options['fields']['field_vehmake_tax_1']['table'] = 'field_data_field_vehmake_tax';
  $handler->display->display_options['fields']['field_vehmake_tax_1']['field'] = 'field_vehmake_tax';
  $handler->display->display_options['fields']['field_vehmake_tax_1']['relationship'] = 'field_sticker_to_vehicle_1_er_target_id';
  $handler->display->display_options['fields']['field_vehmake_tax_1']['label'] = 'VehMake 1';
  $handler->display->display_options['fields']['field_vehmake_tax_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vehmake_tax_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Vehicle Model */
  $handler->display->display_options['fields']['field_vehmodel_1']['id'] = 'field_vehmodel_1';
  $handler->display->display_options['fields']['field_vehmodel_1']['table'] = 'field_data_field_vehmodel';
  $handler->display->display_options['fields']['field_vehmodel_1']['field'] = 'field_vehmodel';
  $handler->display->display_options['fields']['field_vehmodel_1']['relationship'] = 'field_sticker_to_vehicle_1_er_target_id';
  $handler->display->display_options['fields']['field_vehmodel_1']['label'] = 'VehModel 1';
  $handler->display->display_options['fields']['field_vehmodel_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vehmodel_1']['type'] = 'text_plain';
  /* Field: Content: Vehicle Color */
  $handler->display->display_options['fields']['field_vehcolor_tax']['id'] = 'field_vehcolor_tax';
  $handler->display->display_options['fields']['field_vehcolor_tax']['table'] = 'field_data_field_vehcolor_tax';
  $handler->display->display_options['fields']['field_vehcolor_tax']['field'] = 'field_vehcolor_tax';
  $handler->display->display_options['fields']['field_vehcolor_tax']['relationship'] = 'field_sticker_to_vehicle_1_er_target_id';
  $handler->display->display_options['fields']['field_vehcolor_tax']['label'] = 'VehColor 1';
  $handler->display->display_options['fields']['field_vehcolor_tax']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vehcolor_tax']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_vehcolor_tax']['alter']['text'] = '([field_vehcolor_tax]';
  $handler->display->display_options['fields']['field_vehcolor_tax']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Vehicle Style */
  $handler->display->display_options['fields']['field_vehstyle_tax']['id'] = 'field_vehstyle_tax';
  $handler->display->display_options['fields']['field_vehstyle_tax']['table'] = 'field_data_field_vehstyle_tax';
  $handler->display->display_options['fields']['field_vehstyle_tax']['field'] = 'field_vehstyle_tax';
  $handler->display->display_options['fields']['field_vehstyle_tax']['relationship'] = 'field_sticker_to_vehicle_1_er_target_id';
  $handler->display->display_options['fields']['field_vehstyle_tax']['label'] = 'VehStyle 1';
  $handler->display->display_options['fields']['field_vehstyle_tax']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vehstyle_tax']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_vehstyle_tax']['alter']['text'] = '[field_vehstyle_tax])';
  $handler->display->display_options['fields']['field_vehstyle_tax']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Vehicle License Plate */
  $handler->display->display_options['fields']['field_vehlicnumber2']['id'] = 'field_vehlicnumber2';
  $handler->display->display_options['fields']['field_vehlicnumber2']['table'] = 'field_data_field_vehlicnumber2';
  $handler->display->display_options['fields']['field_vehlicnumber2']['field'] = 'field_vehlicnumber2';
  $handler->display->display_options['fields']['field_vehlicnumber2']['relationship'] = 'field_sticker_to_vehicle_1_er_target_id';
  $handler->display->display_options['fields']['field_vehlicnumber2']['label'] = 'Vehicle License Plate 1';
  $handler->display->display_options['fields']['field_vehlicnumber2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vehlicnumber2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_vehlicnumber2']['alter']['text'] = '- [field_vehlicnumber2]';
  $handler->display->display_options['fields']['field_vehlicnumber2']['type'] = 'text_plain';
  /* Field: Content: State of Registration */
  $handler->display->display_options['fields']['field_vehlicstate2']['id'] = 'field_vehlicstate2';
  $handler->display->display_options['fields']['field_vehlicstate2']['table'] = 'field_data_field_vehlicstate2';
  $handler->display->display_options['fields']['field_vehlicstate2']['field'] = 'field_vehlicstate2';
  $handler->display->display_options['fields']['field_vehlicstate2']['relationship'] = 'field_sticker_to_vehicle_1_er_target_id';
  $handler->display->display_options['fields']['field_vehlicstate2']['label'] = 'State of Registration 1';
  $handler->display->display_options['fields']['field_vehlicstate2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vehlicstate2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_vehlicstate2']['alter']['text'] = '([field_vehlicstate2])';
  /* Field: Field: Vehicle Year */
  $handler->display->display_options['fields']['field_vehyear_2']['id'] = 'field_vehyear_2';
  $handler->display->display_options['fields']['field_vehyear_2']['table'] = 'field_data_field_vehyear';
  $handler->display->display_options['fields']['field_vehyear_2']['field'] = 'field_vehyear';
  $handler->display->display_options['fields']['field_vehyear_2']['relationship'] = 'field_sticker_to_vehicle_2_er_target_id';
  $handler->display->display_options['fields']['field_vehyear_2']['label'] = 'Year 2';
  $handler->display->display_options['fields']['field_vehyear_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vehyear_2']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_vehyear_2']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Vehicle Make */
  $handler->display->display_options['fields']['field_vehmake_tax_2']['id'] = 'field_vehmake_tax_2';
  $handler->display->display_options['fields']['field_vehmake_tax_2']['table'] = 'field_data_field_vehmake_tax';
  $handler->display->display_options['fields']['field_vehmake_tax_2']['field'] = 'field_vehmake_tax';
  $handler->display->display_options['fields']['field_vehmake_tax_2']['relationship'] = 'field_sticker_to_vehicle_2_er_target_id';
  $handler->display->display_options['fields']['field_vehmake_tax_2']['label'] = 'VehMake 2';
  $handler->display->display_options['fields']['field_vehmake_tax_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vehmake_tax_2']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Vehicle Model */
  $handler->display->display_options['fields']['field_vehmodel_2']['id'] = 'field_vehmodel_2';
  $handler->display->display_options['fields']['field_vehmodel_2']['table'] = 'field_data_field_vehmodel';
  $handler->display->display_options['fields']['field_vehmodel_2']['field'] = 'field_vehmodel';
  $handler->display->display_options['fields']['field_vehmodel_2']['relationship'] = 'field_sticker_to_vehicle_2_er_target_id';
  $handler->display->display_options['fields']['field_vehmodel_2']['label'] = 'VehModel 2';
  $handler->display->display_options['fields']['field_vehmodel_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vehmodel_2']['type'] = 'text_plain';
  /* Field: Content: Vehicle Color */
  $handler->display->display_options['fields']['field_vehcolor_tax_1']['id'] = 'field_vehcolor_tax_1';
  $handler->display->display_options['fields']['field_vehcolor_tax_1']['table'] = 'field_data_field_vehcolor_tax';
  $handler->display->display_options['fields']['field_vehcolor_tax_1']['field'] = 'field_vehcolor_tax';
  $handler->display->display_options['fields']['field_vehcolor_tax_1']['relationship'] = 'field_sticker_to_vehicle_2_er_target_id';
  $handler->display->display_options['fields']['field_vehcolor_tax_1']['label'] = 'VehColor 2';
  $handler->display->display_options['fields']['field_vehcolor_tax_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vehcolor_tax_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_vehcolor_tax_1']['alter']['text'] = '([field_vehcolor_tax_1]';
  $handler->display->display_options['fields']['field_vehcolor_tax_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Vehicle Style */
  $handler->display->display_options['fields']['field_vehstyle_tax_1']['id'] = 'field_vehstyle_tax_1';
  $handler->display->display_options['fields']['field_vehstyle_tax_1']['table'] = 'field_data_field_vehstyle_tax';
  $handler->display->display_options['fields']['field_vehstyle_tax_1']['field'] = 'field_vehstyle_tax';
  $handler->display->display_options['fields']['field_vehstyle_tax_1']['relationship'] = 'field_sticker_to_vehicle_2_er_target_id';
  $handler->display->display_options['fields']['field_vehstyle_tax_1']['label'] = 'VehStyle 2';
  $handler->display->display_options['fields']['field_vehstyle_tax_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vehstyle_tax_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_vehstyle_tax_1']['alter']['text'] = '[field_vehstyle_tax_1])';
  $handler->display->display_options['fields']['field_vehstyle_tax_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Vehicle License Plate */
  $handler->display->display_options['fields']['field_vehlicnumber2_1']['id'] = 'field_vehlicnumber2_1';
  $handler->display->display_options['fields']['field_vehlicnumber2_1']['table'] = 'field_data_field_vehlicnumber2';
  $handler->display->display_options['fields']['field_vehlicnumber2_1']['field'] = 'field_vehlicnumber2';
  $handler->display->display_options['fields']['field_vehlicnumber2_1']['relationship'] = 'field_sticker_to_vehicle_2_er_target_id';
  $handler->display->display_options['fields']['field_vehlicnumber2_1']['label'] = 'Vehicle License Plate 2';
  $handler->display->display_options['fields']['field_vehlicnumber2_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vehlicnumber2_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_vehlicnumber2_1']['alter']['text'] = '- [field_vehlicnumber2_1]';
  $handler->display->display_options['fields']['field_vehlicnumber2_1']['type'] = 'text_plain';
  /* Field: Content: State of Registration */
  $handler->display->display_options['fields']['field_vehlicstate2_1']['id'] = 'field_vehlicstate2_1';
  $handler->display->display_options['fields']['field_vehlicstate2_1']['table'] = 'field_data_field_vehlicstate2';
  $handler->display->display_options['fields']['field_vehlicstate2_1']['field'] = 'field_vehlicstate2';
  $handler->display->display_options['fields']['field_vehlicstate2_1']['relationship'] = 'field_sticker_to_vehicle_2_er_target_id';
  $handler->display->display_options['fields']['field_vehlicstate2_1']['label'] = 'State of Registration 2';
  $handler->display->display_options['fields']['field_vehlicstate2_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vehlicstate2_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_vehlicstate2_1']['alter']['text'] = '([field_vehlicstate2_1])';
  /* Field: Field: Vehicle Year */
  $handler->display->display_options['fields']['field_vehyear_3']['id'] = 'field_vehyear_3';
  $handler->display->display_options['fields']['field_vehyear_3']['table'] = 'field_data_field_vehyear';
  $handler->display->display_options['fields']['field_vehyear_3']['field'] = 'field_vehyear';
  $handler->display->display_options['fields']['field_vehyear_3']['relationship'] = 'field_sticker_to_vehicle_3_er_target_id';
  $handler->display->display_options['fields']['field_vehyear_3']['label'] = 'Year 3';
  $handler->display->display_options['fields']['field_vehyear_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vehyear_3']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_vehyear_3']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Vehicle Make */
  $handler->display->display_options['fields']['field_vehmake_tax_3']['id'] = 'field_vehmake_tax_3';
  $handler->display->display_options['fields']['field_vehmake_tax_3']['table'] = 'field_data_field_vehmake_tax';
  $handler->display->display_options['fields']['field_vehmake_tax_3']['field'] = 'field_vehmake_tax';
  $handler->display->display_options['fields']['field_vehmake_tax_3']['relationship'] = 'field_sticker_to_vehicle_3_er_target_id';
  $handler->display->display_options['fields']['field_vehmake_tax_3']['label'] = 'VehMake 3';
  $handler->display->display_options['fields']['field_vehmake_tax_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vehmake_tax_3']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Vehicle Model */
  $handler->display->display_options['fields']['field_vehmodel_3']['id'] = 'field_vehmodel_3';
  $handler->display->display_options['fields']['field_vehmodel_3']['table'] = 'field_data_field_vehmodel';
  $handler->display->display_options['fields']['field_vehmodel_3']['field'] = 'field_vehmodel';
  $handler->display->display_options['fields']['field_vehmodel_3']['relationship'] = 'field_sticker_to_vehicle_3_er_target_id';
  $handler->display->display_options['fields']['field_vehmodel_3']['label'] = 'VehModel 3';
  $handler->display->display_options['fields']['field_vehmodel_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vehmodel_3']['type'] = 'text_plain';
  /* Field: Content: Vehicle Color */
  $handler->display->display_options['fields']['field_vehcolor_tax_2']['id'] = 'field_vehcolor_tax_2';
  $handler->display->display_options['fields']['field_vehcolor_tax_2']['table'] = 'field_data_field_vehcolor_tax';
  $handler->display->display_options['fields']['field_vehcolor_tax_2']['field'] = 'field_vehcolor_tax';
  $handler->display->display_options['fields']['field_vehcolor_tax_2']['relationship'] = 'field_sticker_to_vehicle_3_er_target_id';
  $handler->display->display_options['fields']['field_vehcolor_tax_2']['label'] = 'VehColor 3';
  $handler->display->display_options['fields']['field_vehcolor_tax_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vehcolor_tax_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_vehcolor_tax_2']['alter']['text'] = '([field_vehcolor_tax_2]';
  $handler->display->display_options['fields']['field_vehcolor_tax_2']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Vehicle Style */
  $handler->display->display_options['fields']['field_vehstyle_tax_2']['id'] = 'field_vehstyle_tax_2';
  $handler->display->display_options['fields']['field_vehstyle_tax_2']['table'] = 'field_data_field_vehstyle_tax';
  $handler->display->display_options['fields']['field_vehstyle_tax_2']['field'] = 'field_vehstyle_tax';
  $handler->display->display_options['fields']['field_vehstyle_tax_2']['relationship'] = 'field_sticker_to_vehicle_3_er_target_id';
  $handler->display->display_options['fields']['field_vehstyle_tax_2']['label'] = 'VehStyle 3';
  $handler->display->display_options['fields']['field_vehstyle_tax_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vehstyle_tax_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_vehstyle_tax_2']['alter']['text'] = '[field_vehstyle_tax_2])';
  $handler->display->display_options['fields']['field_vehstyle_tax_2']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Vehicle License Plate */
  $handler->display->display_options['fields']['field_vehlicnumber2_2']['id'] = 'field_vehlicnumber2_2';
  $handler->display->display_options['fields']['field_vehlicnumber2_2']['table'] = 'field_data_field_vehlicnumber2';
  $handler->display->display_options['fields']['field_vehlicnumber2_2']['field'] = 'field_vehlicnumber2';
  $handler->display->display_options['fields']['field_vehlicnumber2_2']['relationship'] = 'field_sticker_to_vehicle_3_er_target_id';
  $handler->display->display_options['fields']['field_vehlicnumber2_2']['label'] = 'Vehicle License Plate 3';
  $handler->display->display_options['fields']['field_vehlicnumber2_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vehlicnumber2_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_vehlicnumber2_2']['alter']['text'] = '- [field_vehlicnumber2_2]';
  $handler->display->display_options['fields']['field_vehlicnumber2_2']['type'] = 'text_plain';
  /* Field: Content: State of Registration */
  $handler->display->display_options['fields']['field_vehlicstate2_2']['id'] = 'field_vehlicstate2_2';
  $handler->display->display_options['fields']['field_vehlicstate2_2']['table'] = 'field_data_field_vehlicstate2';
  $handler->display->display_options['fields']['field_vehlicstate2_2']['field'] = 'field_vehlicstate2';
  $handler->display->display_options['fields']['field_vehlicstate2_2']['relationship'] = 'field_sticker_to_vehicle_3_er_target_id';
  $handler->display->display_options['fields']['field_vehlicstate2_2']['label'] = 'State of Registration 3';
  $handler->display->display_options['fields']['field_vehlicstate2_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vehlicstate2_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_vehlicstate2_2']['alter']['text'] = '([field_vehlicstate2_2])';
  /* Field: Content: Permit Year */
  $handler->display->display_options['fields']['field_permit_year_tax']['id'] = 'field_permit_year_tax';
  $handler->display->display_options['fields']['field_permit_year_tax']['table'] = 'field_data_field_permit_year_tax';
  $handler->display->display_options['fields']['field_permit_year_tax']['field'] = 'field_permit_year_tax';
  $handler->display->display_options['fields']['field_permit_year_tax']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_permit_year_tax']['group_column'] = 'tid';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Primary Vehicle';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_vehyear_1] [field_vehmake_tax_1] [field_vehmodel_1] [field_vehcolor_tax] [field_vehstyle_tax] [field_vehlicnumber2] [field_vehlicstate2]';
  /* Field: Content: Primary Sticker */
  $handler->display->display_options['fields']['field_sticker_num_1']['id'] = 'field_sticker_num_1';
  $handler->display->display_options['fields']['field_sticker_num_1']['table'] = 'field_data_field_sticker_num_1';
  $handler->display->display_options['fields']['field_sticker_num_1']['field'] = 'field_sticker_num_1';
  $handler->display->display_options['fields']['field_sticker_num_1']['hide_empty'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Secondary Vehicle';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '[field_vehyear_2] [field_vehmake_tax_2] [field_vehmodel_2] [field_vehcolor_tax_1] [field_vehstyle_tax_1] [field_vehlicnumber2_1] [field_vehlicstate2_1]';
  $handler->display->display_options['fields']['nothing_1']['hide_empty'] = TRUE;
  /* Field: Content: Secondary Sticker */
  $handler->display->display_options['fields']['field_sticker_num_2']['id'] = 'field_sticker_num_2';
  $handler->display->display_options['fields']['field_sticker_num_2']['table'] = 'field_data_field_sticker_num_2';
  $handler->display->display_options['fields']['field_sticker_num_2']['field'] = 'field_sticker_num_2';
  $handler->display->display_options['fields']['field_sticker_num_2']['hide_empty'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'Tertiary Vehicle';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '[field_vehyear_3] [field_vehmake_tax_3] [field_vehmodel_3] [field_vehcolor_tax_2] [field_vehstyle_tax_2] [field_vehlicnumber2_2] [field_vehlicstate2_2]';
  $handler->display->display_options['fields']['nothing_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['hide_alter_empty'] = TRUE;
  /* Field: Content: Tertiary Sticker */
  $handler->display->display_options['fields']['field_sticker_num_3']['id'] = 'field_sticker_num_3';
  $handler->display->display_options['fields']['field_sticker_num_3']['table'] = 'field_data_field_sticker_num_3';
  $handler->display->display_options['fields']['field_sticker_num_3']['field'] = 'field_sticker_num_3';
  $handler->display->display_options['fields']['field_sticker_num_3']['hide_empty'] = TRUE;
  /* Field: Content: Authorization */
  $handler->display->display_options['fields']['field_authorization_select']['id'] = 'field_authorization_select';
  $handler->display->display_options['fields']['field_authorization_select']['table'] = 'field_data_field_authorization_select';
  $handler->display->display_options['fields']['field_authorization_select']['field'] = 'field_authorization_select';
  $handler->display->display_options['fields']['field_authorization_select']['exclude'] = TRUE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Permit Status';
  $handler->display->display_options['fields']['php']['element_class'] = 'parking-permit-status-[php]';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
  if(! $data->field_field_authorization_select[0][\'raw\'][\'value\']) {
    echo \'<a href="\' . base_path() . \'node/\' . $data->nid . \'/edit?destination=\' . current_path() . \'">IN PROGRESS</a>\';
  } else if(    ($data->node_field_data_field_sticker_to_vehicle_1_er_nid && ! strlen($data->field_field_sticker_num_1[0][\'raw\'][\'value\']))
               ||  ($data->node_field_data_field_sticker_to_vehicle_2_er_nid && ! strlen($data->field_field_sticker_num_2[0][\'raw\'][\'value\']))
               ||  ($data->node_field_data_field_sticker_to_vehicle_3_er_nid && ! strlen($data->field_field_sticker_num_3[0][\'raw\'][\'value\']))
  ) {
    echo \'SUBMITTED\';
  } else {
    echo \'APPROVED\';
  }
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: NetID ref (field_netid_ref) */
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['id'] = 'field_netid_ref_target_id';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['table'] = 'field_data_field_netid_ref';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['field'] = 'field_netid_ref_target_id';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['validate_options']['type'] = 'either';
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
    'permit2' => 'permit2',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Permit Manager Dashboard';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
    8 => '8',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_sticker_to_vehicle_1_er' => 'field_sticker_to_vehicle_1_er',
    'field_sticker_to_vehicle_2_er' => 'field_sticker_to_vehicle_2_er',
    'field_sticker_to_vehicle_3_er' => 'field_sticker_to_vehicle_3_er',
    'field_vehyear_1' => 'field_vehyear_1',
    'field_vehmake_tax_1' => 'field_vehmake_tax_1',
    'field_vehmodel_1' => 'field_vehmodel_1',
    'field_vehcolor_tax' => 'field_vehcolor_tax',
    'field_vehstyle_tax' => 'field_vehstyle_tax',
    'field_vehyear_2' => 'field_vehyear_2',
    'field_vehmake_tax_2' => 'field_vehmake_tax_2',
    'field_vehmodel_2' => 'field_vehmodel_2',
    'field_vehcolor_tax_1' => 'field_vehcolor_tax_1',
    'field_vehstyle_tax_1' => 'field_vehstyle_tax_1',
    'field_vehyear_3' => 'field_vehyear_3',
    'field_vehmake_tax_3' => 'field_vehmake_tax_3',
    'field_vehmodel_3' => 'field_vehmodel_3',
    'field_vehcolor_tax_2' => 'field_vehcolor_tax_2',
    'field_vehstyle_tax_2' => 'field_vehstyle_tax_2',
    'name' => 'name',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
    'field_middle_name' => 'field_middle_name',
    'field_permit_year_tax' => 'field_permit_year_tax',
    'nothing_3' => 'nothing_3',
    'nothing' => 'nothing',
    'field_sticker_num_1' => 'field_sticker_num_1',
    'nothing_1' => 'nothing_1',
    'field_sticker_num_2' => 'field_sticker_num_2',
    'nothing_2' => 'nothing_2',
    'field_sticker_num_3' => 'field_sticker_num_3',
    'field_authorization_select' => 'field_authorization_select',
    'php' => 'php',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_sticker_to_vehicle_1_er' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sticker_to_vehicle_2_er' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sticker_to_vehicle_3_er' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehyear_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehmake_tax_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehmodel_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehcolor_tax' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehstyle_tax' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehyear_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehmake_tax_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehmodel_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehcolor_tax_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehstyle_tax_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehyear_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehmake_tax_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehmodel_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehcolor_tax_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehstyle_tax_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_middle_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_permit_year_tax' => array(
      'sortable' => 0,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_3' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sticker_num_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sticker_num_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sticker_num_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_authorization_select' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_netid_ref_target_id']['id'] = 'field_netid_ref_target_id';
  $handler->display->display_options['relationships']['field_netid_ref_target_id']['table'] = 'field_data_field_netid_ref';
  $handler->display->display_options['relationships']['field_netid_ref_target_id']['field'] = 'field_netid_ref_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_sticker_to_vehicle_1_er_target_id']['id'] = 'field_sticker_to_vehicle_1_er_target_id';
  $handler->display->display_options['relationships']['field_sticker_to_vehicle_1_er_target_id']['table'] = 'field_data_field_sticker_to_vehicle_1_er';
  $handler->display->display_options['relationships']['field_sticker_to_vehicle_1_er_target_id']['field'] = 'field_sticker_to_vehicle_1_er_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_sticker_to_vehicle_2_er_target_id']['id'] = 'field_sticker_to_vehicle_2_er_target_id';
  $handler->display->display_options['relationships']['field_sticker_to_vehicle_2_er_target_id']['table'] = 'field_data_field_sticker_to_vehicle_2_er';
  $handler->display->display_options['relationships']['field_sticker_to_vehicle_2_er_target_id']['field'] = 'field_sticker_to_vehicle_2_er_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_sticker_to_vehicle_3_er_target_id']['id'] = 'field_sticker_to_vehicle_3_er_target_id';
  $handler->display->display_options['relationships']['field_sticker_to_vehicle_3_er_target_id']['table'] = 'field_data_field_sticker_to_vehicle_3_er';
  $handler->display->display_options['relationships']['field_sticker_to_vehicle_3_er_target_id']['field'] = 'field_sticker_to_vehicle_3_er_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_netid_ref_target_id';
  $handler->display->display_options['fields']['name']['label'] = 'User Name';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'field_netid_ref_target_id';
  $handler->display->display_options['fields']['field_first_name']['exclude'] = TRUE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_netid_ref_target_id';
  $handler->display->display_options['fields']['field_last_name']['exclude'] = TRUE;
  /* Field: User: Middle Name */
  $handler->display->display_options['fields']['field_middle_name']['id'] = 'field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['table'] = 'field_data_field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['field'] = 'field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['relationship'] = 'field_netid_ref_target_id';
  $handler->display->display_options['fields']['field_middle_name']['exclude'] = TRUE;
  /* Field: Content: Permit Year */
  $handler->display->display_options['fields']['field_permit_year_tax']['id'] = 'field_permit_year_tax';
  $handler->display->display_options['fields']['field_permit_year_tax']['table'] = 'field_data_field_permit_year_tax';
  $handler->display->display_options['fields']['field_permit_year_tax']['field'] = 'field_permit_year_tax';
  $handler->display->display_options['fields']['field_permit_year_tax']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_permit_year_tax']['group_column'] = 'tid';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = 'Permit Holder';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '[field_last_name], [field_first_name] [field_middle_name] ([name])';
  /* Field: Content: Primary Vehicle */
  $handler->display->display_options['fields']['field_sticker_to_vehicle_1_er']['id'] = 'field_sticker_to_vehicle_1_er';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_1_er']['table'] = 'field_data_field_sticker_to_vehicle_1_er';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_1_er']['field'] = 'field_sticker_to_vehicle_1_er';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_1_er']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sticker_to_vehicle_1_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_sticker_to_vehicle_1_er_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Title veh1';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Primary Sticker */
  $handler->display->display_options['fields']['field_sticker_num_1']['id'] = 'field_sticker_num_1';
  $handler->display->display_options['fields']['field_sticker_num_1']['table'] = 'field_data_field_sticker_num_1';
  $handler->display->display_options['fields']['field_sticker_num_1']['field'] = 'field_sticker_num_1';
  $handler->display->display_options['fields']['field_sticker_num_1']['hide_empty'] = TRUE;
  /* Field: Content: Secondary Vehicle */
  $handler->display->display_options['fields']['field_sticker_to_vehicle_2_er']['id'] = 'field_sticker_to_vehicle_2_er';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_2_er']['table'] = 'field_data_field_sticker_to_vehicle_2_er';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_2_er']['field'] = 'field_sticker_to_vehicle_2_er';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_2_er']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sticker_to_vehicle_2_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_sticker_to_vehicle_2_er_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Title veh2';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Secondary Sticker */
  $handler->display->display_options['fields']['field_sticker_num_2']['id'] = 'field_sticker_num_2';
  $handler->display->display_options['fields']['field_sticker_num_2']['table'] = 'field_data_field_sticker_num_2';
  $handler->display->display_options['fields']['field_sticker_num_2']['field'] = 'field_sticker_num_2';
  $handler->display->display_options['fields']['field_sticker_num_2']['hide_empty'] = TRUE;
  /* Field: Content: Tertiary Vehicle */
  $handler->display->display_options['fields']['field_sticker_to_vehicle_3_er']['id'] = 'field_sticker_to_vehicle_3_er';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_3_er']['table'] = 'field_data_field_sticker_to_vehicle_3_er';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_3_er']['field'] = 'field_sticker_to_vehicle_3_er';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_3_er']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sticker_to_vehicle_3_er']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'field_sticker_to_vehicle_3_er_target_id';
  $handler->display->display_options['fields']['title_2']['label'] = 'Title veh3';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['link_to_node'] = FALSE;
  /* Field: Content: Tertiary Sticker */
  $handler->display->display_options['fields']['field_sticker_num_3']['id'] = 'field_sticker_num_3';
  $handler->display->display_options['fields']['field_sticker_num_3']['table'] = 'field_data_field_sticker_num_3';
  $handler->display->display_options['fields']['field_sticker_num_3']['field'] = 'field_sticker_num_3';
  $handler->display->display_options['fields']['field_sticker_num_3']['hide_empty'] = TRUE;
  /* Field: Content: Authorization */
  $handler->display->display_options['fields']['field_authorization_select']['id'] = 'field_authorization_select';
  $handler->display->display_options['fields']['field_authorization_select']['table'] = 'field_data_field_authorization_select';
  $handler->display->display_options['fields']['field_authorization_select']['field'] = 'field_authorization_select';
  $handler->display->display_options['fields']['field_authorization_select']['exclude'] = TRUE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Permit Status';
  $handler->display->display_options['fields']['php']['element_class'] = 'parking-permit-status-[php]';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
  if(! $data->field_field_authorization_select[0][\'raw\'][\'value\']) {
    echo \'<a href="\' . base_path() . \'node/\' . $data->nid . \'/edit?destination=\' . current_path() . \'">IN PROGRESS</a>\';
  } else if(    (count($data->field_field_sticker_to_vehicle_1_er) && ! count($data->field_field_sticker_num_1))
               ||  (count($data->field_field_sticker_to_vehicle_2_er) && ! count($data->field_field_sticker_num_2))
               ||  (count($data->field_field_sticker_to_vehicle_3_er) && ! count($data->field_field_sticker_num_3))
  ) {
    echo \'SUBMITTED\';
  } else {
    echo \'APPROVED\';
  }
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: NetID ref (field_netid_ref) */
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['id'] = 'field_netid_ref_target_id';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['table'] = 'field_data_field_netid_ref';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['field'] = 'field_netid_ref_target_id';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['validate_options']['type'] = 'either';
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
    'permit2' => 'permit2',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Permit Year (field_permit_year_tax) */
  $handler->display->display_options['filters']['field_permit_year_tax_target_id']['id'] = 'field_permit_year_tax_target_id';
  $handler->display->display_options['filters']['field_permit_year_tax_target_id']['table'] = 'field_data_field_permit_year_tax';
  $handler->display->display_options['filters']['field_permit_year_tax_target_id']['field'] = 'field_permit_year_tax_target_id';
  $handler->display->display_options['filters']['field_permit_year_tax_target_id']['relationship'] = 'reverse_field_permit_year_tax_node';
  $handler->display->display_options['filters']['field_permit_year_tax_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_permit_year_tax_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_permit_year_tax_target_id']['expose']['operator_id'] = 'field_permit_year_tax_target_id_op';
  $handler->display->display_options['filters']['field_permit_year_tax_target_id']['expose']['label'] = 'Permit Year';
  $handler->display->display_options['filters']['field_permit_year_tax_target_id']['expose']['operator'] = 'field_permit_year_tax_target_id_op';
  $handler->display->display_options['filters']['field_permit_year_tax_target_id']['expose']['identifier'] = 'field_permit_year_tax_target_id';
  $handler->display->display_options['filters']['field_permit_year_tax_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_permit_year_tax_target_id']['group_info']['label'] = 'Permit Year (field_permit_year_tax)';
  $handler->display->display_options['filters']['field_permit_year_tax_target_id']['group_info']['identifier'] = 'field_permit_year_tax_target_id';
  $handler->display->display_options['filters']['field_permit_year_tax_target_id']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_permit_year_tax_target_id']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine_1']['id'] = 'combine_1';
  $handler->display->display_options['filters']['combine_1']['table'] = 'views';
  $handler->display->display_options['filters']['combine_1']['field'] = 'combine';
  $handler->display->display_options['filters']['combine_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine_1']['group'] = 1;
  $handler->display->display_options['filters']['combine_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine_1']['expose']['operator_id'] = 'combine_1_op';
  $handler->display->display_options['filters']['combine_1']['expose']['label'] = 'Permit Holder';
  $handler->display->display_options['filters']['combine_1']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['combine_1']['expose']['operator'] = 'combine_1_op';
  $handler->display->display_options['filters']['combine_1']['expose']['identifier'] = 'combine_1';
  $handler->display->display_options['filters']['combine_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['combine_1']['fields'] = array(
    'name' => 'name',
    'field_first_name' => 'field_first_name',
    'field_last_name' => 'field_last_name',
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine_2']['id'] = 'combine_2';
  $handler->display->display_options['filters']['combine_2']['table'] = 'views';
  $handler->display->display_options['filters']['combine_2']['field'] = 'combine';
  $handler->display->display_options['filters']['combine_2']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine_2']['group'] = 1;
  $handler->display->display_options['filters']['combine_2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine_2']['expose']['operator_id'] = 'combine_2_op';
  $handler->display->display_options['filters']['combine_2']['expose']['label'] = 'Vehicle';
  $handler->display->display_options['filters']['combine_2']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['combine_2']['expose']['operator'] = 'combine_2_op';
  $handler->display->display_options['filters']['combine_2']['expose']['identifier'] = 'combine_2';
  $handler->display->display_options['filters']['combine_2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['combine_2']['fields'] = array(
    'title' => 'title',
    'title_1' => 'title_1',
    'title_2' => 'title_2',
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Sticker';
  $handler->display->display_options['filters']['combine']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'field_sticker_num_1' => 'field_sticker_num_1',
    'field_sticker_num_2' => 'field_sticker_num_2',
    'field_sticker_num_3' => 'field_sticker_num_3',
  );
  /* Filter criterion: Content: Authorization (field_authorization_select) */
  $handler->display->display_options['filters']['field_authorization_select_value']['id'] = 'field_authorization_select_value';
  $handler->display->display_options['filters']['field_authorization_select_value']['table'] = 'field_data_field_authorization_select';
  $handler->display->display_options['filters']['field_authorization_select_value']['field'] = 'field_authorization_select_value';
  $handler->display->display_options['filters']['field_authorization_select_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_authorization_select_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_authorization_select_value']['expose']['operator_id'] = 'field_authorization_select_value_op';
  $handler->display->display_options['filters']['field_authorization_select_value']['expose']['label'] = 'Show only Authorized Permits';
  $handler->display->display_options['filters']['field_authorization_select_value']['expose']['operator'] = 'field_authorization_select_value_op';
  $handler->display->display_options['filters']['field_authorization_select_value']['expose']['identifier'] = 'field_authorization_select_value';
  $handler->display->display_options['filters']['field_authorization_select_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['field_authorization_select_value']['expose']['reduce'] = TRUE;
  $handler->display->display_options['path'] = 'permits';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_sticker_to_vehicle_1_er_target_id']['id'] = 'field_sticker_to_vehicle_1_er_target_id';
  $handler->display->display_options['relationships']['field_sticker_to_vehicle_1_er_target_id']['table'] = 'field_data_field_sticker_to_vehicle_1_er';
  $handler->display->display_options['relationships']['field_sticker_to_vehicle_1_er_target_id']['field'] = 'field_sticker_to_vehicle_1_er_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_sticker_to_vehicle_2_er_target_id']['id'] = 'field_sticker_to_vehicle_2_er_target_id';
  $handler->display->display_options['relationships']['field_sticker_to_vehicle_2_er_target_id']['table'] = 'field_data_field_sticker_to_vehicle_2_er';
  $handler->display->display_options['relationships']['field_sticker_to_vehicle_2_er_target_id']['field'] = 'field_sticker_to_vehicle_2_er_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_sticker_to_vehicle_3_er_target_id']['id'] = 'field_sticker_to_vehicle_3_er_target_id';
  $handler->display->display_options['relationships']['field_sticker_to_vehicle_3_er_target_id']['table'] = 'field_data_field_sticker_to_vehicle_3_er';
  $handler->display->display_options['relationships']['field_sticker_to_vehicle_3_er_target_id']['field'] = 'field_sticker_to_vehicle_3_er_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_netid_ref_target_id']['id'] = 'field_netid_ref_target_id';
  $handler->display->display_options['relationships']['field_netid_ref_target_id']['table'] = 'field_data_field_netid_ref';
  $handler->display->display_options['relationships']['field_netid_ref_target_id']['field'] = 'field_netid_ref_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'field_netid_ref_target_id';
  $handler->display->display_options['fields']['name']['label'] = 'NetID';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_netid_ref_target_id';
  /* Field: User: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'field_netid_ref_target_id';
  /* Field: User: Middle Name */
  $handler->display->display_options['fields']['field_middle_name']['id'] = 'field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['table'] = 'field_data_field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['field'] = 'field_middle_name';
  $handler->display->display_options['fields']['field_middle_name']['relationship'] = 'field_netid_ref_target_id';
  /* Field: User: Payroll type */
  $handler->display->display_options['fields']['field_payroll_type']['id'] = 'field_payroll_type';
  $handler->display->display_options['fields']['field_payroll_type']['table'] = 'field_data_field_payroll_type';
  $handler->display->display_options['fields']['field_payroll_type']['field'] = 'field_payroll_type';
  $handler->display->display_options['fields']['field_payroll_type']['relationship'] = 'field_netid_ref_target_id';
  /* Field: User: Person type */
  $handler->display->display_options['fields']['field_person_type']['id'] = 'field_person_type';
  $handler->display->display_options['fields']['field_person_type']['table'] = 'field_data_field_person_type';
  $handler->display->display_options['fields']['field_person_type']['field'] = 'field_person_type';
  $handler->display->display_options['fields']['field_person_type']['relationship'] = 'field_netid_ref_target_id';
  /* Field: User: Full Time/Part Time */
  $handler->display->display_options['fields']['field_full_time_part_time']['id'] = 'field_full_time_part_time';
  $handler->display->display_options['fields']['field_full_time_part_time']['table'] = 'field_data_field_full_time_part_time';
  $handler->display->display_options['fields']['field_full_time_part_time']['field'] = 'field_full_time_part_time';
  $handler->display->display_options['fields']['field_full_time_part_time']['relationship'] = 'field_netid_ref_target_id';
  /* Field: User: Department */
  $handler->display->display_options['fields']['field_org']['id'] = 'field_org';
  $handler->display->display_options['fields']['field_org']['table'] = 'field_data_field_org';
  $handler->display->display_options['fields']['field_org']['field'] = 'field_org';
  $handler->display->display_options['fields']['field_org']['relationship'] = 'field_netid_ref_target_id';
  $handler->display->display_options['fields']['field_org']['label'] = 'User Department';
  /* Field: User: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_netid_ref_target_id';
  $handler->display->display_options['fields']['field_location']['label'] = 'User Location';
  /* Field: Content: Permit Year */
  $handler->display->display_options['fields']['field_permit_year_tax']['id'] = 'field_permit_year_tax';
  $handler->display->display_options['fields']['field_permit_year_tax']['table'] = 'field_data_field_permit_year_tax';
  $handler->display->display_options['fields']['field_permit_year_tax']['field'] = 'field_permit_year_tax';
  $handler->display->display_options['fields']['field_permit_year_tax']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_permit_year_tax']['group_column'] = 'tid';
  /* Field: Content: Permit Holder Category */
  $handler->display->display_options['fields']['field_permit_holder_category_tax']['id'] = 'field_permit_holder_category_tax';
  $handler->display->display_options['fields']['field_permit_holder_category_tax']['table'] = 'field_data_field_permit_holder_category_tax';
  $handler->display->display_options['fields']['field_permit_holder_category_tax']['field'] = 'field_permit_holder_category_tax';
  $handler->display->display_options['fields']['field_permit_holder_category_tax']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Authorization */
  $handler->display->display_options['fields']['field_authorization_select']['id'] = 'field_authorization_select';
  $handler->display->display_options['fields']['field_authorization_select']['table'] = 'field_data_field_authorization_select';
  $handler->display->display_options['fields']['field_authorization_select']['field'] = 'field_authorization_select';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Permit Status';
  $handler->display->display_options['fields']['php']['element_class'] = 'parking-permit-status-[php]';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
  if(! $data->field_field_authorization_select[0][\'raw\'][\'value\']) {
    echo \'<a href="\' . base_path() . \'node/\' . $data->nid . \'/edit?destination=\' . current_path() . \'">IN PROGRESS</a>\';
  } else if(    ($data->node_field_data_field_sticker_to_vehicle_1_er_nid && ! strlen($data->field_field_sticker_num_1[0][\'raw\'][\'value\']))
               ||  ($data->node_field_data_field_sticker_to_vehicle_2_er_nid && ! strlen($data->field_field_sticker_num_2[0][\'raw\'][\'value\']))
               ||  ($data->node_field_data_field_sticker_to_vehicle_3_er_nid && ! strlen($data->field_field_sticker_num_3[0][\'raw\'][\'value\']))
  ) {
    echo \'SUBMITTED\';
  } else {
    echo \'APPROVED\';
  }
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Permit Delivery */
  $handler->display->display_options['fields']['field_permit_delivery']['id'] = 'field_permit_delivery';
  $handler->display->display_options['fields']['field_permit_delivery']['table'] = 'field_data_field_permit_delivery';
  $handler->display->display_options['fields']['field_permit_delivery']['field'] = 'field_permit_delivery';
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['label'] = 'Permit Department';
  /* Field: Content: Delivery Location */
  $handler->display->display_options['fields']['field_delivery_location']['id'] = 'field_delivery_location';
  $handler->display->display_options['fields']['field_delivery_location']['table'] = 'field_data_field_delivery_location';
  $handler->display->display_options['fields']['field_delivery_location']['field'] = 'field_delivery_location';
  /* Field: Content: Fee Date Authorized */
  $handler->display->display_options['fields']['field_fee_date_authorized_1']['id'] = 'field_fee_date_authorized_1';
  $handler->display->display_options['fields']['field_fee_date_authorized_1']['table'] = 'field_data_field_fee_date_authorized';
  $handler->display->display_options['fields']['field_fee_date_authorized_1']['field'] = 'field_fee_date_authorized';
  $handler->display->display_options['fields']['field_fee_date_authorized_1']['label'] = 'Date Payroll Deduction Authorized';
  /* Field: Content: Fee First Payment Date */
  $handler->display->display_options['fields']['field_fee_first_payment_date']['id'] = 'field_fee_first_payment_date';
  $handler->display->display_options['fields']['field_fee_first_payment_date']['table'] = 'field_data_field_fee_first_payment_date';
  $handler->display->display_options['fields']['field_fee_first_payment_date']['field'] = 'field_fee_first_payment_date';
  $handler->display->display_options['fields']['field_fee_first_payment_date']['label'] = 'First Payroll Deduction Date';
  /* Field: Content: Fee Num Deductions */
  $handler->display->display_options['fields']['field_fee_num_deductions']['id'] = 'field_fee_num_deductions';
  $handler->display->display_options['fields']['field_fee_num_deductions']['table'] = 'field_data_field_fee_num_deductions';
  $handler->display->display_options['fields']['field_fee_num_deductions']['field'] = 'field_fee_num_deductions';
  $handler->display->display_options['fields']['field_fee_num_deductions']['label'] = 'Number of Payroll Deductions';
  $handler->display->display_options['fields']['field_fee_num_deductions']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Fee Total Amt */
  $handler->display->display_options['fields']['field_fee_total_amt']['id'] = 'field_fee_total_amt';
  $handler->display->display_options['fields']['field_fee_total_amt']['table'] = 'field_data_field_fee_total_amt';
  $handler->display->display_options['fields']['field_fee_total_amt']['field'] = 'field_fee_total_amt';
  $handler->display->display_options['fields']['field_fee_total_amt']['label'] = 'Total Payroll Deduction Amount';
  $handler->display->display_options['fields']['field_fee_total_amt']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Primary Vehicle */
  $handler->display->display_options['fields']['field_sticker_to_vehicle_1_er']['id'] = 'field_sticker_to_vehicle_1_er';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_1_er']['table'] = 'field_data_field_sticker_to_vehicle_1_er';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_1_er']['field'] = 'field_sticker_to_vehicle_1_er';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_1_er']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sticker_to_vehicle_1_er']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Primary Sticker */
  $handler->display->display_options['fields']['field_sticker_num_1']['id'] = 'field_sticker_num_1';
  $handler->display->display_options['fields']['field_sticker_num_1']['table'] = 'field_data_field_sticker_num_1';
  $handler->display->display_options['fields']['field_sticker_num_1']['field'] = 'field_sticker_num_1';
  $handler->display->display_options['fields']['field_sticker_num_1']['hide_empty'] = TRUE;
  /* Field: Field: VehYear */
  $handler->display->display_options['fields']['field_vehyear_1']['id'] = 'field_vehyear_1';
  $handler->display->display_options['fields']['field_vehyear_1']['table'] = 'field_data_field_vehyear';
  $handler->display->display_options['fields']['field_vehyear_1']['field'] = 'field_vehyear';
  $handler->display->display_options['fields']['field_vehyear_1']['relationship'] = 'field_sticker_to_vehicle_1_er_target_id';
  $handler->display->display_options['fields']['field_vehyear_1']['label'] = 'Primary Vehicle - Year';
  $handler->display->display_options['fields']['field_vehyear_1']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_vehyear_1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Vehicle Make */
  $handler->display->display_options['fields']['field_vehmake_tax_1']['id'] = 'field_vehmake_tax_1';
  $handler->display->display_options['fields']['field_vehmake_tax_1']['table'] = 'field_data_field_vehmake_tax';
  $handler->display->display_options['fields']['field_vehmake_tax_1']['field'] = 'field_vehmake_tax';
  $handler->display->display_options['fields']['field_vehmake_tax_1']['relationship'] = 'field_sticker_to_vehicle_1_er_target_id';
  $handler->display->display_options['fields']['field_vehmake_tax_1']['label'] = 'Primary Vehicle - Make';
  $handler->display->display_options['fields']['field_vehmake_tax_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: VehModel */
  $handler->display->display_options['fields']['field_vehmodel_1']['id'] = 'field_vehmodel_1';
  $handler->display->display_options['fields']['field_vehmodel_1']['table'] = 'field_data_field_vehmodel';
  $handler->display->display_options['fields']['field_vehmodel_1']['field'] = 'field_vehmodel';
  $handler->display->display_options['fields']['field_vehmodel_1']['relationship'] = 'field_sticker_to_vehicle_1_er_target_id';
  $handler->display->display_options['fields']['field_vehmodel_1']['label'] = 'Primary Vehicle - Model';
  $handler->display->display_options['fields']['field_vehmodel_1']['type'] = 'text_plain';
  /* Field: Content: Vehicle Color */
  $handler->display->display_options['fields']['field_vehcolor_tax']['id'] = 'field_vehcolor_tax';
  $handler->display->display_options['fields']['field_vehcolor_tax']['table'] = 'field_data_field_vehcolor_tax';
  $handler->display->display_options['fields']['field_vehcolor_tax']['field'] = 'field_vehcolor_tax';
  $handler->display->display_options['fields']['field_vehcolor_tax']['relationship'] = 'field_sticker_to_vehicle_1_er_target_id';
  $handler->display->display_options['fields']['field_vehcolor_tax']['label'] = 'Primary Vehicle - Color';
  $handler->display->display_options['fields']['field_vehcolor_tax']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Vehicle Style */
  $handler->display->display_options['fields']['field_vehstyle_tax']['id'] = 'field_vehstyle_tax';
  $handler->display->display_options['fields']['field_vehstyle_tax']['table'] = 'field_data_field_vehstyle_tax';
  $handler->display->display_options['fields']['field_vehstyle_tax']['field'] = 'field_vehstyle_tax';
  $handler->display->display_options['fields']['field_vehstyle_tax']['relationship'] = 'field_sticker_to_vehicle_1_er_target_id';
  $handler->display->display_options['fields']['field_vehstyle_tax']['label'] = 'Primary Vehicle - Style';
  $handler->display->display_options['fields']['field_vehstyle_tax']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Vehicle License Plate */
  $handler->display->display_options['fields']['field_vehlicnumber2']['id'] = 'field_vehlicnumber2';
  $handler->display->display_options['fields']['field_vehlicnumber2']['table'] = 'field_data_field_vehlicnumber2';
  $handler->display->display_options['fields']['field_vehlicnumber2']['field'] = 'field_vehlicnumber2';
  $handler->display->display_options['fields']['field_vehlicnumber2']['relationship'] = 'field_sticker_to_vehicle_1_er_target_id';
  $handler->display->display_options['fields']['field_vehlicnumber2']['label'] = 'Primary Vehicle - License Plate';
  $handler->display->display_options['fields']['field_vehlicnumber2']['type'] = 'text_plain';
  /* Field: Content: State of Registration */
  $handler->display->display_options['fields']['field_vehlicstate2']['id'] = 'field_vehlicstate2';
  $handler->display->display_options['fields']['field_vehlicstate2']['table'] = 'field_data_field_vehlicstate2';
  $handler->display->display_options['fields']['field_vehlicstate2']['field'] = 'field_vehlicstate2';
  $handler->display->display_options['fields']['field_vehlicstate2']['relationship'] = 'field_sticker_to_vehicle_1_er_target_id';
  $handler->display->display_options['fields']['field_vehlicstate2']['label'] = 'Primary Vehicle - State';
  /* Field: Content: Secondary Vehicle */
  $handler->display->display_options['fields']['field_sticker_to_vehicle_2_er']['id'] = 'field_sticker_to_vehicle_2_er';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_2_er']['table'] = 'field_data_field_sticker_to_vehicle_2_er';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_2_er']['field'] = 'field_sticker_to_vehicle_2_er';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_2_er']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sticker_to_vehicle_2_er']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sticker_to_vehicle_2_er']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Secondary Sticker */
  $handler->display->display_options['fields']['field_sticker_num_2']['id'] = 'field_sticker_num_2';
  $handler->display->display_options['fields']['field_sticker_num_2']['table'] = 'field_data_field_sticker_num_2';
  $handler->display->display_options['fields']['field_sticker_num_2']['field'] = 'field_sticker_num_2';
  $handler->display->display_options['fields']['field_sticker_num_2']['hide_empty'] = TRUE;
  /* Field: Field: VehYear */
  $handler->display->display_options['fields']['field_vehyear_2']['id'] = 'field_vehyear_2';
  $handler->display->display_options['fields']['field_vehyear_2']['table'] = 'field_data_field_vehyear';
  $handler->display->display_options['fields']['field_vehyear_2']['field'] = 'field_vehyear';
  $handler->display->display_options['fields']['field_vehyear_2']['relationship'] = 'field_sticker_to_vehicle_2_er_target_id';
  $handler->display->display_options['fields']['field_vehyear_2']['label'] = 'Secondary Vehicle - Year';
  $handler->display->display_options['fields']['field_vehyear_2']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_vehyear_2']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Vehicle Make */
  $handler->display->display_options['fields']['field_vehmake_tax_2']['id'] = 'field_vehmake_tax_2';
  $handler->display->display_options['fields']['field_vehmake_tax_2']['table'] = 'field_data_field_vehmake_tax';
  $handler->display->display_options['fields']['field_vehmake_tax_2']['field'] = 'field_vehmake_tax';
  $handler->display->display_options['fields']['field_vehmake_tax_2']['relationship'] = 'field_sticker_to_vehicle_2_er_target_id';
  $handler->display->display_options['fields']['field_vehmake_tax_2']['label'] = 'Secondary Vehicle - Make';
  $handler->display->display_options['fields']['field_vehmake_tax_2']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: VehModel */
  $handler->display->display_options['fields']['field_vehmodel_2']['id'] = 'field_vehmodel_2';
  $handler->display->display_options['fields']['field_vehmodel_2']['table'] = 'field_data_field_vehmodel';
  $handler->display->display_options['fields']['field_vehmodel_2']['field'] = 'field_vehmodel';
  $handler->display->display_options['fields']['field_vehmodel_2']['relationship'] = 'field_sticker_to_vehicle_2_er_target_id';
  $handler->display->display_options['fields']['field_vehmodel_2']['label'] = 'Secondary Vehicle - Model';
  $handler->display->display_options['fields']['field_vehmodel_2']['type'] = 'text_plain';
  /* Field: Content: Vehicle Color */
  $handler->display->display_options['fields']['field_vehcolor_tax_1']['id'] = 'field_vehcolor_tax_1';
  $handler->display->display_options['fields']['field_vehcolor_tax_1']['table'] = 'field_data_field_vehcolor_tax';
  $handler->display->display_options['fields']['field_vehcolor_tax_1']['field'] = 'field_vehcolor_tax';
  $handler->display->display_options['fields']['field_vehcolor_tax_1']['relationship'] = 'field_sticker_to_vehicle_2_er_target_id';
  $handler->display->display_options['fields']['field_vehcolor_tax_1']['label'] = 'Secondary Vehicle - Color';
  $handler->display->display_options['fields']['field_vehcolor_tax_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Vehicle Style */
  $handler->display->display_options['fields']['field_vehstyle_tax_1']['id'] = 'field_vehstyle_tax_1';
  $handler->display->display_options['fields']['field_vehstyle_tax_1']['table'] = 'field_data_field_vehstyle_tax';
  $handler->display->display_options['fields']['field_vehstyle_tax_1']['field'] = 'field_vehstyle_tax';
  $handler->display->display_options['fields']['field_vehstyle_tax_1']['relationship'] = 'field_sticker_to_vehicle_2_er_target_id';
  $handler->display->display_options['fields']['field_vehstyle_tax_1']['label'] = 'Secondary Vehicle - Style';
  $handler->display->display_options['fields']['field_vehstyle_tax_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Vehicle License Plate */
  $handler->display->display_options['fields']['field_vehlicnumber2_1']['id'] = 'field_vehlicnumber2_1';
  $handler->display->display_options['fields']['field_vehlicnumber2_1']['table'] = 'field_data_field_vehlicnumber2';
  $handler->display->display_options['fields']['field_vehlicnumber2_1']['field'] = 'field_vehlicnumber2';
  $handler->display->display_options['fields']['field_vehlicnumber2_1']['relationship'] = 'field_sticker_to_vehicle_2_er_target_id';
  $handler->display->display_options['fields']['field_vehlicnumber2_1']['label'] = 'Secondary Vehicle - License Plate';
  $handler->display->display_options['fields']['field_vehlicnumber2_1']['type'] = 'text_plain';
  /* Field: Content: State of Registration */
  $handler->display->display_options['fields']['field_vehlicstate2_1']['id'] = 'field_vehlicstate2_1';
  $handler->display->display_options['fields']['field_vehlicstate2_1']['table'] = 'field_data_field_vehlicstate2';
  $handler->display->display_options['fields']['field_vehlicstate2_1']['field'] = 'field_vehlicstate2';
  $handler->display->display_options['fields']['field_vehlicstate2_1']['relationship'] = 'field_sticker_to_vehicle_2_er_target_id';
  $handler->display->display_options['fields']['field_vehlicstate2_1']['label'] = 'Secondary Vehicle - State';
  /* Field: Content: Tertiary Vehicle */
  $handler->display->display_options['fields']['field_sticker_to_vehicle_3_er']['id'] = 'field_sticker_to_vehicle_3_er';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_3_er']['table'] = 'field_data_field_sticker_to_vehicle_3_er';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_3_er']['field'] = 'field_sticker_to_vehicle_3_er';
  $handler->display->display_options['fields']['field_sticker_to_vehicle_3_er']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sticker_to_vehicle_3_er']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sticker_to_vehicle_3_er']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Tertiary Sticker */
  $handler->display->display_options['fields']['field_sticker_num_3']['id'] = 'field_sticker_num_3';
  $handler->display->display_options['fields']['field_sticker_num_3']['table'] = 'field_data_field_sticker_num_3';
  $handler->display->display_options['fields']['field_sticker_num_3']['field'] = 'field_sticker_num_3';
  $handler->display->display_options['fields']['field_sticker_num_3']['hide_empty'] = TRUE;
  /* Field: Field: VehYear */
  $handler->display->display_options['fields']['field_vehyear_3']['id'] = 'field_vehyear_3';
  $handler->display->display_options['fields']['field_vehyear_3']['table'] = 'field_data_field_vehyear';
  $handler->display->display_options['fields']['field_vehyear_3']['field'] = 'field_vehyear';
  $handler->display->display_options['fields']['field_vehyear_3']['relationship'] = 'field_sticker_to_vehicle_3_er_target_id';
  $handler->display->display_options['fields']['field_vehyear_3']['label'] = 'Tertiary Vehicle - Year';
  $handler->display->display_options['fields']['field_vehyear_3']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_vehyear_3']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Vehicle Make */
  $handler->display->display_options['fields']['field_vehmake_tax_3']['id'] = 'field_vehmake_tax_3';
  $handler->display->display_options['fields']['field_vehmake_tax_3']['table'] = 'field_data_field_vehmake_tax';
  $handler->display->display_options['fields']['field_vehmake_tax_3']['field'] = 'field_vehmake_tax';
  $handler->display->display_options['fields']['field_vehmake_tax_3']['relationship'] = 'field_sticker_to_vehicle_3_er_target_id';
  $handler->display->display_options['fields']['field_vehmake_tax_3']['label'] = 'Tertiary Vehicle - Make';
  $handler->display->display_options['fields']['field_vehmake_tax_3']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: VehModel */
  $handler->display->display_options['fields']['field_vehmodel_3']['id'] = 'field_vehmodel_3';
  $handler->display->display_options['fields']['field_vehmodel_3']['table'] = 'field_data_field_vehmodel';
  $handler->display->display_options['fields']['field_vehmodel_3']['field'] = 'field_vehmodel';
  $handler->display->display_options['fields']['field_vehmodel_3']['relationship'] = 'field_sticker_to_vehicle_3_er_target_id';
  $handler->display->display_options['fields']['field_vehmodel_3']['label'] = 'Tertiary Vehicle - Model';
  $handler->display->display_options['fields']['field_vehmodel_3']['type'] = 'text_plain';
  /* Field: Content: Vehicle Color */
  $handler->display->display_options['fields']['field_vehcolor_tax_2']['id'] = 'field_vehcolor_tax_2';
  $handler->display->display_options['fields']['field_vehcolor_tax_2']['table'] = 'field_data_field_vehcolor_tax';
  $handler->display->display_options['fields']['field_vehcolor_tax_2']['field'] = 'field_vehcolor_tax';
  $handler->display->display_options['fields']['field_vehcolor_tax_2']['relationship'] = 'field_sticker_to_vehicle_3_er_target_id';
  $handler->display->display_options['fields']['field_vehcolor_tax_2']['label'] = 'Tertiary Vehicle - Color';
  $handler->display->display_options['fields']['field_vehcolor_tax_2']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Vehicle Style */
  $handler->display->display_options['fields']['field_vehstyle_tax_2']['id'] = 'field_vehstyle_tax_2';
  $handler->display->display_options['fields']['field_vehstyle_tax_2']['table'] = 'field_data_field_vehstyle_tax';
  $handler->display->display_options['fields']['field_vehstyle_tax_2']['field'] = 'field_vehstyle_tax';
  $handler->display->display_options['fields']['field_vehstyle_tax_2']['relationship'] = 'field_sticker_to_vehicle_3_er_target_id';
  $handler->display->display_options['fields']['field_vehstyle_tax_2']['label'] = 'Tertiary Vehicle - Style';
  $handler->display->display_options['fields']['field_vehstyle_tax_2']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Vehicle License Plate */
  $handler->display->display_options['fields']['field_vehlicnumber2_2']['id'] = 'field_vehlicnumber2_2';
  $handler->display->display_options['fields']['field_vehlicnumber2_2']['table'] = 'field_data_field_vehlicnumber2';
  $handler->display->display_options['fields']['field_vehlicnumber2_2']['field'] = 'field_vehlicnumber2';
  $handler->display->display_options['fields']['field_vehlicnumber2_2']['relationship'] = 'field_sticker_to_vehicle_3_er_target_id';
  $handler->display->display_options['fields']['field_vehlicnumber2_2']['label'] = 'Tertiary Vehicle - License Plate';
  $handler->display->display_options['fields']['field_vehlicnumber2_2']['type'] = 'text_plain';
  /* Field: Content: State of Registration */
  $handler->display->display_options['fields']['field_vehlicstate2_2']['id'] = 'field_vehlicstate2_2';
  $handler->display->display_options['fields']['field_vehlicstate2_2']['table'] = 'field_data_field_vehlicstate2';
  $handler->display->display_options['fields']['field_vehlicstate2_2']['field'] = 'field_vehlicstate2';
  $handler->display->display_options['fields']['field_vehlicstate2_2']['relationship'] = 'field_sticker_to_vehicle_3_er_target_id';
  $handler->display->display_options['fields']['field_vehlicstate2_2']['label'] = 'Tertiary Vehicle - State';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'permits-extract.csv';
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';
  $export['my_parking_permits'] = $view;

  $view = new view();
  $view->name = 'my_permit_pricing_info';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'My Permit Pricing Info';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'My Permit Pricing Info';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
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
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<script type="text/javascript">
jQuery(document).ready(function() {
  jQuery(\'#edit-field-authorization-select-und\').find(\'option\').not(\':first\').remove();
});
</script>
<table><thead><tr><th>System Error</th></tr></thead><tbody><tr class="odd views-row-first views-row-last"><td>A system error has been encountered while attempting to determine your Pre-Tax Pay Check Deductions. You may save your Parking Permit application and finalize it for submission to Public Safety upon resolution of this issue. Please contact Public Safety at <a href="mailto:parking@creighton.edu">parking@creighton.edu</a> or 402-280-2104.</td></tr></tbody></table>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html_plus_media';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: add_veh_amt */
  $handler->display->display_options['fields']['field_add_veh_amt_frct']['id'] = 'field_add_veh_amt_frct';
  $handler->display->display_options['fields']['field_add_veh_amt_frct']['table'] = 'field_data_field_add_veh_amt_frct';
  $handler->display->display_options['fields']['field_add_veh_amt_frct']['field'] = 'field_add_veh_amt_frct';
  $handler->display->display_options['fields']['field_add_veh_amt_frct']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_add_veh_amt_frct']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: deductions */
  $handler->display->display_options['fields']['field_deductions_frct']['id'] = 'field_deductions_frct';
  $handler->display->display_options['fields']['field_deductions_frct']['table'] = 'field_data_field_deductions_frct';
  $handler->display->display_options['fields']['field_deductions_frct']['field'] = 'field_deductions_frct';
  $handler->display->display_options['fields']['field_deductions_frct']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_deductions_frct']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: first_pymt_date */
  $handler->display->display_options['fields']['field_first_pymt_date_frct']['id'] = 'field_first_pymt_date_frct';
  $handler->display->display_options['fields']['field_first_pymt_date_frct']['table'] = 'field_data_field_first_pymt_date_frct';
  $handler->display->display_options['fields']['field_first_pymt_date_frct']['field'] = 'field_first_pymt_date_frct';
  $handler->display->display_options['fields']['field_first_pymt_date_frct']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_pymt_date_frct']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: ft_pt */
  $handler->display->display_options['fields']['field_ft_pt_frct']['id'] = 'field_ft_pt_frct';
  $handler->display->display_options['fields']['field_ft_pt_frct']['table'] = 'field_data_field_ft_pt_frct';
  $handler->display->display_options['fields']['field_ft_pt_frct']['field'] = 'field_ft_pt_frct';
  $handler->display->display_options['fields']['field_ft_pt_frct']['exclude'] = TRUE;
  /* Field: Content: last_appl_date */
  $handler->display->display_options['fields']['field_last_appl_date_frct']['id'] = 'field_last_appl_date_frct';
  $handler->display->display_options['fields']['field_last_appl_date_frct']['table'] = 'field_data_field_last_appl_date_frct';
  $handler->display->display_options['fields']['field_last_appl_date_frct']['field'] = 'field_last_appl_date_frct';
  $handler->display->display_options['fields']['field_last_appl_date_frct']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_appl_date_frct']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: pay_cycle */
  $handler->display->display_options['fields']['field_pay_cycle_frct']['id'] = 'field_pay_cycle_frct';
  $handler->display->display_options['fields']['field_pay_cycle_frct']['table'] = 'field_data_field_pay_cycle_frct';
  $handler->display->display_options['fields']['field_pay_cycle_frct']['field'] = 'field_pay_cycle_frct';
  $handler->display->display_options['fields']['field_pay_cycle_frct']['exclude'] = TRUE;
  /* Field: Content: permit_year */
  $handler->display->display_options['fields']['field_permit_year_frct']['id'] = 'field_permit_year_frct';
  $handler->display->display_options['fields']['field_permit_year_frct']['table'] = 'field_data_field_permit_year_frct';
  $handler->display->display_options['fields']['field_permit_year_frct']['field'] = 'field_permit_year_frct';
  $handler->display->display_options['fields']['field_permit_year_frct']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_permit_year_frct']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: person_type */
  $handler->display->display_options['fields']['field_person_type_frct']['id'] = 'field_person_type_frct';
  $handler->display->display_options['fields']['field_person_type_frct']['table'] = 'field_data_field_person_type_frct';
  $handler->display->display_options['fields']['field_person_type_frct']['field'] = 'field_person_type_frct';
  $handler->display->display_options['fields']['field_person_type_frct']['exclude'] = TRUE;
  /* Field: Content: total_amt */
  $handler->display->display_options['fields']['field_total_amt_frct']['id'] = 'field_total_amt_frct';
  $handler->display->display_options['fields']['field_total_amt_frct']['table'] = 'field_data_field_total_amt_frct';
  $handler->display->display_options['fields']['field_total_amt_frct']['field'] = 'field_total_amt_frct';
  $handler->display->display_options['fields']['field_total_amt_frct']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_total_amt_frct']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Pre-Tax Pay Check Deduction Authorization';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = 'By selecting "Finalize and Submit Parking Permit Application" below, I hereby certify the following:<br /><br />

I am currently employed <strong><?php echo $data->field_field_ft_pt_frct[0][\'rendered\'][\'#markup\']; ?></strong>.<br />
I am paid <strong><?php echo $data->field_field_pay_cycle_frct[0][\'rendered\'][\'#markup\']; ?></strong>.<br /><br />

My total permit fee for the current permit year is <strong>$<span id="permit-total-cost"><?php echo number_format($data->field_field_total_amt_frct[0][\'raw\'][\'value\'], 2); ?></span></strong>.<br /><br />

I authorize Creighton University to withhold <strong><span id="permit-num-pay-deductions"><?php echo $data->field_field_deductions_frct[0][\'raw\'][\'value\']; ?></span></strong> pre-tax deductions averaging <strong>$<span id="permit-cost-per-pay"><?php echo number_format(ceil(($data->field_field_total_amt_frct[0][\'raw\'][\'value\'] * 100) / $data->field_field_deductions_frct[0][\'raw\'][\'value\']) / 100, 2); ?></span></strong> per pay check. My deduction will continue unless I turn in my parking permit to the Department of Public Safety, my employment at Creighton University is terminated, or the total annual permit fee is fulfilled. I understand that once a deduction has occurred, that amount will not be refunded.<br /><span id="permit-add-cost" style="display: none;"><?php echo $data->field_field_add_veh_amt_frct[0][\'raw\'][\'value\']; ?></span><span id="permit-base-cost" style="display: none;"><?php echo $data->field_field_total_amt_frct[0][\'raw\'][\'value\']; ?></span>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Sort criterion: Content: last_appl_date (field_last_appl_date_frct) */
  $handler->display->display_options['sorts']['field_last_appl_date_frct_value']['id'] = 'field_last_appl_date_frct_value';
  $handler->display->display_options['sorts']['field_last_appl_date_frct_value']['table'] = 'field_data_field_last_appl_date_frct';
  $handler->display->display_options['sorts']['field_last_appl_date_frct_value']['field'] = 'field_last_appl_date_frct_value';
  /* Contextual filter: Content: permit_year (field_permit_year_frct) */
  $handler->display->display_options['arguments']['field_permit_year_frct_value']['id'] = 'field_permit_year_frct_value';
  $handler->display->display_options['arguments']['field_permit_year_frct_value']['table'] = 'field_data_field_permit_year_frct';
  $handler->display->display_options['arguments']['field_permit_year_frct_value']['field'] = 'field_permit_year_frct_value';
  $handler->display->display_options['arguments']['field_permit_year_frct_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_permit_year_frct_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_permit_year_frct_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_permit_year_frct_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_permit_year_frct_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_permit_year_frct_value']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['field_permit_year_frct_value']['validate_options']['code'] = 'if(is_numeric($argument)) {
  $term = taxonomy_term_load($argument);
} else {
  if ($node = menu_get_object()) {
    $term = taxonomy_term_load($node->field_permit_year_tax[\'und\'][0][\'target_id\']);
  }
}
// support friendly parking year terms e.g. 2017-2018
$targ = explode(\'-\', $term->name);
$handler->argument = $targ[1];
return TRUE;';
  $handler->display->display_options['arguments']['field_permit_year_frct_value']['validate']['fail'] = 'ignore';
  /* Contextual filter: Content: ft_pt (field_ft_pt_frct) */
  $handler->display->display_options['arguments']['field_ft_pt_frct_value']['id'] = 'field_ft_pt_frct_value';
  $handler->display->display_options['arguments']['field_ft_pt_frct_value']['table'] = 'field_data_field_ft_pt_frct';
  $handler->display->display_options['arguments']['field_ft_pt_frct_value']['field'] = 'field_ft_pt_frct_value';
  $handler->display->display_options['arguments']['field_ft_pt_frct_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_ft_pt_frct_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ft_pt_frct_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ft_pt_frct_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_ft_pt_frct_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_ft_pt_frct_value']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['field_ft_pt_frct_value']['validate_options']['code'] = 'if(stristr(current_path(), \'node/add\') === FALSE) {
  // node edit
  // load menu object
  if ($node = menu_get_object()) {
    $tgt_user = user_load($node->field_netid_ref[\'und\'][0][\'target_id\']);
  }
} else {
  //  node add
  if(is_numeric($argument)) {
    $tgt_user = user_load($argument);
  }
}
$handler->argument = $tgt_user->field_full_time_part_time[\'und\'][0][\'value\'];
return TRUE;';
  $handler->display->display_options['arguments']['field_ft_pt_frct_value']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['field_ft_pt_frct_value']['limit'] = '0';
  /* Contextual filter: Content: pay_cycle (field_pay_cycle_frct) */
  $handler->display->display_options['arguments']['field_pay_cycle_frct_value']['id'] = 'field_pay_cycle_frct_value';
  $handler->display->display_options['arguments']['field_pay_cycle_frct_value']['table'] = 'field_data_field_pay_cycle_frct';
  $handler->display->display_options['arguments']['field_pay_cycle_frct_value']['field'] = 'field_pay_cycle_frct_value';
  $handler->display->display_options['arguments']['field_pay_cycle_frct_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_pay_cycle_frct_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_pay_cycle_frct_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_pay_cycle_frct_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_pay_cycle_frct_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_pay_cycle_frct_value']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['field_pay_cycle_frct_value']['validate_options']['code'] = 'if(stristr(current_path(), \'node/add\') === FALSE) {
  // node edit
  // load menu object
  if ($node = menu_get_object()) {
    $tgt_user = user_load($node->field_netid_ref[\'und\'][0][\'target_id\']);
  }
} else {
  //  node add
  if(is_numeric($argument)) {
    $tgt_user = user_load($argument);
  }
}
$handler->argument = $tgt_user->field_payroll_type[\'und\'][0][\'value\'];
return TRUE;';
  $handler->display->display_options['arguments']['field_pay_cycle_frct_value']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['field_pay_cycle_frct_value']['limit'] = '0';
  /* Contextual filter: Content: person_type (field_person_type_frct) */
  $handler->display->display_options['arguments']['field_person_type_frct_value']['id'] = 'field_person_type_frct_value';
  $handler->display->display_options['arguments']['field_person_type_frct_value']['table'] = 'field_data_field_person_type_frct';
  $handler->display->display_options['arguments']['field_person_type_frct_value']['field'] = 'field_person_type_frct_value';
  $handler->display->display_options['arguments']['field_person_type_frct_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_person_type_frct_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_person_type_frct_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_person_type_frct_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_person_type_frct_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_person_type_frct_value']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['field_person_type_frct_value']['validate_options']['code'] = 'if(stristr(current_path(), \'node/add\') === FALSE) {
  // node edit
  // load menu object
  if ($node = menu_get_object()) {
    $tgt_user = user_load($node->field_netid_ref[\'und\'][0][\'target_id\']);
  }
} else {
  //  node add
  if(is_numeric($argument)) {
    $tgt_user = user_load($argument);
  }
}
$handler->argument = $tgt_user->field_person_type[\'und\'][0][\'value\'];
if($handler->argument == \'AD\' || $handler->argument == \'VP\') {
  $handler->argument = \'VP-D\';
}
return TRUE;';
  $handler->display->display_options['arguments']['field_person_type_frct_value']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['field_person_type_frct_value']['limit'] = '0';
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
    'fee_rate_ct' => 'fee_rate_ct',
  );
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';
  $handler->display->display_options['filters']['php']['use_php_setup'] = 1;
  $handler->display->display_options['filters']['php']['php_setup'] = '$static = 0;';
  $handler->display->display_options['filters']['php']['php_filter'] = '//return (strtotime($data->field_data_field_last_appl_date_frct_field_last_appl_date_fr) < strtotime("now"));
$appl_end = strtotime($data->field_data_field_last_appl_date_frct_field_last_appl_date_fr);
$appl_start = $static;
$static = $appl_end;

/*
if(stristr(current_path(), \'node/add\') === FALSE) {
  // node edit
  // load menu object
  if ($node = menu_get_object()) {
    $now_stamp = strtotime($node->date);
  }
} else {
  //  node add
  $now_stamp = strtotime("now");
}
*/

// use current timestamp as the date of parking permit submission to determine billing rate
// precision to day only to ensure correct fee is applied
$now_stamp = strtotime(date("Y-m-d"));

//return FALSE;
return (! ($now_stamp > $appl_start && $now_stamp <= $appl_end));';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'my-permit-pricing-info';

  /* Display: Rules */
  $handler = $view->new_display('views_rules', 'Rules', 'views_rules_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: add_veh_amt */
  $handler->display->display_options['fields']['field_add_veh_amt_frct']['id'] = 'field_add_veh_amt_frct';
  $handler->display->display_options['fields']['field_add_veh_amt_frct']['table'] = 'field_data_field_add_veh_amt_frct';
  $handler->display->display_options['fields']['field_add_veh_amt_frct']['field'] = 'field_add_veh_amt_frct';
  $handler->display->display_options['fields']['field_add_veh_amt_frct']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_add_veh_amt_frct']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: deductions */
  $handler->display->display_options['fields']['field_deductions_frct']['id'] = 'field_deductions_frct';
  $handler->display->display_options['fields']['field_deductions_frct']['table'] = 'field_data_field_deductions_frct';
  $handler->display->display_options['fields']['field_deductions_frct']['field'] = 'field_deductions_frct';
  $handler->display->display_options['fields']['field_deductions_frct']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_deductions_frct']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: ft_pt */
  $handler->display->display_options['fields']['field_ft_pt_frct']['id'] = 'field_ft_pt_frct';
  $handler->display->display_options['fields']['field_ft_pt_frct']['table'] = 'field_data_field_ft_pt_frct';
  $handler->display->display_options['fields']['field_ft_pt_frct']['field'] = 'field_ft_pt_frct';
  $handler->display->display_options['fields']['field_ft_pt_frct']['exclude'] = TRUE;
  /* Field: Content: last_appl_date */
  $handler->display->display_options['fields']['field_last_appl_date_frct']['id'] = 'field_last_appl_date_frct';
  $handler->display->display_options['fields']['field_last_appl_date_frct']['table'] = 'field_data_field_last_appl_date_frct';
  $handler->display->display_options['fields']['field_last_appl_date_frct']['field'] = 'field_last_appl_date_frct';
  $handler->display->display_options['fields']['field_last_appl_date_frct']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_last_appl_date_frct']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: pay_cycle */
  $handler->display->display_options['fields']['field_pay_cycle_frct']['id'] = 'field_pay_cycle_frct';
  $handler->display->display_options['fields']['field_pay_cycle_frct']['table'] = 'field_data_field_pay_cycle_frct';
  $handler->display->display_options['fields']['field_pay_cycle_frct']['field'] = 'field_pay_cycle_frct';
  $handler->display->display_options['fields']['field_pay_cycle_frct']['exclude'] = TRUE;
  /* Field: Content: permit_year */
  $handler->display->display_options['fields']['field_permit_year_frct']['id'] = 'field_permit_year_frct';
  $handler->display->display_options['fields']['field_permit_year_frct']['table'] = 'field_data_field_permit_year_frct';
  $handler->display->display_options['fields']['field_permit_year_frct']['field'] = 'field_permit_year_frct';
  $handler->display->display_options['fields']['field_permit_year_frct']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_permit_year_frct']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: person_type */
  $handler->display->display_options['fields']['field_person_type_frct']['id'] = 'field_person_type_frct';
  $handler->display->display_options['fields']['field_person_type_frct']['table'] = 'field_data_field_person_type_frct';
  $handler->display->display_options['fields']['field_person_type_frct']['field'] = 'field_person_type_frct';
  $handler->display->display_options['fields']['field_person_type_frct']['exclude'] = TRUE;
  /* Field: Content: total_amt */
  $handler->display->display_options['fields']['field_total_amt_frct']['id'] = 'field_total_amt_frct';
  $handler->display->display_options['fields']['field_total_amt_frct']['table'] = 'field_data_field_total_amt_frct';
  $handler->display->display_options['fields']['field_total_amt_frct']['field'] = 'field_total_amt_frct';
  $handler->display->display_options['fields']['field_total_amt_frct']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_total_amt_frct']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Pre-Tax Pay Check Deduction Authorization';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = 'By selecting "Finalize and Submit Parking Permit Application" below, I hereby certify the following:<br /><br />

I am currently employed <strong><?php echo $data->field_field_ft_pt_frct[0][\'rendered\'][\'#markup\']; ?></strong>.<br />
I am paid <strong><?php echo $data->field_field_pay_cycle_frct[0][\'rendered\'][\'#markup\']; ?></strong>.<br /><br />

My total permit fee for the current permit year is <strong>$<span id="permit-total-cost"><?php echo number_format($data->field_field_total_amt_frct[0][\'raw\'][\'value\'], 2); ?></span></strong>.<br /><br />

I authorize Creighton University to withhold <strong><span id="permit-num-pay-deductions"><?php echo $data->field_field_deductions_frct[0][\'raw\'][\'value\']; ?></span></strong> pre-tax deductions averaging <strong>$<span id="permit-cost-per-pay"><?php echo number_format(ceil(($data->field_field_total_amt_frct[0][\'raw\'][\'value\'] * 100) / $data->field_field_deductions_frct[0][\'raw\'][\'value\']) / 100, 2); ?></span></strong> per pay check. My deduction will continue unless I turn in my parking permit to the Department of Public Safety, my employment at Creighton University is terminated, or the total annual permit fee is fulfilled. I understand that once a deduction has occurred, that amount will not be refunded.<br /><span id="permit-add-cost" style="display: none;"><?php echo $data->field_field_add_veh_amt_frct[0][\'raw\'][\'value\']; ?></span><span id="permit-base-cost" style="display: none;"><?php echo $data->field_field_total_amt_frct[0][\'raw\'][\'value\']; ?></span>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: first_pymt_date */
  $handler->display->display_options['fields']['field_first_pymt_date_frct_1']['id'] = 'field_first_pymt_date_frct_1';
  $handler->display->display_options['fields']['field_first_pymt_date_frct_1']['table'] = 'field_data_field_first_pymt_date_frct';
  $handler->display->display_options['fields']['field_first_pymt_date_frct_1']['field'] = 'field_first_pymt_date_frct';
  $handler->display->display_options['fields']['field_first_pymt_date_frct_1']['label'] = '';
  $handler->display->display_options['fields']['field_first_pymt_date_frct_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_first_pymt_date_frct_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_first_pymt_date_frct_1']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_first_pymt_date_frct_1']['settings'] = array(
    'format_type' => 'us_standard_date_only_',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_value'] = 'return date("Y-m-d h:i:s a");';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  $handler->display->display_options['rules_parameter'] = array(
    'field_permit_year_frct_value' => array(
      'enabled' => 1,
      'type' => 'integer',
      'label' => 'Content: permit_year (field_permit_year_frct)',
      'name' => 'field_permit_year_frct_value',
    ),
    'field_ft_pt_frct_value' => array(
      'enabled' => 1,
      'type' => 'integer',
      'label' => 'Content: ft_pt (field_ft_pt_frct)',
      'name' => 'field_ft_pt_frct_value',
    ),
    'field_pay_cycle_frct_value' => array(
      'enabled' => 1,
      'type' => 'integer',
      'label' => 'Content: pay_cycle (field_pay_cycle_frct)',
      'name' => 'field_pay_cycle_frct_value',
    ),
    'field_person_type_frct_value' => array(
      'enabled' => 1,
      'type' => 'integer',
      'label' => 'Content: person_type (field_person_type_frct)',
      'name' => 'field_person_type_frct_value',
    ),
  );
  $handler->display->display_options['rules_variables'] = array(
    'title' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => 'text',
      'label' => 'Content: Title',
      'name' => 'title',
    ),
    'field_add_veh_amt_frct' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'add_veh_amt',
      'name' => 'field_add_veh_amt_frct',
    ),
    'field_deductions_frct' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'deductions',
      'name' => 'field_deductions_frct',
    ),
    'field_first_pymt_date_frct' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'date',
      'label' => 'first_pymt_date',
      'name' => 'field_first_pymt_date_frct',
    ),
    'field_ft_pt_frct' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'ft_pt',
      'name' => 'field_ft_pt_frct',
    ),
    'field_last_appl_date_frct' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'date',
      'label' => 'last_appl_date',
      'name' => 'field_last_appl_date_frct',
    ),
    'field_pay_cycle_frct' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'pay_cycle',
      'name' => 'field_pay_cycle_frct',
    ),
    'field_permit_year_frct' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'permit_year',
      'name' => 'field_permit_year_frct',
    ),
    'field_person_type_frct' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'person_type',
      'name' => 'field_person_type_frct',
    ),
    'field_total_amt_frct' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'integer',
      'label' => 'total_amt',
      'name' => 'field_total_amt_frct',
    ),
    'php' => array(
      'enabled' => 0,
      'rendered' => 0,
      'type' => '',
      'label' => 'Pre-Tax Pay Check Deduction Authorization',
      'name' => 'php',
    ),
    'field_first_pymt_date_frct_1' => array(
      'enabled' => 1,
      'rendered' => 1,
      'type' => 'text',
      'label' => 'first_pymt_date plain',
      'name' => 'field_first_pymt_date_frct_1',
    ),
    'php_1' => array(
      'enabled' => 1,
      'rendered' => 0,
      'type' => 'text',
      'label' => 'PHP',
      'name' => 'php_1',
    ),
  );
  $export['my_permit_pricing_info'] = $view;

  $view = new view();
  $view->name = 'my_vehicles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'My Vehicles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
    7 => '7',
    8 => '8',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_vehyear' => 'field_vehyear',
    'field_vehmake2' => 'field_vehmake2',
    'field_vehmodel' => 'field_vehmodel',
    'field_vehstyle' => 'field_vehstyle',
    'nothing' => 'nothing',
    'field_vehcolor2' => 'field_vehcolor2',
    'field_vehlicstate2' => 'field_vehlicstate2',
    'field_vehlicnumber' => 'field_vehlicnumber',
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
    'field_vehyear' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehmake2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehmodel' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehstyle' => array(
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
    'field_vehcolor2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehlicstate2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vehlicnumber' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '<p>Tell us about what you drive. <strong>NOTE: Please have your license plate number(s) at hand.</strong></p>
<?php
/*
  if(strlen($view->args[0])) {
    $tgt_user = user_load_by_name($view->args[0]);
  } else {
    global $user;
    $tgt_user = $user;
  }
*/
    global $user;
    $tgt_user = $user;
?>
<a href="<?php echo base_path(); ?>node/add/automobile?field_netid_ref=<?php echo $tgt_user->uid; ?>&destination=<?php echo current_path(); ?>" class="parking-button" id="parking-button-vehicle-add" role="button">+ Add Vehicle</a>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<em>No vehicles listed</em>';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area_1']['id'] = 'area_1';
  $handler->display->display_options['empty']['area_1']['table'] = 'views';
  $handler->display->display_options['empty']['area_1']['field'] = 'area';
  $handler->display->display_options['empty']['area_1']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_1']['content'] = '<script type="text/javascript">
jQuery(document).ready(function() {
  jQuery("a#parking-button-permit-add").removeAttr("href");
});
</script>
<style type="text/css">
a#parking-button-permit-add {
  background-color: rgba(0, 0, 0, 0.51);
}
a#parking-button-permit-add:hover, a#parking-button-permit-add:active {
  background-color: rgba(0, 0, 0, 0.51);
  cursor: not-allowed;
  text-decoration: none;
}
</style>';
  $handler->display->display_options['empty']['area_1']['format'] = 'full_html_plus_media';
  /* Field: Field: Vehicle Year */
  $handler->display->display_options['fields']['field_vehyear']['id'] = 'field_vehyear';
  $handler->display->display_options['fields']['field_vehyear']['table'] = 'field_data_field_vehyear';
  $handler->display->display_options['fields']['field_vehyear']['field'] = 'field_vehyear';
  $handler->display->display_options['fields']['field_vehyear']['label'] = '';
  $handler->display->display_options['fields']['field_vehyear']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vehyear']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vehyear']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Vehicle Make */
  $handler->display->display_options['fields']['field_vehmake_tax']['id'] = 'field_vehmake_tax';
  $handler->display->display_options['fields']['field_vehmake_tax']['table'] = 'field_data_field_vehmake_tax';
  $handler->display->display_options['fields']['field_vehmake_tax']['field'] = 'field_vehmake_tax';
  $handler->display->display_options['fields']['field_vehmake_tax']['label'] = '';
  $handler->display->display_options['fields']['field_vehmake_tax']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vehmake_tax']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vehmake_tax']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Vehicle Model */
  $handler->display->display_options['fields']['field_vehmodel']['id'] = 'field_vehmodel';
  $handler->display->display_options['fields']['field_vehmodel']['table'] = 'field_data_field_vehmodel';
  $handler->display->display_options['fields']['field_vehmodel']['field'] = 'field_vehmodel';
  $handler->display->display_options['fields']['field_vehmodel']['label'] = '';
  $handler->display->display_options['fields']['field_vehmodel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vehmodel']['element_label_colon'] = FALSE;
  /* Field: Content: Vehicle Color */
  $handler->display->display_options['fields']['field_vehcolor_tax']['id'] = 'field_vehcolor_tax';
  $handler->display->display_options['fields']['field_vehcolor_tax']['table'] = 'field_data_field_vehcolor_tax';
  $handler->display->display_options['fields']['field_vehcolor_tax']['field'] = 'field_vehcolor_tax';
  $handler->display->display_options['fields']['field_vehcolor_tax']['label'] = '';
  $handler->display->display_options['fields']['field_vehcolor_tax']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vehcolor_tax']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vehcolor_tax']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Vehicle Style */
  $handler->display->display_options['fields']['field_vehstyle_tax']['id'] = 'field_vehstyle_tax';
  $handler->display->display_options['fields']['field_vehstyle_tax']['table'] = 'field_data_field_vehstyle_tax';
  $handler->display->display_options['fields']['field_vehstyle_tax']['field'] = 'field_vehstyle_tax';
  $handler->display->display_options['fields']['field_vehstyle_tax']['label'] = '';
  $handler->display->display_options['fields']['field_vehstyle_tax']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vehstyle_tax']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vehstyle_tax']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Vehicle';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_vehyear] [field_vehmake_tax] [field_vehmodel] ([field_vehcolor_tax] [field_vehstyle_tax])';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: State of Registration */
  $handler->display->display_options['fields']['field_vehlicstate2']['id'] = 'field_vehlicstate2';
  $handler->display->display_options['fields']['field_vehlicstate2']['table'] = 'field_data_field_vehlicstate2';
  $handler->display->display_options['fields']['field_vehlicstate2']['field'] = 'field_vehlicstate2';
  /* Field: Content: Vehicle License Plate */
  $handler->display->display_options['fields']['field_vehlicnumber2']['id'] = 'field_vehlicnumber2';
  $handler->display->display_options['fields']['field_vehlicnumber2']['table'] = 'field_data_field_vehlicnumber2';
  $handler->display->display_options['fields']['field_vehlicnumber2']['field'] = 'field_vehlicnumber2';
  $handler->display->display_options['fields']['field_vehlicnumber2']['label'] = 'License Plate';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Sort criterion: Field: Vehicle Year (field_vehyear) */
  $handler->display->display_options['sorts']['field_vehyear_value']['id'] = 'field_vehyear_value';
  $handler->display->display_options['sorts']['field_vehyear_value']['table'] = 'field_data_field_vehyear';
  $handler->display->display_options['sorts']['field_vehyear_value']['field'] = 'field_vehyear_value';
  $handler->display->display_options['sorts']['field_vehyear_value']['order'] = 'DESC';
  /* Contextual filter: Content: NetID ref (field_netid_ref) */
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['id'] = 'field_netid_ref_target_id';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['table'] = 'field_data_field_netid_ref';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['field'] = 'field_netid_ref_target_id';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['validate']['type'] = 'user';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['validate_options']['type'] = 'either';
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
    'automobile' => 'automobile',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'nothing' => 'nothing',
    'field_vehyear' => 0,
    'field_vehmake2' => 0,
    'field_vehmodel' => 0,
    'field_vehstyle' => 0,
    'field_vehcolor2' => 0,
    'field_vehlicstate2' => 0,
    'field_vehlicnumber' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'nothing' => 'nothing',
    'field_vehcolor_tax' => 'field_vehcolor_tax',
    'field_vehstyle_tax' => 'field_vehstyle_tax',
    'field_vehlicnumber' => 'field_vehlicnumber',
    'field_vehlicstate2' => 'field_vehlicstate2',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Vehicle Year */
  $handler->display->display_options['fields']['field_vehyear']['id'] = 'field_vehyear';
  $handler->display->display_options['fields']['field_vehyear']['table'] = 'field_data_field_vehyear';
  $handler->display->display_options['fields']['field_vehyear']['field'] = 'field_vehyear';
  $handler->display->display_options['fields']['field_vehyear']['label'] = '';
  $handler->display->display_options['fields']['field_vehyear']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vehyear']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vehyear']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Vehicle Make */
  $handler->display->display_options['fields']['field_vehmake_tax']['id'] = 'field_vehmake_tax';
  $handler->display->display_options['fields']['field_vehmake_tax']['table'] = 'field_data_field_vehmake_tax';
  $handler->display->display_options['fields']['field_vehmake_tax']['field'] = 'field_vehmake_tax';
  $handler->display->display_options['fields']['field_vehmake_tax']['label'] = '';
  $handler->display->display_options['fields']['field_vehmake_tax']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vehmake_tax']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vehmake_tax']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field: Vehicle Model */
  $handler->display->display_options['fields']['field_vehmodel']['id'] = 'field_vehmodel';
  $handler->display->display_options['fields']['field_vehmodel']['table'] = 'field_data_field_vehmodel';
  $handler->display->display_options['fields']['field_vehmodel']['field'] = 'field_vehmodel';
  $handler->display->display_options['fields']['field_vehmodel']['label'] = '';
  $handler->display->display_options['fields']['field_vehmodel']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vehmodel']['element_label_colon'] = FALSE;
  /* Field: Content: Vehicle Color */
  $handler->display->display_options['fields']['field_vehcolor_tax']['id'] = 'field_vehcolor_tax';
  $handler->display->display_options['fields']['field_vehcolor_tax']['table'] = 'field_data_field_vehcolor_tax';
  $handler->display->display_options['fields']['field_vehcolor_tax']['field'] = 'field_vehcolor_tax';
  $handler->display->display_options['fields']['field_vehcolor_tax']['label'] = '';
  $handler->display->display_options['fields']['field_vehcolor_tax']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vehcolor_tax']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vehcolor_tax']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Vehicle Style */
  $handler->display->display_options['fields']['field_vehstyle_tax']['id'] = 'field_vehstyle_tax';
  $handler->display->display_options['fields']['field_vehstyle_tax']['table'] = 'field_data_field_vehstyle_tax';
  $handler->display->display_options['fields']['field_vehstyle_tax']['field'] = 'field_vehstyle_tax';
  $handler->display->display_options['fields']['field_vehstyle_tax']['label'] = '';
  $handler->display->display_options['fields']['field_vehstyle_tax']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vehstyle_tax']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vehstyle_tax']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_vehyear] [field_vehmake_tax] [field_vehmodel] ([field_vehcolor_tax] [field_vehstyle_tax])';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Vehicle License Plate */
  $handler->display->display_options['fields']['field_vehlicnumber2']['id'] = 'field_vehlicnumber2';
  $handler->display->display_options['fields']['field_vehlicnumber2']['table'] = 'field_data_field_vehlicnumber2';
  $handler->display->display_options['fields']['field_vehlicnumber2']['field'] = 'field_vehlicnumber2';
  $handler->display->display_options['fields']['field_vehlicnumber2']['label'] = '';
  $handler->display->display_options['fields']['field_vehlicnumber2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_vehlicnumber2']['alter']['text'] = '- [field_vehlicnumber2]';
  $handler->display->display_options['fields']['field_vehlicnumber2']['element_label_colon'] = FALSE;
  /* Field: Content: State of Registration */
  $handler->display->display_options['fields']['field_vehlicstate2']['id'] = 'field_vehlicstate2';
  $handler->display->display_options['fields']['field_vehlicstate2']['table'] = 'field_data_field_vehlicstate2';
  $handler->display->display_options['fields']['field_vehlicstate2']['field'] = 'field_vehlicstate2';
  $handler->display->display_options['fields']['field_vehlicstate2']['label'] = '';
  $handler->display->display_options['fields']['field_vehlicstate2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_vehlicstate2']['alter']['text'] = '([field_vehlicstate2])';
  $handler->display->display_options['fields']['field_vehlicstate2']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: NetID ref (field_netid_ref) */
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['id'] = 'field_netid_ref_target_id';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['table'] = 'field_data_field_netid_ref';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['field'] = 'field_netid_ref_target_id';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['default_action'] = 'access denied';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['validate_options']['code'] = 'if(user_load($argument) === FALSE) {
  if ($node = menu_get_object()) {
    $handler->argument = $node->field_netid_ref[\'und\'][0][\'target_id\'];
  }
}
return TRUE;';
  $handler->display->display_options['arguments']['field_netid_ref_target_id']['validate']['fail'] = 'access denied';
  $export['my_vehicles'] = $view;

  $view = new view();
  $view->name = 'pbl_extract';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'PBL extract';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'PBL extract';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    7 => '7',
    8 => '8',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_netid_ref_target_id']['id'] = 'field_netid_ref_target_id';
  $handler->display->display_options['relationships']['field_netid_ref_target_id']['table'] = 'field_data_field_netid_ref';
  $handler->display->display_options['relationships']['field_netid_ref_target_id']['field'] = 'field_netid_ref_target_id';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Fee First Payment Date */
  $handler->display->display_options['fields']['field_fee_first_payment_date']['id'] = 'field_fee_first_payment_date';
  $handler->display->display_options['fields']['field_fee_first_payment_date']['table'] = 'field_data_field_fee_first_payment_date';
  $handler->display->display_options['fields']['field_fee_first_payment_date']['field'] = 'field_fee_first_payment_date';
  $handler->display->display_options['fields']['field_fee_first_payment_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fee_first_payment_date']['type'] = 'text_plain';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Effective Start Date';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
  echo date(\'Ymd\', strtotime($data->_field_data[\'nid\'][\'entity\']->field_fee_first_payment_date[\'und\'][0][\'value\']));
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: User: Employee number */
  $handler->display->display_options['fields']['field_employee_number']['id'] = 'field_employee_number';
  $handler->display->display_options['fields']['field_employee_number']['table'] = 'field_data_field_employee_number';
  $handler->display->display_options['fields']['field_employee_number']['field'] = 'field_employee_number';
  $handler->display->display_options['fields']['field_employee_number']['relationship'] = 'field_netid_ref_target_id';
  $handler->display->display_options['fields']['field_employee_number']['label'] = 'Person Number';
  /* Field: Content: Fee Deduction Amt */
  $handler->display->display_options['fields']['field_fee_deduction_amt']['id'] = 'field_fee_deduction_amt';
  $handler->display->display_options['fields']['field_fee_deduction_amt']['table'] = 'field_data_field_fee_deduction_amt';
  $handler->display->display_options['fields']['field_fee_deduction_amt']['field'] = 'field_fee_deduction_amt';
  $handler->display->display_options['fields']['field_fee_deduction_amt']['label'] = 'Amount';
  $handler->display->display_options['fields']['field_fee_deduction_amt']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Fee Total Amt */
  $handler->display->display_options['fields']['field_fee_total_amt']['id'] = 'field_fee_total_amt';
  $handler->display->display_options['fields']['field_fee_total_amt']['table'] = 'field_data_field_fee_total_amt';
  $handler->display->display_options['fields']['field_fee_total_amt']['field'] = 'field_fee_total_amt';
  $handler->display->display_options['fields']['field_fee_total_amt']['label'] = 'Total Owed';
  $handler->display->display_options['fields']['field_fee_total_amt']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'Ded Amt Rounded Up';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php

echo ceil(($data->_field_data[\'nid\'][\'entity\']->field_fee_total_amt[\'und\'][0][\'value\'] * 100) / arg(count(arg()) - 1)) / 100;

?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  /* Contextual filter: Content: Fee Pay Cycle (field_fee_pay_cycle) */
  $handler->display->display_options['arguments']['field_fee_pay_cycle_value']['id'] = 'field_fee_pay_cycle_value';
  $handler->display->display_options['arguments']['field_fee_pay_cycle_value']['table'] = 'field_data_field_fee_pay_cycle';
  $handler->display->display_options['arguments']['field_fee_pay_cycle_value']['field'] = 'field_fee_pay_cycle_value';
  $handler->display->display_options['arguments']['field_fee_pay_cycle_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_fee_pay_cycle_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_fee_pay_cycle_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_fee_pay_cycle_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_fee_pay_cycle_value']['limit'] = '0';
  /* Contextual filter: Content: Fee First Payment Date (field_fee_first_payment_date) */
  $handler->display->display_options['arguments']['field_fee_first_payment_date_value']['id'] = 'field_fee_first_payment_date_value';
  $handler->display->display_options['arguments']['field_fee_first_payment_date_value']['table'] = 'field_data_field_fee_first_payment_date';
  $handler->display->display_options['arguments']['field_fee_first_payment_date_value']['field'] = 'field_fee_first_payment_date_value';
  $handler->display->display_options['arguments']['field_fee_first_payment_date_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_fee_first_payment_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_fee_first_payment_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_fee_first_payment_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_fee_first_payment_date_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_fee_first_payment_date_value']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['field_fee_first_payment_date_value']['validate_options']['code'] = '$handler->argument = $argument . \'T00:00:00\';
return TRUE;';
  $handler->display->display_options['arguments']['field_fee_first_payment_date_value']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['field_fee_first_payment_date_value']['limit'] = '0';
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
    'permit2' => 'permit2',
  );
  /* Filter criterion: Content: Authorization (field_authorization_select) */
  $handler->display->display_options['filters']['field_authorization_select_value']['id'] = 'field_authorization_select_value';
  $handler->display->display_options['filters']['field_authorization_select_value']['table'] = 'field_data_field_authorization_select';
  $handler->display->display_options['filters']['field_authorization_select_value']['field'] = 'field_authorization_select_value';
  $handler->display->display_options['filters']['field_authorization_select_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'pbl-extract';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'pbl-extract_%1-value_%2-value.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Changed';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Flagged';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'Status';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = 'Batch Line Status';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'Line Sequence';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: Content: Fee First Payment Date */
  $handler->display->display_options['fields']['field_fee_first_payment_date']['id'] = 'field_fee_first_payment_date';
  $handler->display->display_options['fields']['field_fee_first_payment_date']['table'] = 'field_data_field_fee_first_payment_date';
  $handler->display->display_options['fields']['field_fee_first_payment_date']['field'] = 'field_fee_first_payment_date';
  $handler->display->display_options['fields']['field_fee_first_payment_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fee_first_payment_date']['type'] = 'text_plain';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Effective Start Date';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
  echo date(\'Ymd\', strtotime($data->_field_data[\'nid\'][\'entity\']->field_fee_first_payment_date[\'und\'][0][\'value\'] . " -7 days"));
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['label'] = 'Effective End Date';
  /* Field: User: Employee number */
  $handler->display->display_options['fields']['field_employee_number']['id'] = 'field_employee_number';
  $handler->display->display_options['fields']['field_employee_number']['table'] = 'field_data_field_employee_number';
  $handler->display->display_options['fields']['field_employee_number']['field'] = 'field_employee_number';
  $handler->display->display_options['fields']['field_employee_number']['relationship'] = 'field_netid_ref_target_id';
  $handler->display->display_options['fields']['field_employee_number']['label'] = 'Person Number';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_5']['id'] = 'nothing_5';
  $handler->display->display_options['fields']['nothing_5']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_5']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_5']['label'] = 'Assignment Number';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_6']['id'] = 'nothing_6';
  $handler->display->display_options['fields']['nothing_6']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_6']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_6']['label'] = 'Terms Number';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_7']['id'] = 'nothing_7';
  $handler->display->display_options['fields']['nothing_7']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_7']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_7']['label'] = 'Relationship Number';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_8']['id'] = 'nothing_8';
  $handler->display->display_options['fields']['nothing_8']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_8']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_8']['label'] = 'Payroll';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_9']['id'] = 'nothing_9';
  $handler->display->display_options['fields']['nothing_9']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_9']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_9']['label'] = 'Reason';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_10']['id'] = 'nothing_10';
  $handler->display->display_options['fields']['nothing_10']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_10']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_10']['label'] = 'Subpriority';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_11']['id'] = 'nothing_11';
  $handler->display->display_options['fields']['nothing_11']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_11']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_11']['label'] = 'Pay Value';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'Amount';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php

echo ceil(($data->_field_data[\'nid\'][\'entity\']->field_fee_total_amt[\'und\'][0][\'value\'] * 100) / arg(count(arg()) - 1)) / 100;

?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_13']['id'] = 'nothing_13';
  $handler->display->display_options['fields']['nothing_13']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_13']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_13']['label'] = 'Period Type';
  $handler->display->display_options['fields']['nothing_13']['alter']['text'] = 'PRD';
  /* Field: Content: Fee Total Amt */
  $handler->display->display_options['fields']['field_fee_total_amt']['id'] = 'field_fee_total_amt';
  $handler->display->display_options['fields']['field_fee_total_amt']['table'] = 'field_data_field_fee_total_amt';
  $handler->display->display_options['fields']['field_fee_total_amt']['field'] = 'field_fee_total_amt';
  $handler->display->display_options['fields']['field_fee_total_amt']['label'] = 'Total Owed';
  $handler->display->display_options['fields']['field_fee_total_amt']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_12']['id'] = 'nothing_12';
  $handler->display->display_options['fields']['nothing_12']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_12']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_12']['label'] = 'Towards Owed';
  $handler->display->display_options['fields']['nothing_12']['alter']['text'] = 'Y';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_14']['id'] = 'nothing_14';
  $handler->display->display_options['fields']['nothing_14']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_14']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_14']['label'] = 'Threshold Amount';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_15']['id'] = 'nothing_15';
  $handler->display->display_options['fields']['nothing_15']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_15']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_15']['label'] = 'Clear Arrears';
  $handler->display->display_options['fields']['nothing_15']['alter']['text'] = 'N';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_16']['id'] = 'nothing_16';
  $handler->display->display_options['fields']['nothing_16']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_16']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_16']['label'] = 'Deduction Start';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_17']['id'] = 'nothing_17';
  $handler->display->display_options['fields']['nothing_17']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_17']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_17']['label'] = 'Partial Flag';
  $handler->display->display_options['fields']['nothing_17']['alter']['text'] = 'Y';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_18']['id'] = 'nothing_18';
  $handler->display->display_options['fields']['nothing_18']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_18']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_18']['label'] = 'Maximum Amount';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_19']['id'] = 'nothing_19';
  $handler->display->display_options['fields']['nothing_19']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_19']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_19']['label'] = 'Fund';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_20']['id'] = 'nothing_20';
  $handler->display->display_options['fields']['nothing_20']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_20']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_20']['label'] = 'Organization';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_21']['id'] = 'nothing_21';
  $handler->display->display_options['fields']['nothing_21']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_21']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_21']['label'] = 'Account';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_22']['id'] = 'nothing_22';
  $handler->display->display_options['fields']['nothing_22']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_22']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_22']['label'] = 'Override Entry';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_23']['id'] = 'nothing_23';
  $handler->display->display_options['fields']['nothing_23']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_23']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_23']['label'] = 'Message';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_24']['id'] = 'nothing_24';
  $handler->display->display_options['fields']['nothing_24']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_24']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_24']['label'] = 'Key';
  $handler->display->display_options['path'] = 'pbl-extract-csv';
  $export['pbl_extract'] = $view;

  $view = new view();
  $view->name = 'permitbpl';
  $view->description = 'Parking Permits BPL file format view';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'PermitBPL';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'PermitBPL';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Employee number */
  $handler->display->display_options['fields']['field_employee_number']['id'] = 'field_employee_number';
  $handler->display->display_options['fields']['field_employee_number']['table'] = 'field_data_field_employee_number';
  $handler->display->display_options['fields']['field_employee_number']['field'] = 'field_employee_number';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'boilerplate';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['path'] = 'permitbpl';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Employee Name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Employee number */
  $handler->display->display_options['fields']['field_employee_number']['id'] = 'field_employee_number';
  $handler->display->display_options['fields']['field_employee_number']['table'] = 'field_data_field_employee_number';
  $handler->display->display_options['fields']['field_employee_number']['field'] = 'field_employee_number';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Effective Start Date';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '19700724';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Effective End Date';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = 'Assignment Number';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = 'Terms Number';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['label'] = 'Relationship Number';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_5']['id'] = 'nothing_5';
  $handler->display->display_options['fields']['nothing_5']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_5']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_5']['label'] = 'Payroll';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_6']['id'] = 'nothing_6';
  $handler->display->display_options['fields']['nothing_6']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_6']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_6']['label'] = 'Reason';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_7']['id'] = 'nothing_7';
  $handler->display->display_options['fields']['nothing_7']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_7']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_7']['label'] = 'Subpriority';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_8']['id'] = 'nothing_8';
  $handler->display->display_options['fields']['nothing_8']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_8']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_8']['label'] = 'Subpriority';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_9']['id'] = 'nothing_9';
  $handler->display->display_options['fields']['nothing_9']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_9']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_9']['label'] = 'Amount';
  $handler->display->display_options['fields']['nothing_9']['alter']['text'] = '32.15';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_10']['id'] = 'nothing_10';
  $handler->display->display_options['fields']['nothing_10']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_10']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_10']['label'] = 'Period type';
  $handler->display->display_options['fields']['nothing_10']['alter']['text'] = 'PRD';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_11']['id'] = 'nothing_11';
  $handler->display->display_options['fields']['nothing_11']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_11']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_11']['label'] = 'Total Owed';
  $handler->display->display_options['fields']['nothing_11']['alter']['text'] = '360.00';
  $handler->display->display_options['path'] = 'bpl_download';
  $export['permitbpl'] = $view;

  return $export;
}
