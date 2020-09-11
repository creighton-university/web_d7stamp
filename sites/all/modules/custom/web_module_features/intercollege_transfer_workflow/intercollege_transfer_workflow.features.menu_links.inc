<?php
/**
 * @file
 * intercollege_transfer_workflow.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function intercollege_transfer_workflow_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-workflow_create-ict-transfer:node/add/intercollege-transfer.
  $menu_links['menu-workflow_create-ict-transfer:node/add/intercollege-transfer'] = array(
    'menu_name' => 'menu-workflow',
    'link_path' => 'node/add/intercollege-transfer',
    'router_path' => 'node/add/intercollege-transfer',
    'link_title' => 'Create ICT Transfer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-workflow_create-ict-transfer:node/add/intercollege-transfer',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-workflow_logout:user/logout.
  $menu_links['menu-workflow_logout:user/logout'] = array(
    'menu_name' => 'menu-workflow',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-workflow_logout:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-workflow_myaccount:user.
  $menu_links['menu-workflow_myaccount:user'] = array(
    'menu_name' => 'menu-workflow',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'myAccount',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-workflow_myaccount:user',
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
  t('Create ICT Transfer');
  t('Logout');
  t('myAccount');

  return $menu_links;
}
