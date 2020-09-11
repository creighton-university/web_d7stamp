<?php
/**
 * @file
 * baseball_stats.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function baseball_stats_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'all_players';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'All Players';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Players';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1000';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'php' => 'php',
    'title' => 'title',
    'field_player_last_name' => 'field_player_last_name',
    'field_player_first_name' => 'field_player_first_name',
    'field_handedness' => 'field_handedness',
    'field_position' => 'field_position',
    'field_team' => 'field_team',
    'field_season' => 'field_season',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
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
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_player_last_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_player_first_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_handedness' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_position' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_team' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_season' => array(
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
  $handler->display->display_options['empty']['area']['content'] = 'No players found for this team for the selected season';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 1;
  $handler->display->display_options['fields']['php']['php_setup'] = '$qp = drupal_get_query_parameters();
$static[\'curseasonyear\'] = ((isset($qp[\'tid\']) && is_numeric($qp[\'tid\'])) ? taxonomy_term_load($qp[\'tid\'])->name : \'all\');';
  $handler->display->display_options['fields']['php']['php_value'] = 'return $static[\'curseasonyear\'];';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php

  echo $value;

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '/player-stats/batting/[nid]/[php]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_player_last_name']['id'] = 'field_player_last_name';
  $handler->display->display_options['fields']['field_player_last_name']['table'] = 'field_data_field_player_last_name';
  $handler->display->display_options['fields']['field_player_last_name']['field'] = 'field_player_last_name';
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_player_first_name']['id'] = 'field_player_first_name';
  $handler->display->display_options['fields']['field_player_first_name']['table'] = 'field_data_field_player_first_name';
  $handler->display->display_options['fields']['field_player_first_name']['field'] = 'field_player_first_name';
  /* Field: Content: Handedness */
  $handler->display->display_options['fields']['field_handedness']['id'] = 'field_handedness';
  $handler->display->display_options['fields']['field_handedness']['table'] = 'field_data_field_handedness';
  $handler->display->display_options['fields']['field_handedness']['field'] = 'field_handedness';
  $handler->display->display_options['fields']['field_handedness']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_position']['delta_limit'] = 'all';
  /* Field: Content: Team */
  $handler->display->display_options['fields']['field_team']['id'] = 'field_team';
  $handler->display->display_options['fields']['field_team']['table'] = 'field_data_field_team';
  $handler->display->display_options['fields']['field_team']['field'] = 'field_team';
  $handler->display->display_options['fields']['field_team']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Season */
  $handler->display->display_options['fields']['field_season']['id'] = 'field_season';
  $handler->display->display_options['fields']['field_season']['table'] = 'field_data_field_season';
  $handler->display->display_options['fields']['field_season']['field'] = 'field_season';
  $handler->display->display_options['fields']['field_season']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_season']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Last Name (field_player_last_name) */
  $handler->display->display_options['sorts']['field_player_last_name_value']['id'] = 'field_player_last_name_value';
  $handler->display->display_options['sorts']['field_player_last_name_value']['table'] = 'field_data_field_player_last_name';
  $handler->display->display_options['sorts']['field_player_last_name_value']['field'] = 'field_player_last_name_value';
  /* Contextual filter: Content: Team (field_team) */
  $handler->display->display_options['arguments']['field_team_target_id']['id'] = 'field_team_target_id';
  $handler->display->display_options['arguments']['field_team_target_id']['table'] = 'field_data_field_team';
  $handler->display->display_options['arguments']['field_team_target_id']['field'] = 'field_team_target_id';
  $handler->display->display_options['arguments']['field_team_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_team_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_team_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_team_target_id']['summary_options']['items_per_page'] = '25';
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
    'player' => 'player',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Team (field_team) */
  $handler->display->display_options['filters']['field_team_target_id']['id'] = 'field_team_target_id';
  $handler->display->display_options['filters']['field_team_target_id']['table'] = 'field_data_field_team';
  $handler->display->display_options['filters']['field_team_target_id']['field'] = 'field_team_target_id';
  $handler->display->display_options['filters']['field_team_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_team_target_id']['expose']['operator_id'] = 'field_team_target_id_op';
  $handler->display->display_options['filters']['field_team_target_id']['expose']['label'] = 'Team';
  $handler->display->display_options['filters']['field_team_target_id']['expose']['operator'] = 'field_team_target_id_op';
  $handler->display->display_options['filters']['field_team_target_id']['expose']['identifier'] = 'field_team_target_id';
  $handler->display->display_options['filters']['field_team_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Season';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'season';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'all-players';
  $handler->display->display_options['menu']['title'] = 'All Players';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['all_players'] = $view;

  $view = new view();
  $view->name = 'all_teams';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'All Teams';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Teams';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1000';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_conference' => 'field_conference',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_conference' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 1;
  $handler->display->display_options['fields']['php']['php_setup'] = '$static[\'curseason\'] = key(taxonomy_get_term_by_name(date(\'Y\'), \'season\'));';
  $handler->display->display_options['fields']['php']['php_value'] = 'return $static[\'curseason\'];';
  $handler->display->display_options['fields']['php']['php_output'] = '<?php

  echo $value;

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Team';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '/all-players/?field_team_target_id=[nid]&tid=[php]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Conference */
  $handler->display->display_options['fields']['field_conference']['id'] = 'field_conference';
  $handler->display->display_options['fields']['field_conference']['table'] = 'field_data_field_conference';
  $handler->display->display_options['fields']['field_conference']['field'] = 'field_conference';
  $handler->display->display_options['fields']['field_conference']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_conference']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_conference']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
    'use_content_language' => 1,
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'team' => 'team',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Conference (field_conference) */
  $handler->display->display_options['filters']['field_conference_tid']['id'] = 'field_conference_tid';
  $handler->display->display_options['filters']['field_conference_tid']['table'] = 'field_data_field_conference';
  $handler->display->display_options['filters']['field_conference_tid']['field'] = 'field_conference_tid';
  $handler->display->display_options['filters']['field_conference_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_conference_tid']['expose']['operator_id'] = 'field_conference_tid_op';
  $handler->display->display_options['filters']['field_conference_tid']['expose']['label'] = 'Conference';
  $handler->display->display_options['filters']['field_conference_tid']['expose']['operator'] = 'field_conference_tid_op';
  $handler->display->display_options['filters']['field_conference_tid']['expose']['identifier'] = 'field_conference_tid';
  $handler->display->display_options['filters']['field_conference_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_conference_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_conference_tid']['vocabulary'] = 'conference';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'all-teams';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'All Teams';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['all_teams'] = $view;

  $view = new view();
  $view->name = 'game_entity_reference_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Game entity reference view';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Away Team */
  $handler->display->display_options['fields']['field_away_team']['id'] = 'field_away_team';
  $handler->display->display_options['fields']['field_away_team']['table'] = 'field_data_field_away_team';
  $handler->display->display_options['fields']['field_away_team']['field'] = 'field_away_team';
  $handler->display->display_options['fields']['field_away_team']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Home Team */
  $handler->display->display_options['fields']['field_home_team']['id'] = 'field_home_team';
  $handler->display->display_options['fields']['field_home_team']['table'] = 'field_data_field_home_team';
  $handler->display->display_options['fields']['field_home_team']['field'] = 'field_home_team';
  $handler->display->display_options['fields']['field_home_team']['settings'] = array(
    'link' => 0,
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'game' => 'game',
  );

  /* Display: home team */
  $handler = $view->new_display('entityreference', 'home team', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_home_team' => 'field_home_team',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Home Team */
  $handler->display->display_options['fields']['field_home_team']['id'] = 'field_home_team';
  $handler->display->display_options['fields']['field_home_team']['table'] = 'field_data_field_home_team';
  $handler->display->display_options['fields']['field_home_team']['field'] = 'field_home_team';
  $handler->display->display_options['fields']['field_home_team']['label'] = '';
  $handler->display->display_options['fields']['field_home_team']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_home_team']['settings'] = array(
    'link' => 0,
  );

  /* Display: away team */
  $handler = $view->new_display('entityreference', 'away team', 'entityreference_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_away_team' => 'field_away_team',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Away Team */
  $handler->display->display_options['fields']['field_away_team']['id'] = 'field_away_team';
  $handler->display->display_options['fields']['field_away_team']['table'] = 'field_data_field_away_team';
  $handler->display->display_options['fields']['field_away_team']['field'] = 'field_away_team';
  $handler->display->display_options['fields']['field_away_team']['label'] = '';
  $handler->display->display_options['fields']['field_away_team']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_away_team']['settings'] = array(
    'link' => 0,
  );
  $export['game_entity_reference_view'] = $view;

  $view = new view();
  $view->name = 'game_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Game List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Games';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'field_game_date' => 'field_game_date',
    'field_home_team' => 'field_home_team',
    'field_home_score' => 'field_home_score',
    'field_away_team' => 'field_away_team',
    'field_away_score' => 'field_away_score',
  );
  $handler->display->display_options['style_options']['default'] = 'field_game_date';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_game_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_home_team' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_home_score' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_away_team' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_away_score' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Game Date */
  $handler->display->display_options['fields']['field_game_date']['id'] = 'field_game_date';
  $handler->display->display_options['fields']['field_game_date']['table'] = 'field_data_field_game_date';
  $handler->display->display_options['fields']['field_game_date']['field'] = 'field_game_date';
  $handler->display->display_options['fields']['field_game_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_game_date']['alter']['text'] = '[field_game_date]';
  $handler->display->display_options['fields']['field_game_date']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_game_date']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_game_date']['settings'] = array(
    'format_type' => 'medium_12hr',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Home Team */
  $handler->display->display_options['fields']['field_home_team']['id'] = 'field_home_team';
  $handler->display->display_options['fields']['field_home_team']['table'] = 'field_data_field_home_team';
  $handler->display->display_options['fields']['field_home_team']['field'] = 'field_home_team';
  $handler->display->display_options['fields']['field_home_team']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Home Score */
  $handler->display->display_options['fields']['field_home_score']['id'] = 'field_home_score';
  $handler->display->display_options['fields']['field_home_score']['table'] = 'field_data_field_home_score';
  $handler->display->display_options['fields']['field_home_score']['field'] = 'field_home_score';
  $handler->display->display_options['fields']['field_home_score']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Away Team */
  $handler->display->display_options['fields']['field_away_team']['id'] = 'field_away_team';
  $handler->display->display_options['fields']['field_away_team']['table'] = 'field_data_field_away_team';
  $handler->display->display_options['fields']['field_away_team']['field'] = 'field_away_team';
  $handler->display->display_options['fields']['field_away_team']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Away Score */
  $handler->display->display_options['fields']['field_away_score']['id'] = 'field_away_score';
  $handler->display->display_options['fields']['field_away_score']['table'] = 'field_data_field_away_score';
  $handler->display->display_options['fields']['field_away_score']['field'] = 'field_away_score';
  $handler->display->display_options['fields']['field_away_score']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Game Date (field_game_date) */
  $handler->display->display_options['arguments']['field_game_date_value']['id'] = 'field_game_date_value';
  $handler->display->display_options['arguments']['field_game_date_value']['table'] = 'field_data_field_game_date';
  $handler->display->display_options['arguments']['field_game_date_value']['field'] = 'field_game_date_value';
  $handler->display->display_options['arguments']['field_game_date_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_game_date_value']['default_argument_options']['code'] = 'return date("Y"); ';
  $handler->display->display_options['arguments']['field_game_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_game_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_game_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_game_date_value']['granularity_reset'] = 0;
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
    'game' => 'game',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Opponent (field_opponent) */
  $handler->display->display_options['filters']['field_opponent_value']['id'] = 'field_opponent_value';
  $handler->display->display_options['filters']['field_opponent_value']['table'] = 'field_data_field_opponent';
  $handler->display->display_options['filters']['field_opponent_value']['field'] = 'field_opponent_value';
  $handler->display->display_options['filters']['field_opponent_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_opponent_value']['group'] = 1;
  $handler->display->display_options['filters']['field_opponent_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_opponent_value']['expose']['operator_id'] = 'field_opponent_value_op';
  $handler->display->display_options['filters']['field_opponent_value']['expose']['label'] = 'Opponent';
  $handler->display->display_options['filters']['field_opponent_value']['expose']['operator'] = 'field_opponent_value_op';
  $handler->display->display_options['filters']['field_opponent_value']['expose']['identifier'] = 'field_opponent_value';
  $handler->display->display_options['filters']['field_opponent_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_opponent_value']['group_info']['label'] = 'Opponent (field_opponent)';
  $handler->display->display_options['filters']['field_opponent_value']['group_info']['identifier'] = 'field_opponent_value';
  $handler->display->display_options['filters']['field_opponent_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_opponent_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: Game Date (field_game_date) */
  $handler->display->display_options['filters']['field_game_date_value']['id'] = 'field_game_date_value';
  $handler->display->display_options['filters']['field_game_date_value']['table'] = 'field_data_field_game_date';
  $handler->display->display_options['filters']['field_game_date_value']['field'] = 'field_game_date_value';
  $handler->display->display_options['filters']['field_game_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_game_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_game_date_value']['expose']['operator_id'] = 'field_game_date_value_op';
  $handler->display->display_options['filters']['field_game_date_value']['expose']['label'] = 'Game Date';
  $handler->display->display_options['filters']['field_game_date_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_game_date_value']['expose']['operator'] = 'field_game_date_value_op';
  $handler->display->display_options['filters']['field_game_date_value']['expose']['identifier'] = 'field_game_date_value';
  $handler->display->display_options['filters']['field_game_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_game_date_value']['year_range'] = '-3:+10';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'game-list';
  $export['game_list'] = $view;

  $view = new view();
  $view->name = 'game_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Game View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Game View';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'php' => 'php',
    'nid' => 'nid',
    'title' => 'title',
    'field_pitcher' => 'field_pitcher',
    'field_batter' => 'field_batter',
    'field_pitch' => 'field_pitch',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pitcher' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_batter' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pitch' => array(
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
  $handler->display->display_options['header']['php']['php_output'] = '<a href="<?php global $base_path; echo $base_path; ?>node/add/plate-appearance?field_game=<?php echo $view->args[0]; ?>&destination=<?php echo request_path(); ?>">Add New Plate Appearance</a>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No plate appearances found';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_value'] = 'return request_path();';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'node/[nid]/edit?destination=[php]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Pitcher */
  $handler->display->display_options['fields']['field_pitcher']['id'] = 'field_pitcher';
  $handler->display->display_options['fields']['field_pitcher']['table'] = 'field_data_field_pitcher';
  $handler->display->display_options['fields']['field_pitcher']['field'] = 'field_pitcher';
  $handler->display->display_options['fields']['field_pitcher']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Batter */
  $handler->display->display_options['fields']['field_batter']['id'] = 'field_batter';
  $handler->display->display_options['fields']['field_batter']['table'] = 'field_data_field_batter';
  $handler->display->display_options['fields']['field_batter']['field'] = 'field_batter';
  $handler->display->display_options['fields']['field_batter']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Pitch */
  $handler->display->display_options['fields']['field_pitch']['id'] = 'field_pitch';
  $handler->display->display_options['fields']['field_pitch']['table'] = 'field_data_field_pitch';
  $handler->display->display_options['fields']['field_pitch']['field'] = 'field_pitch';
  $handler->display->display_options['fields']['field_pitch']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_pitch']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_pitch']['separator'] = '';
  /* Field: Content: Result */
  $handler->display->display_options['fields']['field_result']['id'] = 'field_result';
  $handler->display->display_options['fields']['field_result']['table'] = 'field_data_field_result';
  $handler->display->display_options['fields']['field_result']['field'] = 'field_result';
  $handler->display->display_options['fields']['field_result']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Game (field_game) */
  $handler->display->display_options['arguments']['field_game_target_id']['id'] = 'field_game_target_id';
  $handler->display->display_options['arguments']['field_game_target_id']['table'] = 'field_data_field_game';
  $handler->display->display_options['arguments']['field_game_target_id']['field'] = 'field_game_target_id';
  $handler->display->display_options['arguments']['field_game_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_game_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_game_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_game_target_id']['summary_options']['items_per_page'] = '25';
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
    'plate_appearance' => 'plate_appearance',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'game-view';

  /* Display: EVA Field */
  $handler = $view->new_display('entity_view', 'EVA Field', 'entity_view_1');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'game',
  );
  $export['game_view'] = $view;

  $view = new view();
  $view->name = 'manage_users';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Manage Users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage Users';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'rid' => 'rid',
    'created' => 'created',
    'login' => 'login',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = 'name';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'rid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'login' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
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
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* Field: User: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium_12hr';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'medium_12hr';
  /* Field: User: Last login */
  $handler->display->display_options['fields']['login']['id'] = 'login';
  $handler->display->display_options['fields']['login']['table'] = 'users';
  $handler->display->display_options['fields']['login']['field'] = 'login';
  $handler->display->display_options['fields']['login']['date_format'] = 'medium_12hr';
  $handler->display->display_options['fields']['login']['second_date_format'] = 'medium_12hr';
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '>';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'manage-users';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Manage Users';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['manage_users'] = $view;

  $view = new view();
  $view->name = 'player_entity_reference_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Player entity reference view';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Team */
  $handler->display->display_options['fields']['field_team']['id'] = 'field_team';
  $handler->display->display_options['fields']['field_team']['table'] = 'field_data_field_team';
  $handler->display->display_options['fields']['field_team']['field'] = 'field_team';
  $handler->display->display_options['fields']['field_team']['label'] = '';
  $handler->display->display_options['fields']['field_team']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_team']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_team']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] ([field_team])';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Team (field_team) */
  $handler->display->display_options['arguments']['field_team_target_id']['id'] = 'field_team_target_id';
  $handler->display->display_options['arguments']['field_team_target_id']['table'] = 'field_data_field_team';
  $handler->display->display_options['arguments']['field_team_target_id']['field'] = 'field_team_target_id';
  $handler->display->display_options['arguments']['field_team_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_team_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_team_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_team_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_team_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_team_target_id']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['field_team_target_id']['validate_options']['code'] = '// argument is blank, view is called from node edit form
