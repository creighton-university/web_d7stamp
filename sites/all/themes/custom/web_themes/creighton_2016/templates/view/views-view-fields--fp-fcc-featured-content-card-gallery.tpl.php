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
<?php //dpm($row); ?>
<?php //foreach ($fields as $id => $field): ?>
  <?php //if (!empty($field->separator)): ?>
    <?php //print $field->separator; ?>
  <?php //endif; ?>

  <?php //print $field->wrapper_prefix; ?>
    <?php //print $field->label_html; ?>
    <?php //print $field->content; ?>
  <?php //print $field->wrapper_suffix; ?>
<?php //endforeach; ?>
<?php
//$front_side = $row->field_field_fcc_front_side[0]["raw"]["value"];
//print "<p style=color:red>".$front_side."</p>";
//if ($front_side == "color") {
//  print "front";
//} else {
//  print "back";
//}
$card_id_number = $row->_field_data['nid']['entity']->field_fp_fcc_order['und'][0]['value'];
$card_id = "fcc-card-".$card_id_number;
$color_hex = $row->_field_data['nid']['entity']->field_fp_fcc_color['und'][0]['value'];
$color_head = $row->_field_data['nid']['entity']->field_fp_fcc_color_side_headline['und'][0]['safe_value'];
$color_body = $row->_field_data['nid']['entity']->field_fp_fcc_color_side_body['und'][0]['safe_value'];
$color_link_a = $row->_field_data['nid']['entity']->field_fp_fcc_color_side_link['und'][0]['url'];
$color_link_title = $row->_field_data['nid']['entity']->field_fp_fcc_color_side_link['und'][0]['title'];
$color_link_new_win = $row->_field_data['nid']['entity']->field_fp_fcc_color_side_link['und'][0]['attributes']['target'];
$image_head = $row->_field_data['nid']['entity']->field_fp_fcc_image_side_headline['und'][0]['safe_value'];
$image_body = $row->_field_data['nid']['entity']->field_fp_fcc_image_side_body['und'][0]['safe_value'];
$image_name = $row->_field_data['nid']['entity']->field_fp_fcc_image['und'][0]['filename'];
$front_side = $row->_field_data['nid']['entity']->field_fp_fcc_front_side['und'][0]['value'];
$image = image_load($row->_field_data['nid']['entity']->field_fp_fcc_image['und'][0]['uri']);

?>
<?php
  $new_win = "";
  if ($color_link_new_win) {
  $new_win = "_blank";
  } else {
  $new_win = "_self";
  }
?>

<a href="<?php print $color_link_a; ?>" target="<?php print $new_win; ?>" >
<?php
print '<div id='.$card_id.' class="fcc">';
// Color side of featured content cards
  print '<div style="background-color:#'.$color_hex.';" class="fcc-side color-side ';
  if ($front_side == "color") {
    print "front";
  } else {
    print "back";
  }
  print '" >';
    print "<h3>".$color_head."</h3>";
    print "<div class='fcc-color-body'>".$color_body."</div>";
    print "<div class=\"link\" >$color_link_title</div>";
  print "</div><!-- END of .fcc-side .color-side -->";

// Image side of Featured Content Card
  print '<div class="fcc-side image-side ';
  if ($front_side == "image") {
    print "front";
  } else {
    print "back";
  }
  print '" ';
  print 'style="background-image:url('. file_create_url($image->source) .');" >';
    print "<div class=\"image-text-containter\">";
      print "<h3 >".$image_head."</h3>";
      print "<div class='fcc-image-body'>".$image_body."</div>";
    print "</div><!-- END of .image-text-containter-->";
print "</div><!-- END of .fcc-side .image-side -->";
print "</div><!-- END of #$card_id-->";

?>
</a>


