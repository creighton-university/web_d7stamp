<?php
/**
 * @file
 * baseball_stats.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function baseball_stats_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'player_stats_panel';
  $page->task = 'page';
  $page->admin_title = 'player_stats_batting_panel';
  $page->admin_description = '';
  $page->path = 'player-stats/batting/%nid';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'nid' => array(
      'id' => 1,
      'identifier' => 'Content: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_player_stats_panel__panel';
  $handler->task = 'page';
  $handler->subtask = 'player_stats_panel';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible:baseball_grid';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
          1 => 8,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_2',
          1 => 'left_1',
          2 => 'center',
          3 => 'right_2',
          4 => 'right_1',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '20',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'left_1' => array(
        'type' => 'region',
        'title' => 'left 1',
        'width' => '20',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_2' => array(
        'type' => 'region',
        'title' => 'left 2',
        'width' => '20',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right_2' => array(
        'type' => 'region',
        'title' => 'right 1',
        'width' => '20',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right_1' => array(
        'type' => 'region',
        'title' => 'right 2',
        'width' => '20',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_2_',
          1 => 'left_1_',
          2 => 'center_',
          3 => 'right_2_',
          4 => 'right_1_',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_2__',
          1 => 'left_2___',
          2 => 'center__',
          3 => 'right_1__',
          4 => 'right_1___',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_1__',
          1 => 'left_1___',
          2 => 'center___',
          3 => 'right_1____',
          4 => 'right_2__',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_2____',
          1 => 'left_1____',
          2 => 'center____',
          3 => 'right_1_____',
          4 => 'right_2___',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_2_' => array(
        'type' => 'region',
        'title' => 'left 2',
        'width' => '20',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_1_' => array(
        'type' => 'region',
        'title' => 'left 1',
        'width' => '20',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'center_' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '20',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right_2_' => array(
        'type' => 'region',
        'title' => 'right 1',
        'width' => '20',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right_1_' => array(
        'type' => 'region',
        'title' => 'right 2',
        'width' => '20',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_2__' => array(
        'type' => 'region',
        'title' => 'left 2',
        'width' => 20,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_2___' => array(
        'type' => 'region',
        'title' => 'left 1',
        'width' => 20,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'center__' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 20,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right_1__' => array(
        'type' => 'region',
        'title' => 'right 1',
        'width' => 20,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right_1___' => array(
        'type' => 'region',
        'title' => 'right 2',
        'width' => 20,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_1__' => array(
        'type' => 'region',
        'title' => 'left 2',
        'width' => 20,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_1___' => array(
        'type' => 'region',
        'title' => 'left 1',
        'width' => 20,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'center___' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 20,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right_1____' => array(
        'type' => 'region',
        'title' => 'right 1',
        'width' => 20,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right_2__' => array(
        'type' => 'region',
        'title' => 'right 2',
        'width' => 20,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_2____' => array(
        'type' => 'region',
        'title' => 'left 2',
        'width' => 20,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_1____' => array(
        'type' => 'region',
        'title' => 'left 1',
        'width' => 20,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'center____' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 20,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right_1_____' => array(
        'type' => 'region',
        'title' => 'right 1',
        'width' => 20,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right_2___' => array(
        'type' => 'region',
        'title' => 'right 2',
        'width' => 20,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      8 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 9,
          1 => 10,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      9 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_2_____',
          1 => 'left_1_____',
          2 => 'center_____',
          3 => 'right_1______',
          4 => 'right_2____',
        ),
        'parent' => '8',
        'class' => '',
        'hide_empty' => 0,
      ),
      10 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_2______',
          1 => 'left_1______',
          2 => 'center______',
          3 => 'right_1_______',
          4 => 'right_2_____',
        ),
        'parent' => '8',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_1_____' => array(
        'type' => 'region',
        'title' => 'left 1',
        'width' => '20.0084210009641',
        'width_type' => '%',
        'parent' => '9',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_2_____' => array(
        'type' => 'region',
        'title' => 'left 2',
        'width' => '20.018950893267835',
        'width_type' => '%',
        'parent' => '9',
        'class' => '',
        'hide_empty' => 0,
      ),
      'center_____' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '20.02420043937467',
        'width_type' => '%',
        'parent' => '9',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right_1______' => array(
        'type' => 'region',
        'title' => 'right 1',
        'width' => '20.00312286194848',
        'width_type' => '%',
        'parent' => '9',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right_2____' => array(
        'type' => 'region',
        'title' => 'right 2',
        'width' => '19.94530480444492',
        'width_type' => '%',
        'parent' => '9',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_2______' => array(
        'type' => 'region',
        'title' => 'left 2',
        'width' => '19.98407851121029',
        'width_type' => '%',
        'parent' => '10',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_1______' => array(
        'type' => 'region',
        'title' => 'left 1',
        'width' => '19.98451819195512',
        'width_type' => '%',
        'parent' => '10',
        'class' => '',
        'hide_empty' => 0,
      ),
      'center______' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '20.00125281012607',
        'width_type' => '%',
        'parent' => '10',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right_1_______' => array(
        'type' => 'region',
        'title' => 'right 1',
        'width' => '20.011880750853553',
        'width_type' => '%',
        'parent' => '10',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right_2_____' => array(
        'type' => 'region',
        'title' => 'right 2',
        'width' => '20.01826973585497',
        'width_type' => '%',
        'parent' => '10',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right' => NULL,
      'top' => NULL,
      'left_1' => NULL,
      'left_2' => NULL,
      'right_2' => NULL,
      'right_1' => NULL,
      'left_2_' => NULL,
      'left_1_' => NULL,
      'center_' => NULL,
      'right_2_' => NULL,
      'right_1_' => NULL,
      'left_2__' => NULL,
      'left_2___' => NULL,
      'center__' => NULL,
      'right_1__' => NULL,
      'right_1___' => NULL,
      'left_1__' => NULL,
      'left_1___' => NULL,
      'center___' => NULL,
      'right_1____' => NULL,
      'right_2__' => NULL,
      'left_2____' => NULL,
      'left_1____' => NULL,
      'center____' => NULL,
      'right_1_____' => NULL,
      'right_2___' => NULL,
      'left_1_____' => NULL,
      'left_2_____' => NULL,
      'center_____' => NULL,
      'right_1______' => NULL,
      'right_2____' => NULL,
      'left_2______' => NULL,
      'left_1______' => NULL,
      'center______' => NULL,
      'right_1_______' => NULL,
      'right_2_____' => NULL,
      'main_' => NULL,
      'q1_' => NULL,
      'q3_' => NULL,
      'q2_' => NULL,
      'right_2______' => NULL,
      'q4_' => NULL,
      'left_2_______' => NULL,
      'left_1_______' => NULL,
      'center_______' => NULL,
      'right_2_______' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%nid:field_batter, %nid:field-first-name (%nid:field-team)';
  $display->uuid = '6dbc0f6a-81d7-4c8a-ba78-2ff69881a6f0';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_player_stats_panel__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c6f588df-34c9-495e-82dd-46c72d2e7e41';
  $pane->panel = 'center__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '3',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c6f588df-34c9-495e-82dd-46c72d2e7e41';
  $display->content['new-c6f588df-34c9-495e-82dd-46c72d2e7e41'] = $pane;
  $display->panels['center__'][0] = 'new-c6f588df-34c9-495e-82dd-46c72d2e7e41';
  $pane = new stdClass();
  $pane->pid = 'new-9fbe1fd0-cec2-4bda-b9ef-99ddfc5d8486';
  $pane->panel = 'center__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '8',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9fbe1fd0-cec2-4bda-b9ef-99ddfc5d8486';
  $display->content['new-9fbe1fd0-cec2-4bda-b9ef-99ddfc5d8486'] = $pane;
  $display->panels['center__'][1] = 'new-9fbe1fd0-cec2-4bda-b9ef-99ddfc5d8486';
  $pane = new stdClass();
  $pane->pid = 'new-85c553a3-a4a5-4e61-9c57-6081459fb11b';
  $pane->panel = 'center__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '13',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '85c553a3-a4a5-4e61-9c57-6081459fb11b';
  $display->content['new-85c553a3-a4a5-4e61-9c57-6081459fb11b'] = $pane;
  $display->panels['center__'][2] = 'new-85c553a3-a4a5-4e61-9c57-6081459fb11b';
  $pane = new stdClass();
  $pane->pid = 'new-5fc33241-7a46-4a66-be43-5d0bd2a4cda7';
  $pane->panel = 'center__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '18',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '5fc33241-7a46-4a66-be43-5d0bd2a4cda7';
  $display->content['new-5fc33241-7a46-4a66-be43-5d0bd2a4cda7'] = $pane;
  $display->panels['center__'][3] = 'new-5fc33241-7a46-4a66-be43-5d0bd2a4cda7';
  $pane = new stdClass();
  $pane->pid = 'new-942c0f7c-7b85-4d55-87a4-8349cfe4b244';
  $pane->panel = 'center__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '23',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '942c0f7c-7b85-4d55-87a4-8349cfe4b244';
  $display->content['new-942c0f7c-7b85-4d55-87a4-8349cfe4b244'] = $pane;
  $display->panels['center__'][4] = 'new-942c0f7c-7b85-4d55-87a4-8349cfe4b244';
  $pane = new stdClass();
  $pane->pid = 'new-e511d795-036e-4494-8c02-9b5e876a506b';
  $pane->panel = 'center___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '3',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e511d795-036e-4494-8c02-9b5e876a506b';
  $display->content['new-e511d795-036e-4494-8c02-9b5e876a506b'] = $pane;
  $display->panels['center___'][0] = 'new-e511d795-036e-4494-8c02-9b5e876a506b';
  $pane = new stdClass();
  $pane->pid = 'new-dec19676-e191-4210-8385-470798786628';
  $pane->panel = 'center___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '8',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'dec19676-e191-4210-8385-470798786628';
  $display->content['new-dec19676-e191-4210-8385-470798786628'] = $pane;
  $display->panels['center___'][1] = 'new-dec19676-e191-4210-8385-470798786628';
  $pane = new stdClass();
  $pane->pid = 'new-d8a3db3a-0886-4dea-9d6b-9348b4a62a84';
  $pane->panel = 'center___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '13',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'd8a3db3a-0886-4dea-9d6b-9348b4a62a84';
  $display->content['new-d8a3db3a-0886-4dea-9d6b-9348b4a62a84'] = $pane;
  $display->panels['center___'][2] = 'new-d8a3db3a-0886-4dea-9d6b-9348b4a62a84';
  $pane = new stdClass();
  $pane->pid = 'new-e34ddf20-3fe8-4ac3-8422-072c64bdd3b0';
  $pane->panel = 'center___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '18',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'e34ddf20-3fe8-4ac3-8422-072c64bdd3b0';
  $display->content['new-e34ddf20-3fe8-4ac3-8422-072c64bdd3b0'] = $pane;
  $display->panels['center___'][3] = 'new-e34ddf20-3fe8-4ac3-8422-072c64bdd3b0';
  $pane = new stdClass();
  $pane->pid = 'new-1556d5d4-e570-482f-84f4-e8b9501c8a62';
  $pane->panel = 'center___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '23',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '1556d5d4-e570-482f-84f4-e8b9501c8a62';
  $display->content['new-1556d5d4-e570-482f-84f4-e8b9501c8a62'] = $pane;
  $display->panels['center___'][4] = 'new-1556d5d4-e570-482f-84f4-e8b9501c8a62';
  $pane = new stdClass();
  $pane->pid = 'new-6028af0f-5fad-44f0-b40a-64de91f4c105';
  $pane->panel = 'center____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '3',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6028af0f-5fad-44f0-b40a-64de91f4c105';
  $display->content['new-6028af0f-5fad-44f0-b40a-64de91f4c105'] = $pane;
  $display->panels['center____'][0] = 'new-6028af0f-5fad-44f0-b40a-64de91f4c105';
  $pane = new stdClass();
  $pane->pid = 'new-113e2be9-2488-426f-b596-cfd2f09c18bc';
  $pane->panel = 'center____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '8',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '113e2be9-2488-426f-b596-cfd2f09c18bc';
  $display->content['new-113e2be9-2488-426f-b596-cfd2f09c18bc'] = $pane;
  $display->panels['center____'][1] = 'new-113e2be9-2488-426f-b596-cfd2f09c18bc';
  $pane = new stdClass();
  $pane->pid = 'new-68393e3a-c8e4-4dde-aa63-c19d5043b824';
  $pane->panel = 'center____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '13',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '68393e3a-c8e4-4dde-aa63-c19d5043b824';
  $display->content['new-68393e3a-c8e4-4dde-aa63-c19d5043b824'] = $pane;
  $display->panels['center____'][2] = 'new-68393e3a-c8e4-4dde-aa63-c19d5043b824';
  $pane = new stdClass();
  $pane->pid = 'new-c166ebd4-5dc0-44b7-b08b-630dc8a40a4f';
  $pane->panel = 'center____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '18',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'c166ebd4-5dc0-44b7-b08b-630dc8a40a4f';
  $display->content['new-c166ebd4-5dc0-44b7-b08b-630dc8a40a4f'] = $pane;
  $display->panels['center____'][3] = 'new-c166ebd4-5dc0-44b7-b08b-630dc8a40a4f';
  $pane = new stdClass();
  $pane->pid = 'new-a90e7f8e-0eb7-41dc-b86f-b8ea168ad835';
  $pane->panel = 'center____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '23',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'a90e7f8e-0eb7-41dc-b86f-b8ea168ad835';
  $display->content['new-a90e7f8e-0eb7-41dc-b86f-b8ea168ad835'] = $pane;
  $display->panels['center____'][4] = 'new-a90e7f8e-0eb7-41dc-b86f-b8ea168ad835';
  $pane = new stdClass();
  $pane->pid = 'new-609f1fd4-f826-4dcb-b071-8dd410ffdd75';
  $pane->panel = 'center_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '3',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '609f1fd4-f826-4dcb-b071-8dd410ffdd75';
  $display->content['new-609f1fd4-f826-4dcb-b071-8dd410ffdd75'] = $pane;
  $display->panels['center_______'][0] = 'new-609f1fd4-f826-4dcb-b071-8dd410ffdd75';
  $pane = new stdClass();
  $pane->pid = 'new-fff0b103-f7a8-4b74-b793-5d51a411cc8a';
  $pane->panel = 'center_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '8',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'fff0b103-f7a8-4b74-b793-5d51a411cc8a';
  $display->content['new-fff0b103-f7a8-4b74-b793-5d51a411cc8a'] = $pane;
  $display->panels['center_______'][1] = 'new-fff0b103-f7a8-4b74-b793-5d51a411cc8a';
  $pane = new stdClass();
  $pane->pid = 'new-f5097b8c-b666-4962-bb3d-f7fc0d16abc2';
  $pane->panel = 'center_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '13',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f5097b8c-b666-4962-bb3d-f7fc0d16abc2';
  $display->content['new-f5097b8c-b666-4962-bb3d-f7fc0d16abc2'] = $pane;
  $display->panels['center_______'][2] = 'new-f5097b8c-b666-4962-bb3d-f7fc0d16abc2';
  $pane = new stdClass();
  $pane->pid = 'new-7d5ce7aa-0711-4059-813d-accd3c4d125b';
  $pane->panel = 'center_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '18',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '7d5ce7aa-0711-4059-813d-accd3c4d125b';
  $display->content['new-7d5ce7aa-0711-4059-813d-accd3c4d125b'] = $pane;
  $display->panels['center_______'][3] = 'new-7d5ce7aa-0711-4059-813d-accd3c4d125b';
  $pane = new stdClass();
  $pane->pid = 'new-83318c7a-17c0-43d2-adc9-71f7511a0b5f';
  $pane->panel = 'center_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '23',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '83318c7a-17c0-43d2-adc9-71f7511a0b5f';
  $display->content['new-83318c7a-17c0-43d2-adc9-71f7511a0b5f'] = $pane;
  $display->panels['center_______'][4] = 'new-83318c7a-17c0-43d2-adc9-71f7511a0b5f';
  $pane = new stdClass();
  $pane->pid = 'new-11a1c86b-f78d-47e3-8700-f3705d1bda62';
  $pane->panel = 'left_1__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '2',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '11a1c86b-f78d-47e3-8700-f3705d1bda62';
  $display->content['new-11a1c86b-f78d-47e3-8700-f3705d1bda62'] = $pane;
  $display->panels['left_1__'][0] = 'new-11a1c86b-f78d-47e3-8700-f3705d1bda62';
  $pane = new stdClass();
  $pane->pid = 'new-dc04fcba-06ad-4378-a51a-16d56ae03421';
  $pane->panel = 'left_1__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '7',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'dc04fcba-06ad-4378-a51a-16d56ae03421';
  $display->content['new-dc04fcba-06ad-4378-a51a-16d56ae03421'] = $pane;
  $display->panels['left_1__'][1] = 'new-dc04fcba-06ad-4378-a51a-16d56ae03421';
  $pane = new stdClass();
  $pane->pid = 'new-a138650d-6373-4461-a4a6-e66ef9e0bd4e';
  $pane->panel = 'left_1__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '12',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a138650d-6373-4461-a4a6-e66ef9e0bd4e';
  $display->content['new-a138650d-6373-4461-a4a6-e66ef9e0bd4e'] = $pane;
  $display->panels['left_1__'][2] = 'new-a138650d-6373-4461-a4a6-e66ef9e0bd4e';
  $pane = new stdClass();
  $pane->pid = 'new-f43db01f-f6fb-4e60-941b-e1e8ba9fc02d';
  $pane->panel = 'left_1__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '17',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'f43db01f-f6fb-4e60-941b-e1e8ba9fc02d';
  $display->content['new-f43db01f-f6fb-4e60-941b-e1e8ba9fc02d'] = $pane;
  $display->panels['left_1__'][3] = 'new-f43db01f-f6fb-4e60-941b-e1e8ba9fc02d';
  $pane = new stdClass();
  $pane->pid = 'new-6a6de28e-cdcd-45af-a9c2-e5e104079ad8';
  $pane->panel = 'left_1__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '22',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '6a6de28e-cdcd-45af-a9c2-e5e104079ad8';
  $display->content['new-6a6de28e-cdcd-45af-a9c2-e5e104079ad8'] = $pane;
  $display->panels['left_1__'][4] = 'new-6a6de28e-cdcd-45af-a9c2-e5e104079ad8';
  $pane = new stdClass();
  $pane->pid = 'new-8e9b358c-0d81-4b3e-80b0-8c4b0bcc4f0c';
  $pane->panel = 'left_1___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '2',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8e9b358c-0d81-4b3e-80b0-8c4b0bcc4f0c';
  $display->content['new-8e9b358c-0d81-4b3e-80b0-8c4b0bcc4f0c'] = $pane;
  $display->panels['left_1___'][0] = 'new-8e9b358c-0d81-4b3e-80b0-8c4b0bcc4f0c';
  $pane = new stdClass();
  $pane->pid = 'new-612a61b0-ba1c-4598-b449-bbfda394a883';
  $pane->panel = 'left_1___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '7',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '612a61b0-ba1c-4598-b449-bbfda394a883';
  $display->content['new-612a61b0-ba1c-4598-b449-bbfda394a883'] = $pane;
  $display->panels['left_1___'][1] = 'new-612a61b0-ba1c-4598-b449-bbfda394a883';
  $pane = new stdClass();
  $pane->pid = 'new-b0122c33-3ef3-4431-8bca-e13b548b39ba';
  $pane->panel = 'left_1___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '12',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'b0122c33-3ef3-4431-8bca-e13b548b39ba';
  $display->content['new-b0122c33-3ef3-4431-8bca-e13b548b39ba'] = $pane;
  $display->panels['left_1___'][2] = 'new-b0122c33-3ef3-4431-8bca-e13b548b39ba';
  $pane = new stdClass();
  $pane->pid = 'new-8da6c219-4194-4631-a535-2d81ffb69d45';
  $pane->panel = 'left_1___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '17',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '8da6c219-4194-4631-a535-2d81ffb69d45';
  $display->content['new-8da6c219-4194-4631-a535-2d81ffb69d45'] = $pane;
  $display->panels['left_1___'][3] = 'new-8da6c219-4194-4631-a535-2d81ffb69d45';
  $pane = new stdClass();
  $pane->pid = 'new-88c1d95b-7fd1-4264-bc6c-a125364b8118';
  $pane->panel = 'left_1___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '22',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '88c1d95b-7fd1-4264-bc6c-a125364b8118';
  $display->content['new-88c1d95b-7fd1-4264-bc6c-a125364b8118'] = $pane;
  $display->panels['left_1___'][4] = 'new-88c1d95b-7fd1-4264-bc6c-a125364b8118';
  $pane = new stdClass();
  $pane->pid = 'new-40a7a936-ea13-4ba6-9877-0d24c081a2c4';
  $pane->panel = 'left_1____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '2',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '40a7a936-ea13-4ba6-9877-0d24c081a2c4';
  $display->content['new-40a7a936-ea13-4ba6-9877-0d24c081a2c4'] = $pane;
  $display->panels['left_1____'][0] = 'new-40a7a936-ea13-4ba6-9877-0d24c081a2c4';
  $pane = new stdClass();
  $pane->pid = 'new-11ae3867-ddbe-422f-b516-c96032f4df2c';
  $pane->panel = 'left_1____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '7',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '11ae3867-ddbe-422f-b516-c96032f4df2c';
  $display->content['new-11ae3867-ddbe-422f-b516-c96032f4df2c'] = $pane;
  $display->panels['left_1____'][1] = 'new-11ae3867-ddbe-422f-b516-c96032f4df2c';
  $pane = new stdClass();
  $pane->pid = 'new-97f687e9-4870-43d6-8168-3d2e61475f41';
  $pane->panel = 'left_1____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '12',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '97f687e9-4870-43d6-8168-3d2e61475f41';
  $display->content['new-97f687e9-4870-43d6-8168-3d2e61475f41'] = $pane;
  $display->panels['left_1____'][2] = 'new-97f687e9-4870-43d6-8168-3d2e61475f41';
  $pane = new stdClass();
  $pane->pid = 'new-3e06e493-cd80-4366-92c7-f043afe57500';
  $pane->panel = 'left_1____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '17',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '3e06e493-cd80-4366-92c7-f043afe57500';
  $display->content['new-3e06e493-cd80-4366-92c7-f043afe57500'] = $pane;
  $display->panels['left_1____'][3] = 'new-3e06e493-cd80-4366-92c7-f043afe57500';
  $pane = new stdClass();
  $pane->pid = 'new-5d96b409-f9cc-4a1c-b48b-dd0986cab85b';
  $pane->panel = 'left_1____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '22',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '5d96b409-f9cc-4a1c-b48b-dd0986cab85b';
  $display->content['new-5d96b409-f9cc-4a1c-b48b-dd0986cab85b'] = $pane;
  $display->panels['left_1____'][4] = 'new-5d96b409-f9cc-4a1c-b48b-dd0986cab85b';
  $pane = new stdClass();
  $pane->pid = 'new-0f8b9f80-f6ff-43eb-b878-70b14c870b29';
  $pane->panel = 'left_1_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '2',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0f8b9f80-f6ff-43eb-b878-70b14c870b29';
  $display->content['new-0f8b9f80-f6ff-43eb-b878-70b14c870b29'] = $pane;
  $display->panels['left_1_______'][0] = 'new-0f8b9f80-f6ff-43eb-b878-70b14c870b29';
  $pane = new stdClass();
  $pane->pid = 'new-4214a69b-1c82-40ec-9ec9-1854decf4821';
  $pane->panel = 'left_1_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '7',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4214a69b-1c82-40ec-9ec9-1854decf4821';
  $display->content['new-4214a69b-1c82-40ec-9ec9-1854decf4821'] = $pane;
  $display->panels['left_1_______'][1] = 'new-4214a69b-1c82-40ec-9ec9-1854decf4821';
  $pane = new stdClass();
  $pane->pid = 'new-943161ee-3203-4264-b682-ffe902d5307e';
  $pane->panel = 'left_1_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '12',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '943161ee-3203-4264-b682-ffe902d5307e';
  $display->content['new-943161ee-3203-4264-b682-ffe902d5307e'] = $pane;
  $display->panels['left_1_______'][2] = 'new-943161ee-3203-4264-b682-ffe902d5307e';
  $pane = new stdClass();
  $pane->pid = 'new-492e573f-5da5-4b4d-9a4d-a720050c26ca';
  $pane->panel = 'left_1_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '17',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '492e573f-5da5-4b4d-9a4d-a720050c26ca';
  $display->content['new-492e573f-5da5-4b4d-9a4d-a720050c26ca'] = $pane;
  $display->panels['left_1_______'][3] = 'new-492e573f-5da5-4b4d-9a4d-a720050c26ca';
  $pane = new stdClass();
  $pane->pid = 'new-73018548-3073-4b79-89f1-591e749c19c8';
  $pane->panel = 'left_1_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '22',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '73018548-3073-4b79-89f1-591e749c19c8';
  $display->content['new-73018548-3073-4b79-89f1-591e749c19c8'] = $pane;
  $display->panels['left_1_______'][4] = 'new-73018548-3073-4b79-89f1-591e749c19c8';
  $pane = new stdClass();
  $pane->pid = 'new-c8f6a4af-34d7-45cf-bd37-e1442ae1d4b7';
  $pane->panel = 'left_2__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c8f6a4af-34d7-45cf-bd37-e1442ae1d4b7';
  $display->content['new-c8f6a4af-34d7-45cf-bd37-e1442ae1d4b7'] = $pane;
  $display->panels['left_2__'][0] = 'new-c8f6a4af-34d7-45cf-bd37-e1442ae1d4b7';
  $pane = new stdClass();
  $pane->pid = 'new-55e648ff-a1e8-4e7c-bd8e-8cbbe87dbba0';
  $pane->panel = 'left_2__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '6',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '55e648ff-a1e8-4e7c-bd8e-8cbbe87dbba0';
  $display->content['new-55e648ff-a1e8-4e7c-bd8e-8cbbe87dbba0'] = $pane;
  $display->panels['left_2__'][1] = 'new-55e648ff-a1e8-4e7c-bd8e-8cbbe87dbba0';
  $pane = new stdClass();
  $pane->pid = 'new-4b1456a1-21af-4acc-bedf-9596bde9e55c';
  $pane->panel = 'left_2__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '11',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '4b1456a1-21af-4acc-bedf-9596bde9e55c';
  $display->content['new-4b1456a1-21af-4acc-bedf-9596bde9e55c'] = $pane;
  $display->panels['left_2__'][2] = 'new-4b1456a1-21af-4acc-bedf-9596bde9e55c';
  $pane = new stdClass();
  $pane->pid = 'new-a410d159-80d6-4cbd-8227-186d99bb7ad9';
  $pane->panel = 'left_2__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '16',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'a410d159-80d6-4cbd-8227-186d99bb7ad9';
  $display->content['new-a410d159-80d6-4cbd-8227-186d99bb7ad9'] = $pane;
  $display->panels['left_2__'][3] = 'new-a410d159-80d6-4cbd-8227-186d99bb7ad9';
  $pane = new stdClass();
  $pane->pid = 'new-f9359adf-3cd8-41f6-878f-8af0ff8d3f2c';
  $pane->panel = 'left_2__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '21',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'f9359adf-3cd8-41f6-878f-8af0ff8d3f2c';
  $display->content['new-f9359adf-3cd8-41f6-878f-8af0ff8d3f2c'] = $pane;
  $display->panels['left_2__'][4] = 'new-f9359adf-3cd8-41f6-878f-8af0ff8d3f2c';
  $pane = new stdClass();
  $pane->pid = 'new-3d9738b8-925f-48e1-9dc1-208a767c9d7b';
  $pane->panel = 'left_2___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3d9738b8-925f-48e1-9dc1-208a767c9d7b';
  $display->content['new-3d9738b8-925f-48e1-9dc1-208a767c9d7b'] = $pane;
  $display->panels['left_2___'][0] = 'new-3d9738b8-925f-48e1-9dc1-208a767c9d7b';
  $pane = new stdClass();
  $pane->pid = 'new-32c93575-85fd-4248-8571-6373f2fa4cdd';
  $pane->panel = 'left_2___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '6',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '32c93575-85fd-4248-8571-6373f2fa4cdd';
  $display->content['new-32c93575-85fd-4248-8571-6373f2fa4cdd'] = $pane;
  $display->panels['left_2___'][1] = 'new-32c93575-85fd-4248-8571-6373f2fa4cdd';
  $pane = new stdClass();
  $pane->pid = 'new-8e37c22e-e4b4-4dea-b833-66f5f78d1bca';
  $pane->panel = 'left_2___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '11',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '8e37c22e-e4b4-4dea-b833-66f5f78d1bca';
  $display->content['new-8e37c22e-e4b4-4dea-b833-66f5f78d1bca'] = $pane;
  $display->panels['left_2___'][2] = 'new-8e37c22e-e4b4-4dea-b833-66f5f78d1bca';
  $pane = new stdClass();
  $pane->pid = 'new-54c89e30-3240-43aa-b6cb-82241dbcc314';
  $pane->panel = 'left_2___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '16',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '54c89e30-3240-43aa-b6cb-82241dbcc314';
  $display->content['new-54c89e30-3240-43aa-b6cb-82241dbcc314'] = $pane;
  $display->panels['left_2___'][3] = 'new-54c89e30-3240-43aa-b6cb-82241dbcc314';
  $pane = new stdClass();
  $pane->pid = 'new-c043e7fd-36f3-43f3-a9a6-9b2ceb135c1e';
  $pane->panel = 'left_2___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '21',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'c043e7fd-36f3-43f3-a9a6-9b2ceb135c1e';
  $display->content['new-c043e7fd-36f3-43f3-a9a6-9b2ceb135c1e'] = $pane;
  $display->panels['left_2___'][4] = 'new-c043e7fd-36f3-43f3-a9a6-9b2ceb135c1e';
  $pane = new stdClass();
  $pane->pid = 'new-e1a6901b-1f69-4568-871f-7a40e729f64d';
  $pane->panel = 'left_2____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e1a6901b-1f69-4568-871f-7a40e729f64d';
  $display->content['new-e1a6901b-1f69-4568-871f-7a40e729f64d'] = $pane;
  $display->panels['left_2____'][0] = 'new-e1a6901b-1f69-4568-871f-7a40e729f64d';
  $pane = new stdClass();
  $pane->pid = 'new-c90f9653-5400-4f9d-b727-8f247979d482';
  $pane->panel = 'left_2____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '6',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c90f9653-5400-4f9d-b727-8f247979d482';
  $display->content['new-c90f9653-5400-4f9d-b727-8f247979d482'] = $pane;
  $display->panels['left_2____'][1] = 'new-c90f9653-5400-4f9d-b727-8f247979d482';
  $pane = new stdClass();
  $pane->pid = 'new-0e13f1a0-303e-46d9-81f3-9a928d295676';
  $pane->panel = 'left_2____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '11',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '0e13f1a0-303e-46d9-81f3-9a928d295676';
  $display->content['new-0e13f1a0-303e-46d9-81f3-9a928d295676'] = $pane;
  $display->panels['left_2____'][2] = 'new-0e13f1a0-303e-46d9-81f3-9a928d295676';
  $pane = new stdClass();
  $pane->pid = 'new-104b8847-6f95-4e7d-8585-d4a357752d27';
  $pane->panel = 'left_2____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '16',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '104b8847-6f95-4e7d-8585-d4a357752d27';
  $display->content['new-104b8847-6f95-4e7d-8585-d4a357752d27'] = $pane;
  $display->panels['left_2____'][3] = 'new-104b8847-6f95-4e7d-8585-d4a357752d27';
  $pane = new stdClass();
  $pane->pid = 'new-ff526590-e6fb-4f4a-bc2b-86104abc8e75';
  $pane->panel = 'left_2____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '21',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'ff526590-e6fb-4f4a-bc2b-86104abc8e75';
  $display->content['new-ff526590-e6fb-4f4a-bc2b-86104abc8e75'] = $pane;
  $display->panels['left_2____'][4] = 'new-ff526590-e6fb-4f4a-bc2b-86104abc8e75';
  $pane = new stdClass();
  $pane->pid = 'new-f68b2b43-69d9-407e-aa11-e694de18c2c0';
  $pane->panel = 'left_2_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f68b2b43-69d9-407e-aa11-e694de18c2c0';
  $display->content['new-f68b2b43-69d9-407e-aa11-e694de18c2c0'] = $pane;
  $display->panels['left_2_______'][0] = 'new-f68b2b43-69d9-407e-aa11-e694de18c2c0';
  $pane = new stdClass();
  $pane->pid = 'new-7422d30d-d162-4bd5-bbc1-046cb292618a';
  $pane->panel = 'left_2_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '6',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7422d30d-d162-4bd5-bbc1-046cb292618a';
  $display->content['new-7422d30d-d162-4bd5-bbc1-046cb292618a'] = $pane;
  $display->panels['left_2_______'][1] = 'new-7422d30d-d162-4bd5-bbc1-046cb292618a';
  $pane = new stdClass();
  $pane->pid = 'new-eb11ea52-1f42-4802-8a02-dbecd00d6956';
  $pane->panel = 'left_2_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '11',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'eb11ea52-1f42-4802-8a02-dbecd00d6956';
  $display->content['new-eb11ea52-1f42-4802-8a02-dbecd00d6956'] = $pane;
  $display->panels['left_2_______'][2] = 'new-eb11ea52-1f42-4802-8a02-dbecd00d6956';
  $pane = new stdClass();
  $pane->pid = 'new-7babc028-39ac-464c-baf2-3bc03c70b252';
  $pane->panel = 'left_2_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '16',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '7babc028-39ac-464c-baf2-3bc03c70b252';
  $display->content['new-7babc028-39ac-464c-baf2-3bc03c70b252'] = $pane;
  $display->panels['left_2_______'][3] = 'new-7babc028-39ac-464c-baf2-3bc03c70b252';
  $pane = new stdClass();
  $pane->pid = 'new-e8560c49-723e-48f1-899e-3c08405bab82';
  $pane->panel = 'left_2_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '21',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'e8560c49-723e-48f1-899e-3c08405bab82';
  $display->content['new-e8560c49-723e-48f1-899e-3c08405bab82'] = $pane;
  $display->panels['left_2_______'][4] = 'new-e8560c49-723e-48f1-899e-3c08405bab82';
  $pane = new stdClass();
  $pane->pid = 'new-ffa9c8fb-d7c2-4bc8-a115-81ac94f9fc27';
  $pane->panel = 'main_';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ffa9c8fb-d7c2-4bc8-a115-81ac94f9fc27';
  $display->content['new-ffa9c8fb-d7c2-4bc8-a115-81ac94f9fc27'] = $pane;
  $display->panels['main_'][0] = 'new-ffa9c8fb-d7c2-4bc8-a115-81ac94f9fc27';
  $pane = new stdClass();
  $pane->pid = 'new-961ddc6c-2129-417e-bb50-38a50fac2a44';
  $pane->panel = 'q1_';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h3>Fastball vs. RH</h3>',
    'format' => 'filtered_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '961ddc6c-2129-417e-bb50-38a50fac2a44';
  $display->content['new-961ddc6c-2129-417e-bb50-38a50fac2a44'] = $pane;
  $display->panels['q1_'][0] = 'new-961ddc6c-2129-417e-bb50-38a50fac2a44';
  $pane = new stdClass();
  $pane->pid = 'new-d451acc6-78c1-4be5-bfed-9ceb6f8e8cfe';
  $pane->panel = 'q2_';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h3>Off-Speed vs. RH</h3>',
    'format' => 'filtered_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd451acc6-78c1-4be5-bfed-9ceb6f8e8cfe';
  $display->content['new-d451acc6-78c1-4be5-bfed-9ceb6f8e8cfe'] = $pane;
  $display->panels['q2_'][0] = 'new-d451acc6-78c1-4be5-bfed-9ceb6f8e8cfe';
  $pane = new stdClass();
  $pane->pid = 'new-6208cd19-e5ba-46ea-9fa5-ec10d076ee4d';
  $pane->panel = 'q3_';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h3>Fastball vs. LH</h3>',
    'format' => 'filtered_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6208cd19-e5ba-46ea-9fa5-ec10d076ee4d';
  $display->content['new-6208cd19-e5ba-46ea-9fa5-ec10d076ee4d'] = $pane;
  $display->panels['q3_'][0] = 'new-6208cd19-e5ba-46ea-9fa5-ec10d076ee4d';
  $pane = new stdClass();
  $pane->pid = 'new-a88e8b86-a706-49b5-bb6b-f6ea5b8cb788';
  $pane->panel = 'q4_';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h3>Off-Speed vs. LH</h3>',
    'format' => 'filtered_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a88e8b86-a706-49b5-bb6b-f6ea5b8cb788';
  $display->content['new-a88e8b86-a706-49b5-bb6b-f6ea5b8cb788'] = $pane;
  $display->panels['q4_'][0] = 'new-a88e8b86-a706-49b5-bb6b-f6ea5b8cb788';
  $pane = new stdClass();
  $pane->pid = 'new-6dc4dc28-ab60-496d-82eb-a15e098c25ba';
  $pane->panel = 'right_1__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '4',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6dc4dc28-ab60-496d-82eb-a15e098c25ba';
  $display->content['new-6dc4dc28-ab60-496d-82eb-a15e098c25ba'] = $pane;
  $display->panels['right_1__'][0] = 'new-6dc4dc28-ab60-496d-82eb-a15e098c25ba';
  $pane = new stdClass();
  $pane->pid = 'new-2a60e8bf-1419-4766-8afd-b7970c6e8f0e';
  $pane->panel = 'right_1__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '9',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2a60e8bf-1419-4766-8afd-b7970c6e8f0e';
  $display->content['new-2a60e8bf-1419-4766-8afd-b7970c6e8f0e'] = $pane;
  $display->panels['right_1__'][1] = 'new-2a60e8bf-1419-4766-8afd-b7970c6e8f0e';
  $pane = new stdClass();
  $pane->pid = 'new-efe664be-8a33-4ee5-8b90-a452e24a1fb8';
  $pane->panel = 'right_1__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '14',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'efe664be-8a33-4ee5-8b90-a452e24a1fb8';
  $display->content['new-efe664be-8a33-4ee5-8b90-a452e24a1fb8'] = $pane;
  $display->panels['right_1__'][2] = 'new-efe664be-8a33-4ee5-8b90-a452e24a1fb8';
  $pane = new stdClass();
  $pane->pid = 'new-3a567451-cf6e-4d89-9c22-96a4c04026fd';
  $pane->panel = 'right_1__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '19',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '3a567451-cf6e-4d89-9c22-96a4c04026fd';
  $display->content['new-3a567451-cf6e-4d89-9c22-96a4c04026fd'] = $pane;
  $display->panels['right_1__'][3] = 'new-3a567451-cf6e-4d89-9c22-96a4c04026fd';
  $pane = new stdClass();
  $pane->pid = 'new-8d955965-6a08-43e2-b54a-564cface3d02';
  $pane->panel = 'right_1__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '24',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '8d955965-6a08-43e2-b54a-564cface3d02';
  $display->content['new-8d955965-6a08-43e2-b54a-564cface3d02'] = $pane;
  $display->panels['right_1__'][4] = 'new-8d955965-6a08-43e2-b54a-564cface3d02';
  $pane = new stdClass();
  $pane->pid = 'new-47531ed0-96b2-4cb0-981c-4fcb90a7adeb';
  $pane->panel = 'right_1___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '4',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '47531ed0-96b2-4cb0-981c-4fcb90a7adeb';
  $display->content['new-47531ed0-96b2-4cb0-981c-4fcb90a7adeb'] = $pane;
  $display->panels['right_1___'][0] = 'new-47531ed0-96b2-4cb0-981c-4fcb90a7adeb';
  $pane = new stdClass();
  $pane->pid = 'new-4a203fd1-9526-485b-ae8e-09313d8a6726';
  $pane->panel = 'right_1___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '9',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4a203fd1-9526-485b-ae8e-09313d8a6726';
  $display->content['new-4a203fd1-9526-485b-ae8e-09313d8a6726'] = $pane;
  $display->panels['right_1___'][1] = 'new-4a203fd1-9526-485b-ae8e-09313d8a6726';
  $pane = new stdClass();
  $pane->pid = 'new-91c9a17b-522e-45e2-81ac-7401202e8a42';
  $pane->panel = 'right_1___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '14',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '91c9a17b-522e-45e2-81ac-7401202e8a42';
  $display->content['new-91c9a17b-522e-45e2-81ac-7401202e8a42'] = $pane;
  $display->panels['right_1___'][2] = 'new-91c9a17b-522e-45e2-81ac-7401202e8a42';
  $pane = new stdClass();
  $pane->pid = 'new-8e00d7b1-9d4a-40cf-88f1-c8d6ba5ef474';
  $pane->panel = 'right_1___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '19',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '8e00d7b1-9d4a-40cf-88f1-c8d6ba5ef474';
  $display->content['new-8e00d7b1-9d4a-40cf-88f1-c8d6ba5ef474'] = $pane;
  $display->panels['right_1___'][3] = 'new-8e00d7b1-9d4a-40cf-88f1-c8d6ba5ef474';
  $pane = new stdClass();
  $pane->pid = 'new-abd169ed-6013-4914-bdfa-05e69fa2793b';
  $pane->panel = 'right_1___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '24',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'abd169ed-6013-4914-bdfa-05e69fa2793b';
  $display->content['new-abd169ed-6013-4914-bdfa-05e69fa2793b'] = $pane;
  $display->panels['right_1___'][4] = 'new-abd169ed-6013-4914-bdfa-05e69fa2793b';
  $pane = new stdClass();
  $pane->pid = 'new-c1f07463-8ec0-4030-b783-822c7b7212d9';
  $pane->panel = 'right_1____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '4',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c1f07463-8ec0-4030-b783-822c7b7212d9';
  $display->content['new-c1f07463-8ec0-4030-b783-822c7b7212d9'] = $pane;
  $display->panels['right_1____'][0] = 'new-c1f07463-8ec0-4030-b783-822c7b7212d9';
  $pane = new stdClass();
  $pane->pid = 'new-c1b72d5c-86d1-4587-8fea-14b408c53619';
  $pane->panel = 'right_1____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '9',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c1b72d5c-86d1-4587-8fea-14b408c53619';
  $display->content['new-c1b72d5c-86d1-4587-8fea-14b408c53619'] = $pane;
  $display->panels['right_1____'][1] = 'new-c1b72d5c-86d1-4587-8fea-14b408c53619';
  $pane = new stdClass();
  $pane->pid = 'new-d3f3cbf4-dd37-4e1b-9a2a-baba03cc617a';
  $pane->panel = 'right_1____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '14',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'd3f3cbf4-dd37-4e1b-9a2a-baba03cc617a';
  $display->content['new-d3f3cbf4-dd37-4e1b-9a2a-baba03cc617a'] = $pane;
  $display->panels['right_1____'][2] = 'new-d3f3cbf4-dd37-4e1b-9a2a-baba03cc617a';
  $pane = new stdClass();
  $pane->pid = 'new-ed12ec6f-e3d7-4834-bce7-9cd544c99a77';
  $pane->panel = 'right_1____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '19',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'ed12ec6f-e3d7-4834-bce7-9cd544c99a77';
  $display->content['new-ed12ec6f-e3d7-4834-bce7-9cd544c99a77'] = $pane;
  $display->panels['right_1____'][3] = 'new-ed12ec6f-e3d7-4834-bce7-9cd544c99a77';
  $pane = new stdClass();
  $pane->pid = 'new-f5286e07-46bc-4b44-8629-2d7faffba230';
  $pane->panel = 'right_1____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '24',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'f5286e07-46bc-4b44-8629-2d7faffba230';
  $display->content['new-f5286e07-46bc-4b44-8629-2d7faffba230'] = $pane;
  $display->panels['right_1____'][4] = 'new-f5286e07-46bc-4b44-8629-2d7faffba230';
  $pane = new stdClass();
  $pane->pid = 'new-1a96b894-2b0c-4121-9c73-b38475cb1ae4';
  $pane->panel = 'right_1_____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '4',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1a96b894-2b0c-4121-9c73-b38475cb1ae4';
  $display->content['new-1a96b894-2b0c-4121-9c73-b38475cb1ae4'] = $pane;
  $display->panels['right_1_____'][0] = 'new-1a96b894-2b0c-4121-9c73-b38475cb1ae4';
  $pane = new stdClass();
  $pane->pid = 'new-5868b44f-f330-4b3b-89ac-dfc8e422e8be';
  $pane->panel = 'right_1_____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '9',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5868b44f-f330-4b3b-89ac-dfc8e422e8be';
  $display->content['new-5868b44f-f330-4b3b-89ac-dfc8e422e8be'] = $pane;
  $display->panels['right_1_____'][1] = 'new-5868b44f-f330-4b3b-89ac-dfc8e422e8be';
  $pane = new stdClass();
  $pane->pid = 'new-58c7d02a-2fc9-47bb-912d-5dc46ea76b75';
  $pane->panel = 'right_1_____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '14',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '58c7d02a-2fc9-47bb-912d-5dc46ea76b75';
  $display->content['new-58c7d02a-2fc9-47bb-912d-5dc46ea76b75'] = $pane;
  $display->panels['right_1_____'][2] = 'new-58c7d02a-2fc9-47bb-912d-5dc46ea76b75';
  $pane = new stdClass();
  $pane->pid = 'new-4e19b293-7bfa-42fe-b1b7-a314d1b10550';
  $pane->panel = 'right_1_____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '19',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '4e19b293-7bfa-42fe-b1b7-a314d1b10550';
  $display->content['new-4e19b293-7bfa-42fe-b1b7-a314d1b10550'] = $pane;
  $display->panels['right_1_____'][3] = 'new-4e19b293-7bfa-42fe-b1b7-a314d1b10550';
  $pane = new stdClass();
  $pane->pid = 'new-1ca84496-db65-47be-afcd-1c74523bfffc';
  $pane->panel = 'right_1_____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '24',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '1ca84496-db65-47be-afcd-1c74523bfffc';
  $display->content['new-1ca84496-db65-47be-afcd-1c74523bfffc'] = $pane;
  $display->panels['right_1_____'][4] = 'new-1ca84496-db65-47be-afcd-1c74523bfffc';
  $pane = new stdClass();
  $pane->pid = 'new-ca9ecbfb-a226-4a54-b365-38e63e438614';
  $pane->panel = 'right_2__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '5',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ca9ecbfb-a226-4a54-b365-38e63e438614';
  $display->content['new-ca9ecbfb-a226-4a54-b365-38e63e438614'] = $pane;
  $display->panels['right_2__'][0] = 'new-ca9ecbfb-a226-4a54-b365-38e63e438614';
  $pane = new stdClass();
  $pane->pid = 'new-7b74c7d3-a711-4147-9e2e-959dfc7effc8';
  $pane->panel = 'right_2__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '10',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7b74c7d3-a711-4147-9e2e-959dfc7effc8';
  $display->content['new-7b74c7d3-a711-4147-9e2e-959dfc7effc8'] = $pane;
  $display->panels['right_2__'][1] = 'new-7b74c7d3-a711-4147-9e2e-959dfc7effc8';
  $pane = new stdClass();
  $pane->pid = 'new-8f6c7d7d-b1cd-4f74-8cdc-c75c58c9e601';
  $pane->panel = 'right_2__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '15',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '8f6c7d7d-b1cd-4f74-8cdc-c75c58c9e601';
  $display->content['new-8f6c7d7d-b1cd-4f74-8cdc-c75c58c9e601'] = $pane;
  $display->panels['right_2__'][2] = 'new-8f6c7d7d-b1cd-4f74-8cdc-c75c58c9e601';
  $pane = new stdClass();
  $pane->pid = 'new-2bd3952b-3182-4eff-902d-60233f6232c1';
  $pane->panel = 'right_2__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '20',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '2bd3952b-3182-4eff-902d-60233f6232c1';
  $display->content['new-2bd3952b-3182-4eff-902d-60233f6232c1'] = $pane;
  $display->panels['right_2__'][3] = 'new-2bd3952b-3182-4eff-902d-60233f6232c1';
  $pane = new stdClass();
  $pane->pid = 'new-54fbc718-1339-4979-bfc9-f9a4a8a74def';
  $pane->panel = 'right_2__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '25',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '54fbc718-1339-4979-bfc9-f9a4a8a74def';
  $display->content['new-54fbc718-1339-4979-bfc9-f9a4a8a74def'] = $pane;
  $display->panels['right_2__'][4] = 'new-54fbc718-1339-4979-bfc9-f9a4a8a74def';
  $pane = new stdClass();
  $pane->pid = 'new-d488b67d-5535-49c3-a048-23de203937fa';
  $pane->panel = 'right_2___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '5',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd488b67d-5535-49c3-a048-23de203937fa';
  $display->content['new-d488b67d-5535-49c3-a048-23de203937fa'] = $pane;
  $display->panels['right_2___'][0] = 'new-d488b67d-5535-49c3-a048-23de203937fa';
  $pane = new stdClass();
  $pane->pid = 'new-f2484ac9-e04a-4a4f-bbea-4fae5179fabf';
  $pane->panel = 'right_2___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '10',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f2484ac9-e04a-4a4f-bbea-4fae5179fabf';
  $display->content['new-f2484ac9-e04a-4a4f-bbea-4fae5179fabf'] = $pane;
  $display->panels['right_2___'][1] = 'new-f2484ac9-e04a-4a4f-bbea-4fae5179fabf';
  $pane = new stdClass();
  $pane->pid = 'new-2fce4d16-6a0d-4077-9b86-7bf337aa4078';
  $pane->panel = 'right_2___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '15',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2fce4d16-6a0d-4077-9b86-7bf337aa4078';
  $display->content['new-2fce4d16-6a0d-4077-9b86-7bf337aa4078'] = $pane;
  $display->panels['right_2___'][2] = 'new-2fce4d16-6a0d-4077-9b86-7bf337aa4078';
  $pane = new stdClass();
  $pane->pid = 'new-1218f9e6-4f7d-430c-9ca5-6f34c2dabdd6';
  $pane->panel = 'right_2___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '20',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '1218f9e6-4f7d-430c-9ca5-6f34c2dabdd6';
  $display->content['new-1218f9e6-4f7d-430c-9ca5-6f34c2dabdd6'] = $pane;
  $display->panels['right_2___'][3] = 'new-1218f9e6-4f7d-430c-9ca5-6f34c2dabdd6';
  $pane = new stdClass();
  $pane->pid = 'new-f4cd2674-3159-4b6e-9623-8cd975cc411a';
  $pane->panel = 'right_2___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '25',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'f4cd2674-3159-4b6e-9623-8cd975cc411a';
  $display->content['new-f4cd2674-3159-4b6e-9623-8cd975cc411a'] = $pane;
  $display->panels['right_2___'][4] = 'new-f4cd2674-3159-4b6e-9623-8cd975cc411a';
  $pane = new stdClass();
  $pane->pid = 'new-b3f02db6-0b30-450c-9987-62472e81a7f9';
  $pane->panel = 'right_2______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '5',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b3f02db6-0b30-450c-9987-62472e81a7f9';
  $display->content['new-b3f02db6-0b30-450c-9987-62472e81a7f9'] = $pane;
  $display->panels['right_2______'][0] = 'new-b3f02db6-0b30-450c-9987-62472e81a7f9';
  $pane = new stdClass();
  $pane->pid = 'new-9879b6cb-cee3-4263-8f45-e6d47b49c7fd';
  $pane->panel = 'right_2______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '10',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9879b6cb-cee3-4263-8f45-e6d47b49c7fd';
  $display->content['new-9879b6cb-cee3-4263-8f45-e6d47b49c7fd'] = $pane;
  $display->panels['right_2______'][1] = 'new-9879b6cb-cee3-4263-8f45-e6d47b49c7fd';
  $pane = new stdClass();
  $pane->pid = 'new-7e966633-8e3a-4557-9aab-d5cbbf447fae';
  $pane->panel = 'right_2______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '15',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '7e966633-8e3a-4557-9aab-d5cbbf447fae';
  $display->content['new-7e966633-8e3a-4557-9aab-d5cbbf447fae'] = $pane;
  $display->panels['right_2______'][2] = 'new-7e966633-8e3a-4557-9aab-d5cbbf447fae';
  $pane = new stdClass();
  $pane->pid = 'new-046c0007-46f8-4f0d-a3bb-2db0c1427a04';
  $pane->panel = 'right_2______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '20',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '046c0007-46f8-4f0d-a3bb-2db0c1427a04';
  $display->content['new-046c0007-46f8-4f0d-a3bb-2db0c1427a04'] = $pane;
  $display->panels['right_2______'][3] = 'new-046c0007-46f8-4f0d-a3bb-2db0c1427a04';
  $pane = new stdClass();
  $pane->pid = 'new-7d25f8c4-e9b3-490f-8d89-487227ec2ccb';
  $pane->panel = 'right_2______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '25',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '7d25f8c4-e9b3-490f-8d89-487227ec2ccb';
  $display->content['new-7d25f8c4-e9b3-490f-8d89-487227ec2ccb'] = $pane;
  $display->panels['right_2______'][4] = 'new-7d25f8c4-e9b3-490f-8d89-487227ec2ccb';
  $pane = new stdClass();
  $pane->pid = 'new-45c44267-9e3e-45f2-959c-03edad2676b4';
  $pane->panel = 'right_2_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '5',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '45c44267-9e3e-45f2-959c-03edad2676b4';
  $display->content['new-45c44267-9e3e-45f2-959c-03edad2676b4'] = $pane;
  $display->panels['right_2_______'][0] = 'new-45c44267-9e3e-45f2-959c-03edad2676b4';
  $pane = new stdClass();
  $pane->pid = 'new-29748d94-d763-451d-9786-f3d8dc3f10fc';
  $pane->panel = 'right_2_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '10',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '29748d94-d763-451d-9786-f3d8dc3f10fc';
  $display->content['new-29748d94-d763-451d-9786-f3d8dc3f10fc'] = $pane;
  $display->panels['right_2_______'][1] = 'new-29748d94-d763-451d-9786-f3d8dc3f10fc';
  $pane = new stdClass();
  $pane->pid = 'new-6a19dca2-d33d-4024-b188-364c316236ee';
  $pane->panel = 'right_2_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '15',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '6a19dca2-d33d-4024-b188-364c316236ee';
  $display->content['new-6a19dca2-d33d-4024-b188-364c316236ee'] = $pane;
  $display->panels['right_2_______'][2] = 'new-6a19dca2-d33d-4024-b188-364c316236ee';
  $pane = new stdClass();
  $pane->pid = 'new-d8695205-a643-40e0-afea-842a0ccc14e6';
  $pane->panel = 'right_2_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '20',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'd8695205-a643-40e0-afea-842a0ccc14e6';
  $display->content['new-d8695205-a643-40e0-afea-842a0ccc14e6'] = $pane;
  $display->panels['right_2_______'][3] = 'new-d8695205-a643-40e0-afea-842a0ccc14e6';
  $pane = new stdClass();
  $pane->pid = 'new-1ed5db29-82f6-418d-a3aa-98d47671b5e1';
  $pane->panel = 'right_2_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '25',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '1ed5db29-82f6-418d-a3aa-98d47671b5e1';
  $display->content['new-1ed5db29-82f6-418d-a3aa-98d47671b5e1'] = $pane;
  $display->panels['right_2_______'][4] = 'new-1ed5db29-82f6-418d-a3aa-98d47671b5e1';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-ffa9c8fb-d7c2-4bc8-a115-81ac94f9fc27';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['player_stats_panel'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'player_stats_pitching_panel';
  $page->task = 'page';
  $page->admin_title = 'player_stats_pitching_panel';
  $page->admin_description = '';
  $page->path = 'player-stats/pitching/%nid';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array(
    'nid' => array(
      'id' => 1,
      'identifier' => 'Content: ID',
      'name' => 'entity_id:node',
      'settings' => array(),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_player_stats_pitching_panel__panel_context_6b4eb20f-662d-47de-8e70-afc4eab73db6';
  $handler->task = 'page';
  $handler->subtask = 'player_stats_pitching_panel';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'flexible:baseball_grid';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
          1 => 8,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_2',
          1 => 'left_1',
          2 => 'center',
          3 => 'right_2',
          4 => 'right_1',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '20',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'left_1' => array(
        'type' => 'region',
        'title' => 'left 1',
        'width' => '20',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_2' => array(
        'type' => 'region',
        'title' => 'left 2',
        'width' => '20',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right_2' => array(
        'type' => 'region',
        'title' => 'right 1',
        'width' => '20',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right_1' => array(
        'type' => 'region',
        'title' => 'right 2',
        'width' => '20',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_2_',
          1 => 'left_1_',
          2 => 'center_',
          3 => 'right_2_',
          4 => 'right_1_',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_2__',
          1 => 'left_2___',
          2 => 'center__',
          3 => 'right_1__',
          4 => 'right_1___',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_1__',
          1 => 'left_1___',
          2 => 'center___',
          3 => 'right_1____',
          4 => 'right_2__',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_2____',
          1 => 'left_1____',
          2 => 'center____',
          3 => 'right_1_____',
          4 => 'right_2___',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_2_' => array(
        'type' => 'region',
        'title' => 'left 2',
        'width' => '20',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_1_' => array(
        'type' => 'region',
        'title' => 'left 1',
        'width' => '20',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'center_' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '20',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right_2_' => array(
        'type' => 'region',
        'title' => 'right 1',
        'width' => '20',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right_1_' => array(
        'type' => 'region',
        'title' => 'right 2',
        'width' => '20',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_2__' => array(
        'type' => 'region',
        'title' => 'left 2',
        'width' => 20,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_2___' => array(
        'type' => 'region',
        'title' => 'left 1',
        'width' => 20,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'center__' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 20,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right_1__' => array(
        'type' => 'region',
        'title' => 'right 1',
        'width' => 20,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right_1___' => array(
        'type' => 'region',
        'title' => 'right 2',
        'width' => 20,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_1__' => array(
        'type' => 'region',
        'title' => 'left 2',
        'width' => 20,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_1___' => array(
        'type' => 'region',
        'title' => 'left 1',
        'width' => 20,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'center___' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 20,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right_1____' => array(
        'type' => 'region',
        'title' => 'right 1',
        'width' => 20,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right_2__' => array(
        'type' => 'region',
        'title' => 'right 2',
        'width' => 20,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_2____' => array(
        'type' => 'region',
        'title' => 'left 2',
        'width' => 20,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_1____' => array(
        'type' => 'region',
        'title' => 'left 1',
        'width' => 20,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'center____' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 20,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right_1_____' => array(
        'type' => 'region',
        'title' => 'right 1',
        'width' => 20,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right_2___' => array(
        'type' => 'region',
        'title' => 'right 2',
        'width' => 20,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      8 => array(
        'type' => 'column',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 9,
          1 => 10,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      9 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_2_____',
          1 => 'left_1_____',
          2 => 'center_____',
          3 => 'right_1______',
          4 => 'right_2____',
        ),
        'parent' => '8',
        'class' => '',
        'hide_empty' => 0,
      ),
      10 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_2______',
          1 => 'left_1______',
          2 => 'center______',
          3 => 'right_1_______',
          4 => 'right_2_____',
        ),
        'parent' => '8',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_1_____' => array(
        'type' => 'region',
        'title' => 'left 1',
        'width' => '20.0084210009641',
        'width_type' => '%',
        'parent' => '9',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_2_____' => array(
        'type' => 'region',
        'title' => 'left 2',
        'width' => '20.018950893267835',
        'width_type' => '%',
        'parent' => '9',
        'class' => '',
        'hide_empty' => 0,
      ),
      'center_____' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '20.02420043937467',
        'width_type' => '%',
        'parent' => '9',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right_1______' => array(
        'type' => 'region',
        'title' => 'right 1',
        'width' => '20.00312286194848',
        'width_type' => '%',
        'parent' => '9',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right_2____' => array(
        'type' => 'region',
        'title' => 'right 2',
        'width' => '19.94530480444492',
        'width_type' => '%',
        'parent' => '9',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_2______' => array(
        'type' => 'region',
        'title' => 'left 2',
        'width' => '19.98407851121029',
        'width_type' => '%',
        'parent' => '10',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_1______' => array(
        'type' => 'region',
        'title' => 'left 1',
        'width' => '19.98451819195512',
        'width_type' => '%',
        'parent' => '10',
        'class' => '',
        'hide_empty' => 0,
      ),
      'center______' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '20.00125281012607',
        'width_type' => '%',
        'parent' => '10',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right_1_______' => array(
        'type' => 'region',
        'title' => 'right 1',
        'width' => '20.011880750853553',
        'width_type' => '%',
        'parent' => '10',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right_2_____' => array(
        'type' => 'region',
        'title' => 'right 2',
        'width' => '20.01826973585497',
        'width_type' => '%',
        'parent' => '10',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right' => NULL,
      'top' => NULL,
      'left_1' => NULL,
      'left_2' => NULL,
      'right_2' => NULL,
      'right_1' => NULL,
      'left_2_' => NULL,
      'left_1_' => NULL,
      'center_' => NULL,
      'right_2_' => NULL,
      'right_1_' => NULL,
      'left_2__' => NULL,
      'left_2___' => NULL,
      'center__' => NULL,
      'right_1__' => NULL,
      'right_1___' => NULL,
      'left_1__' => NULL,
      'left_1___' => NULL,
      'center___' => NULL,
      'right_1____' => NULL,
      'right_2__' => NULL,
      'left_2____' => NULL,
      'left_1____' => NULL,
      'center____' => NULL,
      'right_1_____' => NULL,
      'right_2___' => NULL,
      'left_1_____' => NULL,
      'left_2_____' => NULL,
      'center_____' => NULL,
      'right_1______' => NULL,
      'right_2____' => NULL,
      'left_2______' => NULL,
      'left_1______' => NULL,
      'center______' => NULL,
      'right_1_______' => NULL,
      'right_2_____' => NULL,
      'main_' => NULL,
      'q1_' => NULL,
      'q3_' => NULL,
      'q2_' => NULL,
      'right_2______' => NULL,
      'q4_' => NULL,
      'left_2_______' => NULL,
      'left_1_______' => NULL,
      'center_______' => NULL,
      'right_2_______' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%nid:field_batter, %nid:field-first-name (%nid:field-team)';
  $display->uuid = '6dbc0f6a-81d7-4c8a-ba78-2ff69881a6f0';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_player_stats_panel__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c6f588df-34c9-495e-82dd-46c72d2e7e41';
  $pane->panel = 'center__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '3',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c6f588df-34c9-495e-82dd-46c72d2e7e41';
  $display->content['new-c6f588df-34c9-495e-82dd-46c72d2e7e41'] = $pane;
  $display->panels['center__'][0] = 'new-c6f588df-34c9-495e-82dd-46c72d2e7e41';
  $pane = new stdClass();
  $pane->pid = 'new-9fbe1fd0-cec2-4bda-b9ef-99ddfc5d8486';
  $pane->panel = 'center__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '8',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9fbe1fd0-cec2-4bda-b9ef-99ddfc5d8486';
  $display->content['new-9fbe1fd0-cec2-4bda-b9ef-99ddfc5d8486'] = $pane;
  $display->panels['center__'][1] = 'new-9fbe1fd0-cec2-4bda-b9ef-99ddfc5d8486';
  $pane = new stdClass();
  $pane->pid = 'new-85c553a3-a4a5-4e61-9c57-6081459fb11b';
  $pane->panel = 'center__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '13',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '85c553a3-a4a5-4e61-9c57-6081459fb11b';
  $display->content['new-85c553a3-a4a5-4e61-9c57-6081459fb11b'] = $pane;
  $display->panels['center__'][2] = 'new-85c553a3-a4a5-4e61-9c57-6081459fb11b';
  $pane = new stdClass();
  $pane->pid = 'new-5fc33241-7a46-4a66-be43-5d0bd2a4cda7';
  $pane->panel = 'center__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '18',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '5fc33241-7a46-4a66-be43-5d0bd2a4cda7';
  $display->content['new-5fc33241-7a46-4a66-be43-5d0bd2a4cda7'] = $pane;
  $display->panels['center__'][3] = 'new-5fc33241-7a46-4a66-be43-5d0bd2a4cda7';
  $pane = new stdClass();
  $pane->pid = 'new-942c0f7c-7b85-4d55-87a4-8349cfe4b244';
  $pane->panel = 'center__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '23',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '942c0f7c-7b85-4d55-87a4-8349cfe4b244';
  $display->content['new-942c0f7c-7b85-4d55-87a4-8349cfe4b244'] = $pane;
  $display->panels['center__'][4] = 'new-942c0f7c-7b85-4d55-87a4-8349cfe4b244';
  $pane = new stdClass();
  $pane->pid = 'new-e511d795-036e-4494-8c02-9b5e876a506b';
  $pane->panel = 'center___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '3',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e511d795-036e-4494-8c02-9b5e876a506b';
  $display->content['new-e511d795-036e-4494-8c02-9b5e876a506b'] = $pane;
  $display->panels['center___'][0] = 'new-e511d795-036e-4494-8c02-9b5e876a506b';
  $pane = new stdClass();
  $pane->pid = 'new-dec19676-e191-4210-8385-470798786628';
  $pane->panel = 'center___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '8',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'dec19676-e191-4210-8385-470798786628';
  $display->content['new-dec19676-e191-4210-8385-470798786628'] = $pane;
  $display->panels['center___'][1] = 'new-dec19676-e191-4210-8385-470798786628';
  $pane = new stdClass();
  $pane->pid = 'new-d8a3db3a-0886-4dea-9d6b-9348b4a62a84';
  $pane->panel = 'center___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '13',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'd8a3db3a-0886-4dea-9d6b-9348b4a62a84';
  $display->content['new-d8a3db3a-0886-4dea-9d6b-9348b4a62a84'] = $pane;
  $display->panels['center___'][2] = 'new-d8a3db3a-0886-4dea-9d6b-9348b4a62a84';
  $pane = new stdClass();
  $pane->pid = 'new-e34ddf20-3fe8-4ac3-8422-072c64bdd3b0';
  $pane->panel = 'center___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '18',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'e34ddf20-3fe8-4ac3-8422-072c64bdd3b0';
  $display->content['new-e34ddf20-3fe8-4ac3-8422-072c64bdd3b0'] = $pane;
  $display->panels['center___'][3] = 'new-e34ddf20-3fe8-4ac3-8422-072c64bdd3b0';
  $pane = new stdClass();
  $pane->pid = 'new-1556d5d4-e570-482f-84f4-e8b9501c8a62';
  $pane->panel = 'center___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '23',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '1556d5d4-e570-482f-84f4-e8b9501c8a62';
  $display->content['new-1556d5d4-e570-482f-84f4-e8b9501c8a62'] = $pane;
  $display->panels['center___'][4] = 'new-1556d5d4-e570-482f-84f4-e8b9501c8a62';
  $pane = new stdClass();
  $pane->pid = 'new-6028af0f-5fad-44f0-b40a-64de91f4c105';
  $pane->panel = 'center____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '3',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6028af0f-5fad-44f0-b40a-64de91f4c105';
  $display->content['new-6028af0f-5fad-44f0-b40a-64de91f4c105'] = $pane;
  $display->panels['center____'][0] = 'new-6028af0f-5fad-44f0-b40a-64de91f4c105';
  $pane = new stdClass();
  $pane->pid = 'new-113e2be9-2488-426f-b596-cfd2f09c18bc';
  $pane->panel = 'center____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '8',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '113e2be9-2488-426f-b596-cfd2f09c18bc';
  $display->content['new-113e2be9-2488-426f-b596-cfd2f09c18bc'] = $pane;
  $display->panels['center____'][1] = 'new-113e2be9-2488-426f-b596-cfd2f09c18bc';
  $pane = new stdClass();
  $pane->pid = 'new-68393e3a-c8e4-4dde-aa63-c19d5043b824';
  $pane->panel = 'center____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '13',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '68393e3a-c8e4-4dde-aa63-c19d5043b824';
  $display->content['new-68393e3a-c8e4-4dde-aa63-c19d5043b824'] = $pane;
  $display->panels['center____'][2] = 'new-68393e3a-c8e4-4dde-aa63-c19d5043b824';
  $pane = new stdClass();
  $pane->pid = 'new-c166ebd4-5dc0-44b7-b08b-630dc8a40a4f';
  $pane->panel = 'center____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '18',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'c166ebd4-5dc0-44b7-b08b-630dc8a40a4f';
  $display->content['new-c166ebd4-5dc0-44b7-b08b-630dc8a40a4f'] = $pane;
  $display->panels['center____'][3] = 'new-c166ebd4-5dc0-44b7-b08b-630dc8a40a4f';
  $pane = new stdClass();
  $pane->pid = 'new-a90e7f8e-0eb7-41dc-b86f-b8ea168ad835';
  $pane->panel = 'center____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '23',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'a90e7f8e-0eb7-41dc-b86f-b8ea168ad835';
  $display->content['new-a90e7f8e-0eb7-41dc-b86f-b8ea168ad835'] = $pane;
  $display->panels['center____'][4] = 'new-a90e7f8e-0eb7-41dc-b86f-b8ea168ad835';
  $pane = new stdClass();
  $pane->pid = 'new-609f1fd4-f826-4dcb-b071-8dd410ffdd75';
  $pane->panel = 'center_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '3',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '609f1fd4-f826-4dcb-b071-8dd410ffdd75';
  $display->content['new-609f1fd4-f826-4dcb-b071-8dd410ffdd75'] = $pane;
  $display->panels['center_______'][0] = 'new-609f1fd4-f826-4dcb-b071-8dd410ffdd75';
  $pane = new stdClass();
  $pane->pid = 'new-fff0b103-f7a8-4b74-b793-5d51a411cc8a';
  $pane->panel = 'center_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '8',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'fff0b103-f7a8-4b74-b793-5d51a411cc8a';
  $display->content['new-fff0b103-f7a8-4b74-b793-5d51a411cc8a'] = $pane;
  $display->panels['center_______'][1] = 'new-fff0b103-f7a8-4b74-b793-5d51a411cc8a';
  $pane = new stdClass();
  $pane->pid = 'new-f5097b8c-b666-4962-bb3d-f7fc0d16abc2';
  $pane->panel = 'center_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '13',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f5097b8c-b666-4962-bb3d-f7fc0d16abc2';
  $display->content['new-f5097b8c-b666-4962-bb3d-f7fc0d16abc2'] = $pane;
  $display->panels['center_______'][2] = 'new-f5097b8c-b666-4962-bb3d-f7fc0d16abc2';
  $pane = new stdClass();
  $pane->pid = 'new-7d5ce7aa-0711-4059-813d-accd3c4d125b';
  $pane->panel = 'center_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '18',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '7d5ce7aa-0711-4059-813d-accd3c4d125b';
  $display->content['new-7d5ce7aa-0711-4059-813d-accd3c4d125b'] = $pane;
  $display->panels['center_______'][3] = 'new-7d5ce7aa-0711-4059-813d-accd3c4d125b';
  $pane = new stdClass();
  $pane->pid = 'new-83318c7a-17c0-43d2-adc9-71f7511a0b5f';
  $pane->panel = 'center_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '23',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '83318c7a-17c0-43d2-adc9-71f7511a0b5f';
  $display->content['new-83318c7a-17c0-43d2-adc9-71f7511a0b5f'] = $pane;
  $display->panels['center_______'][4] = 'new-83318c7a-17c0-43d2-adc9-71f7511a0b5f';
  $pane = new stdClass();
  $pane->pid = 'new-11a1c86b-f78d-47e3-8700-f3705d1bda62';
  $pane->panel = 'left_1__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '2',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '11a1c86b-f78d-47e3-8700-f3705d1bda62';
  $display->content['new-11a1c86b-f78d-47e3-8700-f3705d1bda62'] = $pane;
  $display->panels['left_1__'][0] = 'new-11a1c86b-f78d-47e3-8700-f3705d1bda62';
  $pane = new stdClass();
  $pane->pid = 'new-dc04fcba-06ad-4378-a51a-16d56ae03421';
  $pane->panel = 'left_1__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '7',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'dc04fcba-06ad-4378-a51a-16d56ae03421';
  $display->content['new-dc04fcba-06ad-4378-a51a-16d56ae03421'] = $pane;
  $display->panels['left_1__'][1] = 'new-dc04fcba-06ad-4378-a51a-16d56ae03421';
  $pane = new stdClass();
  $pane->pid = 'new-a138650d-6373-4461-a4a6-e66ef9e0bd4e';
  $pane->panel = 'left_1__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '12',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a138650d-6373-4461-a4a6-e66ef9e0bd4e';
  $display->content['new-a138650d-6373-4461-a4a6-e66ef9e0bd4e'] = $pane;
  $display->panels['left_1__'][2] = 'new-a138650d-6373-4461-a4a6-e66ef9e0bd4e';
  $pane = new stdClass();
  $pane->pid = 'new-f43db01f-f6fb-4e60-941b-e1e8ba9fc02d';
  $pane->panel = 'left_1__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '17',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'f43db01f-f6fb-4e60-941b-e1e8ba9fc02d';
  $display->content['new-f43db01f-f6fb-4e60-941b-e1e8ba9fc02d'] = $pane;
  $display->panels['left_1__'][3] = 'new-f43db01f-f6fb-4e60-941b-e1e8ba9fc02d';
  $pane = new stdClass();
  $pane->pid = 'new-6a6de28e-cdcd-45af-a9c2-e5e104079ad8';
  $pane->panel = 'left_1__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '22',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '6a6de28e-cdcd-45af-a9c2-e5e104079ad8';
  $display->content['new-6a6de28e-cdcd-45af-a9c2-e5e104079ad8'] = $pane;
  $display->panels['left_1__'][4] = 'new-6a6de28e-cdcd-45af-a9c2-e5e104079ad8';
  $pane = new stdClass();
  $pane->pid = 'new-8e9b358c-0d81-4b3e-80b0-8c4b0bcc4f0c';
  $pane->panel = 'left_1___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '2',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8e9b358c-0d81-4b3e-80b0-8c4b0bcc4f0c';
  $display->content['new-8e9b358c-0d81-4b3e-80b0-8c4b0bcc4f0c'] = $pane;
  $display->panels['left_1___'][0] = 'new-8e9b358c-0d81-4b3e-80b0-8c4b0bcc4f0c';
  $pane = new stdClass();
  $pane->pid = 'new-612a61b0-ba1c-4598-b449-bbfda394a883';
  $pane->panel = 'left_1___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '7',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '612a61b0-ba1c-4598-b449-bbfda394a883';
  $display->content['new-612a61b0-ba1c-4598-b449-bbfda394a883'] = $pane;
  $display->panels['left_1___'][1] = 'new-612a61b0-ba1c-4598-b449-bbfda394a883';
  $pane = new stdClass();
  $pane->pid = 'new-b0122c33-3ef3-4431-8bca-e13b548b39ba';
  $pane->panel = 'left_1___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '12',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'b0122c33-3ef3-4431-8bca-e13b548b39ba';
  $display->content['new-b0122c33-3ef3-4431-8bca-e13b548b39ba'] = $pane;
  $display->panels['left_1___'][2] = 'new-b0122c33-3ef3-4431-8bca-e13b548b39ba';
  $pane = new stdClass();
  $pane->pid = 'new-8da6c219-4194-4631-a535-2d81ffb69d45';
  $pane->panel = 'left_1___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '17',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '8da6c219-4194-4631-a535-2d81ffb69d45';
  $display->content['new-8da6c219-4194-4631-a535-2d81ffb69d45'] = $pane;
  $display->panels['left_1___'][3] = 'new-8da6c219-4194-4631-a535-2d81ffb69d45';
  $pane = new stdClass();
  $pane->pid = 'new-88c1d95b-7fd1-4264-bc6c-a125364b8118';
  $pane->panel = 'left_1___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '22',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '88c1d95b-7fd1-4264-bc6c-a125364b8118';
  $display->content['new-88c1d95b-7fd1-4264-bc6c-a125364b8118'] = $pane;
  $display->panels['left_1___'][4] = 'new-88c1d95b-7fd1-4264-bc6c-a125364b8118';
  $pane = new stdClass();
  $pane->pid = 'new-40a7a936-ea13-4ba6-9877-0d24c081a2c4';
  $pane->panel = 'left_1____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '2',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '40a7a936-ea13-4ba6-9877-0d24c081a2c4';
  $display->content['new-40a7a936-ea13-4ba6-9877-0d24c081a2c4'] = $pane;
  $display->panels['left_1____'][0] = 'new-40a7a936-ea13-4ba6-9877-0d24c081a2c4';
  $pane = new stdClass();
  $pane->pid = 'new-11ae3867-ddbe-422f-b516-c96032f4df2c';
  $pane->panel = 'left_1____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '7',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '11ae3867-ddbe-422f-b516-c96032f4df2c';
  $display->content['new-11ae3867-ddbe-422f-b516-c96032f4df2c'] = $pane;
  $display->panels['left_1____'][1] = 'new-11ae3867-ddbe-422f-b516-c96032f4df2c';
  $pane = new stdClass();
  $pane->pid = 'new-97f687e9-4870-43d6-8168-3d2e61475f41';
  $pane->panel = 'left_1____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '12',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '97f687e9-4870-43d6-8168-3d2e61475f41';
  $display->content['new-97f687e9-4870-43d6-8168-3d2e61475f41'] = $pane;
  $display->panels['left_1____'][2] = 'new-97f687e9-4870-43d6-8168-3d2e61475f41';
  $pane = new stdClass();
  $pane->pid = 'new-3e06e493-cd80-4366-92c7-f043afe57500';
  $pane->panel = 'left_1____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '17',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '3e06e493-cd80-4366-92c7-f043afe57500';
  $display->content['new-3e06e493-cd80-4366-92c7-f043afe57500'] = $pane;
  $display->panels['left_1____'][3] = 'new-3e06e493-cd80-4366-92c7-f043afe57500';
  $pane = new stdClass();
  $pane->pid = 'new-5d96b409-f9cc-4a1c-b48b-dd0986cab85b';
  $pane->panel = 'left_1____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '22',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '5d96b409-f9cc-4a1c-b48b-dd0986cab85b';
  $display->content['new-5d96b409-f9cc-4a1c-b48b-dd0986cab85b'] = $pane;
  $display->panels['left_1____'][4] = 'new-5d96b409-f9cc-4a1c-b48b-dd0986cab85b';
  $pane = new stdClass();
  $pane->pid = 'new-0f8b9f80-f6ff-43eb-b878-70b14c870b29';
  $pane->panel = 'left_1_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '2',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0f8b9f80-f6ff-43eb-b878-70b14c870b29';
  $display->content['new-0f8b9f80-f6ff-43eb-b878-70b14c870b29'] = $pane;
  $display->panels['left_1_______'][0] = 'new-0f8b9f80-f6ff-43eb-b878-70b14c870b29';
  $pane = new stdClass();
  $pane->pid = 'new-4214a69b-1c82-40ec-9ec9-1854decf4821';
  $pane->panel = 'left_1_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '7',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4214a69b-1c82-40ec-9ec9-1854decf4821';
  $display->content['new-4214a69b-1c82-40ec-9ec9-1854decf4821'] = $pane;
  $display->panels['left_1_______'][1] = 'new-4214a69b-1c82-40ec-9ec9-1854decf4821';
  $pane = new stdClass();
  $pane->pid = 'new-943161ee-3203-4264-b682-ffe902d5307e';
  $pane->panel = 'left_1_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '12',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '943161ee-3203-4264-b682-ffe902d5307e';
  $display->content['new-943161ee-3203-4264-b682-ffe902d5307e'] = $pane;
  $display->panels['left_1_______'][2] = 'new-943161ee-3203-4264-b682-ffe902d5307e';
  $pane = new stdClass();
  $pane->pid = 'new-492e573f-5da5-4b4d-9a4d-a720050c26ca';
  $pane->panel = 'left_1_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '17',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '492e573f-5da5-4b4d-9a4d-a720050c26ca';
  $display->content['new-492e573f-5da5-4b4d-9a4d-a720050c26ca'] = $pane;
  $display->panels['left_1_______'][3] = 'new-492e573f-5da5-4b4d-9a4d-a720050c26ca';
  $pane = new stdClass();
  $pane->pid = 'new-73018548-3073-4b79-89f1-591e749c19c8';
  $pane->panel = 'left_1_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '22',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '73018548-3073-4b79-89f1-591e749c19c8';
  $display->content['new-73018548-3073-4b79-89f1-591e749c19c8'] = $pane;
  $display->panels['left_1_______'][4] = 'new-73018548-3073-4b79-89f1-591e749c19c8';
  $pane = new stdClass();
  $pane->pid = 'new-c8f6a4af-34d7-45cf-bd37-e1442ae1d4b7';
  $pane->panel = 'left_2__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c8f6a4af-34d7-45cf-bd37-e1442ae1d4b7';
  $display->content['new-c8f6a4af-34d7-45cf-bd37-e1442ae1d4b7'] = $pane;
  $display->panels['left_2__'][0] = 'new-c8f6a4af-34d7-45cf-bd37-e1442ae1d4b7';
  $pane = new stdClass();
  $pane->pid = 'new-55e648ff-a1e8-4e7c-bd8e-8cbbe87dbba0';
  $pane->panel = 'left_2__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '6',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '55e648ff-a1e8-4e7c-bd8e-8cbbe87dbba0';
  $display->content['new-55e648ff-a1e8-4e7c-bd8e-8cbbe87dbba0'] = $pane;
  $display->panels['left_2__'][1] = 'new-55e648ff-a1e8-4e7c-bd8e-8cbbe87dbba0';
  $pane = new stdClass();
  $pane->pid = 'new-4b1456a1-21af-4acc-bedf-9596bde9e55c';
  $pane->panel = 'left_2__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '11',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '4b1456a1-21af-4acc-bedf-9596bde9e55c';
  $display->content['new-4b1456a1-21af-4acc-bedf-9596bde9e55c'] = $pane;
  $display->panels['left_2__'][2] = 'new-4b1456a1-21af-4acc-bedf-9596bde9e55c';
  $pane = new stdClass();
  $pane->pid = 'new-a410d159-80d6-4cbd-8227-186d99bb7ad9';
  $pane->panel = 'left_2__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '16',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'a410d159-80d6-4cbd-8227-186d99bb7ad9';
  $display->content['new-a410d159-80d6-4cbd-8227-186d99bb7ad9'] = $pane;
  $display->panels['left_2__'][3] = 'new-a410d159-80d6-4cbd-8227-186d99bb7ad9';
  $pane = new stdClass();
  $pane->pid = 'new-f9359adf-3cd8-41f6-878f-8af0ff8d3f2c';
  $pane->panel = 'left_2__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '21',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'f9359adf-3cd8-41f6-878f-8af0ff8d3f2c';
  $display->content['new-f9359adf-3cd8-41f6-878f-8af0ff8d3f2c'] = $pane;
  $display->panels['left_2__'][4] = 'new-f9359adf-3cd8-41f6-878f-8af0ff8d3f2c';
  $pane = new stdClass();
  $pane->pid = 'new-3d9738b8-925f-48e1-9dc1-208a767c9d7b';
  $pane->panel = 'left_2___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3d9738b8-925f-48e1-9dc1-208a767c9d7b';
  $display->content['new-3d9738b8-925f-48e1-9dc1-208a767c9d7b'] = $pane;
  $display->panels['left_2___'][0] = 'new-3d9738b8-925f-48e1-9dc1-208a767c9d7b';
  $pane = new stdClass();
  $pane->pid = 'new-32c93575-85fd-4248-8571-6373f2fa4cdd';
  $pane->panel = 'left_2___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '6',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '32c93575-85fd-4248-8571-6373f2fa4cdd';
  $display->content['new-32c93575-85fd-4248-8571-6373f2fa4cdd'] = $pane;
  $display->panels['left_2___'][1] = 'new-32c93575-85fd-4248-8571-6373f2fa4cdd';
  $pane = new stdClass();
  $pane->pid = 'new-8e37c22e-e4b4-4dea-b833-66f5f78d1bca';
  $pane->panel = 'left_2___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '11',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '8e37c22e-e4b4-4dea-b833-66f5f78d1bca';
  $display->content['new-8e37c22e-e4b4-4dea-b833-66f5f78d1bca'] = $pane;
  $display->panels['left_2___'][2] = 'new-8e37c22e-e4b4-4dea-b833-66f5f78d1bca';
  $pane = new stdClass();
  $pane->pid = 'new-54c89e30-3240-43aa-b6cb-82241dbcc314';
  $pane->panel = 'left_2___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '16',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '54c89e30-3240-43aa-b6cb-82241dbcc314';
  $display->content['new-54c89e30-3240-43aa-b6cb-82241dbcc314'] = $pane;
  $display->panels['left_2___'][3] = 'new-54c89e30-3240-43aa-b6cb-82241dbcc314';
  $pane = new stdClass();
  $pane->pid = 'new-c043e7fd-36f3-43f3-a9a6-9b2ceb135c1e';
  $pane->panel = 'left_2___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '21',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'c043e7fd-36f3-43f3-a9a6-9b2ceb135c1e';
  $display->content['new-c043e7fd-36f3-43f3-a9a6-9b2ceb135c1e'] = $pane;
  $display->panels['left_2___'][4] = 'new-c043e7fd-36f3-43f3-a9a6-9b2ceb135c1e';
  $pane = new stdClass();
  $pane->pid = 'new-e1a6901b-1f69-4568-871f-7a40e729f64d';
  $pane->panel = 'left_2____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e1a6901b-1f69-4568-871f-7a40e729f64d';
  $display->content['new-e1a6901b-1f69-4568-871f-7a40e729f64d'] = $pane;
  $display->panels['left_2____'][0] = 'new-e1a6901b-1f69-4568-871f-7a40e729f64d';
  $pane = new stdClass();
  $pane->pid = 'new-c90f9653-5400-4f9d-b727-8f247979d482';
  $pane->panel = 'left_2____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '6',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c90f9653-5400-4f9d-b727-8f247979d482';
  $display->content['new-c90f9653-5400-4f9d-b727-8f247979d482'] = $pane;
  $display->panels['left_2____'][1] = 'new-c90f9653-5400-4f9d-b727-8f247979d482';
  $pane = new stdClass();
  $pane->pid = 'new-0e13f1a0-303e-46d9-81f3-9a928d295676';
  $pane->panel = 'left_2____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '11',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '0e13f1a0-303e-46d9-81f3-9a928d295676';
  $display->content['new-0e13f1a0-303e-46d9-81f3-9a928d295676'] = $pane;
  $display->panels['left_2____'][2] = 'new-0e13f1a0-303e-46d9-81f3-9a928d295676';
  $pane = new stdClass();
  $pane->pid = 'new-104b8847-6f95-4e7d-8585-d4a357752d27';
  $pane->panel = 'left_2____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '16',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '104b8847-6f95-4e7d-8585-d4a357752d27';
  $display->content['new-104b8847-6f95-4e7d-8585-d4a357752d27'] = $pane;
  $display->panels['left_2____'][3] = 'new-104b8847-6f95-4e7d-8585-d4a357752d27';
  $pane = new stdClass();
  $pane->pid = 'new-ff526590-e6fb-4f4a-bc2b-86104abc8e75';
  $pane->panel = 'left_2____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '21',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'ff526590-e6fb-4f4a-bc2b-86104abc8e75';
  $display->content['new-ff526590-e6fb-4f4a-bc2b-86104abc8e75'] = $pane;
  $display->panels['left_2____'][4] = 'new-ff526590-e6fb-4f4a-bc2b-86104abc8e75';
  $pane = new stdClass();
  $pane->pid = 'new-f68b2b43-69d9-407e-aa11-e694de18c2c0';
  $pane->panel = 'left_2_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f68b2b43-69d9-407e-aa11-e694de18c2c0';
  $display->content['new-f68b2b43-69d9-407e-aa11-e694de18c2c0'] = $pane;
  $display->panels['left_2_______'][0] = 'new-f68b2b43-69d9-407e-aa11-e694de18c2c0';
  $pane = new stdClass();
  $pane->pid = 'new-7422d30d-d162-4bd5-bbc1-046cb292618a';
  $pane->panel = 'left_2_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '6',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7422d30d-d162-4bd5-bbc1-046cb292618a';
  $display->content['new-7422d30d-d162-4bd5-bbc1-046cb292618a'] = $pane;
  $display->panels['left_2_______'][1] = 'new-7422d30d-d162-4bd5-bbc1-046cb292618a';
  $pane = new stdClass();
  $pane->pid = 'new-eb11ea52-1f42-4802-8a02-dbecd00d6956';
  $pane->panel = 'left_2_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '11',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'eb11ea52-1f42-4802-8a02-dbecd00d6956';
  $display->content['new-eb11ea52-1f42-4802-8a02-dbecd00d6956'] = $pane;
  $display->panels['left_2_______'][2] = 'new-eb11ea52-1f42-4802-8a02-dbecd00d6956';
  $pane = new stdClass();
  $pane->pid = 'new-7babc028-39ac-464c-baf2-3bc03c70b252';
  $pane->panel = 'left_2_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '16',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '7babc028-39ac-464c-baf2-3bc03c70b252';
  $display->content['new-7babc028-39ac-464c-baf2-3bc03c70b252'] = $pane;
  $display->panels['left_2_______'][3] = 'new-7babc028-39ac-464c-baf2-3bc03c70b252';
  $pane = new stdClass();
  $pane->pid = 'new-e8560c49-723e-48f1-899e-3c08405bab82';
  $pane->panel = 'left_2_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '21',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'e8560c49-723e-48f1-899e-3c08405bab82';
  $display->content['new-e8560c49-723e-48f1-899e-3c08405bab82'] = $pane;
  $display->panels['left_2_______'][4] = 'new-e8560c49-723e-48f1-899e-3c08405bab82';
  $pane = new stdClass();
  $pane->pid = 'new-040cfc07-9ddf-4c35-8d2e-aaa7777697a1';
  $pane->panel = 'main_';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_9';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '040cfc07-9ddf-4c35-8d2e-aaa7777697a1';
  $display->content['new-040cfc07-9ddf-4c35-8d2e-aaa7777697a1'] = $pane;
  $display->panels['main_'][0] = 'new-040cfc07-9ddf-4c35-8d2e-aaa7777697a1';
  $pane = new stdClass();
  $pane->pid = 'new-961ddc6c-2129-417e-bb50-38a50fac2a44';
  $pane->panel = 'q1_';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h3>Fastball vs. RH</h3>',
    'format' => 'filtered_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '961ddc6c-2129-417e-bb50-38a50fac2a44';
  $display->content['new-961ddc6c-2129-417e-bb50-38a50fac2a44'] = $pane;
  $display->panels['q1_'][0] = 'new-961ddc6c-2129-417e-bb50-38a50fac2a44';
  $pane = new stdClass();
  $pane->pid = 'new-d451acc6-78c1-4be5-bfed-9ceb6f8e8cfe';
  $pane->panel = 'q2_';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h3>Off-Speed vs. RH</h3>',
    'format' => 'filtered_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd451acc6-78c1-4be5-bfed-9ceb6f8e8cfe';
  $display->content['new-d451acc6-78c1-4be5-bfed-9ceb6f8e8cfe'] = $pane;
  $display->panels['q2_'][0] = 'new-d451acc6-78c1-4be5-bfed-9ceb6f8e8cfe';
  $pane = new stdClass();
  $pane->pid = 'new-6208cd19-e5ba-46ea-9fa5-ec10d076ee4d';
  $pane->panel = 'q3_';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h3>Fastball vs. LH</h3>',
    'format' => 'filtered_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6208cd19-e5ba-46ea-9fa5-ec10d076ee4d';
  $display->content['new-6208cd19-e5ba-46ea-9fa5-ec10d076ee4d'] = $pane;
  $display->panels['q3_'][0] = 'new-6208cd19-e5ba-46ea-9fa5-ec10d076ee4d';
  $pane = new stdClass();
  $pane->pid = 'new-a88e8b86-a706-49b5-bb6b-f6ea5b8cb788';
  $pane->panel = 'q4_';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h3>Off-Speed vs. LH</h3>',
    'format' => 'filtered_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a88e8b86-a706-49b5-bb6b-f6ea5b8cb788';
  $display->content['new-a88e8b86-a706-49b5-bb6b-f6ea5b8cb788'] = $pane;
  $display->panels['q4_'][0] = 'new-a88e8b86-a706-49b5-bb6b-f6ea5b8cb788';
  $pane = new stdClass();
  $pane->pid = 'new-6dc4dc28-ab60-496d-82eb-a15e098c25ba';
  $pane->panel = 'right_1__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '4',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6dc4dc28-ab60-496d-82eb-a15e098c25ba';
  $display->content['new-6dc4dc28-ab60-496d-82eb-a15e098c25ba'] = $pane;
  $display->panels['right_1__'][0] = 'new-6dc4dc28-ab60-496d-82eb-a15e098c25ba';
  $pane = new stdClass();
  $pane->pid = 'new-2a60e8bf-1419-4766-8afd-b7970c6e8f0e';
  $pane->panel = 'right_1__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '9',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2a60e8bf-1419-4766-8afd-b7970c6e8f0e';
  $display->content['new-2a60e8bf-1419-4766-8afd-b7970c6e8f0e'] = $pane;
  $display->panels['right_1__'][1] = 'new-2a60e8bf-1419-4766-8afd-b7970c6e8f0e';
  $pane = new stdClass();
  $pane->pid = 'new-efe664be-8a33-4ee5-8b90-a452e24a1fb8';
  $pane->panel = 'right_1__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '14',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'efe664be-8a33-4ee5-8b90-a452e24a1fb8';
  $display->content['new-efe664be-8a33-4ee5-8b90-a452e24a1fb8'] = $pane;
  $display->panels['right_1__'][2] = 'new-efe664be-8a33-4ee5-8b90-a452e24a1fb8';
  $pane = new stdClass();
  $pane->pid = 'new-3a567451-cf6e-4d89-9c22-96a4c04026fd';
  $pane->panel = 'right_1__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '19',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '3a567451-cf6e-4d89-9c22-96a4c04026fd';
  $display->content['new-3a567451-cf6e-4d89-9c22-96a4c04026fd'] = $pane;
  $display->panels['right_1__'][3] = 'new-3a567451-cf6e-4d89-9c22-96a4c04026fd';
  $pane = new stdClass();
  $pane->pid = 'new-8d955965-6a08-43e2-b54a-564cface3d02';
  $pane->panel = 'right_1__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '24',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '8d955965-6a08-43e2-b54a-564cface3d02';
  $display->content['new-8d955965-6a08-43e2-b54a-564cface3d02'] = $pane;
  $display->panels['right_1__'][4] = 'new-8d955965-6a08-43e2-b54a-564cface3d02';
  $pane = new stdClass();
  $pane->pid = 'new-47531ed0-96b2-4cb0-981c-4fcb90a7adeb';
  $pane->panel = 'right_1___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '4',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '47531ed0-96b2-4cb0-981c-4fcb90a7adeb';
  $display->content['new-47531ed0-96b2-4cb0-981c-4fcb90a7adeb'] = $pane;
  $display->panels['right_1___'][0] = 'new-47531ed0-96b2-4cb0-981c-4fcb90a7adeb';
  $pane = new stdClass();
  $pane->pid = 'new-4a203fd1-9526-485b-ae8e-09313d8a6726';
  $pane->panel = 'right_1___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '9',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '4a203fd1-9526-485b-ae8e-09313d8a6726';
  $display->content['new-4a203fd1-9526-485b-ae8e-09313d8a6726'] = $pane;
  $display->panels['right_1___'][1] = 'new-4a203fd1-9526-485b-ae8e-09313d8a6726';
  $pane = new stdClass();
  $pane->pid = 'new-91c9a17b-522e-45e2-81ac-7401202e8a42';
  $pane->panel = 'right_1___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '14',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '91c9a17b-522e-45e2-81ac-7401202e8a42';
  $display->content['new-91c9a17b-522e-45e2-81ac-7401202e8a42'] = $pane;
  $display->panels['right_1___'][2] = 'new-91c9a17b-522e-45e2-81ac-7401202e8a42';
  $pane = new stdClass();
  $pane->pid = 'new-8e00d7b1-9d4a-40cf-88f1-c8d6ba5ef474';
  $pane->panel = 'right_1___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '19',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '8e00d7b1-9d4a-40cf-88f1-c8d6ba5ef474';
  $display->content['new-8e00d7b1-9d4a-40cf-88f1-c8d6ba5ef474'] = $pane;
  $display->panels['right_1___'][3] = 'new-8e00d7b1-9d4a-40cf-88f1-c8d6ba5ef474';
  $pane = new stdClass();
  $pane->pid = 'new-abd169ed-6013-4914-bdfa-05e69fa2793b';
  $pane->panel = 'right_1___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '24',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'abd169ed-6013-4914-bdfa-05e69fa2793b';
  $display->content['new-abd169ed-6013-4914-bdfa-05e69fa2793b'] = $pane;
  $display->panels['right_1___'][4] = 'new-abd169ed-6013-4914-bdfa-05e69fa2793b';
  $pane = new stdClass();
  $pane->pid = 'new-c1f07463-8ec0-4030-b783-822c7b7212d9';
  $pane->panel = 'right_1____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '4',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c1f07463-8ec0-4030-b783-822c7b7212d9';
  $display->content['new-c1f07463-8ec0-4030-b783-822c7b7212d9'] = $pane;
  $display->panels['right_1____'][0] = 'new-c1f07463-8ec0-4030-b783-822c7b7212d9';
  $pane = new stdClass();
  $pane->pid = 'new-c1b72d5c-86d1-4587-8fea-14b408c53619';
  $pane->panel = 'right_1____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '9',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c1b72d5c-86d1-4587-8fea-14b408c53619';
  $display->content['new-c1b72d5c-86d1-4587-8fea-14b408c53619'] = $pane;
  $display->panels['right_1____'][1] = 'new-c1b72d5c-86d1-4587-8fea-14b408c53619';
  $pane = new stdClass();
  $pane->pid = 'new-d3f3cbf4-dd37-4e1b-9a2a-baba03cc617a';
  $pane->panel = 'right_1____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '14',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'd3f3cbf4-dd37-4e1b-9a2a-baba03cc617a';
  $display->content['new-d3f3cbf4-dd37-4e1b-9a2a-baba03cc617a'] = $pane;
  $display->panels['right_1____'][2] = 'new-d3f3cbf4-dd37-4e1b-9a2a-baba03cc617a';
  $pane = new stdClass();
  $pane->pid = 'new-ed12ec6f-e3d7-4834-bce7-9cd544c99a77';
  $pane->panel = 'right_1____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '19',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'ed12ec6f-e3d7-4834-bce7-9cd544c99a77';
  $display->content['new-ed12ec6f-e3d7-4834-bce7-9cd544c99a77'] = $pane;
  $display->panels['right_1____'][3] = 'new-ed12ec6f-e3d7-4834-bce7-9cd544c99a77';
  $pane = new stdClass();
  $pane->pid = 'new-f5286e07-46bc-4b44-8629-2d7faffba230';
  $pane->panel = 'right_1____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '24',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'f5286e07-46bc-4b44-8629-2d7faffba230';
  $display->content['new-f5286e07-46bc-4b44-8629-2d7faffba230'] = $pane;
  $display->panels['right_1____'][4] = 'new-f5286e07-46bc-4b44-8629-2d7faffba230';
  $pane = new stdClass();
  $pane->pid = 'new-1a96b894-2b0c-4121-9c73-b38475cb1ae4';
  $pane->panel = 'right_1_____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '4',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1a96b894-2b0c-4121-9c73-b38475cb1ae4';
  $display->content['new-1a96b894-2b0c-4121-9c73-b38475cb1ae4'] = $pane;
  $display->panels['right_1_____'][0] = 'new-1a96b894-2b0c-4121-9c73-b38475cb1ae4';
  $pane = new stdClass();
  $pane->pid = 'new-5868b44f-f330-4b3b-89ac-dfc8e422e8be';
  $pane->panel = 'right_1_____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '9',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5868b44f-f330-4b3b-89ac-dfc8e422e8be';
  $display->content['new-5868b44f-f330-4b3b-89ac-dfc8e422e8be'] = $pane;
  $display->panels['right_1_____'][1] = 'new-5868b44f-f330-4b3b-89ac-dfc8e422e8be';
  $pane = new stdClass();
  $pane->pid = 'new-58c7d02a-2fc9-47bb-912d-5dc46ea76b75';
  $pane->panel = 'right_1_____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '14',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '58c7d02a-2fc9-47bb-912d-5dc46ea76b75';
  $display->content['new-58c7d02a-2fc9-47bb-912d-5dc46ea76b75'] = $pane;
  $display->panels['right_1_____'][2] = 'new-58c7d02a-2fc9-47bb-912d-5dc46ea76b75';
  $pane = new stdClass();
  $pane->pid = 'new-4e19b293-7bfa-42fe-b1b7-a314d1b10550';
  $pane->panel = 'right_1_____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '19',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '4e19b293-7bfa-42fe-b1b7-a314d1b10550';
  $display->content['new-4e19b293-7bfa-42fe-b1b7-a314d1b10550'] = $pane;
  $display->panels['right_1_____'][3] = 'new-4e19b293-7bfa-42fe-b1b7-a314d1b10550';
  $pane = new stdClass();
  $pane->pid = 'new-1ca84496-db65-47be-afcd-1c74523bfffc';
  $pane->panel = 'right_1_____';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '24',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '1ca84496-db65-47be-afcd-1c74523bfffc';
  $display->content['new-1ca84496-db65-47be-afcd-1c74523bfffc'] = $pane;
  $display->panels['right_1_____'][4] = 'new-1ca84496-db65-47be-afcd-1c74523bfffc';
  $pane = new stdClass();
  $pane->pid = 'new-ca9ecbfb-a226-4a54-b365-38e63e438614';
  $pane->panel = 'right_2__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '5',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ca9ecbfb-a226-4a54-b365-38e63e438614';
  $display->content['new-ca9ecbfb-a226-4a54-b365-38e63e438614'] = $pane;
  $display->panels['right_2__'][0] = 'new-ca9ecbfb-a226-4a54-b365-38e63e438614';
  $pane = new stdClass();
  $pane->pid = 'new-7b74c7d3-a711-4147-9e2e-959dfc7effc8';
  $pane->panel = 'right_2__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '10',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7b74c7d3-a711-4147-9e2e-959dfc7effc8';
  $display->content['new-7b74c7d3-a711-4147-9e2e-959dfc7effc8'] = $pane;
  $display->panels['right_2__'][1] = 'new-7b74c7d3-a711-4147-9e2e-959dfc7effc8';
  $pane = new stdClass();
  $pane->pid = 'new-8f6c7d7d-b1cd-4f74-8cdc-c75c58c9e601';
  $pane->panel = 'right_2__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '15',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '8f6c7d7d-b1cd-4f74-8cdc-c75c58c9e601';
  $display->content['new-8f6c7d7d-b1cd-4f74-8cdc-c75c58c9e601'] = $pane;
  $display->panels['right_2__'][2] = 'new-8f6c7d7d-b1cd-4f74-8cdc-c75c58c9e601';
  $pane = new stdClass();
  $pane->pid = 'new-2bd3952b-3182-4eff-902d-60233f6232c1';
  $pane->panel = 'right_2__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '20',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '2bd3952b-3182-4eff-902d-60233f6232c1';
  $display->content['new-2bd3952b-3182-4eff-902d-60233f6232c1'] = $pane;
  $display->panels['right_2__'][3] = 'new-2bd3952b-3182-4eff-902d-60233f6232c1';
  $pane = new stdClass();
  $pane->pid = 'new-54fbc718-1339-4979-bfc9-f9a4a8a74def';
  $pane->panel = 'right_2__';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '25',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '54fbc718-1339-4979-bfc9-f9a4a8a74def';
  $display->content['new-54fbc718-1339-4979-bfc9-f9a4a8a74def'] = $pane;
  $display->panels['right_2__'][4] = 'new-54fbc718-1339-4979-bfc9-f9a4a8a74def';
  $pane = new stdClass();
  $pane->pid = 'new-d488b67d-5535-49c3-a048-23de203937fa';
  $pane->panel = 'right_2___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '5',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd488b67d-5535-49c3-a048-23de203937fa';
  $display->content['new-d488b67d-5535-49c3-a048-23de203937fa'] = $pane;
  $display->panels['right_2___'][0] = 'new-d488b67d-5535-49c3-a048-23de203937fa';
  $pane = new stdClass();
  $pane->pid = 'new-f2484ac9-e04a-4a4f-bbea-4fae5179fabf';
  $pane->panel = 'right_2___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '10',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f2484ac9-e04a-4a4f-bbea-4fae5179fabf';
  $display->content['new-f2484ac9-e04a-4a4f-bbea-4fae5179fabf'] = $pane;
  $display->panels['right_2___'][1] = 'new-f2484ac9-e04a-4a4f-bbea-4fae5179fabf';
  $pane = new stdClass();
  $pane->pid = 'new-2fce4d16-6a0d-4077-9b86-7bf337aa4078';
  $pane->panel = 'right_2___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '15',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2fce4d16-6a0d-4077-9b86-7bf337aa4078';
  $display->content['new-2fce4d16-6a0d-4077-9b86-7bf337aa4078'] = $pane;
  $display->panels['right_2___'][2] = 'new-2fce4d16-6a0d-4077-9b86-7bf337aa4078';
  $pane = new stdClass();
  $pane->pid = 'new-1218f9e6-4f7d-430c-9ca5-6f34c2dabdd6';
  $pane->panel = 'right_2___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '20',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '1218f9e6-4f7d-430c-9ca5-6f34c2dabdd6';
  $display->content['new-1218f9e6-4f7d-430c-9ca5-6f34c2dabdd6'] = $pane;
  $display->panels['right_2___'][3] = 'new-1218f9e6-4f7d-430c-9ca5-6f34c2dabdd6';
  $pane = new stdClass();
  $pane->pid = 'new-f4cd2674-3159-4b6e-9623-8cd975cc411a';
  $pane->panel = 'right_2___';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '1',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '25',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'f4cd2674-3159-4b6e-9623-8cd975cc411a';
  $display->content['new-f4cd2674-3159-4b6e-9623-8cd975cc411a'] = $pane;
  $display->panels['right_2___'][4] = 'new-f4cd2674-3159-4b6e-9623-8cd975cc411a';
  $pane = new stdClass();
  $pane->pid = 'new-b3f02db6-0b30-450c-9987-62472e81a7f9';
  $pane->panel = 'right_2______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '5',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b3f02db6-0b30-450c-9987-62472e81a7f9';
  $display->content['new-b3f02db6-0b30-450c-9987-62472e81a7f9'] = $pane;
  $display->panels['right_2______'][0] = 'new-b3f02db6-0b30-450c-9987-62472e81a7f9';
  $pane = new stdClass();
  $pane->pid = 'new-9879b6cb-cee3-4263-8f45-e6d47b49c7fd';
  $pane->panel = 'right_2______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '10',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9879b6cb-cee3-4263-8f45-e6d47b49c7fd';
  $display->content['new-9879b6cb-cee3-4263-8f45-e6d47b49c7fd'] = $pane;
  $display->panels['right_2______'][1] = 'new-9879b6cb-cee3-4263-8f45-e6d47b49c7fd';
  $pane = new stdClass();
  $pane->pid = 'new-7e966633-8e3a-4557-9aab-d5cbbf447fae';
  $pane->panel = 'right_2______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '15',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '7e966633-8e3a-4557-9aab-d5cbbf447fae';
  $display->content['new-7e966633-8e3a-4557-9aab-d5cbbf447fae'] = $pane;
  $display->panels['right_2______'][2] = 'new-7e966633-8e3a-4557-9aab-d5cbbf447fae';
  $pane = new stdClass();
  $pane->pid = 'new-046c0007-46f8-4f0d-a3bb-2db0c1427a04';
  $pane->panel = 'right_2______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '20',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '046c0007-46f8-4f0d-a3bb-2db0c1427a04';
  $display->content['new-046c0007-46f8-4f0d-a3bb-2db0c1427a04'] = $pane;
  $display->panels['right_2______'][3] = 'new-046c0007-46f8-4f0d-a3bb-2db0c1427a04';
  $pane = new stdClass();
  $pane->pid = 'new-7d25f8c4-e9b3-490f-8d89-487227ec2ccb';
  $pane->panel = 'right_2______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Right',
      'field_zone_tid' => '25',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '7d25f8c4-e9b3-490f-8d89-487227ec2ccb';
  $display->content['new-7d25f8c4-e9b3-490f-8d89-487227ec2ccb'] = $pane;
  $display->panels['right_2______'][4] = 'new-7d25f8c4-e9b3-490f-8d89-487227ec2ccb';
  $pane = new stdClass();
  $pane->pid = 'new-45c44267-9e3e-45f2-959c-03edad2676b4';
  $pane->panel = 'right_2_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '5',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '45c44267-9e3e-45f2-959c-03edad2676b4';
  $display->content['new-45c44267-9e3e-45f2-959c-03edad2676b4'] = $pane;
  $display->panels['right_2_______'][0] = 'new-45c44267-9e3e-45f2-959c-03edad2676b4';
  $pane = new stdClass();
  $pane->pid = 'new-29748d94-d763-451d-9786-f3d8dc3f10fc';
  $pane->panel = 'right_2_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '10',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '29748d94-d763-451d-9786-f3d8dc3f10fc';
  $display->content['new-29748d94-d763-451d-9786-f3d8dc3f10fc'] = $pane;
  $display->panels['right_2_______'][1] = 'new-29748d94-d763-451d-9786-f3d8dc3f10fc';
  $pane = new stdClass();
  $pane->pid = 'new-6a19dca2-d33d-4024-b188-364c316236ee';
  $pane->panel = 'right_2_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '15',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '6a19dca2-d33d-4024-b188-364c316236ee';
  $display->content['new-6a19dca2-d33d-4024-b188-364c316236ee'] = $pane;
  $display->panels['right_2_______'][2] = 'new-6a19dca2-d33d-4024-b188-364c316236ee';
  $pane = new stdClass();
  $pane->pid = 'new-d8695205-a643-40e0-afea-842a0ccc14e6';
  $pane->panel = 'right_2_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '20',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'd8695205-a643-40e0-afea-842a0ccc14e6';
  $display->content['new-d8695205-a643-40e0-afea-842a0ccc14e6'] = $pane;
  $display->panels['right_2_______'][3] = 'new-d8695205-a643-40e0-afea-842a0ccc14e6';
  $pane = new stdClass();
  $pane->pid = 'new-1ed5db29-82f6-418d-a3aa-98d47671b5e1';
  $pane->panel = 'right_2_______';
  $pane->type = 'views_panes';
  $pane->subtype = 'player_stats-panel_pane_8';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'field_pitch_type_tid' => '2',
      'field_handedness_tid' => 'Left',
      'field_zone_tid' => '25',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '1ed5db29-82f6-418d-a3aa-98d47671b5e1';
  $display->content['new-1ed5db29-82f6-418d-a3aa-98d47671b5e1'] = $pane;
  $display->panels['right_2_______'][4] = 'new-1ed5db29-82f6-418d-a3aa-98d47671b5e1';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-040cfc07-9ddf-4c35-8d2e-aaa7777697a1';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['player_stats_pitching_panel'] = $page;

  return $pages;

}
