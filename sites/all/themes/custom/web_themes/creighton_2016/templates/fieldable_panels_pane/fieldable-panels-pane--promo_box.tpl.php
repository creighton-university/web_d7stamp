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
  if($content['field_link_type']['#items'][0]['value'] == 1) {
    if( array_key_exists('field_int_link', $content) ){
      $promo_link = $GLOBALS['base_url'] . '/' . drupal_get_path_alias('node/' . $content['field_int_link'][0]['#item']['target_id']);
    } else {
      $promo_link = '';
    }
  }
  elseif($content['field_link_type']['#items'][0]['value'] == 2) {
    if( array_key_exists('field_external_link', $content) ){
      $promo_link = file_create_url( $content['field_external_link']['#items'][0]['url'] );
    } else {
      $promo_link = '';
    }
  }
  elseif($content['field_link_type']['#items'][0]['value'] == 3) {
    if( array_key_exists('field_file_link', $content) ){
      $path = file_load($content['field_file_link'][0]['#item']['entity']->fid)->uri;
      $promo_link = file_create_url($path);
    } 
  }
  
  if( array_key_exists('field_promo_box_promo_text', $content) ){
    $promo_text = $content['field_promo_box_promo_text'][0]['#markup'];
  } else {
    $promo_text = '';
  }
  
  if( array_key_exists('field_promo_box_link_text', $content) ){
     $promo_link_text = $content['field_promo_box_link_text'][0]['#markup'];
  } else {
    $promo_link_text = '';
  }
?>
<div class="block--promo sidebar-item">
  <a class="promo primary" href="<?php print($promo_link); ?>" title="<?php print($promo_link_text); ?>">
    <span class="link"><?php print( $promo_text ); ?></span>
    <span class="btn"><?php print( $promo_link_text ); ?></span>
  </a>
</div>