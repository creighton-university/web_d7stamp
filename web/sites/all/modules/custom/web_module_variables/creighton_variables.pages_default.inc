<?php
/**
 * @file
 * creighton_variables.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function creighton_variables_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'cu-dashboard';
  $page->task = 'page';
  $page->admin_title = 'Creighton administrative dashboard';
  $page->admin_description = '';
  $page->path = 'admin/cu-dashboard';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'perm',
        'settings' => array(
          'perm' => 'access administration menu',
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'CU Dashboard',
    'name' => 'management',
    'weight' => '-100',
    'parent' => array(
      'type' => 'normal',
      'title' => 'CU Dashboard',
      'name' => 'management',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => TRUE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_dashboard_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'cu-dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Creighton Default',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
  );
  $display = new panels_display();
  $display->layout = 'mondrian';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'main' => NULL,
      'secondary' => NULL,
      'tertiary-first' => NULL,
      'tertiary-second' => NULL,
      'tertiary-third' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Creighton University Dashboard';
  $display->uuid = 'ac442fb1-e863-45a1-936f-cb82e5a9dd34';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-23662db5-e5bf-476d-8690-547b3a218cff';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Welcome',
      'title' => 'Welcome',
      'body' => '<p>This dashboard is a quick overview of things currently happening on site. The "Latest Content" view displays the latest 10 items added by you. The "Latest Blocks" view list the latest 10 blocks added to the site.</p>',
      'format' => 'filtered_html',
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
    $pane->uuid = '23662db5-e5bf-476d-8690-547b3a218cff';
    $display->content['new-23662db5-e5bf-476d-8690-547b3a218cff'] = $pane;
    $display->panels['main'][0] = 'new-23662db5-e5bf-476d-8690-547b3a218cff';
    $pane = new stdClass();
    $pane->pid = 'new-fd22767f-d135-46b0-a049-c276e82e7ae4';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'my_latest_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 1,
      'override_title_text' => 'My Recent Content',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fd22767f-d135-46b0-a049-c276e82e7ae4';
    $display->content['new-fd22767f-d135-46b0-a049-c276e82e7ae4'] = $pane;
    $display->panels['main'][1] = 'new-fd22767f-d135-46b0-a049-c276e82e7ae4';
    $pane = new stdClass();
    $pane->pid = 'new-bc577636-8d51-419b-9b36-c1a9d267268d';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'latest_blocks';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 1,
      'override_title_text' => 'Latest Blocks',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'bc577636-8d51-419b-9b36-c1a9d267268d';
    $display->content['new-bc577636-8d51-419b-9b36-c1a9d267268d'] = $pane;
    $display->panels['main'][2] = 'new-bc577636-8d51-419b-9b36-c1a9d267268d';
    $pane = new stdClass();
    $pane->pid = 'new-77e0e156-23c1-4acd-8c9f-e195b4c103c2';
    $pane->panel = 'secondary';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Create/Add Links',
      'title' => '',
      'body' => '<h3>Create/Add Pages to site</h3><ul><li><a href="/node/add/2tier-page">Add new 2nd Tier Page</a></li><li><a href="/node/add/content-page">Add new Content Page</a></li><li><a href="/node/add/webform">Add new Webform</a></li><li><a href="/node/add/panel/choose-layout">Add new Panel</a></li></ul><h3>Create/Add Blocks to site</h3><ul><li><a href="/block/add/contact-block">Contact Block</a></li><li><a href="/block/add/copy-block">Copy Block</a></li><li><a href="/block/add/featured-links">Featured Links</a></li><li><a href="/block/add/featured-related-content">Featured Related Content</a></li><li><a href="/block/add/front-page-audience">Front Page Audience</a></li><li><a href="/block/add/front-page-featured-content">Front Page Featured Content</a></li><li><a href="/block/add/front-page-slider">Front Page Slider</a></li><li><a href="/block/add/header-background-image">Header Background Image</a></li><li><a href="/block/add/inline-slider">Inline Slider</a></li><li><a href="/block/add/profile">Profile</a></li><li><a href="/block/add/promo-box">Promo Box</a></li><li><a href="/block/add/quote">Quote Box</a></li><li><a href="/block/add/related-links">Related Links</a></li><li><a href="/block/add/tabbed-accordion">Tabbed/Accordion</a></li></ul>',
      'format' => 'filtered_html',
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
    $pane->uuid = '77e0e156-23c1-4acd-8c9f-e195b4c103c2';
    $display->content['new-77e0e156-23c1-4acd-8c9f-e195b4c103c2'] = $pane;
    $display->panels['secondary'][0] = 'new-77e0e156-23c1-4acd-8c9f-e195b4c103c2';
    $pane = new stdClass();
    $pane->pid = 'new-80765fea-d27f-4cce-a231-8e3fc8eb5c0d';
    $pane->panel = 'tertiary-first';
    $pane->type = 'menus';
    $pane->subtype = 'menus';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'item1' => NULL,
      'item2' => NULL,
      'override_title' => 0,
      'override_title_text' => '',
      'menus' => array(
        'main-menu' => 'main-menu',
        'navigation' => 'navigation',
        'devel' => 0,
        'management' => 0,
        'user-menu' => 0,
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '80765fea-d27f-4cce-a231-8e3fc8eb5c0d';
    $display->content['new-80765fea-d27f-4cce-a231-8e3fc8eb5c0d'] = $pane;
    $display->panels['tertiary-first'][0] = 'new-80765fea-d27f-4cce-a231-8e3fc8eb5c0d';
    $pane = new stdClass();
    $pane->pid = 'new-0eeeae1d-6c1d-4e38-8cdc-603087d40ba7';
    $pane->panel = 'tertiary-second';
    $pane->type = 'views';
    $pane->subtype = 'latest_webform_submissions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0eeeae1d-6c1d-4e38-8cdc-603087d40ba7';
    $display->content['new-0eeeae1d-6c1d-4e38-8cdc-603087d40ba7'] = $pane;
    $display->panels['tertiary-second'][0] = 'new-0eeeae1d-6c1d-4e38-8cdc-603087d40ba7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['cu-dashboard'] = $page;

  return $pages;

}
