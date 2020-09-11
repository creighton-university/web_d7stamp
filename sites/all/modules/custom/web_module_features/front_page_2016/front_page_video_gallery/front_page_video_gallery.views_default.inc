<?php
/**
 * @file
 * front_page_video_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function front_page_video_gallery_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'front_page_video_slide_show';
  $view->description = '';
  $view->tag = 'Front Page';
  $view->base_table = 'node';
  $view->human_name = 'Front Page Video Slide Show';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Front Page Video Gallery';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'video_gallery_with_thumbnail_captions';
  $handler->display->display_options['style_options']['captionfield'] = 'field_video_description';
  $handler->display->display_options['style_options']['id'] = 'videogallery-flexslider';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: FlexSlider Example Image */
  $handler->display->display_options['fields']['field_flexslider_example_image']['id'] = 'field_flexslider_example_image';
  $handler->display->display_options['fields']['field_flexslider_example_image']['table'] = 'field_data_field_flexslider_example_image';
  $handler->display->display_options['fields']['field_flexslider_example_image']['field'] = 'field_flexslider_example_image';
  $handler->display->display_options['fields']['field_flexslider_example_image']['label'] = '';
  $handler->display->display_options['fields']['field_flexslider_example_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_flexslider_example_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_flexslider_example_image']['settings'] = array(
    'image_style' => 'flexslider_full',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_flexslider_example_image']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_flexslider_example_image']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'front_page_video_gallery' => 'front_page_video_gallery',
  );

  /* Display: Basic Slider with Thumbnail Caption */
  $handler = $view->new_display('page', 'Basic Slider with Thumbnail Caption', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Video Gallery/Slider with Thumbnail captions';
  $handler->display->display_options['display_description'] = 'To use thumbnail captions, use the "caption field" option in the style settings.';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php
  drupal_add_js(\'
    creightonEdu.loopcounter = 0;
  \', array(\'weight\' => 101, \'scope\' => \'header\', \'group\' => JS_THEME, \'type\' => \'inline\'));
?>';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'css';
  $handler->display->display_options['footer']['area']['content'] = '<!-- Styles specific to the Video Gallery on the front page -->
<style>
#videogallery-flexslider {
  width: 743px;
  height: 480px;
  float: left;
  padding: 30px 0 12px 16px;
  background: #fff url(\'/sites/all/themes/custom/web_themes/creighton_2016/images/png/triangles-05.png\') no-repeat left -12px;
  border: 4px solid #73B865;
  border-top: 12px solid #73B865;
  position: relative;
}

#videogallery-flexslider h2.pane-title {
  font-size: 0;
  margin-top: 0;
  padding: 0;
  line-height: 0;
}

#videogallery-flexslider .flex-viewport {
  width: 572px;
  float: left;
}

/*#videogallery-flexslider .flex-viewport ul.slides {
  height: 1000%;
  position: absolute;
  width: 100%;
  transition-duration: 0s;
  transform: translate3d(0px, -1086px, 0px);
}*/

#videogallery-flexslider .flex-viewport ul.slides li {
  display: block;
}

#videogallery-flexslider .video-embed-description {
  font-family: \'OpenSans-SemiBold\', sans-serif;
  font-size: 22px;
  color: #0054A6;
  margin: 0;
  padding: 8px 0;
  display: none;
}

#videogallery-flexslider .frontpage-video-gallery p {
  font-family: \'OpenSans-SemiBold\', sans-serif;
  font-size: 22px;
  color: #0054A6;
  margin: 0;
  padding: 8px 0;
}

#videogallery-flexslider .frontpage-video-gallery-image {
  display: none;
}

/*#videogaller-flexslider .video-embed-description li ul ol.flex-control-thumbs {
  float: left;
  display: block;
  width: 115px;
  padding: 8px;
}*/
#videogallery-flexslider ol.flex-control-nav.flex-control-thumbs {
  width: 138px;
/*  float: left;*/
  /*padding: 0 16px 8px 8px;*/
  padding: 30px 19px 0px 12px;
  margin: 0 0 0 8px;
  background: #ccc;
/* perhaps do this instead of float */
  position: absolute;
  top: 0;
  right: 0;
  overflow: hidden;
  max-height: 351px;
}

#videogallery-flexslider ol.flex-control-nav.flex-control-thumbs li {
  width: 100%;
  float: none;
  padding: 0 0 8px;
  background: transparent url(/sites/all/themes/custom/web_themes/creighton_2016/images/front-page/youtube-image-overlay.png) no-repeat scroll 0px 0px;
}

#videogallery-flexslider .flex-control-nav .flex-caption {
  font-family: \'OpenSans-SemiBold\', sans-serif;
  color: #0054A6;
/*  cursor: pointer;*/
}

#videogallery-flexslider .flex-control-nav .flex-caption:hover {
/*  text-decoration: underline;*/
}

