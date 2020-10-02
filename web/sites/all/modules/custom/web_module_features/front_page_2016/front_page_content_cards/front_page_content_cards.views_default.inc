<?php
/**
 * @file
 * front_page_content_cards.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function front_page_content_cards_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'fp_fcc_featured_content_card_gallery';
  $view->description = 'Front page view of published content cards';
  $view->tag = 'Front Page';
  $view->base_table = 'node';
  $view->human_name = 'FP FCC Featured Content Card Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'FP FCC Featured Content Card Gallery';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'css';
  $handler->display->display_options['header']['area']['content'] = '<style>
/* Featured Content Cards */
.view-fp-fcc-featured-content-card-gallery .view-content {
  max-width: 825px;
}

a .fcc {
  color: white;
  text-align: center;
}
.fcc {
  height: 275px;
  width: 275px;
  float: left;
}

.fcc .fcc-side {
  height: 100%;
  background-size: contain;
}
.fcc .fcc-side > h3, 
.fcc .fcc-side > div {
	padding: 0 20px;
} 
.fcc .fcc-side h3 {
  font-size: 24px;
  color: white;
  font-family: "bebas_neueregular";
  margin-top: 20px;
  line-height: 1em;
}
.fcc .fcc-side {
	font-family: OpenSans-Regular, sans-serif;
}
.fcc .fcc-side .image-text-containter {
  position: absolute;
  width: 100%;
  bottom: 0px;
  background-color: rgba(0, 0, 0, .4);
}
.fcc .fcc-side .image-text-containter h3 {
  margin-top: 10px;
}
.fcc .fcc-side .fcc-color-body, .fcc .fcc-side .fcc-image-body {
  font-family: \'OpenSans-Regular\', sans-serif;
  font-size: 17px; 
  line-height: 22px; 
  margin-bottom: 10px;
}
.fcc .fcc-side .link {
  font-size: 18px;
font-family: "OpenSans-Semibold", sans-serif;
background-image: url("data:image/svg+xml;charset=US-ASCII,%3Csvg%20xmlns%3D%22http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg%22%20width%3D%2213%22%20height%3D%2222%22%3E%3Ccircle%20fill%3D%22%23fff%22%20cx%3D%222.202%22%20cy%3D%2219.834%22%20r%3D%222.173%22%2F%3E%3Ccircle%20fill%3D%22%23fff%22%20cx%3D%222.202%22%20cy%3D%222.166%22%20r%3D%222.173%22%2F%3E%3Ccircle%20fill%3D%22%23fff%22%20cx%3D%226.576%22%20cy%3D%226.713%22%20r%3D%222.173%22%2F%3E%3Ccircle%20fill%3D%22%23fff%22%20cx%3D%226.576%22%20cy%3D%2215.46%22%20r%3D%222.172%22%2F%3E%3Ccircle%20fill%3D%22%23fff%22%20cx%3D%2210.798%22%20cy%3D%2211%22%20r%3D%222.173%22%2F%3E%3C%2Fsvg%3E");
background-repeat: no-repeat;
background-position: right center;
display: inline-block;
margin-right: 20px;
line-height: 22px;
text-decoration: none;
}
.fcc .fcc-side .link:hover {
text-decoration: underline;
}
.fcc .fcc-side.FFCC4F, .fcc .fcc-side.FFCC4F h3  {
	color: #002E6D;
}

.fcc .fcc-side.FFCC4F .link {
background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAA0AAAAWCAYAAAAb+hYkAAAABHNCSVQICAgIfAhkiAAAAAlwSFlzAAALEwAACxMBAJqcGAAAAa1JREFUOI2Fkr9LW1EUxz/nPmMaKcpTWh1erYYYNdZZLa9x6KBjO3RwKF26dOko7oKb4j/QpaAOhc5KsfiLCEKg9AdtSDqopXRpQQOChndvh2hI3o2+s53D93Pu98s9Dmn/MV19W7j35um6D/+O9ogoIZ09BHprEyWj/Nj+ehOk0LqzYRIYN+olhchCrTNmi2J3LtoewNDkAwLjVoF3ASl/ElE+mo/83NlvDtXXQPYpwvurt9FMUdr50GjPWmOeNSxVDf01kOFLaMunsMSxoJ7bBwSJOIKD4Q3FniW89lt09z/kjlfh73HZzhSu5MRdWmL7QBLNBYontj3LS+w5kLwM0wrMRUNiTkKTUztTuNzMN+Q8AzKMpgC8tDN54wkSsUVEsmizQcfZHPl8hdR0nNL6BWBaLKitdRZ4Vc0gI5TbjoFlSuvnV5ImmcxgKNRQWNHsc1cAU210gNZrYYmQmo4jZy8Q04kEbynkfjPgj4HyQTYpblsXIaQfrYLMXG7+hegMhVzZtl1vT9cfpPIInImbgCqk1Odap6lg+B4FObjJTSTwMOYPIq8p7eajoP9Dm3tGmP2rewAAAABJRU5ErkJggg==");
}
@media (min-width: 768px) {	
	.view-fp-fcc-featured-content-card-gallery .controls {
		display: none;
        }
}

