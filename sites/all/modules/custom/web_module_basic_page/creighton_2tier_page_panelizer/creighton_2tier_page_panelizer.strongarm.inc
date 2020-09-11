<?php
/**
 * @file
 * creighton_2tier_page_panelizer.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function creighton_2tier_page_panelizer_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_2tier_page';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 1,
        'default' => 0,
        'choice' => 1,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_2tier_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:2tier_page_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:25:"panelizer_node:2tier_page";s:23:"allowed_layout_settings";a:66:{s:14:"omega:cu-front";b:1;s:16:"omega:cu-default";b:1;s:10:"omega:hero";b:1;s:12:"omega:divine";b:1;s:16:"omega:off-canvas";b:1;s:12:"omega:simple";b:1;s:8:"flexible";b:1;s:32:"flexible:academics_search_layout";b:1;s:17:"threecol_25_50_25";b:1;s:17:"threecol_33_34_33";b:1;s:6:"twocol";b:1;s:14:"twocol_stacked";b:1;s:13:"twocol_bricks";b:1;s:6:"onecol";b:1;s:25:"threecol_25_50_25_stacked";b:1;s:25:"threecol_33_34_33_stacked";b:1;s:5:"rolph";b:1;s:9:"sanderson";b:1;s:12:"sutro_double";b:1;s:7:"hewston";b:1;s:25:"threecol_44_35_21_stacked";b:1;s:19:"three_four_adaptive";b:1;s:25:"threecol_44_37_19_stacked";b:1;s:20:"twocol_77_23_stacked";b:1;s:16:"bartlett_flipped";b:1;s:20:"twocol_70_30_stacked";b:1;s:8:"bartlett";b:1;s:20:"bricks_25_75_stacked";b:1;s:13:"selby_flipped";b:1;s:15:"brenham_flipped";b:1;s:20:"twocol_63_37_stacked";b:1;s:14:"taylor_flipped";b:1;s:16:"threecol_7_62_31";b:1;s:5:"brown";b:1;s:12:"burr_flipped";b:1;s:6:"bryant";b:1;s:17:"sanderson_flipped";b:1;s:5:"geary";b:1;s:7:"moscone";b:1;s:12:"webb_flipped";b:1;s:15:"hewston_flipped";b:1;s:6:"taylor";b:1;s:4:"burr";b:1;s:6:"whelan";b:1;s:4:"webb";b:1;s:5:"sutro";b:1;s:5:"selby";b:1;s:4:"pond";b:1;s:15:"moscone_flipped";b:1;s:8:"mccoppin";b:1;s:25:"threecol_15_70_15_stacked";b:1;s:7:"brenham";b:1;s:19:"four_three_adaptive";b:1;s:20:"twocol_30_70_stacked";b:1;s:22:"bryant_flipped_flipped";b:1;s:6:"phelan";b:1;s:25:"threecol_42_29_29_stacked";b:1;s:6:"boxton";b:1;s:6:"harris";b:1;s:5:"naked";b:1;s:6:"golden";b:1;s:6:"grid-3";b:1;s:8:"mondrian";b:1;s:6:"grid-2";b:1;s:15:"threecol_nested";b:1;s:10:"front_page";b:1;}s:10:"form_state";N;}';
  $export['panelizer_node:2tier_page_allowed_layouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:2tier_page_allowed_layouts_default';
  $strongarm->value = 0;
  $export['panelizer_node:2tier_page_allowed_layouts_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:2tier_page_allowed_types_default';
  $strongarm->value = 0;
  $export['panelizer_node:2tier_page_allowed_types_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:2tier_page_default';
  $strongarm->value = array(
    'block' => 'block',
    'entity_field_extra' => 'entity_field_extra',
    'entity_field' => 'entity_field',
    'custom' => 'custom',
    'token' => 'token',
    'entity_form_field' => 'entity_form_field',
    'entity_view' => 'entity_view',
    'menu_tree' => 'menu_tree',
    'panels_mini' => 'panels_mini',
    'views_panes' => 'views_panes',
    'views' => 'views',
    'other' => 'other',
  );
  $export['panelizer_node:2tier_page_default'] = $strongarm;

  return $export;
}
