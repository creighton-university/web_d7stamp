<?php
/**
 * @file
 * events_admissions.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function events_admissions_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'events_summary';
  $view->description = 'All views of the the Creighton Events feature';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events Views';
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

  /* Display: Events Summary (new) */
  $handler = $view->new_display('page', 'Events Summary (new)', 'page_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Node id';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '170';
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
  $handler->display->display_options['fields']['field_event_date_4']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_name']['element_wrapper_class'] = 'creighton-event-name';
  /* Field: Time start end */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['ui_name'] = 'Time start end';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = 'Time start end';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_short_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_short_description']['element_wrapper_class'] = 'creighton-event-short-description';
  /* Field: Content: Signup link */
  $handler->display->display_options['fields']['field_signup_link']['id'] = 'field_signup_link';
  $handler->display->display_options['fields']['field_signup_link']['table'] = 'field_data_field_signup_link';
  $handler->display->display_options['fields']['field_signup_link']['field'] = 'field_signup_link';
  $handler->display->display_options['fields']['field_signup_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_signup_link']['element_wrapper_class'] = 'creighton-event-signup-link';
  $handler->display->display_options['fields']['field_signup_link']['click_sort_column'] = 'url';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_location']['element_wrapper_class'] = 'creighton-event-location';
  /* Field: Content: Contact email */
  $handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contact_email']['element_wrapper_class'] = 'creighton-event-contact-email';
  $handler->display->display_options['fields']['field_contact_email']['type'] = 'email_plain';
  /* Field: Date (Month dd, yyyy) start and end */
  $handler->display->display_options['fields']['field_event_date_5']['id'] = 'field_event_date_5';
  $handler->display->display_options['fields']['field_event_date_5']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_5']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_5']['ui_name'] = 'Date (Month dd, yyyy) start and end';
  $handler->display->display_options['fields']['field_event_date_5']['label'] = 'Date (Month dd, yyyy) start and end';
  $handler->display->display_options['fields']['field_event_date_5']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_date_6']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_date_7']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_date_8']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_date_9']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_date_10']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<table class="event-summary-table">
<tbody>
<tr>
<td rowspan="2" class="event-calendar-icon-cell">
<div class="calendar-cell-top">[field_event_date_9]</div>
<div class="calendar-cell-bottom">[field_event_date_10]</div>
</td>
<td class="event-title-description-cell">
<div class="event-title-name">[field_event_name]</div>
<div class="event-description">[body]</div>
</td>
<td class="event-right-link" rowspan="2">
<div class="signup-link">
[field_signup_link]
</div>
<div class="more-information-link">
<a href="[path]">More Information</a>
</div>
<div class="contact-link">
<a href="mailto:[field_contact_email]">Contact</a>
</div>
</td>

</tr>
<tr>
<td class="event-date-location-cell">
    <div class="date-time-location">
        <div class="event-date-display">
        [field_event_date_4]
        </div>
        <div class="event-time-display">
        [field_event_date_1]
        </div>
        <div class="event-location-display">
        [field_event_location]
        </div>
    </div>
</td>

