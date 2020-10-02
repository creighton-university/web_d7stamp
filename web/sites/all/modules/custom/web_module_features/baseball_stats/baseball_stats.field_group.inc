<?php
/**
 * @file
 * baseball_stats.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function baseball_stats_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_away|node|game|form';
  $field_group->group_name = 'group_away';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'game';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Away Team',
    'weight' => '2',
    'children' => array(
      0 => 'field_away_team',
      1 => 'field_away_score',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-away field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_away|node|game|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_home|node|game|form';
  $field_group->group_name = 'group_home';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'game';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Home Team',
    'weight' => '1',
    'children' => array(
      0 => 'field_home_team',
      1 => 'field_home_score',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-home field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_home|node|game|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_player_name|node|player|form';
  $field_group->group_name = 'group_player_name';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'player';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name',
    'weight' => '1',
    'children' => array(
      0 => 'field_player_first_name',
      1 => 'field_player_last_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-player-name field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_player_name|node|player|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Away Team');
  t('Home Team');
  t('Name');

  return $field_groups;
}
