<?php
/**
 * @file
 * creighton_menu_blocks.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function creighton_menu_blocks_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_footer_main_menu_admin_title';
  $strongarm->value = '';
  $export['menu_block_footer_main_menu_admin_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_footer_main_menu_depth';
  $strongarm->value = '1';
  $export['menu_block_footer_main_menu_depth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_footer_main_menu_depth_relative';
  $strongarm->value = 0;
  $export['menu_block_footer_main_menu_depth_relative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_footer_main_menu_expanded';
  $strongarm->value = 0;
  $export['menu_block_footer_main_menu_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_footer_main_menu_follow';
  $strongarm->value = 0;
  $export['menu_block_footer_main_menu_follow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_footer_main_menu_level';
  $strongarm->value = '1';
  $export['menu_block_footer_main_menu_level'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_footer_main_menu_parent';
  $strongarm->value = 'main-menu:0';
  $export['menu_block_footer_main_menu_parent'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_footer_main_menu_sort';
  $strongarm->value = 0;
  $export['menu_block_footer_main_menu_sort'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_footer_main_menu_title_link';
  $strongarm->value = 0;
  $export['menu_block_footer_main_menu_title_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_footer_transaction_menu_admin_title';
  $strongarm->value = '';
  $export['menu_block_footer_transaction_menu_admin_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_footer_transaction_menu_depth';
  $strongarm->value = '0';
  $export['menu_block_footer_transaction_menu_depth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_footer_transaction_menu_depth_relative';
  $strongarm->value = 0;
  $export['menu_block_footer_transaction_menu_depth_relative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_footer_transaction_menu_expanded';
  $strongarm->value = 0;
  $export['menu_block_footer_transaction_menu_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_footer_transaction_menu_follow';
  $strongarm->value = 0;
  $export['menu_block_footer_transaction_menu_follow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_footer_transaction_menu_level';
  $strongarm->value = '1';
  $export['menu_block_footer_transaction_menu_level'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_footer_transaction_menu_parent';
  $strongarm->value = 'menu-transaction-menu:0';
  $export['menu_block_footer_transaction_menu_parent'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_footer_transaction_menu_sort';
  $strongarm->value = 0;
  $export['menu_block_footer_transaction_menu_sort'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_footer_transaction_menu_title_link';
  $strongarm->value = 0;
  $export['menu_block_footer_transaction_menu_title_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_header_main_menu_admin_title';
  $strongarm->value = '';
  $export['menu_block_header_main_menu_admin_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_header_main_menu_depth';
  $strongarm->value = '1';
  $export['menu_block_header_main_menu_depth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_header_main_menu_depth_relative';
  $strongarm->value = 0;
  $export['menu_block_header_main_menu_depth_relative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_header_main_menu_expanded';
  $strongarm->value = 0;
  $export['menu_block_header_main_menu_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_header_main_menu_follow';
  $strongarm->value = 0;
  $export['menu_block_header_main_menu_follow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_header_main_menu_level';
  $strongarm->value = '1';
  $export['menu_block_header_main_menu_level'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_header_main_menu_parent';
  $strongarm->value = 'main-menu:0';
  $export['menu_block_header_main_menu_parent'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_header_main_menu_sort';
  $strongarm->value = 0;
  $export['menu_block_header_main_menu_sort'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_header_main_menu_title_link';
  $strongarm->value = 0;
  $export['menu_block_header_main_menu_title_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_header_transaction_menu_admin_title';
  $strongarm->value = '';
  $export['menu_block_header_transaction_menu_admin_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_header_transaction_menu_depth';
  $strongarm->value = '0';
  $export['menu_block_header_transaction_menu_depth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_header_transaction_menu_depth_relative';
  $strongarm->value = 0;
  $export['menu_block_header_transaction_menu_depth_relative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_header_transaction_menu_expanded';
  $strongarm->value = 0;
  $export['menu_block_header_transaction_menu_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_header_transaction_menu_follow';
  $strongarm->value = 0;
  $export['menu_block_header_transaction_menu_follow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_header_transaction_menu_level';
  $strongarm->value = '1';
  $export['menu_block_header_transaction_menu_level'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_header_transaction_menu_parent';
  $strongarm->value = 'menu-transaction-menu:0';
  $export['menu_block_header_transaction_menu_parent'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_header_transaction_menu_sort';
  $strongarm->value = 0;
  $export['menu_block_header_transaction_menu_sort'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_header_transaction_menu_title_link';
  $strongarm->value = 0;
  $export['menu_block_header_transaction_menu_title_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_header_utility_menu_admin_title';
  $strongarm->value = '';
  $export['menu_block_header_utility_menu_admin_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_header_utility_menu_depth';
  $strongarm->value = '0';
  $export['menu_block_header_utility_menu_depth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_header_utility_menu_depth_relative';
  $strongarm->value = 0;
  $export['menu_block_header_utility_menu_depth_relative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_header_utility_menu_expanded';
  $strongarm->value = 0;
  $export['menu_block_header_utility_menu_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_header_utility_menu_follow';
  $strongarm->value = 0;
  $export['menu_block_header_utility_menu_follow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_header_utility_menu_level';
  $strongarm->value = '1';
  $export['menu_block_header_utility_menu_level'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_header_utility_menu_parent';
  $strongarm->value = 'menu-utility-menu:0';
  $export['menu_block_header_utility_menu_parent'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_header_utility_menu_sort';
  $strongarm->value = 0;
  $export['menu_block_header_utility_menu_sort'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_header_utility_menu_title_link';
  $strongarm->value = 0;
  $export['menu_block_header_utility_menu_title_link'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_sidebar_secondary_menu_admin_title';
  $strongarm->value = '';
  $export['menu_block_sidebar_secondary_menu_admin_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_sidebar_secondary_menu_depth';
  $strongarm->value = '0';
  $export['menu_block_sidebar_secondary_menu_depth'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_sidebar_secondary_menu_depth_relative';
  $strongarm->value = 0;
  $export['menu_block_sidebar_secondary_menu_depth_relative'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_sidebar_secondary_menu_expanded';
  $strongarm->value = 0;
  $export['menu_block_sidebar_secondary_menu_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_sidebar_secondary_menu_follow';
  $strongarm->value = 0;
  $export['menu_block_sidebar_secondary_menu_follow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_sidebar_secondary_menu_level';
  $strongarm->value = '2';
  $export['menu_block_sidebar_secondary_menu_level'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_sidebar_secondary_menu_parent';
  $strongarm->value = 'main-menu:0';
  $export['menu_block_sidebar_secondary_menu_parent'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_sidebar_secondary_menu_sort';
  $strongarm->value = 0;
  $export['menu_block_sidebar_secondary_menu_sort'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_block_sidebar_secondary_menu_title_link';
  $strongarm->value = 0;
  $export['menu_block_sidebar_secondary_menu_title_link'] = $strongarm;

  return $export;
}
