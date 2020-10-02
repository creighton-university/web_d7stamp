<?php
/**
 * @file
 * Provides primary Drupal hook implementations.
 *
 * @author Jim Berry
 */

/**
 * Implements hook_form_FORM_ID_alter(): install_configure_form.
 */
function cu_site_form_install_configure_form_alter(&$form, $form_state) {
  // Set the site name.
  $form['site_information']['site_name']['#default_value'] = 'CU Custom Site';

  // Setup root account and default site e-mail.
  $form['site_information']['site_mail']['#default_value'] = 'noreply@creighton.edu';
  $form['admin_account']['account']['name']['#default_value'] = 'cu-admin';
  $form['admin_account']['account']['mail']['#default_value'] = 'noreply@creighton.edu';

  // Set default country and timezone to United States, Central Standard Time.
  $form['server_settings']['site_default_country']['#default_value'] = 'US';
  $form['server_settings']['date_default_timezone']['#default_value'] = 'America/Chicago';

  // Disable update notifications.
  $form['update_notifications']['update_status_module']['#default_value'] = array();
}

/**
 * Returns the current environment.
 *
 * @return
 *   The current environmemt: production, staging, or development.
 */
function cu_site_environment_get() {
  return variable_get('environment', 'production');
}

/**
 * Implements hook_install_tasks()
 */
function cu_site_install_tasks(&$install_state = NULL) {
  $tasks = array(); 
  
    $tasks['cu_site_install_modules'] = array(
    'type' => 'normal',
  );
  return $tasks;
}

function cu_site_install_modules() {
  /**
  * Implements features_install_modules()
  */
  features_install_modules(array(
    'creighton_2tier_page',
    //'creighton_2tier_page_panelizer',
    'creighton_block_types',
    //'creighton_content_mover_unsearchable',
    'creighton_content_page',
    //'creighton_content_page_panelizer',
    //'creighton_events',
    //'creighton_features',
    //'creighton_flickr_importer',
    'creighton_global_roles',
    'creighton_gtm',
    'creighton_media',
    'creighton_menu_blocks',
    //'creighton_news_center',
    'creighton_news_events',
    //'creighton_overrider',
    'creighton_panels',
    //'creighton_profile',
    //'creighton_sample_content',
    //'creighton_slideshow',
    //'creighton_student_calendar',
    //'creighton_student_events',
    //'creighton_subtheme_frontpanel',
    //'creighton_twitter_importer',
    //'creighton_unsearchable_content',
    'creighton_variables',
    'creighton_webform',
    'creighton_wysiwyg',
    'robots_global_config',
    //'creighton_wysiwyg_force',
    //'creighton_youtube_importer'
  ));
  /**
  * Implements features_revert()
  */
  features_revert(array(
    //'creighton_2tier_page_panelizer' => array('user_permission'),
    //'creighton_content_page_panelizer' => array('user_permission'),
    'creighton_block_types' => array('field_base'),
    'creighton_news_events' => array('field_instance'),
    'creighton_variables' => array('field_base'),
    'creighton_wysiwyg' => array('user_permission'),
    'robots_global_config' => array('strongarm')
  ));
  cache_clear_all();
}
