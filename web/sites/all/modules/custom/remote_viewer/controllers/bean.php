<?php

/**
 * @file
 * Contains the RemoteViewerBeanEntityAPIController class.
 */

 /**
  * Overrides the BeanEntityAPIController when using a remote view.
  */
class RemoteViewerBeanEntityAPIController extends BeanEntityAPIController {
  /**
   * Override load member function of BeanEntityAPIController.
   *
   * @param array $ids
   *   An array of entity IDs, or FALSE to load all entities.
   * @param array $conditions
   *   An array of conditions in the form 'field' => $value.
   *
   * @return array
   *   An array of entity objects indexed by their ids. When no results
   *   are found, an empty array is returned.
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
