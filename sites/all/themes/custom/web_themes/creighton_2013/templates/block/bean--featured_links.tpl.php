<?php
/**
 * @file
 * Default theme implementation for beans.
 *
 * Available variables:
 * - $content: An array of comment items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $title: The (sanitized) entity label.
 * - $url: Direct url of the current entity if specified.
 * - $page: Flag for the full page state.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity-{ENTITY_TYPE}
 *   - {ENTITY_TYPE}-{BUNDLE}
 *

 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
?>
<?php
//Helper function to get correct info from HUB to build our blocks
function node_load_remote($node) {
  //Get path alais from nid
  db_set_active( variable_get('HUB_DB') );
  $result = db_query("SELECT alias FROM url_alias WHERE source = 'node/$node'")->fetchField();;
  db_set_active();
  return $result;
}
?>
<div class="featured-link">
<?php
  $remoteBlock = variable_get('REMOTE_BLOCK');
  if(isset($content['field_featured_link_text'][0]['#markup'])) {
    $link_text = $content['field_featured_link_text'][0]['#markup'];
  }
  else {
    $link_text = '';
  }
  
  if(isset($content['field_featured_link_button_color']['#items'][0]['value'])){
    $btn_color = $content['field_featured_link_button_color']['#items'][0]['value'];
  }
  else {
    $btn_color = '';
  }
  //Internal Links
  if($content['field_link_type']['#items'][0]['value'] == 1) {
    if($remoteBlock == 'TRUE'){
      $uri = 'http://' . variable_get('HUB_SERVER') . '/' . node_load_remote($content['field_int_link'][0]['#item']['target_id']);
    }
    else {
      $uri = $GLOBALS['base_url'] . '/' . drupal_get_path_alias('node/' . $content['field_int_link'][0]['#item']['target_id']);
    }
    print '<a href="' . $uri . '" class="' . $btn_color . '">' . $link_text . '</a>';
  }
  //Dept Links
  elseif($content['field_link_type']['#items'][0]['value'] == 2) {
    $uri = $content['field_external_link']['#items'][0]['url'];
    print '<a href="' . $uri . '" target="_blank" class="' . $btn_color . '" rel="nofollow">' . $link_text . '</a>';
  }
  //File Links ie) Fact Sheets 
  elseif($content['field_link_type']['#items'][0]['value'] == 3) {   
    if($remoteBlock == 'TRUE'){
      $fileName = $content['field_file_link_absolute']['#items'][0]['uri'];    
      $fileName = str_replace('public://', '', $fileName);
      $uri = 'http://' . variable_get('HUB_SERVER') . '/sites/' . variable_get('HUB_SERVER') . '/files/' . $fileName;
    }
    else {
      $uri = $content['field_file_link_absolute'][0]['#markup'];
    }
      print '<a href="' . $uri . '" target="_blank" class="' . $btn_color . '">' . $link_text . '</a>';
  }
?>
</div>