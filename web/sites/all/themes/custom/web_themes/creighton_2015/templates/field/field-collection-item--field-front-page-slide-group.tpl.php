<?php
/**
 * @file
 * Default theme implementation for field collection items.
 *
 * Available variables:
 * - $content: An array of comment items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $title: The (sanitized) field collection item label.
 * - $url: Direct url of the current entity if specified.
 * - $page: Flag for the full page state.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity-field-collection-item
 *   - field-collection-item-{field_name}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
//dpm($content); 
?>
<?php  
  $slide_title = ( isset( $content['field_fp_slide_headline'] ) ? $content['field_fp_slide_headline']['#items'][0]['safe_value'] : '');

  if( isset($content['field_fp_slide_link_text']) ){
    $link_text = $content['field_fp_slide_link_text'][0]['#markup'];
    $audience = $content['field_fp_slide_link_text']['#items'][0]['value'];
    //dpm($audience);
  }
  if(isset($content['field_link_type']['#items'][0]['value'])){
    if($content['field_link_type']['#items'][0]['value'] == 1){
      $uri = $GLOBALS['base_url'] . '/' . drupal_get_path_alias('node/' . $content['field_int_link'][0]['#item']['target_id']);
    }
    elseif($content['field_link_type']['#items'][0]['value'] == 2){
      $uri = file_create_url( $content['field_external_link']['#items'][0]['url'] );
    }
    elseif($content['field_link_type']['#items'][0]['value'] == 3){
      $path = file_load($content['field_file_link'][0]['#markup'])->uri;
      $uri = file_create_url($path);
    }
  }
?>
<article>
  <div class="slide-content">
    <div class="container">
      <h1><?php print render($slide_title); ?></h1>
      <?php if(isset($link_text) && isset($uri)){
        print '<a href="' . $uri . '">' . $link_text . '</a>';
      }?>
    </div>
  </div>
  <?php 
  //Set up for First group to have 3 pictures that will be randomized w/ javascript  
  if($audience == 'High School Students') {
    $slide_image = $content['field_fp_slide_image'][0];
    print "<span class='hero-pic' value='".$content['field_fp_slide_image'][0]['#item']['filename']."'>".render($slide_image)."</span>";
    
    $slide_image1 = $content['field_fp_slide_image'][1];
    print "<span class='hero-pic' value='".$content['field_fp_slide_image'][1]['#item']['filename']."'>".render($slide_image1)."</span>";
    
    $slide_image2 = $content['field_fp_slide_image'][2];
    print "<span class='hero-pic' value='".$content['field_fp_slide_image'][2]['#item']['filename']."'>".render($slide_image2)."</span>";
  }
  else {
    $slide_image = $content['field_fp_slide_image'];
    print render($slide_image);
  } 
  ?>
</article>

