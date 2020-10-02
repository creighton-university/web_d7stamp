<?php
$num_pics = count($items);
foreach ($items as $delta => $item) {

  $key = array_keys($item['entity']['field_collection_item']);

  $content = $item['entity']['field_collection_item'][$key[0]];

  //One Link
  $slide_title_one = ( isset( $content['field_fp_slide_headline'] ) ? $content['field_fp_slide_headline'][0]['#markup'] : '');

  if( isset($content['field_fp_slide_link_text']) ){
    $link_text = $content['field_fp_slide_link_text'][0]['#markup'];
  }

  if(isset($content['field_link_type']['#items'][0]['value'])){
    if($content['field_link_type']['#items'][0]['value'] == 1){
      $uri = $GLOBALS['base_url'] . '/' . drupal_get_path_alias('node/' . $content['field_int_link'][0]['#item']['target_id']);      
    }
    elseif($content['field_link_type']['#items'][0]['value'] == 2){
      $uri = file_create_url( $content['field_external_link']['#items'][0]['url'] );
    }
    elseif($content['field_link_type']['#items'][0]['value'] == 3){
      $path = file_load($content['field_file_link'][0]['#item']['entity']->fid)->uri;
      $uri = file_create_url($path);
    }
  }

  //Multiple Links
  $slide_title_multiple = ( isset( $content['field_fp_slide_headline_multiple'] ) ? $content['field_fp_slide_headline_multiple'][0]['#markup'] : '');
  $slide_text_multiple = ( isset( $content['field_fp_text_multiple_links'] ) ? $content['field_fp_text_multiple_links'][0]['#markup'] : '');
  
  $multiple_links = '';
  $link_class = '';
  if(isset($content['field_fp_slide_link_text_1'])){
   $link_text_1 = $content['field_fp_slide_link_text_1'][0]['#markup'];
   $uri_1 = $GLOBALS['base_url'] . '/' . drupal_get_path_alias('node/' . $content['field_fp_slide_link_internal_1']['#items'][0]['target_id']);
   $multiple_links .=  '<a href="' . $uri_1 . '">' . $link_text_1 . '</a>';
   $link_class = 'multi-link'; 
  }
  if(isset($content['field_fp_slide_link_text_2'])){
   $link_text_1 = $content['field_fp_slide_link_text_2'][0]['#markup'];
   $uri_1 = $GLOBALS['base_url'] . '/' . drupal_get_path_alias('node/' . $content['field_fp_slide_link_internal_2']['#items'][0]['target_id']);
   $multiple_links .=  '<a href="' . $uri_1 . '">' . $link_text_1 . '</a>'; 
  }
  if(isset($content['field_fp_slide_link_text_3'])){
   $link_text_1 = $content['field_fp_slide_link_text_3'][0]['#markup'];
   $uri_1 = $GLOBALS['base_url'] . '/' . drupal_get_path_alias('node/' . $content['field_fp_slide_link_internal_3']['#items'][0]['target_id']);
   $multiple_links .=  '<a href="' . $uri_1 . '">' . $link_text_1 . '</a>'; 
  }
  
  //Images
  $slide_image = $content['field_fp_slide_image_alt'][0]; 
?>
<article>
	 <div class="bx-slide-controls">
        <div class="bx-slide-next" ></div>
        <div class="bx-slide-prev" ></div>        
      </div>
  <div class="slide-content <?php print $link_class; ?>">
      
    <div class="container">
        <div class="slide-text">
            <h1><?php print $slide_title_one; ?></h1>
            <?php print ((isset($link_text) && isset($uri)) ? '<a href="' . $uri . '">' . $link_text . '</a>' : '');?>

            <?php if (isset($content['field_fp_slide_headline_multiple'])) { ?>
                <div id="fp-slider-three-links">
                    <h1><strong><?php print $slide_title_multiple; ?></strong></h1>
                    <p><?php print $slide_text_multiple; ?></p>
                    <?php print $multiple_links;?>
                </div>
            <?php } ?>
            <?php
            if($num_pics > 1){
                ?>

                <?php
            }
            ?>
        </div>
    </div>
  </div>
  <?php print "<span style='visibility:hidden;' class='hero-pic' value='".$content['field_fp_slide_image_alt'][0]['#item']['filename']."'>".render($slide_image)."</span>"; ?>
</article>
<?php   
}
