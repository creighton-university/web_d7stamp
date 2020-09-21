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
  $quote_text = $content['field_quote_text']['#items'][0]['safe_value'];
  $quote_name = $content['field_quote_name']['#items'][0]['safe_value'];
  if(isset($content['field_quote_description']['#items'][0]['safe_value'])) {
    $quote_description = $content['field_quote_description']['#items'][0]['safe_value'];
  }

  // krumo($content);
  // die;
?>
<div class="block--quote sidebar-item">
  <blockquote>
    <q><?php print( $quote_text ); ?></q>
    <footer>
      &mdash;&nbsp;<?php print($quote_name); ?>
      <?php if(isset($quote_description)) : ?><span><?php print($quote_description); ?></span><?php endif; ?>
    </footer>
  </blockquote>
</div>


