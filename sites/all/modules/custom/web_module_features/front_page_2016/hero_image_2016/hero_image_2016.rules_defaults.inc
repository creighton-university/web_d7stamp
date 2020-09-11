<?php
/**
 * @file
 * hero_image_2016.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function hero_image_2016_default_rules_configuration() {
  $items = array();
  $items['rules_image_engine'] = entity_import('rules_config', '{ "rules_image_engine" : {
      "LABEL" : "image-engine",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_insert--slider_content" : { "bundle" : "slider_content" },
        "node_update--slider_content" : { "bundle" : "slider_content" }
      },
      "DO" : [
        { "redirect" : { "url" : "node\\/image-engine\\/[node:nid]", "destination" : 1 } }
      ]
    }
  }');
  return $items;
}
