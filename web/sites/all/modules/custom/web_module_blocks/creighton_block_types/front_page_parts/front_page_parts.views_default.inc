<?php
/**
 * @file
 * front_page_parts.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function front_page_parts_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'front_page_e';
  $view->description = 'A content type of major front page text elements (after slider)';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Front Page Elements View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Front Page Elements';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Front Page Order (field_front_page_order) */
  $handler->display->display_options['sorts']['field_front_page_order_value']['id'] = 'field_front_page_order_value';
  $handler->display->display_options['sorts']['field_front_page_order_value']['table'] = 'field_data_field_front_page_order';
  $handler->display->display_options['sorts']['field_front_page_order_value']['field'] = 'field_front_page_order_value';
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
    'front_page_elements' => 'front_page_elements',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  /* Filter criterion: Content: Front Page Order (field_front_page_order) */
  $handler->display->display_options['filters']['field_front_page_order_value']['id'] = 'field_front_page_order_value';
  $handler->display->display_options['filters']['field_front_page_order_value']['table'] = 'field_data_field_front_page_order';
  $handler->display->display_options['filters']['field_front_page_order_value']['field'] = 'field_front_page_order_value';
  $handler->display->display_options['filters']['field_front_page_order_value']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Headline */
  $handler = $view->new_display('block', 'Headline', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'front-page-elements-headline';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  /* Field: Content: Subhead */
  $handler->display->display_options['fields']['field_subhead']['id'] = 'field_subhead';
  $handler->display->display_options['fields']['field_subhead']['table'] = 'field_data_field_subhead';
  $handler->display->display_options['fields']['field_subhead']['field'] = 'field_subhead';
  $handler->display->display_options['fields']['field_subhead']['label'] = '';
  $handler->display->display_options['fields']['field_subhead']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'front_page_elements' => 'front_page_elements',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  /* Filter criterion: Content: Front Page Order (field_front_page_order) */
  $handler->display->display_options['filters']['field_front_page_order_value']['id'] = 'field_front_page_order_value';
  $handler->display->display_options['filters']['field_front_page_order_value']['table'] = 'field_data_field_front_page_order';
  $handler->display->display_options['filters']['field_front_page_order_value']['field'] = 'field_front_page_order_value';
  $handler->display->display_options['filters']['field_front_page_order_value']['operator'] = 'not empty';
  /* Filter criterion: Content: Front Page Element Type (field_front_page_element_type) */
  $handler->display->display_options['filters']['field_front_page_element_type_value']['id'] = 'field_front_page_element_type_value';
  $handler->display->display_options['filters']['field_front_page_element_type_value']['table'] = 'field_data_field_front_page_element_type';
  $handler->display->display_options['filters']['field_front_page_element_type_value']['field'] = 'field_front_page_element_type_value';
  $handler->display->display_options['filters']['field_front_page_element_type_value']['value'] = array(
    'head-and-sub-head' => 'head-and-sub-head',
  );

  /* Display: Featured Content */
  $handler = $view->new_display('block', 'Featured Content', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'front-page-elements-featured-content';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_featured_content_image']['id'] = 'field_featured_content_image';
  $handler->display->display_options['fields']['field_featured_content_image']['table'] = 'field_data_field_featured_content_image';
  $handler->display->display_options['fields']['field_featured_content_image']['field'] = 'field_featured_content_image';
  $handler->display->display_options['fields']['field_featured_content_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_content_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_content_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_content_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  /* Field: Content: Subhead */
  $handler->display->display_options['fields']['field_subhead']['id'] = 'field_subhead';
  $handler->display->display_options['fields']['field_subhead']['table'] = 'field_data_field_subhead';
  $handler->display->display_options['fields']['field_subhead']['field'] = 'field_subhead';
  $handler->display->display_options['fields']['field_subhead']['label'] = '';
  $handler->display->display_options['fields']['field_subhead']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: FP Elements Link Text */
  $handler->display->display_options['fields']['field_fp_elements_link_text']['id'] = 'field_fp_elements_link_text';
  $handler->display->display_options['fields']['field_fp_elements_link_text']['table'] = 'field_data_field_fp_elements_link_text';
  $handler->display->display_options['fields']['field_fp_elements_link_text']['field'] = 'field_fp_elements_link_text';
  $handler->display->display_options['fields']['field_fp_elements_link_text']['exclude'] = TRUE;
  /* Field: Content: FP Elements Link Type */
  $handler->display->display_options['fields']['field_fp_elements_link_type']['id'] = 'field_fp_elements_link_type';
  $handler->display->display_options['fields']['field_fp_elements_link_type']['table'] = 'field_data_field_fp_elements_link_type';
  $handler->display->display_options['fields']['field_fp_elements_link_type']['field'] = 'field_fp_elements_link_type';
  $handler->display->display_options['fields']['field_fp_elements_link_type']['label'] = '';
  $handler->display->display_options['fields']['field_fp_elements_link_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fp_elements_link_type']['element_label_colon'] = FALSE;
  /* Field: Content: FP Elements Internal Link */
  $handler->display->display_options['fields']['field_fp_elements_internal_link']['id'] = 'field_fp_elements_internal_link';
  $handler->display->display_options['fields']['field_fp_elements_internal_link']['table'] = 'field_data_field_fp_elements_internal_link';
  $handler->display->display_options['fields']['field_fp_elements_internal_link']['field'] = 'field_fp_elements_internal_link';
  $handler->display->display_options['fields']['field_fp_elements_internal_link']['label'] = '';
  $handler->display->display_options['fields']['field_fp_elements_internal_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fp_elements_internal_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fp_elements_internal_link']['alter']['text'] = 'node/[field_fp_elements_internal_link-target_id]';
  $handler->display->display_options['fields']['field_fp_elements_internal_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fp_elements_internal_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_fp_elements_internal_link']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: FP Elements External Link */
  $handler->display->display_options['fields']['field_fp_elements_external_link']['id'] = 'field_fp_elements_external_link';
  $handler->display->display_options['fields']['field_fp_elements_external_link']['table'] = 'field_data_field_fp_elements_external_link';
  $handler->display->display_options['fields']['field_fp_elements_external_link']['field'] = 'field_fp_elements_external_link';
  $handler->display->display_options['fields']['field_fp_elements_external_link']['label'] = '';
  $handler->display->display_options['fields']['field_fp_elements_external_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fp_elements_external_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fp_elements_external_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_fp_elements_external_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_fp_elements_external_link']['type'] = 'link_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[field_fp_elements_internal_link][field_fp_elements_external_link]">[field_fp_elements_link_text]</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'front_page_elements' => 'front_page_elements',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  /* Filter criterion: Content: Front Page Order (field_front_page_order) */
  $handler->display->display_options['filters']['field_front_page_order_value']['id'] = 'field_front_page_order_value';
  $handler->display->display_options['filters']['field_front_page_order_value']['table'] = 'field_data_field_front_page_order';
  $handler->display->display_options['filters']['field_front_page_order_value']['field'] = 'field_front_page_order_value';
  $handler->display->display_options['filters']['field_front_page_order_value']['operator'] = 'not empty';
  /* Filter criterion: Content: Front Page Element Type (field_front_page_element_type) */
  $handler->display->display_options['filters']['field_front_page_element_type_value']['id'] = 'field_front_page_element_type_value';
  $handler->display->display_options['filters']['field_front_page_element_type_value']['table'] = 'field_data_field_front_page_element_type';
  $handler->display->display_options['filters']['field_front_page_element_type_value']['field'] = 'field_front_page_element_type_value';
  $handler->display->display_options['filters']['field_front_page_element_type_value']['value'] = array(
    'featured' => 'featured',
  );
  $handler->display->display_options['filters']['field_front_page_element_type_value']['reduce_duplicates'] = TRUE;

  /* Display: Front Page Summary */
  $handler = $view->new_display('block', 'Front Page Summary', 'block_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'front-page-elements-summary';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Headline */
  $handler->display->display_options['fields']['field_headline']['id'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['table'] = 'field_data_field_headline';
  $handler->display->display_options['fields']['field_headline']['field'] = 'field_headline';
  $handler->display->display_options['fields']['field_headline']['label'] = '';
  $handler->display->display_options['fields']['field_headline']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_headline']['element_label_colon'] = FALSE;
  /* Field: Content: Subhead */
  $handler->display->display_options['fields']['field_subhead']['id'] = 'field_subhead';
  $handler->display->display_options['fields']['field_subhead']['table'] = 'field_data_field_subhead';
  $handler->display->display_options['fields']['field_subhead']['field'] = 'field_subhead';
  $handler->display->display_options['fields']['field_subhead']['label'] = '';
  $handler->display->display_options['fields']['field_subhead']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subhead']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: FP Elements Link Text */
  $handler->display->display_options['fields']['field_fp_elements_link_text']['id'] = 'field_fp_elements_link_text';
  $handler->display->display_options['fields']['field_fp_elements_link_text']['table'] = 'field_data_field_fp_elements_link_text';
  $handler->display->display_options['fields']['field_fp_elements_link_text']['field'] = 'field_fp_elements_link_text';
  $handler->display->display_options['fields']['field_fp_elements_link_text']['exclude'] = TRUE;
  /* Field: Content: FP Elements Link Type */
  $handler->display->display_options['fields']['field_fp_elements_link_type']['id'] = 'field_fp_elements_link_type';
  $handler->display->display_options['fields']['field_fp_elements_link_type']['table'] = 'field_data_field_fp_elements_link_type';
  $handler->display->display_options['fields']['field_fp_elements_link_type']['field'] = 'field_fp_elements_link_type';
  $handler->display->display_options['fields']['field_fp_elements_link_type']['label'] = '';
  $handler->display->display_options['fields']['field_fp_elements_link_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fp_elements_link_type']['element_label_colon'] = FALSE;
  /* Field: Content: FP Elements Internal Link */
  $handler->display->display_options['fields']['field_fp_elements_internal_link']['id'] = 'field_fp_elements_internal_link';
  $handler->display->display_options['fields']['field_fp_elements_internal_link']['table'] = 'field_data_field_fp_elements_internal_link';
  $handler->display->display_options['fields']['field_fp_elements_internal_link']['field'] = 'field_fp_elements_internal_link';
  $handler->display->display_options['fields']['field_fp_elements_internal_link']['label'] = '';
  $handler->display->display_options['fields']['field_fp_elements_internal_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fp_elements_internal_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_fp_elements_internal_link']['alter']['text'] = 'node/[field_fp_elements_internal_link-target_id]';
  $handler->display->display_options['fields']['field_fp_elements_internal_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fp_elements_internal_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_fp_elements_internal_link']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: FP Elements External Link */
  $handler->display->display_options['fields']['field_fp_elements_external_link']['id'] = 'field_fp_elements_external_link';
  $handler->display->display_options['fields']['field_fp_elements_external_link']['table'] = 'field_data_field_fp_elements_external_link';
  $handler->display->display_options['fields']['field_fp_elements_external_link']['field'] = 'field_fp_elements_external_link';
  $handler->display->display_options['fields']['field_fp_elements_external_link']['label'] = '';
  $handler->display->display_options['fields']['field_fp_elements_external_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_fp_elements_external_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_fp_elements_external_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_fp_elements_external_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_fp_elements_external_link']['type'] = 'link_plain';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_featured_content_image']['id'] = 'field_featured_content_image';
  $handler->display->display_options['fields']['field_featured_content_image']['table'] = 'field_data_field_featured_content_image';
  $handler->display->display_options['fields']['field_featured_content_image']['field'] = 'field_featured_content_image';
  $handler->display->display_options['fields']['field_featured_content_image']['label'] = '';
  $handler->display->display_options['fields']['field_featured_content_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_content_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_featured_content_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_featured_content_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="fp-summary-headline">[field_headline]</div>
<div class="summary-left">
<div class="fp-summary-body">[field_featured_content_image][body]</div>
<div class="fp-summary-link"><a href="[field_fp_elements_internal_link][field_fp_elements_external_link]">[field_fp_elements_link_text]</a></div>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'front_page_elements' => 'front_page_elements',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';
  /* Filter criterion: Content: Front Page Order (field_front_page_order) */
  $handler->display->display_options['filters']['field_front_page_order_value']['id'] = 'field_front_page_order_value';
  $handler->display->display_options['filters']['field_front_page_order_value']['table'] = 'field_data_field_front_page_order';
  $handler->display->display_options['filters']['field_front_page_order_value']['field'] = 'field_front_page_order_value';
  $handler->display->display_options['filters']['field_front_page_order_value']['operator'] = 'not empty';
  /* Filter criterion: Content: Front Page Element Type (field_front_page_element_type) */
  $handler->display->display_options['filters']['field_front_page_element_type_value']['id'] = 'field_front_page_element_type_value';
  $handler->display->display_options['filters']['field_front_page_element_type_value']['table'] = 'field_data_field_front_page_element_type';
  $handler->display->display_options['filters']['field_front_page_element_type_value']['field'] = 'field_front_page_element_type_value';
  $handler->display->display_options['filters']['field_front_page_element_type_value']['value'] = array(
    'summary' => 'summary',
  );
  $handler->display->display_options['filters']['field_front_page_element_type_value']['reduce_duplicates'] = TRUE;
  $export['front_page_e'] = $view;

  $view = new view();
  $view->name = 'icon_btn_with_text_view';
  $view->description = 'For placing the Icon Button with Text';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Icon Btn with Text view';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Icon Btn Image */
  $handler->display->display_options['fields']['field_icon_btn_image']['id'] = 'field_icon_btn_image';
  $handler->display->display_options['fields']['field_icon_btn_image']['table'] = 'field_data_field_icon_btn_image';
  $handler->display->display_options['fields']['field_icon_btn_image']['field'] = 'field_icon_btn_image';
  $handler->display->display_options['fields']['field_icon_btn_image']['label'] = '';
  $handler->display->display_options['fields']['field_icon_btn_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_icon_btn_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icon_btn_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_icon_btn_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Icon Btn Link Text */
  $handler->display->display_options['fields']['field_icon_btn_link_text']['id'] = 'field_icon_btn_link_text';
  $handler->display->display_options['fields']['field_icon_btn_link_text']['table'] = 'field_data_field_icon_btn_link_text';
  $handler->display->display_options['fields']['field_icon_btn_link_text']['field'] = 'field_icon_btn_link_text';
  $handler->display->display_options['fields']['field_icon_btn_link_text']['label'] = '';
  $handler->display->display_options['fields']['field_icon_btn_link_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_icon_btn_link_text']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_icon_btn_link_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icon_btn_link_text']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_icon_btn_link_text']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Icon Btn Link External */
  $handler->display->display_options['fields']['field_icon_btn_link_external']['id'] = 'field_icon_btn_link_external';
  $handler->display->display_options['fields']['field_icon_btn_link_external']['table'] = 'field_data_field_icon_btn_link_external';
  $handler->display->display_options['fields']['field_icon_btn_link_external']['field'] = 'field_icon_btn_link_external';
  $handler->display->display_options['fields']['field_icon_btn_link_external']['label'] = '';
  $handler->display->display_options['fields']['field_icon_btn_link_external']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_icon_btn_link_external']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icon_btn_link_external']['click_sort_column'] = 'url';
  /* Field: Content: Icon Btn Link Internal */
  $handler->display->display_options['fields']['field_icon_btn_link_internal']['id'] = 'field_icon_btn_link_internal';
  $handler->display->display_options['fields']['field_icon_btn_link_internal']['table'] = 'field_data_field_icon_btn_link_internal';
  $handler->display->display_options['fields']['field_icon_btn_link_internal']['field'] = 'field_icon_btn_link_internal';
  $handler->display->display_options['fields']['field_icon_btn_link_internal']['label'] = '';
  $handler->display->display_options['fields']['field_icon_btn_link_internal']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_icon_btn_link_internal']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_icon_btn_link_internal']['alter']['text'] = '/node/[field_icon_btn_link_internal]';
  $handler->display->display_options['fields']['field_icon_btn_link_internal']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icon_btn_link_internal']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_icon_btn_link_internal']['settings'] = array(
    'link' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="icon-button-with-text-wrapper"><a class="icon-button-with-text" href="[field_icon_btn_link_external][field_icon_btn_link_internal]">
<div class="icon-button-item">[field_icon_btn_image]</div>
<div class="icon-button-item">[field_icon_btn_link_text]</div>
</a></div><!-- .icon-button-with-text-wrapper -->';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'icon_button_with_text' => 'icon_button_with_text',
  );

  /* Display: Icon btn view */
  $handler = $view->new_display('block', 'Icon btn view', 'block');
  $export['icon_btn_with_text_view'] = $view;

  return $export;
}
