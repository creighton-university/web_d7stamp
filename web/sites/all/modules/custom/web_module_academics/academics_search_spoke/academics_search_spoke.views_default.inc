<?php
/**
 * @file
 * academics_search_spoke.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function academics_search_spoke_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'spoke_view_program_description_search';
  $view->description = 'Search Program Descriptions';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_program_details_search';
  $view->human_name = 'Academics Search Program Description';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Program Search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h2 class="special">ACADEMIC PROGRAMS SEARCH RESULTS</h2>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Your program search term has 0 results.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_program_details_search';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'program/[title]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Pgm Details Description: Text (indexed) */
  $handler->display->display_options['fields']['field_pgm_details_description_value']['id'] = 'field_pgm_details_description_value';
  $handler->display->display_options['fields']['field_pgm_details_description_value']['table'] = 'search_api_index_program_details_search';
  $handler->display->display_options['fields']['field_pgm_details_description_value']['field'] = 'field_pgm_details_description_value';
  $handler->display->display_options['fields']['field_pgm_details_description_value']['label'] = '';
  $handler->display->display_options['fields']['field_pgm_details_description_value']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_pgm_details_description_value']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_pgm_details_description_value']['alter']['preserve_tags'] = '<strong></strong>';
  $handler->display->display_options['fields']['field_pgm_details_description_value']['element_type'] = '0';
  $handler->display->display_options['fields']['field_pgm_details_description_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pgm_details_description_value']['link_to_entity'] = 0;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_program_details_search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'term';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['group_info']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group_info']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'field_pgm_details_description:value' => 'field_pgm_details_description:value',
    'title' => 'title',
  );

  /* Display: Page (remote) */
  $handler = $view->new_display('remote_page', 'Page (remote)', 'remote_page_hub');
  $handler->display->display_options['path'] = 'program-search';
  $handler->display->display_options['remote_database'] = 'hub';
  $export['spoke_view_program_description_search'] = $view;

  return $export;
}
