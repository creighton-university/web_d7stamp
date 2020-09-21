<?php

/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * Creighton University 2013 theme.
 */

// function rows_from_field_collection(&$vars, $field_name, $field_array) {
//   $vars['rows'] = array();

//   foreach($vars['element']['#items'] as $key => $item) {
//     $entity_id = $item['value'];
//     $entity = field_collection_item_load($entity_id);
//     $wrapper = entity_metadata_wrapper('field_collection_item', $entity);
//     $row = array();
//     foreach($field_array as $field){
//       $row[$field] = $wrapper->$field->value();
//     }
//     $vars['rows'][] = $row;
//   }
// }

function creighton_2013_preprocess_html(&$variables) {
  if (!empty($variables['page']['sidebar_first']) && !empty($variables['page']['sidebar_second'])) {
    $variables['attributes_array']['class'][] = 'has-two-sidebars';
  }
  elseif (!empty($variables['page']['sidebar_first'])) {
    $variables['attributes_array']['class'][] = 'has-sidebar-first';
  }
  elseif (!empty($variables['page']['sidebar_second'])) {
    $variables['attributes_array']['class'][] = 'has-sidebar-second';
  }
  else {
    $variables['attributes_array']['class'][] = 'has-no-sidebars';
  }
}
// function creighton_2013_preprocess_field(&$vars, $hook){
//   if ($vars['element']['#field_name'] == 'field_front_page_slide') {
//     $vars['theme_hook_suggestions'][] = 'field__front_page_slide_collected';

//     $field_array = array('field_slide_headline', 'field_slide_link_type','field_slide_external_link', 'field_slide_internal_link', 'field_slide_link_title', 'field_slide_image');
//     rows_from_field_collection($vars, 'field_front_page_slide', $field_array);
//   }
// }

function creighton_2013_omega_layout_alter(&$layout){
  if(drupal_is_front_page()){
    $layout = "cu-front";
  }

}
function creighton_2013_template_preprocess(&$variables, $hook) {
  global $style_type;
}

/**
 * Implements hook_theme().
 */

function creighton_2013_theme() {
  $items = array();
  // create custom user-login.tpl.php
  $items['user_login'] = array(
  'render element' => 'form',
  'path' => drupal_get_path('theme', 'creighton_2013') . '/templates/user',
  'template' => 'user-login',
  'preprocess functions' => array(
  'creighton_2013_preprocess_user_login'
  ),
    	'user_register' => array(
      'template' => 'user-register',
      'variables' => array('form' => NULL),
    ),
    'user_pass' => array(
      'template' => 'user-pass',
      'variables' => array('form' => NULL),
    ),
 );
return $items;
}

/*
 *  Remove login form descriptions and "request new password" form.
 */
function creighton_2013_preprocess_page(&$variables)
{
    global $user;
    if(arg(0) == "user" && $user->uid == 0 && is_null(arg(1)))
    {
        unset($variables['tabs']['#primary']);
    }
}

/**
 * Override variables used in panel-pane templates.
 */
function creighton_2013_preprocess_panels_pane(&$vars) {
	// If panel pane is of type "block", then call panels-pane--block.tpl.php
    if($vars['pane']->type == 'block') {
        $vars['theme_hook_suggestions'][] = 'panels_pane__block';
    }
}