</tr>
</tbody>
</table>
';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'events-summary';

  /* Display: Events List Brief */
  $handler = $view->new_display('block', 'Events List Brief', 'block_1');
  $handler->display->display_options['display_description'] = 'Brief descriptions of upcoming events';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Node id';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Date (Mon dd, yyyy) start and end */
  $handler->display->display_options['fields']['field_event_date_4']['id'] = 'field_event_date_4';
  $handler->display->display_options['fields']['field_event_date_4']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_4']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_4']['ui_name'] = 'Date (Mon dd, yyyy) start and end';
  $handler->display->display_options['fields']['field_event_date_4']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_4']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['field_event_name']['label'] = '';
  $handler->display->display_options['fields']['field_event_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_name']['element_wrapper_class'] = 'creighton-event-name';
  /* Field: Time start end */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['ui_name'] = 'Time start end';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['element_wrapper_class'] = 'creighton-event-time-start-end';
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'time_only_12_hr_',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '75';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Short Description */
  $handler->display->display_options['fields']['field_event_short_description']['id'] = 'field_event_short_description';
  $handler->display->display_options['fields']['field_event_short_description']['table'] = 'field_data_field_event_short_description';
  $handler->display->display_options['fields']['field_event_short_description']['field'] = 'field_event_short_description';
  $handler->display->display_options['fields']['field_event_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_event_short_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_short_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_short_description']['element_wrapper_class'] = 'creighton-event-short-description';
  /* Field: Content: Signup link */
  $handler->display->display_options['fields']['field_signup_link']['id'] = 'field_signup_link';
  $handler->display->display_options['fields']['field_signup_link']['table'] = 'field_data_field_signup_link';
  $handler->display->display_options['fields']['field_signup_link']['field'] = 'field_signup_link';
  $handler->display->display_options['fields']['field_signup_link']['label'] = '';
  $handler->display->display_options['fields']['field_signup_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_signup_link']['element_wrapper_class'] = 'creighton-event-signup-link';
  $handler->display->display_options['fields']['field_signup_link']['click_sort_column'] = 'url';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_location']['element_wrapper_class'] = 'creighton-event-location';
  /* Field: Content: Contact email */
  $handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contact_email']['element_wrapper_class'] = 'creighton-event-contact-email';
  $handler->display->display_options['fields']['field_contact_email']['type'] = 'email_plain';
  /* Field: Date (Month dd, yyyy) start and end */
  $handler->display->display_options['fields']['field_event_date_5']['id'] = 'field_event_date_5';
  $handler->display->display_options['fields']['field_event_date_5']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_5']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_5']['ui_name'] = 'Date (Month dd, yyyy) start and end';
  $handler->display->display_options['fields']['field_event_date_5']['label'] = 'Date (Month dd, yyyy) start and end';
  $handler->display->display_options['fields']['field_event_date_5']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_date_6']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_date_7']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_date_8']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_date_9']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_date_10']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<table class="cusunday-summary-table">
<tbody>
<tr>
<td class="event-calendar-icon-cell">
<div class="calendar-cell-top">[field_event_date_9]</div>
<div class="calendar-cell-bottom">[field_event_date_10]</div>
</td>

<td class="event-date-location-cell">
    <div class="date-time-location">
        <div class="event-date-display">
        [field_event_location]
        </div>
        <div class="event-time-display">
        [field_event_date_1]
        </div>
    </div>
