<?php
/**
 * @file
 * Contains the remote query plugin.
 */

/**
 * The plugin that handles a query.
 */
class remote_plugin_query extends views_plugin_query_default {
  /**
   * Generate a query and a countquery.
   *
   * @param bool $get_count
   *   Provide a countquery if this is true, otherwise provide a normal query.
   */
  function query($get_count = FALSE) {
    $options = $this->view->display_handler->options;
    if (!empty($options['remote_database'])) {
      $this->view->base_database = $options['remote_database'];
    }
    $query = parent::query($get_count);
    return $query;
  }

}
