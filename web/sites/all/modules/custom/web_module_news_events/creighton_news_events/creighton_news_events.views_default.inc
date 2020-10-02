<?php
/**
 * @file
 * creighton_news_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function creighton_news_events_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'imported_calendar_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Imported Calendar Content';
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
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_imported_cal_event_date',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'event';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="http://calendar.creighton.edu" class="btn-green">View Calendar</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_imported_cal_link']['id'] = 'field_imported_cal_link';
  $handler->display->display_options['fields']['field_imported_cal_link']['table'] = 'field_data_field_imported_cal_link';
  $handler->display->display_options['fields']['field_imported_cal_link']['field'] = 'field_imported_cal_link';
  $handler->display->display_options['fields']['field_imported_cal_link']['label'] = '';
  $handler->display->display_options['fields']['field_imported_cal_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imported_cal_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imported_cal_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_imported_cal_link']['type'] = 'link_plain';
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_imported_cal_event_date']['id'] = 'field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['table'] = 'field_data_field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['field'] = 'field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imported_cal_event_date']['alter']['text'] = '[field_imported_cal_event_date]
[field_imported_cal_event_date-value]';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imported_cal_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imported_cal_event_date']['settings'] = array(
    'format_type' => 'us_standard_date_only_',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['id'] = 'field_imported_cal_event_date_1';
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['table'] = 'field_data_field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['field'] = 'field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['settings'] = array(
    'format_type' => 'full_time_date_am_pm',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="details">
   <h5><a href="[field_imported_cal_link]" title="[title]">[title]</a></h5>
   <span class="time">[field_imported_cal_event_date_1]</span>
   <a href="[field_imported_cal_link]" title="Learn More" class="btn-transparent-green">Learn more</a>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Event Date (field_imported_cal_event_date) */
  $handler->display->display_options['sorts']['field_imported_cal_event_date_value']['id'] = 'field_imported_cal_event_date_value';
  $handler->display->display_options['sorts']['field_imported_cal_event_date_value']['table'] = 'field_data_field_imported_cal_event_date';
  $handler->display->display_options['sorts']['field_imported_cal_event_date_value']['field'] = 'field_imported_cal_event_date_value';
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
    'imported_calendar' => 'imported_calendar',
  );
  /* Filter criterion: Content: Event Date (field_imported_cal_event_date) */
  $handler->display->display_options['filters']['field_imported_cal_event_date_value']['id'] = 'field_imported_cal_event_date_value';
  $handler->display->display_options['filters']['field_imported_cal_event_date_value']['table'] = 'field_data_field_imported_cal_event_date';
  $handler->display->display_options['filters']['field_imported_cal_event_date_value']['field'] = 'field_imported_cal_event_date_value';
  $handler->display->display_options['filters']['field_imported_cal_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_imported_cal_event_date_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_imported_cal_event_date_value']['default_date'] = 'today';

  /* Display: Block - Primary */
  $handler = $view->new_display('block', 'Block - Primary', 'block_primary');
  $handler->display->display_options['display_description'] = 'Intended for use on WWW site';

  /* Display: Block - Alternate */
  $handler = $view->new_display('block', 'Block - Alternate', 'block_alternate');
  $handler->display->display_options['display_description'] = 'Intended for use on non-WWW site';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'event';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_imported_cal_link']['id'] = 'field_imported_cal_link';
  $handler->display->display_options['fields']['field_imported_cal_link']['table'] = 'field_data_field_imported_cal_link';
  $handler->display->display_options['fields']['field_imported_cal_link']['field'] = 'field_imported_cal_link';
  $handler->display->display_options['fields']['field_imported_cal_link']['label'] = '';
  $handler->display->display_options['fields']['field_imported_cal_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imported_cal_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imported_cal_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_imported_cal_link']['type'] = 'link_plain';
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_imported_cal_event_date']['id'] = 'field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['table'] = 'field_data_field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['field'] = 'field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['alter']['text'] = '[field_imported_cal_event_date]
[field_imported_cal_event_date-value]';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imported_cal_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imported_cal_event_date']['settings'] = array(
    'format_type' => 'us_standard_date_only_',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_imported_cal_link]" title="[title]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h5';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['id'] = 'field_imported_cal_event_date_1';
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['table'] = 'field_data_field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['field'] = 'field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['settings'] = array(
    'format_type' => 'time_only_12_hr_',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[field_imported_cal_link]" title="Learn More" class="btn-transparent-green">Learn more</a>

';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: Block - Secondary */
  $handler = $view->new_display('block', 'Block - Secondary', 'events_secondary');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = ' <h4>Events</h4>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php // print_r($view); ?>';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="http://calendar.creighton.edu" class="btn-green">Full Calendar</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_imported_cal_link']['id'] = 'field_imported_cal_link';
  $handler->display->display_options['fields']['field_imported_cal_link']['table'] = 'field_data_field_imported_cal_link';
  $handler->display->display_options['fields']['field_imported_cal_link']['field'] = 'field_imported_cal_link';
  $handler->display->display_options['fields']['field_imported_cal_link']['label'] = '';
  $handler->display->display_options['fields']['field_imported_cal_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imported_cal_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imported_cal_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_imported_cal_link']['type'] = 'link_plain';
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_imported_cal_event_date']['id'] = 'field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['table'] = 'field_data_field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['field'] = 'field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imported_cal_event_date']['alter']['text'] = '[field_imported_cal_event_date]
[field_imported_cal_event_date-value]';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['element_type'] = 'h5';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imported_cal_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imported_cal_event_date']['settings'] = array(
    'format_type' => 'us_standard_date_only_',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '140',
  );
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['id'] = 'field_imported_cal_event_date_1';
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['table'] = 'field_data_field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['field'] = 'field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['settings'] = array(
    'format_type' => 'time_only_12_hr_',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="details">
   <a href="[field_imported_cal_link]" title="[title]">[title]</a>
   <span class="time">[field_imported_cal_event_date_1]</span>
   <a href="[field_imported_cal_link]" title="Learn More" class="btn-transparent-green">Learn more</a>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: Block - Secondary CCAS */
  $handler = $view->new_display('block', 'Block - Secondary CCAS', 'events_secondary_ccas');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = ' <h4>Events</h4>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php // print_r($view); ?>';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="http://calendar.creighton.edu/?uc=84" class="btn-green">Full Calendar</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_imported_cal_link']['id'] = 'field_imported_cal_link';
  $handler->display->display_options['fields']['field_imported_cal_link']['table'] = 'field_data_field_imported_cal_link';
  $handler->display->display_options['fields']['field_imported_cal_link']['field'] = 'field_imported_cal_link';
  $handler->display->display_options['fields']['field_imported_cal_link']['label'] = '';
  $handler->display->display_options['fields']['field_imported_cal_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imported_cal_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imported_cal_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_imported_cal_link']['type'] = 'link_plain';
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_imported_cal_event_date']['id'] = 'field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['table'] = 'field_data_field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['field'] = 'field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imported_cal_event_date']['alter']['text'] = '[field_imported_cal_event_date]
[field_imported_cal_event_date-value]';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['element_type'] = 'h5';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imported_cal_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imported_cal_event_date']['settings'] = array(
    'format_type' => 'us_standard_date_only_',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '140',
  );
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['id'] = 'field_imported_cal_event_date_1';
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['table'] = 'field_data_field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['field'] = 'field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['settings'] = array(
    'format_type' => 'time_only_12_hr_',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="details">
   <a href="[field_imported_cal_link]" title="[title]">[title]</a>
   <span class="time">[field_imported_cal_event_date_1]</span>
   <a href="[field_imported_cal_link]" title="Learn More" class="btn-transparent-green">Learn more</a>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: Block - Secondary LAW */
  $handler = $view->new_display('block', 'Block - Secondary LAW', 'events_secondary_law');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<br>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php // print_r($view); ?>';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="http://calendar.creighton.edu/?uc=15" class="btn-green">Full Calendar</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_imported_cal_link']['id'] = 'field_imported_cal_link';
  $handler->display->display_options['fields']['field_imported_cal_link']['table'] = 'field_data_field_imported_cal_link';
  $handler->display->display_options['fields']['field_imported_cal_link']['field'] = 'field_imported_cal_link';
  $handler->display->display_options['fields']['field_imported_cal_link']['label'] = '';
  $handler->display->display_options['fields']['field_imported_cal_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imported_cal_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imported_cal_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_imported_cal_link']['type'] = 'link_plain';
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_imported_cal_event_date']['id'] = 'field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['table'] = 'field_data_field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['field'] = 'field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imported_cal_event_date']['alter']['text'] = '[field_imported_cal_event_date]
[field_imported_cal_event_date-value]';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['element_type'] = 'h5';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imported_cal_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imported_cal_event_date']['settings'] = array(
    'format_type' => 'us_standard_date_only_',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['id'] = 'field_imported_cal_event_date_1';
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['table'] = 'field_data_field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['field'] = 'field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['settings'] = array(
    'format_type' => 'time_only_12_hr_',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="details">
   <div class="cu-event-name"><a href="[field_imported_cal_link]" title="[title]">[title]</a></div>
   <span class="time">[field_imported_cal_event_date_1]</span>
  [body]
   <a href="[field_imported_cal_link]" title="Learn More" class="btn-transparent-green">Learn more</a>
<hr/>
</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: Block - Local events */
  $handler = $view->new_display('block', 'Block - Local events', 'local_events');
  $handler->display->display_options['display_description'] = 'To be styled just like Admissions events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = ' <h2>Upcoming Events</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php // print_r($view); ?>';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="http://calendar.creighton.edu/?uc=18" class="btn-green">Full Calendar</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_imported_cal_link']['id'] = 'field_imported_cal_link';
  $handler->display->display_options['fields']['field_imported_cal_link']['table'] = 'field_data_field_imported_cal_link';
  $handler->display->display_options['fields']['field_imported_cal_link']['field'] = 'field_imported_cal_link';
  $handler->display->display_options['fields']['field_imported_cal_link']['label'] = '';
  $handler->display->display_options['fields']['field_imported_cal_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imported_cal_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imported_cal_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_imported_cal_link']['type'] = 'link_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_imported_cal_link]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '140',
  );
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['id'] = 'field_imported_cal_event_date_1';
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['table'] = 'field_data_field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['field'] = 'field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['settings'] = array(
    'format_type' => 'month_full_day_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_imported_cal_event_date_2']['id'] = 'field_imported_cal_event_date_2';
  $handler->display->display_options['fields']['field_imported_cal_event_date_2']['table'] = 'field_data_field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date_2']['field'] = 'field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date_2']['label'] = 'Date month ONLY start';
  $handler->display->display_options['fields']['field_imported_cal_event_date_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imported_cal_event_date_2']['settings'] = array(
    'format_type' => 'month_short_',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_imported_cal_event_date_3']['id'] = 'field_imported_cal_event_date_3';
  $handler->display->display_options['fields']['field_imported_cal_event_date_3']['table'] = 'field_data_field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date_3']['field'] = 'field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date_3']['label'] = 'Date day ONLY start';
  $handler->display->display_options['fields']['field_imported_cal_event_date_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imported_cal_event_date_3']['settings'] = array(
    'format_type' => 'day_only_no_zeros',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_imported_cal_event_date_4']['id'] = 'field_imported_cal_event_date_4';
  $handler->display->display_options['fields']['field_imported_cal_event_date_4']['table'] = 'field_data_field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date_4']['field'] = 'field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date_4']['label'] = 'Event Time';
  $handler->display->display_options['fields']['field_imported_cal_event_date_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imported_cal_event_date_4']['settings'] = array(
    'format_type' => 'time_only_12_hr_',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<!-- vertical -->
<div class="creighton-event-item">
<div class="creighton-event-calendar-left">	
	<div class="creighton-event-calendar-box">
		<div class="box-top-month">
			[field_imported_cal_event_date_2]
		</div>
		<div class="box-bottom-day">
			[field_imported_cal_event_date_3]
		</div>
	</div><!-- END of .creighton-event-calendar-box -->
</div><!-- END of .creighton-event-calendar-left -->
	<div class="creighton-event-calendar-right">
		<div class="creighton-event-brief-desc">
		<div class="cu-event-desc-top">
			<div class="cu-event-name">
			[title]<br>
		</div>
		<div class="cu-event-date">
			[field_imported_cal_event_date_1]
		</div>
		<div class="cu-event-time">
			[field_imported_cal_event_date_4]
		</div>

		</div><!-- .cu-event-desc-top -->
		<div class="cu-event-desc-bottom">
			<div class="cu-event-summary">[body]</div>
			<div class="cu-event-more-info"><a href="[field_imported_cal_link]">More Information</a>
			</div>
		</div><!-- .cu-event-desc-bottom -->
	</div><!-- .creighton-event-brief-desc -->
	</div><!-- .creighton-event-calendar-right -->
</div><!-- .creighton-event-item -->';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: Block - Secondary SPAHP Alumni */
  $handler = $view->new_display('block', 'Block - Secondary SPAHP Alumni', 'events_secondary_spahp_alumni');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="http://calendar.creighton.edu/?uc=294" class="btn-green">View Calendar</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
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
    'imported_calendar' => 'imported_calendar',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Calendar ID (field_imported_cal_calendar_id) */
  $handler->display->display_options['filters']['field_imported_cal_calendar_id_value']['id'] = 'field_imported_cal_calendar_id_value';
  $handler->display->display_options['filters']['field_imported_cal_calendar_id_value']['table'] = 'field_data_field_imported_cal_calendar_id';
  $handler->display->display_options['filters']['field_imported_cal_calendar_id_value']['field'] = 'field_imported_cal_calendar_id_value';
  $handler->display->display_options['filters']['field_imported_cal_calendar_id_value']['value']['value'] = '294';
  $handler->display->display_options['filters']['field_imported_cal_calendar_id_value']['group'] = 1;
  /* Filter criterion: Content: Event Date (field_imported_cal_event_date) */
  $handler->display->display_options['filters']['field_imported_cal_event_date_value']['id'] = 'field_imported_cal_event_date_value';
  $handler->display->display_options['filters']['field_imported_cal_event_date_value']['table'] = 'field_data_field_imported_cal_event_date';
  $handler->display->display_options['filters']['field_imported_cal_event_date_value']['field'] = 'field_imported_cal_event_date_value';
  $handler->display->display_options['filters']['field_imported_cal_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_imported_cal_event_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_imported_cal_event_date_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_imported_cal_event_date_value']['default_date'] = 'today';

  /* Display: Block - Secondary SPAHP */
  $handler = $view->new_display('block', 'Block - Secondary SPAHP', 'events_secondary_spahp');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="http://calendar.creighton.edu?uc=18" class="btn-green">View Calendar</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_imported_cal_link']['id'] = 'field_imported_cal_link';
  $handler->display->display_options['fields']['field_imported_cal_link']['table'] = 'field_data_field_imported_cal_link';
  $handler->display->display_options['fields']['field_imported_cal_link']['field'] = 'field_imported_cal_link';
  $handler->display->display_options['fields']['field_imported_cal_link']['label'] = '';
  $handler->display->display_options['fields']['field_imported_cal_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imported_cal_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imported_cal_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_imported_cal_link']['type'] = 'link_plain';
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_imported_cal_event_date']['id'] = 'field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['table'] = 'field_data_field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['field'] = 'field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imported_cal_event_date']['alter']['text'] = '[field_imported_cal_event_date]
[field_imported_cal_event_date-value]';
  $handler->display->display_options['fields']['field_imported_cal_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imported_cal_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_imported_cal_event_date']['settings'] = array(
    'format_type' => 'us_standard_date_only_',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['id'] = 'field_imported_cal_event_date_1';
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['table'] = 'field_data_field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['field'] = 'field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['settings'] = array(
    'format_type' => 'full_time_date_am_pm',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<!-- vertical -->
<div class="creighton-event-item">
<div class="creighton-event-calendar-left">	
	<div class="creighton-event-calendar-box">
		<div class="box-top-month">
			[field_imported_cal_event_date_2]
		</div>
		<div class="box-bottom-day">
			[field_imported_cal_event_date_3]
		</div>
	</div><!-- END of .creighton-event-calendar-box -->
</div><!-- END of .creighton-event-calendar-left -->
	<div class="creighton-event-calendar-right">
		<div class="creighton-event-brief-desc">
		<div class="cu-event-desc-top">
			<div class="cu-event-name">
			[title]<br>
		</div>
		<div class="cu-event-date">
			[field_imported_cal_event_date_1]
		</div>
		<div class="cu-event-time">
			[field_imported_cal_event_date_4]
		</div>

		</div><!-- .cu-event-desc-top -->
		<div class="cu-event-desc-bottom">
			<div class="cu-event-summary">[body]</div>
			<div class="cu-event-more-info"><a href="[field_imported_cal_link]">More Information</a>
			</div>
		</div><!-- .cu-event-desc-bottom -->
	</div><!-- .creighton-event-brief-desc -->
	</div><!-- .creighton-event-calendar-right -->
</div><!-- .creighton-event-item -->';
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
    'imported_calendar' => 'imported_calendar',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Calendar ID (field_imported_cal_calendar_id) */
  $handler->display->display_options['filters']['field_imported_cal_calendar_id_value']['id'] = 'field_imported_cal_calendar_id_value';
  $handler->display->display_options['filters']['field_imported_cal_calendar_id_value']['table'] = 'field_data_field_imported_cal_calendar_id';
  $handler->display->display_options['filters']['field_imported_cal_calendar_id_value']['field'] = 'field_imported_cal_calendar_id_value';
  $handler->display->display_options['filters']['field_imported_cal_calendar_id_value']['value']['value'] = '18';
  $handler->display->display_options['filters']['field_imported_cal_calendar_id_value']['group'] = 1;
  /* Filter criterion: Content: Event Date (field_imported_cal_event_date) */
  $handler->display->display_options['filters']['field_imported_cal_event_date_value']['id'] = 'field_imported_cal_event_date_value';
  $handler->display->display_options['filters']['field_imported_cal_event_date_value']['table'] = 'field_data_field_imported_cal_event_date';
  $handler->display->display_options['filters']['field_imported_cal_event_date_value']['field'] = 'field_imported_cal_event_date_value';
  $handler->display->display_options['filters']['field_imported_cal_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_imported_cal_event_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_imported_cal_event_date_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_imported_cal_event_date_value']['default_date'] = 'today';

  /* Display: Block - Local events SPAHP */
  $handler = $view->new_display('block', 'Block - Local events SPAHP', 'local_events_spahp');
  $handler->display->display_options['display_description'] = 'To be styled just like Admissions events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = ' <h2>Upcoming Events</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<?php // print_r($view); ?>';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="http://calendar.creighton.edu/?uc=18" class="btn-green">Full Calendar</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_imported_cal_link']['id'] = 'field_imported_cal_link';
  $handler->display->display_options['fields']['field_imported_cal_link']['table'] = 'field_data_field_imported_cal_link';
  $handler->display->display_options['fields']['field_imported_cal_link']['field'] = 'field_imported_cal_link';
  $handler->display->display_options['fields']['field_imported_cal_link']['label'] = '';
  $handler->display->display_options['fields']['field_imported_cal_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imported_cal_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imported_cal_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_imported_cal_link']['type'] = 'link_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_imported_cal_link]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '140',
  );
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['id'] = 'field_imported_cal_event_date_1';
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['table'] = 'field_data_field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['field'] = 'field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imported_cal_event_date_1']['settings'] = array(
    'format_type' => 'month_full_day_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_imported_cal_event_date_2']['id'] = 'field_imported_cal_event_date_2';
  $handler->display->display_options['fields']['field_imported_cal_event_date_2']['table'] = 'field_data_field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date_2']['field'] = 'field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date_2']['label'] = 'Date month ONLY start';
  $handler->display->display_options['fields']['field_imported_cal_event_date_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imported_cal_event_date_2']['settings'] = array(
    'format_type' => 'month_short_',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_imported_cal_event_date_3']['id'] = 'field_imported_cal_event_date_3';
  $handler->display->display_options['fields']['field_imported_cal_event_date_3']['table'] = 'field_data_field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date_3']['field'] = 'field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date_3']['label'] = 'Date day ONLY start';
  $handler->display->display_options['fields']['field_imported_cal_event_date_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imported_cal_event_date_3']['settings'] = array(
    'format_type' => 'day_only_no_zeros',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Event Date */
  $handler->display->display_options['fields']['field_imported_cal_event_date_4']['id'] = 'field_imported_cal_event_date_4';
  $handler->display->display_options['fields']['field_imported_cal_event_date_4']['table'] = 'field_data_field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date_4']['field'] = 'field_imported_cal_event_date';
  $handler->display->display_options['fields']['field_imported_cal_event_date_4']['label'] = 'Event Time';
  $handler->display->display_options['fields']['field_imported_cal_event_date_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_imported_cal_event_date_4']['settings'] = array(
    'format_type' => 'time_only_12_hr_',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<!-- vertical -->
<div class="creighton-event-item">
<div class="creighton-event-calendar-left">	
	<div class="creighton-event-calendar-box">
		<div class="box-top-month">
			[field_imported_cal_event_date_2]
		</div>
		<div class="box-bottom-day">
			[field_imported_cal_event_date_3]
		</div>
	</div><!-- END of .creighton-event-calendar-box -->
</div><!-- END of .creighton-event-calendar-left -->
	<div class="creighton-event-calendar-right">
		<div class="creighton-event-brief-desc">
		<div class="cu-event-desc-top">
			<div class="cu-event-name">
			[title]<br>
		</div>
		<div class="cu-event-date">
			[field_imported_cal_event_date_1]
		</div>
		<div class="cu-event-time">
			[field_imported_cal_event_date_4]
		</div>

		</div><!-- .cu-event-desc-top -->
		<div class="cu-event-desc-bottom">
			<div class="cu-event-summary">[body]</div>
			<div class="cu-event-more-info"><a href="[field_imported_cal_link]">More Information</a>
			</div>
		</div><!-- .cu-event-desc-bottom -->
	</div><!-- .creighton-event-brief-desc -->
	</div><!-- .creighton-event-calendar-right -->
</div><!-- .creighton-event-item -->';
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
    'imported_calendar' => 'imported_calendar',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Calendar ID (field_imported_cal_calendar_id) */
  $handler->display->display_options['filters']['field_imported_cal_calendar_id_value']['id'] = 'field_imported_cal_calendar_id_value';
  $handler->display->display_options['filters']['field_imported_cal_calendar_id_value']['table'] = 'field_data_field_imported_cal_calendar_id';
  $handler->display->display_options['filters']['field_imported_cal_calendar_id_value']['field'] = 'field_imported_cal_calendar_id_value';
  $handler->display->display_options['filters']['field_imported_cal_calendar_id_value']['value']['value'] = '18';
  $handler->display->display_options['filters']['field_imported_cal_calendar_id_value']['group'] = 1;
  /* Filter criterion: Content: Event Date (field_imported_cal_event_date) */
  $handler->display->display_options['filters']['field_imported_cal_event_date_value']['id'] = 'field_imported_cal_event_date_value';
  $handler->display->display_options['filters']['field_imported_cal_event_date_value']['table'] = 'field_data_field_imported_cal_event_date';
  $handler->display->display_options['filters']['field_imported_cal_event_date_value']['field'] = 'field_imported_cal_event_date_value';
  $handler->display->display_options['filters']['field_imported_cal_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_imported_cal_event_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_imported_cal_event_date_value']['granularity'] = 'second';
  $handler->display->display_options['filters']['field_imported_cal_event_date_value']['default_date'] = 'today';
  $export['imported_calendar_content'] = $view;

  $view = new view();
  $view->name = 'imported_news_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Imported News Content';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="http://www.creighton.edu/publicrelations/newscenter/news/" class="btn-green">News Archive</a>';
  $handler->display->display_options['footer']['area']['format'] = 'filtered_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '140',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'month_day_year';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'M d, Y h:m';
  /* Field: Content: Remote Content URL */
  $handler->display->display_options['fields']['field_inews_remote_content_url']['id'] = 'field_inews_remote_content_url';
  $handler->display->display_options['fields']['field_inews_remote_content_url']['table'] = 'field_data_field_inews_remote_content_url';
  $handler->display->display_options['fields']['field_inews_remote_content_url']['field'] = 'field_inews_remote_content_url';
  $handler->display->display_options['fields']['field_inews_remote_content_url']['label'] = '';
  $handler->display->display_options['fields']['field_inews_remote_content_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_inews_remote_content_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_inews_remote_content_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_inews_remote_content_url']['type'] = 'link_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="details">
  <h5><a href="[field_inews_remote_content_url]" title="An news story title">[title]</a></h5>
  <span class="time">[created]</span>
  <p class="excerpt">[body]</p>
  <a href="[field_inews_remote_content_url]" title="Learn More" class="btn-transparent-green">Learn more</a>
</div>	

';
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
    'imported_news' => 'imported_news',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['imported_news_content'] = $view;

  return $export;
}
