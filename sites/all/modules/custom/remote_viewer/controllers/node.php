<?php

/**
 * @file
 * Contains the RemoteViewerNodeController class.
 */

/**
 * Overrides the NodeController when using a remote view.
 */
class RemoteViewerNodeController extends NodeController {
  /**
   * Override load member function of NodeController.
   *
   * @param array $ids
   *   An array of entity IDs, or FALSE to load all entities.
   * @param array $conditions
   *   An array of conditions.
   *
   * @return array
   *   An array of entity objects indexed by their ids.
   *   When no results are found, an empty array is returned.
   */
  public function load($ids = array(), $conditions = array()) {

    $remote_content = RemoteViewerContentController::$remoteContent;

    if (!empty($remote_content)) {
      $prior_database = db_set_active($remote_content);
    }

    $entities = parent::load($ids, $conditions);

    if (!empty($prior_database)) {
      db_set_active($prior_database);
    }
    return $entities;
  }

}
