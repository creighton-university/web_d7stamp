<?php
/**
 * @file
 * Contains the remote page display plugin.
 */

/**
 * The plugin that handles a page.
 */
class remote_plugin_display_page extends views_plugin_display_page {
  /**
   * Initialize remote_database setting.
   */
  function option_definition() {
    $options = parent::option_definition();
    $options['remote_database'] = array('default' => '');
    return $options;
  }

  /**
   * Provide the summary for page options in the views UI.
   *
   * This output is returned as an array.
   */
  function options_summary(&$categories, &$options) {
    // It is very important to call the parent function here.
    parent::options_summary($categories, $options);
    $database = $this->get_option('remote_database');
    if (empty($database)) {
      $database = t('No database');
    }
    $options['remote_database'] = array(
      'category' => 'page',
      'title'    => t('Database'),
      'value'    => views_ui_truncate($database, 24),
    );
  }

  /**
   * Provides the default form for setting options.
   */
  function options_form(&$form, &$form_state) {
    // It is very important to call the parent function here.
    parent::options_form($form, $form_state);
    if ($form_state['section'] == 'remote_database') {
      global $databases;
      $keys = array_diff(array_keys($databases), array('default'));

      // Get our saved values.
      $remote_viewer_dbs = variable_get('remote_viewer_dbs', array());

      // Build Array for selectable Remote DBs.
      for ($i = 0; $i < count($remote_viewer_dbs); $i++) {
        $keys[$remote_viewer_dbs[$i]['remote_server_database']] = $remote_viewer_dbs[$i]['remote_server_database'];
      }

      $form['remote_database'] = array(
        '#title'         => t('Remote database'),
        '#type'          => 'select',
        '#options'       => array('' => '- Select -') + drupal_map_assoc($keys),
        '#default_value' => $this->get_option('remote_database'),
        '#description'   => t('<p>Select the remote database this display will use as its content source.</p><p>Visit: /admin/config/content/remote_viewer to view remote DBs</p>'),
      );
    }
  }
  /**
   * Validate remote_database setting.
   */
  function options_validate(&$form, &$form_state) {
    // It is very important to call the parent function here.
    parent::options_validate($form, $form_state);
    if ($form_state['section'] == 'remote_database') {
      if (empty($form_state['values']['remote_database'])) {
        form_error($form['remote_database'], t('Select a remote database.'));
      }
    }
  }
  /**
   * Submit remote_database setting.
   */
  function options_submit(&$form, &$form_state) {
    // It is very important to call the parent function here:
    parent::options_submit($form, $form_state);
    if ($form_state['section'] == 'remote_database') {
      $this->set_option('remote_database', $form_state['values']['remote_database']);
    }
  }
  /**
   * Ensure remote view has a remote database set.
   */
  function validate() {
    $errors = parent::validate();
    $remote_database = $this->get_option('remote_database');
    if (empty($remote_database)) {
      $errors[] = t('Display @display requires a remote database but it is not set.', array('@display' => $this->display->display_title));
    }
    return $errors;
  }

  /**
   * Sets the remote content state during view processing.
   */
  function execute() {
    $options = $this->options;
    if (!empty($options['remote_database'])) {
      // Set the remote content state to the remote database.
      RemoteViewerContentController::$remoteContent = $options['remote_database'];
    }
    $render = parent::execute();
    if (!empty($options['remote_database'])) {
      // Clear the remote content state.
      RemoteViewerContentController::$remoteContent = '';
    }
    return $render;
  }

}
