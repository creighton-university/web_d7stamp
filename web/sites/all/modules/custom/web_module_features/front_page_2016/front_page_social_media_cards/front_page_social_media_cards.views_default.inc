<?php
/**
 * @file
 * front_page_social_media_cards.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function front_page_social_media_cards_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'fp_social_media_card_gallery';
  $view->description = '';
  $view->tag = 'Front Page';
  $view->base_table = 'node';
  $view->human_name = 'FP Social Media Card Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'FP Social Media Card Gallery';
  $handler->display->display_options['css_class'] = 'fp-soc-med-card';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'css';
  $handler->display->display_options['header']['area']['content'] = '<style>
.view-fp-social-media-card-gallery {
    max-width: 500px;
}
.fp-smc {   
display: block;
width: 225px;
height: 225px;
float: left;
margin: 10px;
background-size: 85%;
background-repeat: no-repeat;
background-position: center;
}
a .fp-smc .fp-smc-body {
    color: white;
    text-decoration: none;
    font-family: "OpenSans-Regular", sans-serif;
    padding: 15px;
}
a .fp-smc .fp-smc-body:hover {
    color: white;
    text-decoration: underline;
}
.view-fp-social-media-card-gallery .fp-smc-icon {
    background-image:url("sites/all/themes/custom/web_themes/creighton_2016/images/png/social-media-white-icons-01.png");
/*    background-image:none, url("sites/all/themes/custom/web_themes/creighton_2016/images/svgs/social-media-white-icons-01.svg"); */
    background-repeat: no-repeat;
    background-size: 126px;
    height: 42px;
    width: 42px;
    margin: 14px;   
}
.view-fp-social-media-card-gallery .instagram  .fp-smc-icon {
    background-position: -84px 0;
}
.view-fp-social-media-card-gallery .facebook  .fp-smc-icon {
    background-position: 0 0;   
}
.view-fp-social-media-card-gallery .twitter  .fp-smc-icon {
    background-position: -42px 0;   
}   
.view-fp-social-media-card-gallery .facebook  .fp-smc-body,
 .view-fp-social-media-card-gallery .twitter  .fp-smc-body {
    background-repeat: no-repeat;
    margin-top: 14px;
    margin-left: 14px;
    padding: 0 15px 15px 0px;
    font-size: 18px;
    line-height: 22px;
    }
@media (min-width: 768px) { 
    .view-fp-social-media-card-gallery .controls {
        display: none;
    }
}
@media (max-width: 767px) {

    .view-fp-social-media-card-gallery .controls > div {
        background-image:url("sites/all/themes/custom/web_themes/creighton_2016/images/png/mobile-content-arrows-01.png");
/*        background-image: none, url("sites/all/themes/custom/web_themes/creighton_2016/images/svgs/mobile-content-arrows-01.svg"); */
        width: 54px;
        height: 54px;
        background-size: 108px;
        display: inline-block;
    }
    .view-fp-social-media-card-gallery .controls .previous {
        background-position: 0px 54px;
    }
    .view-fp-social-media-card-gallery .controls .next {
        background-position: -54px 54px;
    }
    .view-fp-social-media-card-gallery  .fs-carousel-item {
    	max-width: 275px;
    }
}
@media (min-width: 768px)  and (max-width: 1250px) {
	.view-fp-social-media-card-gallery {
  		max-width: initial !important;
	}
	.view-fp-social-media-card-gallery .fs-carousel-container {
		display: flex;
		justify-content: center;
	}
    .fp-social-media-cards-container {
        float: left;
        width: 100%;
        }
    .view-fp-social-media-card-gallery .fs-carousel-container .fs-carousel-canister {
        display: block; /* for browsers without flexbox support */
        display: flex;
        justify-content: space-between;
        width: 743px;    
        }   
    .fp-smc {
    	height: 175px !important;
    	width: 175px !important;
    	margin: 0 !important;
    }  
    .view-fp-social-media-card-gallery .fp-smc-icon {
    	background-size: 108px;
    	height: 36px;
    	width: 36px;
    	margin: 10px 0 0 10px;
    }  
    .view-fp-social-media-card-gallery .twitter .fp-smc-icon {
    	background-position: -36px 0;
    }
    .view-fp-social-media-card-gallery .instagram .fp-smc-icon {
    background-position: -72px 0;
	}
	.view-fp-social-media-card-gallery .facebook .fp-smc-icon {
    background-position: 0 0;
	}
	 .view-fp-social-media-card-gallery .facebook  .fp-smc-body,
 .view-fp-social-media-card-gallery .twitter  .fp-smc-body {
	 margin-top: 8px;
	 margin-left: 10px;
	 padding 0 8px 8 px 0;
	 font-size: 14px;
	 line-height: 18px;
	 }
}
</style>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php

drupal_add_css("sites/all/themes/custom/web_themes/creighton_2016/css/carousel.css");

