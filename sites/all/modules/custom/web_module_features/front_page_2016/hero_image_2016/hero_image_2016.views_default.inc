<?php
/**
 * @file
 * hero_image_2016.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hero_image_2016_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'homepage_slider';
  $view->description = '';
  $view->tag = 'Front Page';
  $view->base_table = 'node';
  $view->human_name = 'FP Slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'front_page_slider';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'css';
  $handler->display->display_options['footer']['area']['content'] = '<!-- current (with picture maintaining aspect ratio) -->
<style>
.view-homepage-slider video {
width: 100%;
object-fit: cover;
}

.view-homepage-slider .flexslider {
  border: 0 none;
  border-radius: 0px;
  margin-bottom: 0px;
}
.view-homepage-slider .flexslider .slides img {
  width: 100%;
}

.view-homepage-slider   .slider-text-box {
 
    position: absolute;
	bottom: 10%;
	width: 50%;
	margin-left: 100px;
	padding: 20px;
	background-color: rgba(0, 0, 0, .6);
	color: white;
	font-family: OpenSans-Regular, sans-serif;
	font-size: 1.1em;
	max-height: 80%;
	overflow: hidden;

}
.view-homepage-slider .slider-text-box .slider-front-title {
	font-size: 1.75em;
	font-weight: bold;
	font-style: italic;
	margin-bottom: 1ex;
	line-height: 1.2em;
}
.view-homepage-slider .slider-text-box  ul {
	list-style: none;
	padding-left: 0;
}
.view-homepage-slider .slider-text-box  ul li {
	display: inline;
	float: left;
	margin-right: 50px;
}
.view-homepage-slider .slider-text-box ul li .slider-front-link a {
	color: white;
	background-image: url("data:image/svg+xml;charset=US-ASCII,%3Csvg%20xmlns%3D%22http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg%22%20width%3D%2213%22%20height%3D%2222%22%3E%3Ccircle%20fill%3D%22%23fff%22%20cx%3D%222.202%22%20cy%3D%2219.834%22%20r%3D%222.173%22%2F%3E%3Ccircle%20fill%3D%22%23fff%22%20cx%3D%222.202%22%20cy%3D%222.166%22%20r%3D%222.173%22%2F%3E%3Ccircle%20fill%3D%22%23fff%22%20cx%3D%226.576%22%20cy%3D%226.713%22%20r%3D%222.173%22%2F%3E%3Ccircle%20fill%3D%22%23fff%22%20cx%3D%226.576%22%20cy%3D%2215.46%22%20r%3D%222.172%22%2F%3E%3Ccircle%20fill%3D%22%23fff%22%20cx%3D%2210.798%22%20cy%3D%2211%22%20r%3D%222.173%22%2F%3E%3C%2Fsvg%3E");
	background-repeat: no-repeat;
	background-position: right center;
	font-family: "OpenSans-Semibold", sans-serif;
	letter-spacing: 1px;
	padding-right: 24px;
	padding-top: 5px;
	padding-bottom: 5px;
	text-decoration: none;
}
.view-homepage-slider .slider-text-box ul li .slider-front-link a:hover {
	text-decoration: underline;
}
.view-homepage-slider .slider-text-box .slider-front-body {
	font-size: 1.1em;
}
@media (max-width: 767px) {
	.view-homepage-slider .slider-text-box .slider-front-body {
		display: none;
	}
}

.view-homepage-slider ul.flex-direction-nav a {
    overflow: visible;
    }

.view-homepage-slider ul.flex-direction-nav li a {
    background-image: url("/sites/all/themes/custom/web_themes/creighton_2016/images/png/slider-arrows.png"); 
    width: 76px;
    height: 126px;
    overflow: hidden;
    padding-top: 126px;
    }
.view-homepage-slider ul.flex-direction-nav li.flex-nav-prev a.flex-prev {
  background-position: 0 0;
}
.view-homepage-slider ul.flex-direction-nav li.flex-nav-next a.flex-next {
  background-position: 152px 0;
}
.view-homepage-slider .flex-control-nav {
  bottom: 3%;
  z-index: 2;
}
.view-homepage-slider .flex-direction-nav a.flex-next:before {
  content: "";
}
.view-homepage-slider .flex-direction-nav a.flex-prev:before {
  content: "";
}
@media only screen and (max-device-width : 420px) and (max-device-height : 740px) and (orientation : portrait), only screen and (max-device-width : 740px) and (max-device-height : 420px) and (orientation : landscape) {
	.slider-text-box { 
	 margin-left:0px !important;
	 width:100% !important;
	 bottom:0% !important;
 }
	.slider-text-box .slider-front-title {
	 margin-bottom:0px !important;
 }
	.slider-text-box .slider-front-body {
	 display:none;}
}
/******************************** Tablet styles **********************************/
@media (min-width: 768px) and (max-width:1050px) {
	.view-homepage-slider .slider-text-box {
		width: auto;
		margin: 0 100px;
	}
}
/******************************** HERO SLIDER **********************************/
@media (max-width: 767px) {
	.view-homepage-slider .slider-text-box {
		margin-left: 0;
		padding: 10px;
		position: relative;
		width: 100%;
		background-color: rgba(0, 0, 0, .75);

	}
	.view-homepage-slider .slider-text-box .slider-front-title {
		font-size: 1.25em;
	}
	.flex-direction-nav a {
		top: 30%;
	}
	ol.flex-control-nav.flex-control-paging {
		 display: none;
 	}
	.view-homepage-slider ul.flex-direction-nav li a {
		height: 31px;
 		width: 19px;
 		display: unset;
 		padding-top: 31px;

	}
	.view-homepage-slider .slider-text-box ul li {
		margin-right: 0px;
	}
	.view-homepage-slider .slider-text-box ul li .slider-front-link a {
		text-decoration: underline;
		letter-spacing: 0;
	}
	.view-homepage-slider ul.flex-direction-nav li.flex-nav-next a.flex-next {
 		background-position: 38px 0;
 		background-size: 76px;
 	}
 	.view-homepage-slider ul.flex-direction-nav li.flex-nav-prev a.flex-prev {
 	 	background-position: 0 0;
 		background-size: 76px;
 	}
}
/* **************** */
/* fixes slow loading images */
/* http://stackoverflow.com/questions/12717097/flexslider-slow-image-load */
/* **************** */
.flexslider .slides > li:first-child {display: block; -webkit-backface-visibility: visible;}

