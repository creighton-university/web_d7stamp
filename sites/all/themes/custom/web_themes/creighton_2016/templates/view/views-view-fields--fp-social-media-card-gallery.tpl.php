<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>

<?php
$smc_order =
$smc_body =
$smc_color =
$smc_image =
$smc_image_alt =
$smc_link =
$smc_link_target =
$smc_social_media = "";

if (!empty($row->field_field_fp_smc_order[0]['rendered']['#markup'])) {
	$smc_order = $row->field_field_fp_smc_order[0]['rendered']['#markup'];
}
if (!empty($row->field_field_fp_smc_body[0]['rendered']['#markup'])){
	$smc_body = $row->field_field_fp_smc_body[0]['rendered']['#markup'];
}
if (!empty($row->field_field_fp_smc_color[0]['rendered']['#markup'])){
	$smc_color = $row->field_field_fp_smc_color[0]['rendered']['#markup'];
}
if (!empty($row->field_field_fp_smc_image[0]['rendered']['#item']['uri'])){
	$smc_image = image_load($row->field_field_fp_smc_image[0]['rendered']['#item']['uri']);
}
if (!empty($row->field_field_fp_smc_image[0]['rendered']['#item']['field_file_image_alt_text']['und'][0]['safe_value'])){
	$smc_image_alt = $row->field_field_fp_smc_image[0]['rendered']['#item']['field_file_image_alt_text']['und'][0]['safe_value'];
}
if (!empty($row->field_field_fp_smc_link[0]['rendered']['#element']['url'])){
	$smc_link = $row->field_field_fp_smc_link[0]['rendered']['#element']['url'];
}
if (!empty($row->field_field_fp_smc_link[0]['rendered']['#element']['attributes']['target'])){
	$smc_link_target = $row->field_field_fp_smc_link[0]['rendered']['#element']['attributes']['target'];
}
if (!empty($row->field_field_fp_smc_social_media[0]['rendered']['#markup'])){
	$smc_social_media = $row->field_field_fp_smc_social_media[0]['rendered']['#markup'];
}
?>
<a href="<?php print $smc_link; ?>" target="<?php print $smc_link_target; ?>">
<?php if (!empty($smc_image)) {
?>
	<div class="fp-smc <?php print $smc_color; ?> <?php print $smc_social_media; ?>"
		 id="fp-smc-<?php print $smc_order; ?>"
		 style="background-color: #<?php print $smc_color; ?>; background-image: url('<?php print file_create_url($smc_image->source); ?>');">
		<?php
		} else { ?>
			<div class="fp-smc <?php print $smc_color; ?> <?php print $smc_social_media; ?>" id="fp-smc-<?php print $smc_order; ?>" style="background-color: #<?php print $smc_color; ?>;" >
		<?php } ?>
		<div class="fp-smc-icon"></div>

	<div class="fp-smc-body"><?php print $smc_body; ?></div>
</div> <!-- END of .fp-smc .<?php print $smc_color; ?> .<?php print $smc_social_media; ?> #fp-smc-<?php print $smc_order; ?> -->
</a>

