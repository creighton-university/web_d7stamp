<?php
/**
 * @file
 * baseball_stats.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function baseball_stats_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_add-game:node/add/game.
  $menu_links['main-menu_add-game:node/add/game'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/game',
    'router_path' => 'node/add/game',
    'link_title' => 'Add Game',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_add-game:node/add/game',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_add-player:node/add/player.
  $menu_links['main-menu_add-player:node/add/player'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/player',
    'router_path' => 'node/add/player',
    'link_title' => 'Add Player',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_add-player:node/add/player',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_add-team:node/add/team.
  $menu_links['main-menu_add-team:node/add/team'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/team',
    'router_path' => 'node/add/team',
    'link_title' => 'Add Team',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_add-team:node/add/team',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_all-teams:all-teams.
  $menu_links['main-menu_all-teams:all-teams'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'all-teams',
    'router_path' => 'all-teams',
    'link_title' => 'All Teams',
    'options' => array(
      'identifier' => 'main-menu_all-teams:all-teams',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_manage-terms:admin/structure/taxonomy.
  $menu_links['main-menu_manage-terms:admin/structure/taxonomy'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin/structure/taxonomy',
    'router_path' => 'admin/structure/taxonomy',
    'link_title' => 'Manage Terms',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_manage-terms:admin/structure/taxonomy',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_manage-users:manage-users.
  $menu_links['main-menu_manage-users:manage-users'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'manage-users',
    'router_path' => 'manage-users',
    'link_title' => 'Manage Users',
    'options' => array(
      'identifier' => 'main-menu_manage-users:manage-users',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_view-all-games:game-list.
  $menu_links['main-menu_view-all-games:game-list'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'game-list',
    'router_path' => 'game-list',
    'link_title' => 'View All Games',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_view-all-games:game-list',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add Game');
  t('Add Player');
  t('Add Team');
  t('All Teams');
  t('Manage Terms');
  t('Manage Users');
  t('View All Games');

  return $menu_links;
}