.flexslider .slides > li {display: none; -webkit-backface-visibility: hidden;}
/* end fix for loading images */
</style>
';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Field: Content: Image Slider */
  $handler->display->display_options['fields']['field_image_slider']['id'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider']['table'] = 'field_data_field_image_slider';
  $handler->display->display_options['fields']['field_image_slider']['field'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider']['label'] = '';
  $handler->display->display_options['fields']['field_image_slider']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_slider']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_slider']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_slider']['type'] = 'single_image';
  $handler->display->display_options['fields']['field_image_slider']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'single_image_delta' => '',
  );
  $handler->display->display_options['fields']['field_image_slider']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="slider-front-title">[title]</div><!-- END of .slider-front-title -->';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="slider-front-body">[body]</div><!-- END of .slider-front-body -->';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: video embed */
  $handler->display->display_options['fields']['field_video_embed']['id'] = 'field_video_embed';
  $handler->display->display_options['fields']['field_video_embed']['table'] = 'field_data_field_video_embed';
  $handler->display->display_options['fields']['field_video_embed']['field'] = 'field_video_embed';
  $handler->display->display_options['fields']['field_video_embed']['label'] = '';
  $handler->display->display_options['fields']['field_video_embed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video_embed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video_embed']['alter']['text'] = '<div class="slider-front-video">[field_video_embed]</div><!-- END of .slider-front-video -->';
  $handler->display->display_options['fields']['field_video_embed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_embed']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video_embed']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: slider link */
  $handler->display->display_options['fields']['field_slider_link']['id'] = 'field_slider_link';
  $handler->display->display_options['fields']['field_slider_link']['table'] = 'field_data_field_slider_link';
  $handler->display->display_options['fields']['field_slider_link']['field'] = 'field_slider_link';
  $handler->display->display_options['fields']['field_slider_link']['label'] = '';
  $handler->display->display_options['fields']['field_slider_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slider_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slider_link']['alter']['text'] = '<div class="slider-front-link">[field_slider_link]</div><!-- END of .slider-front-link -->';
  $handler->display->display_options['fields']['field_slider_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slider_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slider_link']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_slider_link']['multi_type'] = 'ul';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="slider-for-home-page">
        [field_image_slider]
        [field_video_embed]
    <div class="slider-text-box">
	[title]
        [body]
        [field_slider_link]
    </div><!-- END of .slider-text-box">
