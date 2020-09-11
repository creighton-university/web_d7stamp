<?php
/**
 * @file
 * front_page_mini_panels_and_menus.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function front_page_mini_panels_and_menus_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'first_menu_flyout';
  $mini->category = '';
  $mini->admin_title = 'first menu flyout';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4889b30b-0388-40da-9ffc-4a0ec2c79833';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6f43ddf5-0c19-44d6-ae90-f2cb3ecdcd5a';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-utility-menu';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6f43ddf5-0c19-44d6-ae90-f2cb3ecdcd5a';
    $display->content['new-6f43ddf5-0c19-44d6-ae90-f2cb3ecdcd5a'] = $pane;
    $display->panels['left'][0] = 'new-6f43ddf5-0c19-44d6-ae90-f2cb3ecdcd5a';
    $pane = new stdClass();
    $pane->pid = 'new-a80ac860-073b-4c90-8b6c-ce099c4f508d';
    $pane->panel = 'right';
    $pane->type = 'block';
    $pane->subtype = 'bean-profile---doug-mcdermott';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a80ac860-073b-4c90-8b6c-ce099c4f508d';
    $display->content['new-a80ac860-073b-4c90-8b6c-ce099c4f508d'] = $pane;
    $display->panels['right'][0] = 'new-a80ac860-073b-4c90-8b6c-ce099c4f508d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6f43ddf5-0c19-44d6-ae90-f2cb3ecdcd5a';
  $mini->display = $display;
  $export['first_menu_flyout'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'floating_schools_colleges';
  $mini->category = 'Front Page';
  $mini->admin_title = 'floating-schools-colleges';
  $mini->admin_description = 'This houses the schools and colleges menu as well as the academics search.';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'three_four_adaptive';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      11 => NULL,
      12 => NULL,
      13 => NULL,
      21 => NULL,
      22 => NULL,
      23 => NULL,
      31 => NULL,
      32 => NULL,
      33 => NULL,
      41 => NULL,
      42 => NULL,
      43 => NULL,
      44 => NULL,
      51 => NULL,
      52 => NULL,
      53 => NULL,
      54 => NULL,
      61 => NULL,
      62 => NULL,
      63 => NULL,
      64 => NULL,
      71 => NULL,
      72 => NULL,
      73 => NULL,
      74 => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'adf83f3f-3741-4099-81fa-4db042bc93bb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8bc65dc8-d671-4166-8015-c9ff7c7920f4';
    $pane->panel = '11';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'blue arrow',
      'title' => '',
      'body' => '<div class="blue-down-arrow">&nbsp;</div>',
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
    $pane->uuid = '8bc65dc8-d671-4166-8015-c9ff7c7920f4';
    $display->content['new-8bc65dc8-d671-4166-8015-c9ff7c7920f4'] = $pane;
    $display->panels['11'][0] = 'new-8bc65dc8-d671-4166-8015-c9ff7c7920f4';
    $pane = new stdClass();
    $pane->pid = 'new-e139c2bc-405c-4de4-8897-c7db3065ba87';
    $pane->panel = '11';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '9 schools toggleable',
      'title' => '',
      'body' => '<h2 class="toggler">9 Schools and Colleges</h2>',
      'format' => 'full_html_plus_media',
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
    $pane->uuid = 'e139c2bc-405c-4de4-8897-c7db3065ba87';
    $display->content['new-e139c2bc-405c-4de4-8897-c7db3065ba87'] = $pane;
    $display->panels['11'][1] = 'new-e139c2bc-405c-4de4-8897-c7db3065ba87';
    $pane = new stdClass();
    $pane->pid = 'new-f0cda9a1-b8e6-4906-8a49-da36b0d41cc0';
    $pane->panel = '11';
    $pane->type = 'menu_tree';
    $pane->subtype = 'menu-9-schools-and-colleges';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'parent' => 'menu-9-schools-and-colleges:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '1',
      'follow' => 0,
      'depth' => '1',
      'depth_relative' => 0,
      'expanded' => 0,
      'sort' => 0,
      'menu_name' => 'menu-9-schools-and-colleges',
      'parent_mlid' => '0',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'f0cda9a1-b8e6-4906-8a49-da36b0d41cc0';
    $display->content['new-f0cda9a1-b8e6-4906-8a49-da36b0d41cc0'] = $pane;
    $display->panels['11'][2] = 'new-f0cda9a1-b8e6-4906-8a49-da36b0d41cc0';
    $pane = new stdClass();
    $pane->pid = 'new-b83d9fbd-7b83-400f-aa13-72a9d0c8ab04';
    $pane->panel = '11';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-9-schools-and-colleges-col-';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'b83d9fbd-7b83-400f-aa13-72a9d0c8ab04';
    $display->content['new-b83d9fbd-7b83-400f-aa13-72a9d0c8ab04'] = $pane;
    $display->panels['11'][3] = 'new-b83d9fbd-7b83-400f-aa13-72a9d0c8ab04';
    $pane = new stdClass();
    $pane->pid = 'new-c5830fdf-dda2-4f0a-96b6-4758fc03118b';
    $pane->panel = '11';
    $pane->type = 'block';
    $pane->subtype = 'search-form';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'c5830fdf-dda2-4f0a-96b6-4758fc03118b';
    $display->content['new-c5830fdf-dda2-4f0a-96b6-4758fc03118b'] = $pane;
    $display->panels['11'][4] = 'new-c5830fdf-dda2-4f0a-96b6-4758fc03118b';
    $pane = new stdClass();
    $pane->pid = 'new-a6f6288d-6ff7-4613-b164-14f6bab5367c';
    $pane->panel = '11';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Searchbox',
      'title' => '',
      'body' => '<div class="search-block-form">
  Find a major or program:
  	<form _lpchecked="1" action="/program-search" method="get" style="position:relative;">
        <label for="program-search" class="hidden-element">SEARCH FOR PROGRAMS</label>
     <div class="views-widget-filter-field_aca_prg_title_value form-item form-type-textfield form-item-title">
       <input class="form-text" id="program-search" maxlength="128" name="term" type="text" placeholder="Search" value="" style="padding:2px 0 2px 12px;margin-top:3px;">
    </div>
     <input class="form-submit" id="edit-submit-program-table" name="" type="submit" value="Search" style="display:none;"> </form>
</div>',
      'format' => 'full_html_plus_media',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'a6f6288d-6ff7-4613-b164-14f6bab5367c';
    $display->content['new-a6f6288d-6ff7-4613-b164-14f6bab5367c'] = $pane;
    $display->panels['11'][5] = 'new-a6f6288d-6ff7-4613-b164-14f6bab5367c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f0cda9a1-b8e6-4906-8a49-da36b0d41cc0';
  $mini->display = $display;
  $export['floating_schools_colleges'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'fullmenutoo';
  $mini->category = '';
  $mini->admin_title = 'fullmenutoo';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'three_four_adaptive';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      11 => NULL,
      12 => NULL,
      13 => NULL,
      21 => NULL,
      22 => NULL,
      23 => NULL,
      31 => NULL,
      32 => NULL,
      33 => NULL,
      41 => NULL,
      42 => NULL,
      43 => NULL,
      44 => NULL,
      51 => NULL,
      52 => NULL,
      53 => NULL,
      54 => NULL,
      61 => NULL,
      62 => NULL,
      63 => NULL,
      64 => NULL,
      71 => NULL,
      72 => NULL,
      73 => NULL,
      74 => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0d6c18a7-2e84-40b4-af94-f3aad8895d79';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3a74377e-b82b-43a6-8a5b-24c5a7004b5c';
    $pane->panel = '12';
    $pane->type = 'page_logo';
    $pane->subtype = 'page_logo';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3a74377e-b82b-43a6-8a5b-24c5a7004b5c';
    $display->content['new-3a74377e-b82b-43a6-8a5b-24c5a7004b5c'] = $pane;
    $display->panels['12'][0] = 'new-3a74377e-b82b-43a6-8a5b-24c5a7004b5c';
    $pane = new stdClass();
    $pane->pid = 'new-eb0686d8-b066-4be7-b1b4-3611fc5b0611';
    $pane->panel = '12';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'main menu panel logo',
      'title' => '',
      'body' => '<a href="/" rel="home" id="logo" title="Home" class=""><img src="/sites/all/themes/custom/web_themes/creighton_2016/images/logos/CU_Logo_2x.png" alt="Home" class=""></a>',
      'format' => 'full_html_plus_media',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-page-logo',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'eb0686d8-b066-4be7-b1b4-3611fc5b0611';
    $display->content['new-eb0686d8-b066-4be7-b1b4-3611fc5b0611'] = $pane;
    $display->panels['12'][1] = 'new-eb0686d8-b066-4be7-b1b4-3611fc5b0611';
    $pane = new stdClass();
    $pane->pid = 'new-caafffd7-2f7d-45ce-9aa5-d5fa5e0ec9e8';
    $pane->panel = '13';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
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
    $pane->uuid = 'caafffd7-2f7d-45ce-9aa5-d5fa5e0ec9e8';
    $display->content['new-caafffd7-2f7d-45ce-9aa5-d5fa5e0ec9e8'] = $pane;
    $display->panels['13'][0] = 'new-caafffd7-2f7d-45ce-9aa5-d5fa5e0ec9e8';
    $pane = new stdClass();
    $pane->pid = 'new-c5e8a3f4-6d29-468c-9968-e1c655b31799';
    $pane->panel = '13';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-1';
    $pane->shown = TRUE;
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
    $pane->uuid = 'c5e8a3f4-6d29-468c-9968-e1c655b31799';
    $display->content['new-c5e8a3f4-6d29-468c-9968-e1c655b31799'] = $pane;
    $display->panels['13'][1] = 'new-c5e8a3f4-6d29-468c-9968-e1c655b31799';
    $pane = new stdClass();
    $pane->pid = 'new-82a75f7b-5a60-42f6-afbc-a1cca7e6f071';
    $pane->panel = '22';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-menu-icons';
    $pane->shown = TRUE;
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'medium-icons',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '82a75f7b-5a60-42f6-afbc-a1cca7e6f071';
    $display->content['new-82a75f7b-5a60-42f6-afbc-a1cca7e6f071'] = $pane;
    $display->panels['22'][0] = 'new-82a75f7b-5a60-42f6-afbc-a1cca7e6f071';
    $pane = new stdClass();
    $pane->pid = 'new-aa9188bf-539b-4ee7-ba01-7d52c63d8e92';
    $pane->panel = '41';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-9-schools-and-colleges';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'dash-underline-links',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'aa9188bf-539b-4ee7-ba01-7d52c63d8e92';
    $display->content['new-aa9188bf-539b-4ee7-ba01-7d52c63d8e92'] = $pane;
    $display->panels['41'][0] = 'new-aa9188bf-539b-4ee7-ba01-7d52c63d8e92';
    $pane = new stdClass();
    $pane->pid = 'new-53f83fc4-c2af-4ffa-a073-fc61f597830a';
    $pane->panel = '42';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-9-schools-and-colleges-col-';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '<invisible>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'panel-block-header-display-none dash-underline-links panel-block-right-border',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '53f83fc4-c2af-4ffa-a073-fc61f597830a';
    $display->content['new-53f83fc4-c2af-4ffa-a073-fc61f597830a'] = $pane;
    $display->panels['42'][0] = 'new-53f83fc4-c2af-4ffa-a073-fc61f597830a';
    $pane = new stdClass();
    $pane->pid = 'new-3645fa5e-8eca-4d44-bc9d-20f90979fe3c';
    $pane->panel = '43';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-information-for';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'dash-underline-links',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3645fa5e-8eca-4d44-bc9d-20f90979fe3c';
    $display->content['new-3645fa5e-8eca-4d44-bc9d-20f90979fe3c'] = $pane;
    $display->panels['43'][0] = 'new-3645fa5e-8eca-4d44-bc9d-20f90979fe3c';
    $pane = new stdClass();
    $pane->pid = 'new-2ba5522f-922d-4d3d-bc16-7d0a4e1d1c0d';
    $pane->panel = '44';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-information-for-col-2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '<invisible>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'panel-block-header-display-none dash-underline-links',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2ba5522f-922d-4d3d-bc16-7d0a4e1d1c0d';
    $display->content['new-2ba5522f-922d-4d3d-bc16-7d0a4e1d1c0d'] = $pane;
    $display->panels['44'][0] = 'new-2ba5522f-922d-4d3d-bc16-7d0a4e1d1c0d';
    $pane = new stdClass();
    $pane->pid = 'new-c98f1ff0-6d9a-4a85-a064-391592c66159';
    $pane->panel = '51';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Mega Menu Resources Heading',
      'title' => 'Resources',
      'body' => '<p>for Current Students, Faculty and Staff</p>',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'mega-menu-custom-heading',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c98f1ff0-6d9a-4a85-a064-391592c66159';
    $display->content['new-c98f1ff0-6d9a-4a85-a064-391592c66159'] = $pane;
    $display->panels['51'][0] = 'new-c98f1ff0-6d9a-4a85-a064-391592c66159';
    $pane = new stdClass();
    $pane->pid = 'new-7aff2a32-c31c-4c3e-ab4a-68a8445ab5f9';
    $pane->panel = '51';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-resources';
    $pane->shown = TRUE;
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'small-icons',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7aff2a32-c31c-4c3e-ab4a-68a8445ab5f9';
    $display->content['new-7aff2a32-c31c-4c3e-ab4a-68a8445ab5f9'] = $pane;
    $display->panels['51'][1] = 'new-7aff2a32-c31c-4c3e-ab4a-68a8445ab5f9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['fullmenutoo'] = $mini;

  return $export;
}
