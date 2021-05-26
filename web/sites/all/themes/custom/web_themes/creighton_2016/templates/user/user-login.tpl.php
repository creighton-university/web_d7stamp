<?php

  //drupal_add_library('system', 'ui.tabs');
  drupal_add_js('misc/ui/jquery.ui.core.min.js', array('group' => 'JS_LIBRARY'));
  drupal_add_js('misc/ui/jquery.ui.widget.min.js');
  drupal_add_js('misc/ui/jquery.ui.tabs.min.js');
  drupal_add_js('jQuery(document).ready(function(){jQuery("#tabs").tabs();});', 'inline');
  drupal_add_css('misc/ui/jquery.ui.tabs.css');
  drupal_add_css('#admin-links {display:none !important;} #tabs .block-title {display: none !important}', 'inline');
?>

<div class="creighton-user-login-form-wrapper">

<div class="login-wrapper">

    <h2><?php print render($intro_text); ?></h2>
    <div id="tabs" class="tabs clearfix">
    <ul class="tabs primary clearfix">
      <li><a href="#tabs-1">User Login</a></li>
      <li><a href="#tabs-2">Administrator Login</a></li>
    </ul>

    <div id="tabs-2">
      <?php
      // split the username and password from the submit button so we can put in links above
      print drupal_render($form['name']);
      print drupal_render($form['pass']);
      ?>

      <?php
      print drupal_render($form['form_build_id']);
      print drupal_render($form['form_id']);
      print drupal_render($form['actions']);
      ?>
    </div>
    </div>

</div><!--//login-wrapper-->

</div><!--//creighton-user-login-form-wrapper -->

