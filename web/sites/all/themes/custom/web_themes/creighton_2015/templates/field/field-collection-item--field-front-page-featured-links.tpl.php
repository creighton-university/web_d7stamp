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
global $block_style;
$title = $content['field_fp_featured_links_title']['#items'][0]['safe_value'];

$description = '';
if(array_key_exists ( 'field_fp_featured_links_desc' , $content )) {
  $description = $content['field_fp_featured_links_desc'][0]['#markup'];        
} 

$linkCollection = $content['field_fp_featured_links'][0]['entity']['field_collection_item'];

$target = '';

//Display
if(isset($content['field_fp_featured_links_image'])) {
  $image = $content['field_fp_featured_links_image']; 
  
  foreach ($linkCollection as $linkTypeKey => $linkTypeValue) {  
    $linkType = $linkCollection[$linkTypeKey]['field_repo_link_type']['#items'][0]['value'];  
    $target = '';   
    //Internal Link
    if($linkType == 1 && isset($linkCollection[$linkTypeKey]['field_repo_internal_link'][0]['#markup'])) {    
      $uri = $GLOBALS['base_url'] . '/' . drupal_get_path_alias($linkCollection[$linkTypeKey]['field_repo_internal_link'][0]['#markup']);
    }//External Link
    elseif($linkType == 2 && isset($linkCollection[$linkTypeKey]['field_repo_external_link']['#items'][0]['url'])) {
      $uri = $linkCollection[$linkTypeKey]['field_repo_external_link']['#items'][0]['url'];
      if(array_key_exists ( 'target' , $linkCollection[$linkTypeKey]['field_repo_external_link']['#items'][0]['attributes'] )) {
        $target = $linkCollection[$linkTypeKey]['field_repo_external_link']['#items'][0]['attributes']['target'];        
      }  
    }//File Link
    elseif($linkType == 3 && isset($linkCollection[$linkTypeKey]['field_repo_file_link']['#items'][0]['url'])) {
      $uri = $linkCollection[$linkTypeKey]['field_repo_file_link']['#items'][0]['url'];
      if(array_key_exists ( 'target' , $linkCollection[$linkTypeKey]['field_repo_file_link']['#items'][0]['attributes'] )) {
        $target = $linkCollection[$linkTypeKey]['field_repo_file_link']['#items'][0]['attributes']['target'];        
      } 
    }
  }//foreach 
  ?>
  <a class="thumbnail" href="<?php print $uri; ?>" target="<?php print $target; ?>" title="<?php print $title; ?>">
    <?php print render($image); ?>
  </a><!-- /.thumbnail -->  
  <h4 class="title">
    <a href="<?php print $uri; ?>" target="<?php print $target; ?>" title="<?php print $title; ?>"><?php print $title; ?></a>
  </h4><!-- /.title -->
  <p class="description">    
    <?php print $description; ?>
    <!-- Alt Sites -->   
    <?php if($block_style == "alternate") : ?>
      <br>
      <a class="btn-transparent-orange" href="<?php print $uri; ?>" target="<?php print $target; ?>" title="<?php print $title; ?>">Read More</a>
    <?php endif; ?>
  </p><!-- /.description --> 
  <?php
} else {
  ?>
  <h4 class="title"><a><?php print $title; ?></a></h4>
  <p class="description"><?php print $description; ?></p>
  <ul class="featured-links">
  <?php
  //Multiple Links
  $linkCount = 0;
  while(isset($content['field_fp_featured_links'][$linkCount])){
    $linkCollection = $content['field_fp_featured_links'][$linkCount]['entity']['field_collection_item'];
    foreach ($linkCollection as $linkTypeKey => $linkTypeValue) {    
      $linkType = $linkCollection[$linkTypeKey]['field_repo_link_type']['#items'][0]['value'];  
      $target = '';
       
      //Internal Link
      if($linkType == 1 && isset($linkCollection[$linkTypeKey]['field_repo_internal_link'][0]['#markup'])) {     
        $uri = $GLOBALS['base_url'] . '/' . drupal_get_path_alias($linkCollection[$linkTypeKey]['field_repo_internal_link'][0]['#markup']);
      }//External Link
      elseif($linkType == 2 && isset($linkCollection[$linkTypeKey]['field_repo_external_link']['#items'][0]['url'])) {
        $uri = $linkCollection[$linkTypeKey]['field_repo_external_link']['#items'][0]['url'];
        if(array_key_exists ( 'target' , $linkCollection[$linkTypeKey]['field_repo_external_link']['#items'][0]['attributes'] )) {
          $target = $linkCollection[$linkTypeKey]['field_repo_external_link']['#items'][0]['attributes']['target'];        
        }  
      }//File Link
      elseif($linkType == 3 && isset($linkCollection[$linkTypeKey]['field_repo_media_link']['#items'][0]['filename'])) {
        $uri = $GLOBALS['base_url'] . '/files/' . $linkCollection[$linkTypeKey]['field_repo_media_link']['#items'][0]['filename'];    
      }
    ?>
    <li>
      <a class="" href="<?php print $uri; ?>" target="<?php print $target; ?>" title="">
      <?php print $linkCollection[$linkTypeKey]['field_repo_link_text'][0]['#markup']; ?>
      </a>
    </li> 
    <?php
    }//foreach
    $linkCount++;
  }//while
  ?>
  </ul>
  <?php 
}//else
?>