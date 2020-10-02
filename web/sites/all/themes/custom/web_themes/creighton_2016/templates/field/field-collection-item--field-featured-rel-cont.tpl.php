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
?>

<?php

  $title = $content['field_featured_rel_cont_title']['#items'][0]['safe_value'];
  $body = $content['field_featured_rel_cont_body']['#items'][0]['safe_value'];
  $image = $content['field_featured_rel_cont_image'];

  if(isset($content['field_link_type']['#items'][0]['value'])){
    $link_type = $content['field_link_type']['#items'][0]['value'];
    if($link_type == 1 && isset($content['field_int_link'][0]['#item']['target_id'])) {
      $uri = $GLOBALS['base_url'] . '/' . drupal_get_path_alias('node/' . $content['field_int_link'][0]['#item']['target_id']);
    }
    elseif($link_type == 2 && isset($content['field_external_link']['#items'][0]['url'])) {
      $uri = $content['field_external_link']['#items'][0]['url'];
    }
    elseif($link_type == 3 && isset($content['field_file_link'][0]['#item']['target_id'])) {
      $path = file_load($content['field_file_link'][0]['#item']['entity']->fid)->uri;
      $uri = file_create_url($path);
    }
  }

?>


  <a class="thumbnail" href="<?php print $uri; ?>" title="<?php print $title; ?>"><?php print render($image); ?></a>
  <div class="content">
    <h4><a href="<?php print $uri; ?>" title="<?php print $title; ?>"><?php print $title; ?></a></h4>
    <p><?php print $body; ?></p>
    <a href="<?php print $uri; ?>" class="btn-transparent-green" title="Read more <?php print $title; ?>">Read More</a>
  </div>


