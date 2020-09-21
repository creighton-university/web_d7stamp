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

  $link_count = 0;

  // Grab the Field group title so we have a unique ID to show/hide the different audiences.
  $menu_title = $content['field_fp_audience'][0]['#markup'];
  $menu_title =  str_replace(' ', '-', $menu_title);
  $menu_title =  str_replace('&amp;', '', $menu_title);
  // krumo($content);
?>
<ul class="menu" id="<?php print $menu_title; ?>">
<?php

  // Loop through each audience link group
  while($link_count < 10){

    // Breaks the loop if we no longer have any groups but are still less then 10
    if( isset( $content['field_fp_audience_link_group'][$link_count] ) ) {

      // Current Link group
      $cur_link_group = $content['field_fp_audience_link_group'][$link_count];
      // Current Link Group Key
      $cur_key = key( $cur_link_group['entity']['field_collection_item'] );
      // Current Link Group Link Type
      $cur_link_type = $cur_link_group['entity']['field_collection_item'][$cur_key]['field_link_type'][0]['#markup'];

      if( $cur_link_type == "External Link" ){

        $cur_link = $cur_link_group['entity']['field_collection_item'][$cur_key]['field_external_link']['#items'][0]['url'];
        $cur_link_title = $cur_link_group['entity']['field_collection_item'][$cur_key]['field_audience_link_title'][0]['#markup'];

        print '<li class="fp-sub-menu"><a href="' . $cur_link . '" title="' . $cur_link_title  . '"><div>' . $cur_link_title  . '</div></a></li>';
      }elseif( $cur_link_type == "Internal Link"){
        // Current link group field group for the internal link
        $cur_link_fg = $cur_link_group['entity']['field_collection_item'][$cur_key];

        $cur_link = $GLOBALS['base_url'] . '/' . drupal_get_path_alias('node/' . $cur_link_fg['field_int_link'][0]['#markup']);
        $cur_link_title = $cur_link_fg['field_audience_link_title'][0]['#markup'];

        print '<li class="fp-sub-menu"><a href="' . $cur_link . '" title="' . $cur_link_title  . '"><div>' . $cur_link_title  . '</div></a></li>';
      }else{
        // Needs code for when the link type is a file. Unsure if this will be the case.
      }

      $link_count++;
    }else{
      break;
    }

  }
?>
</ul>