?>';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'carousel controls';
  $handler->display->display_options['footer']['area']['content'] = '<div class="controls">
	<div class="previous"></div>
	<div class="next"></div>
</div>
';
  $handler->display->display_options['footer']['area']['format'] = 'full_html_plus_media';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: FP SMC Body */
  $handler->display->display_options['fields']['field_fp_smc_body']['id'] = 'field_fp_smc_body';
  $handler->display->display_options['fields']['field_fp_smc_body']['table'] = 'field_data_field_fp_smc_body';
  $handler->display->display_options['fields']['field_fp_smc_body']['field'] = 'field_fp_smc_body';
  $handler->display->display_options['fields']['field_fp_smc_body']['label'] = '';
  $handler->display->display_options['fields']['field_fp_smc_body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fp_smc_body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fp_smc_body']['type'] = 'text_plain';
  /* Field: Content: FP SMC Color */
  $handler->display->display_options['fields']['field_fp_smc_color']['id'] = 'field_fp_smc_color';
  $handler->display->display_options['fields']['field_fp_smc_color']['table'] = 'field_data_field_fp_smc_color';
  $handler->display->display_options['fields']['field_fp_smc_color']['field'] = 'field_fp_smc_color';
  $handler->display->display_options['fields']['field_fp_smc_color']['label'] = '';
  $handler->display->display_options['fields']['field_fp_smc_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fp_smc_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fp_smc_color']['type'] = 'list_key';
  /* Field: Content: FP SMC Link */
  $handler->display->display_options['fields']['field_fp_smc_link']['id'] = 'field_fp_smc_link';
  $handler->display->display_options['fields']['field_fp_smc_link']['table'] = 'field_data_field_fp_smc_link';
  $handler->display->display_options['fields']['field_fp_smc_link']['field'] = 'field_fp_smc_link';
  $handler->display->display_options['fields']['field_fp_smc_link']['label'] = '';
  $handler->display->display_options['fields']['field_fp_smc_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fp_smc_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fp_smc_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_fp_smc_link']['type'] = 'link_plain';
  /* Field: Content: FP SMC Order */
  $handler->display->display_options['fields']['field_fp_smc_order']['id'] = 'field_fp_smc_order';
  $handler->display->display_options['fields']['field_fp_smc_order']['table'] = 'field_data_field_fp_smc_order';
  $handler->display->display_options['fields']['field_fp_smc_order']['field'] = 'field_fp_smc_order';
  $handler->display->display_options['fields']['field_fp_smc_order']['label'] = '';
  $handler->display->display_options['fields']['field_fp_smc_order']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fp_smc_order']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fp_smc_order']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_fp_smc_order']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: FP SMC Social Media */
  $handler->display->display_options['fields']['field_fp_smc_social_media']['id'] = 'field_fp_smc_social_media';
  $handler->display->display_options['fields']['field_fp_smc_social_media']['table'] = 'field_data_field_fp_smc_social_media';
  $handler->display->display_options['fields']['field_fp_smc_social_media']['field'] = 'field_fp_smc_social_media';
  $handler->display->display_options['fields']['field_fp_smc_social_media']['label'] = '';
  $handler->display->display_options['fields']['field_fp_smc_social_media']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fp_smc_social_media']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fp_smc_social_media']['type'] = 'list_key';
  /* Field: Content: FP SMC Image */
  $handler->display->display_options['fields']['field_fp_smc_image']['id'] = 'field_fp_smc_image';
  $handler->display->display_options['fields']['field_fp_smc_image']['table'] = 'field_data_field_fp_smc_image';
  $handler->display->display_options['fields']['field_fp_smc_image']['field'] = 'field_fp_smc_image';
  $handler->display->display_options['fields']['field_fp_smc_image']['label'] = '';
  $handler->display->display_options['fields']['field_fp_smc_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fp_smc_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_fp_smc_image']['settings'] = array(
    'image_style' => 'social_media_cards',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="fp-smc [field_fp_smc_color] [field_fp_smc_social_media]" id="fp-smc-[field_fp_smc_order]" style="background-color: #[field_fp_smc_color]; background-image: url([field_fp_smc_image])" >
	[field_fp_smc_body]
</div> <!-- END of .fp-smc .[field_fp_smc_color] .[field_fp_smc_social_media] #fp-smc-[field_fp_smc_order] -->';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: FP SMC Order (field_fp_smc_order) */
  $handler->display->display_options['sorts']['field_fp_smc_order_value']['id'] = 'field_fp_smc_order_value';
  $handler->display->display_options['sorts']['field_fp_smc_order_value']['table'] = 'field_data_field_fp_smc_order';
  $handler->display->display_options['sorts']['field_fp_smc_order_value']['field'] = 'field_fp_smc_order_value';
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
    'fp_social_media_cards' => 'fp_social_media_cards',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'fp-smc';
  $export['fp_social_media_card_gallery'] = $view;

  return $export;
}
