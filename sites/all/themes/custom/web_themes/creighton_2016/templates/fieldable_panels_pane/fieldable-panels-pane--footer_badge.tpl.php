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
	$badge_type = $content['field_footer_badge_type']['#items'][0]['value'];
	if($badge_type == 'override') {
		$badge_image = $content['field_footer_badge_image'];
    	if(isset($content['field_link_type']['#items'][0]['value'])) {
    	if($content['field_link_type']['#items'][0]['value'] == 1 && isset($content['field_int_link'][0]['#item']['target_id'])){
      		$badge_link = $GLOBALS['base_url'] . '/' . drupal_get_path_alias('node/' . $content['field_int_link'][0]['#item']['target_id']);
    	}
    	elseif($content['field_link_type']['#items'][0]['value'] == 2 && isset($content['field_external_link']['#items'][0]['url'])){
      		$badge_link = file_create_url($content['field_external_link']['#items'][0]['url']);
    	}
    	elseif($content['field_link_type']['#items'][0]['value'] == 3 && isset($content['field_file_link'][0]['#item']['target_id'])){
      		$path = file_load($content['field_file_link'][0]['#item']['entity']->fid)->uri;
      		$badge_link = file_create_url($path);
    	}
  	}
  }
?>
<?php if($badge_type == 'override' && isset($badge_link)) : ?>
	<a class="best-college" href="<?php print($badge_link); ?>">
		<?php print render($badge_image); ?>
	</a>
<?php elseif($badge_type == 'override') : ?>
	<?php print render($badge_image); ?>
<?php elseif($badge_type == 'blank') : ?>
	<div class='footer-badge-blank'></div>
<?php endif; ?>

