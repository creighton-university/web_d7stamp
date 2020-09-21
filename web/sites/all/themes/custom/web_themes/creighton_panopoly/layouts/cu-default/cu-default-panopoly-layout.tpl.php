<?php
// Variables
$header_bkimg = ($page['header_image'] ? true : false);

// sub-site logo
$tls = variable_get('subsite_top_level_site', 'none');
$parents = variable_get('subsite_parents');
global $theme_path;

$is_subsite = false;
if($tls != 'none' && $tls != 'www') {
  $logo = $theme_path . '/' . $parents[$tls]['logo'];
  $is_subsite = true;
}

?>
<?php print render($page['alert_header']); ?>
<header class="l-header <?php if($header_bkimg) : print('header-bgimage'); endif; ?>" role="banner">  
  <div class="secondary-header desktop">
    <div class="container">
      <span id="mobile-quicklinks" class="mobile-only">Quicklinks for Students/Faculty/Staff</span>
      <?php print render($page['secondary_header']); ?>
    </div>
  </div>
  <div class="main-header">
    <div class="container">
      <div class="l-branding">
        <?php if ($logo): ?>
          <?php

            // Parse logo url to get dirname, filename, and extension
            $logo_url = parse_url($logo, PHP_URL_PATH);
            $logo_url_parts = pathinfo($logo_url);
	    $logo_dirname = $logo_url_parts['dirname'];
	    
              // Check the first instance of forward slash if it's at zero fine, but if not put one there.
              if (strpos($logo_dirname, '/') === 0) {
                $logo_path = $logo_dirname;
              } else {
                $logo_path = '/' . $logo_dirname;
              }

            // Check for logo file. If exists, continue processing
            $logo_exists = false;
            if (file_exists(substr($logo_path, 1). '/' . $logo_url_parts['basename'])) {
              $logo_exists = true;
              $logo_dirname = $logo_url_parts['dirname']; //pathinfo($logo_url, PATHINFO_DIRNAME);
              $logo_filename = $logo_url_parts['filename']; //pathinfo($logo_url, PATHINFO_FILENAME);
              $logo_extension = $logo_url_parts['extension']; //pathinfo($logo_url, PATHINFO_EXTENSION);

              if ($GLOBALS['is_https']) {
                $logo_urlresolved = $GLOBALS['base_secure_url'];
              } else {
                $logo_urlresolved = $GLOBALS['base_insecure_url'];
              }

              // build url from parts and add use the 2x size for responsive in lieu of saving a few k in filesize.
              $logo_path .= '/' . $logo_filename . '_2x.' . $logo_extension;
              $logo_urlresolved .= $logo_path;

              $logo_url = $logo_urlresolved;

              // Get platform root directory
              $root_dir = getcwd();

              // Get logo width and height
              list($logo_width, $logo_height) = getimagesize($root_dir . $logo_path);
            }
          ?>
          <div class="<?php $is_subsite ? print 'subsite-logo' : print 'site-logo'; ?>">
            <?php if ($logo_exists): ?>
              <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">
                <img typeof="foaf:Image" src="<?php print $logo_url; ?>" width="<?php print $logo_width; ?>" height="<?php print $logo_height; ?>" alt="Home">
              </a>
            <?php endif; ?>
          </div>
        <?php endif; ?>

        <?php if ($site_name || $site_slogan): ?>
          <?php if ($site_name): ?>
            <h1 class="site-name">
              <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
            </h1>
          <?php endif; ?>

          <?php if ($site_slogan): ?>
            <h2 class="site-slogan"><?php print $site_slogan; ?></h2>
          <?php endif; ?>
        <?php endif; ?>         
      </div>      
      <div class="quick-search-mobile outline-search">
        <div class="dropdown">
          <ul id="drop-main-menu-header" class="dropdown-menu">
            <li>
              <?php print render($page['footer']['menu_block_footer_main_menu']); ?>
            </li>
          </ul>
        </div>
        <form action="https://www.creighton.edu/search/results/">
          <input name="cx" type="hidden" value="015839161432768919274:z2n1gijj14s" />
          <input name="cof" type="hidden" value="FORID:9" />
          <input name="ie" type="hidden" value="UTF-8" />
          <label class="hidden-element" for="topsearch">Search</label>
          <input id="topsearch" name="q" placeholder="Search" type="text" value="" />
          <input class="Submit" type="submit" value="Submit" />
        </form>
      </div>      
      <?php print render($page['header']); ?>
    </div>  
  </div>   
