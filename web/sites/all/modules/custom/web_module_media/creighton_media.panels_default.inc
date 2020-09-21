<?php
/**
 * @file
 * creighton_media.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function creighton_media_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'home_schools_and_colleges_links';
  $mini->category = 'Creighton frontpage';
  $mini->admin_title = 'Home Schools and Colleges Links';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
          0 => 'left',
        ),
        'parent' => 'main',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Links',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '071bd2dd-04f6-4669-af04-438e7c13cc76';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f53aafed-7957-4cb9-a2a4-440c65514145';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="dropdown"><ul id="drop-school-college-select" class="dropdown-menu"><li><a class="fp-dropdown-links" href="#"><span class="mobile-accordion">Select One</span></a><div class="field-collection-view"><ul class="menu"><li class="fp-sub-menu"><a href="http://ccas.creighton.edu/">Arts & Sciences</a></li><li class="fp-sub-menu"><a href="http://law.creighton.edu">Law</a></li><li class="fp-sub-menu"><a href="http://spahp.creighton.edu/">Pharmacy & Health Professions</a></li><li class="fp-sub-menu"><a href="http://business.creighton.edu/">Business</a></li><li class="fp-sub-menu"><a href="http://medschool.creighton.edu/">Medicine</a></li><li class="fp-sub-menu"><a href="http://www.creighton.edu/adultdegrees/">Professional Studies</a></li><li class="fp-sub-menu"><a href="http://www.creighton.edu/dentalschool/">Dentistry</a></li><li class="fp-sub-menu"><a href="http://www.creighton.edu/nursing/">Nursing</a></li><li class="fp-sub-menu"><a href="http://www.creighton.edu/summersessions">Summer Sessions</a></li><li class="fp-sub-menu"><a href="http://www.creighton.edu/gradschool/">Graduate</a></li></ul></div></li></ul></div>',
      'format' => 'full_html',
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
    $pane->uuid = 'f53aafed-7957-4cb9-a2a4-440c65514145';
    $display->content['new-f53aafed-7957-4cb9-a2a4-440c65514145'] = $pane;
    $display->panels['left'][0] = 'new-f53aafed-7957-4cb9-a2a4-440c65514145';
    $pane = new stdClass();
    $pane->pid = 'new-80ad44f3-2b56-469a-aad1-4f36cc82459a';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '80ad44f3-2b56-469a-aad1-4f36cc82459a';
    $display->content['new-80ad44f3-2b56-469a-aad1-4f36cc82459a'] = $pane;
    $display->panels['left'][1] = 'new-80ad44f3-2b56-469a-aad1-4f36cc82459a';
    $pane = new stdClass();
    $pane->pid = 'new-8a8bb103-b470-41aa-90ca-3609f8938e42';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8a8bb103-b470-41aa-90ca-3609f8938e42';
    $display->content['new-8a8bb103-b470-41aa-90ca-3609f8938e42'] = $pane;
    $display->panels['left'][2] = 'new-8a8bb103-b470-41aa-90ca-3609f8938e42';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f53aafed-7957-4cb9-a2a4-440c65514145';
  $mini->display = $display;
  $export['home_schools_and_colleges_links'] = $mini;

  return $export;
}
