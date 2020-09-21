<?php
/**
 * @file
 * creighton_content_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function creighton_content_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'content_page_tag_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Content Page Tag View';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Courses';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More News';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'filtered_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_select_all_none_nested' => FALSE,
        'bef_term_description' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => 'Default',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'combine' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'row-wrapper';
  $handler->display->display_options['row_plugin'] = 'panels_fields';
  $handler->display->display_options['row_options']['regions'] = array(
    'field_news_image' => 'left',
    'title' => 'right',
    'field_news_short_description' => 'right',
    'body' => 'right',
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'CSS for view';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<!-- News CSS on https://business.creighton.edu/node/378 -->
<!-- should use this CSS as a base for adding to the themes repo -->

<style type="text/css">
  .views-table td {
    border-bottom: 1px dotted #ccc;
  }
.news-image {
  width: 30%;
}
  .views-table .views-field-title, .views-table .views-field-field-news-image-1 {
    padding-top: 1em;
    padding-bottom: 1em;
    vertical-align: top;
  }
  .views-table .views-field-title h4 {
    margin: 0px;
  }
  .views-table .views-field-title p.news-pub-date {
    font-size: 0.8em;
    color: #989898;
    margin: 0.2em 0px;
  }
.newsLink {
  font-family: "bebas_neueregular" !important;
  font-size:24px;
  color:#019cdb;
  text-decoration:none;
}

#edit-combine {
    border: 1px solid;
    border-radius: 3px;
    background-image: url("data:image/svg+xml;charset=US-ASCII,%3Csvg%20xmlns%3D%22http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg%22%20width%3D%2221%22%20height%3D%2221%22%3E%3Cpath%20fill%3D%22%230054a6%22%20d%3D%22M16.057%208.734c0-4.037-3.285-7.322-7.322-7.322s-7.322%203.285-7.322%207.322c0%204.038%203.284%207.322%207.321%207.322s7.323-3.284%207.323-7.322zm-7.323%204.846c-2.672%200-4.845-2.173-4.845-4.845%200-2.671%202.173-4.845%204.845-4.845%202.671%200%204.845%202.173%204.845%204.845%200%202.671-2.174%204.845-4.845%204.845zm10.492%203.894l-3.676-3.675c-.495.665-1.085%201.255-1.751%201.751l3.675%203.675c.242.242.56.363.877.363.315%200%20.633-.121.875-.363.483-.483.483-1.268%200-1.751z%22%2F%3E%3C%2Fsvg%3E");
	background-repeat: no-repeat;
    background-position-x: 98%;
    background-position-y: center;
}

#edit-combine-wrapper {
    padding-right: 10px;
    margin-left: -75px;
}

.views-exposed-widgets {
    display: inline-flex;
    align-items: center;
}

#edit-submit-content-page-tag-view, #edit-reset {
    margin-top: 0;
    font-family: "bebas_neueregular" !important;
    background-color: #0054a6;
    color: white;
    border: 1px solid #0054a6;
    border-radius: 3px;
    letter-spacing: 1.5px;
    font-size: 16px;
    padding: 1px 15px;
}

#edit-combine-wrapper label, #edit-tid-all, #edit-tid-all label {
    display:none;
}

label[for="edit-tid-all"] {
    display: none;
}

#edit-tid-wrapper {
    margin-top: 71px;
}

.view-content-page-tag-view .view-filters {
    margin-top: -39px;
}
</style>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['header']['area_1']['empty'] = TRUE;
  $handler->display->display_options['header']['area_1']['content'] = '<script type=\'text/javascript\'>
Drupal.behaviors.myBehavior = {
  attach: function (context, settings) {
//alert(\'jquery loaded\');
    jQuery("#views-exposed-form-content-page-tag-view-page-1").submit(function() {
//alert(\'hi there\');
      return false;
    });
    jQuery(\'input#edit-reset\').click(function() {
      jQuery(\'input#edit-combine\').val(\'\');
      jQuery(\'input#edit-tid-1\').prop(\'checked\', false);
      jQuery(\'input#edit-submit-content-page-tag-view\').trigger(\'click\');
      return false;
    });
  }
};
</script>';
  $handler->display->display_options['header']['area_1']['format'] = 'full_html_plus_media';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area_2']['id'] = 'area_2';
  $handler->display->display_options['header']['area_2']['table'] = 'views';
  $handler->display->display_options['header']['area_2']['field'] = 'area';
  $handler->display->display_options['header']['area_2']['label'] = 'Header Text';
  $handler->display->display_options['header']['area_2']['content'] = 'Enter keywords to search available courses.';
  $handler->display->display_options['header']['area_2']['format'] = 'filtered_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No matching courses found. Please try a different search or call us at 402.280.2330 to set up a customized program for your organization.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
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
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_content_tags']['id'] = 'field_content_tags';
  $handler->display->display_options['fields']['field_content_tags']['table'] = 'field_data_field_content_tags';
  $handler->display->display_options['fields']['field_content_tags']['field'] = 'field_content_tags';
  $handler->display->display_options['fields']['field_content_tags']['label'] = '';
  $handler->display->display_options['fields']['field_content_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_tags']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'content_page' => 'content_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Tags (field_content_tags) */
  $handler->display->display_options['filters']['field_content_tags_tid']['id'] = 'field_content_tags_tid';
  $handler->display->display_options['filters']['field_content_tags_tid']['table'] = 'field_data_field_content_tags';
  $handler->display->display_options['filters']['field_content_tags_tid']['field'] = 'field_content_tags_tid';
  $handler->display->display_options['filters']['field_content_tags_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_content_tags_tid']['value'] = '';
  $handler->display->display_options['filters']['field_content_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_content_tags_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_content_tags_tid']['vocabulary'] = 'courses';
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    119 => '119',
  );
  $handler->display->display_options['filters']['tid']['group'] = 1;
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Has taxonomy term';
  $handler->display->display_options['filters']['tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_label'] = 'Online';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['tid']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['tid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['tid']['group_info']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Online',
      'operator' => 'or',
      'value' => array(
        119 => '119',
      ),
    ),
    2 => array(),
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'courses';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    5 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'body' => 'body',
    'field_content_tags' => 'field_content_tags',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'frontpage-news-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Short Description */
  $handler->display->display_options['fields']['field_news_short_description']['id'] = 'field_news_short_description';
  $handler->display->display_options['fields']['field_news_short_description']['table'] = 'field_data_field_news_short_description';
  $handler->display->display_options['fields']['field_news_short_description']['field'] = 'field_news_short_description';
  $handler->display->display_options['fields']['field_news_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_news_short_description']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_news_short_description']['element_class'] = 'frontpage-news-summary';
  $handler->display->display_options['fields']['field_news_short_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_short_description']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'field_news_image_1' => 'field_news_image_1',
    'title' => 'title',
    'created' => 'title',
    'body' => 'title',
    'field_news_short_description' => 'title',
    'view_node' => 'title',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_news_image_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_news_short_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['link_class'] = 'newsLink';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['text'] = '[body] ';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['link_class'] = 'btn-transparent-green';
  $handler->display->display_options['fields']['view_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'btn-transparent-green';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Learn More and Register';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_content_tags']['id'] = 'field_content_tags';
  $handler->display->display_options['fields']['field_content_tags']['table'] = 'field_data_field_content_tags';
  $handler->display->display_options['fields']['field_content_tags']['field'] = 'field_content_tags';
  $handler->display->display_options['fields']['field_content_tags']['label'] = '';
  $handler->display->display_options['fields']['field_content_tags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_content_tags']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_content_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_content_tags']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="news-item">
  <h4>[title]</h4>
  <div class="news-body">[body]<div>
  <div class="tags">[field_content_tags]<div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'contentpage-tag';
  $handler->display->display_options['menu']['title'] = 'News';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['content_page_tag_view'] = $view;

  return $export;
}
