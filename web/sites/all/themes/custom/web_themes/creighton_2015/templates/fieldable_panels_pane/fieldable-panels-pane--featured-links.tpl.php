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
<div class="featured-link">
<?php
	
  $uri = '';
  $external_link_text = "";
  $nofollow = "";

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
    if( array_key_exists('#remote', $content['field_int_link']) ){
      $uri = $content['field_int_link']['#remote'];  
    }
    else {
      $uri = $GLOBALS['base_url'] . '/' . drupal_get_path_alias('node/' . $content['field_int_link'][0]['#item']['target_id']);
    }
//     print '<a href="' . $uri . '" class="' . $btn_color . '">' . $link_text . '</a>';
  }
  //External Link ie) Department Link
  elseif($content['field_link_type']['#items'][0]['value'] == 2) {
    $uri = $content['field_external_link']['#items'][0]['url'];
    $nofollow = 'rel="nofollow"';
//     print '<a href="' . $uri . '" target="_blank" class="' . $btn_color . '" rel="nofollow">' . $link_text . '</a>';
  }
  //File Links ie) Fact Sheets 
  elseif($content['field_link_type']['#items'][0]['value'] == 3) {
    if( isset($content['field_file_link_absolute'][0]['#file']->uri) ) {
      $uri = $content['field_file_link_absolute'][0]['#file']->uri;
    }
    if(strpos($uri, 'public://') == 0) {
      $uri = file_create_url($uri);
    }
    $external_link_text = ' target="_blank" ';
//     print '<a href="' . $uri . '" target="_blank" class="' . $btn_color . '">' . $link_text . '</a>';   
  }
  if(isset($content['field_external_link']['#items'][0]['attributes']['target']) && $content['field_external_link']['#items'][0]['attributes']['target'] == '_blank' ){
	    $external_link_text = ' target="_blank" ';
    }
?>
<a href="<?php print($uri) ?>" title="<?php print($link_text) ?>" class="<?php print($btn_color) ?>" <?php print($external_link_text) ?> <?php print($nofollow)?>><?php print($link_text) ?></a>
</div>