</header>
  <div class="top">
    <?php if( $page['header_image'] ) : ?>
    <?php print render($page['header_image']); ?>
    <?php endif; ?>
  </div>

  <div class="l-main" role="main">
    <div class="container">
      <?php if($breadcrumb) : ?>
        <nav class="breadcrumb">
          <?php print $breadcrumb; ?>
        </nav>
      <?php endif; ?>

      <?php if($page['sidebar_first']): ?>
        <?php print render($page['sidebar_first']); ?>
      <?php endif; ?>
      <div class="content-body l-content">
        <?php print render($page['highlighted']); ?>
        <a id="main-content"></a>
        <?php //$menu_trail = menu_get_active_trail(); ?>

        <?php
            // Printing the page title in a span if there is a an active menu trail and this only happens if the
            // first sidebar is printed else print an h1
        ?>
        <?php print render($title_prefix); ?>
        <?php if( $page['sidebar_first'] ) : ?>
          <span class="element-hidden"><?php print $title; ?></span>
        <?php else : ?>
          <?php print render($title_prefix); ?>
          <h1 class="element-hidden"><?php print $title; ?></h1>
        <?php endif; ?>
        <?php print render($title_suffix); ?>

        <?php // all the instances of the page headline ?>
        <?php if(isset($node->field_content_page_headline) && $node->field_content_page_headline) : ?>
          <h2 class="special">
            <?php print render($node->field_content_page_headline['und'][0]['safe_value']); ?>
          </h2>
        <?php elseif(isset($node->field_webform_headline) && $node->field_webform_headline) : ?>
          <h2 class="special">
            <?php print render($node->field_webform_headline['und'][0]['safe_value']); ?>
          </h2>
        <?php elseif(isset($node->field_2tier_page_headline) && $node->field_2tier_page_headline) : ?>
          <h2 class="special">
            <?php print render($node->field_2tier_page_headline['und'][0]['safe_value']); ?>
          </h2>
        <?php endif; ?>


        <?php print $messages; ?>
        <?php print render($tabs); ?>
        <?php print render($page['help']); ?>
        <?php if ($action_links): ?>
          <ul class="action-links"><?php print render($action_links); ?></ul>
        <?php endif; ?>

        <?php // Add region for academics_program_title
          if( $page['academics_program_title'] ) : ?>
          <?php print render($page['academics_program_title']); ?>
        <?php endif; ?>

        <div class="content-wrapper">
          <?php print render($page['content']); ?>
          <?php print $feed_icons; ?>
        </div>
        <?php if( $page['sidebar_second'] ) : ?>
          <?php print render($page['sidebar_second']); ?>
        <?php endif; ?>
      </div>

    </div>

  </div>
<footer class="footer" role="contentinfo">
  <div class="container">     
    <?php print render($page['footer']['menu_block_footer_transaction_menu']); ?>
    <?php print render($page['footer']['cu_quick_search_blocks_footer_search_block']); ?>
    <div class="dropdown">
      <ul id="drop-main-menu-footer" class="dropdown-menu">
        <li>
          <?php print render($page['footer']['menu_block_footer_main_menu']); ?>
        </li>
      </ul>
    </div>
    <div id="footer-logo-badge">
      <?php if ($logo_exists): ?>
        <div class="l-branding">
          <div class="<?php $is_subsite ? print 'subsite-logo' : print 'site-logo'; ?>">
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home">
              <img typeof="foaf:Image" src="<?php print $logo_url; ?>" width="<?php print $logo_width; ?>" height="<?php print $logo_height; ?>" alt="Home">
            </a>
          </div>
        </div>
      <?php endif; ?>
      <?php print render($page['footer']['bean_footer-badge---us-news-2015']); ?>
    </div>
    <?php print render($page['footer']['bean_footer-contact-info-and-links']); ?>
  </div>
</footer>
