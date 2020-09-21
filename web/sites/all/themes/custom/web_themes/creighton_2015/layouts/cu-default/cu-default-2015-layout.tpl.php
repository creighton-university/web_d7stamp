<?php
// Variables
$header_bkimg = ($page['header_image'] ? true : false);

// sub-site logo
$tls = variable_get('subsite_top_level_site', 'none');
$parents = variable_get('subsite_parents');
global $theme_path;

if($tls != 'none') {
  $logo = $theme_path . '/' . $parents[$tls]['logo'];
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

            // strip leading slash from $logo_url[dirname] if it exists
            $logo_dirname = (substr($logo_url['dirname'], 0, 1) == "/") ? substr($logo_url['dirname'], 1) : $logo_url['dirname'];
            $logo_filename = $logo_url['filename'];
            $logo_extension = $logo_url['extension'];

            // Reassemble URL for 1x adaptive image
            $logo_url = $GLOBALS['base_url'] . "/" . $logo_dirname . "/" . $logo_filename . "." . $logo_extension;

            // Strip leading slash from dirname to get relative paths for file_exists()
            $logo_path = $logo_dirname . "/" . $logo_filename . "." . $logo_extension;
            $logo_path_1_5x = $logo_dirname . "/" . $logo_filename . "_1-5x." . $logo_extension;
            $logo_path_2x = $logo_dirname . "/" . $logo_filename . "_2x." . $logo_extension;

            // Reassemble URLs for 1.5x and 2x adaptive images
            // Check if 1.5x adaptive image exists; if not, then use 1x image
            if (file_exists($logo_path_1_5x)) {
              $logo_url_1_5x = $GLOBALS['base_url'] . "/" . $logo_dirname . "/" . $logo_filename . "_1-5x." . $logo_extension;
            }
            else {
              $logo_url_1_5x = $logo_url;
            }
            // Check if 2x adaptive image exists; if not, then use 1x image
            if (file_exists($logo_path_2x)) {
              $logo_url_2x = $GLOBALS['base_url'] . "/" . $logo_dirname . "/" . $logo_filename . "_2x." . $logo_extension;
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
      <div class="site-logo">
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="site-logo">
          <span data-picture="" data-alt="Home">
            <span data-src="<?php print $logo_url; ?>" data-width="<?php print $logo_width; ?>" data-height="<?php print $logo_height; ?>"></span>
            <span data-media="(min-width: 0em)" data-srcset="<?php print $logo_url; ?> 1x, <?php print $logo_url_1_5x; ?> 1.5x, <?php print $logo_url_2x; ?> 2x" data-width="<?php print $logo_width; ?>" data-height="<?php print $logo_height; ?>"></span>
            <noscript><img typeof="foaf:Image" src="<?php print $logo_url; ?>" width="<?php print $logo_width; ?>" height="<?php print $logo_height; ?>" alt="Home"></noscript>
          </span>
        </a>
      </div>
      <?php print render($page['footer']['bean_footer-badge---us-news-2015']); ?>
    </div>
      <?php print render($page['footer']['bean_footer-contact-info-and-links']); ?>
  </div>
</footer>
