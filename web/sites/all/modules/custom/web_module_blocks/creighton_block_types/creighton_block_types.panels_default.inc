<?php
/**
 * @file
 * creighton_block_types.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function creighton_block_types_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'academics_search_schools_and_col';
  $mini->category = 'Creighton frontpage';
  $mini->admin_title = 'Academics Search / Schools and Colleges';
  $mini->admin_description = 'This mini panel includes the Academics Search block and the Schools and Colleges links.';
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
        'class' => 'academic-search-schools-colleges schools-colleges-shadow',
        'column_class' => '',
        'row_class' => '',
        'region_class' => '',
        'no_scale' => FALSE,
        'fixed_width' => '',
        'column_separation' => '0.5em',
        'region_separation' => '0.5em',
        'row_separation' => '0.5em',
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
        'class' => '',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
          1 => 'right_',
        ),
        'parent' => 'main',
        'class' => 'schools-colleges-shadow-inside',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'left',
      ),
      'right_' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'right',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'left_' => NULL,
      'schools_colleges' => NULL,
      'center' => NULL,
      'right_' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4101d9ed-2ba3-480f-a359-fbbbf69fb3b7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a94cf7cb-1e13-4c47-a435-fb5e8f957181';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Find a Major or Program',
      'title' => '',
      'body' => '<h4>Find a Major or Program</h4>',
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
    $pane->uuid = 'a94cf7cb-1e13-4c47-a435-fb5e8f957181';
    $display->content['new-a94cf7cb-1e13-4c47-a435-fb5e8f957181'] = $pane;
    $display->panels['left'][0] = 'new-a94cf7cb-1e13-4c47-a435-fb5e8f957181';
    $pane = new stdClass();
    $pane->pid = 'new-fff9c7c0-c932-4ca8-ac7a-3e6e23d56d10';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'cu_academics_search-academics_custom_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'cu-academics-search',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fff9c7c0-c932-4ca8-ac7a-3e6e23d56d10';
    $display->content['new-fff9c7c0-c932-4ca8-ac7a-3e6e23d56d10'] = $pane;
    $display->panels['left'][1] = 'new-fff9c7c0-c932-4ca8-ac7a-3e6e23d56d10';
    $pane = new stdClass();
    $pane->pid = 'new-ac2f9546-084f-48d0-a68d-bc7b0062c849';
    $pane->panel = 'right_';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Schools and Colleges',
      'title' => '',
      'body' => '<h4>Schools and Colleges</h4>',
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
    $pane->uuid = 'ac2f9546-084f-48d0-a68d-bc7b0062c849';
    $display->content['new-ac2f9546-084f-48d0-a68d-bc7b0062c849'] = $pane;
    $display->panels['right_'][0] = 'new-ac2f9546-084f-48d0-a68d-bc7b0062c849';
    $pane = new stdClass();
    $pane->pid = 'new-ca1525d6-ac00-468e-8fe2-d39faa39a577';
    $pane->panel = 'right_';
    $pane->type = 'panels_mini';
    $pane->subtype = 'home_schools_and_colleges_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'schools-colleges',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ca1525d6-ac00-468e-8fe2-d39faa39a577';
    $display->content['new-ca1525d6-ac00-468e-8fe2-d39faa39a577'] = $pane;
    $display->panels['right_'][1] = 'new-ca1525d6-ac00-468e-8fe2-d39faa39a577';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['academics_search_schools_and_col'] = $mini;

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
          1 => 'center',
          2 => 'right',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '23.225476686594206',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => '31.439192480815752',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => '45.33533083259005',
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
    $pane->pid = 'new-80ad44f3-2b56-469a-aad1-4f36cc82459a';
    $pane->panel = 'center';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Law, Medicine, Nursing',
      'title' => '',
      'body' => '<ul><li><a href="http://law.creighton.edu">Law</a></li><li><a href="http://medschool.creighton.edu/">Medicine</a></li><li><a href="http://nursing.creighton.edu">Nursing</a></li></ul>',
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
    $pane->uuid = '80ad44f3-2b56-469a-aad1-4f36cc82459a';
    $display->content['new-80ad44f3-2b56-469a-aad1-4f36cc82459a'] = $pane;
    $display->panels['center'][0] = 'new-80ad44f3-2b56-469a-aad1-4f36cc82459a';
    $pane = new stdClass();
    $pane->pid = 'new-f53aafed-7957-4cb9-a2a4-440c65514145';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'A&S, Business, Dentistry, Graduate',
      'title' => '',
      'body' => '<ul><li><a href="http://ccas.creighton.edu/">Arts & Sciences</a></li><li><a href="http://business.creighton.edu/">Business</a></li><li><a href="http://www.creighton.edu/dentalschool/">Dentistry</a></li><li><a href="http://www.creighton.edu/gradschool/">Graduate</a></li></ul>',
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
    $pane->uuid = 'f53aafed-7957-4cb9-a2a4-440c65514145';
    $display->content['new-f53aafed-7957-4cb9-a2a4-440c65514145'] = $pane;
    $display->panels['left'][0] = 'new-f53aafed-7957-4cb9-a2a4-440c65514145';
    $pane = new stdClass();
    $pane->pid = 'new-8a8bb103-b470-41aa-90ca-3609f8938e42';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Pharmacy and Health Professions, Professional Studies, Summer Sessions',
      'title' => '',
      'body' => '<ul><li><a href="http://spahp.creighton.edu/">Pharmacy & Health Professions</a></li><li><a href="http://www.creighton.edu/adultdegrees/">Professional Studies</a></li><li><a href="http://www.creighton.edu/summersessions">Summer Sessions</a></li></ul>',
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
    $pane->uuid = '8a8bb103-b470-41aa-90ca-3609f8938e42';
    $display->content['new-8a8bb103-b470-41aa-90ca-3609f8938e42'] = $pane;
    $display->panels['right'][0] = 'new-8a8bb103-b470-41aa-90ca-3609f8938e42';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f53aafed-7957-4cb9-a2a4-440c65514145';
  $mini->display = $display;
  $export['home_schools_and_colleges_links'] = $mini;

  return $export;
}
