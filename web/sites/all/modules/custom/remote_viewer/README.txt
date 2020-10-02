CONTENTS OF THIS FILE
---------------------

 * Introduction
 * Requirements
 * Recommended modules
 * Installation
 * Configuration
 * Troubleshooting
 * FAQ
 * Technical Info
 * Hooks
 * Maintainers


 INTRODUCTION
------------
The Remote Viewer module allows the Views module to query another Drupal
database for page and block displays configurable from the Views UI.
Local and remote databases must have mirrored content types used in 
the remote Views.


 * For a full description of the module, visit the project page:
   https://drupal.org/project/admin_menu


 * To submit bug reports and feature suggestions, or to track changes:
   https://drupal.org/project/issues/admin_menu


REQUIREMENTS
------------
This module requires the following modules:
 * Views (https://drupal.org/project/views)
 * Picture (https://drupal.org/project/picture)


INSTALLATION
------------
 * Install as you would normally install a contributed Drupal module. See:
   https://drupal.org/documentation/install/modules-themes/modules-7
   for further information.


CONFIGURATION
-------------
 * Configure settings.php file to define additional Drupal databases:

   - Edit settings.php $databases array adding 'server' key ie)

     $databases['hub']['default'] = array(
       'driver' => 'mysql',
       'database' => 'example_db',
       'username' => 'user_db',
       'password' => 'password',
       'host' => 'localhost',
       'port' => '3306',
       'server' => 'hub.example.com',
     );

   - Access admin/config/content/remote_viewer

	   See your remote DBs defined in settings.php

   - Mirror Content Type on remote access Drupal site

     Manually create the same content types you want to use in your remote
     Views.

     or

     Use the Features module to automatically create the same content types on
     the remote Drupal site.

   - Create your remote View

     Add a new View
     Choose a remote display
     Select remote database defined in settings.php


TROUBLESHOOTING
---------------

   - Future.

FAQ
---


Q: Future.


A: Future.


TECHNICAL INFO
--------------

Alter the server accessed for pictures inserted with Media module:
	-Converted with: hook_views_pre_render()

Alter the server accessed for pictures added to a content type:
	-Encoded to be converted with: hook_field_formatter_view() 
	-Decoded with: hook_file_url_alter()


HOOKS
-----

hook_menu()
  - admin/config/content/remote_viewer

hook_entity_info_alter()
  - All pages w/ Entities ie) Local and Remote Content
  - Extend NodeController Class
  - Extend BeanEntityAPIController Class

hook_field_formatter_info_alter()
  - /admin/structure/types/manage/CONTENT/fields
hook_field_formatter_settings_form()
hook_field_formatter_settings_summary()
hook_field_formatter_prepare_view()
hook_field_formatter_view()
  hook_image_formatter_view()
  hook_file_formatter_view()
  hook_picture_formatter_view()
  hook_entityreference_formatter_view()

hook_file_url_alter()
  - Needed for header image and profile image (secondary content)

hook_views_api()
  hook_views_plugins()
    - Define new view displays:
      *Page (remote)
      *Block (remote)
      -These toggle DB to remote via RemoteViewerContentController Class

hook_views_data_alter()
hook_views_pre_render()
  - Convert images to use picture_formatter Responsive


MAINTAINERS
-----------
Current maintainers:
 * Ben LeDuc (bpleduc) - https://drupal.org/u/bpleduc
 * Nick Stankus (nixter) - https://drupal.org/u/nixter
 * Josh Wester (?) - https://drupal.org/u/?
