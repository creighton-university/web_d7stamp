<?php
/**
 * @file
 * intercollege_transfer_workflow.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function intercollege_transfer_workflow_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view__panel_context_37152613-6628-49b0-99df-a8c6c337c281';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left_title' => NULL,
      'center' => NULL,
    ),
    'center' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '519615e3-f27e-4e75-bfe0-ed12b233ce14';
  $display->storage_type = 'unknown';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e1673490-113b-4ee8-9b89-80a5313e29be';
  $pane->panel = 'center';
  $pane->type = 'entity_view';
  $pane->subtype = 'user';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'argument_entity_id:user_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e1673490-113b-4ee8-9b89-80a5313e29be';
  $display->content['new-e1673490-113b-4ee8-9b89-80a5313e29be'] = $pane;
  $display->panels['center'][0] = 'new-e1673490-113b-4ee8-9b89-80a5313e29be';
  $pane = new stdClass();
  $pane->pid = 'new-168a4310-85de-4d60-942d-f2a5a72f4503';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'user_transfer_status';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => ' %user:field_netid_account',
    'url' => '',
    'display' => 'ctools_context_1',
    'context' => array(
      0 => 'argument_entity_id:user_1.field_netid_account',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '168a4310-85de-4d60-942d-f2a5a72f4503';
  $display->content['new-168a4310-85de-4d60-942d-f2a5a72f4503'] = $pane;
  $display->panels['center'][1] = 'new-168a4310-85de-4d60-942d-f2a5a72f4503';
  $pane = new stdClass();
  $pane->pid = 'new-e6726df4-9c8d-4011-8eeb-69eb5a104a4c';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'user_transfer_status-panel_pane_1';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'e6726df4-9c8d-4011-8eeb-69eb5a104a4c';
  $display->content['new-e6726df4-9c8d-4011-8eeb-69eb5a104a4c'] = $pane;
  $display->panels['center'][2] = 'new-e6726df4-9c8d-4011-8eeb-69eb5a104a4c';
  $pane = new stdClass();
  $pane->pid = 'new-e08c6276-f631-4715-b2bf-24fb8d9af753';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'user_transfer_status';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'context' => array(
      0 => 'argument_entity_id:user_1.field_netid_account',
    ),
    'override_title' => 1,
    'override_title_text' => 'Transfers',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'e08c6276-f631-4715-b2bf-24fb8d9af753';
  $display->content['new-e08c6276-f631-4715-b2bf-24fb8d9af753'] = $pane;
  $display->panels['center'][3] = 'new-e08c6276-f631-4715-b2bf-24fb8d9af753';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view__panel_context_37152613-6628-49b0-99df-a8c6c337c281'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function intercollege_transfer_workflow_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'business_dean';
  $page->task = 'page';
  $page->admin_title = 'Business Dean';
  $page->admin_description = '';
  $page->path = 'workflow/ict/business';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 10,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_business_dean__panel_context_b83a753a-9282-4dcb-b062-da418c0822b3';
  $handler->task = 'page';
  $handler->subtask = 'business_dean';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left_region' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '45464c77-b44e-48d3-a676-6742e0e259f7';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_nursing_dean__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d62542f1-0a73-4d7a-8e9c-598315eb06e6';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'creighton_workflow_dashboard';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page_5',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd62542f1-0a73-4d7a-8e9c-598315eb06e6';
  $display->content['new-d62542f1-0a73-4d7a-8e9c-598315eb06e6'] = $pane;
  $display->panels['center'][0] = 'new-d62542f1-0a73-4d7a-8e9c-598315eb06e6';
  $pane = new stdClass();
  $pane->pid = 'new-8e6d259a-b4b3-4a13-9b17-db5eae65ee62';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'creighton_workflow_dashboard';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page_3',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8e6d259a-b4b3-4a13-9b17-db5eae65ee62';
  $display->content['new-8e6d259a-b4b3-4a13-9b17-db5eae65ee62'] = $pane;
  $display->panels['center'][1] = 'new-8e6d259a-b4b3-4a13-9b17-db5eae65ee62';
  $pane = new stdClass();
  $pane->pid = 'new-14679cb0-ab78-494d-a2fc-c510df1204e9';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'creighton_workflow_dashboard';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page_14',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '14679cb0-ab78-494d-a2fc-c510df1204e9';
  $display->content['new-14679cb0-ab78-494d-a2fc-c510df1204e9'] = $pane;
  $display->panels['center'][2] = 'new-14679cb0-ab78-494d-a2fc-c510df1204e9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['business_dean'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ccas_dean';
  $page->task = 'page';
  $page->admin_title = 'CCAS Dean';
  $page->admin_description = '';
  $page->path = 'workflow/ict/ccas';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 7,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ccas_dean__panel_context_9e0ce55b-0379-437f-9c33-f6b766a51ee5';
  $handler->task = 'page';
  $handler->subtask = 'ccas_dean';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left_region' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '45464c77-b44e-48d3-a676-6742e0e259f7';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_nursing_dean__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8b07efc4-2255-4c18-8eff-3789a328e42f';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'creighton_workflow_dashboard';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page_7',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8b07efc4-2255-4c18-8eff-3789a328e42f';
  $display->content['new-8b07efc4-2255-4c18-8eff-3789a328e42f'] = $pane;
  $display->panels['center'][0] = 'new-8b07efc4-2255-4c18-8eff-3789a328e42f';
  $pane = new stdClass();
  $pane->pid = 'new-ade3dd18-819a-44ab-b388-30fc61ff1e9e';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'creighton_workflow_dashboard';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page_11',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ade3dd18-819a-44ab-b388-30fc61ff1e9e';
  $display->content['new-ade3dd18-819a-44ab-b388-30fc61ff1e9e'] = $pane;
  $display->panels['center'][1] = 'new-ade3dd18-819a-44ab-b388-30fc61ff1e9e';
  $pane = new stdClass();
  $pane->pid = 'new-899008c5-109b-4be9-8f0b-6cb224065a92';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'creighton_workflow_dashboard';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page_13',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '899008c5-109b-4be9-8f0b-6cb224065a92';
  $display->content['new-899008c5-109b-4be9-8f0b-6cb224065a92'] = $pane;
  $display->panels['center'][2] = 'new-899008c5-109b-4be9-8f0b-6cb224065a92';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ccas_dean'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ccd';
  $page->task = 'page';
  $page->admin_title = 'CCD';
  $page->admin_description = '';
  $page->path = 'ccd';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ccd__panel';
  $handler->task = 'page';
  $handler->subtask = 'ccd';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible:my_creighton';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_title',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '79.63306534735108',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'left_title' => array(
        'type' => 'region',
        'title' => 'left title',
        'width' => '20.366934652648936',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left_title' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a5ad82dd-07c5-4d52-a089-1208255d6e57';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ccd__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-cdfaf41d-72fe-4af6-855d-63632385ec56';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'current_dean_display';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '%1',
    'url' => '',
    'display' => 'page_4',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'cdfaf41d-72fe-4af6-855d-63632385ec56';
  $display->content['new-cdfaf41d-72fe-4af6-855d-63632385ec56'] = $pane;
  $display->panels['center'][0] = 'new-cdfaf41d-72fe-4af6-855d-63632385ec56';
  $pane = new stdClass();
  $pane->pid = 'new-da2e59fd-d37f-45e7-9865-001862444996';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'current_dean_display';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '%1',
    'url' => '',
    'display' => 'page',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'da2e59fd-d37f-45e7-9865-001862444996';
  $display->content['new-da2e59fd-d37f-45e7-9865-001862444996'] = $pane;
  $display->panels['center'][1] = 'new-da2e59fd-d37f-45e7-9865-001862444996';
  $pane = new stdClass();
  $pane->pid = 'new-568ec3ee-23cc-44a7-b96f-8fbabc0272a6';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'current_dean_display';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '@1',
    'url' => '',
    'display' => 'page_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '568ec3ee-23cc-44a7-b96f-8fbabc0272a6';
  $display->content['new-568ec3ee-23cc-44a7-b96f-8fbabc0272a6'] = $pane;
  $display->panels['center'][2] = 'new-568ec3ee-23cc-44a7-b96f-8fbabc0272a6';
  $pane = new stdClass();
  $pane->pid = 'new-c59ef455-5cb9-46d9-a70c-558b183499e2';
  $pane->panel = 'left_title';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'pagetitle',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<link href="https://fonts.googleapis.com/css?family=Open+Sans+Condensed:700" rel="stylesheet">
<link href="https://fonts.googleapis.com/css?family=Open+Sans:400,600,700" rel="stylesheet">
<h4>Change Undergraduate College</h4>',
    'format' => 'full_html_plus_media',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c59ef455-5cb9-46d9-a70c-558b183499e2';
  $display->content['new-c59ef455-5cb9-46d9-a70c-558b183499e2'] = $pane;
  $display->panels['left_title'][0] = 'new-c59ef455-5cb9-46d9-a70c-558b183499e2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ccd'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'cfd';
  $page->task = 'page';
  $page->admin_title = 'CFD';
  $page->admin_description = '';
  $page->path = 'cfd';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_cfd__panel_context_57730f3a-d0f3-4eb2-a34c-85ea1ce2cd06';
  $handler->task = 'page';
  $handler->subtask = 'cfd';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'flexible:my_creighton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
      'left_title' => NULL,
      'left_region' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a5ad82dd-07c5-4d52-a089-1208255d6e57';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ccd__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c9f0938b-0d28-4c7e-a899-2b7cbfbd396e';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'current_dean_display';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '%1',
    'url' => '',
    'display' => 'page_4',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c9f0938b-0d28-4c7e-a899-2b7cbfbd396e';
  $display->content['new-c9f0938b-0d28-4c7e-a899-2b7cbfbd396e'] = $pane;
  $display->panels['center'][0] = 'new-c9f0938b-0d28-4c7e-a899-2b7cbfbd396e';
  $pane = new stdClass();
  $pane->pid = 'new-da2e59fd-d37f-45e7-9865-001862444996';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'current_dean_display';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '%1',
    'url' => '',
    'display' => 'page',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'da2e59fd-d37f-45e7-9865-001862444996';
  $display->content['new-da2e59fd-d37f-45e7-9865-001862444996'] = $pane;
  $display->panels['center'][1] = 'new-da2e59fd-d37f-45e7-9865-001862444996';
  $pane = new stdClass();
  $pane->pid = 'new-dd4183cd-1bef-4730-8923-fe077b150a30';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'current_dean_display';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '%1',
    'url' => '',
    'display' => 'page_3',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'coolgrey',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'dd4183cd-1bef-4730-8923-fe077b150a30';
  $display->content['new-dd4183cd-1bef-4730-8923-fe077b150a30'] = $pane;
  $display->panels['center'][2] = 'new-dd4183cd-1bef-4730-8923-fe077b150a30';
  $pane = new stdClass();
  $pane->pid = 'new-380f3683-542a-4130-bfd0-a907e19165dc';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'current_dean_display';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '%1',
    'url' => '',
    'display' => 'page_2',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '380f3683-542a-4130-bfd0-a907e19165dc';
  $display->content['new-380f3683-542a-4130-bfd0-a907e19165dc'] = $pane;
  $display->panels['center'][3] = 'new-380f3683-542a-4130-bfd0-a907e19165dc';
  $pane = new stdClass();
  $pane->pid = 'new-fb364aaf-40da-4c26-a5be-f4749e59bc3c';
  $pane->panel = 'left_title';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'pagetitle',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<link href="https://fonts.googleapis.com/css?family=Open+Sans+Condensed:700" rel="stylesheet">
<link href="https://fonts.googleapis.com/css?family=Open+Sans:400,600,700" rel="stylesheet">
<h4>Change Undergraduate College</h4>',
    'format' => 'full_html_plus_media',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'fb364aaf-40da-4c26-a5be-f4749e59bc3c';
  $display->content['new-fb364aaf-40da-4c26-a5be-f4749e59bc3c'] = $pane;
  $display->panels['left_title'][0] = 'new-fb364aaf-40da-4c26-a5be-f4749e59bc3c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['cfd'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'cps_dean';
  $page->task = 'page';
  $page->admin_title = 'CPS Dean';
  $page->admin_description = '';
  $page->path = 'workflow/ict/cps';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 9,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_cps_dean__panel_context_7ad42cac-50b9-4d87-8902-011f4099f3da';
  $handler->task = 'page';
  $handler->subtask = 'cps_dean';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left_region' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '45464c77-b44e-48d3-a676-6742e0e259f7';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_nursing_dean__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-46d8cf3b-ef79-4909-af5c-3582fd64b496';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'creighton_workflow_dashboard';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page_8',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '46d8cf3b-ef79-4909-af5c-3582fd64b496';
  $display->content['new-46d8cf3b-ef79-4909-af5c-3582fd64b496'] = $pane;
  $display->panels['center'][0] = 'new-46d8cf3b-ef79-4909-af5c-3582fd64b496';
  $pane = new stdClass();
  $pane->pid = 'new-01aefd52-5b5e-4936-a6e1-b389aae6d062';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'creighton_workflow_dashboard';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page_12',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '01aefd52-5b5e-4936-a6e1-b389aae6d062';
  $display->content['new-01aefd52-5b5e-4936-a6e1-b389aae6d062'] = $pane;
  $display->panels['center'][1] = 'new-01aefd52-5b5e-4936-a6e1-b389aae6d062';
  $pane = new stdClass();
  $pane->pid = 'new-2a1b84f7-a0af-4be5-a277-e6008988a2d9';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'creighton_workflow_dashboard';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page_15',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '2a1b84f7-a0af-4be5-a277-e6008988a2d9';
  $display->content['new-2a1b84f7-a0af-4be5-a277-e6008988a2d9'] = $pane;
  $display->panels['center'][2] = 'new-2a1b84f7-a0af-4be5-a277-e6008988a2d9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['cps_dean'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ict';
  $page->task = 'page';
  $page->admin_title = 'CICT';
  $page->admin_description = '';
  $page->path = 'cict';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ict__print-view';
  $handler->task = 'page';
  $handler->subtask = 'ict';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Print View',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'print-view',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left_title' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a5ad82dd-07c5-4d52-a089-1208255d6e57';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ccd__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c59ef455-5cb9-46d9-a70c-558b183499e2';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'pagetitle',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<link href="https://fonts.googleapis.com/css?family=Open+Sans+Condensed:700" rel="stylesheet">
<link href="https://fonts.googleapis.com/css?family=Open+Sans:400,600,700" rel="stylesheet">
<h4>Change Undergraduate College</h4>',
    'format' => 'full_html_plus_media',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c59ef455-5cb9-46d9-a70c-558b183499e2';
  $display->content['new-c59ef455-5cb9-46d9-a70c-558b183499e2'] = $pane;
  $display->panels['center'][0] = 'new-c59ef455-5cb9-46d9-a70c-558b183499e2';
  $pane = new stdClass();
  $pane->pid = 'new-cdfaf41d-72fe-4af6-855d-63632385ec56';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'current_dean_display';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '%1',
    'url' => '',
    'display' => 'page_4',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'cdfaf41d-72fe-4af6-855d-63632385ec56';
  $display->content['new-cdfaf41d-72fe-4af6-855d-63632385ec56'] = $pane;
  $display->panels['center'][1] = 'new-cdfaf41d-72fe-4af6-855d-63632385ec56';
  $pane = new stdClass();
  $pane->pid = 'new-da2e59fd-d37f-45e7-9865-001862444996';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'current_dean_display';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '%1',
    'url' => '',
    'display' => 'page',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'da2e59fd-d37f-45e7-9865-001862444996';
  $display->content['new-da2e59fd-d37f-45e7-9865-001862444996'] = $pane;
  $display->panels['center'][2] = 'new-da2e59fd-d37f-45e7-9865-001862444996';
  $pane = new stdClass();
  $pane->pid = 'new-1137c88c-75ff-4c3f-93fc-8785b45f3440';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'current_dean_display';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '%1',
    'url' => '',
    'display' => 'page_3',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '1137c88c-75ff-4c3f-93fc-8785b45f3440';
  $display->content['new-1137c88c-75ff-4c3f-93fc-8785b45f3440'] = $pane;
  $display->panels['center'][3] = 'new-1137c88c-75ff-4c3f-93fc-8785b45f3440';
  $pane = new stdClass();
  $pane->pid = 'new-0133232b-1309-4eb5-a352-89964fb05daf';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'current_dean_display';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '%1',
    'url' => '',
    'display' => 'page_5',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '0133232b-1309-4eb5-a352-89964fb05daf';
  $display->content['new-0133232b-1309-4eb5-a352-89964fb05daf'] = $pane;
  $display->panels['center'][4] = 'new-0133232b-1309-4eb5-a352-89964fb05daf';
  $pane = new stdClass();
  $pane->pid = 'new-26b276d5-d74a-471c-a0c2-8a9138be7491';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'print_ui-print-links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '26b276d5-d74a-471c-a0c2-8a9138be7491';
  $display->content['new-26b276d5-d74a-471c-a0c2-8a9138be7491'] = $pane;
  $display->panels['center'][5] = 'new-26b276d5-d74a-471c-a0c2-8a9138be7491';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ict__panel_context_a804037c-daa2-4932-a649-a554e461ff44';
  $handler->task = 'page';
  $handler->subtask = 'ict';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible:my_creighton';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_title',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '79.63306534735108',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'left_title' => array(
        'type' => 'region',
        'title' => 'left title',
        'width' => '20.366934652648936',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left_title' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a5ad82dd-07c5-4d52-a089-1208255d6e57';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ccd__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-cdfaf41d-72fe-4af6-855d-63632385ec56';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'current_dean_display';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '%1',
    'url' => '',
    'display' => 'page_4',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'cdfaf41d-72fe-4af6-855d-63632385ec56';
  $display->content['new-cdfaf41d-72fe-4af6-855d-63632385ec56'] = $pane;
  $display->panels['center'][0] = 'new-cdfaf41d-72fe-4af6-855d-63632385ec56';
  $pane = new stdClass();
  $pane->pid = 'new-da2e59fd-d37f-45e7-9865-001862444996';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'current_dean_display';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '%1',
    'url' => '',
    'display' => 'page',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'da2e59fd-d37f-45e7-9865-001862444996';
  $display->content['new-da2e59fd-d37f-45e7-9865-001862444996'] = $pane;
  $display->panels['center'][1] = 'new-da2e59fd-d37f-45e7-9865-001862444996';
  $pane = new stdClass();
  $pane->pid = 'new-1137c88c-75ff-4c3f-93fc-8785b45f3440';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'current_dean_display';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '%1',
    'url' => '',
    'display' => 'page_3',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '1137c88c-75ff-4c3f-93fc-8785b45f3440';
  $display->content['new-1137c88c-75ff-4c3f-93fc-8785b45f3440'] = $pane;
  $display->panels['center'][2] = 'new-1137c88c-75ff-4c3f-93fc-8785b45f3440';
  $pane = new stdClass();
  $pane->pid = 'new-0133232b-1309-4eb5-a352-89964fb05daf';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'current_dean_display';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '%1',
    'url' => '',
    'display' => 'page_5',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '0133232b-1309-4eb5-a352-89964fb05daf';
  $display->content['new-0133232b-1309-4eb5-a352-89964fb05daf'] = $pane;
  $display->panels['center'][3] = 'new-0133232b-1309-4eb5-a352-89964fb05daf';
  $pane = new stdClass();
  $pane->pid = 'new-26b276d5-d74a-471c-a0c2-8a9138be7491';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'print_ui-print-links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '26b276d5-d74a-471c-a0c2-8a9138be7491';
  $display->content['new-26b276d5-d74a-471c-a0c2-8a9138be7491'] = $pane;
  $display->panels['center'][4] = 'new-26b276d5-d74a-471c-a0c2-8a9138be7491';
  $pane = new stdClass();
  $pane->pid = 'new-c59ef455-5cb9-46d9-a70c-558b183499e2';
  $pane->panel = 'left_title';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'pagetitle',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<link href="https://fonts.googleapis.com/css?family=Open+Sans+Condensed:700" rel="stylesheet">
<link href="https://fonts.googleapis.com/css?family=Open+Sans:400,600,700" rel="stylesheet">
<h4>Change Undergraduate College</h4>',
    'format' => 'full_html_plus_media',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c59ef455-5cb9-46d9-a70c-558b183499e2';
  $display->content['new-c59ef455-5cb9-46d9-a70c-558b183499e2'] = $pane;
  $display->panels['left_title'][0] = 'new-c59ef455-5cb9-46d9-a70c-558b183499e2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ict'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ict_confirmation_screen';
  $page->task = 'page';
  $page->admin_title = 'ICT Confirmation Screen';
  $page->admin_description = '';
  $page->path = 'ictcs';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ict_confirmation_screen__panel_context_be46d1ff-8e5b-4555-87f5-badfdfdf9797';
  $handler->task = 'page';
  $handler->subtask = 'ict_confirmation_screen';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_title',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '79.63306534735108',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'left_title' => array(
        'type' => 'region',
        'title' => 'left title',
        'width' => '20.366934652648936',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left_title' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a5ad82dd-07c5-4d52-a089-1208255d6e57';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ccd__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c59ef455-5cb9-46d9-a70c-558b183499e2';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'pagetitle',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<link href="https://fonts.googleapis.com/css?family=Open+Sans+Condensed:700" rel="stylesheet">
<link href="https://fonts.googleapis.com/css?family=Open+Sans:400,600,700" rel="stylesheet">
<h4>Change Undergraduate College</h4>',
    'format' => 'full_html_plus_media',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c59ef455-5cb9-46d9-a70c-558b183499e2';
  $display->content['new-c59ef455-5cb9-46d9-a70c-558b183499e2'] = $pane;
  $display->panels['center'][0] = 'new-c59ef455-5cb9-46d9-a70c-558b183499e2';
  $pane = new stdClass();
  $pane->pid = 'new-cdfaf41d-72fe-4af6-855d-63632385ec56';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'current_dean_display';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '%1',
    'url' => '',
    'display' => 'page_4',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'cdfaf41d-72fe-4af6-855d-63632385ec56';
  $display->content['new-cdfaf41d-72fe-4af6-855d-63632385ec56'] = $pane;
  $display->panels['center'][1] = 'new-cdfaf41d-72fe-4af6-855d-63632385ec56';
  $pane = new stdClass();
  $pane->pid = 'new-da2e59fd-d37f-45e7-9865-001862444996';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'current_dean_display';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '%1',
    'url' => '',
    'display' => 'page',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'da2e59fd-d37f-45e7-9865-001862444996';
  $display->content['new-da2e59fd-d37f-45e7-9865-001862444996'] = $pane;
  $display->panels['center'][2] = 'new-da2e59fd-d37f-45e7-9865-001862444996';
  $pane = new stdClass();
  $pane->pid = 'new-1137c88c-75ff-4c3f-93fc-8785b45f3440';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'current_dean_display';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '%1',
    'url' => '',
    'display' => 'page_3',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '1137c88c-75ff-4c3f-93fc-8785b45f3440';
  $display->content['new-1137c88c-75ff-4c3f-93fc-8785b45f3440'] = $pane;
  $display->panels['center'][3] = 'new-1137c88c-75ff-4c3f-93fc-8785b45f3440';
  $pane = new stdClass();
  $pane->pid = 'new-0133232b-1309-4eb5-a352-89964fb05daf';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'current_dean_display';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '%1',
    'url' => '',
    'display' => 'page_5',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '0133232b-1309-4eb5-a352-89964fb05daf';
  $display->content['new-0133232b-1309-4eb5-a352-89964fb05daf'] = $pane;
  $display->panels['center'][4] = 'new-0133232b-1309-4eb5-a352-89964fb05daf';
  $pane = new stdClass();
  $pane->pid = 'new-26b276d5-d74a-471c-a0c2-8a9138be7491';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'print_ui-print-links';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '26b276d5-d74a-471c-a0c2-8a9138be7491';
  $display->content['new-26b276d5-d74a-471c-a0c2-8a9138be7491'] = $pane;
  $display->panels['center'][5] = 'new-26b276d5-d74a-471c-a0c2-8a9138be7491';
  $pane = new stdClass();
  $pane->pid = 'new-409ba417-5d8f-4cdd-b6a6-5228dcb0741c';
  $pane->panel = 'center';
  $pane->type = 'menu_tree';
  $pane->subtype = 'menu-workflow';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'parent' => 'menu-workflow:0',
    'title_link' => 0,
    'admin_title' => '',
    'level' => '1',
    'follow' => 0,
    'depth' => '0',
    'depth_relative' => 0,
    'expanded' => 0,
    'sort' => 0,
    'menu_name' => 'menu-workflow',
    'parent_mlid' => '0',
    'override_title' => 1,
    'override_title_text' => '<none>',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '409ba417-5d8f-4cdd-b6a6-5228dcb0741c';
  $display->content['new-409ba417-5d8f-4cdd-b6a6-5228dcb0741c'] = $pane;
  $display->panels['center'][6] = 'new-409ba417-5d8f-4cdd-b6a6-5228dcb0741c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ict_confirmation_screen__panel_context_044fdcd6-511d-47f8-8078-db10124b49da';
  $handler->task = 'page';
  $handler->subtask = 'ict_confirmation_screen';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Print View',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left_title' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a5ad82dd-07c5-4d52-a089-1208255d6e57';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ccd__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c59ef455-5cb9-46d9-a70c-558b183499e2';
  $pane->panel = 'center';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'pagetitle',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<link href="https://fonts.googleapis.com/css?family=Open+Sans+Condensed:700" rel="stylesheet">
<link href="https://fonts.googleapis.com/css?family=Open+Sans:400,600,700" rel="stylesheet">
<h4>Change Undergraduate College</h4>',
    'format' => 'full_html_plus_media',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c59ef455-5cb9-46d9-a70c-558b183499e2';
  $display->content['new-c59ef455-5cb9-46d9-a70c-558b183499e2'] = $pane;
  $display->panels['center'][0] = 'new-c59ef455-5cb9-46d9-a70c-558b183499e2';
  $pane = new stdClass();
  $pane->pid = 'new-cdfaf41d-72fe-4af6-855d-63632385ec56';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'current_dean_display';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '%1',
    'url' => '',
    'display' => 'page_4',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'cdfaf41d-72fe-4af6-855d-63632385ec56';
  $display->content['new-cdfaf41d-72fe-4af6-855d-63632385ec56'] = $pane;
  $display->panels['center'][1] = 'new-cdfaf41d-72fe-4af6-855d-63632385ec56';
  $pane = new stdClass();
  $pane->pid = 'new-da2e59fd-d37f-45e7-9865-001862444996';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'current_dean_display';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '%1',
    'url' => '',
    'display' => 'page',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'da2e59fd-d37f-45e7-9865-001862444996';
  $display->content['new-da2e59fd-d37f-45e7-9865-001862444996'] = $pane;
  $display->panels['center'][2] = 'new-da2e59fd-d37f-45e7-9865-001862444996';
  $pane = new stdClass();
  $pane->pid = 'new-1137c88c-75ff-4c3f-93fc-8785b45f3440';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'current_dean_display';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '%1',
    'url' => '',
    'display' => 'page_3',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '1137c88c-75ff-4c3f-93fc-8785b45f3440';
  $display->content['new-1137c88c-75ff-4c3f-93fc-8785b45f3440'] = $pane;
  $display->panels['center'][3] = 'new-1137c88c-75ff-4c3f-93fc-8785b45f3440';
  $pane = new stdClass();
  $pane->pid = 'new-0133232b-1309-4eb5-a352-89964fb05daf';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'current_dean_display';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '%1',
    'url' => '',
    'display' => 'page_5',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '0133232b-1309-4eb5-a352-89964fb05daf';
  $display->content['new-0133232b-1309-4eb5-a352-89964fb05daf'] = $pane;
  $display->panels['center'][4] = 'new-0133232b-1309-4eb5-a352-89964fb05daf';
  $pane = new stdClass();
  $pane->pid = 'new-26b276d5-d74a-471c-a0c2-8a9138be7491';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'print_ui-print-links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '26b276d5-d74a-471c-a0c2-8a9138be7491';
  $display->content['new-26b276d5-d74a-471c-a0c2-8a9138be7491'] = $pane;
  $display->panels['center'][5] = 'new-26b276d5-d74a-471c-a0c2-8a9138be7491';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ict_confirmation_screen'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'nursing_dean';
  $page->task = 'page';
  $page->admin_title = 'Nursing Dean';
  $page->admin_description = '';
  $page->path = 'workflow/ict/nursing';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 8,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_nursing_dean__panel';
  $handler->task = 'page';
  $handler->subtask = 'nursing_dean';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left_region' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '45464c77-b44e-48d3-a676-6742e0e259f7';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_nursing_dean__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-65e42e3c-1aa6-4b11-86eb-355094a17f5b';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'creighton_workflow_dashboard';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page_9',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '65e42e3c-1aa6-4b11-86eb-355094a17f5b';
  $display->content['new-65e42e3c-1aa6-4b11-86eb-355094a17f5b'] = $pane;
  $display->panels['center'][0] = 'new-65e42e3c-1aa6-4b11-86eb-355094a17f5b';
  $pane = new stdClass();
  $pane->pid = 'new-9f21756e-f83c-4d5e-84d9-4e17053291b9';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'creighton_workflow_dashboard';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page_4',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '9f21756e-f83c-4d5e-84d9-4e17053291b9';
  $display->content['new-9f21756e-f83c-4d5e-84d9-4e17053291b9'] = $pane;
  $display->panels['center'][1] = 'new-9f21756e-f83c-4d5e-84d9-4e17053291b9';
  $pane = new stdClass();
  $pane->pid = 'new-0b140cd5-9d3d-45af-bea8-053fa4edd1d7';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'creighton_workflow_dashboard';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page_16',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '0b140cd5-9d3d-45af-bea8-053fa4edd1d7';
  $display->content['new-0b140cd5-9d3d-45af-bea8-053fa4edd1d7'] = $pane;
  $display->panels['center'][2] = 'new-0b140cd5-9d3d-45af-bea8-053fa4edd1d7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['nursing_dean'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'spahp_dean';
  $page->task = 'page';
  $page->admin_title = 'SPAHP Dean';
  $page->admin_description = '';
  $page->path = 'workflow/ict/spahp';
  $page->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 11,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_spahp_dean__panel_context_d02e3951-8d5f-4f2d-b530-f07aced3c063';
  $handler->task = 'page';
  $handler->subtask = 'spahp_dean';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left_region' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '45464c77-b44e-48d3-a676-6742e0e259f7';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_nursing_dean__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-d7644a17-4388-4e52-bbbc-5bcddf8e9294';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'creighton_workflow_dashboard';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page_6',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd7644a17-4388-4e52-bbbc-5bcddf8e9294';
  $display->content['new-d7644a17-4388-4e52-bbbc-5bcddf8e9294'] = $pane;
  $display->panels['center'][0] = 'new-d7644a17-4388-4e52-bbbc-5bcddf8e9294';
  $pane = new stdClass();
  $pane->pid = 'new-479846c1-e61d-4c20-a2c0-2527c117ed60';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'creighton_workflow_dashboard';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page_10',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '479846c1-e61d-4c20-a2c0-2527c117ed60';
  $display->content['new-479846c1-e61d-4c20-a2c0-2527c117ed60'] = $pane;
  $display->panels['center'][1] = 'new-479846c1-e61d-4c20-a2c0-2527c117ed60';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['spahp_dean'] = $page;

  return $pages;

}
