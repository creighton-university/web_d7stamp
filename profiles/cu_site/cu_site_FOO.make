; Drush Make (http://drupal.org/project/drush_make)
api = 2
core = 7.x

; Drupal core

;projects[drupal][version] = 7.12
projects[pressflow][type] = "core"
projects[pressflow][download][type] = "git"
projects[pressflow][download][url] = "https://github.com/pressflow/7.git"
projects[pressflow][download][tag] = "7.12"

;;;;;;;;;;;;;;;;;;;;;;;;
; Projects with enabled modules
;;;;;;;;;;;;;;;;;;;;;;;;

; site custom modules and themes

;projects[cu_site][subdir] = custom
;projects[cu_site][type] = module
;projects[cu_site][download][type] = git
;projects[cu_site][download][url] = git@github.com:zzipline/cu_site.git
;projects[cu_site][download][revision] = c4761aa42b8e8f01e3f050bc17c140f169a4ac2d
;projects[cu_site][download][branch] = 1.x-dev
;projects[cu_site][directory_name] = 

; shared custom modules and themes

; change to use a revision id
;projects[cu_modules][subdir] = custom
projects[cu_modules][type] = module
projects[cu_modules][download][type] = git
projects[cu_modules][download][url] = git@github.com:zzipline/cu_modules.git
;projects[cu_modules][download][revision] = c4761aa42b8e8f01e3f050bc17c140f169a4ac2d
projects[cu_modules][download][branch] = 1.x-dev
projects[cu_modules][directory_name] = custom

; change to use a revision id
;projects[cu_themes][subdir] = custom
projects[cu_themes][type] = theme
projects[cu_themes][download][type] = git
projects[cu_themes][download][url] = git@github.com:zzipline/cu_themes.git
;projects[cu_themes][download][revision] = c4761aa42b8e8f01e3f050bc17c140f169a4ac2d
projects[cu_themes][download][branch] = 1.x-dev
projects[cu_themes][directory_name] = custom

; contrib modules

projects[admin_menu][subdir] = contrib
projects[admin_menu][version] = 3.0-rc1

projects[auto_nodetitle][subdir] = contrib
projects[auto_nodetitle][version] = 1.0

projects[backup_migrate][subdir] = contrib
projects[backup_migrate][version] = 2.2

; date = 2011-03-01
; datestamp = '"Tue, 01 Mar 2011 18:02:26 -0600"'
projects[browscap][subdir] = contrib
projects[browscap][type] = module
projects[browscap][download][type] = git
projects[browscap][download][url] = http://git.drupal.org/project/browscap.git
;projects[browscap][download][branch] = 7.x-1.x
projects[browscap][download][revision] = 7c0931e5703bd28fc46779214948b87e73b8797d

projects[captcha][subdir] = contrib
projects[captcha][version] = 1.0-beta2

projects[ckeditor_link][subdir] = contrib
projects[ckeditor_link][version] = 2.2

; date = 2011-03-06
; datestamp = '"Sun, 06 Mar 2011 18:03:37 -0600"'
projects[computed_field][subdir] = contrib
projects[computed_field][type] = module
projects[computed_field][download][type] = git
projects[computed_field][download][url] = http://git.drupal.org/project/computed_field.git
;projects[computed_field][download][branch] = 7.x-1.x
projects[computed_field][download][revision] = 8c8c2b2a84f9f7ae67fd235c3ebfc00caf5c5ab7

projects[context][subdir] = contrib
projects[context][version] = 3.0-beta2

; date = 2012-02-24
; datestamp = '"Fri, 24 Feb 2012 18:09:21 -0600"'
projects[ctools][subdir] = contrib
projects[ctools][version] = 1.0

; date = 2011-09-01
; datestamp = '"Thu, 01 Sep 2011 19:24:38 -0500"'
projects[date][subdir] = contrib
projects[date][type] = module
projects[date][download][type] = git
projects[date][download][url] = http://git.drupal.org/project/date.git
;projects[date][download][branch] = 7.x-2.x
projects[date][download][revision] = f1a817df3bbd1af80cc5e48bd1fdb3ce4f2e3d42

; date = 2011-02-25
; datestamp = '"Fri, 25 Feb 2011 01:31:29 -0600"'
;projects[dba][subdir] = contrib
;projects[dba][type] = module
;projects[dba][download][type] = git
;projects[dba][download][url] = http://git.drupal.org/project/dba.git
;projects[dba][download][branch] = 7.x-1.x
;projects[dba][download][revision] = 60b9ae05ad9fb427ed8317170000023b1595866e

projects[devel][subdir] = contrib
projects[devel][version] = 1.2

projects[entity][subdir] = contrib
projects[entity][version] = 1.0-beta10

projects[expire][subdir] = contrib
projects[expire][version] = 1.0-alpha3

projects[features][subdir] = contrib
projects[features][version] = 1.0-rc2
;projects[features][patch][1411678] = https://drupal.org/files/1411678-export-permissions-with-role_0.patch

projects[feeds][subdir] = contrib
projects[feeds][version] = 2.0-alpha4

projects[field_group][subdir] = contrib
projects[field_group][version] = 1.0

projects[globalredirect][subdir] = contrib
projects[globalredirect][version] = 1.3

projects[image_resize_filter][subdir] = contrib
projects[image_resize_filter][version] = 1.13

; needs patch to settings.php
; $conf['insert_absolute_paths'] = FALSE;
projects[insert][subdir] = contrib
projects[insert][version] = 1.1
projects[insert][patch][1149910] = http://drupal.org/files/issues/1149910-D7-insert-relative-url-support-v2_0.patch

projects[job_scheduler][subdir] = contrib
projects[job_scheduler][version] = 2.0-alpha2

; date = 2011-03-16
; datestamp = '"Wed, 16 Mar 2011 19:10:34 -0500"'
; this module recommends a patch to the JS; is the patch outdated now?
projects[jquerymobile][subdir] = contrib
projects[jquerymobile][type] = module
projects[jquerymobile][download][type] = git
projects[jquerymobile][download][url] = http://git.drupal.org/project/jquerymobile.git
;projects[jquerymobile][download][branch] = 7.x-1.x
projects[jquerymobile][download][revision] = 901036c54f10b48195cdde88809e11f4b86ab67d

projects[libraries][subdir] = contrib
projects[libraries][version] = 1.0

projects[link][subdir] = contrib
projects[link][version] = 1.0-alpha3

projects[memcache][subdir] = contrib
projects[memcache][version] = 1.0

; date = 2011-02-05
; datestamp = '"Sat, 05 Feb 2011 18:22:48 -0600"'
; non-existent branch: use 7.x-2.x
projects[menu_block][subdir] = contrib
projects[menu_block][type] = module
projects[menu_block][download][type] = git
projects[menu_block][download][url] = http://git.drupal.org/project/menu_block.git
;projects[menu_block][download][branch] = 7.x-3.x
projects[menu_block][download][revision] = 87276512bb2cf5f9a3d584ef26d704722148895d

projects[menu_breadcrumb][subdir] = contrib
projects[menu_breadcrumb][version] = 1.3

projects[nice_menus][subdir] = contrib
projects[nice_menus][version] = 2.0

projects[nodeblock][subdir] = contrib
projects[nodeblock][version] = 1.2

projects[node_export][subdir] = contrib
projects[node_export][version] = 3.0-rc2

projects[panels][subdir] = contrib
projects[panels][version] = 3.2

projects[pathauto][subdir] = contrib
projects[pathauto][version] = 1.0

projects[recaptcha][subdir] = contrib
projects[recaptcha][version] = 1.7

projects[redirect][subdir] = contrib
projects[redirect][version] = 1.0-beta3

projects[robotstxt][subdir] = contrib
projects[robotstxt][version] = 1.0

; add a patch item
projects[shib_auth][subdir] = contrib
projects[shib_auth][version] = 4.0-rc3

projects[site_map][subdir] = contrib
projects[site_map][version] = 1.0

projects[strongarm][subdir] = contrib
projects[strongarm][version] = 2.0-beta5

projects[token][subdir] = contrib
projects[token][version] = 1.0-beta7

projects[uuid][subdir] = contrib
projects[uuid][version] = 1.0-alpha3

projects[varnish][subdir] = contrib
projects[varnish][version] = 1.0-beta1

projects[views][subdir] = contrib
projects[views][version] = 3.3

projects[views_slideshow][subdir] = contrib
projects[views_slideshow][version] = 3.0

projects[webform][subdir] = contrib
projects[webform][version] = 3.15

; date = 2011-12-13
projects[wysiwyg][subdir] = contrib
projects[wysiwyg][type] = module
projects[wysiwyg][download][type] = git
projects[wysiwyg][download][url] = http://git.drupal.org/project/wysiwyg.git
;projects[wysiwyg][download][branch] = 7.x-2.x
projects[wysiwyg][download][revision] = cf9c6f553a4c401fd0de6db3cffe1e0ff88582e5

projects[wysiwyg_filter][subdir] = contrib
projects[wysiwyg_filter][version] = 1.6-rc2

;;;;;;;;;;;;;;;;;;;;;;;;
; Projects with disabled modules
;;;;;;;;;;;;;;;;;;;;;;;;

projects[addthis][subdir] = contrib
projects[addthis][version] = 2.1-beta1

projects[apachesolr][subdir] = contrib
projects[apachesolr][version] = 1.0-beta13

; date = 2011-06-27
; datestamp = '"Mon, 27 Jun 2011 19:04:13 -0500"'
projects[better_formats][subdir] = contrib
projects[better_formats][type] = module
projects[better_formats][download][type] = git
projects[better_formats][download][url] = http://git.drupal.org/project/better_formats.git
;projects[better_formats][download][branch] = 7.x-1.x
projects[better_formats][download][revision] = 5047967141fb4fd0aa0af6f835020ea930ea5dd6

projects[bundle_copy][subdir] = contrib
projects[bundle_copy][version] = 1.0

; date = 2011-09-01
; datestamp = '"Thu, 01 Sep 2011 19:12:48 -0500"'
projects[calendar][subdir] = contrib
projects[calendar][type] = module
projects[calendar][download][type] = git
projects[calendar][download][url] = http://git.drupal.org/project/calendar.git
;projects[calendar][download][branch] = 7.x-3.x
projects[calendar][download][revision] = f9c1b73a8edf6c159a134f482725efe1dda5476e

projects[cnr][subdir] = contrib
projects[cnr][version] = 4.22

projects[colorbox][subdir] = contrib
projects[colorbox][version] = 1.1

; date = 2011-07-28
; datestamp = '"Thu, 28 Jul 2011 19:08:55 -0500"'
projects[conditional_fields][subdir] = contrib
projects[conditional_fields][type] = module
projects[conditional_fields][download][type] = git
projects[conditional_fields][download][url] = http://git.drupal.org/project/conditional_fields.git
;projects[conditional_fields][download][branch] = 7.x-3.x
projects[conditional_fields][download][revision] = 3a38209acc971667831ffca655be9de296941543

; date = 2011-04-05
; datestamp = '"Tue, 05 Apr 2011 19:05:09 -0500"'
projects[conditional_styles][subdir] = contrib
projects[conditional_styles][type] = module
projects[conditional_styles][download][type] = git
projects[conditional_styles][download][url] = http://git.drupal.org/project/conditional_styles.git
;projects[conditional_styles][download][branch] = 7.x-2.x
projects[conditional_styles][download][revision] = b187b420e4b174b6d65234f2f83fa4402be20e7b

projects[content_access][subdir] = contrib
projects[content_access][version] = 1.2-beta1

projects[custom_breadcrumbs][subdir] = contrib
projects[custom_breadcrumbs][version] = 1.0-alpha1

projects[dhtml_menu][subdir] = contrib
projects[dhtml_menu][version] = 1.0-beta1

; date = 2011-06-29
; datestamp = '"Wed, 29 Jun 2011 19:10:39 -0500"'
projects[document][subdir] = contrib
projects[document][type] = module
projects[document][download][type] = git
projects[document][download][url] = http://git.drupal.org/project/document.git
;projects[document][download][branch] = 7.x-1.x
projects[document][download][revision] = a25cd43ec046f3a7701f6f2b451c4af3d5bbf0c8

projects[domain][subdir] = contrib
projects[domain][version] = 2.17

projects[elfinder][subdir] = contrib
projects[elfinder][version] = 0.6

projects[eva][subdir] = contrib
projects[eva][version] = 1.0

; date = 2011-10-15
; datestamp = '"Sat, 15 Oct 2011 07:06:58 -0500"'
projects[examples][subdir] = contrib
projects[examples][type] = module
projects[examples][download][type] = git
projects[examples][download][url] = http://git.drupal.org/project/examples.git
;projects[examples][download][branch] = 7.x-1.x
projects[examples][download][revision] = 50ba33fa5148168d1fb143351b978b690823e47c

; project does not exist
;projects[facebook_feed][subdir] = contrib
;projects[facebook_feed][version] = 1.0-beta

projects[facetapi][subdir] = contrib
projects[facetapi][version] = 1.0-rc2

; date = 2011-11-10
; datestamp = '"Thu, 10 Nov 2011 06:14:14 -0600"'
; non-existent branch: use master?
;projects[fb][subdir] = contrib
;projects[fb][type] = module
;projects[fb][download][type] = git
;projects[fb][download][url] = http://git.drupal.org/project/fb.git
;projects[fb][download][branch] = 7.x-3.x
;projects[fb][download][revision] = b87c261d3bd6eb21c8fcaaccfa4a67969e580c07

projects[field_permissions][subdir] = contrib
projects[field_permissions][version] = 1.0-alpha1

; date = 2011-10-15
; datestamp = '"Thu, 15 Oct 2011 00:00:00 -0500"'
projects[file_entity][subdir] = contrib
projects[file_entity][type] = module
projects[file_entity][download][type] = git
projects[file_entity][download][url] = http://git.drupal.org/project/file_entity.git
;projects[file_entity][download][branch] = 7.x-2.x
projects[file_entity][download][revision] = 36c694e36a57d30ac335f71548e2ca14aaf474e9

projects[filefield_sources][subdir] = contrib
projects[filefield_sources][version] = 1.4

projects[galleryformatter][subdir] = contrib
projects[galleryformatter][version] = 1.0

projects[google_analytics][subdir] = contrib
projects[google_analytics][version] = 1.2

projects[imce][subdir] = contrib
projects[imce][version] = 1.4

; from development seed
projects[job_scheduler_trigger][subdir] = contrib
projects[job_scheduler_trigger][type] = module
projects[job_scheduler_trigger][download][type] = git
projects[job_scheduler_trigger][download][url] = https://github.com/developmentseed/job_scheduler_trigger.git
projects[job_scheduler_trigger][directory_name] = job_scheduler_trigger
;projects[job_scheduler_trigger][download][branch] = 7.x-1.x ???
projects[job_scheduler_trigger][download][revision] = ffd977e586567c5de4af03d1182775835688fc66

projects[jquerymobile_ui][subdir] = contrib
projects[jquerymobile_ui][version] = 1.0-beta1

projects[jstimer][subdir] = contrib
projects[jstimer][version] = 1.1

; pulled 2.0-unstable2 from media_field module in this project
projects[media][subdir] = contrib
projects[media][version] = 1.0-rc3

projects[media_browser_plus][subdir] = contrib
projects[media_browser_plus][version] = 1.0-beta3

; date = 2011-08-03
; datestamp = '"Wed, 03 Aug 2011 19:37:32 -0500"'
projects[media_youtube][subdir] = contrib
projects[media_youtube][type] = module
projects[media_youtube][download][type] = git
projects[media_youtube][download][url] = http://git.drupal.org/project/media_youtube.git
;projects[media_youtube][download][branch] = 7.x-1.x
projects[media_youtube][download][revision] = 0cf05da7150cfc3be4b1273c35e849bfcefcf3b6

projects[menu_import][subdir] = contrib
projects[menu_import][version] = 1.1-beta1

; date = 2011-08-29
; datestamp = '"Mon, 29 Aug 2011 19:31:16 -0500"'
projects[messaging][subdir] = contrib
projects[messaging][type] = module
projects[messaging][download][type] = git
projects[messaging][download][url] = http://git.drupal.org/project/messaging.git
;projects[messaging][download][branch] = 7.x-1.x
projects[messaging][download][revision] = e874f11b3d57337007ce844ec01073fae80c819e

projects[metatag][subdir] = contrib
projects[metatag][version] = 1.0-alpha3

projects[migrate][subdir] = contrib
projects[migrate][version] = 2.2

; date = 2011-06-05
; datestamp = '"Sun, 05 Jun 2011 19:24:26 -0500"'
projects[mobile_tools][subdir] = contrib
projects[mobile_tools][type] = module
projects[mobile_tools][download][type] = git
projects[mobile_tools][download][url] = http://git.drupal.org/project/mobile_tools.git
;projects[mobile_tools][download][branch] = 7.x-2.x
projects[mobile_tools][download][revision] = 3f7b2fc3d129376eb09e6e8dbda860cc4e8df47d

; date = 2011-02-25
; datestamp = '"Fri, 25 Feb 2011 01:42:48 -0600"'
; non-existent branch: use master?
projects[node_privacy_byrole][subdir] = contrib
projects[node_privacy_byrole][type] = module
projects[node_privacy_byrole][download][type] = git
projects[node_privacy_byrole][download][url] = http://git.drupal.org/project/node_privacy_byrole.git
;projects[node_privacy_byrole][download][branch] = 7.x-1.x
projects[node_privacy_byrole][download][revision] = a203864f034da884143facc89f82aefaddd8f110

projects[nodereference_url][subdir] = contrib
projects[nodereference_url][version] = 1.11

projects[notifications][subdir] = contrib
projects[notifications][version] = 1.0-alpha1

projects[omega_tools][subdir] = contrib
projects[omega_tools][version] = 3.0-rc3

projects[page_title][subdir] = contrib
projects[page_title][version] = 2.5

;projects[pathologic][subdir] = contrib
;projects[pathologic][version] = 1.4

; date = 2011-09-18
; datestamp = '"Sun, 18 Sep 2011 07:15:56 -0500"'
; non-existent commit date: latest is 2011-09-11
projects[persistent_login][subdir] = contrib
projects[persistent_login][type] = module
projects[persistent_login][download][type] = git
projects[persistent_login][download][url] = http://git.drupal.org/project/persistent_login.git
;projects[persistent_login][download][branch] = 7.x-1.x
projects[persistent_login][download][revision] = 250993e9f2ba9b238130d830b2d8cb469c29810a

; date = 2011-07-28
; datestamp = '"Thu, 28 Jul 2011 19:33:51 -0500"'
projects[phpmailer][subdir] = contrib
projects[phpmailer][type] = module
projects[phpmailer][download][type] = git
projects[phpmailer][download][url] = http://git.drupal.org/project/phpmailer.git
;projects[phpmailer][download][branch] = 7.x-3.x
projects[phpmailer][download][revision] = aed9a13d96870511751a51a56e295dc781f15251

projects[print][subdir] = contrib
projects[print][version] = 1.0-alpha2

projects[quicktabs][subdir] = contrib
projects[quicktabs][version] = 3.3

projects[realname][subdir] = contrib
projects[realname][version] = 1.0-rc2

; date = 2011-08-30
; datestamp = '"Tue, 30 Aug 2011 19:59:07 -0500"'
projects[references][subdir] = contrib
projects[references][type] = module
projects[references][download][type] = git
projects[references][download][url] = http://git.drupal.org/project/references.git
;projects[references][download][branch] = 7.x-2.x
projects[references][download][revision] = 80e59efe2a0a56ed8b711150f13603170b3571a4

projects[rules][subdir] = contrib
projects[rules][version] = 2.0-beta2

projects[scheduler][subdir] = contrib
projects[scheduler][version] = 1.0

projects[search404][subdir] = contrib
projects[search404][version] = 1.1

projects[sharethis][subdir] = contrib
projects[sharethis][version] = 2.2

; projects[shib_precreate][subdir] = contrib
; projects[shib_precreate][version] = MISSING

; date = 2011-06-28
; datestamp = '"Tue, 28 Jun 2011 19:46:03 -0500"'
projects[signup][subdir] = contrib
projects[signup][type] = module
projects[signup][download][type] = git
projects[signup][download][url] = http://git.drupal.org/project/signup.git
;projects[signup][download][branch] = 7.x-1.x
projects[signup][download][revision] = 8efb1808f414ffe697cc1769f31f5ff68a658782

projects[site_verify][subdir] = contrib
projects[site_verify][version] = 1.0

projects[stringoverrides][subdir] = contrib
projects[stringoverrides][version] = 1.8

projects[take_control][subdir] = contrib
projects[take_control][version] = 2.1

projects[taxonomy_menu][subdir] = contrib
projects[taxonomy_menu][version] = 1.2

; date = 2011-08-06
; datestamp = '"Sat, 06 Aug 2011 19:43:48 -0500"'
projects[viewfield][subdir] = contrib
projects[viewfield][type] = module
projects[viewfield][download][type] = git
projects[viewfield][download][url] = http://git.drupal.org/project/viewfield.git
;projects[viewfield][download][branch] = 7.x-2.x
projects[viewfield][download][revision] = 01cd538a2b2c613551169edcd86546b74a737b46

projects[workbench][subdir] = contrib
projects[workbench][version] = 1.0-beta6

; date = 2011-07-23
; datestamp = '"Sat, 23 Jul 2011 19:54:11 -0500"'
projects[workbench_access][subdir] = contrib
projects[workbench_access][type] = module
projects[workbench_access][download][type] = git
projects[workbench_access][download][url] = http://git.drupal.org/project/workbench_access.git
;projects[workbench_access][download][branch] = 7.x-1.x
projects[workbench_access][download][revision] = b5dfdebd08ff44e771869df27ea6dd1ae97052dc

projects[workbench_files][subdir] = contrib
projects[workbench_files][version] = 1.0-beta5

projects[workbench_media][subdir] = contrib
projects[workbench_media][version] = 1.0-beta6

projects[workbench_moderation][subdir] = contrib
projects[workbench_moderation][version] = 1.0-beta8

projects[xmlsitemap][subdir] = contrib
projects[xmlsitemap][version] = 2.0-rc1

;;;;;;;;;;;;;;;;;;;;;;;;
; contrib themes
;;;;;;;;;;;;;;;;;;;;;;;;

projects[omega][subdir] = contrib
projects[omega][type] = theme
projects[omega][version] = 3.0

projects[mobile_jquery][subdir] = contrib
projects[mobile_jquery][type] = theme
projects[mobile_jquery][version] = 1.1-beta1

projects[zen][subdir] = contrib
projects[zen[type] = theme
projects[zen][version] = 3.1

;;;;;;;;;;;;;;;;;;;;;;;;
; libraries
;;;;;;;;;;;;;;;;;;;;;;;;

; CKEditor 3.6.2
libraries[ckeditor][download][type] = file
;libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor%20for%20Drupal/CKEditor%203.6.2%20for%20Drupal/ckeditor_3.6.2_for_drupal_7.zip"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.6.2/ckeditor_3.6.2.tar.gz"
libraries[ckeditor][directory_name] = ckeditor
libraries[ckeditor][type] = library

; version 2.999 of all.js and 2.88 of all.min.js
; Version: 2.88 (08-JUN-2010)
;libraries[jquery.cycle][type] = library
;libraries[jquery.cycle][download][type] = file
;libraries[jquery.cycle][download][url] = http://malsup.com/jquery/cycle/release/jquery.cycle.zip?v2.97
;libraries[jquery.cycle][download][md5] = c177d38bc7af59d696b2efd7dda5c605
;libraries[jquery.cycle][destination] = libraries
;libraries[jquery.cycle][directory_name] = jquery.cycle

libraries[jquery.cycle][type] = library
libraries[jquery.cycle][download][type] = git
libraries[jquery.cycle][download][url] = https://github.com/malsup/cycle
;libraries[jquery.cycle][download][branch] = 7.x-1.x
libraries[jquery.cycle][download][revision] = 100b4008489cd5e0122251bb2bbec728e8d20a60
libraries[jquery.cycle][destination] = libraries

; retrieve older version
libraries[1jquery.cycle][type] = library
libraries[1jquery.cycle][download][type] = file
libraries[1jquery.cycle][download][url] = https://github.com/downloads/malsup/cycle/jquery.cycle.all.2.88.min.js
;libraries1[jquery.cycle][download][md5] = c177d38bc7af59d696b2efd7dda5c605
libraries[1jquery.cycle][download][filename] = jquery.cycle.all.min.js
libraries[1jquery.cycle][destination] = libraries
libraries[1jquery.cycle][directory_name] = jquery.cycle
libraries[1jquery.cycle][overwrite] = TRUE

; retrieve older version
; omit
libraries[2jquery.cycle][type] = library
libraries[2jquery.cycle][download][type] = file
libraries[2jquery.cycle][download][url] = https://github.com/downloads/malsup/cycle/jquery.cycle.all.2.88.js
;libraries2[jquery.cycle][download][md5] = c177d38bc7af59d696b2efd7dda5c605
libraries[2jquery.cycle][download][filename] = jquery.cycle.all.js
libraries[2jquery.cycle][destination] = libraries
libraries[2jquery.cycle][directory_name] = jquery.cycle
libraries[2jquery.cycle][overwrite] = TRUE

; source: http://jquerymobile.com/download/
libraries[jquerymobile][type] = library
libraries[jquerymobile][download][type] = file
;libraries[jquerymobile][download][url] = http://code.jquery.com/mobile/1.0.1/jquery.mobile-1.0.1.zip
libraries[jquerymobile][download][url] = http://code.jquery.com/mobile/1.0/jquery.mobile-1.0.zip
libraries[jquerymobile][directory_name] = jquerymobile

libraries[phpmailer][type] = library
libraries[phpmailer][download][type] = file
libraries[phpmailer][download][url] = "http://sourceforge.net/projects/phpmailer/files/phpmailer%20for%20php5_6/PHPMailer%20v5.1/PHPMailer_v5.1.zip/download"
libraries[phpmailer][directory_name] = phpmailer
