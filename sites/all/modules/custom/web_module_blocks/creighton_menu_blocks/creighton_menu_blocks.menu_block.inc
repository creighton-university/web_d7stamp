<?php
/**
 * @file
 * creighton_menu_blocks.menu_block.inc
 */

/**
 * Implements hook_menu_block_defaults().
 */
function creighton_menu_blocks_menu_block_defaults() {
  $export = array();

  $menu_block = new stdClass();
  $menu_block->disabled = FALSE; /* Edit this to true to make a default menu_block disabled initially */
  $menu_block->api_version = 1;
  $menu_block->name = 'footer_main_menu';
  $menu_block->label = 'Footer Main Menu';
  $menu_block->description = '';
  $menu_block->depth = 1;
  $menu_block->expanded = 0;
  $menu_block->follow = '0';
  $menu_block->level = 1;
  $menu_block->parent = 'main-menu:0';
  $menu_block->sort = 0;
  $menu_block->title_link = 0;
  $export['footer_main_menu'] = $menu_block;

  $menu_block = new stdClass();
  $menu_block->disabled = FALSE; /* Edit this to true to make a default menu_block disabled initially */
  $menu_block->api_version = 1;
  $menu_block->name = 'footer_transaction_menu';
  $menu_block->label = 'Footer Transaction Menu';
  $menu_block->description = 'This <em>menu block</em> will reside in the Left Footer Region and contain the Transaction Menu.';
  $menu_block->depth = 1;
  $menu_block->expanded = 0;
  $menu_block->follow = '0';
  $menu_block->level = 1;
  $menu_block->parent = 'menu-transaction-menu:0';
  $menu_block->sort = 0;
  $menu_block->title_link = 0;
  $export['footer_transaction_menu'] = $menu_block;

  $menu_block = new stdClass();
  $menu_block->disabled = FALSE; /* Edit this to true to make a default menu_block disabled initially */
  $menu_block->api_version = 1;
  $menu_block->name = 'header_main_menu';
  $menu_block->label = 'Header Main Menu';
  $menu_block->description = 'This <em>menu block</em> will reside in the Main Header Region and contain only the primary links of the Main Menu.';
  $menu_block->depth = 1;
  $menu_block->expanded = 0;
  $menu_block->follow = '0';
  $menu_block->level = 1;
  $menu_block->parent = 'main-menu:0';
  $menu_block->sort = 0;
  $menu_block->title_link = 0;
  $export['header_main_menu'] = $menu_block;

  $menu_block = new stdClass();
  $menu_block->disabled = FALSE; /* Edit this to true to make a default menu_block disabled initially */
  $menu_block->api_version = 1;
  $menu_block->name = 'header_transaction_menu';
  $menu_block->label = 'Header Transaction Menu';
  $menu_block->description = 'This <em>menu block</em> will reside in the Main Header Region and contain the Transaction Menu.';
  $menu_block->depth = 1;
  $menu_block->expanded = 0;
  $menu_block->follow = '0';
  $menu_block->level = 1;
  $menu_block->parent = 'menu-transaction-menu:0';
  $menu_block->sort = 0;
  $menu_block->title_link = 0;
  $export['header_transaction_menu'] = $menu_block;

  $menu_block = new stdClass();
  $menu_block->disabled = FALSE; /* Edit this to true to make a default menu_block disabled initially */
  $menu_block->api_version = 1;
  $menu_block->name = 'header_utility_menu';
  $menu_block->label = 'Header Utility Menu';
  $menu_block->description = 'This <em>menu block</em> will reside in the Secondary Header Region and contain the Utility Menu.';
  $menu_block->depth = 1;
  $menu_block->expanded = 0;
  $menu_block->follow = '0';
  $menu_block->level = 1;
  $menu_block->parent = 'menu-utility-menu:0';
  $menu_block->sort = 0;
  $menu_block->title_link = 0;
  $export['header_utility_menu'] = $menu_block;

  $menu_block = new stdClass();
  $menu_block->disabled = FALSE; /* Edit this to true to make a default menu_block disabled initially */
  $menu_block->api_version = 1;
  $menu_block->name = 'sidebar_secondary_menu';
  $menu_block->label = 'Sidebar Secondary Menu';
  $menu_block->description = 'This <em>menu block</em> will reside in the First Sidebar and contain secondary links and it\'s children.';
  $menu_block->depth = 0;
  $menu_block->expanded = 0;
  $menu_block->follow = '0';
  $menu_block->level = 2;
  $menu_block->parent = 'main-menu:0';
  $menu_block->sort = 0;
  $menu_block->title_link = 0;
  $export['sidebar_secondary_menu'] = $menu_block;

  return $export;
}