#videogallery-flexslider .flex-control-nav .flex-caption {
  font-family: \'OpenSans-Regular\', sans-serif;
  color: #0054A6;
  font-size: 14px;
  display: block;
  line-height: 110%;
  padding-top: 2px;
}

#videogallery-flexslider .flex-direction-nav {
  display: none;
}

#videogallery-flexslider .embedded-video {
  padding: 0;
  /*padding: 20px 0 0;*/
}

/* this is the panel */
.cu-front-layout .pane-front-page-video-slide-show {
  padding: 0;
}

.flex-control-thumbs img {
  opacity: 1;
}

.flex-control-thumbs img:hover {
  opacity: 0.6;
}

.flex-control-thumbs .flex-active {
  opacity: 0.08;
}

.flex-control-thumbs .flex-active:hover {
  opacity: 0;
}

@media (max-width: 1250px) and (min-width: 768px) {
  .cu-front-layout .pane-front-page-video-slide-show {
     margin: auto;
     width: 100%
  }

  #videogallery-flexslider {
      float: none;
      margin: 0 auto 60px;
  }
}

/*@media (max-width: 1050px) {*/
@media (max-width: 767px) {
    #videogallery-flexslider {
        width: 95%;
        height: auto;
        float: none;
        padding: 30px 16px 12px 16px;
        background-position: 50% -12px;
        margin-left: 2.5%;
        margin-right: 2.5%;
    }

   #videogallery-flexslider .flex-viewport {
       width: 100%;
       float: none;
    }

    #videogallery-flexslider ol.flex-control-nav.flex-control-thumbs {
        display: none;
    }

    #videogallery-flexslider .player iframe {
        width: 100%;
        height: auto;
    }
}

.youtube-embed iframe {
    margin-bottom: -7px;
}
</style>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'video_style' => 'front_page_video_gallery',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'flexslider_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Video - Description */
  $handler->display->display_options['fields']['field_video_description']['id'] = 'field_video_description';
  $handler->display->display_options['fields']['field_video_description']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video_description']['field'] = 'field_video_description';
  $handler->display->display_options['fields']['field_video_description']['label'] = '';
  $handler->display->display_options['fields']['field_video_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video_description']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php

echo image_style_url(\'flexslider_video_preview\', $data->_field_data[\'nid\'][\'entity\']->field_image[\'und\'][0][\'uri\']);

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="frontpage-video-gallery">
  <div class="frontpage-video-gallery-video" data-videopreviewimage="[php]">
   [field_video]
  </div>
  <div class="frontpage-video-gallery-image">
    [field_image]
  </div>
  <div class="frontpage-video-gallery-body">
  [body]
  </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '    [field_image]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<script type="text/javascript" id="fp-video-gallery-script-<?php echo $data->nid; ?>">
var cu = creightonEdu;
cu.loopcounter = cu.loopcounter + 1;
if(cu.deviceProfile.width > cu.css_breakpoints.mobile_end || cu.loopcounter == 1) {
  var htmlstr = \'<?php

  $v_preview_uri = image_style_url(\'flexslider_video_preview\', $data->_field_data[\'nid\'][\'entity\']->field_image[\'und\'][0][\'uri\']);
  $v_clean_script = str_replace(\'</script>\',\'<\\\\/script>\',drupal_render($data->field_field_video[0][\'rendered\']));
  $v_thumb_uri = image_style_url(\'flexslider_thumbnail\', $data->_field_data[\'nid\'][\'entity\']->field_image[\'und\'][0][\'uri\']);
  $v_thumb_alt = $data->_field_data[\'nid\'][\'entity\']->field_image[\'und\'][0][\'alt\'];
  $v_body = $data->_field_data[\'nid\'][\'entity\']->body[\'und\'][0][\'safe_value\'];

  $rstring = <<<EOT
<div class="frontpage-video-gallery">
  <div class="frontpage-video-gallery-video" data-videopreviewimage="{$v_preview_uri}">
   {$v_clean_script}
  </div>
  <div class="frontpage-video-gallery-image">
    <img typeof="foaf:Image" src="{$v_thumb_uri}" width="160" height="100" alt="{$v_thumb_alt}" />
  </div>
  <div class="frontpage-video-gallery-body">
    {$v_body}
  </div>
</div>
EOT;

  echo str_replace(array("\\r","\\n"), "", $rstring);
?>\';
  jQuery("script#fp-video-gallery-script-<?php echo $data->nid; ?>").parent().html(htmlstr);
} else {
  jQuery("script#fp-video-gallery-script-<?php echo $data->nid; ?>").parent().remove();
}
</script>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  $handler->display->display_options['path'] = 'flexslider-views-example-thumbnail-captions';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Thumbnail Captions (Views)';
  $handler->display->display_options['menu']['description'] = 'Basic slider with thumbnail captions';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-flexslider-example';
  $handler->display->display_options['menu']['context'] = 0;
  $export['front_page_video_slide_show'] = $view;

  return $export;
}
