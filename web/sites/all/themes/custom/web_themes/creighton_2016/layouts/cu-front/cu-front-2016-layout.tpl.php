<?php
// Variables
$header_bkimg = ($page['header_image'] ? true : false);

$is_mobile = false;
$is_phone = false;
if (function_exists('mobile_detect_get_object')) {
	$detect = mobile_detect_get_object();
	$is_mobile = $detect->isMobile();
	if($is_mobile) {
		$is_phone = $detect->isTablet() ? false : true;
	}
}

// sub-site logo
$tls = variable_get('subsite_top_level_site', 'none');
$parents = variable_get('subsite_parents');
global $theme_path;

if($tls != 'none') {
  $logo = $theme_path . '/' . $parents[$tls]['logo'];
}

if ($logo) {
	// Get platform root directory
	$root_dir = getcwd();

	// Parse logo url to get dirname, filename, and extension
	$logo_url = parse_url($logo, PHP_URL_PATH);
	$logo_url = pathinfo($logo_url);

	// strip leading slash from $logo_url[dirname] if it exists
	$logo_dirname = (substr($logo_url['dirname'], 0, 1) == "/") ? substr($logo_url['dirname'], 1) : $logo_url['dirname'];
	$logo_filename = $logo_url['filename'];
	$logo_extension = $logo_url['extension'];

	// Reassemble URL for 1x adaptive image
	$logo_url = $GLOBALS['base_url'] . "/" . $logo_dirname . "/" . $logo_filename . $logo_extension;

	// Strip leading slash from dirname to get relative paths for file_exists()
	$logo_path = $logo_dirname . "/" . $logo_filename . $logo_extension;
	$logo_path_2x = $logo_dirname . "/" . $logo_filename . "_2x." . $logo_extension;

	if ($is_phone) {
		if (file_exists($logo_path_2x)) {
			$logo_url = $GLOBALS['base_url'] . "/" . $logo_dirname . "/" . $logo_filename . "_2x." . $logo_extension;

			// Get logo width and height
			list($logo_width, $logo_height) = getimagesize($root_dir . "/" . $logo_path_2x);
		}
	} else {
		// placeholder for larger image
		if (file_exists($logo_path_2x)) {
			$logo_url = $GLOBALS['base_url'] . "/" . $logo_dirname . "/" . $logo_filename . "_2x." . $logo_extension;

			// Get logo width and height
			list($logo_width, $logo_height) = getimagesize($root_dir . "/" . $logo_path_2x);
		}
	}

}

?>
<?php print render($page['alert_header']); ?>
<header class="l-header <?php if($header_bkimg) : print('header-bgimage'); endif; ?>" role="banner">
  <div class="secondary-header desktop">
		<div class="container">
			<div id="secondary-header-navigation">
				<div id="main-header-search">
					<div id="react-elastic-search"></div>
				</div>
				<div id="main-header-tranlinks">
					<?php if (!empty($page['header_tranlinks'])): ?>
						<?php print render($page['header_tranlinks']); ?>
					<?php endif; ?>
				</div>
				<div id="main-header-dropdown">
					<?php if ($logo) : ?>
						<div class="site-logo">
							<a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="site-logo">
								<img typeof="foaf:Image" src="<?php print $logo_url; ?>" width="<?php print $logo_width; ?>" height="<?php print $logo_height; ?>" alt="Home">
							</a>
						</div>
					<?php endif ?>
					<nav id="main_mega_nav" aria-label="menu">
						<ul class="nav-menu">
							<li class="nav-item">
								<a href="#" title="Menu" data-main-menu-ico="main-hamburger-menu-ico">
										MENU
								</a>
								<div class="sub-nav">
									<div class="container">
									  <?php if (!empty($page['dropdown_menu'])): ?>
										<?php print render($page['dropdown_menu']); ?>
										<script>
											creightonEdu.initMainNav();
										</script>
									  <?php endif; ?>
									</div>
								</div>
							</li>
						</ul>
					</nav>
				</div>
			</div>
		</div>
		<div class="container">
			<?php print render($page['secondary_header']); ?>
			<!--<span id="mobile-quicklinks" class="mobile-only">Quicklinks for Students/Faculty/Staff</span>-->
		</div>
  </div>
  <div class="main-header">
    <div class="container">
				<div class="l-branding">
					<?php if ($logo) : ?>
						<div class="site-logo">
							<a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="site-logo">
								<img typeof="foaf:Image" src="<?php print $logo_url; ?>" width="<?php print $logo_width; ?>" height="<?php print $logo_height; ?>" alt="Home">
							</a>
						</div>
					<?php endif ?>

					<?php // temp fix to provide heading to the front page ?>
					<h1 class="element-invisible">Creighton University</h1>

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
				</div>    <!-- end l-branding -->
			  <?php print render($page['header']); ?>
    </div>
  </div>
</header>
<div class="l-main cu-front-layout" role="main">

	<div class="content-body l-content">
		<?php print render($page['highlighted']); ?>
		<a id="main-content"></a>
		<?php print $messages; ?>
		<?php print render($tabs); ?>
		<?php print render($page['help']); ?>
		<?php if ($action_links): ?>
		  <ul class="action-links"><?php //print render($action_links); ?></ul>
		<?php endif; ?>
		<?php print render($page['content']); ?>
	</div>
</div>
<footer class="footer">
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
			<?php if ($logo) : ?>
				<div class="site-logo">
					<a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" class="site-logo">
						<img src="<?php print $logo_url; ?>" width="<?php print $logo_width; ?>" height="<?php print $logo_height; ?>" alt="Home">
					</a>
				</div>
			<?php endif ?>
      <?php print render($page['footer']['bean_footer-badge---us-news-2015']); ?>
    </div>
    <?php print render($page['footer']['bean_footer-contact-info-and-links']); ?>
  </div>
	<script>
		creightonEdu.initFrontPage();
	</script>
</footer>
