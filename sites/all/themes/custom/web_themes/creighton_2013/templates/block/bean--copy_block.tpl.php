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
  if( isset($content['field_copy_block_style']) ){
    $block_style = $content['field_copy_block_style']['#items'][0]['value'];
  }
  $body = $content['field_copy_block_body'][0]['#markup'];

  //Complexity needed to remove &nbsp; spaces to prevent undesired wrapping.
  //$body = strip_tags($body);  
  $body = str_replace('&nbsp;', ' ', $body);   
  $body = htmlentities($body, null, 'utf-8');
  $body = str_replace('&nbsp;', ' ', $body);
  $body = html_entity_decode($body, null, 'utf-8');
  
?>
<div class="block--copy-block sidebar-item<?php if(isset($block_style)) : ?><?php print " ".($block_style); ?><?php endif; ?>">
  <?php if( isset($content['field_copy_block_title']) ) : ?>
    <h4><?php print($content['field_copy_block_title']['#items'][0]['safe_value']); ?></h4>
  <?php endif; ?>
  <?php echo "<p>".$body."</p>"; ?>
</div>
