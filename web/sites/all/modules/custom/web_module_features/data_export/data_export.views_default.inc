<?php
/**
 * @file
 * data_export.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function data_export_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'events_views_xml_export';
  $view->description = 'All views of the the Creighton Events feature';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events Views XML Export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Upcoming Events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'path' => 'path',
    'body' => 'body',
    'field_event_date_4' => 'field_event_date_4',
    'field_event_name' => 'field_event_name',
    'field_event_date_1' => 'field_event_date_1',
    'field_event_short_description' => 'field_event_short_description',
    'field_signup_link' => 'field_signup_link',
    'field_event_location' => 'field_event_location',
    'field_contact_email' => 'field_contact_email',
    'field_event_date_5' => 'field_event_date_5',
    'field_event_date_6' => 'field_event_date_6',
    'field_event_date_7' => 'field_event_date_7',
    'field_event_date_8' => 'field_event_date_8',
    'field_event_date_9' => 'field_event_date_9',
    'field_event_date_10' => 'field_event_date_10',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'path' => array(
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
    'field_event_date_4' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_short_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_signup_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_contact_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_5' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_6' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_7' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_8' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_9' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_10' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
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
  /* Relationship: Content: Event Tag (field_event_tag) */
  $handler->display->display_options['relationships']['field_event_tag_tid']['id'] = 'field_event_tag_tid';
  $handler->display->display_options['relationships']['field_event_tag_tid']['table'] = 'field_data_field_event_tag';
  $handler->display->display_options['relationships']['field_event_tag_tid']['field'] = 'field_event_tag_tid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Node id';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '170',
  );
  /* Field: Date (Mon dd, yyyy) start and end */
  $handler->display->display_options['fields']['field_event_date_4']['id'] = 'field_event_date_4';
  $handler->display->display_options['fields']['field_event_date_4']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_4']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_4']['ui_name'] = 'Date (Mon dd, yyyy) start and end';
  $handler->display->display_options['fields']['field_event_date_4']['label'] = '(Mon dd, yyyy) start and end';
  $handler->display->display_options['fields']['field_event_date_4']['element_wrapper_class'] = 'creighton-event-us-standard-date';
  $handler->display->display_options['fields']['field_event_date_4']['settings'] = array(
    'format_type' => 'us_standard_date_only_',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Event Name */
  $handler->display->display_options['fields']['field_event_name']['id'] = 'field_event_name';
  $handler->display->display_options['fields']['field_event_name']['table'] = 'field_data_field_event_name';
  $handler->display->display_options['fields']['field_event_name']['field'] = 'field_event_name';
  $handler->display->display_options['fields']['field_event_name']['element_wrapper_class'] = 'creighton-event-name';
  /* Field: Time start end */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['ui_name'] = 'Time start end';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = 'Time start end';
  $handler->display->display_options['fields']['field_event_date_1']['element_wrapper_class'] = 'creighton-event-time-start-end';
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'time_only_12_hr_',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Short Description */
  $handler->display->display_options['fields']['field_event_short_description']['id'] = 'field_event_short_description';
  $handler->display->display_options['fields']['field_event_short_description']['table'] = 'field_data_field_event_short_description';
  $handler->display->display_options['fields']['field_event_short_description']['field'] = 'field_event_short_description';
  $handler->display->display_options['fields']['field_event_short_description']['element_wrapper_class'] = 'creighton-event-short-description';
  /* Field: Content: Signup link */
  $handler->display->display_options['fields']['field_signup_link']['id'] = 'field_signup_link';
  $handler->display->display_options['fields']['field_signup_link']['table'] = 'field_data_field_signup_link';
  $handler->display->display_options['fields']['field_signup_link']['field'] = 'field_signup_link';
  $handler->display->display_options['fields']['field_signup_link']['element_wrapper_class'] = 'creighton-event-signup-link';
  $handler->display->display_options['fields']['field_signup_link']['click_sort_column'] = 'url';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['element_wrapper_class'] = 'creighton-event-location';
  /* Field: Content: Contact email */
  $handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['element_wrapper_class'] = 'creighton-event-contact-email';
  $handler->display->display_options['fields']['field_contact_email']['type'] = 'email_plain';
  /* Field: Date (Month dd, yyyy) start and end */
  $handler->display->display_options['fields']['field_event_date_5']['id'] = 'field_event_date_5';
  $handler->display->display_options['fields']['field_event_date_5']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_5']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_5']['ui_name'] = 'Date (Month dd, yyyy) start and end';
  $handler->display->display_options['fields']['field_event_date_5']['label'] = 'Date (Month dd, yyyy) start and end';
  $handler->display->display_options['fields']['field_event_date_5']['element_wrapper_class'] = 'creighton-event-date-start-end';
  $handler->display->display_options['fields']['field_event_date_5']['settings'] = array(
    'format_type' => 'month_full_day_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Date day ONLY start */
  $handler->display->display_options['fields']['field_event_date_6']['id'] = 'field_event_date_6';
  $handler->display->display_options['fields']['field_event_date_6']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_6']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_6']['ui_name'] = 'Date day ONLY start';
  $handler->display->display_options['fields']['field_event_date_6']['label'] = 'Date day ONLY start';
  $handler->display->display_options['fields']['field_event_date_6']['element_wrapper_class'] = 'creighton-event-day-only-start';
  $handler->display->display_options['fields']['field_event_date_6']['settings'] = array(
    'format_type' => 'day_only_no_zeros',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Date month ONLY start */
  $handler->display->display_options['fields']['field_event_date_7']['id'] = 'field_event_date_7';
  $handler->display->display_options['fields']['field_event_date_7']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_7']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_7']['ui_name'] = 'Date month ONLY start';
  $handler->display->display_options['fields']['field_event_date_7']['label'] = 'Date month ONLY start';
  $handler->display->display_options['fields']['field_event_date_7']['settings'] = array(
    'format_type' => 'month_short_',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Date month short day start end */
  $handler->display->display_options['fields']['field_event_date_8']['id'] = 'field_event_date_8';
  $handler->display->display_options['fields']['field_event_date_8']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_8']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_8']['ui_name'] = 'Date month short day start end';
  $handler->display->display_options['fields']['field_event_date_8']['label'] = 'Date month short day start end';
  $handler->display->display_options['fields']['field_event_date_8']['element_wrapper_class'] = 'creighton-event-date-month-day-start-end';
  $handler->display->display_options['fields']['field_event_date_8']['settings'] = array(
    'format_type' => 'month_short_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Date month ONLY start end */
  $handler->display->display_options['fields']['field_event_date_9']['id'] = 'field_event_date_9';
  $handler->display->display_options['fields']['field_event_date_9']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_9']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_9']['ui_name'] = 'Date month ONLY start end';
  $handler->display->display_options['fields']['field_event_date_9']['label'] = 'Date month ONLY start end';
  $handler->display->display_options['fields']['field_event_date_9']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_9']['element_wrapper_class'] = 'creighton-event-date-month-only-start-end';
  $handler->display->display_options['fields']['field_event_date_9']['settings'] = array(
    'format_type' => 'month_short_',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Date day ONLY start end */
  $handler->display->display_options['fields']['field_event_date_10']['id'] = 'field_event_date_10';
  $handler->display->display_options['fields']['field_event_date_10']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_10']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_10']['ui_name'] = 'Date day ONLY start end';
  $handler->display->display_options['fields']['field_event_date_10']['label'] = 'Date day ONLY start end';
  $handler->display->display_options['fields']['field_event_date_10']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_10']['element_wrapper_class'] = 'creighton-event-date-day-start-end';
  $handler->display->display_options['fields']['field_event_date_10']['settings'] = array(
    'format_type' => 'day_only_no_zeros',
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
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="creighton-event-item-horizontal">
<div class="creighton-event-calendar-left">	
	<div class="creighton-event-calendar-box">
		<div class="box-top-month">
			[field_event_date_9]
		</div>
		<div class="box-bottom-day">
			[field_event_date_10]
		</div>
	</div><!-- .creighton-event-calendar-box -->

</div><!-- .creighton-event-calendar-left -->
	<div class="creighton-event-calendar-center">
		<div class="cu-event-name">
			[field_event_name]<br>
		</div>
		<div class="cu-event-summary">[body]</div>
		

		<div class="cu-event-date">
			[field_event_date_5]
		</div>
		<div class="cu-event-time">
			[field_event_date_1]
		</div>
		<div class="cu-event-location">
			[field_event_location]
		</div>
			

	</div><!-- .creighton-event-calendar-center -->
	<div class="creighton-event-calendar-right">
			<div class="cu-event-sign-up-link">
		[field_signup_link]
	</div>
		<div class="cu-event-more-info"><a href="[path]">More Information</a>
			</div>
		<div class="cu-event-contact">
			[field_contact_email]

		</div>
	</div>
</div><!-- .creighton-event-item-horizontal -->
';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Sort criterion: Content: Date -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_event_tag_tid';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['root_node'] = 'Creighton Events';
  $handler->display->display_options['style_options']['item_node'] = 'Event';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Event id';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '120';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '170',
  );
  /* Field: Date (Mon dd, yyyy) start and end */
  $handler->display->display_options['fields']['field_event_date_4']['id'] = 'field_event_date_4';
  $handler->display->display_options['fields']['field_event_date_4']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_4']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_4']['ui_name'] = 'Date (Mon dd, yyyy) start and end';
  $handler->display->display_options['fields']['field_event_date_4']['label'] = '(Mon dd, yyyy) start and end';
  $handler->display->display_options['fields']['field_event_date_4']['element_wrapper_class'] = 'creighton-event-us-standard-date';
  $handler->display->display_options['fields']['field_event_date_4']['settings'] = array(
    'format_type' => 'us_standard_date_only_',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Event Name */
  $handler->display->display_options['fields']['field_event_name']['id'] = 'field_event_name';
  $handler->display->display_options['fields']['field_event_name']['table'] = 'field_data_field_event_name';
  $handler->display->display_options['fields']['field_event_name']['field'] = 'field_event_name';
  $handler->display->display_options['fields']['field_event_name']['element_wrapper_class'] = 'creighton-event-name';
  /* Field: Time start end */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['ui_name'] = 'Time start end';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = 'Time start end';
  $handler->display->display_options['fields']['field_event_date_1']['element_wrapper_class'] = 'creighton-event-time-start-end';
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'time_only_12_hr_',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Short Description */
  $handler->display->display_options['fields']['field_event_short_description']['id'] = 'field_event_short_description';
  $handler->display->display_options['fields']['field_event_short_description']['table'] = 'field_data_field_event_short_description';
  $handler->display->display_options['fields']['field_event_short_description']['field'] = 'field_event_short_description';
  $handler->display->display_options['fields']['field_event_short_description']['element_wrapper_class'] = 'creighton-event-short-description';
  /* Field: Content: Signup link */
  $handler->display->display_options['fields']['field_signup_link']['id'] = 'field_signup_link';
  $handler->display->display_options['fields']['field_signup_link']['table'] = 'field_data_field_signup_link';
  $handler->display->display_options['fields']['field_signup_link']['field'] = 'field_signup_link';
  $handler->display->display_options['fields']['field_signup_link']['element_wrapper_class'] = 'creighton-event-signup-link';
  $handler->display->display_options['fields']['field_signup_link']['click_sort_column'] = 'url';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['element_wrapper_class'] = 'creighton-event-location';
  /* Field: Content: Contact email */
  $handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['element_wrapper_class'] = 'creighton-event-contact-email';
  $handler->display->display_options['fields']['field_contact_email']['type'] = 'email_plain';
  /* Field: Date (Month dd, yyyy) start and end */
  $handler->display->display_options['fields']['field_event_date_5']['id'] = 'field_event_date_5';
  $handler->display->display_options['fields']['field_event_date_5']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_5']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_5']['ui_name'] = 'Date (Month dd, yyyy) start and end';
  $handler->display->display_options['fields']['field_event_date_5']['label'] = 'Date (Month dd, yyyy) start and end';
  $handler->display->display_options['fields']['field_event_date_5']['element_wrapper_class'] = 'creighton-event-date-start-end';
  $handler->display->display_options['fields']['field_event_date_5']['settings'] = array(
    'format_type' => 'month_full_day_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Date day ONLY start */
  $handler->display->display_options['fields']['field_event_date_6']['id'] = 'field_event_date_6';
  $handler->display->display_options['fields']['field_event_date_6']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_6']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_6']['ui_name'] = 'Date day ONLY start';
  $handler->display->display_options['fields']['field_event_date_6']['label'] = 'Date day ONLY start';
  $handler->display->display_options['fields']['field_event_date_6']['element_wrapper_class'] = 'creighton-event-day-only-start';
  $handler->display->display_options['fields']['field_event_date_6']['settings'] = array(
    'format_type' => 'day_only_no_zeros',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Date month ONLY start */
  $handler->display->display_options['fields']['field_event_date_7']['id'] = 'field_event_date_7';
  $handler->display->display_options['fields']['field_event_date_7']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_7']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_7']['ui_name'] = 'Date month ONLY start';
  $handler->display->display_options['fields']['field_event_date_7']['label'] = 'Date month ONLY start';
  $handler->display->display_options['fields']['field_event_date_7']['settings'] = array(
    'format_type' => 'month_short_',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Date month short day start end */
  $handler->display->display_options['fields']['field_event_date_8']['id'] = 'field_event_date_8';
  $handler->display->display_options['fields']['field_event_date_8']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_8']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_8']['ui_name'] = 'Date month short day start end';
  $handler->display->display_options['fields']['field_event_date_8']['label'] = 'Date month short day start end';
  $handler->display->display_options['fields']['field_event_date_8']['element_wrapper_class'] = 'creighton-event-date-month-day-start-end';
  $handler->display->display_options['fields']['field_event_date_8']['settings'] = array(
    'format_type' => 'month_short_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Date month ONLY start end */
  $handler->display->display_options['fields']['field_event_date_9']['id'] = 'field_event_date_9';
  $handler->display->display_options['fields']['field_event_date_9']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_9']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_9']['ui_name'] = 'Date month ONLY start end';
  $handler->display->display_options['fields']['field_event_date_9']['label'] = 'Date month ONLY start end';
  $handler->display->display_options['fields']['field_event_date_9']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_9']['element_wrapper_class'] = 'creighton-event-date-month-only-start-end';
  $handler->display->display_options['fields']['field_event_date_9']['settings'] = array(
    'format_type' => 'month_short_',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Date day ONLY start end */
  $handler->display->display_options['fields']['field_event_date_10']['id'] = 'field_event_date_10';
  $handler->display->display_options['fields']['field_event_date_10']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_10']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_10']['ui_name'] = 'Date day ONLY start end';
  $handler->display->display_options['fields']['field_event_date_10']['label'] = 'Date day ONLY start end';
  $handler->display->display_options['fields']['field_event_date_10']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_10']['element_wrapper_class'] = 'creighton-event-date-day-start-end';
  $handler->display->display_options['fields']['field_event_date_10']['settings'] = array(
    'format_type' => 'day_only_no_zeros',
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
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="creighton-event-item-horizontal">
<div class="creighton-event-calendar-left">	
	<div class="creighton-event-calendar-box">
		<div class="box-top-month">
			[field_event_date_9]
		</div>
		<div class="box-bottom-day">
			[field_event_date_10]
		</div>
	</div><!-- .creighton-event-calendar-box -->

</div><!-- .creighton-event-calendar-left -->
	<div class="creighton-event-calendar-center">
		<div class="cu-event-name">
			[field_event_name]<br>
		</div>
		<div class="cu-event-summary">[body]</div>
		

		<div class="cu-event-date">
			[field_event_date_5]
		</div>
		<div class="cu-event-time">
			[field_event_date_1]
		</div>
		<div class="cu-event-location">
			[field_event_location]
		</div>
			

	</div><!-- .creighton-event-calendar-center -->
	<div class="creighton-event-calendar-right">
			<div class="cu-event-sign-up-link">
		[field_signup_link]
	</div>
		<div class="cu-event-more-info"><a href="[path]">More Information</a>
			</div>
		<div class="cu-event-contact">
			[field_contact_email]

		</div>
	</div>
</div><!-- .creighton-event-item-horizontal -->
';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  /* Field: Content: Event Tag */
  $handler->display->display_options['fields']['field_event_tag']['id'] = 'field_event_tag';
  $handler->display->display_options['fields']['field_event_tag']['table'] = 'field_data_field_event_tag';
  $handler->display->display_options['fields']['field_event_tag']['field'] = 'field_event_tag';
  $handler->display->display_options['fields']['field_event_tag']['delta_offset'] = '0';
  $handler->display->display_options['path'] = 'events-export.xml';
  $export['events_views_xml_export'] = $view;

  $view = new view();
  $view->name = 'news_gm_2012_data_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'News GM 2012 - Data Export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More News';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
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
  $handler->display->display_options['header']['area']['content'] = '
<!-- News CSS on https://business.creighton.edu/node/378 -->
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
</style>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Content: News tags (field_news_tags) */
  $handler->display->display_options['relationships']['field_news_tags_tid']['id'] = 'field_news_tags_tid';
  $handler->display->display_options['relationships']['field_news_tags_tid']['table'] = 'field_data_field_news_tags';
  $handler->display->display_options['relationships']['field_news_tags_tid']['field'] = 'field_news_tags_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Short Description */
  $handler->display->display_options['fields']['field_news_short_description']['id'] = 'field_news_short_description';
  $handler->display->display_options['fields']['field_news_short_description']['table'] = 'field_data_field_news_short_description';
  $handler->display->display_options['fields']['field_news_short_description']['field'] = 'field_news_short_description';
  $handler->display->display_options['fields']['field_news_short_description']['label'] = 'News Short Description';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'News Body';
  /* Field: Content: News tags */
  $handler->display->display_options['fields']['field_news_tags']['id'] = 'field_news_tags';
  $handler->display->display_options['fields']['field_news_tags']['table'] = 'field_data_field_news_tags';
  $handler->display->display_options['fields']['field_news_tags']['field'] = 'field_news_tags';
  $handler->display->display_options['fields']['field_news_tags']['delta_offset'] = '0';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'News Link';
  /* Field: Field: External Link */
  $handler->display->display_options['fields']['field_repo_external_link']['id'] = 'field_repo_external_link';
  $handler->display->display_options['fields']['field_repo_external_link']['table'] = 'field_data_field_repo_external_link';
  $handler->display->display_options['fields']['field_repo_external_link']['field'] = 'field_repo_external_link';
  $handler->display->display_options['fields']['field_repo_external_link']['click_sort_column'] = 'url';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'field_news_tags_tid';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['root_node'] = 'Creighton News';
  $handler->display->display_options['style_options']['item_node'] = 'News Item';
  $handler->display->display_options['path'] = 'news-export.xml';
  $export['news_gm_2012_data_export'] = $view;

  return $export;
}
