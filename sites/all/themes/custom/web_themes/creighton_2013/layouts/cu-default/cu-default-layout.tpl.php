<?php
  // Variables
  // $theme_path = drupal_get_path('theme',$GLOBALS['theme']);
  $header_bkimg = ($page['header_image'] ? true : false);
?>
  <?php print render($page['alert_header']); ?>
  <header class="l-header <?php if($header_bkimg) : print('header-bgimage'); endif; ?>" role="banner">    
    <div class="secondary-header desktop">
      <div class="container">
        <?php print render($page['secondary_header']); ?>
      </div>
    </div>
    <div class="main-header">
      <div class="container">
        <div class="l-branding">
          <?php if ($logo): ?>
            <?php
              // This theme supports adaptive images for the site logo in multipliers of 1x, 1.5x, and 2x. Each logo has three
              // files, one for each multiplier. These file are to be uploaded to the "images/logos" directory within the theme.
              // The 1x logo is the file that is referenced in the theme's settings (admin/appearance/settings/creighton_2013)
              // under "Logo Image Settings" -> "Path to custom logo".
              //
              // For example, three logo files are uploaded to "images/logos": cu_logo.png, cu_logo_1-5x.png, and cu_logo_2x.png.
              // The 1x logo is specified: "sites/all/themes/custom/creighton_2013/images/logos/cu_logo.png"

              // Parse logo url to get dirname, filename, and extension
              $logo_url = parse_url($logo, PHP_URL_PATH);
              $logo_url = pathinfo($logo_url);
              $logo_dirname = $logo_url['dirname'];
              $logo_filename = $logo_url['filename'];
              $logo_extension = $logo_url['extension'];
              // Reassemble URL for 1x adaptive image
              $logo_url = $GLOBALS['base_url'] . $logo_dirname . "/" . $logo_filename . "." . $logo_extension;
              // Strip leading slash from dirname to get relative paths for file_exists()
              $logo_path = substr($logo_dirname, 1) . "/" . $logo_filename . "." . $logo_extension;
              $logo_path_1_5x = substr($logo_dirname, 1) . "/" . $logo_filename . "_1-5x." . $logo_extension;
              $logo_path_2x = substr($logo_dirname, 1) . "/" . $logo_filename . "_2x." . $logo_extension;
              // Reassemble URLs for 1.5x and 2x adaptive images
              // Check if 1.5x adaptive image exists; if not, then use 1x image
              if (file_exists($logo_path_1_5x)) {
                $logo_url_1_5x = $GLOBALS['base_url'] . $logo_dirname . "/" . $logo_filename . "_1-5x." . $logo_extension;
              }
              else {
                $logo_url_1_5x = $logo_url;
              }
              // Check if 2x adaptive image exists; if not, then use 1x image
              if (file_exists($logo_path_2x)) {
                $logo_url_2x = $GLOBALS['base_url'] . $logo_dirname . "/" . $logo_filename . "_2x." . $logo_extension;
              }
              else {
                $logo_url_2x = $logo_url;
              }
              // Get platform root directory
              $root_dir = getcwd();
              // Get logo width and height
              list($logo_width, $logo_height) = getimagesize($root_dir . "/" . $logo_path);
            ?>
            <div class="site-logo">
              <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="site-logo">
                <span data-picture="" data-alt="Home">
                  <span data-src="<?php print $logo_url; ?>" data-width="<?php print $logo_width; ?>" data-height="<?php print $logo_height; ?>"></span>
                  <span data-media="(min-width: 0em)" data-srcset="<?php print $logo_url; ?> 1x, <?php print $logo_url_1_5x; ?> 1.5x, <?php print $logo_url_2x; ?> 2x" data-width="<?php print $logo_width; ?>" data-height="<?php print $logo_height; ?>"></span>
                  <noscript><img typeof="foaf:Image" src="<?php print $logo_url; ?>" width="<?php print $logo_width; ?>" height="<?php print $logo_height; ?>" alt="Home"></noscript>
                </span>
              </a>
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
        <a href="#main-navigation" class="mobile-menu-icon">Jump to navigation</a>
        <div class="quick-search-mobile">
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
        <nav class="breadcrumb" role="navigation">
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

  <footer class="l-footer" role="contentinfo">
    <div class="container">
      <div class="l-best-college">
      <?php if( $page['badge_footer']) : ?>
        <?php print render($page['badge_footer']); ?>
      <?php else : ?>
        <a class="best-college" href="//www.creighton.edu/about/rankings-reviews">
          <span data-picture="" data-alt="US News Best College">
            <span data-src="<?php print( $GLOBALS['base_url'] . '/' . drupal_get_path('theme',$GLOBALS['theme']) ); ?>/images/best-colleges_1x.png" data-width="241" data-height="288"></span>
            <span data-media="(min-width: 0em)" data-srcset="<?php print( $GLOBALS['base_url'] . '/' . drupal_get_path('theme',$GLOBALS['theme']) ); ?>/images/best-colleges_1x.png 1x, <?php print( $GLOBALS['base_url'] . '/' . drupal_get_path('theme',$GLOBALS['theme']) ); ?>/images/best-colleges_1-5x.png 1.5x, <?php print( $GLOBALS['base_url'] . '/' . drupal_get_path('theme',$GLOBALS['theme']) ); ?>/images/best-colleges_2x.png 2x" data-width="241" data-height="288"></span>
            <noscript><img typeof="foaf:Image" src="<?php print( $GLOBALS['base_url'] . '/' . drupal_get_path('theme',$GLOBALS['theme']) ); ?>/images/best-colleges_1x.png" width="241" height="288" alt="US News Best College"></noscript>
          </span>
      <?php endif; ?>
      </div>
        <div class="l-left-footer">
          <div class="site-logo">
            <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="site-logo">
              <span data-picture="" data-alt="Home">
                <span data-src="<?php print $logo_url; ?>" data-width="<?php print $logo_width; ?>" data-height="<?php print $logo_height; ?>"></span>
                <span data-media="(min-width: 0em)" data-srcset="<?php print $logo_url; ?> 1x, <?php print $logo_url_1_5x; ?> 1.5x, <?php print $logo_url_2x; ?> 2x" data-width="<?php print $logo_width; ?>" data-height="<?php print $logo_height; ?>"></span>
                <noscript><img typeof="foaf:Image" src="<?php print $logo_url; ?>" width="<?php print $logo_width; ?>" height="<?php print $logo_height; ?>" alt="Home"></noscript>
              </span>
            </a>
          </div>
          <?php print render($page['left_footer']); ?>
          <nav class="static-menu">
            <div class="menu-name-menu-static">
              <ul class="menu">
                <li><a href="https://careers.creighton.edu/applicants/jsp/shared/frameset/Frameset.jsp?time=1387813028113" title="Human Resources">Human Resources</a></li>
                <li><a href="http://www.creighton.edu/careercenter/jobs4jays/" title="Jobs4Jays">Jobs4Jays</a></li>
                <li><a href="http://www.creighton.edu/safety" title="Safety">Safety</a></li>
              </ul>
            </div>
          </nav>
          <p class="copyright">&copy; <?php print date('Y'); ?> Creighton University</p>
        </div>
      <?php if( $page['right_footer'] ) : ?>
        <div class="l-right-footer">
          <?php print render($page['right_footer']); ?>
        </div>
      <?php endif; ?>
    </div>
  </footer>

