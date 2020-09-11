<?php
/*
$items: An array of field values. Use render() to output them.
$label: The item label.
$label_hidden: Whether the label display is set to 'hidden'.
$classes: String of classes that can be used to style contextually through CSS. It can be manipulated through the variable $classes_array from preprocess functions. The default values can be one or more of the following:
field: The current template type, i.e., "theming hook".
field-name-[field_name]: The current field name. For example, if the field name is "field_description" it would result in "field-name-field-description".
field-type-[field_type]: The current field type. For example, if the field type is "text" it would result in "field-type-text".
field-label-[label_display]: The current label position. For example, if the label position is "above" it would result in "field-label-above".
Other variables:

$element['#object']: The entity to which the field is attached.
$element['#view_mode']: View mode, e.g. 'full', 'teaser'...
$element['#field_name']: The field name.
$element['#field_type']: The field type.
$element['#field_language']: The field language.
$element['#field_translatable']: Whether the field is translatable or not.
$element['#label_display']: Position of label display, inline, above, or hidden.
$field_name_css: The css-compatible field name.
$field_type_css: The css-compatible field type.
$classes_array: Array of html class attribute values. It is flattened into a string within the variable $classes.

*/
?>
<div class="dropdown">
  <ul id="drop-audience-select" class="dropdown-menu">
    <?php foreach ($items as $delta => $item) { ?>
    <?php

      $fcArray = $items[$delta]['entity']['field_collection_item'];
      $fcArray_key = key($fcArray);

      if(array_key_exists ( 'field_fp_audience' , $item['entity']['field_collection_item'][$fcArray_key] )){
        $audienceButton = $item['entity']['field_collection_item'][$fcArray_key]['field_fp_audience']['#items'][0]['safe_value'];        
      } else {
        $audienceButton = '';
      }
      if(array_key_exists ( 'field_fp_audience_text' , $item['entity']['field_collection_item'][$fcArray_key] )){
         $audienceText        = $item['entity']['field_collection_item'][$fcArray_key]['field_fp_audience_text']['#items'][0]['safe_value'];        
      } else {
        $audienceText = '';
      }
      if(array_key_exists ( 'field_fp_audience_text_small' , $item['entity']['field_collection_item'][$fcArray_key] )){
         $audienceTextSmall        = $item['entity']['field_collection_item'][$fcArray_key]['field_fp_audience_text_small']['#items'][0]['safe_value'];        
      } else {
        $audienceTextSmall = '';
      }       
    ?>
  <li>
    <div class="audience-button">
      <a href="#" class="fp-dropdown-links"><?php echo $audienceButton; ?></a>
    </div>  
    <div id="fp-audience-select-marketing">
      <div class="fp-audience-marketing fp-audience-marketing-large"><?php echo $audienceText; ?></div>
      <div class="fp-audience-marketing fp-audience-marketing-small"><?php echo $audienceTextSmall; ?></div>
    </div>
      <?php print render($item); ?>
  </li>
  <?php } ?>
  </ul>
</div>