</div><!-- END of .slider-for-home-page -->
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: slide order (field_slide_order) */
  $handler->display->display_options['sorts']['field_slide_order_value']['id'] = 'field_slide_order_value';
  $handler->display->display_options['sorts']['field_slide_order_value']['table'] = 'field_data_field_slide_order';
  $handler->display->display_options['sorts']['field_slide_order_value']['field'] = 'field_slide_order_value';
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
    'slider_content' => 'slider_content',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Slider */
  $handler->display->display_options['fields']['field_image_slider']['id'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider']['table'] = 'field_data_field_image_slider';
  $handler->display->display_options['fields']['field_image_slider']['field'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider']['label'] = '';
  $handler->display->display_options['fields']['field_image_slider']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_slider']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_slider']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_slider']['type'] = 'picture';
  $handler->display->display_options['fields']['field_image_slider']['settings'] = array(
    'picture_group' => 'front_page_slider_2016',
    'fallback_image_style' => '',
    'image_link' => '',
    'colorbox' => 'front_page_slider_2016',
  );
  $handler->display->display_options['fields']['field_image_slider']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_image_slider']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="slider-front-title">[title]</div><!-- END of .slider-front-title -->';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="slider-front-body">[body]</div><!-- END of .slider-front-body -->';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: video embed */
  $handler->display->display_options['fields']['field_video_embed']['id'] = 'field_video_embed';
  $handler->display->display_options['fields']['field_video_embed']['table'] = 'field_data_field_video_embed';
  $handler->display->display_options['fields']['field_video_embed']['field'] = 'field_video_embed';
  $handler->display->display_options['fields']['field_video_embed']['label'] = '';
  $handler->display->display_options['fields']['field_video_embed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video_embed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video_embed']['alter']['text'] = '<div class="slider-front-video">[field_video_embed]</div><!-- END of .slider-front-video -->';
  $handler->display->display_options['fields']['field_video_embed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_embed']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video_embed']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: slider link */
  $handler->display->display_options['fields']['field_slider_link']['id'] = 'field_slider_link';
  $handler->display->display_options['fields']['field_slider_link']['table'] = 'field_data_field_slider_link';
  $handler->display->display_options['fields']['field_slider_link']['field'] = 'field_slider_link';
  $handler->display->display_options['fields']['field_slider_link']['label'] = '';
  $handler->display->display_options['fields']['field_slider_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slider_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slider_link']['alter']['text'] = '<div class="slider-front-link">[field_slider_link]</div><!-- END of .slider-front-link -->';
  $handler->display->display_options['fields']['field_slider_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slider_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slider_link']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_slider_link']['multi_type'] = 'ul';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="slider-for-home-page">
        [field_image_slider]
        [field_video_embed]
    <div class="slider-text-box">
	[title]
        [body]
        [field_slider_link]
    </div><!-- END of .slider-text-box">
</div><!-- END of .slider-for-home-page -->
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: Custom Text and Order */
  $handler = $view->new_display('block', 'Custom Text and Order', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Slider */
  $handler->display->display_options['fields']['field_image_slider']['id'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider']['table'] = 'field_data_field_image_slider';
  $handler->display->display_options['fields']['field_image_slider']['field'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider']['label'] = '';
  $handler->display->display_options['fields']['field_image_slider']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_slider']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_slider']['settings'] = array(
    'image_style' => 'front_page_slider',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_slider']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_image_slider']['multi_type'] = 'ol';
  $handler->display->display_options['fields']['field_image_slider']['separator'] = '""';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Slider */
  $handler->display->display_options['fields']['field_image_slider']['id'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider']['table'] = 'field_data_field_image_slider';
  $handler->display->display_options['fields']['field_image_slider']['field'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider']['label'] = '';
  $handler->display->display_options['fields']['field_image_slider']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_slider']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_slider']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_slider']['type'] = 'single_image';
  $handler->display->display_options['fields']['field_image_slider']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'single_image_delta' => '',
  );
  $handler->display->display_options['fields']['field_image_slider']['delta_offset'] = '0';
  /* Field: Content: video embed */
  $handler->display->display_options['fields']['field_video_embed']['id'] = 'field_video_embed';
  $handler->display->display_options['fields']['field_video_embed']['table'] = 'field_data_field_video_embed';
  $handler->display->display_options['fields']['field_video_embed']['field'] = 'field_video_embed';
  $handler->display->display_options['fields']['field_video_embed']['label'] = '';
  $handler->display->display_options['fields']['field_video_embed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video_embed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video_embed']['alter']['text'] = '<div class="slider-front-video">[field_video_embed]</div><!-- END of .slider-front-video -->';
  $handler->display->display_options['fields']['field_video_embed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_embed']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="slider-front-title">[title]</div><!-- END of .slider-front-title -->
';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="slider-front-body">[body]</div><!-- END of .slider-front-body -->';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="slider-for-home-page">
        [field_image_slider]
        [field_video_embed]
    <div class="slider-text-box">
	[title]
        [body]
    </div><!-- END of .slider-text-box">
</div><!-- END of .slider-for-home-page -->
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: slide order (field_slide_order) */
  $handler->display->display_options['sorts']['field_slide_order_value']['id'] = 'field_slide_order_value';
  $handler->display->display_options['sorts']['field_slide_order_value']['table'] = 'field_data_field_slide_order';
  $handler->display->display_options['sorts']['field_slide_order_value']['field'] = 'field_slide_order_value';
  $handler->display->display_options['path'] = 'homepage-slider';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Slider Test';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Mobile View */
  $handler = $view->new_display('block', 'Mobile View', 'block_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image Slider */
  $handler->display->display_options['fields']['field_image_slider']['id'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider']['table'] = 'field_data_field_image_slider';
  $handler->display->display_options['fields']['field_image_slider']['field'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider']['label'] = '';
  $handler->display->display_options['fields']['field_image_slider']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_slider']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_slider']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_slider']['type'] = 'single_image';
  $handler->display->display_options['fields']['field_image_slider']['settings'] = array(
    'image_style' => 'flexslider_video_preview',
    'image_link' => '',
    'single_image_delta' => '',
  );
  $handler->display->display_options['fields']['field_image_slider']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="slider-front-title">[title]</div><!-- END of .slider-front-title -->';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="slider-front-body">[body]</div><!-- END of .slider-front-body -->';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: video embed */
  $handler->display->display_options['fields']['field_video_embed']['id'] = 'field_video_embed';
  $handler->display->display_options['fields']['field_video_embed']['table'] = 'field_data_field_video_embed';
  $handler->display->display_options['fields']['field_video_embed']['field'] = 'field_video_embed';
  $handler->display->display_options['fields']['field_video_embed']['label'] = '';
  $handler->display->display_options['fields']['field_video_embed']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_video_embed']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_video_embed']['alter']['text'] = '<div class="slider-front-video">[field_video_embed]</div><!-- END of .slider-front-video -->';
  $handler->display->display_options['fields']['field_video_embed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_embed']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_video_embed']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: slider link */
  $handler->display->display_options['fields']['field_slider_link']['id'] = 'field_slider_link';
  $handler->display->display_options['fields']['field_slider_link']['table'] = 'field_data_field_slider_link';
  $handler->display->display_options['fields']['field_slider_link']['field'] = 'field_slider_link';
  $handler->display->display_options['fields']['field_slider_link']['label'] = '';
  $handler->display->display_options['fields']['field_slider_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slider_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_slider_link']['alter']['text'] = '<div class="slider-front-link">[field_slider_link]</div><!-- END of .slider-front-link -->';
  $handler->display->display_options['fields']['field_slider_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slider_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_slider_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_slider_link']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_slider_link']['multi_type'] = 'ul';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="slider-for-home-page">
        [field_image_slider]
        [field_video_embed]
    <div class="slider-text-box">
	[title]
        [body]
        [field_slider_link]
    </div><!-- END of .slider-text-box">
</div><!-- END of .slider-for-home-page -->
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $export['homepage_slider'] = $view;

  $view = new view();
  $view->name = 'image_engine';
  $view->description = 'Generates all image styles for front page slider 2016.';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = 'image-engine';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'image-engine';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Image Slider */
  $handler->display->display_options['fields']['field_image_slider']['id'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider']['table'] = 'field_data_field_image_slider';
  $handler->display->display_options['fields']['field_image_slider']['field'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider']['label'] = 'Front Page Slider 2016';
  $handler->display->display_options['fields']['field_image_slider']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_slider']['settings'] = array(
    'image_style' => 'front_page_slider_2016',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_slider']['delta_offset'] = '0';
  /* Field: Content: Image Slider */
  $handler->display->display_options['fields']['field_image_slider_1']['id'] = 'field_image_slider_1';
  $handler->display->display_options['fields']['field_image_slider_1']['table'] = 'field_data_field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_1']['field'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_1']['label'] = 'Front Page Slider 2016 20em 1x';
  $handler->display->display_options['fields']['field_image_slider_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_slider_1']['settings'] = array(
    'image_style' => 'front_page_slider_2016_custom_user_max_width_20em_1x',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_slider_1']['delta_offset'] = '0';
  /* Field: Content: Image Slider */
  $handler->display->display_options['fields']['field_image_slider_2']['id'] = 'field_image_slider_2';
  $handler->display->display_options['fields']['field_image_slider_2']['table'] = 'field_data_field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_2']['field'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_2']['label'] = 'Front Page Slider 2016 20em 2x';
  $handler->display->display_options['fields']['field_image_slider_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_slider_2']['settings'] = array(
    'image_style' => 'front_page_slider_2016_custom_user_max_width_20em_2x',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_slider_2']['delta_offset'] = '0';
  /* Field: Content: Image Slider */
  $handler->display->display_options['fields']['field_image_slider_3']['id'] = 'field_image_slider_3';
  $handler->display->display_options['fields']['field_image_slider_3']['table'] = 'field_data_field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_3']['field'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_3']['label'] = 'Front Page Slider 2016 30em 1x';
  $handler->display->display_options['fields']['field_image_slider_3']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_slider_3']['settings'] = array(
    'image_style' => 'front_page_slider_2016_custom_user_max_width_30em_1x',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_slider_3']['delta_offset'] = '0';
  /* Field: Content: Image Slider */
  $handler->display->display_options['fields']['field_image_slider_4']['id'] = 'field_image_slider_4';
  $handler->display->display_options['fields']['field_image_slider_4']['table'] = 'field_data_field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_4']['field'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_4']['label'] = 'Front Page Slider 2016 30em 2x';
  $handler->display->display_options['fields']['field_image_slider_4']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_slider_4']['settings'] = array(
    'image_style' => 'front_page_slider_2016_custom_user_max_width_30em_2x',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_slider_4']['delta_offset'] = '0';
  /* Field: Content: Image Slider */
  $handler->display->display_options['fields']['field_image_slider_5']['id'] = 'field_image_slider_5';
  $handler->display->display_options['fields']['field_image_slider_5']['table'] = 'field_data_field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_5']['field'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_5']['label'] = 'Front Page Slider 2016 35em 1x';
  $handler->display->display_options['fields']['field_image_slider_5']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_slider_5']['settings'] = array(
    'image_style' => 'front_page_slider_2016_custom_user_max_width_35_4375em_1x',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_slider_5']['delta_offset'] = '0';
  /* Field: Content: Image Slider */
  $handler->display->display_options['fields']['field_image_slider_6']['id'] = 'field_image_slider_6';
  $handler->display->display_options['fields']['field_image_slider_6']['table'] = 'field_data_field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_6']['field'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_6']['label'] = 'Front Page Slider 2016 35em 2x';
  $handler->display->display_options['fields']['field_image_slider_6']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_slider_6']['settings'] = array(
    'image_style' => 'front_page_slider_2016_custom_user_max_width_35_4375em_2x',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_slider_6']['delta_offset'] = '0';
  /* Field: Content: Image Slider */
  $handler->display->display_options['fields']['field_image_slider_7']['id'] = 'field_image_slider_7';
  $handler->display->display_options['fields']['field_image_slider_7']['table'] = 'field_data_field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_7']['field'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_7']['label'] = 'Front Page Slider 2016 40em 1x';
  $handler->display->display_options['fields']['field_image_slider_7']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_slider_7']['settings'] = array(
    'image_style' => 'front_page_slider_2016_custom_user_max_width_40em_1x',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_slider_7']['delta_offset'] = '0';
  /* Field: Content: Image Slider */
  $handler->display->display_options['fields']['field_image_slider_8']['id'] = 'field_image_slider_8';
  $handler->display->display_options['fields']['field_image_slider_8']['table'] = 'field_data_field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_8']['field'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_8']['label'] = 'Front Page Slider 2016 40em 2x';
  $handler->display->display_options['fields']['field_image_slider_8']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_slider_8']['settings'] = array(
    'image_style' => 'front_page_slider_2016_custom_user_max_width_40em_2x',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_slider_8']['delta_offset'] = '0';
  /* Field: Content: Image Slider */
  $handler->display->display_options['fields']['field_image_slider_9']['id'] = 'field_image_slider_9';
  $handler->display->display_options['fields']['field_image_slider_9']['table'] = 'field_data_field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_9']['field'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_9']['label'] = 'Front Page Slider 2016 42em 1x';
  $handler->display->display_options['fields']['field_image_slider_9']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_slider_9']['settings'] = array(
    'image_style' => 'front_page_slider_2016_custom_user_max_width_42_5em_1x',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_slider_9']['delta_offset'] = '0';
  /* Field: Content: Image Slider */
  $handler->display->display_options['fields']['field_image_slider_11']['id'] = 'field_image_slider_11';
  $handler->display->display_options['fields']['field_image_slider_11']['table'] = 'field_data_field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_11']['field'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_11']['label'] = 'Front Page Slider 2016 42em 2x';
  $handler->display->display_options['fields']['field_image_slider_11']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_slider_11']['settings'] = array(
    'image_style' => 'front_page_slider_2016_custom_user_max_width_42_5em_2x',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_slider_11']['delta_offset'] = '0';
  /* Field: Content: Image Slider */
  $handler->display->display_options['fields']['field_image_slider_10']['id'] = 'field_image_slider_10';
  $handler->display->display_options['fields']['field_image_slider_10']['table'] = 'field_data_field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_10']['field'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_10']['label'] = 'Front Page Slider 2016 50em 1x';
  $handler->display->display_options['fields']['field_image_slider_10']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_slider_10']['settings'] = array(
    'image_style' => 'front_page_slider_2016_custom_user_max_width_50em_1x',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_slider_10']['delta_offset'] = '0';
  /* Field: Content: Image Slider */
  $handler->display->display_options['fields']['field_image_slider_12']['id'] = 'field_image_slider_12';
  $handler->display->display_options['fields']['field_image_slider_12']['table'] = 'field_data_field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_12']['field'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_12']['label'] = 'Front Page Slider 2016 50em 2x';
  $handler->display->display_options['fields']['field_image_slider_12']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_slider_12']['settings'] = array(
    'image_style' => 'front_page_slider_2016_custom_user_max_width_50em_2x',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_slider_12']['delta_offset'] = '0';
  /* Field: Content: Image Slider */
  $handler->display->display_options['fields']['field_image_slider_13']['id'] = 'field_image_slider_13';
  $handler->display->display_options['fields']['field_image_slider_13']['table'] = 'field_data_field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_13']['field'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_13']['label'] = 'Front Page Slider 2016 56.25em 1x';
  $handler->display->display_options['fields']['field_image_slider_13']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_slider_13']['settings'] = array(
    'image_style' => 'front_page_slider_2016_custom_user_max_width_56_25em_1x',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_slider_13']['delta_offset'] = '0';
  /* Field: Content: Image Slider */
  $handler->display->display_options['fields']['field_image_slider_14']['id'] = 'field_image_slider_14';
  $handler->display->display_options['fields']['field_image_slider_14']['table'] = 'field_data_field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_14']['field'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_14']['label'] = 'Front Page Slider 2016 56.25em 2x';
  $handler->display->display_options['fields']['field_image_slider_14']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_slider_14']['settings'] = array(
    'image_style' => 'front_page_slider_2016_custom_user_max_width_56_25em_2x',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_slider_14']['delta_offset'] = '0';
  /* Field: Content: Image Slider */
  $handler->display->display_options['fields']['field_image_slider_15']['id'] = 'field_image_slider_15';
  $handler->display->display_options['fields']['field_image_slider_15']['table'] = 'field_data_field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_15']['field'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_15']['label'] = 'Front Page Slider 2016 56.26em 1x';
  $handler->display->display_options['fields']['field_image_slider_15']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_slider_15']['settings'] = array(
    'image_style' => 'front_page_slider_2016_custom_user_min_width_56_26em_1x',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_slider_15']['delta_offset'] = '0';
  /* Field: Content: Image Slider */
  $handler->display->display_options['fields']['field_image_slider_16']['id'] = 'field_image_slider_16';
  $handler->display->display_options['fields']['field_image_slider_16']['table'] = 'field_data_field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_16']['field'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_16']['label'] = 'Front Page Slider 2016 56.26em 2x';
  $handler->display->display_options['fields']['field_image_slider_16']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_slider_16']['settings'] = array(
    'image_style' => 'front_page_slider_2016_custom_user_min_width_56_26em_2x',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_slider_16']['delta_offset'] = '0';
  /* Field: Content: Image Slider */
  $handler->display->display_options['fields']['field_image_slider_17']['id'] = 'field_image_slider_17';
  $handler->display->display_options['fields']['field_image_slider_17']['table'] = 'field_data_field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_17']['field'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_17']['label'] = 'Front Page Slider 2016 78em 1x';
  $handler->display->display_options['fields']['field_image_slider_17']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_slider_17']['settings'] = array(
    'image_style' => 'front_page_slider_2016_custom_user_min_width_78_125em_1x',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_slider_17']['delta_offset'] = '0';
  /* Field: Content: Image Slider */
  $handler->display->display_options['fields']['field_image_slider_18']['id'] = 'field_image_slider_18';
  $handler->display->display_options['fields']['field_image_slider_18']['table'] = 'field_data_field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_18']['field'] = 'field_image_slider';
  $handler->display->display_options['fields']['field_image_slider_18']['label'] = 'Front Page Slider 2016 78em 2x';
  $handler->display->display_options['fields']['field_image_slider_18']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_slider_18']['settings'] = array(
    'image_style' => 'front_page_slider_2016_custom_user_min_width_78_125em_2x',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image_slider_18']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slider_content' => 'slider_content',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node/image-engine';
  $export['image_engine'] = $view;

  return $export;
}
