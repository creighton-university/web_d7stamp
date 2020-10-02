<?php
/**
 * @file
 * front_page_parts.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function front_page_parts_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'front_page_featured_links';
  $mini->category = 'Front page';
  $mini->admin_title = 'Front Page Featured Links';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->title = '';
  $display->uuid = '19764b6e-d760-40a4-a595-7085c02084f0';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a7a14e9b-4989-4fbc-a105-e0ef60a75dd5';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'bean-featured-link---tuition';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a7a14e9b-4989-4fbc-a105-e0ef60a75dd5';
    $display->content['new-a7a14e9b-4989-4fbc-a105-e0ef60a75dd5'] = $pane;
    $display->panels['center'][0] = 'new-a7a14e9b-4989-4fbc-a105-e0ef60a75dd5';
    $pane = new stdClass();
    $pane->pid = 'new-70cf066a-69bf-4911-a8b5-f43756d09b07';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'bean-featured-link---why-creighton';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '70cf066a-69bf-4911-a8b5-f43756d09b07';
    $display->content['new-70cf066a-69bf-4911-a8b5-f43756d09b07'] = $pane;
    $display->panels['center'][1] = 'new-70cf066a-69bf-4911-a8b5-f43756d09b07';
    $pane = new stdClass();
    $pane->pid = 'new-bc08ae30-1cb5-49ca-919c-03b366c23d00';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'bean-front-page---find-a-program';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'bc08ae30-1cb5-49ca-919c-03b366c23d00';
    $display->content['new-bc08ae30-1cb5-49ca-919c-03b366c23d00'] = $pane;
    $display->panels['center'][2] = 'new-bc08ae30-1cb5-49ca-919c-03b366c23d00';
    $pane = new stdClass();
    $pane->pid = 'new-654d047a-7c07-47f7-b437-9bc968de2a85';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'bean-find-a-program';
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '654d047a-7c07-47f7-b437-9bc968de2a85';
    $display->content['new-654d047a-7c07-47f7-b437-9bc968de2a85'] = $pane;
    $display->panels['center'][3] = 'new-654d047a-7c07-47f7-b437-9bc968de2a85';
    $pane = new stdClass();
    $pane->pid = 'new-bb3c7fbd-7be9-4165-b6fe-0ea8a2ea0d67';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'bean-tuition';
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
    $pane->uuid = 'bb3c7fbd-7be9-4165-b6fe-0ea8a2ea0d67';
    $display->content['new-bb3c7fbd-7be9-4165-b6fe-0ea8a2ea0d67'] = $pane;
    $display->panels['center'][4] = 'new-bb3c7fbd-7be9-4165-b6fe-0ea8a2ea0d67';
    $pane = new stdClass();
    $pane->pid = 'new-6cf279c2-cf94-45fb-9048-ef2fc7105f30';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'bean-why-creighton';
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
    $pane->uuid = '6cf279c2-cf94-45fb-9048-ef2fc7105f30';
    $display->content['new-6cf279c2-cf94-45fb-9048-ef2fc7105f30'] = $pane;
    $display->panels['center'][5] = 'new-6cf279c2-cf94-45fb-9048-ef2fc7105f30';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-a7a14e9b-4989-4fbc-a105-e0ef60a75dd5';
  $mini->display = $display;
  $export['front_page_featured_links'] = $mini;

  return $export;
}
