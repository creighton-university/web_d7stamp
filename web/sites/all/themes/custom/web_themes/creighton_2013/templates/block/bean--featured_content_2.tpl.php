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
  $featured_content_2_image = $content['field_featured_content2_image'];
  $featured_content_2_title = $content['field_featured_content2_title'][0]['#markup'];
  $featured_content_2_body = $content['field_featured_content2_body'][0]['#markup'];
  $featured_content_2_links = $content['field_featured_content2_links'];
  $link_type_set = '0';
  if(isset($content['field_link_type']['#items'][0]['value'])) {
    if($content['field_link_type']['#items'][0]['value'] == 1 && isset($content['field_int_link'][0]['#item']['target_id'])){
      $featured_content_2_block_link = $GLOBALS['base_url'] . '/' . drupal_get_path_alias('node/' . $content['field_int_link'][0]['#item']['target_id']);
      $link_type_set = '1';
    }
    elseif($content['field_link_type']['#items'][0]['value'] == 2 && isset($content['field_external_link']['#items'][0]['url'])){
      $featured_content_2_block_link = file_create_url($content['field_external_link']['#items'][0]['url']);
      $link_type_set = '1';
    }
    elseif($content['field_link_type']['#items'][0]['value'] == 3 && isset($content['field_file_link'][0]['#markup'])){
      $path = file_load($content['field_file_link'][0]['#markup'])->uri;
      $featured_content_2_block_link = file_create_url($path);
      $link_type_set = '1';
    }
  }
?>
<div class="block--featured_content_2">
  <?php if($link_type_set == '1'): ?>
    <a href="<?php print $featured_content_2_block_link; ?>">
    <?php print render($featured_content_2_image); ?>
    </a>
  <?php else: ?>
    <?php print render($featured_content_2_image); ?>
  <?php endif; ?>
  <div class="body-content">
    <div class="title">
      <?php if($link_type_set == '1'): ?>
        <a href="<?php print $featured_content_2_block_link; ?>">
          <?php print( $featured_content_2_title ); ?>
        </a>
      <?php else: ?>
        <?php print( $featured_content_2_title ); ?>
      <?php endif; ?>
    </div>
    <div class="body">
      <?php print( $featured_content_2_body ); ?>
    </div>
    <?php print render($featured_content_2_links); ?>
  </div>
</div>
