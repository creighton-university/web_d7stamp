<?php
/**
 * @file
 * Template overrides as well as (pre-)process and alter hooks for the
 * Creighton University 2016 theme.
 */
function creighton_2016_preprocess_html(&$variables) {
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

  // Front page scripts only
  $js_footer_options = array('scope' => 'footer', 'group' => JS_THEME);
  $js_header_options = array('scope' => 'header', 'group' => JS_DEFAULT, 'weight' => 101);
  if (drupal_is_front_page()) {
    // For the front page youtube video gallery
    drupal_add_js(drupal_get_path('theme', 'creighton_2016') . '/js/cu-yt-gallery.js', $js_footer_options);

    // For the front page featured content cards gallery
    // drupal_add_js("https://cdn.rawgit.com/nnattawat/flip/master/dist/jquery.flip.js", array('type' => 'external', 'scope' => 'header'));
    // drupal_add_js(drupal_get_path('theme', 'creighton_2016') . '/js/cu-featured-content-cards.js', $js_footer_options);

    // For the front page social media card gallery.
    drupal_add_js(drupal_get_path('theme', 'creighton_2016') . '/js/vendor/jquery.flip.min.js', $js_header_options);
    drupal_add_js(drupal_get_path('theme', 'creighton_2016') . '/js/vendor/formstone/core.js', $js_header_options);
    drupal_add_js(drupal_get_path('theme', 'creighton_2016') . '/js/vendor/formstone/mediaquery.js', $js_header_options);
    drupal_add_js(drupal_get_path('theme', 'creighton_2016') . '/js/vendor/formstone/touch.js', $js_header_options);
    drupal_add_js(drupal_get_path('theme', 'creighton_2016') . '/js/vendor/formstone/carousel.js', $js_header_options);
    //drupal_add_js(drupal_get_path('theme', 'creighton_2016') . '/js/cu-fpsocial-gallery.js', $js_footer_options);

    // JS files for the front page hero image slider.
    drupal_add_js(drupal_get_path('theme', 'creighton_2016') . '/js/cu-fpslider-accessibility-hack.js', $js_footer_options);
  }

  // all/libraries/flexslider/jquery.flexslider.js adds thumbnail images dynamically, but leaves out attributes for AT
  // also remove redundant aria role attributes
  drupal_add_js(drupal_get_path('theme', 'creighton_2016') . '/js/cu-accessibility-hack.js',
    array(
      'every_page' => TRUE,
      'weight' => -2,
      'scope' => 'footer',
      'group' => JS_THEME
    )
  );
}

function creighton_2016_omega_layout_alter(&$layout) {
   
  if(drupal_is_front_page()){
    $layout = "cu-front-2016";
  }
}


function creighton_2016_template_preprocess(&$variables, $hook) {
  global $style_type;
}

/**
 * Implements hook_theme().
 */
function creighton_2016_theme() {
  $items = array();
  // create custom user-login.tpl.php
  $items['user_login'] = array(
  'render element' => 'form',
  'path' => drupal_get_path('theme', 'creighton_2016') . '/templates/user',
  'template' => 'user-login',
  'preprocess functions' => array(
  'creighton_2016_preprocess_user_login'
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
function creighton_2016_preprocess_page(&$variables)
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
function creighton_2016_preprocess_panels_pane(&$vars) {
	// If panel pane is of type "block", then call panels-pane--block.tpl.php
    if($vars['pane']->type == 'block') {
        $vars['theme_hook_suggestions'][] = 'panels_pane__block';
    }
}

function creighton_2016_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  $title = strip_tags(end($variables['breadcrumb']));

  if (!empty($breadcrumb)) {
    array_pop($breadcrumb);
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    $output = '<!--noindex-->';
    $output .= '<h2 class="element-invisible" id="breadcrumbs">' . t('You are here') . '</h2>';
    $output .= '<nav class="breadcrumb" aria-labelledby="breadcrumbs">';
    $output .= '<ul class="breadcrumb">';

    foreach($breadcrumb as $item) {
      $output .= '<li>' . $item . '</li>';
    }

    $output .= '<li>' . $title . '</li></ul></nav><!--endnoindex-->';
    return $output;
  }
}