@media (max-width: 767px) {	
	.view-fp-fcc-featured-content-card-gallery .controls {
		margin-top: 15px;
	}
	.view-fp-fcc-featured-content-card-gallery .controls > div {
		background-image: url("/sites/all/themes/custom/web_themes/creighton_2016/images/svgs/mobile-content-arrows-01.svg");
		width: 54px;
		height: 54px;
		background-size: 108px;
		display: inline-block;
	}
	.view-fp-fcc-featured-content-card-gallery .controls .previous {
		background-position: 0px 54px;
	}
	.view-fp-fcc-featured-content-card-gallery .controls .next {
		background-position: -54px 54px;
	}
    .view-fp-fcc-featured-content-card-gallery {
        width:100%;
    }
    .view-fp-fcc-featured-content-card-gallery .fs-carousel-item {
    	max-width: 275px;
    }
    .fs-carousel-enabled.fs-carousel-contained .fs-carousel-viewport {
    	overflow: visible;
    }    
}
/* tablet styles for fcc cards and 9 schools  */
@media (min-width: 768px) and (max-width:1250px) {
.pane-fp-fcc-featured-content-card-gallery .fs-carousel-canister {
	display: flex;
	flex-direction: column;
	max-height: 600px;
	flex-wrap: wrap;	
}

.pane-fp-fcc-featured-content-card-gallery {
    margin: 10px 0px 40px;
    padding-left: 20px;
    }
    
.view-fp-fcc-featured-content-card-gallery .view-content {
    max-width: unset;
    width: 400px;
}
.fcc {
    height: 200px;
    width: 200px;
 }   
 .fcc .fcc-side > h3, 
.fcc .fcc-side > div {
	padding: 0 8px;
} 
	
.fcc .fcc-side h3 {
    font-size: 20px;
}	
.fcc .fcc-side .link {
    font-size: 16px;
    line-height: 18px;
    padding-right: 0 14px;
    margin-right: 16px;
}
.fcc .fcc-side .fcc-color-body, .fcc .fcc-side .fcc-image-body {
    font-size: 14px;
    line-height: 18px;
	}
}
</style>    
';
  $handler->display->display_options['header']['area']['format'] = 'full_html_plus_media';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Controls';
  $handler->display->display_options['footer']['area']['content'] = '<div class="controls">
	<div class="previous"></div>
	<div class="next"></div>
</div>
';
  $handler->display->display_options['footer']['area']['format'] = 'full_html_plus_media';
  /* Field: Content: FP FCC Color Side Headline */
  $handler->display->display_options['fields']['field_fp_fcc_color_side_headline']['id'] = 'field_fp_fcc_color_side_headline';
  $handler->display->display_options['fields']['field_fp_fcc_color_side_headline']['table'] = 'field_data_field_fp_fcc_color_side_headline';
  $handler->display->display_options['fields']['field_fp_fcc_color_side_headline']['field'] = 'field_fp_fcc_color_side_headline';
  $handler->display->display_options['fields']['field_fp_fcc_color_side_headline']['label'] = '';
  $handler->display->display_options['fields']['field_fp_fcc_color_side_headline']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fp_fcc_color_side_headline']['element_label_colon'] = FALSE;
  /* Field: Content: FP FCC Color Side Body */
  $handler->display->display_options['fields']['field_fp_fcc_color_side_body']['id'] = 'field_fp_fcc_color_side_body';
  $handler->display->display_options['fields']['field_fp_fcc_color_side_body']['table'] = 'field_data_field_fp_fcc_color_side_body';
  $handler->display->display_options['fields']['field_fp_fcc_color_side_body']['field'] = 'field_fp_fcc_color_side_body';
  $handler->display->display_options['fields']['field_fp_fcc_color_side_body']['label'] = '';
  $handler->display->display_options['fields']['field_fp_fcc_color_side_body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fp_fcc_color_side_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fp_fcc_color_side_body']['type'] = 'text_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>[field_fp_fcc_color_side_headline]</h3>
<div>[field_fp_fcc_color_side_body]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: FP FCC Order (field_fp_fcc_order) */
  $handler->display->display_options['sorts']['field_fp_fcc_order_value']['id'] = 'field_fp_fcc_order_value';
  $handler->display->display_options['sorts']['field_fp_fcc_order_value']['table'] = 'field_data_field_fp_fcc_order';
  $handler->display->display_options['sorts']['field_fp_fcc_order_value']['field'] = 'field_fp_fcc_order_value';
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
    'fp_featured_content_cards' => 'fp_featured_content_cards',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'fp-fcc';
  $export['fp_fcc_featured_content_card_gallery'] = $view;

  return $export;
}
