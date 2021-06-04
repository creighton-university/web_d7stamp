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

    <h2>Administrator Login</h2>
    <div id="tabs" class="tabs clearfix">
      <div id="tabs-1">
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
  </div>
  <!--//login-wrapper-->
</div>
<!--//creighton-user-login-form-wrapper -->
