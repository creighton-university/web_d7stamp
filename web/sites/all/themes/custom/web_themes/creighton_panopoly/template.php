<?php
/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * Creighton University Panopoly theme.
 */
function creighton_panopoly_preprocess_html(&$variables) {
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
function creighton_panopoly_omega_layout_alter(&$layout){

  if(drupal_is_front_page()){
    $layout = "cu-front-panopoly";
  }
}
function creighton_panopoly_template_preprocess(&$variables, $hook) {
  global $style_type;
}
/**
 * Implements hook_theme().
 */
function creighton_panopoly_theme() {
  $items = array();
  // create custom user-login.tpl.php
  $items['user_login'] = array(
  'render element' => 'form',
  'path' => drupal_get_path('theme', 'creighton_panopoly') . '/templates/user',
  'template' => 'user-login',
  'preprocess functions' => array(
  'creighton_panopoly_preprocess_user_login'
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
function creighton_panopoly_preprocess_page(&$variables)
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
function creighton_panopoly_preprocess_panels_pane(&$vars) {
	// If panel pane is of type "block", then call panels-pane--block.tpl.php
    if($vars['pane']->type == 'block') {
        $vars['theme_hook_suggestions'][] = 'panels_pane__block';
    }
}
