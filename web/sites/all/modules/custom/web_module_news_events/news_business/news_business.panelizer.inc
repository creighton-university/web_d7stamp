<?php
/**
 * @file
 * news_business.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function news_business_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:news:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'news';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'f00b6369-2fb2-4397-9417-c5e8facb4f33';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a1debafc-8e4a-4d25-8538-506f941c8363';
    $pane->panel = 'center';
    $pane->type = 'token';
    $pane->subtype = 'node:title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'special',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a1debafc-8e4a-4d25-8538-506f941c8363';
    $display->content['new-a1debafc-8e4a-4d25-8538-506f941c8363'] = $pane;
    $display->panels['center'][0] = 'new-a1debafc-8e4a-4d25-8538-506f941c8363';
    $pane = new stdClass();
    $pane->pid = 'new-4d876181-1c69-4dc4-9c9d-f95714f84aba';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4d876181-1c69-4dc4-9c9d-f95714f84aba';
    $display->content['new-4d876181-1c69-4dc4-9c9d-f95714f84aba'] = $pane;
    $display->panels['center'][1] = 'new-4d876181-1c69-4dc4-9c9d-f95714f84aba';
    $pane = new stdClass();
    $pane->pid = 'new-01704fc9-4691-49c3-9cd9-79e0e2b26afe';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Administrative CSS',
      'title' => '',
      'body' => '<style type="text/css">
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
.special, #cu-event-list-horizontal-pane-id h2 {
display:block;
}
</style>',
      'format' => 'full_html_plus_media',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '01704fc9-4691-49c3-9cd9-79e0e2b26afe';
    $display->content['new-01704fc9-4691-49c3-9cd9-79e0e2b26afe'] = $pane;
    $display->panels['center'][2] = 'new-01704fc9-4691-49c3-9cd9-79e0e2b26afe';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-a1debafc-8e4a-4d25-8538-506f941c8363';
  $panelizer->display = $display;
  $export['node:news:default:default'] = $panelizer;

  return $export;
}