</td>
<td class="event-right-link">
<div class="signup-link">
[field_signup_link]
</div>
<div class="contact-link">
<a href="mailto:[field_contact_email]">Contact</a>
</div>
</td>
</tr>
</tbody>
</table>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: Events list date box-vert */
  $handler = $view->new_display('block', 'Events list date box-vert', 'block_2');
  $handler->display->display_options['display_description'] = 'Vertical view of events';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Upcoming events title';
  $handler->display->display_options['header']['area']['content'] = '<h2><a href="about/events-webinars" >Upcoming Events</a></h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html_plus_media';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Node id';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '90';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '1',
  );
  /* Field: Date (Mon dd, yyyy) start and end */
  $handler->display->display_options['fields']['field_event_date_4']['id'] = 'field_event_date_4';
  $handler->display->display_options['fields']['field_event_date_4']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_4']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_4']['ui_name'] = 'Date (Mon dd, yyyy) start and end';
  $handler->display->display_options['fields']['field_event_date_4']['label'] = '(Mon dd, yyyy) start and end';
  $handler->display->display_options['fields']['field_event_date_4']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_event_name']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_event_name']['element_wrapper_class'] = 'creighton-event-name';
  /* Field: Time start end */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['ui_name'] = 'Time start end';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = 'Time start end';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_short_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_short_description']['element_wrapper_class'] = 'creighton-event-short-description';
  /* Field: Content: Signup link */
  $handler->display->display_options['fields']['field_signup_link']['id'] = 'field_signup_link';
  $handler->display->display_options['fields']['field_signup_link']['table'] = 'field_data_field_signup_link';
  $handler->display->display_options['fields']['field_signup_link']['field'] = 'field_signup_link';
  $handler->display->display_options['fields']['field_signup_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_signup_link']['element_wrapper_class'] = 'creighton-event-signup-link';
  $handler->display->display_options['fields']['field_signup_link']['click_sort_column'] = 'url';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_location']['element_wrapper_class'] = 'creighton-event-location';
  /* Field: Content: Contact email */
  $handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contact_email']['element_wrapper_class'] = 'creighton-event-contact-email';
  $handler->display->display_options['fields']['field_contact_email']['type'] = 'email_plain';
  /* Field: Date (Month dd, yyyy) start and end */
  $handler->display->display_options['fields']['field_event_date_5']['id'] = 'field_event_date_5';
  $handler->display->display_options['fields']['field_event_date_5']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_5']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_5']['ui_name'] = 'Date (Month dd, yyyy) start and end';
  $handler->display->display_options['fields']['field_event_date_5']['label'] = 'Date (Month dd, yyyy) start and end';
  $handler->display->display_options['fields']['field_event_date_5']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_date_6']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_date_7']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_date_8']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_date_9']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_date_10']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_10']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_10']['element_wrapper_class'] = 'creighton-event-date-day-start-end';
  $handler->display->display_options['fields']['field_event_date_10']['settings'] = array(
    'format_type' => 'day_only_no_zeros',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'logic online time';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php

if (strpos(strtolower($data->field_field_event_location[0][\'raw\'][\'value\']), "online") === FALSE) {
	print($data->field_field_event_date_1[0][\'rendered\'][\'#markup\']);
}

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
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
			[field_event_date_9]
		</div>
		<div class="box-bottom-day">
			[field_event_date_10]
		</div>
	</div><!-- .creighton-event-calendar-box -->
	<div class="cu-event-sign-up-link">
		[field_signup_link]
	</div>
</div><!-- .creighton-event-calendar-left -->
	<div class="creighton-event-calendar-right">
		<div class="creighton-event-brief-desc">
		<div class="cu-event-desc-top">
			<div class="cu-event-name">
			[field_event_name]<br>
		</div>
		<div class="cu-event-date">
			[field_event_date_5]
		</div>
		<div class="cu-event-time">
			[php]
		</div>
		<div class="cu-event-location">
			[field_event_location]
		</div>
		</div><!-- .cu-event-desc-top -->
		<div class="cu-event-desc-bottom">
			<div class="cu-event-summary">[body]</div>
			<div class="cu-event-more-info"><a href="[path]">More Information</a>
			</div>
		</div><!-- .cu-event-desc-bottom -->
	</div><!-- .creighton-event-brief-desc -->
	</div><!-- .creighton-event-calendar-right -->
</div><!-- .creighton-event-item -->
';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = '0';
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';

  /* Display: Events list date box-horiz */
  $handler = $view->new_display('block', 'Events list date box-horiz', 'block_3');
  $handler->display->display_options['display_description'] = 'Horizontal list of events';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Node id';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '170';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Date (Mon dd, yyyy) start and end */
  $handler->display->display_options['fields']['field_event_date_4']['id'] = 'field_event_date_4';
  $handler->display->display_options['fields']['field_event_date_4']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_4']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_4']['ui_name'] = 'Date (Mon dd, yyyy) start and end';
  $handler->display->display_options['fields']['field_event_date_4']['label'] = '(Mon dd, yyyy) start and end';
  $handler->display->display_options['fields']['field_event_date_4']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_event_name']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_event_name']['element_wrapper_class'] = 'creighton-event-name';
  /* Field: Time start end */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['ui_name'] = 'Time start end';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = 'Time start end';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_short_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_short_description']['element_wrapper_class'] = 'creighton-event-short-description';
  /* Field: Content: Signup link */
  $handler->display->display_options['fields']['field_signup_link']['id'] = 'field_signup_link';
  $handler->display->display_options['fields']['field_signup_link']['table'] = 'field_data_field_signup_link';
  $handler->display->display_options['fields']['field_signup_link']['field'] = 'field_signup_link';
  $handler->display->display_options['fields']['field_signup_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_signup_link']['element_wrapper_class'] = 'creighton-event-signup-link';
  $handler->display->display_options['fields']['field_signup_link']['click_sort_column'] = 'url';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_location']['element_wrapper_class'] = 'creighton-event-location';
  /* Field: Content: Contact email */
  $handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contact_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_contact_email']['alter']['text'] = '<a href="mailto:[field_contact_email-email]">Contact</a>';
  $handler->display->display_options['fields']['field_contact_email']['element_wrapper_class'] = 'creighton-event-contact-email';
  $handler->display->display_options['fields']['field_contact_email']['hide_empty'] = TRUE;
  /* Field: Date (Month dd, yyyy) start and end */
  $handler->display->display_options['fields']['field_event_date_5']['id'] = 'field_event_date_5';
  $handler->display->display_options['fields']['field_event_date_5']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_5']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_5']['ui_name'] = 'Date (Month dd, yyyy) start and end';
  $handler->display->display_options['fields']['field_event_date_5']['label'] = 'Date (Month dd, yyyy) start and end';
  $handler->display->display_options['fields']['field_event_date_5']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_date_6']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_date_7']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_date_8']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_date_9']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_date_10']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_10']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_10']['element_wrapper_class'] = 'creighton-event-date-day-start-end';
  $handler->display->display_options['fields']['field_event_date_10']['settings'] = array(
    'format_type' => 'day_only_no_zeros',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'logic online time';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php

if (strpos(strtolower($data->field_field_event_location[0][\'raw\'][\'value\']), "online") === FALSE) {
	print($data->field_field_event_date_1[0][\'rendered\'][\'#markup\']);
}

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
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
<div class="creighton-event-calendar-col-2">	
<div class="creighton-event-calendar-center">
		<div class="cu-event-name">
			[field_event_name]<br>
		</div>
		<div class="cu-event-summary">[body]</div>
		

		<div class="cu-event-date">
			[field_event_date_5]
		</div>
		<div class="cu-event-time">
			[php]
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
</div><!-- .creighton-event-calendar-col-2 -->
</div><!-- .creighton-event-item-horizontal -->';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  $handler->display->display_options['block_description'] = 'upcoming-events-horizontal';

  /* Display: Horiz with args */
  $handler = $view->new_display('block', 'Horiz with args', 'block_4');
  $handler->display->display_options['display_description'] = 'Horizontal list of events with argument';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Event Tag (field_event_tag) */
  $handler->display->display_options['relationships']['field_event_tag_tid']['id'] = 'field_event_tag_tid';
  $handler->display->display_options['relationships']['field_event_tag_tid']['table'] = 'field_data_field_event_tag';
  $handler->display->display_options['relationships']['field_event_tag_tid']['field'] = 'field_event_tag_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Node id';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '170';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Date (Mon dd, yyyy) start and end */
  $handler->display->display_options['fields']['field_event_date_4']['id'] = 'field_event_date_4';
  $handler->display->display_options['fields']['field_event_date_4']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_4']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_4']['ui_name'] = 'Date (Mon dd, yyyy) start and end';
  $handler->display->display_options['fields']['field_event_date_4']['label'] = '(Mon dd, yyyy) start and end';
  $handler->display->display_options['fields']['field_event_date_4']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_event_name']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_event_name']['element_wrapper_class'] = 'creighton-event-name';
  /* Field: Time start end */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['ui_name'] = 'Time start end';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = 'Time start end';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_short_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_short_description']['element_wrapper_class'] = 'creighton-event-short-description';
  /* Field: Content: Signup link */
  $handler->display->display_options['fields']['field_signup_link']['id'] = 'field_signup_link';
  $handler->display->display_options['fields']['field_signup_link']['table'] = 'field_data_field_signup_link';
  $handler->display->display_options['fields']['field_signup_link']['field'] = 'field_signup_link';
  $handler->display->display_options['fields']['field_signup_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_signup_link']['element_wrapper_class'] = 'creighton-event-signup-link';
  $handler->display->display_options['fields']['field_signup_link']['click_sort_column'] = 'url';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_location']['element_wrapper_class'] = 'creighton-event-location';
  /* Field: Content: Contact email */
  $handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contact_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_contact_email']['alter']['text'] = '<a href="mailto:[field_contact_email-email]">Contact</a>';
  $handler->display->display_options['fields']['field_contact_email']['element_wrapper_class'] = 'creighton-event-contact-email';
  $handler->display->display_options['fields']['field_contact_email']['hide_empty'] = TRUE;
  /* Field: Date (Month dd, yyyy) start and end */
  $handler->display->display_options['fields']['field_event_date_5']['id'] = 'field_event_date_5';
  $handler->display->display_options['fields']['field_event_date_5']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_5']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_5']['ui_name'] = 'Date (Month dd, yyyy) start and end';
  $handler->display->display_options['fields']['field_event_date_5']['label'] = 'Date (Month dd, yyyy) start and end';
  $handler->display->display_options['fields']['field_event_date_5']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_date_6']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_date_7']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_date_8']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_date_9']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_date_10']['exclude'] = TRUE;
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
<div class="creighton-event-calendar-col-2">	
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
</div><!-- .creighton-event-calendar-col-2 -->
</div><!-- .creighton-event-item-horizontal -->';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  $handler->display->display_options['block_description'] = 'events-horiz-args';
  $export['events_summary'] = $view;

  $view = new view();
  $view->name = 'events_views_division_student_life';
  $view->description = 'Division of Student Life view of imported events';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events_Views_Division_Student_Life';
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

  /* Display: List box horiz no summary */
  $handler = $view->new_display('block', 'List box horiz no summary', 'list_box_horiz_no_summary');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'list-box-horiz-no-summary';
  $handler->display->display_options['display_description'] = 'Horizontal list no summary';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Node id';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '170';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Date (Mon dd, yyyy) start and end */
  $handler->display->display_options['fields']['field_event_date_4']['id'] = 'field_event_date_4';
  $handler->display->display_options['fields']['field_event_date_4']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_4']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_4']['ui_name'] = 'Date (Mon dd, yyyy) start and end';
  $handler->display->display_options['fields']['field_event_date_4']['label'] = '(Mon dd, yyyy) start and end';
  $handler->display->display_options['fields']['field_event_date_4']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_4']['element_wrapper_class'] = 'creighton-event-us-standard-date';
  $handler->display->display_options['fields']['field_event_date_4']['settings'] = array(
    'format_type' => 'us_standard_date_only_',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Signup link */
  $handler->display->display_options['fields']['field_signup_link']['id'] = 'field_signup_link';
  $handler->display->display_options['fields']['field_signup_link']['table'] = 'field_data_field_signup_link';
  $handler->display->display_options['fields']['field_signup_link']['field'] = 'field_signup_link';
  $handler->display->display_options['fields']['field_signup_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_signup_link']['element_wrapper_class'] = 'creighton-event-signup-link';
  $handler->display->display_options['fields']['field_signup_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_signup_link']['type'] = 'link_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_signup_link]" target="_blank">[title]</a>';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Event Name */
  $handler->display->display_options['fields']['field_event_name']['id'] = 'field_event_name';
  $handler->display->display_options['fields']['field_event_name']['table'] = 'field_data_field_event_name';
  $handler->display->display_options['fields']['field_event_name']['field'] = 'field_event_name';
  $handler->display->display_options['fields']['field_event_name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_event_name']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_event_name']['element_wrapper_class'] = 'creighton-event-name';
  /* Field: Time start end */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['ui_name'] = 'Time start end';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = 'Time start end';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_short_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_short_description']['element_wrapper_class'] = 'creighton-event-short-description';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_location']['element_wrapper_class'] = 'creighton-event-location';
  /* Field: Content: Contact email */
  $handler->display->display_options['fields']['field_contact_email']['id'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['table'] = 'field_data_field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['field'] = 'field_contact_email';
  $handler->display->display_options['fields']['field_contact_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_contact_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_contact_email']['alter']['text'] = '<a href="mailto:[field_contact_email-email]">Contact</a>';
  $handler->display->display_options['fields']['field_contact_email']['element_wrapper_class'] = 'creighton-event-contact-email';
  $handler->display->display_options['fields']['field_contact_email']['hide_empty'] = TRUE;
  /* Field: Date (Month dd, yyyy) start and end */
  $handler->display->display_options['fields']['field_event_date_5']['id'] = 'field_event_date_5';
  $handler->display->display_options['fields']['field_event_date_5']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_5']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_5']['ui_name'] = 'Date (Month dd, yyyy) start and end';
  $handler->display->display_options['fields']['field_event_date_5']['label'] = 'Date (Month dd, yyyy) start and end';
  $handler->display->display_options['fields']['field_event_date_5']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_date_6']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_date_7']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_date_8']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_date_9']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_event_date_10']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_10']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_10']['element_wrapper_class'] = 'creighton-event-date-day-start-end';
  $handler->display->display_options['fields']['field_event_date_10']['settings'] = array(
    'format_type' => 'day_only_no_zeros',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'logic online time';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php

if (strpos(strtolower($data->field_field_event_location[0][\'raw\'][\'value\']), "online") === FALSE) {
	print($data->field_field_event_date_1[0][\'rendered\'][\'#markup\']);
}

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
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
<div class="creighton-event-calendar-col-2">	
<div class="creighton-event-calendar-center">
		<div class="cu-event-name">
			[title]<br>
		</div>

		

		<div class="cu-event-date">
			[field_event_date_5]
		</div>
		<div class="cu-event-time">
			[php]
		</div>
		<div class="cu-event-location">
			[field_event_location]
		</div>
			

	</div><!-- .creighton-event-calendar-center -->
	<div class="creighton-event-calendar-right">
			<div class="cu-event-sign-up-link">
		<a href="[field_signup_link]" target="_blank">VIEW EVENT</a>
	</div>
		<div class="cu-event-contact">
			[field_contact_email]

		</div>
	</div>
</div><!-- .creighton-event-calendar-col-2 -->
</div><!-- .creighton-event-item-horizontal -->';
  $handler->display->display_options['fields']['nothing']['element_label_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = TRUE;
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
    'event' => 'event',
  );
  /* Filter criterion: Content: Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  $handler->display->display_options['block_description'] = 'upcoming-events-horizontal';
  $export['events_views_division_student_life'] = $view;

  $view = new view();
  $view->name = 'imported_calendar_content_for_business';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Creighton Events Legacy Views';
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
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
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
  $handler->display->display_options['fields']['field_event_name']['exclude'] = TRUE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'time_only_12_hr_',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '
<div class="details">
   <h5><a href="[path]" title="[field_event_name]">[field_event_name]</a></h5>
   <span class="time">[field_event_date_1]</span>
   <a href="[path]" title="Learn More" class="btn-transparent-green">Learn more</a>
</div>';
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Date -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'today';

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
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'us_standard_date_only_',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Event Name */
  $handler->display->display_options['fields']['field_event_name_1']['id'] = 'field_event_name_1';
  $handler->display->display_options['fields']['field_event_name_1']['table'] = 'field_data_field_event_name';
  $handler->display->display_options['fields']['field_event_name_1']['field'] = 'field_event_name';
  $handler->display->display_options['fields']['field_event_name_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_name_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_name_1']['alter']['text'] = '<a href="[path]" title="[field_event_name_1]">[field_event_name_1]</a>';
  $handler->display->display_options['fields']['field_event_name_1']['element_type'] = 'h5';
  $handler->display->display_options['fields']['field_event_name_1']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'time_only_12_hr_',
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
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="[field_imported_cal_link]" title="[title]">[title]</a>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h5';
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
    'trim_length' => '50',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]" title="Learn More" class="btn-transparent-green">Learn more</a>

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

  /* Display: Business events for front page */
  $handler = $view->new_display('block', 'Business events for front page', 'block_1');
  $export['imported_calendar_content_for_business'] = $view;

  return $export;
}
