<?php
/**
 * @file
 * creighton_front_page_2015.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function creighton_front_page_2015_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'academics_search_schools_2015';
  $mini->category = 'Creighton frontpage';
  $mini->admin_title = 'Academics Search / Schools and Colleges 2015';
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
          0 => 1,
          1 => 'main-row',
          2 => 2,
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
        'class' => 'schools-colleges-shadow-inside container',
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
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'audience_links_front_page',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'audience_links_front_page' => array(
        'type' => 'region',
        'title' => 'Audience Links Front Page',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'faith_title',
          1 => 'faith_support_creighton',
        ),
        'parent' => 'main',
        'class' => 'container',
      ),
      'faith_support_creighton' => array(
        'type' => 'region',
        'title' => 'Support Creighton',
        'width' => '50',
        'width_type' => '%',
        'parent' => '2',
        'class' => 'right',
      ),
      'faith_title' => array(
        'type' => 'region',
        'title' => 'Faith',
        'width' => '50',
        'width_type' => '%',
        'parent' => '2',
        'class' => 'left',
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
      'audience_links_front_page' => NULL,
      'faith_support_creighton' => NULL,
      'faith_title' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4101d9ed-2ba3-480f-a359-fbbbf69fb3b7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-14ba0a8f-0a1c-46cd-bf5a-6da36393fa34';
    $pane->panel = 'audience_links_front_page';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Audience Links Front Page',
      'title' => '',
      'body' => '<ul class="container"><li><div id="links_curr_students"> </div><a href="http://www.creighton.edu/current-students">Current Students</a></li><li><div id="links_online_students"> </div><a href="https://blueline.instructure.com">Online Students</a></li><li><div id="links_alumni_friends"> </div><a href="http://alumni.creighton.edu/s/1250/alumni/home.aspx">Alumni and Friends</a></li><li><div id="links_parents_visitors"> </div><a href="http://www.creighton.edu/parents">Parents and Visitors</a></li><li><div id="links_faculty_staff"> </div><a href="http://www.creighton.edu/faculty-staff">Faculty and Staff</a></li></ul>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'secondary-audience-selector',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '14ba0a8f-0a1c-46cd-bf5a-6da36393fa34';
    $display->content['new-14ba0a8f-0a1c-46cd-bf5a-6da36393fa34'] = $pane;
    $display->panels['audience_links_front_page'][0] = 'new-14ba0a8f-0a1c-46cd-bf5a-6da36393fa34';
    $pane = new stdClass();
    $pane->pid = 'new-caed3ae0-996e-4140-b518-eadf15ca86cc';
    $pane->panel = 'faith_support_creighton';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<h4>Support the Creighton Tradition</h4>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'academics-search-titles faith-support',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'caed3ae0-996e-4140-b518-eadf15ca86cc';
    $display->content['new-caed3ae0-996e-4140-b518-eadf15ca86cc'] = $pane;
    $display->panels['faith_support_creighton'][0] = 'new-caed3ae0-996e-4140-b518-eadf15ca86cc';
    $pane = new stdClass();
    $pane->pid = 'new-d2af82f2-23d9-4662-b1d9-e0efcd2e6974';
    $pane->panel = 'faith_support_creighton';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Our alumni and donor partners make the Creighton experience possible. Learn how you can <a href="http://giving.creighton.edu">make a difference</a>.</p>',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'faith-support-copy',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd2af82f2-23d9-4662-b1d9-e0efcd2e6974';
    $display->content['new-d2af82f2-23d9-4662-b1d9-e0efcd2e6974'] = $pane;
    $display->panels['faith_support_creighton'][1] = 'new-d2af82f2-23d9-4662-b1d9-e0efcd2e6974';
    $pane = new stdClass();
    $pane->pid = 'new-28628b37-75f9-49c1-969f-c24990787b37';
    $pane->panel = 'faith_title';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Faith Title',
      'title' => '',
      'body' => '<h4>Faith in Education</h4>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'academics-search-titles faith-support',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '28628b37-75f9-49c1-969f-c24990787b37';
    $display->content['new-28628b37-75f9-49c1-969f-c24990787b37'] = $pane;
    $display->panels['faith_title'][0] = 'new-28628b37-75f9-49c1-969f-c24990787b37';
    $pane = new stdClass();
    $pane->pid = 'new-39828dee-f1a2-4471-a727-1cb09dcc7801';
    $pane->panel = 'faith_title';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Students of all <a href="/node/17">faith</a> traditions can grow spiritually at Creighton, a <a href="/node/16">Jesuit</a>, Catholic university rooted in Ignatian educational ideals.</p>',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'faith-support-copy',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '39828dee-f1a2-4471-a727-1cb09dcc7801';
    $display->content['new-39828dee-f1a2-4471-a727-1cb09dcc7801'] = $pane;
    $display->panels['faith_title'][1] = 'new-39828dee-f1a2-4471-a727-1cb09dcc7801';
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
    $pane->css = array(
      'css_id' => 'academics-search-find-major',
      'css_class' => 'academics-search-titles',
    );
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'academics-search-titles',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ac2f9546-084f-48d0-a68d-bc7b0062c849';
    $display->content['new-ac2f9546-084f-48d0-a68d-bc7b0062c849'] = $pane;
    $display->panels['right_'][0] = 'new-ac2f9546-084f-48d0-a68d-bc7b0062c849';
    $pane = new stdClass();
    $pane->pid = 'new-1656e24f-c7cb-4fd5-9d88-01ee975d6464';
    $pane->panel = 'right_';
    $pane->type = 'panels_mini';
    $pane->subtype = 'home_schools_and_colleges_2015';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1656e24f-c7cb-4fd5-9d88-01ee975d6464';
    $display->content['new-1656e24f-c7cb-4fd5-9d88-01ee975d6464'] = $pane;
    $display->panels['right_'][1] = 'new-1656e24f-c7cb-4fd5-9d88-01ee975d6464';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['academics_search_schools_2015'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'home_schools_and_colleges_2015';
  $mini->category = 'Creighton frontpage';
  $mini->admin_title = 'Home Schools and Colleges Links 2015';
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
  $export['home_schools_and_colleges_2015'] = $mini;

  return $export;
}
