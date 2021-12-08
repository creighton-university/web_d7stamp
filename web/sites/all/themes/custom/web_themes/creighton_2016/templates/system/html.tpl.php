<?php

/**
 * @file
 * Default theme implementation to display the basic html structure of a single
 * Drupal page.
 *
 * Variables:
 * - $css: An array of CSS files for the current page.
 * - $language: (object) The language the site is being displayed in.
 *   $language->language contains its textual representation.
 *   $language->dir contains the language direction. It will either be 'ltr' or
 *   'rtl'.
 * - $rdf_namespaces: All the RDF namespace prefixes used in the HTML document.
 * - $grddl_profile: A GRDDL profile allowing agents to extract the RDF data.
 * - $head_title: A modified version of the page title, for use in the TITLE
 *   tag.
 * - $head_title_array: (array) An associative array containing the string parts
 *   that were used to generate the $head_title variable, already prepared to be
 *   output as TITLE tag. The key/value pairs may contain one or more of the
 *   following, depending on conditions:
 *   - title: The title of the current page, if any.
 *   - name: The name of the site.
 *   - slogan: The slogan of the site, if any, and if there is no title.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $page_top: Initial markup from any modules that have altered the
 *   page. This variable should always be output first, before all other dynamic
 *   content.
 * - $page: The rendered page content.
 * - $page_bottom: Final closing markup from any modules that have altered the
 *   page. This variable should always be output last, after all other dynamic
 *   content.
 * - $classes String of classes that can be used to style contextually through
 *   CSS.
 *
 * @see template_preprocess()
 * @see template_preprocess_html()
 * @see template_process()
 * @see omega_preprocess_html()
 */
?>
<?php
    global $base_url;
    $absolute_theme_url =  $base_url . '/' . drupal_get_path('theme',$GLOBALS['theme']);
?>
<!DOCTYPE html>
<?php if (omega_extension_enabled('compatibility') && omega_theme_get_setting('omega_conditional_classes_html', TRUE)): ?>
  <!--[if IEMobile 7]><html class="no-js ie iem7" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"><![endif]-->
  <!--[if lte IE 6]><html class="no-js ie lt-ie9 lt-ie8 lt-ie7" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"><![endif]-->
  <!--[if (IE 7)&(!IEMobile)]><html class="no-js ie lt-ie9 lt-ie8" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"><![endif]-->
  <!--[if IE 8]><html class="no-js ie lt-ie9" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"><![endif]-->
  <!--[if (gte IE 9)|(gt IEMobile 7)]><html class="no-js ie" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces; ?>><![endif]-->
  <!--[if !IE]><!--><html class="no-js" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces; ?>><!--<![endif]-->
<?php else: ?>
  <html class="no-js" lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces; ?>>
<?php endif; ?>
<head>
  <title><?php print $head_title; ?></title>
  <?php print $head; ?>
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <?php print $styles; ?>
  <!--[if IE 8]><link href="<?php echo $absolute_theme_url; ?>/css/styles.data.png.css" rel="stylesheet"><![endif]-->
  <!--[if IE 8]><link href="<?php echo $absolute_theme_url; ?>/css/ie.css" rel="stylesheet"><![endif]-->
  <noscript><link href="<?php echo $absolute_theme_url; ?>/css/styles.fallback.css" rel="stylesheet"></noscript>
  <?php print $scripts; ?>
  <script type="text/javascript" src="https://cuwebteam.blob.core.windows.net/cuwebteam-relative-links-prod/relative-links.js"></script>
  <link rel="shortcut icon" href="<?php echo $absolute_theme_url; ?>/images/cu_favicon_16x16.ico">
  <link rel="apple-touch-icon" href="<?php echo $absolute_theme_url; ?>/images/cu_favicon_32x32.png">
  <link rel="apple-touch-icon" sizes="72x72" href="<?php echo $absolute_theme_url; ?>/images/cu_favicon_72x72.png">
  <link rel="apple-touch-icon" sizes="114x114" href="<?php echo $absolute_theme_url; ?>/images/cu_favicon_114x114.png">

  <link rel="stylesheet" href="<?php echo $absolute_theme_url; ?>/css/frontpage2016.css">
</head>
<body<?php print $attributes;?>>
<!-- subsite -->
<script>// adds subsite to class and site name.
var pathArray = window.location.host.split( '.' );
var noStage = pathArray[0].split('-');
var pathName = window.location.pathname;
var wwwHide = 'na';
var isBasicLogo = 'notbasiclogo';
if (pathArray[0] == 'www-stage' || noStage[0] == 'www' ) { wwwHide = 'www15'; }
if (pathArray[0] == 'admissions-stage' || pathName == '/president') { isBasicLogo = 'basicLogo'; }
document.body.classList.add( noStage[0], 'subsite', wwwHide, isBasicLogo );
</script>

<!-- Google Tag Manager -->
<noscript><iframe src="//www.googletagmanager.com/ns.html?id=GTM-WGCXHD"
height="0" width="0" style="display:none;visibility:hidden"></iframe></noscript>
<script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
'//www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
})(window,document,'script','dataLayer','GTM-WGCXHD');</script>
<!-- End Google Tag Manager -->


  <a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
  <script>
    Modernizr.load({
      test: Modernizr.input.placeholder,
      nope: '<?php echo $absolute_theme_url; ?>/js/vendor/jquery.placeholder.js',
        complete: function () {
           if (Modernizr.input.placeholder) {
          //Already showing placeholder
        } else {
          //Fall Back
          jQuery('input, textarea, password').placeholder();
        }
      }
    });
  </script>
  <!-- Start Elastic Search JS -->
  <script type="text/javascript" src="https://cuwebteam.blob.core.windows.net/cuwebteam-elastic-search-production/static/js/2-react-elastic-search-chunk.js"></script>
  <script type="text/javascript" src="https://cuwebteam.blob.core.windows.net/cuwebteam-elastic-search-production/static/js/2-react-elastic-search-chunk.js.LICENSE.txt"></script>
  <script type="text/javascript" src="https://cuwebteam.blob.core.windows.net/cuwebteam-elastic-search-production/static/js/2-react-elastic-search-chunk.js.map"></script>
  <script type="text/javascript" src="https://cuwebteam.blob.core.windows.net/cuwebteam-elastic-search-production/static/js/3-react-elastic-search-chunk.js"></script>
  <script type="text/javascript" src="https://cuwebteam.blob.core.windows.net/cuwebteam-elastic-search-production/static/js/3-react-elastic-search-chunk.js.map"></script>
  <script type="text/javascript" src="https://cuwebteam.blob.core.windows.net/cuwebteam-elastic-search-production/static/js/main-react-elastic-search-chunk.js"></script>
  <script type="text/javascript" src="https://cuwebteam.blob.core.windows.net/cuwebteam-elastic-search-production/static/js/main-react-elastic-search-chunk.js.map"></script>
  <script type="text/javascript" src="https://cuwebteam.blob.core.windows.net/cuwebteam-elastic-search-production/static/js/react-elastic-search.js"></script>
  <script type="text/javascript" src="https://cuwebteam.blob.core.windows.net/cuwebteam-elastic-search-production/static/js/react-elastic-search.js.map"></script>
  <!-- End Elastic Search JS -->
</body>
</html>