// determine node ID of game
if(! strlen($handler->argument) || ! $handler->argument) {
  if(is_numeric(arg(1))) {
    $node = node_load(arg(1));
    $handler->argument = $node->field_game[\'und\'][0][\'target_id\'];
  }
}

if($handler->argument && strlen($handler->argument)) {
  // $handler->argument is populated from token from node add form or generated above in node edit code
  // $handler->argument contains the node ID of the game
  $nodeg = node_load($handler->argument);
  $handler->argument = $nodeg->field_home_team[\'und\'][0][\'target_id\'] . \'+\' . $nodeg->field_away_team[\'und\'][0][\'target_id\'];
  return TRUE;
} else {
  return FALSE;
}';
  $handler->display->display_options['arguments']['field_team_target_id']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['field_team_target_id']['break_phrase'] = TRUE;
  /* Contextual filter: Content: Season (field_season) */
  $handler->display->display_options['arguments']['field_season_tid']['id'] = 'field_season_tid';
  $handler->display->display_options['arguments']['field_season_tid']['table'] = 'field_data_field_season';
  $handler->display->display_options['arguments']['field_season_tid']['field'] = 'field_season_tid';
  $handler->display->display_options['arguments']['field_season_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_season_tid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_season_tid']['default_argument_options']['code'] = '//get game ID
// get year
// pass year as tax term

if(is_numeric($view->args[0])) {
  // $view->args[0] contains the node ID of the game
  $nodeg = node_load($view->args[0]);
  return date(\'Y\', strtotime($nodeg->field_game_date[\'und\'][0][\'value\']));
}';
  $handler->display->display_options['arguments']['field_season_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_season_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_season_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_season_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_season_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_season_tid']['validate_options']['vocabularies'] = array(
    'season' => 'season',
  );
  $handler->display->display_options['arguments']['field_season_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_season_tid']['validate']['fail'] = 'empty';
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
    'player' => 'player',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_team',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'field_team' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['player_entity_reference_view'] = $view;

  $view = new view();
  $view->name = 'player_stats';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Player stats';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Player Statistics for %nid:field-player-last-name, %nid:field-player-first-name (%nid:field-team)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_pitcher_target_id']['id'] = 'field_pitcher_target_id';
  $handler->display->display_options['relationships']['field_pitcher_target_id']['table'] = 'field_data_field_pitcher';
  $handler->display->display_options['relationships']['field_pitcher_target_id']['field'] = 'field_pitcher_target_id';
  /* Relationship: Content: Pitch (field_pitch) */
  $handler->display->display_options['relationships']['field_pitch_value']['id'] = 'field_pitch_value';
  $handler->display->display_options['relationships']['field_pitch_value']['table'] = 'field_data_field_pitch';
  $handler->display->display_options['relationships']['field_pitch_value']['field'] = 'field_pitch_value';
  $handler->display->display_options['relationships']['field_pitch_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_game_target_id']['id'] = 'field_game_target_id';
  $handler->display->display_options['relationships']['field_game_target_id']['table'] = 'field_data_field_game';
  $handler->display->display_options['relationships']['field_game_target_id']['field'] = 'field_game_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Batter */
  $handler->display->display_options['fields']['field_batter']['id'] = 'field_batter';
  $handler->display->display_options['fields']['field_batter']['table'] = 'field_data_field_batter';
  $handler->display->display_options['fields']['field_batter']['field'] = 'field_batter';
  $handler->display->display_options['fields']['field_batter']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Pitcher */
  $handler->display->display_options['fields']['field_pitcher']['id'] = 'field_pitcher';
  $handler->display->display_options['fields']['field_pitcher']['table'] = 'field_data_field_pitcher';
  $handler->display->display_options['fields']['field_pitcher']['field'] = 'field_pitcher';
  $handler->display->display_options['fields']['field_pitcher']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Result */
  $handler->display->display_options['fields']['field_result']['id'] = 'field_result';
  $handler->display->display_options['fields']['field_result']['table'] = 'field_data_field_result';
  $handler->display->display_options['fields']['field_result']['field'] = 'field_result';
  $handler->display->display_options['fields']['field_result']['label'] = 'PA Result';
  $handler->display->display_options['fields']['field_result']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Handedness */
  $handler->display->display_options['fields']['field_handedness']['id'] = 'field_handedness';
  $handler->display->display_options['fields']['field_handedness']['table'] = 'field_data_field_handedness';
  $handler->display->display_options['fields']['field_handedness']['field'] = 'field_handedness';
  $handler->display->display_options['fields']['field_handedness']['relationship'] = 'field_pitcher_target_id';
  $handler->display->display_options['fields']['field_handedness']['label'] = 'Pitcher Handedness';
  $handler->display->display_options['fields']['field_handedness']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_handedness']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
    'use_content_language' => 1,
  );
  /* Field: Field collection item: Pitch Result */
  $handler->display->display_options['fields']['field_pitch_result']['id'] = 'field_pitch_result';
  $handler->display->display_options['fields']['field_pitch_result']['table'] = 'field_data_field_pitch_result';
  $handler->display->display_options['fields']['field_pitch_result']['field'] = 'field_pitch_result';
  $handler->display->display_options['fields']['field_pitch_result']['relationship'] = 'field_pitch_value';
  $handler->display->display_options['fields']['field_pitch_result']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field collection item: Zone */
  $handler->display->display_options['fields']['field_zone']['id'] = 'field_zone';
  $handler->display->display_options['fields']['field_zone']['table'] = 'field_data_field_zone';
  $handler->display->display_options['fields']['field_zone']['field'] = 'field_zone';
  $handler->display->display_options['fields']['field_zone']['relationship'] = 'field_pitch_value';
  $handler->display->display_options['fields']['field_zone']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field collection item: Pitch Type */
  $handler->display->display_options['fields']['field_pitch_type']['id'] = 'field_pitch_type';
  $handler->display->display_options['fields']['field_pitch_type']['table'] = 'field_data_field_pitch_type';
  $handler->display->display_options['fields']['field_pitch_type']['field'] = 'field_pitch_type';
  $handler->display->display_options['fields']['field_pitch_type']['relationship'] = 'field_pitch_value';
  $handler->display->display_options['fields']['field_pitch_type']['type'] = 'taxonomy_term_reference_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Batter (field_batter) */
  $handler->display->display_options['arguments']['field_batter_target_id']['id'] = 'field_batter_target_id';
  $handler->display->display_options['arguments']['field_batter_target_id']['table'] = 'field_data_field_batter';
  $handler->display->display_options['arguments']['field_batter_target_id']['field'] = 'field_batter_target_id';
  $handler->display->display_options['arguments']['field_batter_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_batter_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_batter_target_id']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['field_batter_target_id']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['field_batter_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_batter_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_batter_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_batter_target_id']['validate']['fail'] = 'empty';
  /* Contextual filter: Field collection item: Pitch Type (field_pitch_type) */
  $handler->display->display_options['arguments']['field_pitch_type_tid']['id'] = 'field_pitch_type_tid';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['table'] = 'field_data_field_pitch_type';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['field'] = 'field_pitch_type_tid';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['relationship'] = 'field_pitch_value';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_pitch_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['validate_options']['vocabularies'] = array(
    'pitch_type' => 'pitch_type',
  );
  $handler->display->display_options['arguments']['field_pitch_type_tid']['validate_options']['type'] = 'convert';
  /* Contextual filter: Content: Handedness (field_handedness) */
  $handler->display->display_options['arguments']['field_handedness_tid']['id'] = 'field_handedness_tid';
  $handler->display->display_options['arguments']['field_handedness_tid']['table'] = 'field_data_field_handedness';
  $handler->display->display_options['arguments']['field_handedness_tid']['field'] = 'field_handedness_tid';
  $handler->display->display_options['arguments']['field_handedness_tid']['relationship'] = 'field_pitcher_target_id';
  $handler->display->display_options['arguments']['field_handedness_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_handedness_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_handedness_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_handedness_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_handedness_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_handedness_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_handedness_tid']['validate_options']['vocabularies'] = array(
    'handedness' => 'handedness',
  );
  $handler->display->display_options['arguments']['field_handedness_tid']['validate_options']['type'] = 'convert';
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
    'plate_appearance' => 'plate_appearance',
  );

  /* Display: Content pane - player stats */
  $handler = $view->new_display('panel_pane', 'Content pane - player stats', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['argument_input'] = array(
    'field_batter_target_id' => array(
      'type' => 'panel',
      'context' => 'entity:node.field_batter',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Batter (field_batter)',
    ),
    'field_pitch_type_tid' => array(
      'type' => 'user',
      'context' => 'entity:bean.field_contact_block_address',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Field collection item: Pitch Type (field_pitch_type)',
    ),
    'field_handedness_tid' => array(
      'type' => 'user',
      'context' => 'entity:bean.field_contact_block_address',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Handedness (field_handedness)',
    ),
  );

  /* Display: pane - batter title */
  $handler = $view->new_display('panel_pane', 'pane - batter title', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Player Statistics for %nid:field-player-last-name, %nid:field-player-first-name (%nid:field-team)';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
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
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_player_last_name']['id'] = 'field_player_last_name';
  $handler->display->display_options['fields']['field_player_last_name']['table'] = 'field_data_field_player_last_name';
  $handler->display->display_options['fields']['field_player_last_name']['field'] = 'field_player_last_name';
  $handler->display->display_options['fields']['field_player_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_player_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_player_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_player_last_name']['type'] = 'text_plain';
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_player_first_name']['id'] = 'field_player_first_name';
  $handler->display->display_options['fields']['field_player_first_name']['table'] = 'field_data_field_player_first_name';
  $handler->display->display_options['fields']['field_player_first_name']['field'] = 'field_player_first_name';
  $handler->display->display_options['fields']['field_player_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_player_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_player_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_player_first_name']['type'] = 'text_plain';
  /* Field: Content: Handedness */
  $handler->display->display_options['fields']['field_handedness']['id'] = 'field_handedness';
  $handler->display->display_options['fields']['field_handedness']['table'] = 'field_data_field_handedness';
  $handler->display->display_options['fields']['field_handedness']['field'] = 'field_handedness';
  $handler->display->display_options['fields']['field_handedness']['label'] = '';
  $handler->display->display_options['fields']['field_handedness']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_handedness']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_handedness']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Team */
  $handler->display->display_options['fields']['field_team']['id'] = 'field_team';
  $handler->display->display_options['fields']['field_team']['table'] = 'field_data_field_team';
  $handler->display->display_options['fields']['field_team']['field'] = 'field_team';
  $handler->display->display_options['fields']['field_team']['label'] = '';
  $handler->display->display_options['fields']['field_team']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_team']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_team']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Team */
  $handler->display->display_options['fields']['field_team_1']['id'] = 'field_team_1';
  $handler->display->display_options['fields']['field_team_1']['table'] = 'field_data_field_team';
  $handler->display->display_options['fields']['field_team_1']['field'] = 'field_team';
  $handler->display->display_options['fields']['field_team_1']['label'] = '';
  $handler->display->display_options['fields']['field_team_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_team_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_team_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_team_1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_position']['id'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['table'] = 'field_data_field_position';
  $handler->display->display_options['fields']['field_position']['field'] = 'field_position';
  $handler->display->display_options['fields']['field_position']['label'] = '';
  $handler->display->display_options['fields']['field_position']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_position']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_position']['delta_offset'] = '0';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
  $args = arg();
  $ispitcher = FALSE;
  $viewyear = (count($args) < 4) ? \'all\' : $args[3];
  foreach($data->field_field_position as $p) {
    if($p[\'raw\'][\'taxonomy_term\']->name == \'Pitcher\') {
      $ispitcher = TRUE;
    }
  }
  if(is_numeric($viewyear)) {
    echo "<h3>{$viewyear} Statistics</h3>";
    echo \'<a href="\' . base_path() . \'player-stats/batting/\' . $args[2] . \'/all" id="player_stats_link">view cumulative statistics</a>\';
  } else {
    echo "<h3>Cumulative Statistics</h3>";
    echo \'<a href="\' . base_path() . \'player-stats/batting/\' . $args[2] . \'/\' . date(\'Y\') . \'" id="player_stats_link">view current season statistics</a>\';
  }
  echo \'<div id="player_stats_nav">Batting Stats\';
  if($ispitcher) {
    echo \'<span id="player_stats_nav_separator"> &nbsp; | &nbsp; </span><a href="\' . base_path() . \'player-stats/pitching/\' . $args[2] . \'/\' . $viewyear . \'" id="player_stats_nav_link">Pitching Stats</a>\';
  }
  echo \'</div>\';
  echo $data->field_field_player_first_name[0][\'raw\'][\'value\'] . " " . $data->field_field_player_last_name[0][\'raw\'][\'value\'] . " is a " . strtolower($data->field_field_handedness[0][\'raw\'][\'taxonomy_term\']->name) . "-handed hitter for <a href=\\"" . base_path() . "all-players?field_team_target_id={$data->field_field_team_1[0][\'raw\'][\'target_id\']}";
  if(is_numeric($viewyear)) {
    echo \'&tid=\' . key(taxonomy_get_term_by_name($viewyear, \'season\'));
  }
  echo "\\">{$data->field_field_team_1[0][\'raw\'][\'entity\']->title}</a>.";
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'player' => 'player',
  );
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'panel',
      'context' => 'entity:bean.field_contact_block_address',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
    'field_game_date_value' => array(
      'type' => 'panel',
      'context' => 'entity:bean.field-contact-block-address',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Game Date (field_game_date)',
    ),
  );

  /* Display: pane - stats adv batter */
  $handler = $view->new_display('panel_pane', 'pane - stats adv batter', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'active view display';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['empty'] = TRUE;
  $handler->display->display_options['footer']['php']['php_output'] = '<?php

$cont = "";
$stats = array();
$zonepas = array();
$hits = 0;
$slugtop = 0;
$hardcount = 0;
$weakcount = 0;
$smcount = 0;
$foulcount = 0;
$sacbuntcount = 0;
$sacflycount = 0;
$walkcount = 0;

foreach($results as $row) {
  // collect unique plate appearances
  if(! array_key_exists($row->nid, $zonepas) && ($row->field_field_pitch_result[0][\'raw\'][\'taxonomy_term\']->name == \'H\' || $row->field_field_pitch_result[0][\'raw\'][\'taxonomy_term\']->name == \'W\')) {
    $zonepas[$row->nid] = $row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name;
    
    // only compute PA-specific results one time per PA
    if($row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'HR\' || $row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'1B\' || $row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'2B\' || $row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'3B\') {
      $hits++;
    }
    if($row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'SF\') {
      $sacflycount ++;
    }
    if($row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'BB\') {
      $walkcount ++;
    }
    if($row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'1B\') {
      $slugtop += 1;
    }
    if($row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'2B\') {
      $slugtop += 2;
    }
    if($row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'3B\') {
      $slugtop += 3;
    }
    if($row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'HR\') {
      $slugtop += 4;
    }
  }
  if($row->field_field_pitch_result[0][\'raw\'][\'taxonomy_term\']->name == \'SB\') {
    $sacbuntcount ++;
  }
  if($row->field_field_pitch_result[0][\'raw\'][\'taxonomy_term\']->name == \'H\') {
    $hardcount ++;
  }
  if($row->field_field_pitch_result[0][\'raw\'][\'taxonomy_term\']->name == \'W\') {
    $weakcount ++;
  }
  if($row->field_field_pitch_result[0][\'raw\'][\'taxonomy_term\']->name == \'SM\') {
    $smcount ++;
  }
  if($row->field_field_pitch_result[0][\'raw\'][\'taxonomy_term\']->name == \'F\') {
    $foulcount ++;
  }
}

// $view->args[4] contains zone number

$stats[\'ba\'] = (float) $hits / (count($zonepas) - $sacbuntcount - $sacflycount - $walkcount);
$stats[\'slug\'] = (float) $slugtop / (count($zonepas) - $sacbuntcount - $sacflycount - $walkcount);
$stats[\'h\'] = (float) $hardcount / ($hardcount + $weakcount);
$stats[\'w\'] = (float) $weakcount / ($hardcount + $weakcount);
$stats[\'sm\'] = (float) $smcount / ($smcount + $foulcount + $hardcount + $weakcount);
$stats[\'c\'] = (float) ($smcount + $foulcount + $hardcount + $weakcount) / count($results);

//print_r($stats);

$cont .= "&nbsp;&nbsp;BA: " . (($stats[\'ba\'] < 1) ? substr(sprintf(\'%.3f\', $stats[\'ba\']), 1) : sprintf(\'%.3f\', $stats[\'ba\'])) . "<br />";
$cont .= "&nbsp;&nbsp;Slug: " . (($stats[\'slug\'] < 1) ? substr(sprintf(\'%.3f\', $stats[\'slug\']), 1) : sprintf(\'%.3f\', $stats[\'slug\'])) . "<br />";
$cont .= "&nbsp;&nbsp;H: " . (($stats[\'h\'] < 1) ? substr(sprintf(\'%.3f\', $stats[\'h\']), 1) : sprintf(\'%.3f\', $stats[\'h\'])) . "<br />";
$cont .= "&nbsp;&nbsp;W: " . (($stats[\'w\'] < 1) ? substr(sprintf(\'%.3f\', $stats[\'w\']), 1) : sprintf(\'%.3f\', $stats[\'w\'])) . "<br />";
$cont .= "&nbsp;&nbsp;SM: " . (($stats[\'sm\'] < 1) ? substr(sprintf(\'%.3f\', $stats[\'sm\']), 1) : sprintf(\'%.3f\', $stats[\'sm\']));
if($view->args[4] < 7 || $view->args[4] > 19 || $view->args[4] % 5 == 0 || ($view->args[4] + 4) % 5 == 0) {
  //  strike
  $cont .= "<br />&nbsp;&nbsp;C: " . (($stats[\'c\'] < 1) ? substr(sprintf(\'%.3f\', $stats[\'c\']), 1) : sprintf(\'%.3f\', $stats[\'c\']));
}

$heatmap = sprintf(\'%.3f\',$stats[\'ba\'] + $stats[\'slug\']);
$heatmap = floor($heatmap  * 20) / 20;
if($heatmap > 1.3) {
  $heatmap = 1.3;
}
if($heatmap < 0.2) {
  $heatmap = 0.2;
}
$heatmap = str_replace(\'.\', \'\', $heatmap);


echo "<div class=\\"player-stats-hm-{$heatmap}\\">" . $cont . "</div>";

?>';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
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
  /* Field: Content: Batter */
  $handler->display->display_options['fields']['field_batter']['id'] = 'field_batter';
  $handler->display->display_options['fields']['field_batter']['table'] = 'field_data_field_batter';
  $handler->display->display_options['fields']['field_batter']['field'] = 'field_batter';
  $handler->display->display_options['fields']['field_batter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_batter']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Pitcher */
  $handler->display->display_options['fields']['field_pitcher']['id'] = 'field_pitcher';
  $handler->display->display_options['fields']['field_pitcher']['table'] = 'field_data_field_pitcher';
  $handler->display->display_options['fields']['field_pitcher']['field'] = 'field_pitcher';
  $handler->display->display_options['fields']['field_pitcher']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pitcher']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Result */
  $handler->display->display_options['fields']['field_result']['id'] = 'field_result';
  $handler->display->display_options['fields']['field_result']['table'] = 'field_data_field_result';
  $handler->display->display_options['fields']['field_result']['field'] = 'field_result';
  $handler->display->display_options['fields']['field_result']['label'] = 'PA Result';
  $handler->display->display_options['fields']['field_result']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_result']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Handedness */
  $handler->display->display_options['fields']['field_handedness']['id'] = 'field_handedness';
  $handler->display->display_options['fields']['field_handedness']['table'] = 'field_data_field_handedness';
  $handler->display->display_options['fields']['field_handedness']['field'] = 'field_handedness';
  $handler->display->display_options['fields']['field_handedness']['relationship'] = 'field_pitcher_target_id';
  $handler->display->display_options['fields']['field_handedness']['label'] = 'Pitcher Handedness';
  $handler->display->display_options['fields']['field_handedness']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_handedness']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_handedness']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
    'use_content_language' => 1,
  );
  /* Field: Field collection item: Pitch Result */
  $handler->display->display_options['fields']['field_pitch_result']['id'] = 'field_pitch_result';
  $handler->display->display_options['fields']['field_pitch_result']['table'] = 'field_data_field_pitch_result';
  $handler->display->display_options['fields']['field_pitch_result']['field'] = 'field_pitch_result';
  $handler->display->display_options['fields']['field_pitch_result']['relationship'] = 'field_pitch_value';
  $handler->display->display_options['fields']['field_pitch_result']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pitch_result']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field collection item: Zone */
  $handler->display->display_options['fields']['field_zone']['id'] = 'field_zone';
  $handler->display->display_options['fields']['field_zone']['table'] = 'field_data_field_zone';
  $handler->display->display_options['fields']['field_zone']['field'] = 'field_zone';
  $handler->display->display_options['fields']['field_zone']['relationship'] = 'field_pitch_value';
  $handler->display->display_options['fields']['field_zone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zone']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field collection item: Pitch Type */
  $handler->display->display_options['fields']['field_pitch_type']['id'] = 'field_pitch_type';
  $handler->display->display_options['fields']['field_pitch_type']['table'] = 'field_data_field_pitch_type';
  $handler->display->display_options['fields']['field_pitch_type']['field'] = 'field_pitch_type';
  $handler->display->display_options['fields']['field_pitch_type']['relationship'] = 'field_pitch_value';
  $handler->display->display_options['fields']['field_pitch_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pitch_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Field collection item: Zone (field_zone) */
  $handler->display->display_options['sorts']['field_zone_tid']['id'] = 'field_zone_tid';
  $handler->display->display_options['sorts']['field_zone_tid']['table'] = 'field_data_field_zone';
  $handler->display->display_options['sorts']['field_zone_tid']['field'] = 'field_zone_tid';
  $handler->display->display_options['sorts']['field_zone_tid']['relationship'] = 'field_pitch_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Batter (field_batter) */
  $handler->display->display_options['arguments']['field_batter_target_id']['id'] = 'field_batter_target_id';
  $handler->display->display_options['arguments']['field_batter_target_id']['table'] = 'field_data_field_batter';
  $handler->display->display_options['arguments']['field_batter_target_id']['field'] = 'field_batter_target_id';
  $handler->display->display_options['arguments']['field_batter_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_batter_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_batter_target_id']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['field_batter_target_id']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['field_batter_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_batter_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_batter_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_batter_target_id']['validate']['fail'] = 'empty';
  /* Contextual filter: Content: Game Date (field_game_date) */
  $handler->display->display_options['arguments']['field_game_date_value']['id'] = 'field_game_date_value';
  $handler->display->display_options['arguments']['field_game_date_value']['table'] = 'field_data_field_game_date';
  $handler->display->display_options['arguments']['field_game_date_value']['field'] = 'field_game_date_value';
  $handler->display->display_options['arguments']['field_game_date_value']['relationship'] = 'field_game_target_id';
  $handler->display->display_options['arguments']['field_game_date_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_game_date_value']['default_argument_options']['argument'] = 'All';
  $handler->display->display_options['arguments']['field_game_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_game_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_game_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_game_date_value']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['field_game_date_value']['granularity'] = 'year';
  $handler->display->display_options['arguments']['field_game_date_value']['granularity_reset'] = 0;
  /* Contextual filter: Field collection item: Pitch Type (field_pitch_type) */
  $handler->display->display_options['arguments']['field_pitch_type_tid']['id'] = 'field_pitch_type_tid';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['table'] = 'field_data_field_pitch_type';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['field'] = 'field_pitch_type_tid';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['relationship'] = 'field_pitch_value';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_pitch_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['validate_options']['vocabularies'] = array(
    'pitch_type' => 'pitch_type',
  );
  $handler->display->display_options['arguments']['field_pitch_type_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['validate']['fail'] = 'empty';
  /* Contextual filter: Content: Handedness (field_handedness) */
  $handler->display->display_options['arguments']['field_handedness_tid']['id'] = 'field_handedness_tid';
  $handler->display->display_options['arguments']['field_handedness_tid']['table'] = 'field_data_field_handedness';
  $handler->display->display_options['arguments']['field_handedness_tid']['field'] = 'field_handedness_tid';
  $handler->display->display_options['arguments']['field_handedness_tid']['relationship'] = 'field_pitcher_target_id';
  $handler->display->display_options['arguments']['field_handedness_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_handedness_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_handedness_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_handedness_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_handedness_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_handedness_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_handedness_tid']['validate_options']['vocabularies'] = array(
    'handedness' => 'handedness',
  );
  $handler->display->display_options['arguments']['field_handedness_tid']['validate_options']['type'] = 'convert';
  /* Contextual filter: Field collection item: Zone (field_zone) */
  $handler->display->display_options['arguments']['field_zone_tid']['id'] = 'field_zone_tid';
  $handler->display->display_options['arguments']['field_zone_tid']['table'] = 'field_data_field_zone';
  $handler->display->display_options['arguments']['field_zone_tid']['field'] = 'field_zone_tid';
  $handler->display->display_options['arguments']['field_zone_tid']['relationship'] = 'field_pitch_value';
  $handler->display->display_options['arguments']['field_zone_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_zone_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_zone_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_zone_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_zone_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_zone_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_zone_tid']['validate_options']['vocabularies'] = array(
    'zone_number' => 'zone_number',
  );
  $handler->display->display_options['arguments']['field_zone_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_zone_tid']['validate']['fail'] = 'empty';
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
    'plate_appearance' => 'plate_appearance',
  );
  $handler->display->display_options['argument_input'] = array(
    'field_batter_target_id' => array(
      'type' => 'panel',
      'context' => 'entity:node.field_batter',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Batter (field_batter)',
    ),
    'field_game_date_value' => array(
      'type' => 'panel',
      'context' => 'entity:bean.field-contact-block-address',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Game Date (field_game_date)',
    ),
    'field_pitch_type_tid' => array(
      'type' => 'user',
      'context' => 'entity:bean.field_contact_block_address',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Field collection item: Pitch Type (field_pitch_type)',
    ),
    'field_handedness_tid' => array(
      'type' => 'user',
      'context' => 'entity:bean.field_contact_block_address',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Handedness (field_handedness)',
    ),
    'field_zone_tid' => array(
      'type' => 'user',
      'context' => 'entity:bean.field_contact_block_address',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Field collection item: Zone (field_zone)',
    ),
  );

  /* Display: pane - stats adv COPY */
  $handler = $view->new_display('panel_pane', 'pane - stats adv COPY', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Field collection item: Zone (field_zone) */
  $handler->display->display_options['sorts']['field_zone_tid']['id'] = 'field_zone_tid';
  $handler->display->display_options['sorts']['field_zone_tid']['table'] = 'field_data_field_zone';
  $handler->display->display_options['sorts']['field_zone_tid']['field'] = 'field_zone_tid';
  $handler->display->display_options['sorts']['field_zone_tid']['relationship'] = 'field_pitch_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Batter (field_batter) */
  $handler->display->display_options['arguments']['field_batter_target_id']['id'] = 'field_batter_target_id';
  $handler->display->display_options['arguments']['field_batter_target_id']['table'] = 'field_data_field_batter';
  $handler->display->display_options['arguments']['field_batter_target_id']['field'] = 'field_batter_target_id';
  $handler->display->display_options['arguments']['field_batter_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_batter_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_batter_target_id']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['field_batter_target_id']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['field_batter_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_batter_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_batter_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_batter_target_id']['validate']['fail'] = 'empty';
  /* Contextual filter: Field collection item: Pitch Type (field_pitch_type) */
  $handler->display->display_options['arguments']['field_pitch_type_tid']['id'] = 'field_pitch_type_tid';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['table'] = 'field_data_field_pitch_type';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['field'] = 'field_pitch_type_tid';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['relationship'] = 'field_pitch_value';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_pitch_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['validate_options']['vocabularies'] = array(
    'pitch_type' => 'pitch_type',
  );
  $handler->display->display_options['arguments']['field_pitch_type_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['validate']['fail'] = 'empty';
  /* Contextual filter: Content: Handedness (field_handedness) */
  $handler->display->display_options['arguments']['field_handedness_tid']['id'] = 'field_handedness_tid';
  $handler->display->display_options['arguments']['field_handedness_tid']['table'] = 'field_data_field_handedness';
  $handler->display->display_options['arguments']['field_handedness_tid']['field'] = 'field_handedness_tid';
  $handler->display->display_options['arguments']['field_handedness_tid']['relationship'] = 'field_pitcher_target_id';
  $handler->display->display_options['arguments']['field_handedness_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_handedness_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_handedness_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_handedness_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_handedness_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_handedness_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_handedness_tid']['validate_options']['vocabularies'] = array(
    'handedness' => 'handedness',
  );
  $handler->display->display_options['arguments']['field_handedness_tid']['validate_options']['type'] = 'convert';
  /* Contextual filter: Field collection item: Zone (field_zone) */
  $handler->display->display_options['arguments']['field_zone_tid']['id'] = 'field_zone_tid';
  $handler->display->display_options['arguments']['field_zone_tid']['table'] = 'field_data_field_zone';
  $handler->display->display_options['arguments']['field_zone_tid']['field'] = 'field_zone_tid';
  $handler->display->display_options['arguments']['field_zone_tid']['relationship'] = 'field_pitch_value';
  $handler->display->display_options['arguments']['field_zone_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_zone_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_zone_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_zone_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_zone_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_zone_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_zone_tid']['validate_options']['vocabularies'] = array(
    'zone_number' => 'zone_number',
  );
  $handler->display->display_options['arguments']['field_zone_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_zone_tid']['validate']['fail'] = 'empty';
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
    'plate_appearance' => 'plate_appearance',
  );
  $handler->display->display_options['argument_input'] = array(
    'field_batter_target_id' => array(
      'type' => 'panel',
      'context' => 'entity:node.field_batter',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Batter (field_batter)',
    ),
    'field_pitch_type_tid' => array(
      'type' => 'user',
      'context' => 'entity:bean.field_contact_block_address',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Field collection item: Pitch Type (field_pitch_type)',
    ),
    'field_handedness_tid' => array(
      'type' => 'user',
      'context' => 'entity:bean.field_contact_block_address',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Handedness (field_handedness)',
    ),
    'field_zone_tid' => array(
      'type' => 'user',
      'context' => 'entity:bean.field_contact_block_address',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Field collection item: Zone (field_zone)',
    ),
  );

  /* Display: pane - stats adv COPY */
  $handler = $view->new_display('panel_pane', 'pane - stats adv COPY', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'good copy before adding season/position';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['empty'] = TRUE;
  $handler->display->display_options['footer']['php']['php_output'] = '<?php

$cont = "";
$stats = array();
$zonepas = array();
$hits = 0;
$slugtop = 0;
$hardcount = 0;
$weakcount = 0;
$smcount = 0;
$foulcount = 0;
$sacbuntcount = 0;
$sacflycount = 0;
$walkcount = 0;

foreach($results as $row) {
  // collect unique plate appearances
  if(! array_key_exists($row->nid, $zonepas)) {
    $zonepas[$row->nid] = $row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name;
    
    // only compute PA-specific results one time per PA
    if($row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'HR\' || $row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'1B\' || $row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'2B\' || $row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'3B\') {
      $hits++;
    }
    if($row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'SF\') {
      $sacflycount ++;
    }
    if($row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'BB\') {
      $walkcount ++;
    }
    if($row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'1B\') {
      $slugtop += 1;
    }
    if($row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'2B\') {
      $slugtop += 2;
    }
    if($row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'3B\') {
      $slugtop += 3;
    }
    if($row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'HR\') {
      $slugtop += 4;
    }
  }
  if($row->field_field_pitch_result[0][\'raw\'][\'taxonomy_term\']->name == \'SB\') {
    $sacbuntcount ++;
  }
  if($row->field_field_pitch_result[0][\'raw\'][\'taxonomy_term\']->name == \'H\') {
    $hardcount ++;
  }
  if($row->field_field_pitch_result[0][\'raw\'][\'taxonomy_term\']->name == \'W\') {
    $weakcount ++;
  }
  if($row->field_field_pitch_result[0][\'raw\'][\'taxonomy_term\']->name == \'SM\') {
    $smcount ++;
  }
  if($row->field_field_pitch_result[0][\'raw\'][\'taxonomy_term\']->name == \'F\') {
    $foulcount ++;
  }
}

// $view->args[3] contains zone number

$stats[\'ba\'] = (float) $hits / (count($zonepas) - $sacbuntcount - $sacflycount - $walkcount);
$stats[\'slug\'] = (float) $slugtop / (count($zonepas) - $sacbuntcount - $sacflycount - $walkcount);
$stats[\'h\'] = (float) $hardcount / ($hardcount + $weakcount);
$stats[\'w\'] = (float) $weakcount / ($hardcount + $weakcount);
$stats[\'sm\'] = (float) $smcount / ($foulcount + $hardcount + $weakcount);
$stats[\'c\'] = (float) ($smcount + $foulcount + $hardcount + $weakcount) / count($results);

//print_r($stats);

$cont .= "&nbsp;&nbsp;BA: " . (($stats[\'ba\'] < 1) ? substr(sprintf(\'%.3f\', $stats[\'ba\']), 1) : sprintf(\'%.3f\', $stats[\'ba\'])) . "<br />";
$cont .= "&nbsp;&nbsp;Slug: " . (($stats[\'slug\'] < 1) ? substr(sprintf(\'%.3f\', $stats[\'slug\']), 1) : sprintf(\'%.3f\', $stats[\'slug\'])) . "<br />";
$cont .= "&nbsp;&nbsp;H: " . (($stats[\'h\'] < 1) ? substr(sprintf(\'%.3f\', $stats[\'h\']), 1) : sprintf(\'%.3f\', $stats[\'h\'])) . "<br />";
$cont .= "&nbsp;&nbsp;W: " . (($stats[\'w\'] < 1) ? substr(sprintf(\'%.3f\', $stats[\'w\']), 1) : sprintf(\'%.3f\', $stats[\'w\'])) . "<br />";
$cont .= "&nbsp;&nbsp;SM: " . (($stats[\'sm\'] < 1) ? substr(sprintf(\'%.3f\', $stats[\'sm\']), 1) : sprintf(\'%.3f\', $stats[\'sm\']));
if($view->args[3] < 7 || $view->args[3] > 19 || $view->args[3] % 5 == 0 || ($view->args[3] + 4) % 5 == 0) {
  //  strike
  $cont .= "<br />&nbsp;&nbsp;C: " . (($stats[\'c\'] < 1) ? substr(sprintf(\'%.3f\', $stats[\'c\']), 1) : sprintf(\'%.3f\', $stats[\'c\']));
}

$heatmap = sprintf(\'%.3f\',$stats[\'ba\'] + $stats[\'slug\']);
$heatmap = floor($heatmap  * 20) / 20;
if($heatmap > 1.3) {
  $heatmap = 1.3;
}
if($heatmap < 0.2) {
  $heatmap = 0.2;
}
$heatmap = str_replace(\'.\', \'\', $heatmap);


echo "<div class=\\"player-stats-hm-{$heatmap}\\">" . $cont . "</div>";

?>';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
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
  /* Field: Content: Batter */
  $handler->display->display_options['fields']['field_batter']['id'] = 'field_batter';
  $handler->display->display_options['fields']['field_batter']['table'] = 'field_data_field_batter';
  $handler->display->display_options['fields']['field_batter']['field'] = 'field_batter';
  $handler->display->display_options['fields']['field_batter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_batter']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Pitcher */
  $handler->display->display_options['fields']['field_pitcher']['id'] = 'field_pitcher';
  $handler->display->display_options['fields']['field_pitcher']['table'] = 'field_data_field_pitcher';
  $handler->display->display_options['fields']['field_pitcher']['field'] = 'field_pitcher';
  $handler->display->display_options['fields']['field_pitcher']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pitcher']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Result */
  $handler->display->display_options['fields']['field_result']['id'] = 'field_result';
  $handler->display->display_options['fields']['field_result']['table'] = 'field_data_field_result';
  $handler->display->display_options['fields']['field_result']['field'] = 'field_result';
  $handler->display->display_options['fields']['field_result']['label'] = 'PA Result';
  $handler->display->display_options['fields']['field_result']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_result']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Handedness */
  $handler->display->display_options['fields']['field_handedness']['id'] = 'field_handedness';
  $handler->display->display_options['fields']['field_handedness']['table'] = 'field_data_field_handedness';
  $handler->display->display_options['fields']['field_handedness']['field'] = 'field_handedness';
  $handler->display->display_options['fields']['field_handedness']['relationship'] = 'field_pitcher_target_id';
  $handler->display->display_options['fields']['field_handedness']['label'] = 'Pitcher Handedness';
  $handler->display->display_options['fields']['field_handedness']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_handedness']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_handedness']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
    'use_content_language' => 1,
  );
  /* Field: Field collection item: Pitch Result */
  $handler->display->display_options['fields']['field_pitch_result']['id'] = 'field_pitch_result';
  $handler->display->display_options['fields']['field_pitch_result']['table'] = 'field_data_field_pitch_result';
  $handler->display->display_options['fields']['field_pitch_result']['field'] = 'field_pitch_result';
  $handler->display->display_options['fields']['field_pitch_result']['relationship'] = 'field_pitch_value';
  $handler->display->display_options['fields']['field_pitch_result']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pitch_result']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field collection item: Zone */
  $handler->display->display_options['fields']['field_zone']['id'] = 'field_zone';
  $handler->display->display_options['fields']['field_zone']['table'] = 'field_data_field_zone';
  $handler->display->display_options['fields']['field_zone']['field'] = 'field_zone';
  $handler->display->display_options['fields']['field_zone']['relationship'] = 'field_pitch_value';
  $handler->display->display_options['fields']['field_zone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zone']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field collection item: Pitch Type */
  $handler->display->display_options['fields']['field_pitch_type']['id'] = 'field_pitch_type';
  $handler->display->display_options['fields']['field_pitch_type']['table'] = 'field_data_field_pitch_type';
  $handler->display->display_options['fields']['field_pitch_type']['field'] = 'field_pitch_type';
  $handler->display->display_options['fields']['field_pitch_type']['relationship'] = 'field_pitch_value';
  $handler->display->display_options['fields']['field_pitch_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pitch_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Field collection item: Zone (field_zone) */
  $handler->display->display_options['sorts']['field_zone_tid']['id'] = 'field_zone_tid';
  $handler->display->display_options['sorts']['field_zone_tid']['table'] = 'field_data_field_zone';
  $handler->display->display_options['sorts']['field_zone_tid']['field'] = 'field_zone_tid';
  $handler->display->display_options['sorts']['field_zone_tid']['relationship'] = 'field_pitch_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Batter (field_batter) */
  $handler->display->display_options['arguments']['field_batter_target_id']['id'] = 'field_batter_target_id';
  $handler->display->display_options['arguments']['field_batter_target_id']['table'] = 'field_data_field_batter';
  $handler->display->display_options['arguments']['field_batter_target_id']['field'] = 'field_batter_target_id';
  $handler->display->display_options['arguments']['field_batter_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_batter_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_batter_target_id']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['field_batter_target_id']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['field_batter_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_batter_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_batter_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_batter_target_id']['validate']['fail'] = 'empty';
  /* Contextual filter: Field collection item: Pitch Type (field_pitch_type) */
  $handler->display->display_options['arguments']['field_pitch_type_tid']['id'] = 'field_pitch_type_tid';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['table'] = 'field_data_field_pitch_type';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['field'] = 'field_pitch_type_tid';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['relationship'] = 'field_pitch_value';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_pitch_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['validate_options']['vocabularies'] = array(
    'pitch_type' => 'pitch_type',
  );
  $handler->display->display_options['arguments']['field_pitch_type_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['validate']['fail'] = 'empty';
  /* Contextual filter: Content: Handedness (field_handedness) */
  $handler->display->display_options['arguments']['field_handedness_tid']['id'] = 'field_handedness_tid';
  $handler->display->display_options['arguments']['field_handedness_tid']['table'] = 'field_data_field_handedness';
  $handler->display->display_options['arguments']['field_handedness_tid']['field'] = 'field_handedness_tid';
  $handler->display->display_options['arguments']['field_handedness_tid']['relationship'] = 'field_pitcher_target_id';
  $handler->display->display_options['arguments']['field_handedness_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_handedness_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_handedness_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_handedness_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_handedness_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_handedness_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_handedness_tid']['validate_options']['vocabularies'] = array(
    'handedness' => 'handedness',
  );
  $handler->display->display_options['arguments']['field_handedness_tid']['validate_options']['type'] = 'convert';
  /* Contextual filter: Field collection item: Zone (field_zone) */
  $handler->display->display_options['arguments']['field_zone_tid']['id'] = 'field_zone_tid';
  $handler->display->display_options['arguments']['field_zone_tid']['table'] = 'field_data_field_zone';
  $handler->display->display_options['arguments']['field_zone_tid']['field'] = 'field_zone_tid';
  $handler->display->display_options['arguments']['field_zone_tid']['relationship'] = 'field_pitch_value';
  $handler->display->display_options['arguments']['field_zone_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_zone_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_zone_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_zone_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_zone_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_zone_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_zone_tid']['validate_options']['vocabularies'] = array(
    'zone_number' => 'zone_number',
  );
  $handler->display->display_options['arguments']['field_zone_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_zone_tid']['validate']['fail'] = 'empty';
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
    'plate_appearance' => 'plate_appearance',
  );
  $handler->display->display_options['argument_input'] = array(
    'field_batter_target_id' => array(
      'type' => 'panel',
      'context' => 'entity:node.field_batter',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Batter (field_batter)',
    ),
    'field_pitch_type_tid' => array(
      'type' => 'user',
      'context' => 'entity:bean.field_contact_block_address',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Field collection item: Pitch Type (field_pitch_type)',
    ),
    'field_handedness_tid' => array(
      'type' => 'user',
      'context' => 'entity:bean.field_contact_block_address',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Handedness (field_handedness)',
    ),
    'field_zone_tid' => array(
      'type' => 'user',
      'context' => 'entity:bean.field_contact_block_address',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Field collection item: Zone (field_zone)',
    ),
  );

  /* Display: pane - stats adv COPY */
  $handler = $view->new_display('panel_pane', 'pane - stats adv COPY', 'panel_pane_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'working copy of view with year arg but hitter only';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['empty'] = TRUE;
  $handler->display->display_options['footer']['php']['php_output'] = '<?php

$cont = "";
$stats = array();
$zonepas = array();
$hits = 0;
$slugtop = 0;
$hardcount = 0;
$weakcount = 0;
$smcount = 0;
$foulcount = 0;
$sacbuntcount = 0;
$sacflycount = 0;
$walkcount = 0;

foreach($results as $row) {
  // collect unique plate appearances
  if(! array_key_exists($row->nid, $zonepas)) {
    $zonepas[$row->nid] = $row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name;
    
    // only compute PA-specific results one time per PA
    if($row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'HR\' || $row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'1B\' || $row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'2B\' || $row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'3B\') {
      $hits++;
    }
    if($row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'SF\') {
      $sacflycount ++;
    }
    if($row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'BB\') {
      $walkcount ++;
    }
    if($row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'1B\') {
      $slugtop += 1;
    }
    if($row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'2B\') {
      $slugtop += 2;
    }
    if($row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'3B\') {
      $slugtop += 3;
    }
    if($row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'HR\') {
      $slugtop += 4;
    }
  }
  if($row->field_field_pitch_result[0][\'raw\'][\'taxonomy_term\']->name == \'SB\') {
    $sacbuntcount ++;
  }
  if($row->field_field_pitch_result[0][\'raw\'][\'taxonomy_term\']->name == \'H\') {
    $hardcount ++;
  }
  if($row->field_field_pitch_result[0][\'raw\'][\'taxonomy_term\']->name == \'W\') {
    $weakcount ++;
  }
  if($row->field_field_pitch_result[0][\'raw\'][\'taxonomy_term\']->name == \'SM\') {
    $smcount ++;
  }
  if($row->field_field_pitch_result[0][\'raw\'][\'taxonomy_term\']->name == \'F\') {
    $foulcount ++;
  }
}

// $view->args[3] contains zone number

$stats[\'ba\'] = (float) $hits / (count($zonepas) - $sacbuntcount - $sacflycount - $walkcount);
$stats[\'slug\'] = (float) $slugtop / (count($zonepas) - $sacbuntcount - $sacflycount - $walkcount);
$stats[\'h\'] = (float) $hardcount / ($hardcount + $weakcount);
$stats[\'w\'] = (float) $weakcount / ($hardcount + $weakcount);
$stats[\'sm\'] = (float) $smcount / ($foulcount + $hardcount + $weakcount);
$stats[\'c\'] = (float) ($smcount + $foulcount + $hardcount + $weakcount) / count($results);

//print_r($stats);

$cont .= "&nbsp;&nbsp;BA: " . (($stats[\'ba\'] < 1) ? substr(sprintf(\'%.3f\', $stats[\'ba\']), 1) : sprintf(\'%.3f\', $stats[\'ba\'])) . "<br />";
$cont .= "&nbsp;&nbsp;Slug: " . (($stats[\'slug\'] < 1) ? substr(sprintf(\'%.3f\', $stats[\'slug\']), 1) : sprintf(\'%.3f\', $stats[\'slug\'])) . "<br />";
$cont .= "&nbsp;&nbsp;H: " . (($stats[\'h\'] < 1) ? substr(sprintf(\'%.3f\', $stats[\'h\']), 1) : sprintf(\'%.3f\', $stats[\'h\'])) . "<br />";
$cont .= "&nbsp;&nbsp;W: " . (($stats[\'w\'] < 1) ? substr(sprintf(\'%.3f\', $stats[\'w\']), 1) : sprintf(\'%.3f\', $stats[\'w\'])) . "<br />";
$cont .= "&nbsp;&nbsp;SM: " . (($stats[\'sm\'] < 1) ? substr(sprintf(\'%.3f\', $stats[\'sm\']), 1) : sprintf(\'%.3f\', $stats[\'sm\']));
if($view->args[4] < 7 || $view->args[4] > 19 || $view->args[4] % 5 == 0 || ($view->args[4] + 4) % 5 == 0) {
  //  strike
  $cont .= "<br />&nbsp;&nbsp;C: " . (($stats[\'c\'] < 1) ? substr(sprintf(\'%.3f\', $stats[\'c\']), 1) : sprintf(\'%.3f\', $stats[\'c\']));
}

$heatmap = sprintf(\'%.3f\',$stats[\'ba\'] + $stats[\'slug\']);
$heatmap = floor($heatmap  * 20) / 20;
if($heatmap > 1.3) {
  $heatmap = 1.3;
}
if($heatmap < 0.2) {
  $heatmap = 0.2;
}
$heatmap = str_replace(\'.\', \'\', $heatmap);


echo "<div class=\\"player-stats-hm-{$heatmap}\\">" . $cont . "</div>";

?>';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
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
  /* Field: Content: Batter */
  $handler->display->display_options['fields']['field_batter']['id'] = 'field_batter';
  $handler->display->display_options['fields']['field_batter']['table'] = 'field_data_field_batter';
  $handler->display->display_options['fields']['field_batter']['field'] = 'field_batter';
  $handler->display->display_options['fields']['field_batter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_batter']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Pitcher */
  $handler->display->display_options['fields']['field_pitcher']['id'] = 'field_pitcher';
  $handler->display->display_options['fields']['field_pitcher']['table'] = 'field_data_field_pitcher';
  $handler->display->display_options['fields']['field_pitcher']['field'] = 'field_pitcher';
  $handler->display->display_options['fields']['field_pitcher']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pitcher']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Result */
  $handler->display->display_options['fields']['field_result']['id'] = 'field_result';
  $handler->display->display_options['fields']['field_result']['table'] = 'field_data_field_result';
  $handler->display->display_options['fields']['field_result']['field'] = 'field_result';
  $handler->display->display_options['fields']['field_result']['label'] = 'PA Result';
  $handler->display->display_options['fields']['field_result']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_result']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Handedness */
  $handler->display->display_options['fields']['field_handedness']['id'] = 'field_handedness';
  $handler->display->display_options['fields']['field_handedness']['table'] = 'field_data_field_handedness';
  $handler->display->display_options['fields']['field_handedness']['field'] = 'field_handedness';
  $handler->display->display_options['fields']['field_handedness']['relationship'] = 'field_pitcher_target_id';
  $handler->display->display_options['fields']['field_handedness']['label'] = 'Pitcher Handedness';
  $handler->display->display_options['fields']['field_handedness']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_handedness']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_handedness']['settings'] = array(
    'view_mode' => 'default',
    'links' => 1,
    'use_content_language' => 1,
  );
  /* Field: Field collection item: Pitch Result */
  $handler->display->display_options['fields']['field_pitch_result']['id'] = 'field_pitch_result';
  $handler->display->display_options['fields']['field_pitch_result']['table'] = 'field_data_field_pitch_result';
  $handler->display->display_options['fields']['field_pitch_result']['field'] = 'field_pitch_result';
  $handler->display->display_options['fields']['field_pitch_result']['relationship'] = 'field_pitch_value';
  $handler->display->display_options['fields']['field_pitch_result']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pitch_result']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field collection item: Zone */
  $handler->display->display_options['fields']['field_zone']['id'] = 'field_zone';
  $handler->display->display_options['fields']['field_zone']['table'] = 'field_data_field_zone';
  $handler->display->display_options['fields']['field_zone']['field'] = 'field_zone';
  $handler->display->display_options['fields']['field_zone']['relationship'] = 'field_pitch_value';
  $handler->display->display_options['fields']['field_zone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zone']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field collection item: Pitch Type */
  $handler->display->display_options['fields']['field_pitch_type']['id'] = 'field_pitch_type';
  $handler->display->display_options['fields']['field_pitch_type']['table'] = 'field_data_field_pitch_type';
  $handler->display->display_options['fields']['field_pitch_type']['field'] = 'field_pitch_type';
  $handler->display->display_options['fields']['field_pitch_type']['relationship'] = 'field_pitch_value';
  $handler->display->display_options['fields']['field_pitch_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pitch_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Field collection item: Zone (field_zone) */
  $handler->display->display_options['sorts']['field_zone_tid']['id'] = 'field_zone_tid';
  $handler->display->display_options['sorts']['field_zone_tid']['table'] = 'field_data_field_zone';
  $handler->display->display_options['sorts']['field_zone_tid']['field'] = 'field_zone_tid';
  $handler->display->display_options['sorts']['field_zone_tid']['relationship'] = 'field_pitch_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Batter (field_batter) */
  $handler->display->display_options['arguments']['field_batter_target_id']['id'] = 'field_batter_target_id';
  $handler->display->display_options['arguments']['field_batter_target_id']['table'] = 'field_data_field_batter';
  $handler->display->display_options['arguments']['field_batter_target_id']['field'] = 'field_batter_target_id';
  $handler->display->display_options['arguments']['field_batter_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_batter_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_batter_target_id']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['field_batter_target_id']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['field_batter_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_batter_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_batter_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_batter_target_id']['validate']['fail'] = 'empty';
  /* Contextual filter: Content: Game Date (field_game_date) */
  $handler->display->display_options['arguments']['field_game_date_value']['id'] = 'field_game_date_value';
  $handler->display->display_options['arguments']['field_game_date_value']['table'] = 'field_data_field_game_date';
  $handler->display->display_options['arguments']['field_game_date_value']['field'] = 'field_game_date_value';
  $handler->display->display_options['arguments']['field_game_date_value']['relationship'] = 'field_game_target_id';
  $handler->display->display_options['arguments']['field_game_date_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_game_date_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_game_date_value']['default_argument_options']['code'] = 'return date(\'Y\');';
  $handler->display->display_options['arguments']['field_game_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_game_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_game_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_game_date_value']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_game_date_value']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['field_game_date_value']['granularity'] = 'year';
  $handler->display->display_options['arguments']['field_game_date_value']['granularity_reset'] = 0;
  /* Contextual filter: Field collection item: Pitch Type (field_pitch_type) */
  $handler->display->display_options['arguments']['field_pitch_type_tid']['id'] = 'field_pitch_type_tid';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['table'] = 'field_data_field_pitch_type';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['field'] = 'field_pitch_type_tid';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['relationship'] = 'field_pitch_value';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_pitch_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['validate_options']['vocabularies'] = array(
    'pitch_type' => 'pitch_type',
  );
  $handler->display->display_options['arguments']['field_pitch_type_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['validate']['fail'] = 'empty';
  /* Contextual filter: Content: Handedness (field_handedness) */
  $handler->display->display_options['arguments']['field_handedness_tid']['id'] = 'field_handedness_tid';
  $handler->display->display_options['arguments']['field_handedness_tid']['table'] = 'field_data_field_handedness';
  $handler->display->display_options['arguments']['field_handedness_tid']['field'] = 'field_handedness_tid';
  $handler->display->display_options['arguments']['field_handedness_tid']['relationship'] = 'field_pitcher_target_id';
  $handler->display->display_options['arguments']['field_handedness_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_handedness_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_handedness_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_handedness_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_handedness_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_handedness_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_handedness_tid']['validate_options']['vocabularies'] = array(
    'handedness' => 'handedness',
  );
  $handler->display->display_options['arguments']['field_handedness_tid']['validate_options']['type'] = 'convert';
  /* Contextual filter: Field collection item: Zone (field_zone) */
  $handler->display->display_options['arguments']['field_zone_tid']['id'] = 'field_zone_tid';
  $handler->display->display_options['arguments']['field_zone_tid']['table'] = 'field_data_field_zone';
  $handler->display->display_options['arguments']['field_zone_tid']['field'] = 'field_zone_tid';
  $handler->display->display_options['arguments']['field_zone_tid']['relationship'] = 'field_pitch_value';
  $handler->display->display_options['arguments']['field_zone_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_zone_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_zone_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_zone_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_zone_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_zone_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_zone_tid']['validate_options']['vocabularies'] = array(
    'zone_number' => 'zone_number',
  );
  $handler->display->display_options['arguments']['field_zone_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_zone_tid']['validate']['fail'] = 'empty';
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
    'plate_appearance' => 'plate_appearance',
  );
  $handler->display->display_options['argument_input'] = array(
    'field_batter_target_id' => array(
      'type' => 'panel',
      'context' => 'entity:node.field_batter',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Batter (field_batter)',
    ),
    'field_game_date_value' => array(
      'type' => 'panel',
      'context' => 'entity:bean.field-contact-block-address',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Game Date (field_game_date)',
    ),
    'field_pitch_type_tid' => array(
      'type' => 'user',
      'context' => 'entity:bean.field_contact_block_address',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Field collection item: Pitch Type (field_pitch_type)',
    ),
    'field_handedness_tid' => array(
      'type' => 'user',
      'context' => 'entity:bean.field_contact_block_address',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Handedness (field_handedness)',
    ),
    'field_zone_tid' => array(
      'type' => 'user',
      'context' => 'entity:bean.field_contact_block_address',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Field collection item: Zone (field_zone)',
    ),
  );

  /* Display: pane - stats adv pitcher */
  $handler = $view->new_display('panel_pane', 'pane - stats adv pitcher', 'panel_pane_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'active view display';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['empty'] = TRUE;
  $handler->display->display_options['footer']['php']['php_output'] = '<?php

$cont = "";
$stats = array();
$zonepas = array();
$hits = 0;
$slugtop = 0;
$hardcount = 0;
$weakcount = 0;
$smcount = 0;
$foulcount = 0;
$sacbuntcount = 0;
$sacflycount = 0;
$walkcount = 0;

foreach($results as $row) {
  // collect unique plate appearances
  if(! array_key_exists($row->nid, $zonepas) && ($row->field_field_pitch_result[0][\'raw\'][\'taxonomy_term\']->name == \'H\' || $row->field_field_pitch_result[0][\'raw\'][\'taxonomy_term\']->name == \'W\')) {
    $zonepas[$row->nid] = $row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name;
    
    // only compute PA-specific results one time per PA
    if($row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'HR\' || $row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'1B\' || $row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'2B\' || $row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'3B\') {
      $hits++;
    }
    if($row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'SF\') {
      $sacflycount ++;
    }
    if($row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'BB\') {
      $walkcount ++;
    }
    if($row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'1B\') {
      $slugtop += 1;
    }
    if($row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'2B\') {
      $slugtop += 2;
    }
    if($row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'3B\') {
      $slugtop += 3;
    }
    if($row->field_field_result[0][\'raw\'][\'taxonomy_term\']->name == \'HR\') {
      $slugtop += 4;
    }
  }
  if($row->field_field_pitch_result[0][\'raw\'][\'taxonomy_term\']->name == \'SB\') {
    $sacbuntcount ++;
  }
  if($row->field_field_pitch_result[0][\'raw\'][\'taxonomy_term\']->name == \'H\') {
    $hardcount ++;
  }
  if($row->field_field_pitch_result[0][\'raw\'][\'taxonomy_term\']->name == \'W\') {
    $weakcount ++;
  }
  if($row->field_field_pitch_result[0][\'raw\'][\'taxonomy_term\']->name == \'SM\') {
    $smcount ++;
  }
  if($row->field_field_pitch_result[0][\'raw\'][\'taxonomy_term\']->name == \'F\') {
    $foulcount ++;
  }
}

// $view->args[4] contains zone number

$stats[\'ba\'] = (float) $hits / (count($zonepas) - $sacbuntcount - $sacflycount - $walkcount);
$stats[\'slug\'] = (float) $slugtop / (count($zonepas) - $sacbuntcount - $sacflycount - $walkcount);
$stats[\'h\'] = (float) $hardcount / ($hardcount + $weakcount);
$stats[\'w\'] = (float) $weakcount / ($hardcount + $weakcount);
$stats[\'sm\'] = (float) $smcount / ($smcount + $foulcount + $hardcount + $weakcount);
$stats[\'c\'] = (float) ($smcount + $foulcount + $hardcount + $weakcount) / count($results);

//print_r($stats);

$cont .= "&nbsp;&nbsp;BA: " . (($stats[\'ba\'] < 1) ? substr(sprintf(\'%.3f\', $stats[\'ba\']), 1) : sprintf(\'%.3f\', $stats[\'ba\'])) . "<br />";
$cont .= "&nbsp;&nbsp;Slug: " . (($stats[\'slug\'] < 1) ? substr(sprintf(\'%.3f\', $stats[\'slug\']), 1) : sprintf(\'%.3f\', $stats[\'slug\'])) . "<br />";
$cont .= "&nbsp;&nbsp;H: " . (($stats[\'h\'] < 1) ? substr(sprintf(\'%.3f\', $stats[\'h\']), 1) : sprintf(\'%.3f\', $stats[\'h\'])) . "<br />";
$cont .= "&nbsp;&nbsp;W: " . (($stats[\'w\'] < 1) ? substr(sprintf(\'%.3f\', $stats[\'w\']), 1) : sprintf(\'%.3f\', $stats[\'w\'])) . "<br />";
$cont .= "&nbsp;&nbsp;SM: " . (($stats[\'sm\'] < 1) ? substr(sprintf(\'%.3f\', $stats[\'sm\']), 1) : sprintf(\'%.3f\', $stats[\'sm\']));
if($view->args[4] < 7 || $view->args[4] > 19 || $view->args[4] % 5 == 0 || ($view->args[4] + 4) % 5 == 0) {
  //  strike
  $cont .= "<br />&nbsp;&nbsp;C: " . (($stats[\'c\'] < 1) ? substr(sprintf(\'%.3f\', $stats[\'c\']), 1) : sprintf(\'%.3f\', $stats[\'c\']));
}

$heatmap = sprintf(\'%.3f\',$stats[\'ba\'] + $stats[\'slug\']);
$heatmap = floor($heatmap  * 20) / 20;
if($heatmap > 1.3) {
  $heatmap = 1.3;
}
if($heatmap < 0.2) {
  $heatmap = 0.2;
}
$heatmap = str_replace(\'.\', \'\', $heatmap);


echo "<div class=\\"player-stats-hm-{$heatmap}\\">" . $cont . "</div>";

?>';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_batter_target_id']['id'] = 'field_batter_target_id';
  $handler->display->display_options['relationships']['field_batter_target_id']['table'] = 'field_data_field_batter';
  $handler->display->display_options['relationships']['field_batter_target_id']['field'] = 'field_batter_target_id';
  /* Relationship: Content: Pitch (field_pitch) */
  $handler->display->display_options['relationships']['field_pitch_value']['id'] = 'field_pitch_value';
  $handler->display->display_options['relationships']['field_pitch_value']['table'] = 'field_data_field_pitch';
  $handler->display->display_options['relationships']['field_pitch_value']['field'] = 'field_pitch_value';
  $handler->display->display_options['relationships']['field_pitch_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_game_target_id']['id'] = 'field_game_target_id';
  $handler->display->display_options['relationships']['field_game_target_id']['table'] = 'field_data_field_game';
  $handler->display->display_options['relationships']['field_game_target_id']['field'] = 'field_game_target_id';
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
  /* Field: Content: Batter */
  $handler->display->display_options['fields']['field_batter']['id'] = 'field_batter';
  $handler->display->display_options['fields']['field_batter']['table'] = 'field_data_field_batter';
  $handler->display->display_options['fields']['field_batter']['field'] = 'field_batter';
  $handler->display->display_options['fields']['field_batter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_batter']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Pitcher */
  $handler->display->display_options['fields']['field_pitcher']['id'] = 'field_pitcher';
  $handler->display->display_options['fields']['field_pitcher']['table'] = 'field_data_field_pitcher';
  $handler->display->display_options['fields']['field_pitcher']['field'] = 'field_pitcher';
  $handler->display->display_options['fields']['field_pitcher']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pitcher']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Result */
  $handler->display->display_options['fields']['field_result']['id'] = 'field_result';
  $handler->display->display_options['fields']['field_result']['table'] = 'field_data_field_result';
  $handler->display->display_options['fields']['field_result']['field'] = 'field_result';
  $handler->display->display_options['fields']['field_result']['label'] = 'PA Result';
  $handler->display->display_options['fields']['field_result']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_result']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Handedness */
  $handler->display->display_options['fields']['field_handedness_1']['id'] = 'field_handedness_1';
  $handler->display->display_options['fields']['field_handedness_1']['table'] = 'field_data_field_handedness';
  $handler->display->display_options['fields']['field_handedness_1']['field'] = 'field_handedness';
  $handler->display->display_options['fields']['field_handedness_1']['relationship'] = 'field_batter_target_id';
  $handler->display->display_options['fields']['field_handedness_1']['label'] = 'Batter Handedness';
  $handler->display->display_options['fields']['field_handedness_1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field collection item: Pitch Result */
  $handler->display->display_options['fields']['field_pitch_result']['id'] = 'field_pitch_result';
  $handler->display->display_options['fields']['field_pitch_result']['table'] = 'field_data_field_pitch_result';
  $handler->display->display_options['fields']['field_pitch_result']['field'] = 'field_pitch_result';
  $handler->display->display_options['fields']['field_pitch_result']['relationship'] = 'field_pitch_value';
  $handler->display->display_options['fields']['field_pitch_result']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pitch_result']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field collection item: Zone */
  $handler->display->display_options['fields']['field_zone']['id'] = 'field_zone';
  $handler->display->display_options['fields']['field_zone']['table'] = 'field_data_field_zone';
  $handler->display->display_options['fields']['field_zone']['field'] = 'field_zone';
  $handler->display->display_options['fields']['field_zone']['relationship'] = 'field_pitch_value';
  $handler->display->display_options['fields']['field_zone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_zone']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Field collection item: Pitch Type */
  $handler->display->display_options['fields']['field_pitch_type']['id'] = 'field_pitch_type';
  $handler->display->display_options['fields']['field_pitch_type']['table'] = 'field_data_field_pitch_type';
  $handler->display->display_options['fields']['field_pitch_type']['field'] = 'field_pitch_type';
  $handler->display->display_options['fields']['field_pitch_type']['relationship'] = 'field_pitch_value';
  $handler->display->display_options['fields']['field_pitch_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pitch_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Field collection item: Zone (field_zone) */
  $handler->display->display_options['sorts']['field_zone_tid']['id'] = 'field_zone_tid';
  $handler->display->display_options['sorts']['field_zone_tid']['table'] = 'field_data_field_zone';
  $handler->display->display_options['sorts']['field_zone_tid']['field'] = 'field_zone_tid';
  $handler->display->display_options['sorts']['field_zone_tid']['relationship'] = 'field_pitch_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Pitcher (field_pitcher) */
  $handler->display->display_options['arguments']['field_pitcher_target_id']['id'] = 'field_pitcher_target_id';
  $handler->display->display_options['arguments']['field_pitcher_target_id']['table'] = 'field_data_field_pitcher';
  $handler->display->display_options['arguments']['field_pitcher_target_id']['field'] = 'field_pitcher_target_id';
  $handler->display->display_options['arguments']['field_pitcher_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_pitcher_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_pitcher_target_id']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['field_pitcher_target_id']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['field_pitcher_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_pitcher_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_pitcher_target_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Game Date (field_game_date) */
  $handler->display->display_options['arguments']['field_game_date_value']['id'] = 'field_game_date_value';
  $handler->display->display_options['arguments']['field_game_date_value']['table'] = 'field_data_field_game_date';
  $handler->display->display_options['arguments']['field_game_date_value']['field'] = 'field_game_date_value';
  $handler->display->display_options['arguments']['field_game_date_value']['relationship'] = 'field_game_target_id';
  $handler->display->display_options['arguments']['field_game_date_value']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_game_date_value']['default_argument_options']['code'] = 'return date(\'Y\');';
  $handler->display->display_options['arguments']['field_game_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_game_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_game_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_game_date_value']['validate']['fail'] = 'empty';
  $handler->display->display_options['arguments']['field_game_date_value']['granularity'] = 'year';
  $handler->display->display_options['arguments']['field_game_date_value']['granularity_reset'] = 0;
  /* Contextual filter: Field collection item: Pitch Type (field_pitch_type) */
  $handler->display->display_options['arguments']['field_pitch_type_tid']['id'] = 'field_pitch_type_tid';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['table'] = 'field_data_field_pitch_type';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['field'] = 'field_pitch_type_tid';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['relationship'] = 'field_pitch_value';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_pitch_type_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['validate_options']['vocabularies'] = array(
    'pitch_type' => 'pitch_type',
  );
  $handler->display->display_options['arguments']['field_pitch_type_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_pitch_type_tid']['validate']['fail'] = 'empty';
  /* Contextual filter: Content: Handedness (field_handedness) */
  $handler->display->display_options['arguments']['field_handedness_tid']['id'] = 'field_handedness_tid';
  $handler->display->display_options['arguments']['field_handedness_tid']['table'] = 'field_data_field_handedness';
  $handler->display->display_options['arguments']['field_handedness_tid']['field'] = 'field_handedness_tid';
  $handler->display->display_options['arguments']['field_handedness_tid']['relationship'] = 'field_batter_target_id';
  $handler->display->display_options['arguments']['field_handedness_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_handedness_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_handedness_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_handedness_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_handedness_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_handedness_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_handedness_tid']['validate_options']['vocabularies'] = array(
    'handedness' => 'handedness',
  );
  $handler->display->display_options['arguments']['field_handedness_tid']['validate_options']['type'] = 'convert';
  /* Contextual filter: Field collection item: Zone (field_zone) */
  $handler->display->display_options['arguments']['field_zone_tid']['id'] = 'field_zone_tid';
  $handler->display->display_options['arguments']['field_zone_tid']['table'] = 'field_data_field_zone';
  $handler->display->display_options['arguments']['field_zone_tid']['field'] = 'field_zone_tid';
  $handler->display->display_options['arguments']['field_zone_tid']['relationship'] = 'field_pitch_value';
  $handler->display->display_options['arguments']['field_zone_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_zone_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_zone_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_zone_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_zone_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_zone_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_zone_tid']['validate_options']['vocabularies'] = array(
    'zone_number' => 'zone_number',
  );
  $handler->display->display_options['arguments']['field_zone_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_zone_tid']['validate']['fail'] = 'empty';
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
    'plate_appearance' => 'plate_appearance',
  );
  $handler->display->display_options['argument_input'] = array(
    'field_pitcher_target_id' => array(
      'type' => 'panel',
      'context' => 'entity:bean.field-contact-block-address',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Pitcher (field_pitcher)',
    ),
    'field_game_date_value' => array(
      'type' => 'panel',
      'context' => 'entity:bean.field-contact-block-address',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Game Date (field_game_date)',
    ),
    'field_pitch_type_tid' => array(
      'type' => 'user',
      'context' => 'entity:bean.field_contact_block_address',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Field collection item: Pitch Type (field_pitch_type)',
    ),
    'field_handedness_tid' => array(
      'type' => 'user',
      'context' => 'entity:bean.field_contact_block_address',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Handedness (field_handedness)',
    ),
    'field_zone_tid' => array(
      'type' => 'user',
      'context' => 'entity:bean.field_contact_block_address',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Field collection item: Zone (field_zone)',
    ),
  );

  /* Display: pane - pitcher title */
  $handler = $view->new_display('panel_pane', 'pane - pitcher title', 'panel_pane_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Player Statistics for %nid:field-player-last-name, %nid:field-player-first-name (%nid:field-team)';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
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
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_player_last_name']['id'] = 'field_player_last_name';
  $handler->display->display_options['fields']['field_player_last_name']['table'] = 'field_data_field_player_last_name';
  $handler->display->display_options['fields']['field_player_last_name']['field'] = 'field_player_last_name';
  $handler->display->display_options['fields']['field_player_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_player_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_player_last_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_player_last_name']['type'] = 'text_plain';
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_player_first_name']['id'] = 'field_player_first_name';
  $handler->display->display_options['fields']['field_player_first_name']['table'] = 'field_data_field_player_first_name';
  $handler->display->display_options['fields']['field_player_first_name']['field'] = 'field_player_first_name';
  $handler->display->display_options['fields']['field_player_first_name']['label'] = '';
  $handler->display->display_options['fields']['field_player_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_player_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_player_first_name']['type'] = 'text_plain';
  /* Field: Content: Handedness */
  $handler->display->display_options['fields']['field_handedness']['id'] = 'field_handedness';
  $handler->display->display_options['fields']['field_handedness']['table'] = 'field_data_field_handedness';
  $handler->display->display_options['fields']['field_handedness']['field'] = 'field_handedness';
  $handler->display->display_options['fields']['field_handedness']['label'] = '';
  $handler->display->display_options['fields']['field_handedness']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_handedness']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_handedness']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Team */
  $handler->display->display_options['fields']['field_team']['id'] = 'field_team';
  $handler->display->display_options['fields']['field_team']['table'] = 'field_data_field_team';
  $handler->display->display_options['fields']['field_team']['field'] = 'field_team';
  $handler->display->display_options['fields']['field_team']['label'] = '';
  $handler->display->display_options['fields']['field_team']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_team']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_team']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: Team */
  $handler->display->display_options['fields']['field_team_1']['id'] = 'field_team_1';
  $handler->display->display_options['fields']['field_team_1']['table'] = 'field_data_field_team';
  $handler->display->display_options['fields']['field_team_1']['field'] = 'field_team';
  $handler->display->display_options['fields']['field_team_1']['label'] = '';
  $handler->display->display_options['fields']['field_team_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_team_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_team_1']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_team_1']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
  $args = arg();
  $viewyear = (count($args) < 4) ? \'all\' : $args[3];
  if(is_numeric($viewyear)) {
    echo "<h3>{$viewyear} Statistics</h3>";
    echo \'<a href="\' . base_path() . \'player-stats/pitching/\' . $args[2] . \'/all" id="player_stats_link">view cumulative statistics</a>\';
  } else {
    echo "<h3>Cumulative Statistics</h3>";
    echo \'<a href="\' . base_path() . \'player-stats/pitching/\' . $args[2] . \'/\' . date(\'Y\') . \'" id="player_stats_link">view current season statistics</a>\';
  }
?>
<div id="player_stats_nav"><a href="<?php echo base_path() . "player-stats/batting/" . $args[2] . "/" . $viewyear; ?>" id="player_stats_nav_link">Batting Stats</a><span id="player_stats_nav_separator"> &nbsp; | &nbsp; </span>Pitching Stats</div>
<?php
  echo $data->field_field_player_first_name[0][\'raw\'][\'value\'] . " " . $data->field_field_player_last_name[0][\'raw\'][\'value\'] . " is a " . strtolower($data->field_field_handedness[0][\'raw\'][\'taxonomy_term\']->name) . "-handed pitcher for <a href=\\"" . base_path() . "all-players?field_team_target_id={$data->field_field_team_1[0][\'raw\'][\'target_id\']}";
  if(is_numeric($viewyear)) {
    echo \'tid=\' . key(taxonomy_get_term_by_name($viewyear, \'season\'));
  }
  echo "\\">{$data->field_field_team_1[0][\'raw\'][\'entity\']->title}</a>.";
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'player' => 'player',
  );
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'panel',
      'context' => 'entity:bean.field_contact_block_address',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
    'field_game_date_value' => array(
      'type' => 'panel',
      'context' => 'entity:bean.field-contact-block-address',
      'context_optional' => 0,
      'panel' => '1',
      'fixed' => '',
      'label' => 'Content: Game Date (field_game_date)',
    ),
  );
  $export['player_stats'] = $view;

  return $export;
}
