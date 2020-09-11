<?php 


$options['sites'] = array (
  0 => 'jw-test9.web-dev.creighton.edu',
  1 => 'alumni.web-dev.creighton.edu',
  2 => 'housing.doit.web-dev.creighton.edu',
  3 => 'demo.web-dev.creighton.edu',
  4 => 'dentistry.web-dev.creighton.edu',
  5 => 'hub.web-dev.creighton.edu',
  6 => 'www.web-dev.creighton.edu',
  7 => 'law.web-dev.creighton.edu',
  8 => 'admissions.web-dev.creighton.edu',
);
$options['profiles'] = array (
  0 => 'minimal',
  1 => 'cu_site',
  2 => 'standard',
);
$options['packages'] = array (
  'base' => 
  array (
    'modules' => 
    array (
      'system' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/system/system.module',
        'basename' => 'system.module',
        'name' => 'system',
        'info' => 
        array (
          'name' => 'System',
          'description' => 'Handles general site configuration for administrators.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'system.archiver.inc',
            1 => 'system.mail.inc',
            2 => 'system.queue.inc',
            3 => 'system.tar.inc',
            4 => 'system.updater.inc',
            5 => 'system.test',
          ),
          'required' => true,
          'configure' => 'admin/config/system',
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7081',
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'file' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/file/file.module',
        'basename' => 'file.module',
        'name' => 'file',
        'info' => 
        array (
          'name' => 'File',
          'description' => 'Defines a file field type.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'field',
          ),
          'files' => 
          array (
            0 => 'tests/file.test',
          ),
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'rdf' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/rdf/rdf.module',
        'basename' => 'rdf.module',
        'name' => 'rdf',
        'info' => 
        array (
          'name' => 'RDF',
          'description' => 'Enriches your content with metadata to let other applications (e.g. search engines, aggregators) better understand its relationships and attributes.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'rdf.test',
          ),
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'blog' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/blog/blog.module',
        'basename' => 'blog.module',
        'name' => 'blog',
        'info' => 
        array (
          'name' => 'Blog',
          'description' => 'Enables multi-user blogs.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'blog.test',
          ),
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'image' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/image/image.module',
        'basename' => 'image.module',
        'name' => 'image',
        'info' => 
        array (
          'name' => 'Image',
          'description' => 'Provides image manipulation tools.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'file',
          ),
          'files' => 
          array (
            0 => 'image.test',
          ),
          'configure' => 'admin/config/media/image-styles',
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'php' => '5.2.4',
        ),
        'schema_version' => '7005',
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'php' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/php/php.module',
        'basename' => 'php.module',
        'name' => 'php',
        'info' => 
        array (
          'name' => 'PHP filter',
          'description' => 'Allows embedded PHP code/snippets to be evaluated.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'php.test',
          ),
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'trigger' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/trigger/trigger.module',
        'basename' => 'trigger.module',
        'name' => 'trigger',
        'info' => 
        array (
          'name' => 'Trigger',
          'description' => 'Enables actions to be fired on certain system events, such as when new content is created.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'trigger.test',
          ),
          'configure' => 'admin/structure/trigger',
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7002',
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'dblog' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/dblog/dblog.module',
        'basename' => 'dblog.module',
        'name' => 'dblog',
        'info' => 
        array (
          'name' => 'Database logging',
          'description' => 'Logs and records system events to the database.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'dblog.test',
          ),
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7003',
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'book' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/book/book.module',
        'basename' => 'book.module',
        'name' => 'book',
        'info' => 
        array (
          'name' => 'Book',
          'description' => 'Allows users to create and organize related content in an outline.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'book.test',
          ),
          'configure' => 'admin/content/book/settings',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'book.css',
            ),
          ),
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'block' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/block/block.module',
        'basename' => 'block.module',
        'name' => 'block',
        'info' => 
        array (
          'name' => 'Block',
          'description' => 'Controls the visual building blocks a page is constructed with. Blocks are boxes of content rendered into an area, or region, of a web page.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'block.test',
          ),
          'configure' => 'admin/structure/block',
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7009',
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'openid' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/openid/openid.module',
        'basename' => 'openid.module',
        'name' => 'openid',
        'info' => 
        array (
          'name' => 'OpenID',
          'description' => 'Allows users to log into your site using OpenID.',
          'version' => '7.62',
          'package' => 'Core',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'openid.test',
          ),
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'user' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/user/user.module',
        'basename' => 'user.module',
        'name' => 'user',
        'info' => 
        array (
          'name' => 'User',
          'description' => 'Manages the user registration and login system.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'user.module',
            1 => 'user.test',
          ),
          'required' => true,
          'configure' => 'admin/config/people',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'user.css',
            ),
          ),
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7019',
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'locale' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/locale/locale.module',
        'basename' => 'locale.module',
        'name' => 'locale',
        'info' => 
        array (
          'name' => 'Locale',
          'description' => 'Adds language handling functionality and enables the translation of the user interface to languages other than English.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'locale.test',
          ),
          'configure' => 'admin/config/regional/language',
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7005',
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'comment' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/comment/comment.module',
        'basename' => 'comment.module',
        'name' => 'comment',
        'info' => 
        array (
          'name' => 'Comment',
          'description' => 'Allows users to comment on and discuss published content.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'text',
          ),
          'files' => 
          array (
            0 => 'comment.module',
            1 => 'comment.test',
          ),
          'configure' => 'admin/content/comment',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'comment.css',
            ),
          ),
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'php' => '5.2.4',
        ),
        'schema_version' => '7009',
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'help' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/help/help.module',
        'basename' => 'help.module',
        'name' => 'help',
        'info' => 
        array (
          'name' => 'Help',
          'description' => 'Manages the display of online help.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'help.test',
          ),
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'contextual' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/contextual/contextual.module',
        'basename' => 'contextual.module',
        'name' => 'contextual',
        'info' => 
        array (
          'name' => 'Contextual links',
          'description' => 'Provides contextual links to perform actions related to elements on a page.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'contextual.test',
          ),
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'tracker' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/tracker/tracker.module',
        'basename' => 'tracker.module',
        'name' => 'tracker',
        'info' => 
        array (
          'name' => 'Tracker',
          'description' => 'Enables tracking of recent content for users.',
          'dependencies' => 
          array (
            0 => 'comment',
          ),
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'tracker.test',
          ),
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'syslog' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/syslog/syslog.module',
        'basename' => 'syslog.module',
        'name' => 'syslog',
        'info' => 
        array (
          'name' => 'Syslog',
          'description' => 'Logs and records system events to syslog.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'syslog.test',
          ),
          'configure' => 'admin/config/development/logging',
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'update' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/update/update.module',
        'basename' => 'update.module',
        'name' => 'update',
        'info' => 
        array (
          'name' => 'Update manager',
          'description' => 'Checks for available updates, and can securely install or update modules and themes via a web interface.',
          'version' => '7.62',
          'package' => 'Core',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'update.test',
          ),
          'configure' => 'admin/reports/updates/settings',
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7001',
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'shortcut' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/shortcut/shortcut.module',
        'basename' => 'shortcut.module',
        'name' => 'shortcut',
        'info' => 
        array (
          'name' => 'Shortcut',
          'description' => 'Allows users to manage customizable lists of shortcut links.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'shortcut.test',
          ),
          'configure' => 'admin/config/user-interface/shortcut',
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'overlay' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/overlay/overlay.module',
        'basename' => 'overlay.module',
        'name' => 'overlay',
        'info' => 
        array (
          'name' => 'Overlay',
          'description' => 'Displays the Drupal administration interface in an overlay.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'path' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/path/path.module',
        'basename' => 'path.module',
        'name' => 'path',
        'info' => 
        array (
          'name' => 'Path',
          'description' => 'Allows users to rename URLs.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'path.test',
          ),
          'configure' => 'admin/config/search/path',
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'simpletest' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/simpletest/simpletest.module',
        'basename' => 'simpletest.module',
        'name' => 'simpletest',
        'info' => 
        array (
          'name' => 'Testing',
          'description' => 'Provides a framework for unit and functional testing.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'simpletest.test',
            1 => 'drupal_web_test_case.php',
            2 => 'tests/actions.test',
            3 => 'tests/ajax.test',
            4 => 'tests/batch.test',
            5 => 'tests/boot.test',
            6 => 'tests/bootstrap.test',
            7 => 'tests/cache.test',
            8 => 'tests/common.test',
            9 => 'tests/database_test.test',
            10 => 'tests/entity_crud.test',
            11 => 'tests/entity_crud_hook_test.test',
            12 => 'tests/entity_query.test',
            13 => 'tests/error.test',
            14 => 'tests/file.test',
            15 => 'tests/filetransfer.test',
            16 => 'tests/form.test',
            17 => 'tests/graph.test',
            18 => 'tests/image.test',
            19 => 'tests/lock.test',
            20 => 'tests/mail.test',
            21 => 'tests/menu.test',
            22 => 'tests/module.test',
            23 => 'tests/pager.test',
            24 => 'tests/password.test',
            25 => 'tests/path.test',
            26 => 'tests/registry.test',
            27 => 'tests/schema.test',
            28 => 'tests/session.test',
            29 => 'tests/tablesort.test',
            30 => 'tests/theme.test',
            31 => 'tests/unicode.test',
            32 => 'tests/update.test',
            33 => 'tests/xmlrpc.test',
            34 => 'tests/upgrade/upgrade.test',
            35 => 'tests/upgrade/upgrade.comment.test',
            36 => 'tests/upgrade/upgrade.filter.test',
            37 => 'tests/upgrade/upgrade.forum.test',
            38 => 'tests/upgrade/upgrade.locale.test',
            39 => 'tests/upgrade/upgrade.menu.test',
            40 => 'tests/upgrade/upgrade.node.test',
            41 => 'tests/upgrade/upgrade.taxonomy.test',
            42 => 'tests/upgrade/upgrade.trigger.test',
            43 => 'tests/upgrade/upgrade.translatable.test',
            44 => 'tests/upgrade/upgrade.upload.test',
            45 => 'tests/upgrade/upgrade.user.test',
            46 => 'tests/upgrade/update.aggregator.test',
            47 => 'tests/upgrade/update.trigger.test',
            48 => 'tests/upgrade/update.field.test',
            49 => 'tests/upgrade/update.user.test',
          ),
          'configure' => 'admin/config/development/testing/settings',
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'toolbar' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/toolbar/toolbar.module',
        'basename' => 'toolbar.module',
        'name' => 'toolbar',
        'info' => 
        array (
          'name' => 'Toolbar',
          'description' => 'Provides a toolbar that shows the top-level administration menu items and links from other modules.',
          'core' => '7.x',
          'package' => 'Core',
          'version' => '7.62',
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'color' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/color/color.module',
        'basename' => 'color.module',
        'name' => 'color',
        'info' => 
        array (
          'name' => 'Color',
          'description' => 'Allows administrators to change the color scheme of compatible themes.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'color.test',
          ),
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7001',
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'filter' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/filter/filter.module',
        'basename' => 'filter.module',
        'name' => 'filter',
        'info' => 
        array (
          'name' => 'Filter',
          'description' => 'Filters content in preparation for display.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'filter.test',
          ),
          'required' => true,
          'configure' => 'admin/config/content/formats',
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7010',
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'forum' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/forum/forum.module',
        'basename' => 'forum.module',
        'name' => 'forum',
        'info' => 
        array (
          'name' => 'Forum',
          'description' => 'Provides discussion forums.',
          'dependencies' => 
          array (
            0 => 'taxonomy',
            1 => 'comment',
          ),
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'forum.test',
          ),
          'configure' => 'admin/structure/forum',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'forum.css',
            ),
          ),
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'php' => '5.2.4',
        ),
        'schema_version' => '7012',
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'translation' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/translation/translation.module',
        'basename' => 'translation.module',
        'name' => 'translation',
        'info' => 
        array (
          'name' => 'Content translation',
          'description' => 'Allows content to be translated into different languages.',
          'dependencies' => 
          array (
            0 => 'locale',
          ),
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'translation.test',
          ),
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'contact' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/contact/contact.module',
        'basename' => 'contact.module',
        'name' => 'contact',
        'info' => 
        array (
          'name' => 'Contact',
          'description' => 'Enables the use of both personal and site-wide contact forms.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'contact.test',
          ),
          'configure' => 'admin/structure/contact',
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7003',
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'taxonomy' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/taxonomy/taxonomy.module',
        'basename' => 'taxonomy.module',
        'name' => 'taxonomy',
        'info' => 
        array (
          'name' => 'Taxonomy',
          'description' => 'Enables the categorization of content.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'options',
          ),
          'files' => 
          array (
            0 => 'taxonomy.module',
            1 => 'taxonomy.test',
          ),
          'configure' => 'admin/structure/taxonomy',
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'php' => '5.2.4',
        ),
        'schema_version' => '7011',
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'aggregator' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/aggregator/aggregator.module',
        'basename' => 'aggregator.module',
        'name' => 'aggregator',
        'info' => 
        array (
          'name' => 'Aggregator',
          'description' => 'Aggregates syndicated content (RSS, RDF, and Atom feeds).',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'aggregator.test',
          ),
          'configure' => 'admin/config/services/aggregator/settings',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'aggregator.css',
            ),
          ),
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7004',
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'search' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/search/search.module',
        'basename' => 'search.module',
        'name' => 'search',
        'info' => 
        array (
          'name' => 'Search',
          'description' => 'Enables site-wide keyword searching.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'search.extender.inc',
            1 => 'search.test',
          ),
          'configure' => 'admin/config/search/settings',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'search.css',
            ),
          ),
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'poll' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/poll/poll.module',
        'basename' => 'poll.module',
        'name' => 'poll',
        'info' => 
        array (
          'name' => 'Poll',
          'description' => 'Allows your site to capture votes on different topics in the form of multiple choice questions.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'poll.test',
          ),
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'poll.css',
            ),
          ),
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7004',
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'field_ui' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/field_ui/field_ui.module',
        'basename' => 'field_ui.module',
        'name' => 'field_ui',
        'info' => 
        array (
          'name' => 'Field UI',
          'description' => 'User interface for the Field API.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'field',
          ),
          'files' => 
          array (
            0 => 'field_ui.test',
          ),
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'menu' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/menu/menu.module',
        'basename' => 'menu.module',
        'name' => 'menu',
        'info' => 
        array (
          'name' => 'Menu',
          'description' => 'Allows administrators to customize the site navigation menu.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'menu.test',
          ),
          'configure' => 'admin/structure/menu',
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7003',
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'node' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/node/node.module',
        'basename' => 'node.module',
        'name' => 'node',
        'info' => 
        array (
          'name' => 'Node',
          'description' => 'Allows content to be submitted to the site and displayed on pages.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'node.module',
            1 => 'node.test',
          ),
          'required' => true,
          'configure' => 'admin/structure/types',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'node.css',
            ),
          ),
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7016',
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'field_sql_storage' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/field/modules/field_sql_storage/field_sql_storage.module',
        'basename' => 'field_sql_storage.module',
        'name' => 'field_sql_storage',
        'info' => 
        array (
          'name' => 'Field SQL storage',
          'description' => 'Stores field data in an SQL database.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'field',
          ),
          'files' => 
          array (
            0 => 'field_sql_storage.test',
          ),
          'required' => true,
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'php' => '5.2.4',
        ),
        'schema_version' => '7002',
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'options' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/field/modules/options/options.module',
        'basename' => 'options.module',
        'name' => 'options',
        'info' => 
        array (
          'name' => 'Options',
          'description' => 'Defines selection, check box and radio button widgets for text and numeric fields.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'field',
          ),
          'files' => 
          array (
            0 => 'options.test',
          ),
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'text' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/field/modules/text/text.module',
        'basename' => 'text.module',
        'name' => 'text',
        'info' => 
        array (
          'name' => 'Text',
          'description' => 'Defines simple text field types.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'field',
          ),
          'files' => 
          array (
            0 => 'text.test',
          ),
          'required' => true,
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'number' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/field/modules/number/number.module',
        'basename' => 'number.module',
        'name' => 'number',
        'info' => 
        array (
          'name' => 'Number',
          'description' => 'Defines numeric field types.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'field',
          ),
          'files' => 
          array (
            0 => 'number.test',
          ),
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'list' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/field/modules/list/list.module',
        'basename' => 'list.module',
        'name' => 'list',
        'info' => 
        array (
          'name' => 'List',
          'description' => 'Defines list field types. Use with Options to create selection lists.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'field',
            1 => 'options',
          ),
          'files' => 
          array (
            0 => 'tests/list.test',
          ),
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'php' => '5.2.4',
        ),
        'schema_version' => '7002',
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'field' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/field/field.module',
        'basename' => 'field.module',
        'name' => 'field',
        'info' => 
        array (
          'name' => 'Field',
          'description' => 'Field API to add fields to entities like nodes and users.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'field.module',
            1 => 'field.attach.inc',
            2 => 'field.info.class.inc',
            3 => 'tests/field.test',
          ),
          'dependencies' => 
          array (
            0 => 'field_sql_storage',
          ),
          'required' => true,
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'theme/field.css',
            ),
          ),
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'php' => '5.2.4',
        ),
        'schema_version' => '7004',
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'dashboard' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/dashboard/dashboard.module',
        'basename' => 'dashboard.module',
        'name' => 'dashboard',
        'info' => 
        array (
          'name' => 'Dashboard',
          'description' => 'Provides a dashboard page in the administrative interface for organizing administrative tasks and tracking information within your site.',
          'core' => '7.x',
          'package' => 'Core',
          'version' => '7.62',
          'files' => 
          array (
            0 => 'dashboard.test',
          ),
          'dependencies' => 
          array (
            0 => 'block',
          ),
          'configure' => 'admin/dashboard/customize',
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'statistics' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/modules/statistics/statistics.module',
        'basename' => 'statistics.module',
        'name' => 'statistics',
        'info' => 
        array (
          'name' => 'Statistics',
          'description' => 'Logs access statistics for your site.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'statistics.test',
          ),
          'configure' => 'admin/config/system/statistics',
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'project' => 'drupal',
        'version' => '7.62',
      ),
    ),
    'themes' => 
    array (
      'seven' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/themes/seven/seven.info',
        'basename' => 'seven.info',
        'name' => 'Seven',
        'info' => 
        array (
          'name' => 'Seven',
          'description' => 'A simple one-column, tableless, fluid width administration theme.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'stylesheets' => 
          array (
            'screen' => 
            array (
              0 => 'reset.css',
              1 => 'style.css',
            ),
          ),
          'settings' => 
          array (
            'shortcut_module_link' => '1',
          ),
          'regions' => 
          array (
            'content' => 'Content',
            'help' => 'Help',
            'page_top' => 'Page top',
            'page_bottom' => 'Page bottom',
            'sidebar_first' => 'First sidebar',
          ),
          'regions_hidden' => 
          array (
            0 => 'sidebar_first',
          ),
          'project' => 'drupal',
          'datestamp' => '1547663597',
        ),
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'bartik' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/themes/bartik/bartik.info',
        'basename' => 'bartik.info',
        'name' => 'Bartik',
        'info' => 
        array (
          'name' => 'Bartik',
          'description' => 'A flexible, recolorable theme with many regions.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'css/layout.css',
              1 => 'css/style.css',
              2 => 'css/colors.css',
            ),
            'print' => 
            array (
              0 => 'css/print.css',
            ),
          ),
          'regions' => 
          array (
            'header' => 'Header',
            'help' => 'Help',
            'page_top' => 'Page top',
            'page_bottom' => 'Page bottom',
            'highlighted' => 'Highlighted',
            'featured' => 'Featured',
            'content' => 'Content',
            'sidebar_first' => 'Sidebar first',
            'sidebar_second' => 'Sidebar second',
            'triptych_first' => 'Triptych first',
            'triptych_middle' => 'Triptych middle',
            'triptych_last' => 'Triptych last',
            'footer_firstcolumn' => 'Footer first column',
            'footer_secondcolumn' => 'Footer second column',
            'footer_thirdcolumn' => 'Footer third column',
            'footer_fourthcolumn' => 'Footer fourth column',
            'footer' => 'Footer',
          ),
          'settings' => 
          array (
            'shortcut_module_link' => '0',
          ),
          'project' => 'drupal',
          'datestamp' => '1547663597',
        ),
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'stark' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/themes/stark/stark.info',
        'basename' => 'stark.info',
        'name' => 'Stark',
        'info' => 
        array (
          'name' => 'Stark',
          'description' => 'This theme demonstrates Drupal\'s default HTML markup and CSS styles. To learn how to build your own theme and override Drupal\'s default code, see the <a href="http://drupal.org/theme-guide">Theming Guide</a>.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'layout.css',
            ),
          ),
          'project' => 'drupal',
          'datestamp' => '1547663597',
        ),
        'project' => 'drupal',
        'version' => '7.62',
      ),
      'garland' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/themes/garland/garland.info',
        'basename' => 'garland.info',
        'name' => 'Garland',
        'info' => 
        array (
          'name' => 'Garland',
          'description' => 'A multi-column theme which can be configured to modify colors and switch between fixed and fluid width layouts.',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'style.css',
            ),
            'print' => 
            array (
              0 => 'print.css',
            ),
          ),
          'settings' => 
          array (
            'garland_width' => 'fluid',
          ),
          'project' => 'drupal',
          'datestamp' => '1547663597',
        ),
        'project' => 'drupal',
        'version' => '7.62',
      ),
    ),
    'platforms' => 
    array (
      'drupal' => 
      array (
        'short_name' => 'drupal',
        'version' => '7.62',
        'description' => 'This platform is running Drupal 7.62',
      ),
    ),
    'profiles' => 
    array (
      'minimal' => 
      array (
        'name' => 'minimal',
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/profiles/minimal/minimal.profile',
        'project' => 'drupal',
        'info' => 
        array (
          'name' => 'Minimal',
          'description' => 'Start with only a few modules enabled.',
          'version' => '7.62',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'block',
            1 => 'dblog',
          ),
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'php' => '5.2.4',
          'languages' => 
          array (
            0 => 'en',
          ),
        ),
        'version' => '7.62',
      ),
      'cu_site' => 
      array (
        'name' => 'cu_site',
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/profiles/cu_site/cu_site.profile',
        'project' => '',
        'info' => 
        array (
          'name' => 'Creighton New default',
          'description' => 'Setup Creighton default site.',
          'version' => '2.22',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'block',
            1 => 'contextual',
            2 => 'dashboard',
            3 => 'dblog',
            4 => 'field',
            5 => 'field_sql_storage',
            6 => 'field_ui',
            7 => 'file',
            8 => 'filter',
            9 => 'image',
            10 => 'list',
            11 => 'menu',
            12 => 'node',
            13 => 'number',
            14 => 'options',
            15 => 'path',
            16 => 'quicktabs',
            17 => 'rdf',
            18 => 'search',
            19 => 'shortcut',
            20 => 'system',
            21 => 'taxonomy',
            22 => 'text',
            23 => 'update',
            24 => 'user',
            25 => 'addressfield',
            26 => 'addressfield_tokens',
            27 => 'admin_menu',
            28 => 'admin_views',
            29 => 'auto_nodetitle',
            30 => 'bean',
            31 => 'bean_admin_ui',
            32 => 'block_class',
            33 => 'backup_migrate',
            34 => 'ckeditor_link',
            35 => 'context',
            36 => 'context_layouts',
            37 => 'context_omega',
            38 => 'context_ui',
            39 => 'ctools',
            40 => 'date',
            41 => 'date_api',
            42 => 'date_popup',
            43 => 'date_views',
            44 => 'diff',
            45 => 'elements',
            46 => 'entity',
            47 => 'entity_token',
            48 => 'eva',
            49 => 'extlink',
            50 => 'features',
            51 => 'field_collection',
            52 => 'field_group',
            53 => 'globalredirect',
            54 => 'jquery_update',
            55 => 'libraries',
            56 => 'link',
            57 => 'menu_block',
            58 => 'menu_breadcrumb',
            59 => 'module_filter',
            60 => 'panels',
            61 => 'panels_ipe',
            62 => 'panels_mini',
            63 => 'panels_node',
            64 => 'pathauto',
            65 => 'placeholder',
            66 => 'publish_button',
            67 => 'redirect',
            68 => 'site_verify',
            69 => 'strongarm',
            70 => 'token',
            71 => 'transliteration',
            72 => 'total_control',
            73 => 'views',
            74 => 'views_content',
            75 => 'views_slideshow',
            76 => 'views_slideshow_cycle',
            77 => 'views_ui',
            78 => 'webform',
            79 => 'wysiwyg',
            80 => 'wysiwygpatch',
            81 => 'wysiwyg_filter',
            82 => 'cu_quick_search_blocks',
            83 => 'cu_academics_search',
            84 => 'cu_custom_blocks',
            85 => 'subsite_parent_logo_crumbs',
            86 => 'subsite_parent_crumbs_reaction',
            87 => 'environment_variables',
          ),
          'php' => '5.2.4',
          'languages' => 
          array (
            0 => 'en',
          ),
        ),
        'version' => '2.22',
      ),
      'standard' => 
      array (
        'name' => 'standard',
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/profiles/standard/standard.profile',
        'project' => 'drupal',
        'info' => 
        array (
          'name' => 'Standard',
          'description' => 'Install with commonly used features pre-configured.',
          'version' => '7.62',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'block',
            1 => 'color',
            2 => 'comment',
            3 => 'contextual',
            4 => 'dashboard',
            5 => 'help',
            6 => 'image',
            7 => 'list',
            8 => 'menu',
            9 => 'number',
            10 => 'options',
            11 => 'path',
            12 => 'taxonomy',
            13 => 'dblog',
            14 => 'search',
            15 => 'shortcut',
            16 => 'toolbar',
            17 => 'overlay',
            18 => 'field_ui',
            19 => 'file',
            20 => 'rdf',
          ),
          'project' => 'drupal',
          'datestamp' => '1547663597',
          'php' => '5.2.4',
          'languages' => 
          array (
            0 => 'en',
          ),
          'old_short_name' => 'default',
        ),
        'version' => '7.62',
      ),
    ),
  ),
  'sites-all' => 
  array (
    'modules' => 
    array (
      'creighton_secure_login' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_variables/creighton_secure_login/creighton_secure_login.module',
        'basename' => 'creighton_secure_login.module',
        'name' => 'creighton_secure_login',
        'info' => 
        array (
          'name' => 'Secure Login',
          'description' => 'Secure Login Configuration',
          'core' => '7.x',
          'package' => 'Creighton Optional Packages',
          'version' => '7.x-2.22',
          'project' => 'creighton_secure_login',
          'dependencies' => 
          array (
            0 => 'ctools',
            1 => 'securelogin',
            2 => 'strongarm',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'strongarm:strongarm:1',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'variable' => 
            array (
              0 => 'securelogin_all_forms',
              1 => 'securelogin_form_node_form',
              2 => 'securelogin_form_user_login',
              3 => 'securelogin_form_user_login_block',
              4 => 'securelogin_form_user_pass',
              5 => 'securelogin_form_user_pass_reset',
              6 => 'securelogin_form_user_profile_form',
              7 => 'securelogin_form_user_register_form',
              8 => 'securelogin_form_webform_client_form',
              9 => 'securelogin_secure_forms',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'creighton_secure_login',
        'version' => '7.x-2.22',
      ),
      'creighton_honeypot_config' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_variables/creighton_honeypot_config/creighton_honeypot_config.module',
        'basename' => 'creighton_honeypot_config.module',
        'name' => 'creighton_honeypot_config',
        'info' => 
        array (
          'name' => 'Creighton Honeypot Config',
          'description' => 'Sets default settings for the Honeypot module.',
          'core' => '7.x',
          'package' => 'Creighton Core Settings',
          'version' => '7.x-1.0',
          'project' => 'creighton_honeypot_config',
          'dependencies' => 
          array (
            0 => 'ctools',
            1 => 'features',
            2 => 'honeypot',
            3 => 'strongarm',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'strongarm:strongarm:1',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'user_permission' => 
            array (
              0 => 'administer honeypot',
              1 => 'bypass honeypot protection',
            ),
            'variable' => 
            array (
              0 => 'honeypot_element_name',
              1 => 'honeypot_form_2tier_page_node_form',
              2 => 'honeypot_form_academic_program_node_form',
              3 => 'honeypot_form_academic_unit_node_form',
              4 => 'honeypot_form_content_page_node_form',
              5 => 'honeypot_form_imported_calendar_node_form',
              6 => 'honeypot_form_imported_news_node_form',
              7 => 'honeypot_form_panel_node_form',
              8 => 'honeypot_form_program_details_node_form',
              9 => 'honeypot_form_student_organizations_node_form',
              10 => 'honeypot_form_user_pass',
              11 => 'honeypot_form_user_register_form',
              12 => 'honeypot_form_webform_node_form',
              13 => 'honeypot_form_webforms',
              14 => 'honeypot_log',
              15 => 'honeypot_protect_all_forms',
              16 => 'honeypot_time_limit',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'creighton_honeypot_config',
        'version' => '7.x-1.0',
      ),
      'creighton_variables' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_variables/creighton_variables.module',
        'basename' => 'creighton_variables.module',
        'name' => 'creighton_variables',
        'info' => 
        array (
          'name' => 'Variables',
          'description' => 'Default strongarm variables for all Creighton sites',
          'core' => '7.x',
          'package' => 'Creighton Core Settings',
          'version' => '7.x-2.22',
          'project' => 'creighton_variables',
          'dependencies' => 
          array (
            0 => 'ctools',
            1 => 'entityreference',
            2 => 'extlink',
            3 => 'features',
            4 => 'features_date',
            5 => 'feeds',
            6 => 'feeds_tamper',
            7 => 'ife',
            8 => 'mailsystem',
            9 => 'menu',
            10 => 'menu_target',
            11 => 'metatag',
            12 => 'metatag_dc',
            13 => 'metatag_views',
            14 => 'mimemail',
            15 => 'page_manager',
            16 => 'panels',
            17 => 'panels_ipe',
            18 => 'publish_button',
            19 => 'query_parameters_to_url',
            20 => 'strongarm',
            21 => 'taxonomy',
            22 => 'taxonomy_access_fix',
            23 => 'text',
            24 => 'total_control',
            25 => 'views',
            26 => 'views_content',
            27 => 'xmlsitemap',
            28 => 'xmlsitemap_node',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'page_manager:pages_default:1',
              1 => 'panels:pipelines:1',
              2 => 'strongarm:strongarm:1',
              3 => 'views:views_default:3.0',
            ),
            'custom_date_formats' => 
            array (
              0 => 'M j, Y',
              1 => 'g:i a',
            ),
            'date_format_types' => 
            array (
              0 => 'time_only_12_hr_',
              1 => 'us_standard_date_only_',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'field_base' => 
            array (
              0 => 'body',
              1 => 'field_2tier_page_header_image',
              2 => 'field_content_secondary_content',
              3 => 'field_content_supp_body_content',
              4 => 'field_internal_link',
            ),
            'filter' => 
            array (
              0 => 'mail_html',
            ),
            'menu_custom' => 
            array (
              0 => 'management',
              1 => 'menu-transaction-menu',
              2 => 'menu-utility-menu',
            ),
            'menu_links' => 
            array (
              0 => 'management_help:http://www.creighton.edu/web/resources',
            ),
            'metatag' => 
            array (
              0 => 'global',
              1 => 'global:frontpage',
              2 => 'node',
              3 => 'taxonomy_term',
              4 => 'user',
              5 => 'view',
            ),
            'page_manager_pages' => 
            array (
              0 => 'cu-dashboard',
            ),
            'taxonomy' => 
            array (
              0 => 'academic_unit',
              1 => 'program',
            ),
            'user_permission' => 
            array (
              0 => 'add terms in academic_unit',
              1 => 'add terms in program',
              2 => 'administer feeds',
              3 => 'administer feeds_tamper',
              4 => 'administer inline form errors',
              5 => 'administer mailsystem',
              6 => 'administer meta tags',
              7 => 'administer total control',
              8 => 'administer xmlsitemap',
              9 => 'delete terms in program',
              10 => 'edit meta tag: abstract',
              11 => 'edit meta tag: author',
              12 => 'edit meta tag: canonical',
              13 => 'edit meta tag: content-language',
              14 => 'edit meta tag: dcterms.contributor',
              15 => 'edit meta tag: dcterms.coverage',
              16 => 'edit meta tag: dcterms.creator',
              17 => 'edit meta tag: dcterms.date',
              18 => 'edit meta tag: dcterms.description',
              19 => 'edit meta tag: dcterms.format',
              20 => 'edit meta tag: dcterms.identifier',
              21 => 'edit meta tag: dcterms.language',
              22 => 'edit meta tag: dcterms.modified',
              23 => 'edit meta tag: dcterms.publisher',
              24 => 'edit meta tag: dcterms.relation',
              25 => 'edit meta tag: dcterms.rights',
              26 => 'edit meta tag: dcterms.source',
              27 => 'edit meta tag: dcterms.subject',
              28 => 'edit meta tag: dcterms.title',
              29 => 'edit meta tag: dcterms.type',
              30 => 'edit meta tag: description',
              31 => 'edit meta tag: generator',
              32 => 'edit meta tag: image_src',
              33 => 'edit meta tag: keywords',
              34 => 'edit meta tag: news_keywords',
              35 => 'edit meta tag: original-source',
              36 => 'edit meta tag: publisher',
              37 => 'edit meta tag: revisit-after',
              38 => 'edit meta tag: rights',
              39 => 'edit meta tag: robots',
              40 => 'edit meta tag: shortlink',
              41 => 'edit meta tag: standout',
              42 => 'edit meta tag: title',
              43 => 'edit meta tags',
              44 => 'edit mimemail user settings',
              45 => 'edit terms in program',
              46 => 'have total control',
              47 => 'publish button publish any content types',
              48 => 'publish button unpublish any content types',
              49 => 'rename features',
              50 => 'send arbitrary files',
            ),
            'variable' => 
            array (
              0 => 'admin_theme',
              1 => 'anonymous',
              2 => 'backup_migrate_destination_id',
              3 => 'backup_migrate_profile_id',
              4 => 'backup_migrate_source_id',
              5 => 'block_cache',
              6 => 'cache',
              7 => 'cache_lifetime',
              8 => 'clean_url',
              9 => 'date_api_use_iso8601',
              10 => 'date_default_timezone',
              11 => 'date_format_long',
              12 => 'date_format_medium',
              13 => 'date_format_short',
              14 => 'date_format_time_only_12_hr_',
              15 => 'date_format_us_standard_date_only_',
              16 => 'environment_variables',
              17 => 'extlink_alert',
              18 => 'extlink_alert_text',
              19 => 'extlink_class',
              20 => 'extlink_css_exclude',
              21 => 'extlink_css_explicit',
              22 => 'extlink_exclude',
              23 => 'extlink_include',
              24 => 'extlink_mailto_class',
              25 => 'extlink_subdomains',
              26 => 'extlink_target',
              27 => 'googleanalytics_account',
              28 => 'googleanalytics_cache',
              29 => 'googleanalytics_codesnippet_after',
              30 => 'googleanalytics_codesnippet_before',
              31 => 'googleanalytics_cross_domains',
              32 => 'googleanalytics_custom',
              33 => 'googleanalytics_custom_var',
              34 => 'googleanalytics_domain_mode',
              35 => 'googleanalytics_js_scope',
              36 => 'googleanalytics_pages',
              37 => 'googleanalytics_privacy_donottrack',
              38 => 'googleanalytics_roles',
              39 => 'googleanalytics_site_search',
              40 => 'googleanalytics_trackadsense',
              41 => 'googleanalytics_tracker_anonymizeip',
              42 => 'googleanalytics_trackfiles',
              43 => 'googleanalytics_trackfiles_extensions',
              44 => 'googleanalytics_trackmailto',
              45 => 'googleanalytics_trackoutbound',
              46 => 'googleanalytics_trackoutboundaspageview',
              47 => 'googleanalytics_visibility_pages',
              48 => 'googleanalytics_visibility_roles',
              49 => 'ife_show_everywhere',
              50 => 'jquery_update_compression_type',
              51 => 'jquery_update_jquery_admin_version',
              52 => 'jquery_update_jquery_cdn',
              53 => 'jquery_update_jquery_version',
              54 => 'mail_system',
              55 => 'menu_breadcrumb_append_node_title',
              56 => 'menu_breadcrumb_append_node_url',
              57 => 'menu_breadcrumb_determine_menu',
              58 => 'menu_breadcrumb_hide_on_single_item',
              59 => 'menu_breadcrumb_menu_patterns',
              60 => 'menu_breadcrumb_pattern_matches_rebuild',
              61 => 'menu_target_enabled',
              62 => 'menu_target_type',
              63 => 'metatag_extended_permissions',
              64 => 'metatag_schema_installed',
              65 => 'mimemail_engine',
              66 => 'mimemail_format',
              67 => 'mimemail_incoming',
              68 => 'mimemail_linkonly',
              69 => 'mimemail_mail',
              70 => 'mimemail_simple_address',
              71 => 'mimemail_sitestyle',
              72 => 'mimemail_textonly',
              73 => 'node_admin_theme',
              74 => 'page_cache_maximum_age',
              75 => 'page_compression',
              76 => 'pathauto_case',
              77 => 'pathauto_ignore_words',
              78 => 'pathauto_max_component_length',
              79 => 'pathauto_max_length',
              80 => 'pathauto_node_pattern',
              81 => 'pathauto_punctuation_ampersand',
              82 => 'pathauto_punctuation_asterisk',
              83 => 'pathauto_punctuation_at',
              84 => 'pathauto_punctuation_back_slash',
              85 => 'pathauto_punctuation_backtick',
              86 => 'pathauto_punctuation_caret',
              87 => 'pathauto_punctuation_colon',
              88 => 'pathauto_punctuation_comma',
              89 => 'pathauto_punctuation_dollar',
              90 => 'pathauto_punctuation_double_quotes',
              91 => 'pathauto_punctuation_equal',
              92 => 'pathauto_punctuation_exclamation',
              93 => 'pathauto_punctuation_greater_than',
              94 => 'pathauto_punctuation_hash',
              95 => 'pathauto_punctuation_hyphen',
              96 => 'pathauto_punctuation_left_curly',
              97 => 'pathauto_punctuation_left_parenthesis',
              98 => 'pathauto_punctuation_left_square',
              99 => 'pathauto_punctuation_less_than',
              100 => 'pathauto_punctuation_percent',
              101 => 'pathauto_punctuation_period',
              102 => 'pathauto_punctuation_pipe',
              103 => 'pathauto_punctuation_plus',
              104 => 'pathauto_punctuation_question_mark',
              105 => 'pathauto_punctuation_quotes',
              106 => 'pathauto_punctuation_right_curly',
              107 => 'pathauto_punctuation_right_parenthesis',
              108 => 'pathauto_punctuation_right_square',
              109 => 'pathauto_punctuation_semicolon',
              110 => 'pathauto_punctuation_slash',
              111 => 'pathauto_punctuation_tilde',
              112 => 'pathauto_punctuation_underscore',
              113 => 'pathauto_reduce_ascii',
              114 => 'pathauto_separator',
              115 => 'pathauto_taxonomy_term_pattern',
              116 => 'pathauto_transliterate',
              117 => 'pathauto_update_action',
              118 => 'pathauto_user_pattern',
              119 => 'pathauto_verbose',
              120 => 'query_parameters_to_url_allow_rewritten_menu_item_save',
              121 => 'query_parameters_to_url_enabled',
              122 => 'query_parameters_to_url_hooks_enabled',
              123 => 'query_parameters_to_url_ignore_admin_paths',
              124 => 'query_parameters_to_url_path_reg_exp',
              125 => 'query_parameters_to_url_query_nested_key_delimiter',
              126 => 'query_parameters_to_url_query_nested_value_delimiter',
              127 => 'query_parameters_to_url_redirect_protection_enabled',
              128 => 'query_parameters_to_url_redirect_status_code',
              129 => 'query_parameters_to_url_rewrite_hooks_enabled',
              130 => 'query_parameters_to_url_url_and_query_delimiter',
              131 => 'redirect_auto_redirect',
              132 => 'redirect_default_status_code',
              133 => 'redirect_global_admin_paths',
              134 => 'redirect_global_canonical',
              135 => 'redirect_global_clean',
              136 => 'redirect_global_deslash',
              137 => 'redirect_global_home',
              138 => 'redirect_page_cache',
              139 => 'redirect_passthrough_querystring',
              140 => 'redirect_purge_inactive',
              141 => 'redirect_warning',
              142 => 'site_403',
              143 => 'site_404',
              144 => 'subsite_parents',
              145 => 'site_default_country',
              146 => 'update_check_disabled',
              147 => 'user_email_verification',
              148 => 'user_register',
              149 => 'views_ui_always_live_preview',
              150 => 'views_ui_show_advanced_column',
              151 => 'views_ui_show_advanced_help_warning',
              152 => 'views_ui_show_listing_filters',
              153 => 'views_ui_show_master_display',
              154 => 'views_ui_show_sql_query',
              155 => 'xmlsitemap_batch_limit',
              156 => 'xmlsitemap_chunk_size',
              157 => 'xmlsitemap_frontpage_changefreq',
              158 => 'xmlsitemap_frontpage_priority',
              159 => 'xmlsitemap_lastmod_format',
              160 => 'xmlsitemap_minimum_lifetime',
              161 => 'xmlsitemap_path',
              162 => 'xmlsitemap_prefetch_aliases',
              163 => 'xmlsitemap_settings__active_tab',
              164 => 'xmlsitemap_xsl',
            ),
            'views_view' => 
            array (
              0 => 'latest_blocks',
              1 => 'latest_webform_submissions',
              2 => 'my_latest_content',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'creighton_variables',
        'version' => '7.x-2.22',
      ),
      'creighton_media' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_media/creighton_media.module',
        'basename' => 'creighton_media.module',
        'name' => 'creighton_media',
        'info' => 
        array (
          'name' => 'Media',
          'description' => 'Media Configuration (Media module, Picture, Image Styles, etc.)',
          'core' => '7.x',
          'package' => 'Creighton',
          'version' => '7.x-2.22',
          'project' => 'creighton_media',
          'dependencies' => 
          array (
            0 => 'breakpoints',
            1 => 'ctools',
            2 => 'features',
            3 => 'file_entity',
            4 => 'image',
            5 => 'media',
            6 => 'media_bulk_upload',
            7 => 'picture',
            8 => 'strongarm',
            9 => 'text',
          ),
          'features' => 
          array (
            'breakpoint_group' => 
            array (
              0 => 'available_programs_icon',
              1 => 'body_full_width',
              2 => 'body_partial_width',
              3 => 'body_profile',
              4 => 'body_small_partial_width',
              5 => 'body_thumbnail',
            ),
            'breakpoints' => 
            array (
              0 => 'custom.user.max_width_20em',
              1 => 'custom.user.max_width_30em',
              2 => 'custom.user.max_width_35_4375em',
              3 => 'custom.user.max_width_40em',
              4 => 'custom.user.max_width_42_5em',
              5 => 'custom.user.max_width_50em',
              6 => 'custom.user.max_width_56_25em',
              7 => 'custom.user.min_width_56_26em',
            ),
            'ctools' => 
            array (
              0 => 'breakpoints:default_breakpoint_group:1',
              1 => 'breakpoints:default_breakpoints:1',
              2 => 'file_entity:file_default_displays:1',
              3 => 'picture:default_picture_mapping:1',
              4 => 'strongarm:strongarm:1',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'field_base' => 
            array (
              0 => 'field_file_image_alt_text',
              1 => 'field_file_image_title_text',
            ),
            'field_instance' => 
            array (
              0 => 'file-image-field_file_image_alt_text',
              1 => 'file-image-field_file_image_title_text',
            ),
            'file_display' => 
            array (
              0 => 'document__default__file_field_file_download_link',
              1 => 'document__default__file_field_file_table',
              2 => 'document__default__file_field_file_url_plain',
              3 => 'document__default__file_field_media_large_icon',
              4 => 'document__default__file_picture',
              5 => 'document__preview__file_field_file_download_link',
              6 => 'document__preview__file_field_file_table',
              7 => 'document__preview__file_field_file_url_plain',
              8 => 'document__preview__file_picture',
              9 => 'image__default__file_field_file_download_link',
              10 => 'image__default__file_field_file_table',
              11 => 'image__default__file_field_file_url_plain',
              12 => 'image__default__file_field_media_large_icon',
              13 => 'image__default__file_field_picture',
              14 => 'image__default__file_field_remote_image',
              15 => 'image__default__file_picture',
              16 => 'image__full__file_image',
              17 => 'image__preview__file_field_file_download_link',
              18 => 'image__preview__file_field_file_table',
              19 => 'image__preview__file_field_file_url_plain',
              20 => 'image__preview__file_field_picture',
              21 => 'image__preview__file_field_remote_image',
              22 => 'image__preview__file_picture',
            ),
            'image' => 
            array (
              0 => 'available_programs_icon',
              1 => 'body_full_width',
              2 => 'body_full_width_custom_user_max_width_20em_1_5x',
              3 => 'body_full_width_custom_user_max_width_20em_1x',
              4 => 'body_full_width_custom_user_max_width_20em_2x',
              5 => 'body_full_width_custom_user_max_width_30em_1_5x',
              6 => 'body_full_width_custom_user_max_width_30em_1x',
              7 => 'body_full_width_custom_user_max_width_30em_2x',
              8 => 'body_full_width_custom_user_max_width_40em_1_5x',
              9 => 'body_full_width_custom_user_max_width_40em_1x',
              10 => 'body_full_width_custom_user_max_width_40em_2x',
              11 => 'body_full_width_custom_user_max_width_50em_1_5x',
              12 => 'body_full_width_custom_user_max_width_50em_1x',
              13 => 'body_full_width_custom_user_max_width_50em_2x',
              14 => 'body_full_width_custom_user_max_width_56_25em_1_5x',
              15 => 'body_full_width_custom_user_max_width_56_25em_1x',
              16 => 'body_full_width_custom_user_max_width_56_25em_2x',
              17 => 'body_full_width_custom_user_min_width_56_26em_1_5x',
              18 => 'body_full_width_custom_user_min_width_56_26em_1x',
              19 => 'body_full_width_custom_user_min_width_56_26em_2x',
              20 => 'body_partial_width',
              21 => 'body_partial_width_custom_user_max_width_20em_1_5x',
              22 => 'body_partial_width_custom_user_max_width_20em_1x',
              23 => 'body_partial_width_custom_user_max_width_20em_2x',
              24 => 'body_partial_width_custom_user_max_width_56_25em_1_5x',
              25 => 'body_partial_width_custom_user_max_width_56_25em_1x',
              26 => 'body_partial_width_custom_user_max_width_56_25em_2x',
              27 => 'body_partial_width_custom_user_min_width_56_26em_1_5x',
              28 => 'body_partial_width_custom_user_min_width_56_26em_1x',
              29 => 'body_partial_width_custom_user_min_width_56_26em_2x',
              30 => 'body_profile',
              31 => 'body_profile_custom_user_max_width_56_25em_1_5x',
              32 => 'body_profile_custom_user_max_width_56_25em_1x',
              33 => 'body_profile_custom_user_max_width_56_25em_2x',
              34 => 'body_profile_custom_user_min_width_56_26em_1_5x',
              35 => 'body_profile_custom_user_min_width_56_26em_1x',
              36 => 'body_profile_custom_user_min_width_56_26em_2x',
              37 => 'body_small_partial_width',
              38 => 'body_small_partial_width_custom_user_max_width_56_25em_1_5x',
              39 => 'body_small_partial_width_custom_user_max_width_56_25em_1x',
              40 => 'body_small_partial_width_custom_user_max_width_56_25em_2x',
              41 => 'body_small_partial_width_custom_user_min_width_56_26em_1_5x',
              42 => 'body_small_partial_width_custom_user_min_width_56_26em_1x',
              43 => 'body_small_partial_width_custom_user_min_width_56_26em_2x',
              44 => 'body_thumbnail',
              45 => 'body_thumbnail_custom_user_max_width_56_25em_1_5x',
              46 => 'body_thumbnail_custom_user_max_width_56_25em_1x',
              47 => 'body_thumbnail_custom_user_max_width_56_25em_2x',
              48 => 'body_thumbnail_custom_user_min_width_56_26em_1_5x',
              49 => 'body_thumbnail_custom_user_min_width_56_26em_1x',
              50 => 'body_thumbnail_custom_user_min_width_56_26em_2x',
            ),
            'picture_mapping' => 
            array (
              0 => 'available_programs_icon',
              1 => 'body_full_width',
              2 => 'body_partial_width',
              3 => 'body_profile',
              4 => 'body_small_partial_width',
              5 => 'body_thumbnail',
            ),
            'user_permission' => 
            array (
              0 => 'access media browser',
              1 => 'administer breakpoints',
              2 => 'administer file types',
              3 => 'administer files',
              4 => 'administer media browser',
              5 => 'administer pictures',
              6 => 'bypass file access',
              7 => 'create files',
              8 => 'delete any audio files',
              9 => 'delete any document files',
              10 => 'delete any image files',
              11 => 'delete any video files',
              12 => 'delete own audio files',
              13 => 'delete own document files',
              14 => 'delete own image files',
              15 => 'delete own video files',
              16 => 'download any audio files',
              17 => 'download any document files',
              18 => 'download any image files',
              19 => 'download any video files',
              20 => 'download own audio files',
              21 => 'download own document files',
              22 => 'download own image files',
              23 => 'download own video files',
              24 => 'edit any audio files',
              25 => 'edit any document files',
              26 => 'edit any image files',
              27 => 'edit any video files',
              28 => 'edit own audio files',
              29 => 'edit own document files',
              30 => 'edit own image files',
              31 => 'edit own video files',
              32 => 'import media',
              33 => 'view files',
              34 => 'view own files',
              35 => 'view own private files',
              36 => 'view private files',
            ),
            'variable' => 
            array (
              0 => 'file_entity_alt',
              1 => 'file_entity_default_allowed_extensions',
              2 => 'file_entity_file_upload_wizard_skip_fields',
              3 => 'file_entity_file_upload_wizard_skip_file_type',
              4 => 'file_entity_file_upload_wizard_skip_scheme',
              5 => 'file_entity_max_filesize',
              6 => 'file_entity_title',
              7 => 'image_toolkit',
              8 => 'media_icon_base_directory',
              9 => 'media_wysiwyg_default_render',
              10 => 'media_wysiwyg_wysiwyg_allowed_types',
              11 => 'media_wysiwyg_wysiwyg_upload_directory',
              12 => 'pathauto_file_pattern',
              13 => 'picture_ckeditor_groups',
              14 => 'picture_ckeditor_label',
              15 => 'picture_implementation',
              16 => 'portable_path_stream_wrappers',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'creighton_media',
        'version' => '7.x-2.22',
      ),
      'cu_quick_search_blocks' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_blocks/cu_quick_search_blocks/cu_quick_search_blocks.module',
        'basename' => 'cu_quick_search_blocks.module',
        'name' => 'cu_quick_search_blocks',
        'info' => 
        array (
          'name' => 'Creighton Quick Search Blocks',
          'description' => 'Blocks for the Header and Footer holding the search form',
          'core' => '7.x',
          'package' => 'Creighton',
          'files' => 
          array (
            0 => 'cu_quick_search_blocks.module',
          ),
          'version' => '7.x-2.22',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => '',
        'version' => '7.x-2.22',
      ),
      'cu_custom_blocks' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_blocks/cu_custom_blocks/cu_custom_blocks.module',
        'basename' => 'cu_custom_blocks.module',
        'name' => 'cu_custom_blocks',
        'info' => 
        array (
          'name' => 'Creighton Custom Blocks',
          'description' => 'Creates a custom block for Creighton.edu theming layer',
          'core' => '7.x',
          'package' => 'Creighton',
          'files' => 
          array (
            0 => 'cu_custom_blocks.module',
          ),
          'version' => '7.x-2.22',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => '',
        'version' => '7.x-2.22',
      ),
      'jetspring_chat_blocks' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_blocks/jetspring_chat_blocks/jetspring_chat_blocks.module',
        'basename' => 'jetspring_chat_blocks.module',
        'name' => 'jetspring_chat_blocks',
        'info' => 
        array (
          'name' => 'Jetspring Chat Blocks',
          'description' => 'Creates a header and footer block for Jetspring Chat',
          'core' => '7.x',
          'package' => 'Creighton Optional Packages',
          'version' => '7.x-1.0',
          'dependencies' => 
          array (
            0 => 'block',
            1 => 'context',
            2 => 'ctools',
            3 => 'views',
          ),
          'features' => 
          array (
            'context' => 
            array (
              0 => 'jetspring_chat_block_placement',
            ),
            'ctools' => 
            array (
              0 => 'context:context:3',
              1 => 'views:views_default:3.0',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'views_view' => 
            array (
              0 => 'jetspring_header_footer',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => '',
        'version' => '7.x-1.0',
      ),
      'front_page_parts' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_blocks/creighton_block_types/front_page_parts/front_page_parts.module',
        'basename' => 'front_page_parts.module',
        'name' => 'front_page_parts',
        'info' => 
        array (
          'name' => 'Front Page Parts',
          'description' => 'A content type of the main content front page parts including headline, featured content, summary, links mini panel, icon btn',
          'core' => '7.x',
          'package' => 'Creighton',
          'version' => '7.x-1.0',
          'project' => 'front_page_parts',
          'dependencies' => 
          array (
            0 => 'conditional_fields',
            1 => 'creighton_front_page_2015',
            2 => 'creighton_variables',
            3 => 'ctools',
            4 => 'entityreference',
            5 => 'features',
            6 => 'field_group',
            7 => 'image',
            8 => 'link',
            9 => 'list',
            10 => 'number',
            11 => 'options',
            12 => 'panels_mini',
            13 => 'strongarm',
            14 => 'taxonomy',
            15 => 'text',
            16 => 'views',
          ),
          'features' => 
          array (
            'conditional_fields' => 
            array (
              0 => 'node:front_page_elements',
              1 => 'node:icon_button_with_text',
            ),
            'ctools' => 
            array (
              0 => 'field_group:field_group:1',
              1 => 'panels_mini:panels_default:1',
              2 => 'strongarm:strongarm:1',
              3 => 'views:views_default:3.0',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'field_base' => 
            array (
              0 => 'field_featured_content_image',
              1 => 'field_fp_elements_external_link',
              2 => 'field_fp_elements_internal_link',
              3 => 'field_fp_elements_link_text',
              4 => 'field_fp_elements_link_type',
              5 => 'field_front_page_element_type',
              6 => 'field_front_page_order',
              7 => 'field_headline',
              8 => 'field_icon_btn_image',
              9 => 'field_icon_btn_link_external',
              10 => 'field_icon_btn_link_internal',
              11 => 'field_icon_btn_link_text',
              12 => 'field_icon_btn_link_type',
              13 => 'field_icon_btn_tag',
              14 => 'field_subhead',
            ),
            'field_group' => 
            array (
              0 => 'group_front_page_elements_link|node|front_page_elements|form',
            ),
            'field_instance' => 
            array (
              0 => 'node-front_page_elements-body',
              1 => 'node-front_page_elements-field_featured_content_image',
              2 => 'node-front_page_elements-field_fp_elements_external_link',
              3 => 'node-front_page_elements-field_fp_elements_internal_link',
              4 => 'node-front_page_elements-field_fp_elements_link_text',
              5 => 'node-front_page_elements-field_fp_elements_link_type',
              6 => 'node-front_page_elements-field_front_page_element_type',
              7 => 'node-front_page_elements-field_front_page_order',
              8 => 'node-front_page_elements-field_headline',
              9 => 'node-front_page_elements-field_subhead',
              10 => 'node-icon_button_with_text-field_icon_btn_image',
              11 => 'node-icon_button_with_text-field_icon_btn_link_external',
              12 => 'node-icon_button_with_text-field_icon_btn_link_internal',
              13 => 'node-icon_button_with_text-field_icon_btn_link_text',
              14 => 'node-icon_button_with_text-field_icon_btn_link_type',
              15 => 'node-icon_button_with_text-field_icon_btn_tag',
            ),
            'node' => 
            array (
              0 => 'front_page_elements',
              1 => 'icon_button_with_text',
            ),
            'variable' => 
            array (
              0 => 'field_bundle_settings_node__front_page_elements',
              1 => 'field_bundle_settings_node__icon_button_with_text',
              2 => 'menu_options_front_page_elements',
              3 => 'menu_options_icon_button_with_text',
              4 => 'menu_parent_front_page_elements',
              5 => 'menu_parent_icon_button_with_text',
              6 => 'node_options_front_page_elements',
              7 => 'node_options_icon_button_with_text',
              8 => 'node_preview_front_page_elements',
              9 => 'node_preview_icon_button_with_text',
              10 => 'node_submitted_front_page_elements',
              11 => 'node_submitted_icon_button_with_text',
            ),
            'views_view' => 
            array (
              0 => 'front_page_e',
              1 => 'icon_btn_with_text_view',
            ),
          ),
          'features_exclude' => 
          array (
            'taxonomy' => 
            array (
              'admissions_site_tags' => 'admissions_site_tags',
            ),
          ),
          'mtime' => '1443130270',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'front_page_parts',
        'version' => '7.x-1.0',
      ),
      'creighton_block_types' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_blocks/creighton_block_types/creighton_block_types.module',
        'basename' => 'creighton_block_types.module',
        'name' => 'creighton_block_types',
        'info' => 
        array (
          'name' => 'Block Types',
          'description' => 'Creighton Default Block Types',
          'core' => '7.x',
          'package' => 'Creighton',
          'version' => '7.x-2.22',
          'project' => 'creighton_block_types',
          'dependencies' => 
          array (
            0 => 'bean',
            1 => 'bean_admin_ui',
            2 => 'better_formats',
            3 => 'block_class',
            4 => 'cer',
            5 => 'conditional_fields',
            6 => 'creighton_2tier_page',
            7 => 'creighton_content_page',
            8 => 'creighton_front_page_2015',
            9 => 'creighton_global_roles',
            10 => 'creighton_media',
            11 => 'creighton_variables',
            12 => 'creighton_wysiwyg',
            13 => 'ctools',
            14 => 'email',
            15 => 'entityreference',
            16 => 'eva',
            17 => 'features',
            18 => 'field_collection',
            19 => 'field_group',
            20 => 'field_validation',
            21 => 'field_validation_extras',
            22 => 'file',
            23 => 'filter',
            24 => 'image',
            25 => 'link',
            26 => 'list',
            27 => 'media',
            28 => 'multiple_selects',
            29 => 'options',
            30 => 'panels',
            31 => 'panels_mini',
            32 => 'picture',
            33 => 'remote_viewer',
            34 => 'spamspan',
            35 => 'strongarm',
            36 => 'text',
            37 => 'views',
            38 => 'views_php',
          ),
          'features' => 
          array (
            'bean_type' => 
            array (
              0 => 'contact_block',
              1 => 'copy_block',
              2 => 'featured_content_2',
              3 => 'featured_links',
              4 => 'featured_related_content',
              5 => 'footer_badge',
              6 => 'front_page_audience',
              7 => 'front_page_featured_content',
              8 => 'front_page_slider',
              9 => 'header_background_image',
              10 => 'inline_slider',
              11 => 'profile',
              12 => 'promo_box',
              13 => 'quote',
              14 => 'related_links',
              15 => 'tabbed_accordion',
            ),
            'breakpoint_group' => 
            array (
              0 => 'featured_content_2',
              1 => 'featured_related_content',
              2 => 'footer_badge',
              3 => 'front_page_slider',
              4 => 'front_page_slider_alt',
              5 => 'header_background_image',
              6 => 'inline_slider',
              7 => 'profile_block_image',
            ),
            'cer' => 
            array (
              0 => 'bean*copy_block*field_block_content_reference*node*2tier_page*field_content_secondary_content',
              1 => 'bean*copy_block*field_block_content_reference*node*content_page*field_content_secondary_content',
              2 => 'bean*featured_links*field_block_content_reference*node*2tier_page*field_content_secondary_content',
              3 => 'bean*featured_links*field_block_content_reference*node*content_page*field_content_secondary_content',
              4 => 'bean*featured_related_content*field_block_content_reference*node*2tier_page*field_content_supp_body_content',
              5 => 'bean*featured_related_content*field_block_content_reference*node*content_page*field_content_supp_body_content',
              6 => 'bean*header_background_image*field_block_2tier_reference*node*2tier_page*field_2tier_page_header_image',
              7 => 'bean*inline_slider*field_block_content_reference*node*2tier_page*field_content_supp_body_content',
              8 => 'bean*inline_slider*field_block_content_reference*node*content_page*field_content_supp_body_content',
              9 => 'bean*profile*field_block_content_reference*node*2tier_page*field_content_secondary_content',
              10 => 'bean*profile*field_block_content_reference*node*content_page*field_content_secondary_content',
              11 => 'bean*promo_box*field_block_content_reference*node*2tier_page*field_content_secondary_content',
              12 => 'bean*promo_box*field_block_content_reference*node*content_page*field_content_secondary_content',
              13 => 'bean*quote*field_block_content_reference*node*2tier_page*field_content_secondary_content',
              14 => 'bean*quote*field_block_content_reference*node*content_page*field_content_secondary_content',
              15 => 'bean*related_links*field_block_content_reference*node*2tier_page*field_content_secondary_content',
              16 => 'bean*related_links*field_block_content_reference*node*content_page*field_content_secondary_content',
              17 => 'bean*tabbed_accordion*field_block_content_reference*node*2tier_page*field_content_supp_body_content',
              18 => 'bean*tabbed_accordion*field_block_content_reference*node*content_page*field_content_supp_body_content',
            ),
            'conditional_fields' => 
            array (
              0 => 'bean:featured_content_2',
              1 => 'bean:featured_links',
              2 => 'bean:footer_badge',
              3 => 'bean:front_page_slider',
              4 => 'bean:profile',
              5 => 'bean:promo_box',
              6 => 'field_collection_item:field_featured_content2_links',
              7 => 'field_collection_item:field_featured_rel_cont',
              8 => 'field_collection_item:field_fp_audience_link_group',
              9 => 'field_collection_item:field_fp_featured_links',
              10 => 'field_collection_item:field_front_page_slide_group',
              11 => 'field_collection_item:field_front_page_slide_group_alt',
              12 => 'field_collection_item:field_related_links',
            ),
            'ctools' => 
            array (
              0 => 'bean_admin_ui:bean:5',
              1 => 'breakpoints:default_breakpoint_group:1',
              2 => 'breakpoints:default_breakpoints:1',
              3 => 'cer:default_cer_presets:1',
              4 => 'field_group:field_group:1',
              5 => 'field_validation:default_field_validation_rules:2',
              6 => 'panels:layouts:1',
              7 => 'panels_mini:panels_default:1',
              8 => 'picture:default_picture_mapping:1',
              9 => 'strongarm:strongarm:1',
              10 => 'views:views_default:3.0',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'field_base' => 
            array (
              0 => 'field_audience_link_title',
              1 => 'field_block_2tier_reference',
              2 => 'field_block_content_reference',
              3 => 'field_contact_blk_city_state_zip',
              4 => 'field_contact_block_address',
              5 => 'field_contact_block_e_mail',
              6 => 'field_contact_block_facebook',
              7 => 'field_contact_block_linkedin',
              8 => 'field_contact_block_phone',
              9 => 'field_contact_block_twitter',
              10 => 'field_contact_block_youtube',
              11 => 'field_copy_block_body',
              12 => 'field_copy_block_image',
              13 => 'field_copy_block_style',
              14 => 'field_copy_block_title',
              15 => 'field_external_link',
              16 => 'field_featured_content2_body',
              17 => 'field_featured_content2_image',
              18 => 'field_featured_content2_link_txt',
              19 => 'field_featured_content2_links',
              20 => 'field_featured_content2_title',
              21 => 'field_featured_link_button_color',
              22 => 'field_featured_link_text',
              23 => 'field_featured_rel_con_link_text',
              24 => 'field_featured_rel_cont',
              25 => 'field_featured_rel_cont_body',
              26 => 'field_featured_rel_cont_image',
              27 => 'field_featured_rel_cont_title',
              28 => 'field_file_link',
              29 => 'field_file_link_absolute',
              30 => 'field_footer_badge_image',
              31 => 'field_footer_badge_type',
              32 => 'field_fp_audience',
              33 => 'field_fp_audience_link_group',
              34 => 'field_fp_featured_description',
              35 => 'field_fp_featured_image',
              36 => 'field_fp_featured_links',
              37 => 'field_fp_featured_links_desc',
              38 => 'field_fp_featured_links_image',
              39 => 'field_fp_featured_links_title',
              40 => 'field_fp_featured_title',
              41 => 'field_fp_slide_headline',
              42 => 'field_fp_slide_headline_multiple',
              43 => 'field_fp_slide_image',
              44 => 'field_fp_slide_image_alt',
              45 => 'field_fp_slide_link_internal_1',
              46 => 'field_fp_slide_link_internal_2',
              47 => 'field_fp_slide_link_internal_3',
              48 => 'field_fp_slide_link_text',
              49 => 'field_fp_slide_link_text_1',
              50 => 'field_fp_slide_link_text_2',
              51 => 'field_fp_slide_link_text_3',
              52 => 'field_fp_text_multiple_links',
              53 => 'field_front_page_audience',
              54 => 'field_front_page_featured',
              55 => 'field_front_page_featured_links',
              56 => 'field_front_page_featured_style',
              57 => 'field_front_page_slide_group',
              58 => 'field_front_page_slide_group_alt',
              59 => 'field_front_page_slider_style',
              60 => 'field_header_background_image',
              61 => 'field_inline_slider',
              62 => 'field_inline_slider_caption',
              63 => 'field_inline_slider_image',
              64 => 'field_int_link',
              65 => 'field_link_type',
              66 => 'field_profile_affiliation',
              67 => 'field_profile_body',
              68 => 'field_profile_image',
              69 => 'field_profile_name',
              70 => 'field_profile_quote',
              71 => 'field_promo_box_link_text',
              72 => 'field_promo_box_promo_text',
              73 => 'field_quote_description',
              74 => 'field_quote_name',
              75 => 'field_quote_text',
              76 => 'field_related_links',
              77 => 'field_related_links_link_text',
              78 => 'field_repo_external_link',
              79 => 'field_repo_file_link',
              80 => 'field_repo_internal_link',
              81 => 'field_repo_link_text',
              82 => 'field_repo_link_type',
              83 => 'field_repo_media_link',
              84 => 'field_tabbed_acc_body',
              85 => 'field_tabbed_acc_content',
              86 => 'field_tabbed_acc_display_type',
              87 => 'field_tabbed_acc_title',
            ),
            'field_group' => 
            array (
              0 => 'group_fp_audience_link_1|field_collection_item|field_front_page_audience|form',
              1 => 'group_fp_audience_link_2|field_collection_item|field_front_page_audience|form',
              2 => 'group_fp_audience_link_3|field_collection_item|field_front_page_audience|form',
              3 => 'group_fp_audience_link_4|field_collection_item|field_front_page_audience|form',
              4 => 'group_fp_audience_links|field_collection_item|field_front_page_audience|form',
              5 => 'group_fp_slide_multi_links|field_collection_item|field_front_page_slide_group_alt|form',
              6 => 'group_fp_slide_one|field_collection_item|field_front_page_slide_group_alt|form',
            ),
            'field_instance' => 
            array (
              0 => 'bean-contact_block-field_contact_block_address',
              1 => 'bean-contact_block-field_contact_block_e_mail',
              2 => 'bean-contact_block-field_contact_block_facebook',
              3 => 'bean-contact_block-field_contact_block_linkedin',
              4 => 'bean-contact_block-field_contact_block_phone',
              5 => 'bean-contact_block-field_contact_block_twitter',
              6 => 'bean-contact_block-field_contact_block_youtube',
              7 => 'bean-copy_block-field_block_content_reference',
              8 => 'bean-copy_block-field_copy_block_body',
              9 => 'bean-copy_block-field_copy_block_image',
              10 => 'bean-copy_block-field_copy_block_style',
              11 => 'bean-copy_block-field_copy_block_title',
              12 => 'bean-featured_content_2-field_external_link',
              13 => 'bean-featured_content_2-field_featured_content2_body',
              14 => 'bean-featured_content_2-field_featured_content2_image',
              15 => 'bean-featured_content_2-field_featured_content2_links',
              16 => 'bean-featured_content_2-field_featured_content2_title',
              17 => 'bean-featured_content_2-field_file_link',
              18 => 'bean-featured_content_2-field_int_link',
              19 => 'bean-featured_content_2-field_link_type',
              20 => 'bean-featured_links-field_block_content_reference',
              21 => 'bean-featured_links-field_external_link',
              22 => 'bean-featured_links-field_featured_link_button_color',
              23 => 'bean-featured_links-field_featured_link_text',
              24 => 'bean-featured_links-field_file_link',
              25 => 'bean-featured_links-field_file_link_absolute',
              26 => 'bean-featured_links-field_int_link',
              27 => 'bean-featured_links-field_link_type',
              28 => 'bean-featured_related_content-field_block_content_reference',
              29 => 'bean-featured_related_content-field_featured_rel_cont',
              30 => 'bean-footer_badge-field_external_link',
              31 => 'bean-footer_badge-field_file_link',
              32 => 'bean-footer_badge-field_footer_badge_image',
              33 => 'bean-footer_badge-field_footer_badge_type',
              34 => 'bean-footer_badge-field_int_link',
              35 => 'bean-footer_badge-field_link_type',
              36 => 'bean-front_page_audience-field_front_page_audience',
              37 => 'bean-front_page_featured_content-field_front_page_featured',
              38 => 'bean-front_page_featured_content-field_front_page_featured_links',
              39 => 'bean-front_page_featured_content-field_front_page_featured_style',
              40 => 'bean-front_page_slider-field_front_page_slide_group',
              41 => 'bean-front_page_slider-field_front_page_slide_group_alt',
              42 => 'bean-front_page_slider-field_front_page_slider_style',
              43 => 'bean-header_background_image-field_block_2tier_reference',
              44 => 'bean-header_background_image-field_header_background_image',
              45 => 'bean-inline_slider-field_block_content_reference',
              46 => 'bean-inline_slider-field_inline_slider',
              47 => 'bean-profile-field_block_content_reference',
              48 => 'bean-profile-field_external_link',
              49 => 'bean-profile-field_file_link',
              50 => 'bean-profile-field_int_link',
              51 => 'bean-profile-field_link_type',
              52 => 'bean-profile-field_profile_affiliation',
              53 => 'bean-profile-field_profile_body',
              54 => 'bean-profile-field_profile_image',
              55 => 'bean-profile-field_profile_name',
              56 => 'bean-profile-field_profile_quote',
              57 => 'bean-promo_box-field_block_content_reference',
              58 => 'bean-promo_box-field_external_link',
              59 => 'bean-promo_box-field_file_link',
              60 => 'bean-promo_box-field_int_link',
              61 => 'bean-promo_box-field_link_type',
              62 => 'bean-promo_box-field_promo_box_link_text',
              63 => 'bean-promo_box-field_promo_box_promo_text',
              64 => 'bean-quote-field_block_content_reference',
              65 => 'bean-quote-field_quote_description',
              66 => 'bean-quote-field_quote_name',
              67 => 'bean-quote-field_quote_text',
              68 => 'bean-related_links-field_block_content_reference',
              69 => 'bean-related_links-field_related_links',
              70 => 'bean-tabbed_accordion-field_block_content_reference',
              71 => 'bean-tabbed_accordion-field_tabbed_acc_content',
              72 => 'bean-tabbed_accordion-field_tabbed_acc_display_type',
              73 => 'field_collection_item-field_featured_content2_links-field_external_link',
              74 => 'field_collection_item-field_featured_content2_links-field_featured_content2_link_txt',
              75 => 'field_collection_item-field_featured_content2_links-field_file_link',
              76 => 'field_collection_item-field_featured_content2_links-field_int_link',
              77 => 'field_collection_item-field_featured_content2_links-field_link_type',
              78 => 'field_collection_item-field_featured_rel_cont-field_external_link',
              79 => 'field_collection_item-field_featured_rel_cont-field_featured_rel_con_link_text',
              80 => 'field_collection_item-field_featured_rel_cont-field_featured_rel_cont_body',
              81 => 'field_collection_item-field_featured_rel_cont-field_featured_rel_cont_image',
              82 => 'field_collection_item-field_featured_rel_cont-field_featured_rel_cont_title',
              83 => 'field_collection_item-field_featured_rel_cont-field_file_link',
              84 => 'field_collection_item-field_featured_rel_cont-field_int_link',
              85 => 'field_collection_item-field_featured_rel_cont-field_link_type',
              86 => 'field_collection_item-field_fp_audience_link_group-field_audience_link_title',
              87 => 'field_collection_item-field_fp_audience_link_group-field_external_link',
              88 => 'field_collection_item-field_fp_audience_link_group-field_file_link',
              89 => 'field_collection_item-field_fp_audience_link_group-field_int_link',
              90 => 'field_collection_item-field_fp_audience_link_group-field_link_type',
              91 => 'field_collection_item-field_fp_featured_links-field_repo_external_link',
              92 => 'field_collection_item-field_fp_featured_links-field_repo_internal_link',
              93 => 'field_collection_item-field_fp_featured_links-field_repo_link_text',
              94 => 'field_collection_item-field_fp_featured_links-field_repo_link_type',
              95 => 'field_collection_item-field_fp_featured_links-field_repo_media_link',
              96 => 'field_collection_item-field_front_page_audience-field_fp_audience',
              97 => 'field_collection_item-field_front_page_audience-field_fp_audience_link_group',
              98 => 'field_collection_item-field_front_page_featured-field_external_link',
              99 => 'field_collection_item-field_front_page_featured-field_file_link',
              100 => 'field_collection_item-field_front_page_featured-field_fp_featured_description',
              101 => 'field_collection_item-field_front_page_featured-field_fp_featured_image',
              102 => 'field_collection_item-field_front_page_featured-field_fp_featured_title',
              103 => 'field_collection_item-field_front_page_featured-field_int_link',
              104 => 'field_collection_item-field_front_page_featured-field_link_type',
              105 => 'field_collection_item-field_front_page_featured_links-field_fp_featured_links',
              106 => 'field_collection_item-field_front_page_featured_links-field_fp_featured_links_desc',
              107 => 'field_collection_item-field_front_page_featured_links-field_fp_featured_links_image',
              108 => 'field_collection_item-field_front_page_featured_links-field_fp_featured_links_title',
              109 => 'field_collection_item-field_front_page_slide_group-field_external_link',
              110 => 'field_collection_item-field_front_page_slide_group-field_file_link',
              111 => 'field_collection_item-field_front_page_slide_group-field_fp_slide_headline',
              112 => 'field_collection_item-field_front_page_slide_group-field_fp_slide_image',
              113 => 'field_collection_item-field_front_page_slide_group-field_fp_slide_link_text',
              114 => 'field_collection_item-field_front_page_slide_group-field_int_link',
              115 => 'field_collection_item-field_front_page_slide_group-field_link_type',
              116 => 'field_collection_item-field_front_page_slide_group_alt-field_external_link',
              117 => 'field_collection_item-field_front_page_slide_group_alt-field_file_link',
              118 => 'field_collection_item-field_front_page_slide_group_alt-field_fp_slide_headline',
              119 => 'field_collection_item-field_front_page_slide_group_alt-field_fp_slide_headline_multiple',
              120 => 'field_collection_item-field_front_page_slide_group_alt-field_fp_slide_image_alt',
              121 => 'field_collection_item-field_front_page_slide_group_alt-field_fp_slide_link_internal_1',
              122 => 'field_collection_item-field_front_page_slide_group_alt-field_fp_slide_link_internal_2',
              123 => 'field_collection_item-field_front_page_slide_group_alt-field_fp_slide_link_internal_3',
              124 => 'field_collection_item-field_front_page_slide_group_alt-field_fp_slide_link_text',
              125 => 'field_collection_item-field_front_page_slide_group_alt-field_fp_slide_link_text_1',
              126 => 'field_collection_item-field_front_page_slide_group_alt-field_fp_slide_link_text_2',
              127 => 'field_collection_item-field_front_page_slide_group_alt-field_fp_slide_link_text_3',
              128 => 'field_collection_item-field_front_page_slide_group_alt-field_fp_text_multiple_links',
              129 => 'field_collection_item-field_front_page_slide_group_alt-field_int_link',
              130 => 'field_collection_item-field_front_page_slide_group_alt-field_link_type',
              131 => 'field_collection_item-field_inline_slider-field_inline_slider_caption',
              132 => 'field_collection_item-field_inline_slider-field_inline_slider_image',
              133 => 'field_collection_item-field_related_links-field_external_link',
              134 => 'field_collection_item-field_related_links-field_file_link',
              135 => 'field_collection_item-field_related_links-field_int_link',
              136 => 'field_collection_item-field_related_links-field_link_type',
              137 => 'field_collection_item-field_related_links-field_related_links_link_text',
              138 => 'field_collection_item-field_tabbed_acc_content-field_tabbed_acc_body',
              139 => 'field_collection_item-field_tabbed_acc_content-field_tabbed_acc_title',
              140 => 'node-field_link_repo-body',
              141 => 'node-field_link_repo-field_repo_external_link',
              142 => 'node-field_link_repo-field_repo_file_link',
              143 => 'node-field_link_repo-field_repo_internal_link',
              144 => 'node-field_link_repo-field_repo_link_type',
            ),
            'field_validation_rule' => 
            array (
              0 => 'block_featured_cont_2_alt_tag',
              1 => 'block_footer_badge_image_alt_tag',
              2 => 'block_head_back_image_alt_tag',
              3 => 'block_profile_image_alt_tag',
              4 => 'field_col_feat_rel_cont_alt_tag',
              5 => 'field_col_fp_featured_alt_tag',
              6 => 'field_col_inline_slider_alt_tag',
            ),
            'filter' => 
            array (
              0 => 'slider_headline',
            ),
            'image' => 
            array (
              0 => 'featured_content_2',
              1 => 'featured_content_2_custom_user_max_width_20em_1_5x',
              2 => 'featured_content_2_custom_user_max_width_20em_1x',
              3 => 'featured_content_2_custom_user_max_width_20em_2x',
              4 => 'featured_content_2_custom_user_max_width_30em_1_5x',
              5 => 'featured_content_2_custom_user_max_width_30em_1x',
              6 => 'featured_content_2_custom_user_max_width_30em_2x',
              7 => 'featured_content_2_custom_user_max_width_42_5em_1_5x',
              8 => 'featured_content_2_custom_user_max_width_42_5em_1x',
              9 => 'featured_content_2_custom_user_max_width_42_5em_2x',
              10 => 'featured_content_2_custom_user_max_width_50em_1_5x',
              11 => 'featured_content_2_custom_user_max_width_50em_1x',
              12 => 'featured_content_2_custom_user_max_width_50em_2x',
              13 => 'featured_content_2_custom_user_max_width_56_25em_1_5x',
              14 => 'featured_content_2_custom_user_max_width_56_25em_1x',
              15 => 'featured_content_2_custom_user_max_width_56_25em_2x',
              16 => 'featured_content_2_custom_user_min_width_56_26em_1_5x',
              17 => 'featured_content_2_custom_user_min_width_56_26em_1x',
              18 => 'featured_content_2_custom_user_min_width_56_26em_2x',
              19 => 'featured_related_content',
              20 => 'featured_related_content_custom_user_max_width_35_4375em_1x',
              21 => 'featured_related_content_custom_user_max_width_56_25em_1_5x',
              22 => 'featured_related_content_custom_user_max_width_56_25em_1x',
              23 => 'featured_related_content_custom_user_max_width_56_25em_2x',
              24 => 'featured_related_content_custom_user_min_width_56_26em_1_5x',
              25 => 'featured_related_content_custom_user_min_width_56_26em_1x',
              26 => 'featured_related_content_custom_user_min_width_56_26em_2x',
              27 => 'footer_badge',
              28 => 'footer_badge_custom_user_max_width_56_25em_1_5x',
              29 => 'footer_badge_custom_user_max_width_56_25em_1x',
              30 => 'footer_badge_custom_user_max_width_56_25em_2x',
              31 => 'footer_badge_custom_user_min_width_56_26em_1_5x',
              32 => 'footer_badge_custom_user_min_width_56_26em_1x',
              33 => 'footer_badge_custom_user_min_width_56_26em_2x',
              34 => 'front_page_slider',
              35 => 'front_page_slider_alt',
              36 => 'front_page_slider_alt_custom_user_max_width_20em_1_5x',
              37 => 'front_page_slider_alt_custom_user_max_width_20em_1x',
              38 => 'front_page_slider_alt_custom_user_max_width_20em_2x',
              39 => 'front_page_slider_alt_custom_user_max_width_30em_1_5x',
              40 => 'front_page_slider_alt_custom_user_max_width_30em_1x',
              41 => 'front_page_slider_alt_custom_user_max_width_30em_2x',
              42 => 'front_page_slider_alt_custom_user_max_width_40em_1_5x',
              43 => 'front_page_slider_alt_custom_user_max_width_40em_1x',
              44 => 'front_page_slider_alt_custom_user_max_width_40em_2x',
              45 => 'front_page_slider_alt_custom_user_max_width_50em_1_5x',
              46 => 'front_page_slider_alt_custom_user_max_width_50em_1x',
              47 => 'front_page_slider_alt_custom_user_max_width_50em_2x',
              48 => 'front_page_slider_alt_custom_user_max_width_56_25em_1_5x',
              49 => 'front_page_slider_alt_custom_user_max_width_56_25em_1x',
              50 => 'front_page_slider_alt_custom_user_max_width_56_25em_2x',
              51 => 'front_page_slider_alt_custom_user_min_width_56_26em_1_5x',
              52 => 'front_page_slider_alt_custom_user_min_width_56_26em_1x',
              53 => 'front_page_slider_alt_custom_user_min_width_56_26em_2x',
              54 => 'front_page_slider_custom_user_max_width_20em_1_5x',
              55 => 'front_page_slider_custom_user_max_width_20em_1x',
              56 => 'front_page_slider_custom_user_max_width_20em_2x',
              57 => 'front_page_slider_custom_user_max_width_30em_1_5x',
              58 => 'front_page_slider_custom_user_max_width_30em_1x',
              59 => 'front_page_slider_custom_user_max_width_30em_2x',
              60 => 'front_page_slider_custom_user_max_width_40em_1_5x',
              61 => 'front_page_slider_custom_user_max_width_40em_1x',
              62 => 'front_page_slider_custom_user_max_width_40em_2x',
              63 => 'front_page_slider_custom_user_max_width_50em_1_5x',
              64 => 'front_page_slider_custom_user_max_width_50em_1x',
              65 => 'front_page_slider_custom_user_max_width_50em_2x',
              66 => 'front_page_slider_custom_user_max_width_56_25em_1_5x',
              67 => 'front_page_slider_custom_user_max_width_56_25em_1x',
              68 => 'front_page_slider_custom_user_max_width_56_25em_2x',
              69 => 'front_page_slider_custom_user_min_width_56_26em_1_5x',
              70 => 'front_page_slider_custom_user_min_width_56_26em_1x',
              71 => 'front_page_slider_custom_user_min_width_56_26em_2x',
              72 => 'header_background_image',
              73 => 'header_background_image_custom_user_max_width_20em_1_5x',
              74 => 'header_background_image_custom_user_max_width_20em_1x',
              75 => 'header_background_image_custom_user_max_width_20em_2x',
              76 => 'header_background_image_custom_user_max_width_30em_1_5x',
              77 => 'header_background_image_custom_user_max_width_30em_1x',
              78 => 'header_background_image_custom_user_max_width_30em_2x',
              79 => 'header_background_image_custom_user_max_width_40em_1_5x',
              80 => 'header_background_image_custom_user_max_width_40em_1x',
              81 => 'header_background_image_custom_user_max_width_40em_2x',
              82 => 'header_background_image_custom_user_max_width_50em_1_5x',
              83 => 'header_background_image_custom_user_max_width_50em_1x',
              84 => 'header_background_image_custom_user_max_width_50em_2x',
              85 => 'header_background_image_custom_user_max_width_56_25em_1_5x',
              86 => 'header_background_image_custom_user_max_width_56_25em_1x',
              87 => 'header_background_image_custom_user_max_width_56_25em_2x',
              88 => 'header_background_image_custom_user_min_width_56_26em_1_5x',
              89 => 'header_background_image_custom_user_min_width_56_26em_1x',
              90 => 'header_background_image_custom_user_min_width_56_26em_2x',
              91 => 'inline_slider',
              92 => 'inline_slider_custom_user_max_width_20em_1_5x',
              93 => 'inline_slider_custom_user_max_width_20em_1x',
              94 => 'inline_slider_custom_user_max_width_20em_2x',
              95 => 'inline_slider_custom_user_max_width_30em_1_5x',
              96 => 'inline_slider_custom_user_max_width_30em_1x',
              97 => 'inline_slider_custom_user_max_width_30em_2x',
              98 => 'inline_slider_custom_user_max_width_40em_1_5x',
              99 => 'inline_slider_custom_user_max_width_40em_1x',
              100 => 'inline_slider_custom_user_max_width_40em_2x',
              101 => 'inline_slider_custom_user_max_width_50em_1_5x',
              102 => 'inline_slider_custom_user_max_width_50em_1x',
              103 => 'inline_slider_custom_user_max_width_50em_2x',
              104 => 'inline_slider_custom_user_max_width_56_25em_1_5x',
              105 => 'inline_slider_custom_user_max_width_56_25em_1x',
              106 => 'inline_slider_custom_user_max_width_56_25em_2x',
              107 => 'inline_slider_custom_user_min_width_56_26em_1_5x',
              108 => 'inline_slider_custom_user_min_width_56_26em_1x',
              109 => 'inline_slider_custom_user_min_width_56_26em_2x',
              110 => 'profile_block_image',
              111 => 'profile_image_block_custom_user_max_width_20em_1_5x',
              112 => 'profile_image_block_custom_user_max_width_20em_1x',
              113 => 'profile_image_block_custom_user_max_width_20em_2x',
              114 => 'profile_image_block_custom_user_max_width_56_25em_1_5x',
              115 => 'profile_image_block_custom_user_max_width_56_25em_1x',
              116 => 'profile_image_block_custom_user_max_width_56_25em_2x',
              117 => 'profile_image_block_custom_user_min_width_56_26em_1_5x',
              118 => 'profile_image_block_custom_user_min_width_56_26em_1x',
              119 => 'profile_image_block_custom_user_min_width_56_26em_2x',
            ),
            'node' => 
            array (
              0 => 'field_link_repo',
            ),
            'panels_layout' => 
            array (
              0 => 'academics_search_layout',
            ),
            'panels_mini' => 
            array (
              0 => 'academics_search_schools_and_col',
              1 => 'home_schools_and_colleges_links',
            ),
            'picture_mapping' => 
            array (
              0 => 'featured_content_2',
              1 => 'featured_related_content',
              2 => 'footer_badge',
              3 => 'front_page_slider',
              4 => 'front_page_slider_alt',
              5 => 'header_background_image',
              6 => 'inline_slider',
              7 => 'profile_block_image',
            ),
            'user_permission' => 
            array (
              0 => 'create any contact_block bean',
              1 => 'create any copy_block bean',
              2 => 'create any featured_content_2 bean',
              3 => 'create any featured_links bean',
              4 => 'create any featured_related_content bean',
              5 => 'create any footer_badge bean',
              6 => 'create any front_page_audience bean',
              7 => 'create any front_page_featured_content bean',
              8 => 'create any front_page_slider bean',
              9 => 'create any header_background_image bean',
              10 => 'create any inline_slider bean',
              11 => 'create any profile bean',
              12 => 'create any promo_box bean',
              13 => 'create any quote bean',
              14 => 'create any related_links bean',
              15 => 'create any tabbed_accordion bean',
              16 => 'delete any contact_block bean',
              17 => 'delete any copy_block bean',
              18 => 'delete any featured_content_2 bean',
              19 => 'delete any featured_links bean',
              20 => 'delete any featured_related_content bean',
              21 => 'delete any footer_badge bean',
              22 => 'delete any front_page_audience bean',
              23 => 'delete any front_page_featured_content bean',
              24 => 'delete any front_page_slider bean',
              25 => 'delete any header_background_image bean',
              26 => 'delete any inline_slider bean',
              27 => 'delete any profile bean',
              28 => 'delete any promo_box bean',
              29 => 'delete any quote bean',
              30 => 'delete any related_links bean',
              31 => 'delete any tabbed_accordion bean',
              32 => 'edit any contact_block bean',
              33 => 'edit any copy_block bean',
              34 => 'edit any featured_content_2 bean',
              35 => 'edit any featured_links bean',
              36 => 'edit any featured_related_content bean',
              37 => 'edit any footer_badge bean',
              38 => 'edit any front_page_audience bean',
              39 => 'edit any front_page_featured_content bean',
              40 => 'edit any front_page_slider bean',
              41 => 'edit any header_background_image bean',
              42 => 'edit any inline_slider bean',
              43 => 'edit any profile bean',
              44 => 'edit any promo_box bean',
              45 => 'edit any quote bean',
              46 => 'edit any related_links bean',
              47 => 'edit any tabbed_accordion bean',
              48 => 'use text format slider_headline',
              49 => 'view any contact_block bean',
              50 => 'view any copy_block bean',
              51 => 'view any featured_content_2 bean',
              52 => 'view any featured_links bean',
              53 => 'view any featured_related_content bean',
              54 => 'view any footer_badge bean',
              55 => 'view any front_page_audience bean',
              56 => 'view any front_page_featured_content bean',
              57 => 'view any front_page_slider bean',
              58 => 'view any header_background_image bean',
              59 => 'view any inline_slider bean',
              60 => 'view any profile bean',
              61 => 'view any promo_box bean',
              62 => 'view any quote bean',
              63 => 'view any related_links bean',
              64 => 'view any tabbed_accordion bean',
            ),
            'variable' => 
            array (
              0 => 'field_bundle_settings_bean__contact_block',
              1 => 'field_bundle_settings_bean__copy_block',
              2 => 'field_bundle_settings_bean__featured_content_2',
              3 => 'field_bundle_settings_bean__featured_links',
              4 => 'field_bundle_settings_bean__featured_related_content',
              5 => 'field_bundle_settings_bean__footer_badge',
              6 => 'field_bundle_settings_bean__front_page_audience',
              7 => 'field_bundle_settings_bean__front_page_featured_content',
              8 => 'field_bundle_settings_bean__front_page_slider',
              9 => 'field_bundle_settings_bean__header_background_image',
              10 => 'field_bundle_settings_bean__inline_slider',
              11 => 'field_bundle_settings_bean__profile',
              12 => 'field_bundle_settings_bean__promo_box',
              13 => 'field_bundle_settings_bean__quote',
              14 => 'field_bundle_settings_bean__related_links',
              15 => 'field_bundle_settings_field_collection_item__field_featured_content2_links',
              16 => 'field_bundle_settings_field_collection_item__field_featured_rel_cont',
              17 => 'field_bundle_settings_field_collection_item__field_fp_audience_link_group',
              18 => 'field_bundle_settings_field_collection_item__field_fp_featured_links',
              19 => 'field_bundle_settings_field_collection_item__field_front_page_audience',
              20 => 'field_bundle_settings_field_collection_item__field_front_page_featured_links',
              21 => 'field_bundle_settings_field_collection_item__field_front_page_slide_group',
              22 => 'field_bundle_settings_field_collection_item__field_front_page_slide_group_alt',
              23 => 'field_bundle_settings_field_collection_item__field_inline_slider',
              24 => 'field_bundle_settings_field_collection_item__field_related_links',
              25 => 'field_bundle_settings_node__field_link_repo',
              26 => 'menu_options_field_link_repo',
              27 => 'menu_parent_field_link_repo',
              28 => 'node_options_field_link_repo',
              29 => 'node_preview_field_link_repo',
              30 => 'node_submitted_field_link_repo',
            ),
            'views_view' => 
            array (
              0 => 'header_background_image',
              1 => 'secondary_content_field',
            ),
          ),
          'features_exclude' => 
          array (
            'field_instance' => 
            array (
              'bean-contact_block-field_contact_blk_city_state_zip' => 'bean-contact_block-field_contact_blk_city_state_zip',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'creighton_block_types',
        'version' => '7.x-2.22',
      ),
      'creighton_menu_blocks' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_blocks/creighton_menu_blocks/creighton_menu_blocks.module',
        'basename' => 'creighton_menu_blocks.module',
        'name' => 'creighton_menu_blocks',
        'info' => 
        array (
          'name' => 'Menu Blocks',
          'description' => 'Provides Block Menus for all of Creightons core menus',
          'core' => '7.x',
          'package' => 'Creighton',
          'version' => '7.x-2.22',
          'project' => 'creighton_menu_blocks',
          'dependencies' => 
          array (
            0 => 'ctools',
            1 => 'menu_block',
            2 => 'strongarm',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'menu_block:menu_block:1',
              1 => 'strongarm:strongarm:1',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'variable' => 
            array (
              0 => 'menu_block_footer_main_menu_admin_title',
              1 => 'menu_block_footer_main_menu_depth',
              2 => 'menu_block_footer_main_menu_depth_relative',
              3 => 'menu_block_footer_main_menu_expanded',
              4 => 'menu_block_footer_main_menu_follow',
              5 => 'menu_block_footer_main_menu_level',
              6 => 'menu_block_footer_main_menu_parent',
              7 => 'menu_block_footer_main_menu_sort',
              8 => 'menu_block_footer_main_menu_title_link',
              9 => 'menu_block_footer_transaction_menu_admin_title',
              10 => 'menu_block_footer_transaction_menu_depth',
              11 => 'menu_block_footer_transaction_menu_depth_relative',
              12 => 'menu_block_footer_transaction_menu_expanded',
              13 => 'menu_block_footer_transaction_menu_follow',
              14 => 'menu_block_footer_transaction_menu_level',
              15 => 'menu_block_footer_transaction_menu_parent',
              16 => 'menu_block_footer_transaction_menu_sort',
              17 => 'menu_block_footer_transaction_menu_title_link',
              18 => 'menu_block_header_main_menu_admin_title',
              19 => 'menu_block_header_main_menu_depth',
              20 => 'menu_block_header_main_menu_depth_relative',
              21 => 'menu_block_header_main_menu_expanded',
              22 => 'menu_block_header_main_menu_follow',
              23 => 'menu_block_header_main_menu_level',
              24 => 'menu_block_header_main_menu_parent',
              25 => 'menu_block_header_main_menu_sort',
              26 => 'menu_block_header_main_menu_title_link',
              27 => 'menu_block_header_transaction_menu_admin_title',
              28 => 'menu_block_header_transaction_menu_depth',
              29 => 'menu_block_header_transaction_menu_depth_relative',
              30 => 'menu_block_header_transaction_menu_expanded',
              31 => 'menu_block_header_transaction_menu_follow',
              32 => 'menu_block_header_transaction_menu_level',
              33 => 'menu_block_header_transaction_menu_parent',
              34 => 'menu_block_header_transaction_menu_sort',
              35 => 'menu_block_header_transaction_menu_title_link',
              36 => 'menu_block_header_utility_menu_admin_title',
              37 => 'menu_block_header_utility_menu_depth',
              38 => 'menu_block_header_utility_menu_depth_relative',
              39 => 'menu_block_header_utility_menu_expanded',
              40 => 'menu_block_header_utility_menu_follow',
              41 => 'menu_block_header_utility_menu_level',
              42 => 'menu_block_header_utility_menu_parent',
              43 => 'menu_block_header_utility_menu_sort',
              44 => 'menu_block_header_utility_menu_title_link',
              45 => 'menu_block_sidebar_secondary_menu_admin_title',
              46 => 'menu_block_sidebar_secondary_menu_depth',
              47 => 'menu_block_sidebar_secondary_menu_depth_relative',
              48 => 'menu_block_sidebar_secondary_menu_expanded',
              49 => 'menu_block_sidebar_secondary_menu_follow',
              50 => 'menu_block_sidebar_secondary_menu_level',
              51 => 'menu_block_sidebar_secondary_menu_parent',
              52 => 'menu_block_sidebar_secondary_menu_sort',
              53 => 'menu_block_sidebar_secondary_menu_title_link',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'creighton_menu_blocks',
        'version' => '7.x-2.22',
      ),
      'creighton_front_page_2015' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_blocks/creighton_front_page_2015/creighton_front_page_2015.module',
        'basename' => 'creighton_front_page_2015.module',
        'name' => 'creighton_front_page_2015',
        'info' => 
        array (
          'name' => 'Creighton Front Page 2015',
          'description' => 'Creighton Front Page 2015',
          'core' => '7.x',
          'package' => 'Creighton',
          'version' => '7.x-2.22',
          'project' => 'creighton_front_page_2015',
          'dependencies' => 
          array (
            0 => 'bean',
            1 => 'bean_admin_ui',
            2 => 'breakpoints',
            3 => 'ctools',
            4 => 'features',
            5 => 'image',
            6 => 'panels_mini',
            7 => 'text',
          ),
          'features' => 
          array (
            'bean_type' => 
            array (
              0 => 'footer_contact_info_and_links',
            ),
            'breakpoints' => 
            array (
              0 => 'custom.user.min_width_78_125em',
            ),
            'ctools' => 
            array (
              0 => 'bean_admin_ui:bean:5',
              1 => 'breakpoints:default_breakpoints:1',
              2 => 'panels_mini:panels_default:1',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'field_base' => 
            array (
              0 => 'field_footer_contact_info_markup',
              1 => 'field_fp_audience_text',
              2 => 'field_fp_audience_text_small',
            ),
            'field_instance' => 
            array (
              0 => 'bean-footer_contact_info_and_links-field_footer_contact_info_markup',
              1 => 'field_collection_item-field_front_page_audience-field_fp_audience_text',
              2 => 'field_collection_item-field_front_page_audience-field_fp_audience_text_small',
            ),
            'image' => 
            array (
              0 => 'front_page_slider_custom_user_min_width_78_125em_1_5x',
              1 => 'front_page_slider_custom_user_min_width_78_125em_1x',
              2 => 'front_page_slider_custom_user_min_width_78_125em_2x',
            ),
            'panels_mini' => 
            array (
              0 => 'academics_search_schools_2015',
              1 => 'home_schools_and_colleges_2015',
            ),
            'user_permission' => 
            array (
              0 => 'create any footer_contact_info_and_links bean',
              1 => 'delete any footer_contact_info_and_links bean',
              2 => 'edit any footer_contact_info_and_links bean',
              3 => 'view any footer_contact_info_and_links bean',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'creighton_front_page_2015',
        'version' => '7.x-2.22',
      ),
      'cu_academics_search' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_blocks/cu_academics_search/cu_academics_search.module',
        'basename' => 'cu_academics_search.module',
        'name' => 'cu_academics_search',
        'info' => 
        array (
          'name' => 'Creighton Academics Search',
          'description' => 'Block for the front page that holds the search form and additional links.',
          'core' => '7.x',
          'package' => 'Creighton',
          'files' => 
          array (
            0 => 'cu_academics_search.module',
          ),
          'version' => '7.x-2.22',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => '',
        'version' => '7.x-2.22',
      ),
      'creighton_panels' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_panels/creighton_panels.module',
        'basename' => 'creighton_panels.module',
        'name' => 'creighton_panels',
        'info' => 
        array (
          'name' => 'Panels',
          'core' => '7.x',
          'package' => 'Creighton',
          'version' => '7.x-2.22',
          'project' => 'creighton_panels',
          'dependencies' => 
          array (
            0 => 'creighton_global_roles',
            1 => 'creighton_variables',
            2 => 'creighton_wysiwyg',
            3 => 'ctools',
            4 => 'default_menu_link',
            5 => 'features',
            6 => 'node',
            7 => 'page_manager',
            8 => 'panelizer',
            9 => 'panels',
            10 => 'panels_mini',
            11 => 'panels_node',
            12 => 'pathauto',
            13 => 'publish_button',
            14 => 'strongarm',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'strongarm:strongarm:1',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'user_permission' => 
            array (
              0 => 'administer advanced pane settings',
              1 => 'administer mini panels',
              2 => 'administer page manager',
              3 => 'administer pane access',
              4 => 'administer panel-nodes',
              5 => 'administer panelizer',
              6 => 'administer panels layouts',
              7 => 'administer panels styles',
              8 => 'change layouts in place editing',
              9 => 'create mini panels',
              10 => 'create panel content',
              11 => 'delete any panel content',
              12 => 'delete own panel content',
              13 => 'edit any panel content',
              14 => 'edit own panel content',
              15 => 'publish button publish any panel',
              16 => 'publish button publish own panel',
              17 => 'publish button unpublish any panel',
              18 => 'publish button unpublish own panel',
              19 => 'use ipe with page manager',
              20 => 'use page manager',
              21 => 'use panels caching features',
              22 => 'use panels dashboard',
              23 => 'use panels in place editing',
              24 => 'use panels locks',
              25 => 'view pane admin links',
            ),
            'variable' => 
            array (
              0 => 'default_menu_link_enabled_panel',
              1 => 'default_menu_link_panel_enabled',
              2 => 'diff_enable_revisions_page_node_panel',
              3 => 'diff_show_preview_changes_node_panel',
              4 => 'diff_view_mode_preview_node_panel',
              5 => 'menu_options_panel',
              6 => 'menu_parent_panel',
              7 => 'node_menu_required_panel',
              8 => 'node_options_panel',
              9 => 'node_preview_panel',
              10 => 'node_submitted_panel',
              11 => 'pathauto_node_panel_pattern',
              12 => 'publish_button_content_type_panel',
              13 => 'webform_node_panel',
              14 => 'xmlsitemap_settings_node_panel',
            ),
          ),
          'description' => '',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'creighton_panels',
        'version' => '7.x-2.22',
      ),
      'creighton_news_events' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_news_events/creighton_news_events/creighton_news_events.module',
        'basename' => 'creighton_news_events.module',
        'name' => 'creighton_news_events',
        'info' => 
        array (
          'name' => 'News and Events',
          'core' => '7.x',
          'package' => 'Creighton',
          'version' => '7.x-2.22',
          'project' => 'creighton_news_events',
          'dependencies' => 
          array (
            0 => 'creighton_variables',
            1 => 'date',
            2 => 'date_views',
            3 => 'feeds',
            4 => 'feeds_tamper',
            5 => 'feeds_ui',
            6 => 'feeds_xpathparser',
            7 => 'link',
            8 => 'node',
            9 => 'number',
            10 => 'text',
            11 => 'views',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'feeds:feeds_importer_default:1',
              1 => 'feeds_tamper:feeds_tamper_default:2',
              2 => 'quicktabs:quicktabs:1',
              3 => 'strongarm:strongarm:1',
              4 => 'views:views_default:3.0',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'feeds_importer' => 
            array (
              0 => 'calendar_importer',
              1 => 'news_importer',
            ),
            'feeds_tamper' => 
            array (
              0 => 'calendar_importer-xpathparser_1-strtotime',
              1 => 'calendar_importer-xpathparser_5-default_value',
              2 => 'calendar_importer-xpathparser_5-explode',
              3 => 'calendar_importer-xpathparser_6-hash',
            ),
            'field_base' => 
            array (
              0 => 'field_ic_event_month_day_year',
              1 => 'field_imported_cal_calendar_id',
              2 => 'field_imported_cal_event_date',
              3 => 'field_imported_cal_event_id',
              4 => 'field_imported_cal_link',
              5 => 'field_inews_remote_content_url',
            ),
            'field_instance' => 
            array (
              0 => 'node-imported_calendar-body',
              1 => 'node-imported_calendar-field_ic_event_month_day_year',
              2 => 'node-imported_calendar-field_imported_cal_calendar_id',
              3 => 'node-imported_calendar-field_imported_cal_event_date',
              4 => 'node-imported_calendar-field_imported_cal_event_id',
              5 => 'node-imported_calendar-field_imported_cal_link',
              6 => 'node-imported_news-body',
              7 => 'node-imported_news-field_inews_remote_content_url',
            ),
            'node' => 
            array (
              0 => 'imported_calendar',
              1 => 'imported_news',
            ),
            'user_permission' => 
            array (
              0 => 'clear calendar_importer feeds',
              1 => 'clear news_importer feeds',
              2 => 'create imported_calendar content',
              3 => 'create imported_news content',
              4 => 'delete any imported_calendar content',
              5 => 'delete any imported_news content',
              6 => 'delete own imported_calendar content',
              7 => 'delete own imported_news content',
              8 => 'edit any imported_calendar content',
              9 => 'edit any imported_news content',
              10 => 'edit own imported_calendar content',
              11 => 'edit own imported_news content',
              12 => 'import calendar_importer feeds',
              13 => 'import news_importer feeds',
              14 => 'tamper calendar_importer',
              15 => 'tamper news_importer',
              16 => 'unlock calendar_importer feeds',
              17 => 'unlock news_importer feeds',
            ),
            'variable' => 
            array (
              0 => 'date_format_full_time_date_am_pm',
              1 => 'date_format_hours_and_minutes_am_pm',
              2 => 'date_format_month_day_year',
              3 => 'field_bundle_settings_node__imported_calendar',
              4 => 'field_bundle_settings_node__imported_news',
              5 => 'menu_options_imported_calendar',
              6 => 'menu_options_imported_news',
              7 => 'menu_parent_imported_calendar',
              8 => 'menu_parent_imported_news',
              9 => 'node_options_imported_calendar',
              10 => 'node_options_imported_news',
              11 => 'node_preview_imported_calendar',
              12 => 'node_preview_imported_news',
              13 => 'node_submitted_imported_calendar',
              14 => 'node_submitted_imported_news',
            ),
            'views_view' => 
            array (
              0 => 'imported_calendar_content',
              1 => 'imported_news_content',
            ),
          ),
          'features_exclude' => 
          array (
            'dependencies' => 
            array (
              'ctools' => 'ctools',
              'features' => 'features',
              'strongarm' => 'strongarm',
            ),
            'field_base' => 
            array (
              'body' => 'body',
            ),
          ),
          'description' => '',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'creighton_news_events',
        'version' => '7.x-2.22',
      ),
      'events_admissions' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_news_events/events_admissions/events_admissions.module',
        'basename' => 'events_admissions.module',
        'name' => 'events_admissions',
        'info' => 
        array (
          'name' => 'Creighton Events',
          'description' => 'Events for Creighton in Drupal',
          'core' => '7.x',
          'package' => 'Creighton',
          'version' => '7.x-1.0',
          'project' => 'events_admissions',
          'dependencies' => 
          array (
            0 => 'addressfield',
            1 => 'creighton_variables',
            2 => 'ctools',
            3 => 'date',
            4 => 'email',
            5 => 'features',
            6 => 'feeds',
            7 => 'feeds_xpathparser',
            8 => 'field_group',
            9 => 'image',
            10 => 'link',
            11 => 'list',
            12 => 'node',
            13 => 'options',
            14 => 'strongarm',
            15 => 'taxonomy',
            16 => 'text',
            17 => 'views',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'feeds:feeds_importer_default:1',
              1 => 'field_group:field_group:1',
              2 => 'strongarm:strongarm:1',
              3 => 'views:views_default:3.0',
            ),
            'custom_date_formats' => 
            array (
              0 => 'F j, Y',
              1 => 'M',
              2 => 'M j',
              3 => 'Y-m-d H:i',
              4 => 'j',
              5 => 'l, F j, Y - g:ia',
            ),
            'date_format_types' => 
            array (
              0 => 'day',
              1 => 'day_only_no_zeros',
              2 => 'month_full_day_year',
              3 => 'month_short_',
              4 => 'month_short_day',
              5 => 'usa_long_am_pm',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'feeds_importer' => 
            array (
              0 => 'event_mapper',
            ),
            'field_base' => 
            array (
              0 => 'field_address',
              1 => 'field_contact_email',
              2 => 'field_contact_name',
              3 => 'field_contact_phone',
              4 => 'field_event_date',
              5 => 'field_event_image',
              6 => 'field_event_location',
              7 => 'field_event_name',
              8 => 'field_event_short_description',
              9 => 'field_event_tag',
              10 => 'field_form_embed',
              11 => 'field_schedule_link',
              12 => 'field_signup_link',
            ),
            'field_group' => 
            array (
              0 => 'group_address|node|event|default',
              1 => 'group_cu_event_left_col|node|event|default',
              2 => 'group_cu_event_right_col|node|event|default',
            ),
            'field_instance' => 
            array (
              0 => 'node-event-body',
              1 => 'node-event-field_address',
              2 => 'node-event-field_contact_email',
              3 => 'node-event-field_contact_name',
              4 => 'node-event-field_contact_phone',
              5 => 'node-event-field_event_date',
              6 => 'node-event-field_event_image',
              7 => 'node-event-field_event_location',
              8 => 'node-event-field_event_name',
              9 => 'node-event-field_event_short_description',
              10 => 'node-event-field_event_tag',
              11 => 'node-event-field_form_embed',
              12 => 'node-event-field_schedule_link',
              13 => 'node-event-field_signup_link',
            ),
            'image' => 
            array (
              0 => 'events_image',
            ),
            'node' => 
            array (
              0 => 'event',
            ),
            'taxonomy' => 
            array (
              0 => 'events_vocabulary',
            ),
            'user_permission' => 
            array (
              0 => 'create event content',
              1 => 'delete own event content',
              2 => 'edit any event content',
              3 => 'edit own event content',
            ),
            'variable' => 
            array (
              0 => 'comment_anonymous_event',
              1 => 'comment_default_mode_event',
              2 => 'comment_default_per_page_event',
              3 => 'comment_event',
              4 => 'comment_form_location_event',
              5 => 'comment_preview_event',
              6 => 'comment_subject_field_event',
              7 => 'date_format_date_with_no_time',
              8 => 'date_format_day',
              9 => 'date_format_day_only',
              10 => 'date_format_day_only_no_zeros',
              11 => 'date_format_mond_day_year_long_no_time',
              12 => 'date_format_month_day',
              13 => 'date_format_month_full_day_year',
              14 => 'date_format_month_short_',
              15 => 'date_format_month_short_day',
              16 => 'date_format_short_month_only',
              17 => 'date_format_standard_events',
              18 => 'date_format_time_with_no_date',
              19 => 'date_format_usa_long_am_pm',
              20 => 'field_bundle_settings_node__event',
              21 => 'menu_options_event',
              22 => 'menu_parent_event',
              23 => 'node_options_event',
              24 => 'node_preview_event',
              25 => 'node_submitted_event',
              26 => 'pathauto_node_event_pattern',
            ),
            'views_view' => 
            array (
              0 => 'events_summary',
              1 => 'events_views_division_student_life',
              2 => 'imported_calendar_content_for_business',
            ),
          ),
          'features_exclude' => 
          array (
            'field_group' => 
            array (
              'group_contact_info|node|event|default' => 'group_contact_info|node|event|default',
              'group_left_page_group|node|event|default' => 'group_left_page_group|node|event|default',
              'group_new_events|node|event|form' => 'group_new_events|node|event|form',
              'group_right_page_group|node|event|default' => 'group_right_page_group|node|event|default',
            ),
            'taxonomy' => 
            array (
              'events_vocabulary' => 'events_vocabulary',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'events_admissions',
        'version' => '7.x-1.0',
      ),
      'news_business' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_news_events/news_business/news_business.module',
        'basename' => 'news_business.module',
        'name' => 'news_business',
        'info' => 
        array (
          'name' => 'News Business',
          'description' => 'News for Creighton in Drupal',
          'core' => '7.x',
          'package' => 'Creighton',
          'version' => '7.x-1.0',
          'project' => 'news_business',
          'dependencies' => 
          array (
            0 => 'context',
            1 => 'ctools',
            2 => 'events_admissions',
            3 => 'file_entity',
            4 => 'panelizer',
            5 => 'strongarm',
          ),
          'features' => 
          array (
            'context' => 
            array (
              0 => 'news_breadcrumb',
            ),
            'ctools' => 
            array (
              0 => 'context:context:3',
              1 => 'panelizer:panelizer:1',
              2 => 'strongarm:strongarm:1',
              3 => 'views:views_default:3.0',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'field_base' => 
            array (
              0 => 'field_news_image',
              1 => 'field_news_image_insertable',
              2 => 'field_news_short_description',
              3 => 'field_news_tags',
            ),
            'field_instance' => 
            array (
              0 => 'node-news-body',
              1 => 'node-news-field_news_image',
              2 => 'node-news-field_news_image_insertable',
              3 => 'node-news-field_news_short_description',
              4 => 'node-news-field_news_tags',
            ),
            'node' => 
            array (
              0 => 'news',
            ),
            'panelizer_defaults' => 
            array (
              0 => 'node:news:default:default',
            ),
            'user_permission' => 
            array (
              0 => 'create news content',
              1 => 'delete own news content',
              2 => 'edit any news content',
              3 => 'edit own news content',
            ),
            'variable' => 
            array (
              0 => 'comment_anonymous_news',
              1 => 'comment_default_mode_news',
              2 => 'comment_default_per_page_news',
              3 => 'comment_form_location_news',
              4 => 'comment_news',
              5 => 'comment_preview_news',
              6 => 'comment_subject_field_news',
              7 => 'field_bundle_settings_node__news',
              8 => 'menu_options_news',
              9 => 'menu_parent_news',
              10 => 'node_options_news',
              11 => 'node_preview_news',
              12 => 'node_submitted_news',
              13 => 'panelizer_defaults_node_news',
              14 => 'panelizer_node:news:default_selection',
              15 => 'panelizer_node:news:page_manager_selection',
              16 => 'panelizer_node:news:teaser_selection',
              17 => 'pathauto_node_news_pattern',
            ),
            'views_view' => 
            array (
              0 => 'news_gm_2012',
            ),
          ),
          'features_exclude' => 
          array (
            'dependencies' => 
            array (
              'panels' => 'panels',
              'views' => 'views',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'news_business',
        'version' => '7.x-1.0',
      ),
      'creighton_wysiwyg' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_wysiwyg/creighton_wysiwyg.module',
        'basename' => 'creighton_wysiwyg.module',
        'name' => 'creighton_wysiwyg',
        'info' => 
        array (
          'name' => 'Wysiwyg',
          'description' => 'Wysiwyg settings and standard text formats',
          'core' => '7.x',
          'package' => 'Creighton',
          'version' => '7.x-2.22',
          'project' => 'creighton_wysiwyg',
          'dependencies' => 
          array (
            0 => 'better_formats',
            1 => 'ckeditor_link',
            2 => 'features',
            3 => 'filter',
            4 => 'media',
            5 => 'media_wysiwyg',
            6 => 'picture',
            7 => 'spamspan',
            8 => 'typogrify',
            9 => 'video_filter',
            10 => 'wysiwyg',
            11 => 'wysiwyg_filter',
          ),
          'features' => 
          array (
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'filter' => 
            array (
              0 => 'filtered_html',
              1 => 'full_html',
              2 => 'full_html_plus_media',
            ),
            'user_permission' => 
            array (
              0 => 'show format selection for bean',
              1 => 'show format selection for field_collection_item',
              2 => 'show format selection for file',
              3 => 'show format selection for node',
              4 => 'show format selection for taxonomy_term',
              5 => 'show format selection for user',
              6 => 'show format tips',
              7 => 'show more format tips link',
            ),
            'wysiwyg' => 
            array (
              0 => 'filtered_html',
              1 => 'full_html',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'creighton_wysiwyg',
        'version' => '7.x-2.22',
      ),
      'subsite_parent_crumbs_reaction' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_aux/web_module_subsite_parent_logo_crumbs/subsite_parent_crumbs_reaction/subsite_parent_crumbs_reaction.module',
        'basename' => 'subsite_parent_crumbs_reaction.module',
        'name' => 'subsite_parent_crumbs_reaction',
        'info' => 
        array (
          'name' => 'Subsite Parent Crumbs Reaction for Context',
          'description' => 'Add new Context reaction to create breadcrumbs consistent with the Creighton.edu architecture',
          'package' => 'Creighton',
          'dependencies' => 
          array (
            0 => 'subsite_parent_logo_crumbs',
            1 => 'context',
          ),
          'core' => '7.x',
          'version' => NULL,
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => '',
        'version' => NULL,
      ),
      'subsite_parent_logo_crumbs' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_aux/web_module_subsite_parent_logo_crumbs/subsite_parent_logo_crumbs.module',
        'basename' => 'subsite_parent_logo_crumbs.module',
        'name' => 'subsite_parent_logo_crumbs',
        'info' => 
        array (
          'name' => 'Subsite Parent Logo Crumbs picker',
          'description' => 'Add parent site selector to Site Information form to preset crumbs path and logo',
          'package' => 'Creighton',
          'dependencies' => 
          array (
            0 => 'menu_breadcrumb',
          ),
          'core' => '7.x',
          'version' => NULL,
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => '',
        'version' => NULL,
      ),
      'ada_compliance__' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_aux/ada_compliance/ada_compliance__.module',
        'basename' => 'ada_compliance__.module',
        'name' => 'ada_compliance__',
        'info' => 
        array (
          'dependencies' => 
          array (
          ),
          'description' => '',
          'version' => NULL,
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => '',
        'version' => NULL,
      ),
      'ada_compliance' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_aux/ada_compliance/ada_compliance.module',
        'basename' => 'ada_compliance.module',
        'name' => 'ada_compliance',
        'info' => 
        array (
          'name' => 'ADA Compliance',
          'description' => 'Patch form elements to help enforce ADA Compliance web content entered through forms.',
          'core' => '7.x',
          'package' => 'Accessibility',
          'dependencies' => 
          array (
          ),
          'version' => NULL,
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => '',
        'version' => NULL,
      ),
      'video_embed_field_extras' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_aux/web_module_video_embed_field_extras/video_embed_field_extras.module',
        'basename' => 'video_embed_field_extras.module',
        'name' => 'video_embed_field_extras',
        'info' => 
        array (
          'name' => 'Video Embed Field Extras',
          'description' => 'Offers additional functionality for Embed Field Extras module from drupal.org/project/video_embed_field',
          'package' => 'Creighton',
          'dependencies' => 
          array (
            0 => 'video_embed_field',
          ),
          'core' => '7.x',
          'version' => NULL,
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => '',
        'version' => NULL,
      ),
      'xmlsitemap_views' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_aux/web_module_xmlsitemap_views/xmlsitemap_views.module',
        'basename' => 'xmlsitemap_views.module',
        'name' => 'xmlsitemap_views',
        'info' => 
        array (
          'name' => 'XML Sitemap Views Integration',
          'description' => 'Enables integration of Views pages with XML Sitemap. Mimics Custom Link functionality with XML Sitemap in an automated fashion from given View(s).',
          'package' => 'Creighton',
          'dependencies' => 
          array (
            0 => 'views',
            1 => 'xmlsitemap',
          ),
          'core' => '7.x',
          'files' => 
          array (
            0 => 'xmlsitemap_views_views_plugin_display_extender.inc',
          ),
          'version' => NULL,
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => '',
        'version' => NULL,
      ),
      'wysiwygpatch' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_aux/wysiwygpatch/wysiwygpatch.module',
        'basename' => 'wysiwygpatch.module',
        'name' => 'wysiwygpatch',
        'info' => 
        array (
          'name' => 'Wysiwyg Patch',
          'description' => 'Patch for WYSIWYG, http://drupal.org/node/1963270#comment-7267744',
          'package' => 'User interface',
          'dependencies' => 
          array (
            0 => 'wysiwyg',
          ),
          'core' => '7.x',
          'files' => 
          array (
            0 => 'wysiwygpatch.module',
          ),
          'version' => NULL,
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => '',
        'version' => NULL,
      ),
      'environment_variables' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_aux/web_module_environment_variables/environment_variables.module',
        'basename' => 'environment_variables.module',
        'name' => 'environment_variables',
        'info' => 
        array (
          'name' => 'Environment Variables',
          'description' => 'Attempt to automatically detect environment (overridable on System Information page) and provide default settings for select modules/config',
          'package' => 'Creighton',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'environment_variables.autodetect.inc',
            1 => 'environment_variables.applysettings.inc',
          ),
          'dependencies' => 
          array (
          ),
          'version' => NULL,
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => '',
        'version' => NULL,
      ),
      'webform_netid' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_aux/web_module_webform_netid/webform_netid.module',
        'basename' => 'webform_netid.module',
        'name' => 'webform_netid',
        'info' => 
        array (
          'name' => 'Webform NetID Component',
          'description' => 'Add custom Webform component with validation for proper NetID formatting. Includes javascript to attempt to prepopulate form fields.',
          'package' => 'Creighton',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'webform',
          ),
          'files' => 
          array (
            0 => 'webform_netid.ajax_user.js',
          ),
          'version' => NULL,
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => '',
        'version' => NULL,
      ),
      'panels_region_bgimg' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_aux/web_module_panels_region_bgimg/panels_region_bgimg.module',
        'basename' => 'panels_region_bgimg.module',
        'name' => 'panels_region_bgimg',
        'info' => 
        array (
          'name' => 'Panels Region Background Image',
          'description' => 'Add custom style plugin for setting a background image for a panel region',
          'package' => 'Creighton',
          'core' => '7.x',
          'dependencies' => 
          array (
          ),
          'version' => NULL,
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => '',
        'version' => NULL,
      ),
      'creighton_dates' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_aux/creighton_dates/creighton_dates.module',
        'basename' => 'creighton_dates.module',
        'name' => 'creighton_dates',
        'info' => 
        array (
          'name' => 'Creighton Dates',
          'description' => 'Creighton specific date formats specialized for events view and can be shared with other features or pages',
          'package' => 'Creighton',
          'core' => '7.x',
          'dependencies' => 
          array (
          ),
          'version' => NULL,
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => '',
        'version' => NULL,
      ),
      'creighton_global_roles' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_admin_roles/creighton_global_roles.module',
        'basename' => 'creighton_global_roles.module',
        'name' => 'creighton_global_roles',
        'info' => 
        array (
          'name' => 'Global Roles',
          'description' => 'Creighton Global Roles and Permissions',
          'core' => '7.x',
          'package' => 'Creighton',
          'version' => '7.x-2.22',
          'project' => 'creighton_global_roles',
          'dependencies' => 
          array (
            0 => 'admin_menu',
            1 => 'auto_nodetitle',
            2 => 'backup_migrate',
            3 => 'bean',
            4 => 'block',
            5 => 'block_class',
            6 => 'cer',
            7 => 'ckeditor_link',
            8 => 'conditional_fields',
            9 => 'context_ui',
            10 => 'contextual',
            11 => 'creighton_wysiwyg',
            12 => 'dashboard',
            13 => 'features',
            14 => 'field_collection',
            15 => 'field_group',
            16 => 'filter',
            17 => 'image',
            18 => 'menu',
            19 => 'module_filter',
            20 => 'node',
            21 => 'panels',
            22 => 'panels_mini',
            23 => 'panels_node',
            24 => 'path',
            25 => 'pathauto',
            26 => 'redirect',
            27 => 'role_delegation',
            28 => 'role_watchdog',
            29 => 'search',
            30 => 'shortcut',
            31 => 'system',
            32 => 'taxonomy',
            33 => 'user',
            34 => 'views',
          ),
          'features' => 
          array (
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'user_permission' => 
            array (
              0 => 'access administration menu',
              1 => 'access administration pages',
              2 => 'access all views',
              3 => 'access backup and migrate',
              4 => 'access backup files',
              5 => 'access bean overview',
              6 => 'access ckeditor link',
              7 => 'access content',
              8 => 'access content overview',
              9 => 'access contextual links',
              10 => 'access dashboard',
              11 => 'access site in maintenance mode',
              12 => 'access site reports',
              13 => 'access user profiles',
              14 => 'administer actions',
              15 => 'administer backup and migrate',
              16 => 'administer bean settings',
              17 => 'administer bean types',
              18 => 'administer beans',
              19 => 'administer block classes',
              20 => 'administer blocks',
              21 => 'administer cer settings',
              22 => 'administer ckeditor link',
              23 => 'administer content types',
              24 => 'administer contexts',
              25 => 'administer dependencies',
              26 => 'administer features',
              27 => 'administer field collections',
              28 => 'administer fieldgroups',
              29 => 'administer filters',
              30 => 'administer image styles',
              31 => 'administer menu',
              32 => 'administer module filter',
              33 => 'administer modules',
              34 => 'administer nodes',
              35 => 'administer pathauto',
              36 => 'administer permissions',
              37 => 'administer redirects',
              38 => 'administer search',
              39 => 'administer shortcuts',
              40 => 'administer site configuration',
              41 => 'administer software updates',
              42 => 'administer taxonomy',
              43 => 'administer themes',
              44 => 'administer url aliases',
              45 => 'administer users',
              46 => 'administer views',
              47 => 'assign administrator role',
              48 => 'assign advanced author role',
              49 => 'assign all roles',
              50 => 'assign author role',
              51 => 'assign manager role',
              52 => 'block IP addresses',
              53 => 'bypass node access',
              54 => 'cancel account',
              55 => 'change own username',
              56 => 'context ajax block access',
              57 => 'create url aliases',
              58 => 'customize shortcut links',
              59 => 'delete backup files',
              60 => 'delete revisions',
              61 => 'display drupal links',
              62 => 'edit bean view mode',
              63 => 'flush caches',
              64 => 'generate features',
              65 => 'manage features',
              66 => 'notify of path changes',
              67 => 'perform backup',
              68 => 'restore from backup',
              69 => 'revert revisions',
              70 => 'search content',
              71 => 'select account cancellation method',
              72 => 'switch shortcut sets',
              73 => 'use PHP for title patterns',
              74 => 'use advanced search',
              75 => 'use text format filtered_html',
              76 => 'use text format full_html_plus_media',
              77 => 'view bean page',
              78 => 'view bean revisions',
              79 => 'view own role history',
              80 => 'view own unpublished content',
              81 => 'view revisions',
              82 => 'view role history',
              83 => 'view the administration theme',
            ),
            'user_role' => 
            array (
              0 => 'administrator',
              1 => 'advanced author',
              2 => 'author',
              3 => 'manager',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'creighton_global_roles',
        'version' => '7.x-2.22',
      ),
      'creighton_content_page' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_basic_page/creighton_content_page/creighton_content_page.module',
        'basename' => 'creighton_content_page.module',
        'name' => 'creighton_content_page',
        'info' => 
        array (
          'name' => 'Content Page',
          'core' => '7.x',
          'package' => 'Creighton',
          'version' => '7.x-2.22',
          'project' => 'creighton_content_page',
          'dependencies' => 
          array (
            0 => 'bean',
            1 => 'better_exposed_filters',
            2 => 'better_formats',
            3 => 'creighton_global_roles',
            4 => 'creighton_variables',
            5 => 'creighton_wysiwyg',
            6 => 'ctools',
            7 => 'cu_accordion',
            8 => 'default_menu_link',
            9 => 'entityreference',
            10 => 'features',
            11 => 'media',
            12 => 'multiple_selects',
            13 => 'node',
            14 => 'node_menu_required',
            15 => 'panels',
            16 => 'pathauto',
            17 => 'publish_button',
            18 => 'strongarm',
            19 => 'taxonomy',
            20 => 'text',
            21 => 'views',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'strongarm:strongarm:1',
              1 => 'views:views_default:3.0',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'field_base' => 
            array (
              0 => 'field_content_page_headline',
              1 => 'field_content_tags',
              2 => 'field_main_large_horiz_image',
            ),
            'field_instance' => 
            array (
              0 => 'node-content_page-body',
              1 => 'node-content_page-field_content_page_headline',
              2 => 'node-content_page-field_content_secondary_content',
              3 => 'node-content_page-field_content_supp_body_content',
              4 => 'node-content_page-field_content_tags',
              5 => 'node-content_page-field_main_large_horiz_image',
            ),
            'node' => 
            array (
              0 => 'content_page',
            ),
            'taxonomy' => 
            array (
              0 => 'courses',
            ),
            'user_permission' => 
            array (
              0 => 'create content_page content',
              1 => 'delete any content_page content',
              2 => 'delete own content_page content',
              3 => 'edit any content_page content',
              4 => 'edit own content_page content',
              5 => 'publish button publish any content_page',
              6 => 'publish button publish own content_page',
              7 => 'publish button unpublish any content_page',
              8 => 'publish button unpublish own content_page',
            ),
            'variable' => 
            array (
              0 => 'default_menu_link_content_page_enabled',
              1 => 'default_menu_link_enabled_content_page',
              2 => 'diff_enable_revisions_page_node_content_page',
              3 => 'diff_show_preview_changes_node_content_page',
              4 => 'diff_view_mode_preview_node_content_page',
              5 => 'field_bundle_settings_node__content_page',
              6 => 'menu_options_content_page',
              7 => 'menu_parent_content_page',
              8 => 'node_menu_required_content_page',
              9 => 'node_options_content_page',
              10 => 'node_preview_content_page',
              11 => 'node_submitted_content_page',
              12 => 'pathauto_node_content_page_pattern',
              13 => 'publish_button_content_type_content_page',
              14 => 'save_continue_content_page',
              15 => 'webform_node_content_page',
              16 => 'xmlsitemap_settings_node_content_page',
            ),
            'views_view' => 
            array (
              0 => 'content_page_tag_view',
            ),
          ),
          'features_exclude' => 
          array (
            'dependencies' => 
            array (
              'creighton_news_center' => 'creighton_news_center',
            ),
          ),
          'description' => '',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'creighton_content_page',
        'version' => '7.x-2.22',
      ),
      'creighton_webform_rules' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_basic_page/creighton_webform_rules/creighton_webform_rules.module',
        'basename' => 'creighton_webform_rules.module',
        'name' => 'creighton_webform_rules',
        'info' => 
        array (
          'name' => 'Webform Rules',
          'description' => 'Creighton Webform Rules',
          'core' => '7.x',
          'package' => 'Creighton',
          'version' => '7.x-2.22',
          'project' => 'creighton_webform_rules',
          'dependencies' => 
          array (
            0 => 'ctools',
            1 => 'creighton_variables',
            2 => 'creighton_webform',
            3 => 'entity',
            4 => 'php',
            5 => 'rules',
            6 => 'webform_rules',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'strongarm:strongarm:1',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'rules_config' => 
            array (
              0 => 'rules_accelerated_programs_request_info_form',
              1 => 'rules_adult_degree_completion_request_info_form',
              2 => 'rules_dentistry_request_info_form',
              3 => 'rules_graduate_business_programs_request_info_form',
              4 => 'rules_graduate_nursing_programs_request_info_form',
              5 => 'rules_graduate_programs_request_info_form',
              6 => 'rules_intensive_english_language_institute_request_info_form',
              7 => 'rules_international_graduate_programs_request_info_form',
              8 => 'rules_international_undergraduate_majors_request_info_form',
              9 => 'rules_law_request_info_form',
              10 => 'rules_medicine_request_info_form',
              11 => 'rules_occupational_therapy_request_info_form',
              12 => 'rules_online_programs_request_info_form',
              13 => 'rules_pharmacy_request_info_form',
              14 => 'rules_physical_therapy_request_info_form',
              15 => 'rules_undergraduate_majors_request_info_form',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'creighton_webform_rules',
        'version' => '7.x-2.22',
      ),
      'creighton_2tier_page' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_basic_page/creighton_2tier_page/creighton_2tier_page.module',
        'basename' => 'creighton_2tier_page.module',
        'name' => 'creighton_2tier_page',
        'info' => 
        array (
          'name' => '2nd Tier Page',
          'core' => '7.x',
          'package' => 'Creighton',
          'version' => '7.x-2.22',
          'project' => 'creighton_2tier_page',
          'dependencies' => 
          array (
            0 => 'bean',
            1 => 'better_formats',
            2 => 'creighton_content_page',
            3 => 'creighton_global_roles',
            4 => 'creighton_variables',
            5 => 'creighton_wysiwyg',
            6 => 'ctools',
            7 => 'entityreference',
            8 => 'features',
            9 => 'media',
            10 => 'multiple_selects',
            11 => 'node',
            12 => 'node_menu_required',
            13 => 'pathauto',
            14 => 'publish_button',
            15 => 'strongarm',
            16 => 'text',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'strongarm:strongarm:1',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'field_base' => 
            array (
              0 => 'field_2tier_page_headline',
            ),
            'field_instance' => 
            array (
              0 => 'node-2tier_page-body',
              1 => 'node-2tier_page-field_2tier_page_header_image',
              2 => 'node-2tier_page-field_2tier_page_headline',
              3 => 'node-2tier_page-field_content_secondary_content',
              4 => 'node-2tier_page-field_content_supp_body_content',
              5 => 'node-2tier_page-field_main_large_horiz_image',
            ),
            'node' => 
            array (
              0 => '2tier_page',
            ),
            'user_permission' => 
            array (
              0 => 'create 2tier_page content',
              1 => 'delete any 2tier_page content',
              2 => 'delete own 2tier_page content',
              3 => 'edit any 2tier_page content',
              4 => 'edit own 2tier_page content',
              5 => 'publish button publish any 2tier_page',
              6 => 'publish button publish own 2tier_page',
              7 => 'publish button unpublish any 2tier_page',
              8 => 'publish button unpublish own 2tier_page',
            ),
            'variable' => 
            array (
              0 => 'diff_enable_revisions_page_node_2tier_page',
              1 => 'diff_show_preview_changes_node_2tier_page',
              2 => 'diff_view_mode_preview_node_2tier_page',
              3 => 'field_bundle_settings_node__2tier_page',
              4 => 'menu_options_2tier_page',
              5 => 'menu_parent_2tier_page',
              6 => 'node_menu_required_2tier_page',
              7 => 'node_options_2tier_page',
              8 => 'node_preview_2tier_page',
              9 => 'node_submitted_2tier_page',
              10 => 'pathauto_node_2tier_page_pattern',
              11 => 'publish_button_content_type_2tier_page',
              12 => 'save_continue_2tier_page',
              13 => 'webform_node_2tier_page',
              14 => 'xmlsitemap_settings_node_2tier_page',
            ),
          ),
          'features_exclude' => 
          array (
            'dependencies' => 
            array (
              'creighton_news_center' => 'creighton_news_center',
            ),
          ),
          'description' => '',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'creighton_2tier_page',
        'version' => '7.x-2.22',
      ),
      'creighton_2tier_page_panelizer' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_basic_page/creighton_2tier_page_panelizer/creighton_2tier_page_panelizer.module',
        'basename' => 'creighton_2tier_page_panelizer.module',
        'name' => 'creighton_2tier_page_panelizer',
        'info' => 
        array (
          'name' => '2nd Tier Page Panelizer',
          'description' => 'Panelizer configuration for 2nd Tier Page',
          'core' => '7.x',
          'package' => 'Creighton',
          'version' => '7.x-2.22',
          'project' => 'creighton_2tier_page_panelizer',
          'dependencies' => 
          array (
            0 => 'creighton_2tier_page',
            1 => 'creighton_panels',
            2 => 'ctools',
            3 => 'features',
            4 => 'panelizer',
            5 => 'strongarm',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'strongarm:strongarm:1',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'user_permission' => 
            array (
              0 => 'administer panelizer node 2tier_page choice',
              1 => 'administer panelizer node 2tier_page content',
              2 => 'administer panelizer node 2tier_page context',
              3 => 'administer panelizer node 2tier_page defaults',
              4 => 'administer panelizer node 2tier_page layout',
              5 => 'administer panelizer node 2tier_page overview',
              6 => 'administer panelizer node 2tier_page settings',
            ),
            'variable' => 
            array (
              0 => 'panelizer_defaults_node_2tier_page',
              1 => 'panelizer_node:2tier_page_allowed_layouts',
              2 => 'panelizer_node:2tier_page_allowed_layouts_default',
              3 => 'panelizer_node:2tier_page_allowed_types_default',
              4 => 'panelizer_node:2tier_page_default',
            ),
          ),
          'mtime' => '1435686815',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'creighton_2tier_page_panelizer',
        'version' => '7.x-2.22',
      ),
      'creighton_spotlight' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_basic_page/creighton_spotlight/creighton_spotlight.module',
        'basename' => 'creighton_spotlight.module',
        'name' => 'creighton_spotlight',
        'info' => 
        array (
          'name' => 'Creighton Spotlight',
          'description' => 'Spotlight ie) Success Stories',
          'core' => '7.x',
          'package' => 'Creighton Optional Packages',
          'version' => '7.x-1.0',
          'project' => 'creighton_spotlight',
          'dependencies' => 
          array (
            0 => 'creighton_variables',
            1 => 'media',
            2 => 'node',
            3 => 'options',
            4 => 'panelizer',
            5 => 'taxonomy',
            6 => 'text',
            7 => 'views',
            8 => 'views_data_export',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'strongarm:strongarm:1',
              1 => 'views:views_default:3.0',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'field_base' => 
            array (
              0 => 'field_spotlight_image',
              1 => 'field_spotlight_taxonomy',
            ),
            'field_instance' => 
            array (
              0 => 'node-spotlight-body',
              1 => 'node-spotlight-field_spotlight_image',
              2 => 'node-spotlight-field_spotlight_taxonomy',
            ),
            'image' => 
            array (
              0 => 'spotlight',
            ),
            'node' => 
            array (
              0 => 'spotlight',
            ),
            'taxonomy' => 
            array (
              0 => 'spotlight',
            ),
            'user_permission' => 
            array (
              0 => 'create spotlight content',
              1 => 'delete any spotlight content',
              2 => 'delete own spotlight content',
              3 => 'edit any spotlight content',
              4 => 'edit own spotlight content',
            ),
            'variable' => 
            array (
              0 => 'field_bundle_settings_node__spotlight',
              1 => 'menu_options_spotlight',
              2 => 'menu_parent_spotlight',
              3 => 'node_options_spotlight',
              4 => 'node_preview_spotlight',
              5 => 'node_submitted_spotlight',
              6 => 'pathauto_node_spotlight_pattern',
              7 => 'pathauto_taxonomy_term_spotlight_pattern',
              8 => 'xmlsitemap_settings_node_spotlight',
            ),
            'views_view' => 
            array (
              0 => 'spotlight',
            ),
          ),
          'features_exclude' => 
          array (
            'dependencies' => 
            array (
              'ctools' => 'ctools',
              'features' => 'features',
              'image' => 'image',
              'metatag' => 'metatag',
              'strongarm' => 'strongarm',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'creighton_spotlight',
        'version' => '7.x-1.0',
      ),
      'creighton_campus_alerts' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_basic_page/creighton_campus_alerts/creighton_campus_alerts.module',
        'basename' => 'creighton_campus_alerts.module',
        'name' => 'creighton_campus_alerts',
        'info' => 
        array (
          'name' => 'Creighton Campus Alerts',
          'description' => 'Creighton Campus Alerts',
          'core' => '7.x',
          'package' => 'Creighton Optional Packages',
          'version' => '7.x-1.0',
          'project' => 'creighton_campus_alerts',
          'dependencies' => 
          array (
            0 => 'bean',
            1 => 'bean_admin_ui',
            2 => 'ctools',
            3 => 'features',
            4 => 'link',
            5 => 'list',
            6 => 'options',
            7 => 'text',
          ),
          'features' => 
          array (
            'bean_type' => 
            array (
              0 => 'block_header_alert',
            ),
            'ctools' => 
            array (
              0 => 'bean_admin_ui:bean:5',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'field_base' => 
            array (
              0 => 'field_emergency_headline',
              1 => 'field_emergency_type',
              2 => 'field_header_alert_activate',
              3 => 'field_header_alert_link',
              4 => 'field_header_alert_markup',
            ),
            'field_instance' => 
            array (
              0 => 'bean-block_header_alert-field_emergency_headline',
              1 => 'bean-block_header_alert-field_emergency_type',
              2 => 'bean-block_header_alert-field_header_alert_activate',
              3 => 'bean-block_header_alert-field_header_alert_link',
              4 => 'bean-block_header_alert-field_header_alert_markup',
            ),
            'user_permission' => 
            array (
              0 => 'create any block_header_alert bean',
              1 => 'delete any block_header_alert bean',
              2 => 'edit any block_header_alert bean',
              3 => 'view any block_header_alert bean',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'creighton_campus_alerts',
        'version' => '7.x-1.0',
      ),
      'profiles_student_international' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_basic_page/profiles_student_international/profiles_student_international.module',
        'basename' => 'profiles_student_international.module',
        'name' => 'profiles_student_international',
        'info' => 
        array (
          'name' => 'Profiles Student International',
          'description' => 'Profiles for International students (originally developed for Admissions)',
          'core' => '7.x',
          'package' => 'Creighton Optional Packages',
          'version' => '7.x-1.0',
          'project' => 'profiles_student_international',
          'dependencies' => 
          array (
            0 => 'creighton_variables',
            1 => 'email',
            2 => 'field_group',
            3 => 'image',
            4 => 'text',
            5 => 'views',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'field_group:field_group:1',
              1 => 'strongarm:strongarm:1',
              2 => 'views:views_default:3.0',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'field_base' => 
            array (
              0 => 'field_international_profile_city',
              1 => 'field_international_profile_coll',
              2 => 'field_international_profile_coun',
              3 => 'field_international_profile_emai',
              4 => 'field_international_profile_grad',
              5 => 'field_international_profile_head',
              6 => 'field_international_profile_lang',
              7 => 'field_international_profile_larg',
              8 => 'field_international_profile_majo',
              9 => 'field_international_profile_mino',
              10 => 'field_international_profile_quot',
              11 => 'field_international_profile_stat',
              12 => 'field_international_profile_tags',
              13 => 'field_international_profile_thum',
            ),
            'field_group' => 
            array (
              0 => 'group_contact_info|node|profile_student_international|default',
            ),
            'field_instance' => 
            array (
              0 => 'node-profile_student_international-body',
              1 => 'node-profile_student_international-field_international_profile_city',
              2 => 'node-profile_student_international-field_international_profile_coll',
              3 => 'node-profile_student_international-field_international_profile_coun',
              4 => 'node-profile_student_international-field_international_profile_emai',
              5 => 'node-profile_student_international-field_international_profile_grad',
              6 => 'node-profile_student_international-field_international_profile_head',
              7 => 'node-profile_student_international-field_international_profile_lang',
              8 => 'node-profile_student_international-field_international_profile_larg',
              9 => 'node-profile_student_international-field_international_profile_majo',
              10 => 'node-profile_student_international-field_international_profile_mino',
              11 => 'node-profile_student_international-field_international_profile_quot',
              12 => 'node-profile_student_international-field_international_profile_stat',
              13 => 'node-profile_student_international-field_international_profile_tags',
              14 => 'node-profile_student_international-field_international_profile_thum',
            ),
            'node' => 
            array (
              0 => 'profile_student_international',
            ),
            'variable' => 
            array (
              0 => 'field_bundle_settings_node__profile_student_international',
              1 => 'menu_options_profile_student_international',
              2 => 'menu_parent_profile_student_international',
              3 => 'node_options_profile_student_international',
              4 => 'node_preview_profile_student_international',
              5 => 'node_submitted_profile_student_international',
            ),
            'views_view' => 
            array (
              0 => 'profile_student_international_view',
            ),
          ),
          'features_exclude' => 
          array (
            'dependencies' => 
            array (
              'ctools' => 'ctools',
              'features' => 'features',
              'strongarm' => 'strongarm',
              'taxonomy' => 'taxonomy',
            ),
            'taxonomy' => 
            array (
              'admissions_site_tags' => 'admissions_site_tags',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'profiles_student_international',
        'version' => '7.x-1.0',
      ),
      'creighton_content_page_panelizer' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_basic_page/creighton_content_page_panelizer/creighton_content_page_panelizer.module',
        'basename' => 'creighton_content_page_panelizer.module',
        'name' => 'creighton_content_page_panelizer',
        'info' => 
        array (
          'name' => 'Content Page Panelizer',
          'description' => 'Panelizer configuration for Content Page',
          'core' => '7.x',
          'package' => 'Creighton',
          'version' => '7.x-2.22',
          'project' => 'creighton_content_page_panelizer',
          'dependencies' => 
          array (
            0 => 'creighton_content_page',
            1 => 'creighton_panels',
            2 => 'ctools',
            3 => 'features',
            4 => 'panelizer',
            5 => 'strongarm',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'strongarm:strongarm:1',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'user_permission' => 
            array (
              0 => 'administer panelizer node content_page choice',
              1 => 'administer panelizer node content_page content',
              2 => 'administer panelizer node content_page context',
              3 => 'administer panelizer node content_page defaults',
              4 => 'administer panelizer node content_page layout',
              5 => 'administer panelizer node content_page overview',
              6 => 'administer panelizer node content_page settings',
            ),
            'variable' => 
            array (
              0 => 'panelizer_defaults_node_content_page',
              1 => 'panelizer_node:content_page_allowed_layouts',
              2 => 'panelizer_node:content_page_allowed_layouts_default',
              3 => 'panelizer_node:content_page_allowed_types',
              4 => 'panelizer_node:content_page_allowed_types_default',
              5 => 'panelizer_node:content_page_default',
            ),
          ),
          'mtime' => '1435686815',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'creighton_content_page_panelizer',
        'version' => '7.x-2.22',
      ),
      'admissions_counselor_bio' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_basic_page/admissions_counselor_bio/admissions_counselor_bio.module',
        'basename' => 'admissions_counselor_bio.module',
        'name' => 'admissions_counselor_bio',
        'info' => 
        array (
          'name' => 'Admissions Counselor Bio',
          'description' => 'Developed by Admissions',
          'core' => '7.x',
          'package' => 'Creighton',
          'version' => '7.x-1.0',
          'project' => 'admissions_counselor_bio',
          'dependencies' => 
          array (
            0 => 'ctools',
            1 => 'features',
            2 => 'field_group',
            3 => 'image',
            4 => 'link',
            5 => 'strongarm',
            6 => 'taxonomy',
            7 => 'text',
            8 => 'views',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'field_group:field_group:1',
              1 => 'strongarm:strongarm:1',
              2 => 'views:views_default:3.0',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'field_base' => 
            array (
              0 => 'field_counselor_css_class',
              1 => 'field_counselor_link',
              2 => 'field_email_link',
              3 => 'field_fax',
              4 => 'field_first_name',
              5 => 'field_full_name',
              6 => 'field_instant_messaging',
              7 => 'field_last_name',
              8 => 'field_map_image',
              9 => 'field_personal_information',
              10 => 'field_phone',
              11 => 'field_photo',
              12 => 'field_photo_thumbnail',
              13 => 'field_quote',
              14 => 'field_tag',
              15 => 'field_territory',
              16 => 'field_title',
            ),
            'field_group' => 
            array (
              0 => 'group_counselor_contact_info|node|counselor|default',
            ),
            'field_instance' => 
            array (
              0 => 'node-counselor-field_counselor_css_class',
              1 => 'node-counselor-field_counselor_link',
              2 => 'node-counselor-field_email_link',
              3 => 'node-counselor-field_fax',
              4 => 'node-counselor-field_first_name',
              5 => 'node-counselor-field_full_name',
              6 => 'node-counselor-field_instant_messaging',
              7 => 'node-counselor-field_last_name',
              8 => 'node-counselor-field_map_image',
              9 => 'node-counselor-field_personal_information',
              10 => 'node-counselor-field_phone',
              11 => 'node-counselor-field_photo',
              12 => 'node-counselor-field_photo_thumbnail',
              13 => 'node-counselor-field_quote',
              14 => 'node-counselor-field_tag',
              15 => 'node-counselor-field_territory',
              16 => 'node-counselor-field_title',
            ),
            'node' => 
            array (
              0 => 'counselor',
            ),
            'taxonomy' => 
            array (
              0 => 'admissions_site_tags',
            ),
            'variable' => 
            array (
              0 => 'field_bundle_settings_node__counselor',
              1 => 'menu_options_counselor',
              2 => 'menu_parent_counselor',
              3 => 'node_options_counselor',
              4 => 'node_preview_counselor',
              5 => 'node_submitted_counselor',
            ),
            'views_view' => 
            array (
              0 => 'counselor_view',
            ),
          ),
          'mtime' => '1443130268',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'admissions_counselor_bio',
        'version' => '7.x-1.0',
      ),
      'creighton_webform' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_basic_page/creighton_webform/creighton_webform.module',
        'basename' => 'creighton_webform.module',
        'name' => 'creighton_webform',
        'info' => 
        array (
          'name' => 'Webform',
          'core' => '7.x',
          'package' => 'Creighton',
          'version' => '7.x-2.22',
          'project' => 'creighton_webform',
          'dependencies' => 
          array (
            0 => 'better_formats',
            1 => 'creighton_global_roles',
            2 => 'creighton_variables',
            3 => 'creighton_wysiwyg',
            4 => 'ctools',
            5 => 'default_menu_link',
            6 => 'features',
            7 => 'node',
            8 => 'publish_button',
            9 => 'strongarm',
            10 => 'text',
            11 => 'webform',
            12 => 'webform_ajax',
            13 => 'webform_validation',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'strongarm:strongarm:1',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'field_base' => 
            array (
              0 => 'field_webform_headline',
            ),
            'field_instance' => 
            array (
              0 => 'node-webform-body',
              1 => 'node-webform-field_webform_headline',
            ),
            'node' => 
            array (
              0 => 'webform',
            ),
            'user_permission' => 
            array (
              0 => 'access all webform results',
              1 => 'access own webform results',
              2 => 'access own webform submissions',
              3 => 'create webform content',
              4 => 'delete all webform submissions',
              5 => 'delete any webform content',
              6 => 'delete own webform content',
              7 => 'delete own webform submissions',
              8 => 'edit all webform submissions',
              9 => 'edit any webform content',
              10 => 'edit own webform content',
              11 => 'edit own webform submissions',
              12 => 'publish button publish any webform',
              13 => 'publish button publish own webform',
              14 => 'publish button unpublish any webform',
              15 => 'publish button unpublish own webform',
            ),
            'variable' => 
            array (
              0 => 'comment_webform',
              1 => 'default_menu_link_enabled_webform',
              2 => 'default_menu_link_webform_enabled',
              3 => 'diff_enable_revisions_page_node_webform',
              4 => 'diff_show_preview_changes_node_webform',
              5 => 'diff_view_mode_preview_node_webform',
              6 => 'field_bundle_settings_node__webform',
              7 => 'menu_options_webform',
              8 => 'menu_parent_webform',
              9 => 'node_menu_required_webform',
              10 => 'node_options_webform',
              11 => 'node_preview_webform',
              12 => 'node_submitted_webform',
              13 => 'pathauto_node_webform_pattern',
              14 => 'publish_button_content_type_webform',
              15 => 'webform_csv_delimiter',
              16 => 'webform_default_format',
              17 => 'webform_default_from_address',
              18 => 'webform_default_from_name',
              19 => 'webform_default_subject',
              20 => 'webform_disabled_components',
              21 => 'webform_email_address_format',
              22 => 'webform_email_html_capable',
              23 => 'webform_email_select_max',
              24 => 'webform_export_format',
              25 => 'webform_format_override',
              26 => 'webform_node_webform',
              27 => 'webform_progressbar_label_confirmation',
              28 => 'webform_progressbar_label_first',
              29 => 'webform_progressbar_style',
              30 => 'webform_search_index',
              31 => 'webform_submission_access_control',
              32 => 'webform_tracking_mode',
              33 => 'xmlsitemap_settings_node_webform',
            ),
          ),
          'features_exclude' => 
          array (
            'field_base' => 
            array (
              'body' => 'body',
            ),
          ),
          'description' => '',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'creighton_webform',
        'version' => '7.x-2.22',
      ),
      'creighton_faculty_directory' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_basic_page/creighton_faculty_directory/creighton_faculty_directory.module',
        'basename' => 'creighton_faculty_directory.module',
        'name' => 'creighton_faculty_directory',
        'info' => 
        array (
          'name' => 'Faculty Directory',
          'description' => 'Views, context and contents of faculty directory',
          'core' => '7.x',
          'package' => 'Creighton Optional Packages',
          'version' => '7.x-1.0',
          'dependencies' => 
          array (
            0 => 'block',
            1 => 'context',
            2 => 'views',
            3 => 'views_json_query',
          ),
          'features' => 
          array (
            'context' => 
            array (
              0 => 'faculty-profile-sidebar',
            ),
            'ctools' => 
            array (
              0 => 'context:context:3',
              1 => 'views:views_default:3.0',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'views_view' => 
            array (
              0 => 'faculty_directory_list_new_json',
              1 => 'faculty_directory_profile',
              2 => 'faculty_directory_profile_sidebar',
              3 => 'faculty_directory_search',
            ),
          ),
          'features_exclude' => 
          array (
            'dependencies' => 
            array (
              'ctools' => 'ctools',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => '',
        'version' => '7.x-1.0',
      ),
      'parking_permits' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_features/parking_permits/parking_permits.module',
        'basename' => 'parking_permits.module',
        'name' => 'parking_permits',
        'info' => 
        array (
          'name' => 'Parking Permits',
          'core' => '7.x',
          'package' => 'Creighton Apps',
          'version' => '7.x-1.0',
          'dependencies' => 
          array (
            0 => 'auto_nodetitle',
            1 => 'conditional_fields',
            2 => 'context',
            3 => 'date',
            4 => 'embeddedviewfield',
            5 => 'entity',
            6 => 'entityreference',
            7 => 'entityreference_prepopulate',
            8 => 'features',
            9 => 'feeds',
            10 => 'field_collection',
            11 => 'field_group',
            12 => 'field_permissions',
            13 => 'http_client',
            14 => 'list',
            15 => 'mimemail',
            16 => 'node',
            17 => 'number',
            18 => 'prepopulate',
            19 => 'rules',
            20 => 'rules_admin',
            21 => 'shib_auth',
            22 => 'strongarm',
            23 => 'taxonomy',
            24 => 'taxonomy_access_fix',
            25 => 'text',
            26 => 'unique_field',
            27 => 'views',
            28 => 'views_data_export',
            29 => 'views_php',
            30 => 'views_rules',
            31 => 'wsclient',
            32 => 'wsclient_rest',
            33 => 'wsclient_ui',
          ),
          'features' => 
          array (
            'conditional_fields' => 
            array (
              0 => 'node:permit2',
            ),
            'context' => 
            array (
              0 => 'login',
            ),
            'ctools' => 
            array (
              0 => 'context:context:3',
              1 => 'feeds:feeds_importer_default:1',
              2 => 'field_group:field_group:1',
              3 => 'strongarm:strongarm:1',
              4 => 'views:views_default:3.0',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'feeds_importer' => 
            array (
              0 => 'permit_importer_v1',
              1 => 'rate_table_importer',
              2 => 'testasdf',
              3 => 'vehicle_importer_one',
              4 => 'vehicle_importer_three',
              5 => 'vehicle_importer_two',
            ),
            'field_base' => 
            array (
              0 => 'field_add_veh_amt_frct',
              1 => 'field_address_line1',
              2 => 'field_address_line2',
              3 => 'field_address_line3',
              4 => 'field_authorization_select',
              5 => 'field_bill_annual',
              6 => 'field_bill_periodic',
              7 => 'field_bldg',
              8 => 'field_blueid',
              9 => 'field_cell_phone',
              10 => 'field_city',
              11 => 'field_date_of_last_hub_update',
              12 => 'field_deductions_frct',
              13 => 'field_delivery_location',
              14 => 'field_delvry_pt',
              15 => 'field_department',
              16 => 'field_employee_number',
              17 => 'field_fee_date_authorized',
              18 => 'field_fee_deduction_amt',
              19 => 'field_fee_first_payment_date',
              20 => 'field_fee_ft_pt',
              21 => 'field_fee_num_deductions',
              22 => 'field_fee_pay_cycle',
              23 => 'field_fee_table',
              24 => 'field_fee_total_amt',
              25 => 'field_fee_vehicle_add_count',
              26 => 'field_first_name',
              27 => 'field_first_pymt_date_frct',
              28 => 'field_ft_pt_frct',
              29 => 'field_full_name',
              30 => 'field_full_time_part_time',
              31 => 'field_home_phone',
              32 => 'field_hrms_date',
              33 => 'field_hrms_reference',
              34 => 'field_last_appl_date_frct',
              35 => 'field_last_name',
              36 => 'field_location',
              37 => 'field_mail_drop',
              38 => 'field_middle_name',
              39 => 'field_my_parking_permits',
              40 => 'field_my_vehicles',
              41 => 'field_netid_ref',
              42 => 'field_org',
              43 => 'field_pay_cycle_frct',
              44 => 'field_payroll_type',
              45 => 'field_permit_delivery',
              46 => 'field_permit_holder_category_tax',
              47 => 'field_permit_holder_type_er_tax',
              48 => 'field_permit_year_frct',
              49 => 'field_permit_year_tax',
              50 => 'field_person_type',
              51 => 'field_person_type_frct',
              52 => 'field_rcomment',
              53 => 'field_state',
              54 => 'field_sticker_num_1',
              55 => 'field_sticker_num_2',
              56 => 'field_sticker_num_3',
              57 => 'field_sticker_to_vehicle_1_er',
              58 => 'field_sticker_to_vehicle_2_er',
              59 => 'field_sticker_to_vehicle_3_er',
              60 => 'field_total_amt_frct',
              61 => 'field_vehcolor_tax',
              62 => 'field_vehlicnumber2',
              63 => 'field_vehlicstate2',
              64 => 'field_vehmake_tax',
              65 => 'field_vehmodel',
              66 => 'field_vehstyle_tax',
              67 => 'field_vehyear',
              68 => 'field_zip',
            ),
            'field_group' => 
            array (
              0 => 'group_details|user|user|default',
            ),
            'field_instance' => 
            array (
              0 => 'node-automobile-field_netid_ref',
              1 => 'node-automobile-field_vehcolor_tax',
              2 => 'node-automobile-field_vehlicnumber2',
              3 => 'node-automobile-field_vehlicstate2',
              4 => 'node-automobile-field_vehmake_tax',
              5 => 'node-automobile-field_vehmodel',
              6 => 'node-automobile-field_vehstyle_tax',
              7 => 'node-automobile-field_vehyear',
              8 => 'node-fee_rate_ct-field_add_veh_amt_frct',
              9 => 'node-fee_rate_ct-field_deductions_frct',
              10 => 'node-fee_rate_ct-field_first_pymt_date_frct',
              11 => 'node-fee_rate_ct-field_ft_pt_frct',
              12 => 'node-fee_rate_ct-field_last_appl_date_frct',
              13 => 'node-fee_rate_ct-field_pay_cycle_frct',
              14 => 'node-fee_rate_ct-field_permit_year_frct',
              15 => 'node-fee_rate_ct-field_person_type_frct',
              16 => 'node-fee_rate_ct-field_total_amt_frct',
              17 => 'node-permit2-field_authorization_select',
              18 => 'node-permit2-field_delivery_location',
              19 => 'node-permit2-field_department',
              20 => 'node-permit2-field_fee_date_authorized',
              21 => 'node-permit2-field_fee_deduction_amt',
              22 => 'node-permit2-field_fee_first_payment_date',
              23 => 'node-permit2-field_fee_ft_pt',
              24 => 'node-permit2-field_fee_num_deductions',
              25 => 'node-permit2-field_fee_pay_cycle',
              26 => 'node-permit2-field_fee_table',
              27 => 'node-permit2-field_fee_total_amt',
              28 => 'node-permit2-field_fee_vehicle_add_count',
              29 => 'node-permit2-field_netid_ref',
              30 => 'node-permit2-field_permit_delivery',
              31 => 'node-permit2-field_permit_holder_category_tax',
              32 => 'node-permit2-field_permit_holder_type_er_tax',
              33 => 'node-permit2-field_permit_year_tax',
              34 => 'node-permit2-field_sticker_num_1',
              35 => 'node-permit2-field_sticker_num_2',
              36 => 'node-permit2-field_sticker_num_3',
              37 => 'node-permit2-field_sticker_to_vehicle_1_er',
              38 => 'node-permit2-field_sticker_to_vehicle_2_er',
              39 => 'node-permit2-field_sticker_to_vehicle_3_er',
              40 => 'user-user-field_address_line1',
              41 => 'user-user-field_address_line2',
              42 => 'user-user-field_address_line3',
              43 => 'user-user-field_bill_annual',
              44 => 'user-user-field_bill_periodic',
              45 => 'user-user-field_bldg',
              46 => 'user-user-field_blueid',
              47 => 'user-user-field_cell_phone',
              48 => 'user-user-field_city',
              49 => 'user-user-field_date_of_last_hub_update',
              50 => 'user-user-field_delvry_pt',
              51 => 'user-user-field_employee_number',
              52 => 'user-user-field_first_name',
              53 => 'user-user-field_full_name',
              54 => 'user-user-field_full_time_part_time',
              55 => 'user-user-field_home_phone',
              56 => 'user-user-field_hrms_date',
              57 => 'user-user-field_hrms_reference',
              58 => 'user-user-field_last_name',
              59 => 'user-user-field_location',
              60 => 'user-user-field_mail_drop',
              61 => 'user-user-field_middle_name',
              62 => 'user-user-field_my_parking_permits',
              63 => 'user-user-field_my_vehicles',
              64 => 'user-user-field_org',
              65 => 'user-user-field_payroll_type',
              66 => 'user-user-field_person_type',
              67 => 'user-user-field_rcomment',
              68 => 'user-user-field_state',
              69 => 'user-user-field_zip',
            ),
            'node' => 
            array (
              0 => 'automobile',
              1 => 'fee_rate_ct',
              2 => 'permit2',
            ),
            'rules_config' => 
            array (
              0 => 'rules_count_vehicles',
              1 => 'rules_count_vehicles_3',
              2 => 'rules_count_vehicles_init',
              3 => 'rules_parking_permit_email_confirmation',
              4 => 'rules_populate_employment_fields',
              5 => 'rules_retrieve_calculate_fees',
            ),
            'taxonomy' => 
            array (
              0 => 'permit_holder_category',
              1 => 'permit_holder_type',
              2 => 'permityear',
              3 => 'vehicle_color',
              4 => 'vehicle_make',
              5 => 'vehicle_style',
            ),
            'user_permission' => 
            array (
              0 => 'add terms in permityear',
              1 => 'create automobile content',
              2 => 'create field_fee_date_authorized',
              3 => 'create field_fee_deduction_amt',
              4 => 'create field_fee_first_payment_date',
              5 => 'create field_fee_ft_pt',
              6 => 'create field_fee_num_deductions',
              7 => 'create field_fee_pay_cycle',
              8 => 'create field_fee_total_amt',
              9 => 'create field_fee_vehicle_add_count',
              10 => 'create field_netid_ref',
              11 => 'create field_permit_holder_category_tax',
              12 => 'create field_permit_holder_type_er_tax',
              13 => 'create field_sticker_num_1',
              14 => 'create field_sticker_num_2',
              15 => 'create field_sticker_num_3',
              16 => 'create field_vehcolor_tax',
              17 => 'create field_vehmake_tax',
              18 => 'create field_vehmodel',
              19 => 'create field_vehstyle_tax',
              20 => 'create field_vehyear',
              21 => 'create permit2 content',
              22 => 'delete any automobile content',
              23 => 'delete any permit2 content',
              24 => 'delete own automobile content',
              25 => 'delete own permit2 content',
              26 => 'delete terms in permityear',
              27 => 'edit any automobile content',
              28 => 'edit any permit2 content',
              29 => 'edit field_fee_date_authorized',
              30 => 'edit field_fee_deduction_amt',
              31 => 'edit field_fee_first_payment_date',
              32 => 'edit field_fee_ft_pt',
              33 => 'edit field_fee_num_deductions',
              34 => 'edit field_fee_pay_cycle',
              35 => 'edit field_fee_total_amt',
              36 => 'edit field_fee_vehicle_add_count',
              37 => 'edit field_netid_ref',
              38 => 'edit field_permit_holder_category_tax',
              39 => 'edit field_permit_holder_type_er_tax',
              40 => 'edit field_sticker_num_1',
              41 => 'edit field_sticker_num_2',
              42 => 'edit field_sticker_num_3',
              43 => 'edit field_vehcolor_tax',
              44 => 'edit field_vehmake_tax',
              45 => 'edit field_vehmodel',
              46 => 'edit field_vehstyle_tax',
              47 => 'edit field_vehyear',
              48 => 'edit own automobile content',
              49 => 'edit own field_fee_date_authorized',
              50 => 'edit own field_fee_deduction_amt',
              51 => 'edit own field_fee_first_payment_date',
              52 => 'edit own field_fee_ft_pt',
              53 => 'edit own field_fee_num_deductions',
              54 => 'edit own field_fee_pay_cycle',
              55 => 'edit own field_fee_total_amt',
              56 => 'edit own field_fee_vehicle_add_count',
              57 => 'edit own field_netid_ref',
              58 => 'edit own field_permit_holder_category_tax',
              59 => 'edit own field_permit_holder_type_er_tax',
              60 => 'edit own field_sticker_num_1',
              61 => 'edit own field_sticker_num_2',
              62 => 'edit own field_sticker_num_3',
              63 => 'edit own field_vehcolor_tax',
              64 => 'edit own field_vehmake_tax',
              65 => 'edit own field_vehmodel',
              66 => 'edit own field_vehstyle_tax',
              67 => 'edit own field_vehyear',
              68 => 'edit own permit2 content',
              69 => 'edit read-only field_fee_date_authorized',
              70 => 'edit read-only field_fee_deduction_amt',
              71 => 'edit read-only field_fee_first_payment_date',
              72 => 'edit read-only field_fee_ft_pt',
              73 => 'edit read-only field_fee_num_deductions',
              74 => 'edit read-only field_fee_pay_cycle',
              75 => 'edit read-only field_fee_total_amt',
              76 => 'edit read-only field_fee_vehicle_add_count',
              77 => 'edit read-only field_netid_ref',
              78 => 'edit read-only field_permit_holder_category_tax',
              79 => 'edit read-only field_permit_holder_type_er_tax',
              80 => 'edit read-only field_sticker_num_1',
              81 => 'edit read-only field_sticker_num_2',
              82 => 'edit read-only field_sticker_num_3',
              83 => 'edit read-only field_vehcolor_tax',
              84 => 'edit read-only field_vehmake_tax',
              85 => 'edit read-only field_vehmodel',
              86 => 'edit read-only field_vehstyle_tax',
              87 => 'edit read-only field_vehyear',
              88 => 'edit terms in permityear',
              89 => 'view field_fee_date_authorized',
              90 => 'view field_fee_deduction_amt',
              91 => 'view field_fee_first_payment_date',
              92 => 'view field_fee_ft_pt',
              93 => 'view field_fee_num_deductions',
              94 => 'view field_fee_pay_cycle',
              95 => 'view field_fee_total_amt',
              96 => 'view field_fee_vehicle_add_count',
              97 => 'view field_netid_ref',
              98 => 'view field_permit_holder_category_tax',
              99 => 'view field_permit_holder_type_er_tax',
              100 => 'view field_sticker_num_1',
              101 => 'view field_sticker_num_2',
              102 => 'view field_sticker_num_3',
              103 => 'view field_vehcolor_tax',
              104 => 'view field_vehmake_tax',
              105 => 'view field_vehmodel',
              106 => 'view field_vehstyle_tax',
              107 => 'view field_vehyear',
              108 => 'view own field_fee_date_authorized',
              109 => 'view own field_fee_deduction_amt',
              110 => 'view own field_fee_first_payment_date',
              111 => 'view own field_fee_ft_pt',
              112 => 'view own field_fee_num_deductions',
              113 => 'view own field_fee_pay_cycle',
              114 => 'view own field_fee_total_amt',
              115 => 'view own field_fee_vehicle_add_count',
              116 => 'view own field_netid_ref',
              117 => 'view own field_permit_holder_category_tax',
              118 => 'view own field_permit_holder_type_er_tax',
              119 => 'view own field_sticker_num_1',
              120 => 'view own field_sticker_num_2',
              121 => 'view own field_sticker_num_3',
              122 => 'view own field_vehcolor_tax',
              123 => 'view own field_vehmake_tax',
              124 => 'view own field_vehmodel',
              125 => 'view own field_vehstyle_tax',
              126 => 'view own field_vehyear',
            ),
            'user_role' => 
            array (
              0 => 'Dispatcher',
              1 => 'PermitManager',
            ),
            'variable' => 
            array (
              0 => 'ant_automobile',
              1 => 'ant_fee_rate_ct',
              2 => 'ant_pattern_automobile',
              3 => 'ant_pattern_fee_rate_ct',
              4 => 'ant_pattern_permit2',
              5 => 'ant_permit2',
              6 => 'field_bundle_settings_node__automobile',
              7 => 'field_bundle_settings_node__fee_rate_ct',
              8 => 'field_bundle_settings_node__permit',
              9 => 'field_bundle_settings_node__permit2',
              10 => 'field_bundle_settings_user__user',
              11 => 'menu_options_automobile',
              12 => 'menu_options_fee_rate_ct',
              13 => 'menu_options_permit',
              14 => 'menu_options_permit2',
              15 => 'menu_parent_automobile',
              16 => 'menu_parent_fee_rate_ct',
              17 => 'menu_parent_permit',
              18 => 'menu_parent_permit2',
              19 => 'node_options_automobile',
              20 => 'node_options_fee_rate_ct',
              21 => 'node_options_permit',
              22 => 'node_options_permit2',
              23 => 'node_preview_automobile',
              24 => 'node_preview_fee_rate_ct',
              25 => 'node_preview_permit',
              26 => 'node_preview_permit2',
              27 => 'node_submitted_automobile',
              28 => 'node_submitted_fee_rate_ct',
              29 => 'node_submitted_permit',
              30 => 'node_submitted_permit2',
              31 => 'pathauto_node_automobile_pattern',
              32 => 'pathauto_node_permit2_pattern',
              33 => 'unique_field_comp_permit2',
              34 => 'unique_field_fields_permit2',
              35 => 'unique_field_scope_permit2',
              36 => 'unique_field_show_matches_permit2',
              37 => 'xmlsitemap_settings_node_automobile',
              38 => 'xmlsitemap_settings_node_fee_rate_ct',
              39 => 'xmlsitemap_settings_node_permit',
              40 => 'xmlsitemap_settings_node_permit2',
            ),
            'views_view' => 
            array (
              0 => 'fee_rate_table_view',
              1 => 'my_parking_permits',
              2 => 'my_permit_pricing_info',
              3 => 'my_vehicles',
              4 => 'pbl_extract',
              5 => 'permitbpl',
            ),
            'wsclient_service' => 
            array (
              0 => 'hr_person_parking_permit',
            ),
          ),
          'features_exclude' => 
          array (
            'dependencies' => 
            array (
              'ctools' => 'ctools',
              'options' => 'options',
            ),
            'variable' => 
            array (
              'pathauto_node_fee_rate_ct_pattern' => 'pathauto_node_fee_rate_ct_pattern',
              'pathauto_taxonomy_term_permit_holder_category_pattern' => 'pathauto_taxonomy_term_permit_holder_category_pattern',
              'pathauto_taxonomy_term_permit_holder_type_pattern' => 'pathauto_taxonomy_term_permit_holder_type_pattern',
              'pathauto_taxonomy_term_permityear_pattern' => 'pathauto_taxonomy_term_permityear_pattern',
              'pathauto_taxonomy_term_vehicle_color_pattern' => 'pathauto_taxonomy_term_vehicle_color_pattern',
              'pathauto_taxonomy_term_vehicle_make_pattern' => 'pathauto_taxonomy_term_vehicle_make_pattern',
              'pathauto_taxonomy_term_vehicle_style_pattern' => 'pathauto_taxonomy_term_vehicle_style_pattern',
            ),
          ),
          'description' => '',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => '',
        'version' => '7.x-1.0',
      ),
      'front_page_content_cards' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_features/front_page_2016/front_page_content_cards/front_page_content_cards.module',
        'basename' => 'front_page_content_cards.module',
        'name' => 'front_page_content_cards',
        'info' => 
        array (
          'name' => 'Front Page Content Cards',
          'description' => 'Featured Content for the front page',
          'core' => '7.x',
          'package' => 'Creighton Front Page',
          'version' => '7.x-1.0',
          'dependencies' => 
          array (
            0 => 'features',
            1 => 'link',
            2 => 'list',
            3 => 'media',
            4 => 'metatag',
            5 => 'node',
            6 => 'number',
            7 => 'strongarm',
            8 => 'text',
            9 => 'views',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'strongarm:strongarm:1',
              1 => 'views:views_default:3.0',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'field_base' => 
            array (
              0 => 'field_fp_fcc_color',
              1 => 'field_fp_fcc_color_side_body',
              2 => 'field_fp_fcc_color_side_headline',
              3 => 'field_fp_fcc_color_side_link',
              4 => 'field_fp_fcc_front_side',
              5 => 'field_fp_fcc_image',
              6 => 'field_fp_fcc_image_side_body',
              7 => 'field_fp_fcc_image_side_headline',
              8 => 'field_fp_fcc_order',
            ),
            'field_instance' => 
            array (
              0 => 'node-fp_featured_content_cards-field_fp_fcc_color',
              1 => 'node-fp_featured_content_cards-field_fp_fcc_color_side_body',
              2 => 'node-fp_featured_content_cards-field_fp_fcc_color_side_headline',
              3 => 'node-fp_featured_content_cards-field_fp_fcc_color_side_link',
              4 => 'node-fp_featured_content_cards-field_fp_fcc_front_side',
              5 => 'node-fp_featured_content_cards-field_fp_fcc_image',
              6 => 'node-fp_featured_content_cards-field_fp_fcc_image_side_body',
              7 => 'node-fp_featured_content_cards-field_fp_fcc_image_side_headline',
              8 => 'node-fp_featured_content_cards-field_fp_fcc_order',
            ),
            'node' => 
            array (
              0 => 'fp_featured_content_cards',
            ),
            'user_permission' => 
            array (
              0 => 'create fp_featured_content_cards content',
              1 => 'delete any fp_featured_content_cards content',
              2 => 'delete own fp_featured_content_cards content',
              3 => 'edit any fp_featured_content_cards content',
              4 => 'edit own fp_featured_content_cards content',
            ),
            'variable' => 
            array (
              0 => 'field_bundle_settings_node__fp_featured_content_cards',
              1 => 'menu_options_fp_featured_content_cards',
              2 => 'menu_parent_fp_featured_content_cards',
              3 => 'node_options_fp_featured_content_cards',
              4 => 'node_preview_fp_featured_content_cards',
              5 => 'node_submitted_fp_featured_content_cards',
              6 => 'pathauto_node_fp_featured_content_cards_pattern',
            ),
            'views_view' => 
            array (
              0 => 'fp_fcc_featured_content_card_gallery',
            ),
          ),
          'features_exclude' => 
          array (
            'dependencies' => 
            array (
              'ctools' => 'ctools',
              'image' => 'image',
              'options' => 'options',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => '',
        'version' => '7.x-1.0',
      ),
      'front_page_supporting_content' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_features/front_page_2016/front_page_supporting_content/front_page_supporting_content.module',
        'basename' => 'front_page_supporting_content.module',
        'name' => 'front_page_supporting_content',
        'info' => 
        array (
          'name' => 'Front Page Supporting Content',
          'description' => 'Installs the "FP Supporting Content" content type.',
          'core' => '7.x',
          'package' => 'Creighton Front Page',
          'version' => '7.x-1.0',
          'dependencies' => 
          array (
            0 => 'creighton_variables',
            1 => 'ctools',
            2 => 'features',
            3 => 'node',
            4 => 'strongarm',
            5 => 'text',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'strongarm:strongarm:1',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'field_instance' => 
            array (
              0 => 'node-fp_supporting_content-body',
            ),
            'node' => 
            array (
              0 => 'fp_supporting_content',
            ),
            'user_permission' => 
            array (
              0 => 'create fp_supporting_content content',
              1 => 'delete any fp_supporting_content content',
              2 => 'delete own fp_supporting_content content',
              3 => 'edit any fp_supporting_content content',
              4 => 'edit own fp_supporting_content content',
            ),
            'variable' => 
            array (
              0 => 'menu_options_fp_supporting_content',
              1 => 'menu_parent_fp_supporting_content',
              2 => 'node_options_fp_supporting_content',
              3 => 'node_preview_fp_supporting_content',
              4 => 'node_submitted_fp_supporting_content',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => '',
        'version' => '7.x-1.0',
      ),
      'front_page_video_gallery' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_features/front_page_2016/front_page_video_gallery/front_page_video_gallery.module',
        'basename' => 'front_page_video_gallery.module',
        'name' => 'front_page_video_gallery',
        'info' => 
        array (
          'name' => 'Front Page Video Gallery',
          'description' => 'Video Gallery for the Front',
          'core' => '7.x',
          'package' => 'Creighton Front Page',
          'version' => '7.x-1.0',
          'dependencies' => 
          array (
            0 => 'creighton_variables',
            1 => 'flexslider',
            2 => 'flexslider_picture',
            3 => 'flexslider_views',
            4 => 'media',
            5 => 'node',
            6 => 'panelizer',
            7 => 'text',
            8 => 'video_embed_field',
            9 => 'views',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'flexslider:flexslider_default_preset:1',
              1 => 'flexslider_picture:flexslider_picture_optionset:1',
              2 => 'strongarm:strongarm:1',
              3 => 'video_embed_field:default_video_embed_styles:1',
              4 => 'views:views_default:3.0',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'field_base' => 
            array (
              0 => 'field_image',
              1 => 'field_video',
            ),
            'field_instance' => 
            array (
              0 => 'node-front_page_video_gallery-body',
              1 => 'node-front_page_video_gallery-field_image',
              2 => 'node-front_page_video_gallery-field_video',
            ),
            'flexslider_optionset' => 
            array (
              0 => 'video_gallery_with_thumbnail_captions',
            ),
            'flexslider_picture_optionset' => 
            array (
              0 => 'video_gallery_with_thumbnail_captions',
            ),
            'image' => 
            array (
              0 => 'flexslider_video_preview',
            ),
            'node' => 
            array (
              0 => 'front_page_video_gallery',
            ),
            'user_permission' => 
            array (
              0 => 'create front_page_video_gallery content',
              1 => 'delete any front_page_video_gallery content',
              2 => 'delete own front_page_video_gallery content',
              3 => 'edit any front_page_video_gallery content',
              4 => 'edit own front_page_video_gallery content',
            ),
            'variable' => 
            array (
              0 => 'field_bundle_settings_node__front_page_video_gallery',
              1 => 'menu_options_front_page_video_gallery',
              2 => 'menu_parent_front_page_video_gallery',
              3 => 'node_options_front_page_video_gallery',
              4 => 'node_preview_front_page_video_gallery',
              5 => 'node_submitted_front_page_video_gallery',
              6 => 'pathauto_node_front_page_video_gallery_pattern',
            ),
            'vef_video_styles' => 
            array (
              0 => 'front_page_video_gallery',
            ),
            'views_view' => 
            array (
              0 => 'front_page_video_slide_show',
            ),
          ),
          'features_exclude' => 
          array (
            'dependencies' => 
            array (
              'ctools' => 'ctools',
              'features' => 'features',
              'image' => 'image',
              'strongarm' => 'strongarm',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => '',
        'version' => '7.x-1.0',
      ),
      'front_page_mini_panels_and_menus' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_features/front_page_2016/front_page_mini_panels_and_menus/front_page_mini_panels_and_menus.module',
        'basename' => 'front_page_mini_panels_and_menus.module',
        'name' => 'front_page_mini_panels_and_menus',
        'info' => 
        array (
          'name' => 'Front Page Mini Panels and Menus',
          'description' => 'captures all related frontpage 2016 mini panels and menus.',
          'core' => '7.x',
          'package' => 'Creighton Front Page',
          'version' => '7.x-1.0',
          'dependencies' => 
          array (
            0 => 'menu_icons',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'panels_mini:panels_default:1',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'menu_custom' => 
            array (
              0 => 'menu-9-schools-and-colleges',
              1 => 'menu-9-schools-and-colleges-col-',
              2 => 'menu-information-for',
              3 => 'menu-information-for-col-2',
              4 => 'menu-menu-icons',
              5 => 'menu-resources',
            ),
            'menu_links' => 
            array (
              0 => 'menu-9-schools-and-colleges-col-_school-of-dentistry:https://dentistry.creighton.edu',
              1 => 'menu-9-schools-and-colleges-col-_school-of-law:http://law.creighton.edu',
              2 => 'menu-9-schools-and-colleges-col-_school-of-medicine:https://medschool.creighton.edu/',
              3 => 'menu-9-schools-and-colleges-col-_school-of-pharmacy-and-health-professions:https://spahp.creighton.edu/',
              4 => 'menu-9-schools-and-colleges_college-of-arts-and-sciences:https://ccas.creighton.edu',
              5 => 'menu-9-schools-and-colleges_college-of-nursing:https://nursing.creighton.edu',
              6 => 'menu-9-schools-and-colleges_college-of-professional-studies:https://adultdegrees.creighton.edu',
              7 => 'menu-9-schools-and-colleges_graduate-school:https://gradschool.creighton.edu',
              8 => 'menu-9-schools-and-colleges_heider-college-of-business:https://business.creighton.edu',
              9 => 'menu-information-for-col-2_alumni-and-friends:https://alumni.creighton.edu/',
              10 => 'menu-information-for-col-2_donors:https://alumni.creighton.edu/give-back',
              11 => 'menu-information-for-col-2_faculty-and-staff:https://www.creighton.edu/faculty-staff',
              12 => 'menu-information-for-col-2_parents-and-visitors:https://www.creighton.edu/parents',
              13 => 'menu-information-for_adult-students:https://adultdegrees.creighton.edu',
              14 => 'menu-information-for_current-students:https://www.creighton.edu/current-students',
              15 => 'menu-information-for_future-students:https://www.creighton.edu/admissions',
              16 => 'menu-information-for_militaryveteran-students:http://www.creighton.edu/mil/',
              17 => 'menu-information-for_online-students:https://www.creighton.edu/online-students',
              18 => 'menu-menu-icons_campus-maps:http://www.creighton.edu/maps/',
              19 => 'menu-menu-icons_make-a-gift:https://securelb.imodules.com/s/1250/15/site/index.aspx?sid=1250&gid=1&pgid=1880&cid=4250',
              20 => 'menu-resources_blueline:https://blueline.instructure.com/',
              21 => 'menu-resources_bookstore:http://www.bkstr.com/creightonstore/home',
              22 => 'menu-resources_calendar:http://calendar.creighton.edu/',
              23 => 'menu-resources_directory:https://ami.creighton.edu/',
              24 => 'menu-resources_libraries:http://www.creighton.edu/libraries/',
              25 => 'menu-resources_media:http://www.creighton.edu/publicrelations/newscenter/',
              26 => 'menu-resources_nest:https://thenest.creighton.edu/PROD/twbkwbis.P_GenMenu?name=homepage',
              27 => 'menu-resources_office365:http://office365.creighton.edu/',
              28 => 'menu-resources_public-safety:https://www.creighton.edu/safety',
            ),
            'panels_mini' => 
            array (
              0 => 'first_menu_flyout',
              1 => 'floating_schools_colleges',
              2 => 'fullmenutoo',
            ),
          ),
          'features_exclude' => 
          array (
            'dependencies' => 
            array (
              'ctools' => 'ctools',
              'features' => 'features',
              'menu' => 'menu',
              'panels_mini' => 'panels_mini',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => '',
        'version' => '7.x-1.0',
      ),
      'hero_image_2016' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_features/front_page_2016/hero_image_2016/hero_image_2016.module',
        'basename' => 'hero_image_2016.module',
        'name' => 'hero_image_2016',
        'info' => 
        array (
          'name' => 'Hero Image 2016',
          'description' => 'Hero image for 2016 front page redesign',
          'core' => '7.x',
          'package' => 'Creighton Front Page',
          'version' => '7.x-1.0',
          'dependencies' => 
          array (
            0 => 'creighton_variables',
            1 => 'ctools',
            2 => 'features',
            3 => 'flexslider',
            4 => 'flexslider_example',
            5 => 'flexslider_views',
            6 => 'image',
            7 => 'link',
            8 => 'media',
            9 => 'number',
            10 => 'picture',
            11 => 'single_image',
            12 => 'strongarm',
            13 => 'text',
            14 => 'views',
          ),
          'features' => 
          array (
            'breakpoint_group' => 
            array (
              0 => 'front_page_slider_2016',
              1 => 'social_media_cards',
            ),
            'ctools' => 
            array (
              0 => 'breakpoints:default_breakpoint_group:1',
              1 => 'breakpoints:default_breakpoints:1',
              2 => 'flexslider:flexslider_default_preset:1',
              3 => 'flexslider_picture:flexslider_picture_optionset:1',
              4 => 'picture:default_picture_mapping:1',
              5 => 'strongarm:strongarm:1',
              6 => 'views:views_default:3.0',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'field_base' => 
            array (
              0 => 'field_image_slider',
              1 => 'field_slide_order',
              2 => 'field_slider_link',
              3 => 'field_video_embed',
            ),
            'field_instance' => 
            array (
              0 => 'node-slider_content-body',
              1 => 'node-slider_content-field_image_slider',
              2 => 'node-slider_content-field_slide_order',
              3 => 'node-slider_content-field_slider_link',
              4 => 'node-slider_content-field_video_embed',
            ),
            'flexslider_optionset' => 
            array (
              0 => 'front_page_slider',
              1 => 'testing_slider',
            ),
            'flexslider_picture_optionset' => 
            array (
              0 => 'front_page_slider',
            ),
            'image' => 
            array (
              0 => 'front_page_slider_2016',
              1 => 'front_page_slider_2016_custom_user_max_width_20em_1x',
              2 => 'front_page_slider_2016_custom_user_max_width_20em_2x',
              3 => 'front_page_slider_2016_custom_user_max_width_30em_1x',
              4 => 'front_page_slider_2016_custom_user_max_width_30em_2x',
              5 => 'front_page_slider_2016_custom_user_max_width_35_4375em_1x',
              6 => 'front_page_slider_2016_custom_user_max_width_35_4375em_2x',
              7 => 'front_page_slider_2016_custom_user_max_width_40em_1x',
              8 => 'front_page_slider_2016_custom_user_max_width_40em_2x',
              9 => 'front_page_slider_2016_custom_user_max_width_42_5em_1x',
              10 => 'front_page_slider_2016_custom_user_max_width_42_5em_2x',
              11 => 'front_page_slider_2016_custom_user_max_width_50em_1x',
              12 => 'front_page_slider_2016_custom_user_max_width_50em_2x',
              13 => 'front_page_slider_2016_custom_user_max_width_56_25em_1x',
              14 => 'front_page_slider_2016_custom_user_max_width_56_25em_2x',
              15 => 'front_page_slider_2016_custom_user_min_width_56_26em_1x',
              16 => 'front_page_slider_2016_custom_user_min_width_56_26em_2x',
              17 => 'front_page_slider_2016_custom_user_min_width_78_125em_1x',
              18 => 'front_page_slider_2016_custom_user_min_width_78_125em_2x',
              19 => 'social_media_cards',
              20 => 'social_media_cards_custom_user_max_width_56_25em_1_5x',
              21 => 'social_media_cards_custom_user_max_width_56_25em_1x',
              22 => 'social_media_cards_custom_user_max_width_56_25em_2x',
              23 => 'social_media_cards_custom_user_min_width_56_26em_1_5x',
              24 => 'social_media_cards_custom_user_min_width_56_26em_1x',
              25 => 'social_media_cards_custom_user_min_width_56_26em_2x',
            ),
            'node' => 
            array (
              0 => 'slider_content',
            ),
            'picture_mapping' => 
            array (
              0 => 'front_page_slider_2016',
              1 => 'social_media_cards',
            ),
            'rules_config' => 
            array (
              0 => 'rules_image_engine',
            ),
            'variable' => 
            array (
              0 => 'pathauto_node_slider_content_pattern',
            ),
            'views_view' => 
            array (
              0 => 'homepage_slider',
              1 => 'image_engine',
            ),
          ),
          'features_exclude' => 
          array (
            'dependencies' => 
            array (
              'entity' => 'entity',
              'rules' => 'rules',
              'creighton_front_page_2015' => 'creighton_front_page_2015',
              'creighton_media' => 'creighton_media',
              'flexslider_picture' => 'flexslider_picture',
            ),
            'field_base' => 
            array (
              'body' => 'body',
            ),
            'variable' => 
            array (
              'comment_anonymous_slider_content' => 'comment_anonymous_slider_content',
              'comment_default_mode_slider_content' => 'comment_default_mode_slider_content',
              'comment_default_per_page_slider_content' => 'comment_default_per_page_slider_content',
              'comment_form_location_slider_content' => 'comment_form_location_slider_content',
              'comment_preview_slider_content' => 'comment_preview_slider_content',
              'comment_slider_content' => 'comment_slider_content',
              'comment_subject_field_slider_content' => 'comment_subject_field_slider_content',
              'field_bundle_settings_node__slider_content' => 'field_bundle_settings_node__slider_content',
              'menu_options_slider_content' => 'menu_options_slider_content',
              'menu_parent_slider_content' => 'menu_parent_slider_content',
              'node_options_slider_content' => 'node_options_slider_content',
              'node_preview_slider_content' => 'node_preview_slider_content',
              'node_submitted_slider_content' => 'node_submitted_slider_content',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => '',
        'version' => '7.x-1.0',
      ),
      'front_page_social_media_cards' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_features/front_page_2016/front_page_social_media_cards/front_page_social_media_cards.module',
        'basename' => 'front_page_social_media_cards.module',
        'name' => 'front_page_social_media_cards',
        'info' => 
        array (
          'name' => 'Front Page Social Media Cards',
          'description' => 'Social media cards for the front page',
          'core' => '7.x',
          'package' => 'Creighton Front Page',
          'version' => '7.x-1.0',
          'dependencies' => 
          array (
            0 => 'features',
            1 => 'link',
            2 => 'list',
            3 => 'media',
            4 => 'metatag',
            5 => 'node',
            6 => 'number',
            7 => 'strongarm',
            8 => 'text',
            9 => 'views',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'strongarm:strongarm:1',
              1 => 'views:views_default:3.0',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'field_base' => 
            array (
              0 => 'field_fp_smc_body',
              1 => 'field_fp_smc_color',
              2 => 'field_fp_smc_image',
              3 => 'field_fp_smc_link',
              4 => 'field_fp_smc_order',
              5 => 'field_fp_smc_social_media',
            ),
            'field_instance' => 
            array (
              0 => 'node-fp_social_media_cards-field_fp_smc_body',
              1 => 'node-fp_social_media_cards-field_fp_smc_color',
              2 => 'node-fp_social_media_cards-field_fp_smc_image',
              3 => 'node-fp_social_media_cards-field_fp_smc_link',
              4 => 'node-fp_social_media_cards-field_fp_smc_order',
              5 => 'node-fp_social_media_cards-field_fp_smc_social_media',
            ),
            'node' => 
            array (
              0 => 'fp_social_media_cards',
            ),
            'user_permission' => 
            array (
              0 => 'create fp_social_media_cards content',
              1 => 'delete any fp_social_media_cards content',
              2 => 'delete own fp_social_media_cards content',
              3 => 'edit any fp_social_media_cards content',
              4 => 'edit own fp_social_media_cards content',
            ),
            'variable' => 
            array (
              0 => 'field_bundle_settings_node__fp_social_media_cards',
              1 => 'menu_options_fp_social_media_cards',
              2 => 'menu_parent_fp_social_media_cards',
              3 => 'node_options_fp_social_media_cards',
              4 => 'node_preview_fp_social_media_cards',
              5 => 'node_submitted_fp_social_media_cards',
              6 => 'pathauto_node_fp_social_media_cards_pattern',
            ),
            'views_view' => 
            array (
              0 => 'fp_social_media_card_gallery',
            ),
          ),
          'features_exclude' => 
          array (
            'dependencies' => 
            array (
              'ctools' => 'ctools',
              'image' => 'image',
              'options' => 'options',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => '',
        'version' => '7.x-1.0',
      ),
      'robots_global_config' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_features/robots_global_config/robots_global_config.module',
        'basename' => 'robots_global_config.module',
        'name' => 'robots_global_config',
        'info' => 
        array (
          'name' => 'Robots Global Config',
          'description' => 'Basic Configuration for all sites robot.txt files.',
          'core' => '7.x',
          'package' => 'Creighton Core Settings',
          'version' => '7.x-1.0',
          'project' => 'robots_global_config',
          'dependencies' => 
          array (
            0 => 'ctools',
            1 => 'features',
            2 => 'robotstxt',
            3 => 'strongarm',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'strongarm:strongarm:1',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'user_permission' => 
            array (
              0 => 'administer robots.txt',
            ),
            'variable' => 
            array (
              0 => 'robotstxt',
            ),
          ),
          'mtime' => '1444145481',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'robots_global_config',
        'version' => '7.x-1.0',
      ),
      'redirect_manager_feature' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_features/redirect_manager_feature/redirect_manager_feature.module',
        'basename' => 'redirect_manager_feature.module',
        'name' => 'redirect_manager_feature',
        'info' => 
        array (
          'name' => 'Redirect Manager',
          'description' => 'Feature containing content type, view, permissions/role, and taxonomy for Redirect Manager app',
          'core' => '7.x',
          'package' => 'Creighton Apps',
          'version' => '7.x-1.0',
          'dependencies' => 
          array (
            0 => 'draggableviews',
            1 => 'features',
            2 => 'list',
            3 => 'multiple_selects',
            4 => 'node',
            5 => 'redirect_manager',
            6 => 'strongarm',
            7 => 'taxonomy_access_fix',
            8 => 'text',
            9 => 'views',
            10 => 'vppr',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'strongarm:strongarm:1',
              1 => 'views:views_default:3.0',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'field_base' => 
            array (
              0 => 'field_redirect_manager_case_ins',
              1 => 'field_redirect_manager_dest',
              2 => 'field_redirect_manager_host',
              3 => 'field_redirect_manager_url',
              4 => 'field_redirect_manager_wildcard',
            ),
            'field_instance' => 
            array (
              0 => 'node-redirect_manager_url_redirect-field_redirect_manager_case_ins',
              1 => 'node-redirect_manager_url_redirect-field_redirect_manager_dest',
              2 => 'node-redirect_manager_url_redirect-field_redirect_manager_host',
              3 => 'node-redirect_manager_url_redirect-field_redirect_manager_url',
              4 => 'node-redirect_manager_url_redirect-field_redirect_manager_wildcard',
            ),
            'node' => 
            array (
              0 => 'redirect_manager_url_redirect',
            ),
            'taxonomy' => 
            array (
              0 => 'redirect_manager_host',
            ),
            'user_permission' => 
            array (
              0 => 'access draggableviews',
              1 => 'add terms in redirect_manager_host',
              2 => 'administer redirect manager',
              3 => 'administer redirect_manager_host vocabulary terms',
              4 => 'create redirect_manager_url_redirect content',
              5 => 'delete any redirect_manager_url_redirect content',
              6 => 'delete own redirect_manager_url_redirect content',
              7 => 'delete terms in redirect_manager_host',
              8 => 'edit any redirect_manager_url_redirect content',
              9 => 'edit own redirect_manager_url_redirect content',
              10 => 'edit terms in redirect_manager_host',
            ),
            'user_role' => 
            array (
              0 => 'redirect manager',
            ),
            'variable' => 
            array (
              0 => 'ant_redirect_manager_url_redirect',
              1 => 'field_bundle_settings_node__redirect_manager_url_redirect',
              2 => 'menu_options_redirect_manager_url_redirect',
              3 => 'menu_parent_redirect_manager_url_redirect',
              4 => 'node_options_redirect_manager_url_redirect',
              5 => 'node_preview_redirect_manager_url_redirect',
              6 => 'node_submitted_redirect_manager_url_redirect',
              7 => 'pathauto_node_redirect_manager_url_redirect_pattern',
              8 => 'pathauto_taxonomy_term_redirect_manager_host_pattern',
              9 => 'site_frontpage',
              10 => 'subsite_top_level_site',
            ),
            'views_view' => 
            array (
              0 => 'redirect_manager',
            ),
          ),
          'features_exclude' => 
          array (
            'dependencies' => 
            array (
              'ctools' => 'ctools',
              'options' => 'options',
              'taxonomy' => 'taxonomy',
            ),
            'variable' => 
            array (
              'xmlsitemap_settings_node_redirect_manager_url_redirect' => 'xmlsitemap_settings_node_redirect_manager_url_redirect',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => '',
        'version' => '7.x-1.0',
      ),
      'cu_accordion' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_features/cu_accordion/cu_accordion.module',
        'basename' => 'cu_accordion.module',
        'name' => 'cu_accordion',
        'info' => 
        array (
          'name' => 'Accordion',
          'description' => 'Create an accordion for Content Page Content Type',
          'core' => '7.x',
          'package' => 'Creighton',
          'version' => '7.x-1.0',
          'project' => 'cu_accordion',
          'dependencies' => 
          array (
            0 => 'bean_admin_ui',
            1 => 'features',
            2 => 'field_collection',
            3 => 'menu',
            4 => 'metatag',
            5 => 'node',
            6 => 'panelizer',
            7 => 'strongarm',
            8 => 'text',
          ),
          'features' => 
          array (
            'bean_type' => 
            array (
              0 => 'page_title',
            ),
            'ctools' => 
            array (
              0 => 'bean_admin_ui:bean:5',
              1 => 'strongarm:strongarm:1',
              2 => 'views:views_default:3.0',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'field_base' => 
            array (
              0 => 'field_accordion_col_one',
              1 => 'field_accordion_col_three',
              2 => 'field_accordion_col_two',
              3 => 'field_accordion_expand_text',
              4 => 'field_block_page_title',
              5 => 'field_content_supp_accordion',
              6 => 'field_general_accordion_col_one',
              7 => 'field_general_accordion_col_thre',
              8 => 'field_general_accordion_col_two',
              9 => 'field_general_accordion_rows',
              10 => 'field_general_accordion_text',
            ),
            'field_instance' => 
            array (
              0 => 'bean-page_title-field_block_page_title',
              1 => 'field_collection_item-field_general_accordion_rows-field_accordion_col_one',
              2 => 'field_collection_item-field_general_accordion_rows-field_accordion_col_three',
              3 => 'field_collection_item-field_general_accordion_rows-field_accordion_col_two',
              4 => 'field_collection_item-field_general_accordion_rows-field_accordion_expand_text',
              5 => 'node-accordion_content-field_general_accordion_col_one',
              6 => 'node-accordion_content-field_general_accordion_col_thre',
              7 => 'node-accordion_content-field_general_accordion_col_two',
              8 => 'node-accordion_content-field_general_accordion_rows',
              9 => 'node-accordion_content-field_general_accordion_text',
              10 => 'node-content_page-field_content_supp_accordion',
            ),
            'node' => 
            array (
              0 => 'accordion_content',
            ),
            'user_permission' => 
            array (
              0 => 'create accordion_content content',
              1 => 'create any page_title bean',
              2 => 'delete any accordion_content content',
              3 => 'delete any page_title bean',
              4 => 'delete own accordion_content content',
              5 => 'edit any accordion_content content',
              6 => 'edit any page_title bean',
              7 => 'edit own accordion_content content',
              8 => 'view any page_title bean',
            ),
            'variable' => 
            array (
              0 => 'field_bundle_settings_bean__page_title',
              1 => 'field_bundle_settings_node__accordion_content',
              2 => 'menu_options_accordion_content',
              3 => 'menu_parent_accordion_content',
              4 => 'node_options_accordion_content',
              5 => 'node_preview_accordion_content',
              6 => 'node_submitted_accordion_content',
            ),
          ),
          'features_exclude' => 
          array (
            'dependencies' => 
            array (
              'bean' => 'bean',
              'ctools' => 'ctools',
              'entityreference' => 'entityreference',
              'options' => 'options',
            ),
            'variable' => 
            array (
              'menu_options_course_offered' => 'menu_options_course_offered',
              'menu_parent_course_offered' => 'menu_parent_course_offered',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'cu_accordion',
        'version' => '7.x-1.0',
      ),
      'baseball_stats' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_features/baseball_stats/baseball_stats.module',
        'basename' => 'baseball_stats.module',
        'name' => 'baseball_stats',
        'info' => 
        array (
          'name' => 'Baseball Stats',
          'description' => 'Feature containing content types, views, panels, and taxonomies for Baseball Stats app',
          'core' => '7.x',
          'package' => 'Creighton Apps',
          'version' => '7.x-1.0',
          'dependencies' => 
          array (
            0 => 'computed_field',
            1 => 'ctools',
            2 => 'date',
            3 => 'entityreference',
            4 => 'eva',
            5 => 'features',
            6 => 'features_date',
            7 => 'field_collection',
            8 => 'field_group',
            9 => 'menu',
            10 => 'node',
            11 => 'number',
            12 => 'options',
            13 => 'page_manager',
            14 => 'panels',
            15 => 'print',
            16 => 'print_pdf',
            17 => 'print_pdf_mpdf',
            18 => 'print_ui',
            19 => 'role_delegation',
            20 => 'strongarm',
            21 => 'taxonomy',
            22 => 'taxonomy_access_fix',
            23 => 'text',
            24 => 'views',
            25 => 'views_content',
            26 => 'vppr',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'field_group:field_group:1',
              1 => 'page_manager:pages_default:1',
              2 => 'panels:layouts:1',
              3 => 'strongarm:strongarm:1',
              4 => 'views:views_default:3.0',
            ),
            'custom_date_formats' => 
            array (
              0 => 'D, m/d/Y - g:ia',
            ),
            'date_format_types' => 
            array (
              0 => 'medium_12hr',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'field_base' => 
            array (
              0 => 'field_away_score',
              1 => 'field_away_team',
              2 => 'field_batter',
              3 => 'field_conference',
              4 => 'field_game',
              5 => 'field_game_date',
              6 => 'field_handedness',
              7 => 'field_home_score',
              8 => 'field_home_team',
              9 => 'field_long_name',
              10 => 'field_long_name_pa',
              11 => 'field_long_name_pt',
              12 => 'field_opponent',
              13 => 'field_pitch',
              14 => 'field_pitch_result',
              15 => 'field_pitch_type',
              16 => 'field_pitcher',
              17 => 'field_player_first_name',
              18 => 'field_player_last_name',
              19 => 'field_position',
              20 => 'field_result',
              21 => 'field_season',
              22 => 'field_team',
              23 => 'field_zone',
            ),
            'field_group' => 
            array (
              0 => 'group_away|node|game|form',
              1 => 'group_home|node|game|form',
              2 => 'group_player_name|node|player|form',
            ),
            'field_instance' => 
            array (
              0 => 'field_collection_item-field_pitch-field_pitch_result',
              1 => 'field_collection_item-field_pitch-field_pitch_type',
              2 => 'field_collection_item-field_pitch-field_zone',
              3 => 'node-game-field_away_score',
              4 => 'node-game-field_away_team',
              5 => 'node-game-field_game_date',
              6 => 'node-game-field_home_score',
              7 => 'node-game-field_home_team',
              8 => 'node-game-field_opponent',
              9 => 'node-plate_appearance-field_batter',
              10 => 'node-plate_appearance-field_game',
              11 => 'node-plate_appearance-field_pitch',
              12 => 'node-plate_appearance-field_pitcher',
              13 => 'node-plate_appearance-field_result',
              14 => 'node-player-field_handedness',
              15 => 'node-player-field_player_first_name',
              16 => 'node-player-field_player_last_name',
              17 => 'node-player-field_position',
              18 => 'node-player-field_season',
              19 => 'node-player-field_team',
              20 => 'node-team-field_conference',
              21 => 'taxonomy_term-pitch_result-field_long_name',
              22 => 'taxonomy_term-pitch_type-field_long_name_pt',
              23 => 'taxonomy_term-plate_appearance_result-field_long_name_pa',
            ),
            'menu_custom' => 
            array (
              0 => 'main-menu',
            ),
            'menu_links' => 
            array (
              0 => 'main-menu_add-game:node/add/game',
              1 => 'main-menu_add-player:node/add/player',
              2 => 'main-menu_add-team:node/add/team',
              3 => 'main-menu_all-teams:all-teams',
              4 => 'main-menu_manage-terms:admin/structure/taxonomy',
              5 => 'main-menu_manage-users:manage-users',
              6 => 'main-menu_view-all-games:game-list',
            ),
            'node' => 
            array (
              0 => 'game',
              1 => 'plate_appearance',
              2 => 'player',
              3 => 'team',
            ),
            'page_manager_pages' => 
            array (
              0 => 'player_stats_panel',
              1 => 'player_stats_pitching_panel',
            ),
            'panels_layout' => 
            array (
              0 => 'baseball_grid',
            ),
            'taxonomy' => 
            array (
              0 => 'conference',
              1 => 'handedness',
              2 => 'pitch_result',
              3 => 'pitch_type',
              4 => 'plate_appearance_result',
              5 => 'position',
              6 => 'season',
              7 => 'zone_number',
            ),
            'user_permission' => 
            array (
              0 => 'access PDF version',
              1 => 'add terms in conference',
              2 => 'add terms in handedness',
              3 => 'add terms in pitch_result',
              4 => 'add terms in pitch_type',
              5 => 'add terms in plate_appearance_result',
              6 => 'add terms in position',
              7 => 'add terms in season',
              8 => 'add terms in zone_number',
              9 => 'administer conference vocabulary terms',
              10 => 'administer handedness vocabulary terms',
              11 => 'administer pitch_result vocabulary terms',
              12 => 'administer pitch_type vocabulary terms',
              13 => 'administer plate_appearance_result vocabulary terms',
              14 => 'administer position vocabulary terms',
              15 => 'administer season vocabulary terms',
              16 => 'administer zone_number vocabulary terms',
              17 => 'assign stats manager role',
              18 => 'create game content',
              19 => 'create plate_appearance content',
              20 => 'create player content',
              21 => 'create team content',
              22 => 'delete any game content',
              23 => 'delete any plate_appearance content',
              24 => 'delete any player content',
              25 => 'delete any team content',
              26 => 'delete own game content',
              27 => 'delete own plate_appearance content',
              28 => 'delete own player content',
              29 => 'delete own team content',
              30 => 'delete terms in conference',
              31 => 'delete terms in handedness',
              32 => 'delete terms in pitch_result',
              33 => 'delete terms in pitch_type',
              34 => 'delete terms in plate_appearance_result',
              35 => 'delete terms in position',
              36 => 'delete terms in season',
              37 => 'delete terms in zone_number',
              38 => 'edit any game content',
              39 => 'edit any plate_appearance content',
              40 => 'edit any player content',
              41 => 'edit any team content',
              42 => 'edit own game content',
              43 => 'edit own plate_appearance content',
              44 => 'edit own player content',
              45 => 'edit own team content',
              46 => 'edit terms in conference',
              47 => 'edit terms in handedness',
              48 => 'edit terms in pitch_result',
              49 => 'edit terms in pitch_type',
              50 => 'edit terms in plate_appearance_result',
              51 => 'edit terms in position',
              52 => 'edit terms in season',
              53 => 'edit terms in zone_number',
            ),
            'user_role' => 
            array (
              0 => 'stats manager',
            ),
            'variable' => 
            array (
              0 => 'date_format_medium_12hr',
              1 => 'field_bundle_settings_node__game',
              2 => 'field_bundle_settings_node__plate_appearance',
              3 => 'field_bundle_settings_node__player',
              4 => 'field_bundle_settings_node__team',
              5 => 'menu_options_game',
              6 => 'menu_options_plate_appearance',
              7 => 'menu_options_player',
              8 => 'menu_options_team',
              9 => 'menu_parent_game',
              10 => 'menu_parent_plate_appearance',
              11 => 'menu_parent_player',
              12 => 'menu_parent_team',
              13 => 'node_options_game',
              14 => 'node_options_plate_appearance',
              15 => 'node_options_player',
              16 => 'node_options_team',
              17 => 'node_preview_game',
              18 => 'node_preview_plate_appearance',
              19 => 'node_preview_player',
              20 => 'node_preview_team',
              21 => 'node_submitted_game',
              22 => 'node_submitted_plate_appearance',
              23 => 'node_submitted_player',
              24 => 'node_submitted_team',
              25 => 'pathauto_node_game_pattern',
              26 => 'pathauto_node_plate_appearance_pattern',
              27 => 'pathauto_node_player_pattern',
              28 => 'pathauto_node_team_pattern',
              29 => 'pathauto_taxonomy_term_conference_pattern',
              30 => 'pathauto_taxonomy_term_handedness_pattern',
              31 => 'pathauto_taxonomy_term_pitch_result_pattern',
              32 => 'pathauto_taxonomy_term_pitch_type_pattern',
              33 => 'pathauto_taxonomy_term_plate_appearance_result_pattern',
              34 => 'pathauto_taxonomy_term_position_pattern',
              35 => 'pathauto_taxonomy_term_zone_number_pattern',
              36 => 'print_css',
              37 => 'print_footer_options',
              38 => 'print_keep_theme_css',
              39 => 'print_logo_options',
              40 => 'print_newwindow',
              41 => 'print_pdf_content_disposition',
              42 => 'print_pdf_link_text_enabled',
              43 => 'print_pdf_link_use_alias',
              44 => 'print_pdf_show_link',
              45 => 'print_pdf_sys_link_pages',
              46 => 'xmlsitemap_settings_node_game',
              47 => 'xmlsitemap_settings_node_plate_appearance',
              48 => 'xmlsitemap_settings_node_player',
              49 => 'xmlsitemap_settings_node_team',
            ),
            'views_view' => 
            array (
              0 => 'all_players',
              1 => 'all_teams',
              2 => 'game_entity_reference_view',
              3 => 'game_list',
              4 => 'game_view',
              5 => 'manage_users',
              6 => 'player_entity_reference_view',
              7 => 'player_stats',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => '',
        'version' => '7.x-1.0',
      ),
      'data_export' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_features/data_export/data_export.module',
        'basename' => 'data_export.module',
        'name' => 'data_export',
        'info' => 
        array (
          'name' => 'Data Export',
          'description' => 'Provides Data Export for Funnelback search.',
          'core' => '7.x',
          'package' => 'Creighton Optional Packages',
          'version' => '7.x-1.0',
          'dependencies' => 
          array (
            0 => 'panels',
            1 => 'views',
            2 => 'views_data_export',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'views:views_default:3.0',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'views_view' => 
            array (
              0 => 'events_views_xml_export',
              1 => 'news_gm_2012_data_export',
            ),
          ),
          'features_exclude' => 
          array (
            'dependencies' => 
            array (
              'ctools' => 'ctools',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => '',
        'version' => '7.x-1.0',
      ),
      'intercollege_transfer_workflow' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_features/intercollege_transfer_workflow/intercollege_transfer_workflow.module',
        'basename' => 'intercollege_transfer_workflow.module',
        'name' => 'intercollege_transfer_workflow',
        'info' => 
        array (
          'name' => 'Intercollege Transfer Workflow',
          'core' => '7.x',
          'package' => 'Creighton Apps',
          'version' => '7.x-1.0',
          'dependencies' => 
          array (
            0 => 'addressfield_tokens',
            1 => 'conditional_fields',
            2 => 'context',
            3 => 'editableviews',
            4 => 'features',
            5 => 'field_group',
            6 => 'field_permissions',
            7 => 'menu',
            8 => 'metatag',
            9 => 'mimemail',
            10 => 'panelizer',
            11 => 'panels',
            12 => 'print_ui',
            13 => 'rules_http_client',
            14 => 'services_views',
            15 => 'shib_auth',
            16 => 'strongarm',
            17 => 'views',
            18 => 'workflow_rules',
            19 => 'workflowfield',
            20 => 'wsclient',
            21 => 'wsclient_rest',
          ),
          'features' => 
          array (
            'Workflow' => 
            array (
              0 => 'intercollege_transfer',
            ),
            'conditional_fields' => 
            array (
              0 => 'node:intercollege_transfer',
            ),
            'context' => 
            array (
              0 => 'shiblogin',
              1 => 'workflow_menu_student',
            ),
            'ctools' => 
            array (
              0 => 'context:context:3',
              1 => 'field_group:field_group:1',
              2 => 'page_manager:pages_default:1',
              3 => 'panelizer:panelizer:1',
              4 => 'panels:layouts:1',
              5 => 'strongarm:strongarm:1',
              6 => 'views:views_default:3.0',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'field_base' => 
            array (
              0 => 'field_accepted_semester_year',
              1 => 'field_application_decision',
              2 => 'field_cumulative_gpa',
              3 => 'field_current_academic_dean',
              4 => 'field_current_advisor',
              5 => 'field_current_class',
              6 => 'field_current_college_autofill',
              7 => 'field_current_dean_name',
              8 => 'field_current_mailing_address',
              9 => 'field_current_major',
              10 => 'field_decline_reason',
              11 => 'field_deferred_til',
              12 => 'field_first_name',
              13 => 'field_future_academic_dean_name',
              14 => 'field_intended_major',
              15 => 'field_last_name',
              16 => 'field_netid',
              17 => 'field_netid_account',
              18 => 'field_reason_for_request',
              19 => 'field_signature',
              20 => 'field_transfer_college',
              21 => 'field_transfer_semester_year_sem',
              22 => 'field_workflow',
              23 => 'field_year',
            ),
            'field_group' => 
            array (
              0 => 'group_hidden|node|intercollege_transfer|form',
              1 => 'group_section_iii|node|intercollege_transfer|form',
              2 => 'group_section_ii|node|intercollege_transfer|form',
              3 => 'group_student_information|user|user|default',
              4 => 'group_student_information|user|user|form',
            ),
            'field_instance' => 
            array (
              0 => 'node-intercollege_transfer-field_accepted_semester_year',
              1 => 'node-intercollege_transfer-field_application_decision',
              2 => 'node-intercollege_transfer-field_cumulative_gpa',
              3 => 'node-intercollege_transfer-field_current_academic_dean',
              4 => 'node-intercollege_transfer-field_current_advisor',
              5 => 'node-intercollege_transfer-field_current_class',
              6 => 'node-intercollege_transfer-field_current_college_autofill',
              7 => 'node-intercollege_transfer-field_current_dean_name',
              8 => 'node-intercollege_transfer-field_current_mailing_address',
              9 => 'node-intercollege_transfer-field_current_major',
              10 => 'node-intercollege_transfer-field_decline_reason',
              11 => 'node-intercollege_transfer-field_deferred_til',
              12 => 'node-intercollege_transfer-field_first_name',
              13 => 'node-intercollege_transfer-field_future_academic_dean_name',
              14 => 'node-intercollege_transfer-field_intended_major',
              15 => 'node-intercollege_transfer-field_last_name',
              16 => 'node-intercollege_transfer-field_netid',
              17 => 'node-intercollege_transfer-field_reason_for_request',
              18 => 'node-intercollege_transfer-field_signature',
              19 => 'node-intercollege_transfer-field_transfer_college',
              20 => 'node-intercollege_transfer-field_transfer_semester_year_sem',
              21 => 'node-intercollege_transfer-field_workflow',
              22 => 'node-intercollege_transfer-field_year',
              23 => 'user-user-field_cumulative_gpa',
              24 => 'user-user-field_current_advisor',
              25 => 'user-user-field_current_class',
              26 => 'user-user-field_current_college_autofill',
              27 => 'user-user-field_current_mailing_address',
              28 => 'user-user-field_current_major',
              29 => 'user-user-field_first_name',
              30 => 'user-user-field_last_name',
              31 => 'user-user-field_netid_account',
            ),
            'menu_custom' => 
            array (
              0 => 'menu-workflow',
            ),
            'menu_links' => 
            array (
              0 => 'menu-workflow_create-ict-transfer:node/add/intercollege-transfer',
              1 => 'menu-workflow_logout:user/logout',
              2 => 'menu-workflow_myaccount:user',
            ),
            'node' => 
            array (
              0 => 'intercollege_transfer',
            ),
            'page_manager_handlers' => 
            array (
              0 => 'user_view__panel_context_37152613-6628-49b0-99df-a8c6c337c281',
            ),
            'page_manager_pages' => 
            array (
              0 => 'business_dean',
              1 => 'ccas_dean',
              2 => 'ccd',
              3 => 'cfd',
              4 => 'cps_dean',
              5 => 'ict',
              6 => 'ict_confirmation_screen',
              7 => 'nursing_dean',
              8 => 'spahp_dean',
            ),
            'panelizer_defaults' => 
            array (
              0 => 'node:intercollege_transfer:default:default',
            ),
            'panels_layout' => 
            array (
              0 => 'my_creighton',
              1 => 'mycreighton',
            ),
            'rules_config' => 
            array (
              0 => 'rules_application_decision_accepted',
              1 => 'rules_application_decision_defered',
              2 => 'rules_application_decision_denied',
              3 => 'rules_application_withdrawn',
              4 => 'rules_application_withdrawn_2',
              5 => 'rules_banner_student_info',
              6 => 'rules_current_dean_approval',
              7 => 'rules_current_dean_to_college_nursing',
              8 => 'rules_current_dean_to_college_of_arts_and_sciences',
              9 => 'rules_current_dean_to_college_of_professional_studies',
              10 => 'rules_current_dean_to_heider_college_of_business',
              11 => 'rules_current_dean_to_spahp',
              12 => 'rules_new_ict_email_current_ccas',
              13 => 'rules_new_ict_email_current_college_of_nursing',
              14 => 'rules_new_ict_email_current_college_of_professional_studies',
              15 => 'rules_new_ict_email_current_heider_college_of_business',
              16 => 'rules_new_ict_email_current_school_of_pharmacy_and_health_profes',
              17 => 'rules_updated_workflow_state_email',
            ),
            'user_permission' => 
            array (
              0 => 'access print',
              1 => 'administer panelizer node intercollege_transfer defaults',
              2 => 'administer print',
              3 => 'create field_accepted_semester_year',
              4 => 'create field_application_decision',
              5 => 'create field_cumulative_gpa',
              6 => 'create field_current_academic_dean',
              7 => 'create field_current_advisor',
              8 => 'create field_current_class',
              9 => 'create field_current_college_autofill',
              10 => 'create field_current_dean_name',
              11 => 'create field_current_mailing_address',
              12 => 'create field_current_major',
              13 => 'create field_decline_reason',
              14 => 'create field_deferred_til',
              15 => 'create field_first_name',
              16 => 'create field_future_academic_dean_name',
              17 => 'create field_last_name',
              18 => 'create field_netid',
              19 => 'create field_netid_account',
              20 => 'create intercollege_transfer content',
              21 => 'delete any intercollege_transfer content',
              22 => 'delete own intercollege_transfer content',
              23 => 'edit any intercollege_transfer content',
              24 => 'edit field_accepted_semester_year',
              25 => 'edit field_application_decision',
              26 => 'edit field_cumulative_gpa',
              27 => 'edit field_current_academic_dean',
              28 => 'edit field_current_advisor',
              29 => 'edit field_current_class',
              30 => 'edit field_current_college_autofill',
              31 => 'edit field_current_dean_name',
              32 => 'edit field_current_mailing_address',
              33 => 'edit field_current_major',
              34 => 'edit field_decline_reason',
              35 => 'edit field_deferred_til',
              36 => 'edit field_first_name',
              37 => 'edit field_future_academic_dean_name',
              38 => 'edit field_last_name',
              39 => 'edit field_netid',
              40 => 'edit field_netid_account',
              41 => 'edit own field_accepted_semester_year',
              42 => 'edit own field_application_decision',
              43 => 'edit own field_cumulative_gpa',
              44 => 'edit own field_current_academic_dean',
              45 => 'edit own field_current_advisor',
              46 => 'edit own field_current_class',
              47 => 'edit own field_current_college_autofill',
              48 => 'edit own field_current_dean_name',
              49 => 'edit own field_current_mailing_address',
              50 => 'edit own field_current_major',
              51 => 'edit own field_decline_reason',
              52 => 'edit own field_deferred_til',
              53 => 'edit own field_first_name',
              54 => 'edit own field_future_academic_dean_name',
              55 => 'edit own field_last_name',
              56 => 'edit own field_netid',
              57 => 'edit own field_netid_account',
              58 => 'edit own intercollege_transfer content',
              59 => 'node-specific print configuration',
              60 => 'view field_accepted_semester_year',
              61 => 'view field_application_decision',
              62 => 'view field_cumulative_gpa',
              63 => 'view field_current_academic_dean',
              64 => 'view field_current_advisor',
              65 => 'view field_current_class',
              66 => 'view field_current_college_autofill',
              67 => 'view field_current_dean_name',
              68 => 'view field_current_mailing_address',
              69 => 'view field_current_major',
              70 => 'view field_decline_reason',
              71 => 'view field_deferred_til',
              72 => 'view field_first_name',
              73 => 'view field_future_academic_dean_name',
              74 => 'view field_last_name',
              75 => 'view field_netid',
              76 => 'view field_netid_account',
              77 => 'view own field_accepted_semester_year',
              78 => 'view own field_application_decision',
              79 => 'view own field_cumulative_gpa',
              80 => 'view own field_current_academic_dean',
              81 => 'view own field_current_advisor',
              82 => 'view own field_current_class',
              83 => 'view own field_current_college_autofill',
              84 => 'view own field_current_dean_name',
              85 => 'view own field_current_mailing_address',
              86 => 'view own field_current_major',
              87 => 'view own field_decline_reason',
              88 => 'view own field_deferred_til',
              89 => 'view own field_first_name',
              90 => 'view own field_future_academic_dean_name',
              91 => 'view own field_last_name',
              92 => 'view own field_netid',
              93 => 'view own field_netid_account',
            ),
            'user_role' => 
            array (
              0 => 'Business Dean',
              1 => 'CCAS Dean',
              2 => 'CPS Dean',
              3 => 'Nursing Dean',
              4 => 'SPAHP Dean',
              5 => 'student',
            ),
            'variable' => 
            array (
              0 => 'field_bundle_settings_node__intercollege_transfer',
              1 => 'menu_options_intercollege_transfer',
              2 => 'menu_parent_intercollege_transfer',
              3 => 'node_options_intercollege_transfer',
              4 => 'node_preview_intercollege_transfer',
              5 => 'node_submitted_intercollege_transfer',
              6 => 'page_manager_user_view_disabled',
              7 => 'panelizer_defaults_node_intercollege_transfer',
              8 => 'panelizer_defaults_user_user',
              9 => 'panelizer_node:intercollege_transfer:default_selection',
              10 => 'panelizer_node:intercollege_transfer:page_manager_selection',
              11 => 'pathauto_node_intercollege_transfer_pattern',
              12 => 'xmlsitemap_settings_node_intercollege_transfer',
            ),
            'views_view' => 
            array (
              0 => 'creighton_workflow_dashboard',
              1 => 'current_dean_display',
              2 => 'transfer_viewer',
              3 => 'user_transfer_status',
            ),
            'wsclient_service' => 
            array (
              0 => 'banner_service_pull',
            ),
          ),
          'features_exclude' => 
          array (
            'dependencies' => 
            array (
              'entity' => 'entity',
              'list' => 'list',
              'workflow' => 'workflow',
            ),
          ),
          'description' => '',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => '',
        'version' => '7.x-1.0',
      ),
      'features_date' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_features/features_date/features_date.module',
        'basename' => 'features_date.module',
        'name' => 'features_date',
        'info' => 
        array (
          'name' => 'Features Date Export',
          'description' => 'Provides date format export capabilities to Features',
          'core' => '7.x',
          'project' => 'features_date',
          'dependencies' => 
          array (
          ),
          'version' => NULL,
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'features_date',
        'version' => NULL,
      ),
      'academics_search_spoke' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_academics/academics_search_spoke/academics_search_spoke.module',
        'basename' => 'academics_search_spoke.module',
        'name' => 'academics_search_spoke',
        'info' => 
        array (
          'name' => 'Academics Search SPOKE',
          'description' => 'Academics Search SPOKE',
          'core' => '7.x',
          'package' => 'Academics',
          'version' => '7.x-1.0',
          'project' => 'academics_search_spoke',
          'dependencies' => 
          array (
            0 => 'remote_viewer',
            1 => 'views',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'views:views_default:3.0',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'views_view' => 
            array (
              0 => 'spoke_view_program_description_search',
            ),
          ),
          'features_exclude' => 
          array (
            'dependencies' => 
            array (
              'ctools' => 'ctools',
              'entity' => 'entity',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'academics_search_spoke',
        'version' => '7.x-1.0',
      ),
      'search_api_hub' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_academics/search_api_hub/search_api_hub.module',
        'basename' => 'search_api_hub.module',
        'name' => 'search_api_hub',
        'info' => 
        array (
          'name' => 'HUB Database search',
          'description' => 'Allow Search API DB to query remote DB',
          'dependencies' => 
          array (
            0 => 'search_api',
            1 => 'search_api_db',
          ),
          'core' => '7.x',
          'package' => 'Search',
          'files' => 
          array (
            0 => 'service.inc',
          ),
          'version' => '7.x-1.0',
          'project' => 'search_api_hub',
          'datestamp' => '2520150434',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'search_api_hub',
        'version' => '7.x-1.0',
      ),
      'hub_content_setup_hub_site' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_academics/hub_content_setup_hub_site/hub_content_setup_hub_site.module',
        'basename' => 'hub_content_setup_hub_site.module',
        'name' => 'hub_content_setup_hub_site',
        'info' => 
        array (
          'name' => 'Hub Content Setup - Hub Site',
          'core' => '7.x',
          'package' => 'Academics',
          'version' => '7.x-2.0',
          'project' => 'hub_content_setup_hub_site',
          'dependencies' => 
          array (
            0 => 'views',
            1 => 'views_data_export',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'views:views_default:3.0',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'views_view' => 
            array (
              0 => 'academic_program_title_hub',
              1 => 'academics_matrix_hub',
              2 => 'academics_program_hub',
              3 => 'academics_secondary_content_hub',
              4 => 'responsive_image_tool',
            ),
          ),
          'features_exclude' => 
          array (
            'dependencies' => 
            array (
              'ctools' => 'ctools',
            ),
          ),
          'description' => '',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'hub_content_setup_hub_site',
        'version' => '7.x-2.0',
      ),
      'academics_search_hub' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_academics/academics_search_hub/academics_search_hub.module',
        'basename' => 'academics_search_hub.module',
        'name' => 'academics_search_hub',
        'info' => 
        array (
          'name' => 'Academics Search HUB',
          'description' => 'Academics Search HUB',
          'core' => '7.x',
          'package' => 'Academics',
          'version' => '7.x-1.0',
          'project' => 'academics_search_hub',
          'dependencies' => 
          array (
            0 => 'remote_viewer',
            1 => 'views',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'views:views_default:3.0',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'views_view' => 
            array (
              0 => 'hub_view_program_description_search',
            ),
          ),
          'features_exclude' => 
          array (
            'dependencies' => 
            array (
              'ctools' => 'ctools',
              'entity' => 'entity',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'academics_search_hub',
        'version' => '7.x-1.0',
      ),
      'remote_content_setup_remote_site' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_academics/remote_content_setup_remote_site/remote_content_setup_remote_site.module',
        'basename' => 'remote_content_setup_remote_site.module',
        'name' => 'remote_content_setup_remote_site',
        'info' => 
        array (
          'name' => 'Remote Viewer Setup - Remote Site',
          'description' => 'This feature captures the settings for Remote Viewer on the remote site.',
          'core' => '7.x',
          'package' => 'Academics',
          'version' => '7.x-2.0',
          'project' => 'remote_content_setup_remote_site',
          'dependencies' => 
          array (
            0 => 'context',
            1 => 'ctools',
            2 => 'remote_viewer',
            3 => 'views',
            4 => 'views_data_export',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'context:context:3',
              1 => 'views:views_default:3.0',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'views_view' => 
            array (
              0 => 'academic_program_title',
              1 => 'academics_matrix',
              2 => 'academics_program',
              3 => 'academics_programs_matrix_college',
              4 => 'academics_secondary_content',
              5 => 'adult_degrees_clone_of_programs_matrix_by_tax_term',
              6 => 'gradschool_clone_of_programs_matrix_by_tax_term',
              7 => 'programs_matrix_by_tax_term',
            ),
          ),
          'features_exclude' => 
          array (
            'dependencies' => 
            array (
              'views' => 'views',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'remote_content_setup_remote_site',
        'version' => '7.x-2.0',
      ),
      'academic_program_program_details' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_academics/academic_program_program_details/academic_program_program_details.module',
        'basename' => 'academic_program_program_details.module',
        'name' => 'academic_program_program_details',
        'info' => 
        array (
          'name' => 'Academic Program - Program Details',
          'description' => 'Academic Program and Program Details Content Types',
          'core' => '7.x',
          'package' => 'Academics',
          'version' => '7.x-2.0',
          'project' => 'academic_program_program_details',
          'dependencies' => 
          array (
            0 => 'conditional_fields',
            1 => 'creighton_variables',
            2 => 'ctools',
            3 => 'entityreference',
            4 => 'features',
            5 => 'field_group',
            6 => 'image',
            7 => 'link',
            8 => 'list',
            9 => 'media',
            10 => 'metatag',
            11 => 'multiple_selects',
            12 => 'node',
            13 => 'options',
            14 => 'remote_viewer',
            15 => 'strongarm',
            16 => 'taxonomy',
            17 => 'taxonomy_access_fix',
            18 => 'text',
          ),
          'features' => 
          array (
            'conditional_fields' => 
            array (
              0 => 'node:academic_program',
            ),
            'ctools' => 
            array (
              0 => 'field_group:field_group:1',
              1 => 'strongarm:strongarm:1',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'field_base' => 
            array (
              0 => 'field_aca_bachelors_to_masters',
              1 => 'field_aca_pgm_hybrid',
              2 => 'field_aca_prg_accelerated',
              3 => 'field_aca_prg_assoc_onlineonly',
              4 => 'field_aca_prg_associates_online',
              5 => 'field_aca_prg_associates_page',
              6 => 'field_aca_prg_associates_title',
              7 => 'field_aca_prg_bach_onlineonly',
              8 => 'field_aca_prg_bachelors',
              9 => 'field_aca_prg_bachelors_online',
              10 => 'field_aca_prg_bachelors_page',
              11 => 'field_aca_prg_cert_grad',
              12 => 'field_aca_prg_cert_onlineonly',
              13 => 'field_aca_prg_cert_undergrad',
              14 => 'field_aca_prg_certificate_online',
              15 => 'field_aca_prg_certificate_page',
              16 => 'field_aca_prg_certificate_title',
              17 => 'field_aca_prg_college_school',
              18 => 'field_aca_prg_doc_doctorate',
              19 => 'field_aca_prg_doc_onlineonly',
              20 => 'field_aca_prg_doctorate_online',
              21 => 'field_aca_prg_doctorate_page',
              22 => 'field_aca_prg_doctorate_title',
              23 => 'field_aca_prg_dual_programs',
              24 => 'field_aca_prg_interests',
              25 => 'field_aca_prg_masters_online',
              26 => 'field_aca_prg_masters_onlineonly',
              27 => 'field_aca_prg_masters_page',
              28 => 'field_aca_prg_masters_title',
              29 => 'field_aca_prg_minor_online',
              30 => 'field_aca_prg_minor_page',
              31 => 'field_aca_prg_minor_title',
              32 => 'field_aca_prg_offered_tag',
              33 => 'field_aca_prg_online',
              34 => 'field_aca_prg_professional',
              35 => 'field_aca_prg_title',
              36 => 'field_pgm_details_description',
              37 => 'field_pgm_dts_academic_unit',
              38 => 'field_pgm_dts_admissions_reqs',
              39 => 'field_pgm_dts_availibility',
              40 => 'field_pgm_dts_degree_name',
              41 => 'field_pgm_dts_degree_type',
              42 => 'field_pgm_dts_image',
              43 => 'field_pgm_dts_metadescription',
              44 => 'field_pgm_dts_metakeywords',
              45 => 'field_pgm_dts_other_programs',
              46 => 'field_pgm_dts_outcomes',
              47 => 'field_pgm_dts_program_name',
              48 => 'field_pgm_dts_related_programs',
              49 => 'field_pgm_dts_research_opp',
              50 => 'field_pgm_dts_specializations',
              51 => 'field_pgm_dts_tab_curriculum',
              52 => 'field_pgm_dts_tab_internships',
              53 => 'field_pgm_dts_tab_learn',
              54 => 'field_pgm_dts_tab_organizations',
              55 => 'field_pgm_dts_tab_tuition',
              56 => 'field_program_academic_unit',
              57 => 'field_student_org_name',
              58 => 'field_tab_custom',
              59 => 'field_tab_custom_2',
              60 => 'field_tab_custom_3',
              61 => 'field_tab_custom_all',
            ),
            'field_group' => 
            array (
              0 => 'group_academic_interests|node|academic_program|form',
              1 => 'group_associates|node|academic_program|form',
              2 => 'group_bachelors|node|academic_program|form',
              3 => 'group_certifiate|node|academic_program|form',
              4 => 'group_doctorate|node|academic_program|form',
              5 => 'group_masters|node|academic_program|form',
              6 => 'group_minor|node|academic_program|form',
              7 => 'group_program_offerings|node|academic_program|form',
            ),
            'field_instance' => 
            array (
              0 => 'node-academic_program-field_aca_bachelors_to_masters',
              1 => 'node-academic_program-field_aca_pgm_hybrid',
              2 => 'node-academic_program-field_aca_prg_accelerated',
              3 => 'node-academic_program-field_aca_prg_assoc_onlineonly',
              4 => 'node-academic_program-field_aca_prg_associates_online',
              5 => 'node-academic_program-field_aca_prg_associates_page',
              6 => 'node-academic_program-field_aca_prg_associates_title',
              7 => 'node-academic_program-field_aca_prg_bach_onlineonly',
              8 => 'node-academic_program-field_aca_prg_bachelors',
              9 => 'node-academic_program-field_aca_prg_bachelors_online',
              10 => 'node-academic_program-field_aca_prg_bachelors_page',
              11 => 'node-academic_program-field_aca_prg_cert_grad',
              12 => 'node-academic_program-field_aca_prg_cert_onlineonly',
              13 => 'node-academic_program-field_aca_prg_cert_undergrad',
              14 => 'node-academic_program-field_aca_prg_certificate_online',
              15 => 'node-academic_program-field_aca_prg_certificate_page',
              16 => 'node-academic_program-field_aca_prg_certificate_title',
              17 => 'node-academic_program-field_aca_prg_college_school',
              18 => 'node-academic_program-field_aca_prg_doc_doctorate',
              19 => 'node-academic_program-field_aca_prg_doc_onlineonly',
              20 => 'node-academic_program-field_aca_prg_doctorate_online',
              21 => 'node-academic_program-field_aca_prg_doctorate_page',
              22 => 'node-academic_program-field_aca_prg_doctorate_title',
              23 => 'node-academic_program-field_aca_prg_dual_programs',
              24 => 'node-academic_program-field_aca_prg_interests',
              25 => 'node-academic_program-field_aca_prg_masters_online',
              26 => 'node-academic_program-field_aca_prg_masters_onlineonly',
              27 => 'node-academic_program-field_aca_prg_masters_page',
              28 => 'node-academic_program-field_aca_prg_masters_title',
              29 => 'node-academic_program-field_aca_prg_minor_online',
              30 => 'node-academic_program-field_aca_prg_minor_page',
              31 => 'node-academic_program-field_aca_prg_minor_title',
              32 => 'node-academic_program-field_aca_prg_offered_tag',
              33 => 'node-academic_program-field_aca_prg_online',
              34 => 'node-academic_program-field_aca_prg_professional',
              35 => 'node-academic_program-field_aca_prg_title',
              36 => 'node-academic_unit-body',
              37 => 'node-academic_unit-field_program_academic_unit',
              38 => 'node-program_details-field_content_secondary_content',
              39 => 'node-program_details-field_pgm_details_description',
              40 => 'node-program_details-field_pgm_dts_academic_unit',
              41 => 'node-program_details-field_pgm_dts_admissions_reqs',
              42 => 'node-program_details-field_pgm_dts_availibility',
              43 => 'node-program_details-field_pgm_dts_degree_name',
              44 => 'node-program_details-field_pgm_dts_degree_type',
              45 => 'node-program_details-field_pgm_dts_image',
              46 => 'node-program_details-field_pgm_dts_metadescription',
              47 => 'node-program_details-field_pgm_dts_metakeywords',
              48 => 'node-program_details-field_pgm_dts_other_programs',
              49 => 'node-program_details-field_pgm_dts_outcomes',
              50 => 'node-program_details-field_pgm_dts_program_name',
              51 => 'node-program_details-field_pgm_dts_related_programs',
              52 => 'node-program_details-field_pgm_dts_research_opp',
              53 => 'node-program_details-field_pgm_dts_specializations',
              54 => 'node-program_details-field_pgm_dts_tab_curriculum',
              55 => 'node-program_details-field_pgm_dts_tab_internships',
              56 => 'node-program_details-field_pgm_dts_tab_learn',
              57 => 'node-program_details-field_pgm_dts_tab_organizations',
              58 => 'node-program_details-field_pgm_dts_tab_tuition',
              59 => 'node-program_details-field_tab_custom',
              60 => 'node-program_details-field_tab_custom_2',
              61 => 'node-program_details-field_tab_custom_3',
              62 => 'node-program_details-field_tab_custom_all',
              63 => 'node-student_organizations-body',
              64 => 'node-student_organizations-field_student_org_name',
            ),
            'node' => 
            array (
              0 => 'academic_program',
              1 => 'academic_unit',
              2 => 'program_details',
              3 => 'student_organizations',
            ),
            'taxonomy' => 
            array (
              0 => 'academic_interests',
              1 => 'academic_programs_offerings',
              2 => 'college_school',
              3 => 'program_degree_type',
            ),
            'user_permission' => 
            array (
              0 => 'add terms in academic_interests',
              1 => 'add terms in academic_programs_offerings',
              2 => 'create academic_program content',
              3 => 'create academic_unit content',
              4 => 'create program_details content',
              5 => 'delete any academic_program content',
              6 => 'delete any academic_unit content',
              7 => 'delete any program_details content',
              8 => 'delete own academic_program content',
              9 => 'delete own academic_unit content',
              10 => 'delete own program_details content',
              11 => 'delete terms in academic_interests',
              12 => 'delete terms in academic_programs_offerings',
              13 => 'edit any academic_program content',
              14 => 'edit any academic_unit content',
              15 => 'edit any program_details content',
              16 => 'edit own academic_program content',
              17 => 'edit own academic_unit content',
              18 => 'edit own program_details content',
              19 => 'edit terms in academic_interests',
              20 => 'edit terms in academic_programs_offerings',
            ),
            'variable' => 
            array (
              0 => 'field_bundle_settings_node__academic_program',
              1 => 'field_bundle_settings_node__academic_unit',
              2 => 'field_bundle_settings_node__program_details',
              3 => 'field_bundle_settings_node__student_organizations',
              4 => 'menu_options_academic_program',
              5 => 'menu_options_academic_unit',
              6 => 'menu_options_program_details',
              7 => 'menu_options_student_organizations',
              8 => 'menu_parent_academic_program',
              9 => 'menu_parent_academic_unit',
              10 => 'menu_parent_program_details',
              11 => 'menu_parent_student_organizations',
              12 => 'node_options_academic_program',
              13 => 'node_options_academic_unit',
              14 => 'node_options_program_details',
              15 => 'node_options_student_organizations',
              16 => 'node_preview_academic_program',
              17 => 'node_preview_academic_unit',
              18 => 'node_preview_program_details',
              19 => 'node_preview_student_organizations',
              20 => 'node_submitted_academic_program',
              21 => 'node_submitted_academic_unit',
              22 => 'node_submitted_program_details',
              23 => 'node_submitted_student_organizations',
              24 => 'pathauto_node_academic_program_pattern',
              25 => 'pathauto_node_academic_unit_pattern',
              26 => 'pathauto_node_program_details_pattern',
              27 => 'pathauto_node_student_organizations_pattern',
              28 => 'pathauto_taxonomy_term_academic_interests_pattern',
              29 => 'pathauto_taxonomy_term_academic_programs_offerings_pattern',
              30 => 'xmlsitemap_settings_node_academic_program',
              31 => 'xmlsitemap_settings_node_program_details',
              32 => 'xmlsitemap_settings_node_student_organizations',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'academic_program_program_details',
        'version' => '7.x-2.0',
      ),
      'academics_search_both' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_academics/academics_search_both/academics_search_both.module',
        'basename' => 'academics_search_both.module',
        'name' => 'academics_search_both',
        'info' => 
        array (
          'name' => 'Academics Search Both',
          'description' => 'Academics Search Both',
          'core' => '7.x',
          'package' => 'Academics',
          'version' => '7.x-1.0',
          'project' => 'academics_search_both',
          'dependencies' => 
          array (
            0 => 'entity',
            1 => 'search_api',
            2 => 'search_api_db',
          ),
          'features' => 
          array (
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'search_api_index' => 
            array (
              0 => 'default_node_index',
              1 => 'program_details_search',
            ),
            'search_api_server' => 
            array (
              0 => 'hub_db_server',
            ),
          ),
          'mtime' => '1424728037',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'academics_search_both',
        'version' => '7.x-1.0',
      ),
      'creighton_profile' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/web_module_profile/creighton_profile.module',
        'basename' => 'creighton_profile.module',
        'name' => 'creighton_profile',
        'info' => 
        array (
          'name' => 'Profile',
          'description' => 'Creighton Profile configuration',
          'core' => '7.x',
          'package' => 'Creighton',
          'version' => '7.x-2.22',
          'project' => 'creighton_profile',
          'dependencies' => 
          array (
            0 => 'auto_nodetitle',
            1 => 'context',
            2 => 'creighton_block_types',
            3 => 'creighton_media',
            4 => 'creighton_variables',
            5 => 'ctools',
            6 => 'email',
            7 => 'features',
            8 => 'field_collection',
            9 => 'image',
            10 => 'list',
            11 => 'multiple_selects',
            12 => 'name',
            13 => 'node',
            14 => 'options',
            15 => 'picture',
            16 => 'publish_button',
            17 => 'spamspan',
            18 => 'strongarm',
            19 => 'taxonomy',
            20 => 'taxonomy_access_fix',
            21 => 'text',
            22 => 'views',
          ),
          'features' => 
          array (
            'breakpoint_group' => 
            array (
              0 => 'profile2',
            ),
            'cer' => 
            array (
              0 => 'bean*copy_block*field_block_content_reference*node*profile*field_content_secondary_content',
              1 => 'bean*featured_links*field_block_content_reference*node*profile*field_content_secondary_content',
              2 => 'bean*profile*field_block_content_reference*node*profile*field_content_secondary_content',
              3 => 'bean*promo_box*field_block_content_reference*node*profile*field_content_secondary_content',
              4 => 'bean*quote*field_block_content_reference*node*profile*field_content_secondary_content',
              5 => 'bean*related_links*field_block_content_reference*node*profile*field_content_secondary_content',
            ),
            'context' => 
            array (
              0 => 'profile-contact-block',
            ),
            'ctools' => 
            array (
              0 => 'breakpoints:default_breakpoint_group:1',
              1 => 'breakpoints:default_breakpoints:1',
              2 => 'cer:default_cer_presets:1',
              3 => 'context:context:3',
              4 => 'picture:default_picture_mapping:1',
              5 => 'strongarm:strongarm:1',
              6 => 'views:views_default:3.0',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'field_base' => 
            array (
              0 => 'field_additional_organization',
              1 => 'field_profile2_email',
              2 => 'field_profile2_image',
              3 => 'field_profile2_name',
              4 => 'field_profile2_office_location',
              5 => 'field_profile2_phone',
              6 => 'field_profile2_position',
              7 => 'field_profile2_specialties',
              8 => 'field_profile2_tabbed_body',
              9 => 'field_profile2_tabbed_content',
              10 => 'field_profile2_tabbed_title',
              11 => 'field_profile2_type',
            ),
            'field_instance' => 
            array (
              0 => 'field_collection_item-field_profile2_tabbed_content-field_profile2_tabbed_body',
              1 => 'field_collection_item-field_profile2_tabbed_content-field_profile2_tabbed_title',
              2 => 'node-profile-body',
              3 => 'node-profile-field_additional_organization',
              4 => 'node-profile-field_content_secondary_content',
              5 => 'node-profile-field_profile2_email',
              6 => 'node-profile-field_profile2_image',
              7 => 'node-profile-field_profile2_name',
              8 => 'node-profile-field_profile2_office_location',
              9 => 'node-profile-field_profile2_phone',
              10 => 'node-profile-field_profile2_position',
              11 => 'node-profile-field_profile2_specialties',
              12 => 'node-profile-field_profile2_tabbed_content',
              13 => 'node-profile-field_profile2_type',
            ),
            'image' => 
            array (
              0 => 'profile2',
              1 => 'profile2_custom_user_max_width_56_25em_1_5x',
              2 => 'profile2_custom_user_max_width_56_25em_1x',
              3 => 'profile2_custom_user_max_width_56_25em_2x',
              4 => 'profile2_custom_user_min_width_56_26em_1_5x',
              5 => 'profile2_custom_user_min_width_56_26em_1x',
              6 => 'profile2_custom_user_min_width_56_26em_2x',
            ),
            'node' => 
            array (
              0 => 'profile',
            ),
            'picture_mapping' => 
            array (
              0 => 'profile2',
            ),
            'taxonomy' => 
            array (
              0 => 'profile_specialties',
              1 => 'profile_type',
            ),
            'user_permission' => 
            array (
              0 => 'add terms in profile_specialties',
              1 => 'add terms in profile_type',
              2 => 'create profile content',
              3 => 'delete any profile content',
              4 => 'delete own profile content',
              5 => 'delete terms in academic_unit',
              6 => 'delete terms in profile_specialties',
              7 => 'delete terms in profile_type',
              8 => 'edit any profile content',
              9 => 'edit own profile content',
              10 => 'edit terms in academic_unit',
              11 => 'edit terms in profile_specialties',
              12 => 'edit terms in profile_type',
              13 => 'publish button publish any profile',
              14 => 'publish button publish own profile',
              15 => 'publish button unpublish any profile',
              16 => 'publish button unpublish own profile',
            ),
            'variable' => 
            array (
              0 => 'additional_settings__active_tab_profile',
              1 => 'ant_pattern_profile',
              2 => 'ant_php_profile',
              3 => 'ant_profile',
              4 => 'default_menu_link_enabled_profile',
              5 => 'diff_enable_revisions_page_node_profile',
              6 => 'diff_show_preview_changes_node_profile',
              7 => 'diff_view_mode_preview_node_profile',
              8 => 'field_bundle_settings_field_collection_item__field_profile2_tabbed_content',
              9 => 'field_bundle_settings_node__profile',
              10 => 'menu_options_profile',
              11 => 'menu_parent_profile',
              12 => 'node_menu_required_profile',
              13 => 'node_options_profile',
              14 => 'node_preview_profile',
              15 => 'node_submitted_profile',
              16 => 'pathauto_node_profile_pattern',
              17 => 'publish_button_content_type_profile',
              18 => 'save_continue_profile',
              19 => 'webform_node_profile',
              20 => 'xmlsitemap_settings_node_profile',
            ),
            'views_view' => 
            array (
              0 => 'profiles',
            ),
          ),
          'features_exclude' => 
          array (
            'dependencies' => 
            array (
              'entityreference' => 'entityreference',
              'cer' => 'cer',
            ),
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'creighton_profile',
        'version' => '7.x-2.22',
      ),
      'remote_viewer' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/custom/remote_viewer/remote_viewer.module',
        'basename' => 'remote_viewer.module',
        'name' => 'remote_viewer',
        'info' => 
        array (
          'name' => 'Remote Viewer',
          'description' => 'Access HUB Content from SPOKE with Views',
          'package' => 'Other',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'views',
            1 => 'picture',
            2 => 'media',
          ),
          'files' => 
          array (
            0 => 'controllers/bean.php',
            1 => 'controllers/node.php',
            2 => 'views/plugins/remote_plugin_display_block.inc',
            3 => 'views/plugins/remote_plugin_display_page.inc',
            4 => 'views/plugins/remote_plugin_query.inc',
          ),
          'version' => NULL,
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => '',
        'version' => NULL,
      ),
      'multiform' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/multiform/multiform.module',
        'basename' => 'multiform.module',
        'name' => 'multiform',
        'info' => 
        array (
          'name' => 'Multiple forms',
          'description' => 'Allows displaying and submitting multiple forms in one form',
          'files' => 
          array (
            0 => 'multiform.module',
            1 => 'tests/multiform.test',
          ),
          'core' => '7.x',
          'version' => '7.x-1.3',
          'project' => 'multiform',
          'datestamp' => '1479276241',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'multiform',
        'version' => '7.x-1.3',
      ),
      'redirect' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/redirect/redirect.module',
        'basename' => 'redirect.module',
        'name' => 'redirect',
        'info' => 
        array (
          'name' => 'Redirect',
          'description' => 'Allows users to redirect from old URLs to new URLs.',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'redirect.controller.inc',
            1 => 'redirect.test',
            2 => 'views/redirect.views.inc',
            3 => 'views/redirect_handler_filter_redirect_type.inc',
            4 => 'views/redirect_handler_field_redirect_source.inc',
            5 => 'views/redirect_handler_field_redirect_redirect.inc',
            6 => 'views/redirect_handler_field_redirect_operations.inc',
            7 => 'views/redirect_handler_field_redirect_link_edit.inc',
            8 => 'views/redirect_handler_field_redirect_link_delete.inc',
          ),
          'configure' => 'admin/config/search/redirect/settings',
          'version' => '7.x-1.0-rc3',
          'project' => 'redirect',
          'datestamp' => '1436393342',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7102',
        'project' => 'redirect',
        'version' => '7.x-1.0-rc3',
      ),
      'role_delegation' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/role_delegation/role_delegation.module',
        'basename' => 'role_delegation.module',
        'name' => 'role_delegation',
        'info' => 
        array (
          'name' => 'Role delegation',
          'description' => 'Allows site administrators to grant some roles the authority to assign selected roles to users.',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'role_delegation.module',
            1 => 'role_delegation.test',
          ),
          'version' => '7.x-1.1',
          'project' => 'role_delegation',
          'datestamp' => '1308565019',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'role_delegation',
        'version' => '7.x-1.1',
      ),
      'block_class' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/block_class/block_class.module',
        'basename' => 'block_class.module',
        'name' => 'block_class',
        'info' => 
        array (
          'name' => 'Block Class',
          'description' => 'Allows assigning CSS classes to blocks.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'block',
          ),
          'files' => 
          array (
            0 => 'block_class.test',
          ),
          'test_dependencies' => 
          array (
            0 => 'context',
            1 => 'features (2.x)',
            2 => 'features_extra',
          ),
          'version' => '7.x-2.3',
          'project' => 'block_class',
          'datestamp' => '1450415951',
          'php' => '5.2.4',
        ),
        'schema_version' => '7103',
        'project' => 'block_class',
        'version' => '7.x-2.3',
      ),
      'panels_node' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/panels/panels_node/panels_node.module',
        'basename' => 'panels_node.module',
        'name' => 'panels_node',
        'info' => 
        array (
          'name' => 'Panel nodes',
          'description' => 'Create nodes that are divided into areas with selectable content.',
          'package' => 'Panels',
          'version' => '7.x-3.7',
          'dependencies' => 
          array (
            0 => 'panels',
          ),
          'configure' => 'admin/structure/panels',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'panels_node.module',
          ),
          'project' => 'panels',
          'datestamp' => '1471704242',
          'php' => '5.2.4',
        ),
        'schema_version' => '7302',
        'project' => 'panels',
        'version' => '7.x-3.7',
      ),
      'panels_ipe' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/panels/panels_ipe/panels_ipe.module',
        'basename' => 'panels_ipe.module',
        'name' => 'panels_ipe',
        'info' => 
        array (
          'name' => 'Panels In-Place Editor',
          'description' => 'Provide a UI for managing some Panels directly on the frontend, instead of having to use the backend.',
          'package' => 'Panels',
          'version' => '7.x-3.7',
          'dependencies' => 
          array (
            0 => 'panels',
          ),
          'core' => '7.x',
          'configure' => 'admin/structure/panels',
          'files' => 
          array (
            0 => 'panels_ipe.module',
          ),
          'project' => 'panels',
          'datestamp' => '1471704242',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'panels',
        'version' => '7.x-3.7',
      ),
      'i18n_panels' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/panels/i18n_panels/i18n_panels.module',
        'basename' => 'i18n_panels.module',
        'name' => 'i18n_panels',
        'info' => 
        array (
          'name' => 'Panels translation',
          'description' => 'Supports translatable panels items.',
          'dependencies' => 
          array (
            0 => 'i18n',
            1 => 'panels',
            2 => 'i18n_string',
            3 => 'i18n_translation',
          ),
          'package' => 'Multilingual - Internationalization',
          'core' => '7.x',
          'version' => '7.x-3.7',
          'project' => 'panels',
          'datestamp' => '1471704242',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'panels',
        'version' => '7.x-3.7',
      ),
      'panels_mini' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/panels/panels_mini/panels_mini.module',
        'basename' => 'panels_mini.module',
        'name' => 'panels_mini',
        'info' => 
        array (
          'name' => 'Mini panels',
          'description' => 'Create mini panels that can be used as blocks by Drupal and panes by other panel modules.',
          'package' => 'Panels',
          'version' => '7.x-3.7',
          'dependencies' => 
          array (
            0 => 'panels',
          ),
          'core' => '7.x',
          'files' => 
          array (
            0 => 'plugins/export_ui/panels_mini_ui.class.php',
          ),
          'project' => 'panels',
          'datestamp' => '1471704242',
          'php' => '5.2.4',
        ),
        'schema_version' => '7301',
        'project' => 'panels',
        'version' => '7.x-3.7',
      ),
      'panels' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/panels/panels.module',
        'basename' => 'panels.module',
        'name' => 'panels',
        'info' => 
        array (
          'name' => 'Panels',
          'description' => 'Core Panels display functions; provides no external UI, at least one other Panels module should be enabled.',
          'core' => '7.x',
          'package' => 'Panels',
          'configure' => 'admin/structure/panels',
          'dependencies' => 
          array (
            0 => 'ctools',
          ),
          'files' => 
          array (
            0 => 'panels.module',
            1 => 'includes/common.inc',
            2 => 'includes/legacy.inc',
            3 => 'includes/plugins.inc',
            4 => 'plugins/views/panels_views_plugin_row_fields.inc',
          ),
          'version' => '7.x-3.7',
          'project' => 'panels',
          'datestamp' => '1471704242',
          'php' => '5.2.4',
        ),
        'schema_version' => '7306',
        'project' => 'panels',
        'version' => '7.x-3.7',
      ),
      'quicktabs_tabstyles' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/quicktabs/quicktabs_tabstyles/quicktabs_tabstyles.module',
        'basename' => 'quicktabs_tabstyles.module',
        'name' => 'quicktabs_tabstyles',
        'info' => 
        array (
          'name' => 'Quicktabs Styles',
          'description' => 'Adds predefined tab styles to choose from per Quicktabs instance.',
          'core' => '7.x',
          'configure' => 'admin/structure/quicktabs/styles',
          'dependencies' => 
          array (
            0 => 'quicktabs',
          ),
          'version' => '7.x-3.6',
          'project' => 'quicktabs',
          'datestamp' => '1380731929',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'quicktabs',
        'version' => '7.x-3.6',
      ),
      'quicktabs' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/quicktabs/quicktabs.module',
        'basename' => 'quicktabs.module',
        'name' => 'quicktabs',
        'info' => 
        array (
          'name' => 'Quicktabs',
          'description' => 'Render content with tabs and other display styles',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'quicktabs.module',
            1 => 'quicktabs.classes.inc',
            2 => 'includes/quicktabs_style_plugin.inc',
            3 => 'tests/quicktabs.test',
          ),
          'configure' => 'admin/structure/quicktabs',
          'dependencies' => 
          array (
            0 => 'ctools',
          ),
          'version' => '7.x-3.6',
          'project' => 'quicktabs',
          'datestamp' => '1380731929',
          'php' => '5.2.4',
        ),
        'schema_version' => '7303',
        'project' => 'quicktabs',
        'version' => '7.x-3.6',
      ),
      'views_data_export' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/views_data_export/views_data_export.module',
        'basename' => 'views_data_export.module',
        'name' => 'views_data_export',
        'info' => 
        array (
          'name' => 'Views Data Export',
          'description' => 'Plugin to export views data into various file formats',
          'package' => 'Views',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'views',
          ),
          'files' => 
          array (
            0 => 'plugins/views_data_export_plugin_display_export.inc',
            1 => 'plugins/views_data_export_plugin_style_export.inc',
            2 => 'plugins/views_data_export_plugin_style_export_csv.inc',
            3 => 'plugins/views_data_export_plugin_style_export_xml.inc',
            4 => 'tests/base.test',
            5 => 'tests/access.test',
            6 => 'tests/garbagecollection.test',
            7 => 'tests/csv_export.test',
            8 => 'tests/doc_export.test',
            9 => 'tests/txt_export.test',
            10 => 'tests/xls_export.test',
            11 => 'tests/xml_export.test',
          ),
          'version' => '7.x-3.1',
          'project' => 'views_data_export',
          'datestamp' => '1474360174',
          'php' => '5.2.4',
        ),
        'schema_version' => '7301',
        'project' => 'views_data_export',
        'version' => '7.x-3.1',
      ),
      'video_filter' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/video_filter/video_filter.module',
        'basename' => 'video_filter.module',
        'name' => 'video_filter',
        'info' => 
        array (
          'name' => 'Video Filter',
          'description' => 'Filter to include videos from Youtube, Google video etc',
          'core' => '7.x',
          'package' => 'Input filters',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'video_filter.css',
            ),
          ),
          'version' => '7.x-3.4+6-dev',
          'project' => 'video_filter',
          'datestamp' => '1487736788',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'video_filter',
        'version' => '7.x-3.4+6-dev',
      ),
      'flexslider_picture' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/picture/flexslider_picture/flexslider_picture.module',
        'basename' => 'flexslider_picture.module',
        'name' => 'flexslider_picture',
        'info' => 
        array (
          'name' => 'FlexSlider Picture',
          'description' => 'Integrates the Picture module with the FlexSlider module for a truly responsive slider.',
          'package' => 'Picture',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'picture',
            1 => 'flexslider (2.x)',
            2 => 'flexslider_fields (2.x)',
          ),
          'version' => '7.x-1.3',
          'project' => 'picture',
          'datestamp' => '1400832228',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'picture',
        'version' => '7.x-1.3',
      ),
      'picture' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/picture/picture.module',
        'basename' => 'picture.module',
        'name' => 'picture',
        'info' => 
        array (
          'name' => 'Picture',
          'description' => 'Picture element',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'image',
            1 => 'breakpoints',
          ),
          'configure' => 'admin/config/media/picture',
          'package' => 'Picture',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'picture_wysiwyg.css',
            ),
          ),
          'version' => '7.x-1.3',
          'project' => 'picture',
          'datestamp' => '1400832228',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'picture',
        'version' => '7.x-1.3',
      ),
      'workflow_actions' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/workflow/workflow_actions/workflow_actions.module',
        'basename' => 'workflow_actions.module',
        'name' => 'workflow_actions',
        'info' => 
        array (
          'name' => 'Workflow Trigger',
          'description' => 'Enables actions to be fired upon a Workflow State change.',
          'dependencies' => 
          array (
            0 => 'workflow',
            1 => 'trigger',
          ),
          'package' => 'Workflow',
          'core' => '7.x',
          'version' => '7.x-2.10',
          'project' => 'workflow',
          'datestamp' => '1493770089',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'workflow',
        'version' => '7.x-2.10',
      ),
      'workflownode' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/workflow/workflow_node/workflownode.module',
        'basename' => 'workflownode.module',
        'name' => 'workflownode',
        'info' => 
        array (
          'name' => 'Workflow Node',
          'description' => 'Adds a Workflow to nodes. (Use only if you come from a version below 7.x-2.x. If not, use \'Workflow Field\' instead).',
          'package' => 'Workflow',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'workflow',
          ),
          'version' => '7.x-2.10',
          'project' => 'workflow',
          'datestamp' => '1493770089',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'workflow',
        'version' => '7.x-2.10',
      ),
      'workflow_search_api' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/workflow/workflow_search_api/workflow_search_api.module',
        'basename' => 'workflow_search_api.module',
        'name' => 'workflow_search_api',
        'info' => 
        array (
          'name' => 'Workflow Node Search API',
          'description' => 'Adds Workflow Node\'s state information to Search API index.',
          'dependencies' => 
          array (
            0 => 'workflow',
            1 => 'workflownode',
            2 => 'entity',
          ),
          'core' => '7.x',
          'package' => 'Workflow',
          'version' => '7.x-2.10',
          'project' => 'workflow',
          'datestamp' => '1493770089',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'workflow',
        'version' => '7.x-2.10',
      ),
      'workflow_notify_og' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/workflow/workflow_notify/workflow_notify_og/workflow_notify_og.module',
        'basename' => 'workflow_notify_og.module',
        'name' => 'workflow_notify_og',
        'info' => 
        array (
          'name' => 'Workflow Notify OG',
          'description' => 'Notify roles by OG groups of Workflow transitions.',
          'dependencies' => 
          array (
            0 => 'workflow_notify',
          ),
          'core' => '7.x',
          'package' => 'Workflow',
          'version' => '7.x-2.10',
          'project' => 'workflow',
          'datestamp' => '1493770089',
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'project' => 'workflow',
        'version' => '7.x-2.10',
      ),
      'workflow_notify' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/workflow/workflow_notify/workflow_notify.module',
        'basename' => 'workflow_notify.module',
        'name' => 'workflow_notify',
        'info' => 
        array (
          'name' => 'Workflow Notify',
          'description' => 'Notify roles of Workflow transitions.',
          'dependencies' => 
          array (
            0 => 'workflow',
            1 => 'token',
          ),
          'configure' => 'admin/config/workflow/workflow',
          'core' => '7.x',
          'package' => 'Workflow',
          'version' => '7.x-2.10',
          'project' => 'workflow',
          'datestamp' => '1493770089',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'workflow',
        'version' => '7.x-2.10',
      ),
      'workflow_views' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/workflow/workflow_views/workflow_views.module',
        'basename' => 'workflow_views.module',
        'name' => 'workflow_views',
        'info' => 
        array (
          'name' => 'Workflow views',
          'description' => 'Provides views integration for workflows.',
          'package' => 'Workflow',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'workflow',
            1 => 'views (>3.3)',
          ),
          'files' => 
          array (
            0 => 'handlers/workflow_views_handler_filter_sid.inc',
            1 => 'handlers/workflow_views_handler_field_sid.inc',
            2 => 'handlers/workflow_views_handler_field_state.inc',
            3 => 'handlers/workflow_views_handler_field_username.inc',
            4 => 'handlers/workflow_views_handler_field_node_link_workflow.inc',
            5 => 'handlers/workflow_views_handler_field_comment_link_edit.inc',
            6 => 'handlers/workflow_views_handler_argument_state.inc',
          ),
          'version' => '7.x-2.10',
          'project' => 'workflow',
          'datestamp' => '1493770089',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'workflow',
        'version' => '7.x-2.10',
      ),
      'workflow_admin_ui' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/workflow/workflow_admin_ui/workflow_admin_ui.module',
        'basename' => 'workflow_admin_ui.module',
        'name' => 'workflow_admin_ui',
        'info' => 
        array (
          'name' => 'Workflow UI',
          'description' => 'Provides administrative UI for workflow.',
          'package' => 'Workflow',
          'core' => '7.x',
          'configure' => 'admin/config/workflow/workflow',
          'dependencies' => 
          array (
            0 => 'workflow',
          ),
          'files' => 
          array (
            0 => 'includes/Entity/EntityWorkflowUIController.php',
          ),
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'workflow_admin_ui.css',
            ),
          ),
          'version' => '7.x-2.10',
          'project' => 'workflow',
          'datestamp' => '1493770089',
          'php' => '5.2.4',
        ),
        'schema_version' => '7001',
        'project' => 'workflow',
        'version' => '7.x-2.10',
      ),
      'workflow_rules' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/workflow/workflow_rules/workflow_rules.module',
        'basename' => 'workflow_rules.module',
        'name' => 'workflow_rules',
        'info' => 
        array (
          'name' => 'Workflow Rules',
          'description' => 'Provides additional, workflow-specific Rules integration.',
          'core' => '7.x',
          'package' => 'Workflow',
          'dependencies' => 
          array (
            0 => 'workflow',
            1 => 'rules',
          ),
          'configure' => 'admin/config/workflow/rules',
          'version' => '7.x-2.10',
          'project' => 'workflow',
          'datestamp' => '1493770089',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'workflow',
        'version' => '7.x-2.10',
      ),
      'workflow_access' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/workflow/workflow_access/workflow_access.module',
        'basename' => 'workflow_access.module',
        'name' => 'workflow_access',
        'info' => 
        array (
          'name' => 'Workflow access',
          'description' => 'Content access control based on workflows and roles. Depends on the node_access system, so only works for entities of type \'node\'.',
          'dependencies' => 
          array (
            0 => 'workflow',
          ),
          'package' => 'Workflow',
          'core' => '7.x',
          'version' => '7.x-2.10',
          'project' => 'workflow',
          'datestamp' => '1493770089',
          'php' => '5.2.4',
        ),
        'schema_version' => '7002',
        'project' => 'workflow',
        'version' => '7.x-2.10',
      ),
      'workflow_revert' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/workflow/workflow_revert/workflow_revert.module',
        'basename' => 'workflow_revert.module',
        'name' => 'workflow_revert',
        'info' => 
        array (
          'name' => 'Workflow Revert',
          'description' => 'Adds a \'Revert\' link to the first workflow history row.',
          'dependencies' => 
          array (
            0 => 'workflow',
          ),
          'core' => '7.x',
          'package' => 'Workflow',
          'version' => '7.x-2.10',
          'project' => 'workflow',
          'datestamp' => '1493770089',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'workflow',
        'version' => '7.x-2.10',
      ),
      'workflowfield' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/workflow/workflow_field/workflowfield.module',
        'basename' => 'workflowfield.module',
        'name' => 'workflowfield',
        'info' => 
        array (
          'name' => 'Workflow Field',
          'description' => 'Defines a Workflow field, widget and formatter. (Do not enable Workflow Field and Workflow Node together.)',
          'package' => 'Workflow',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'entity',
            1 => 'field',
            2 => 'options',
            3 => 'workflow',
          ),
          'version' => '7.x-2.10',
          'project' => 'workflow',
          'datestamp' => '1493770089',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'workflow',
        'version' => '7.x-2.10',
      ),
      'workflow_cleanup' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/workflow/workflow_cleanup/workflow_cleanup.module',
        'basename' => 'workflow_cleanup.module',
        'name' => 'workflow_cleanup',
        'info' => 
        array (
          'name' => 'Workflow Clean Up',
          'description' => 'Cleans up Workflow cruft.',
          'dependencies' => 
          array (
            0 => 'workflow',
          ),
          'core' => '7.x',
          'package' => 'Workflow',
          'configure' => 'admin/config/workflow/workflow/cleanup',
          'version' => '7.x-2.10',
          'project' => 'workflow',
          'datestamp' => '1493770089',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'workflow',
        'version' => '7.x-2.10',
      ),
      'workflow_vbo' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/workflow/workflow_vbo/workflow_vbo.module',
        'basename' => 'workflow_vbo.module',
        'name' => 'workflow_vbo',
        'info' => 
        array (
          'name' => 'Workflow Actions',
          'description' => 'Provides actions that can be associated to triggers, or
               used as VBO-action. Provided actions are \'set to next state\'
               and \'set to specific state\'.',
          'dependencies' => 
          array (
            0 => 'workflow',
          ),
          'package' => 'Workflow',
          'core' => '7.x',
          'version' => '7.x-2.10',
          'project' => 'workflow',
          'datestamp' => '1493770089',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'workflow',
        'version' => '7.x-2.10',
      ),
      'workflow' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/workflow/workflow.module',
        'basename' => 'workflow.module',
        'name' => 'workflow',
        'info' => 
        array (
          'name' => 'Workflow API',
          'description' => 'Workflow API. (Enable Workflow Node or Workflow Field to add arbitrary workflows to entities.)',
          'package' => 'Workflow',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'entity (>7.x-1.5)',
            1 => 'list',
          ),
          'files' => 
          array (
            0 => 'includes/Entity/Workflow.php',
            1 => 'includes/Entity/WorkflowInterface.php',
            2 => 'includes/Entity/WorkflowState.php',
            3 => 'includes/Entity/WorkflowConfigTransition.php',
            4 => 'includes/Entity/WorkflowScheduledTransition.php',
            5 => 'includes/Entity/WorkflowTransition.php',
            6 => 'includes/Field/WorkflowD7Base.php',
            7 => 'includes/Field/WorkflowItem.php',
            8 => 'includes/Field/WorkflowDefaultWidget.php',
            9 => 'includes/Form/WorkflowTransitionForm.php',
            10 => 'workflow.features.inc',
          ),
          'version' => '7.x-2.10',
          'project' => 'workflow',
          'datestamp' => '1493770089',
          'php' => '5.2.4',
        ),
        'schema_version' => '7200',
        'project' => 'workflow',
        'version' => '7.x-2.10',
      ),
      'services_views' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/services_views/services_views.module',
        'basename' => 'services_views.module',
        'name' => 'services_views',
        'info' => 
        array (
          'name' => 'Services Views',
          'description' => 'Build service endpoints with Views.',
          'package' => 'Services',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'services',
            1 => 'views',
          ),
          'files' => 
          array (
            0 => 'includes/views/views_plugin_display_services.inc',
          ),
          'version' => '7.x-1.1',
          'project' => 'services_views',
          'datestamp' => '1440452640',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'services_views',
        'version' => '7.x-1.1',
      ),
      'memcache_admin' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/memcache/memcache_admin/memcache_admin.module',
        'basename' => 'memcache_admin.module',
        'name' => 'memcache_admin',
        'info' => 
        array (
          'name' => 'Memcache Admin',
          'description' => 'Adds a User Interface to monitor the Memcache for this site.',
          'core' => '7.x',
          'package' => 'Performance and scalability',
          'configure' => 'admin/config/system/memcache',
          'version' => '7.x-1.5',
          'project' => 'memcache',
          'datestamp' => '1422088394',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7001',
        'project' => 'memcache',
        'version' => '7.x-1.5',
      ),
      'memcache' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/memcache/memcache.module',
        'basename' => 'memcache.module',
        'name' => 'memcache',
        'info' => 
        array (
          'name' => 'Memcache',
          'description' => 'High performance integration with memcache.',
          'package' => 'Performance and scalability',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'memcache.inc',
            1 => 'tests/memcache.test',
            2 => 'tests/memcache-session.test',
            3 => 'tests/memcache-lock.test',
          ),
          'version' => '7.x-1.5',
          'project' => 'memcache',
          'datestamp' => '1422088394',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'project' => 'memcache',
        'version' => '7.x-1.5',
      ),
      'globalredirect' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/globalredirect/globalredirect.module',
        'basename' => 'globalredirect.module',
        'name' => 'globalredirect',
        'info' => 
        array (
          'name' => 'Global Redirect',
          'description' => 'Searches for an alias of the current URL and 301 redirects if found. Stops duplicate content arising when path module is enabled.',
          'package' => 'Path management',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'globalredirect.test',
          ),
          'configure' => 'admin/config/system/globalredirect',
          'version' => '7.x-1.5',
          'project' => 'globalredirect',
          'datestamp' => '1339748779',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '6101',
        'project' => 'globalredirect',
        'version' => '7.x-1.5',
      ),
      'webform_rules' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/webform_rules/webform_rules.module',
        'basename' => 'webform_rules.module',
        'name' => 'webform_rules',
        'info' => 
        array (
          'name' => 'Webform Rules',
          'core' => '7.x',
          'description' => 'Adds rules integration for webform submissions.',
          'package' => 'Webform',
          'files' => 
          array (
            0 => 'webform_rules.module',
            1 => 'webform_rules.rules.inc',
          ),
          'dependencies' => 
          array (
            0 => 'webform (>=7.x-3.x)',
            1 => 'rules',
          ),
          'version' => '7.x-1.6',
          'project' => 'webform_rules',
          'datestamp' => '1363428917',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'webform_rules',
        'version' => '7.x-1.6',
      ),
      'panels_extra_layouts' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/panels_extra_layouts/panels_extra_layouts.module',
        'basename' => 'panels_extra_layouts.module',
        'name' => 'panels_extra_layouts',
        'info' => 
        array (
          'name' => 'Panels Extra Layouts',
          'description' => 'Additional layouts for the Panels module.',
          'package' => 'Panels',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'panels',
          ),
          'files' => 
          array (
            0 => 'panels_extra_layouts.module',
          ),
          'version' => '7.x-2.0',
          'project' => 'panels_extra_layouts',
          'datestamp' => '1382635227',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'panels_extra_layouts',
        'version' => '7.x-2.0',
      ),
      'name' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/name/name.module',
        'basename' => 'name.module',
        'name' => 'name',
        'info' => 
        array (
          'name' => 'Name Field',
          'description' => 'Defines a persons name field type.',
          'dependencies' => 
          array (
            0 => 'field',
          ),
          'package' => 'Fields',
          'version' => '7.x-1.10',
          'core' => '7.x',
          'recommends' => 
          array (
            0 => 'namedb',
          ),
          'configure' => 'admin/config/content/name',
          'files' => 
          array (
            0 => 'tests/name.test',
            1 => 'includes/name_handler_filter_name_fulltext.inc',
            2 => 'name.migrate.inc',
          ),
          'project' => 'name',
          'datestamp' => '1448492189',
          'php' => '5.2.4',
        ),
        'schema_version' => '7002',
        'project' => 'name',
        'version' => '7.x-1.10',
      ),
      'webform_layout' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/webform_layout/webform_layout.module',
        'basename' => 'webform_layout.module',
        'name' => 'webform_layout',
        'info' => 
        array (
          'name' => 'Webform Layout',
          'description' => 'Add a layout container type element to Webform.',
          'core' => '7.x',
          'package' => 'Webform',
          'dependencies' => 
          array (
            0 => 'webform (3.x)',
          ),
          'version' => '7.x-1.2',
          'project' => 'webform_layout',
          'datestamp' => '1407362028',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'webform_layout',
        'version' => '7.x-1.2',
      ),
      'entityreference_behavior_example' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/entityreference/examples/entityreference_behavior_example/entityreference_behavior_example.module',
        'basename' => 'entityreference_behavior_example.module',
        'name' => 'entityreference_behavior_example',
        'info' => 
        array (
          'name' => 'Entity Reference Behavior Example',
          'description' => 'Provides some example code for implementing Entity Reference behaviors.',
          'core' => '7.x',
          'package' => 'Fields',
          'dependencies' => 
          array (
            0 => 'entityreference',
          ),
          'version' => '7.x-1.5',
          'project' => 'entityreference',
          'datestamp' => '1502895850',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'entityreference',
        'version' => '7.x-1.5',
      ),
      'entityreference' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/entityreference/entityreference.module',
        'basename' => 'entityreference.module',
        'name' => 'entityreference',
        'info' => 
        array (
          'name' => 'Entity Reference',
          'description' => 'Provides a field that can reference other entities.',
          'package' => 'Fields',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'entity',
            1 => 'ctools',
          ),
          'test_dependencies' => 
          array (
            0 => 'feeds',
            1 => 'views',
          ),
          'files' => 
          array (
            0 => 'entityreference.migrate.inc',
            1 => 'plugins/selection/abstract.inc',
            2 => 'plugins/selection/views.inc',
            3 => 'plugins/behavior/abstract.inc',
            4 => 'views/entityreference_plugin_display.inc',
            5 => 'views/entityreference_plugin_style.inc',
            6 => 'views/entityreference_plugin_row_fields.inc',
            7 => 'tests/entityreference.handlers.test',
            8 => 'tests/entityreference.taxonomy.test',
            9 => 'tests/entityreference.admin.test',
            10 => 'tests/entityreference.feeds.test',
            11 => 'tests/entityreference.entity_translation.test',
          ),
          'version' => '7.x-1.5',
          'project' => 'entityreference',
          'datestamp' => '1502895850',
          'php' => '5.2.4',
        ),
        'schema_version' => '7100',
        'project' => 'entityreference',
        'version' => '7.x-1.5',
      ),
      'menu_target' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/menu_target/menu_target.module',
        'basename' => 'menu_target.module',
        'name' => 'menu_target',
        'info' => 
        array (
          'name' => 'Menu target',
          'description' => 'Allows administrators to choose wether or not to open menu items in a new window.',
          'package' => 'Other',
          'core' => '7.x',
          'configure' => 'admin/structure/menu/settings',
          'version' => '7.x-1.4',
          'project' => 'menu_target',
          'datestamp' => '1412270937',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'menu_target',
        'version' => '7.x-1.4',
      ),
      'googleanalytics' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/google_analytics/googleanalytics.module',
        'basename' => 'googleanalytics.module',
        'name' => 'googleanalytics',
        'info' => 
        array (
          'name' => 'Google Analytics',
          'description' => 'Allows your site to be tracked by Google Analytics by adding a Javascript tracking code to every page.',
          'core' => '7.x',
          'package' => 'Statistics',
          'configure' => 'admin/config/system/googleanalytics',
          'files' => 
          array (
            0 => 'googleanalytics.test',
          ),
          'test_dependencies' => 
          array (
            0 => 'token',
          ),
          'version' => '7.x-2.3',
          'project' => 'google_analytics',
          'datestamp' => '1470779953',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7205',
        'project' => 'google_analytics',
        'version' => '7.x-2.3',
      ),
      'print_pdf_mpdf' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/print/print_pdf/lib_handlers/print_pdf_mpdf/print_pdf_mpdf.module',
        'basename' => 'print_pdf_mpdf.module',
        'name' => 'print_pdf_mpdf',
        'info' => 
        array (
          'name' => 'mPDF library handler',
          'description' => 'PDF generation library using mPDF.',
          'core' => '7.x',
          'package' => 'Printer, email and PDF versions',
          'dependencies' => 
          array (
            0 => 'print_pdf',
          ),
          'version' => '7.x-2.0',
          'project' => 'print',
          'datestamp' => '1396426766',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'print',
        'version' => '7.x-2.0',
      ),
      'print_pdf_dompdf' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/print/print_pdf/lib_handlers/print_pdf_dompdf/print_pdf_dompdf.module',
        'basename' => 'print_pdf_dompdf.module',
        'name' => 'print_pdf_dompdf',
        'info' => 
        array (
          'name' => 'dompdf library handler',
          'description' => 'PDF generation library using dompdf.',
          'core' => '7.x',
          'package' => 'Printer, email and PDF versions',
          'dependencies' => 
          array (
            0 => 'print_pdf',
          ),
          'configure' => 'admin/config/user-interface/print/pdf/dompdf',
          'version' => '7.x-2.0',
          'project' => 'print',
          'datestamp' => '1396426766',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'print',
        'version' => '7.x-2.0',
      ),
      'print_pdf_tcpdf' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/print/print_pdf/lib_handlers/print_pdf_tcpdf/print_pdf_tcpdf.module',
        'basename' => 'print_pdf_tcpdf.module',
        'name' => 'print_pdf_tcpdf',
        'info' => 
        array (
          'name' => 'TCPDF library handler',
          'description' => 'PDF generation library using TCPDF.',
          'core' => '7.x',
          'package' => 'Printer, email and PDF versions',
          'dependencies' => 
          array (
            0 => 'print_pdf',
          ),
          'files' => 
          array (
            0 => 'print_pdf_tcpdf.class.inc',
          ),
          'configure' => 'admin/config/user-interface/print/pdf/tcpdf',
          'version' => '7.x-2.0',
          'project' => 'print',
          'datestamp' => '1396426766',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'print',
        'version' => '7.x-2.0',
      ),
      'print_pdf_wkhtmltopdf' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/print/print_pdf/lib_handlers/print_pdf_wkhtmltopdf/print_pdf_wkhtmltopdf.module',
        'basename' => 'print_pdf_wkhtmltopdf.module',
        'name' => 'print_pdf_wkhtmltopdf',
        'info' => 
        array (
          'name' => 'wkhtmltopdf library handler',
          'description' => 'PDF generation library using wkhtmltopdf.',
          'core' => '7.x',
          'package' => 'Printer, email and PDF versions',
          'dependencies' => 
          array (
            0 => 'print_pdf',
          ),
          'configure' => 'admin/config/user-interface/print/pdf/wkhtmltopdf',
          'version' => '7.x-2.0',
          'project' => 'print',
          'datestamp' => '1396426766',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'print',
        'version' => '7.x-2.0',
      ),
      'print_pdf' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/print/print_pdf/print_pdf.module',
        'basename' => 'print_pdf.module',
        'name' => 'print_pdf',
        'info' => 
        array (
          'name' => 'PDF version',
          'description' => 'Adds the capability to export pages as PDF. Requires a PDF library and the respective handler module.',
          'core' => '7.x',
          'package' => 'Printer, email and PDF versions',
          'dependencies' => 
          array (
            0 => 'print',
          ),
          'configure' => 'admin/config/user-interface/print/pdf',
          'version' => '7.x-2.0',
          'project' => 'print',
          'datestamp' => '1396426766',
          'php' => '5.2.4',
        ),
        'schema_version' => '7205',
        'project' => 'print',
        'version' => '7.x-2.0',
      ),
      'print_ui' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/print/print_ui/print_ui.module',
        'basename' => 'print_ui.module',
        'name' => 'print_ui',
        'info' => 
        array (
          'name' => 'Printer-friendly pages UI',
          'description' => 'Manages the printer-friendly versions link display conditions. Without this module, those links are not displayed.',
          'core' => '7.x',
          'package' => 'Printer, email and PDF versions',
          'dependencies' => 
          array (
            0 => 'print',
          ),
          'configure' => 'admin/config/user-interface/print/ui',
          'version' => '7.x-2.0',
          'project' => 'print',
          'datestamp' => '1396426766',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'print',
        'version' => '7.x-2.0',
      ),
      'print_mail' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/print/print_mail/print_mail.module',
        'basename' => 'print_mail.module',
        'name' => 'print_mail',
        'info' => 
        array (
          'name' => 'Send by email',
          'description' => 'Provides the capability to send the web page by email',
          'core' => '7.x',
          'package' => 'Printer, email and PDF versions',
          'dependencies' => 
          array (
            0 => 'print',
          ),
          'configure' => 'admin/config/user-interface/print/email',
          'version' => '7.x-2.0',
          'project' => 'print',
          'datestamp' => '1396426766',
          'php' => '5.2.4',
        ),
        'schema_version' => '7203',
        'project' => 'print',
        'version' => '7.x-2.0',
      ),
      'print_epub_phpepub' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/print/print_epub/lib_handlers/print_epub_phpepub/print_epub_phpepub.module',
        'basename' => 'print_epub_phpepub.module',
        'name' => 'print_epub_phpepub',
        'info' => 
        array (
          'name' => 'PHPePub library handler',
          'description' => 'EPUB generation library using PHPePub.',
          'core' => '7.x',
          'package' => 'Printer, email and PDF versions',
          'dependencies' => 
          array (
            0 => 'print_epub',
          ),
          'version' => '7.x-2.0',
          'project' => 'print',
          'datestamp' => '1396426766',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'print',
        'version' => '7.x-2.0',
      ),
      'print_epub' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/print/print_epub/print_epub.module',
        'basename' => 'print_epub.module',
        'name' => 'print_epub',
        'info' => 
        array (
          'name' => 'EPUB version',
          'description' => 'Adds the capability to export pages as EPUB. Requires an EPUB library and the respective handler module.',
          'core' => '7.x',
          'package' => 'Printer, email and PDF versions',
          'dependencies' => 
          array (
            0 => 'print',
          ),
          'configure' => 'admin/config/user-interface/print/epub',
          'version' => '7.x-2.0',
          'project' => 'print',
          'datestamp' => '1396426766',
          'php' => '5.2.4',
        ),
        'schema_version' => '7203',
        'project' => 'print',
        'version' => '7.x-2.0',
      ),
      'print' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/print/print.module',
        'basename' => 'print.module',
        'name' => 'print',
        'info' => 
        array (
          'name' => 'Printer-friendly pages',
          'description' => 'Generates a printer-friendly version of Drupal pages.',
          'core' => '7.x',
          'package' => 'Printer, email and PDF versions',
          'files' => 
          array (
            0 => 'print_join_page_counter.inc',
          ),
          'dependencies' => 
          array (
            0 => 'node',
          ),
          'configure' => 'admin/config/user-interface/print',
          'version' => '7.x-2.0',
          'project' => 'print',
          'datestamp' => '1396426766',
          'php' => '5.2.4',
        ),
        'schema_version' => '7203',
        'project' => 'print',
        'version' => '7.x-2.0',
      ),
      'spamspan' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/spamspan/spamspan.module',
        'basename' => 'spamspan.module',
        'name' => 'spamspan',
        'info' => 
        array (
          'name' => 'SpamSpan',
          'description' => 'The SpamSpan module obfuscates email addresses to help prevent spambots from collecting them.  It implements the technique at http://www.spamspan.com.',
          'package' => 'Input filters',
          'dependencies' => 
          array (
            0 => 'filter',
          ),
          'core' => '7.x',
          'files' => 
          array (
            0 => 'spamspan.module',
            1 => 'spamspan.test',
          ),
          'scripts' => 
          array (
            0 => 'spamspan.js',
          ),
          'version' => '7.x-1.1-beta1',
          'project' => 'spamspan',
          'datestamp' => '1292698546',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'spamspan',
        'version' => '7.x-1.1-beta1',
      ),
      'typogrify' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/typogrify/typogrify.module',
        'basename' => 'typogrify.module',
        'name' => 'typogrify',
        'info' => 
        array (
          'name' => 'Typogrify',
          'description' => 'Adds typographic refinements.',
          'package' => 'Input filters',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'typogrify.class.php',
            1 => 'tests/typogrify-smartypants.test',
            2 => 'tests/typogrify.class.test',
          ),
          'version' => '7.x-1.0-rc10',
          'project' => 'typogrify',
          'datestamp' => '1429046883',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'typogrify',
        'version' => '7.x-1.0-rc10',
      ),
      'block_api' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/block_api/block_api.module',
        'basename' => 'block_api.module',
        'name' => 'block_api',
        'info' => 
        array (
          'name' => 'Block API',
          'description' => 'Allows to create block instances of predefined block types.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'block',
          ),
          'files' => 
          array (
            0 => 'block_api.module',
            1 => 'tests/block_api.test',
          ),
          'version' => 'deb44570f0ef9ddc68d1cafe207ff29e69c70f36',
          'project' => 'block_api',
          'datestamp' => '1551303424',
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'project' => 'block_api',
        'version' => 'deb44570f0ef9ddc68d1cafe207ff29e69c70f36',
      ),
      'menu_icons' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/menu_icons/menu_icons.module',
        'basename' => 'menu_icons.module',
        'name' => 'menu_icons',
        'info' => 
        array (
          'name' => 'Menu Icons',
          'description' => 'Associates icons with menu items',
          'dependencies' => 
          array (
            0 => 'menu',
            1 => 'image',
          ),
          'core' => '7.x',
          'configure' => 'admin/config/user-interface/menu_icons',
          'files' => 
          array (
            0 => 'menu_icons.install',
            1 => 'menu_icons.module',
            2 => 'menu_icons_css_item.tpl.php',
          ),
          'version' => '7.x-3.0-beta4',
          'project' => 'menu_icons',
          'datestamp' => '1363992011',
          'php' => '5.2.4',
        ),
        'schema_version' => '7200',
        'project' => 'menu_icons',
        'version' => '7.x-3.0-beta4',
      ),
      'pathauto' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/pathauto/pathauto.module',
        'basename' => 'pathauto.module',
        'name' => 'pathauto',
        'info' => 
        array (
          'name' => 'Pathauto',
          'description' => 'Provides a mechanism for modules to automatically generate aliases for the content they manage.',
          'dependencies' => 
          array (
            0 => 'path',
            1 => 'token',
          ),
          'core' => '7.x',
          'files' => 
          array (
            0 => 'pathauto.migrate.inc',
            1 => 'pathauto.test',
          ),
          'configure' => 'admin/config/search/path/patterns',
          'recommends' => 
          array (
            0 => 'redirect',
          ),
          'version' => '7.x-1.3',
          'project' => 'pathauto',
          'datestamp' => '1444232655',
          'php' => '5.2.4',
        ),
        'schema_version' => '7006',
        'project' => 'pathauto',
        'version' => '7.x-1.3',
      ),
      'ultimate_cron' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/ultimate_cron/ultimate_cron.module',
        'basename' => 'ultimate_cron.module',
        'name' => 'ultimate_cron',
        'info' => 
        array (
          'name' => 'Ultimate Cron',
          'description' => 'Cron',
          'core' => '7.x',
          'php' => '5.3',
          'dependencies' => 
          array (
            0 => 'ctools',
          ),
          'files' => 
          array (
            0 => 'tests/rules.test',
            1 => 'CronRule.class.php',
            2 => 'ultimate_cron.lock.inc',
            3 => 'ultimate_cron.memcache-lock.inc',
            4 => 'ultimate_cron.job.inc',
            5 => 'ultimate_cron.plugin.inc',
            6 => 'ultimate_cron.progress.inc',
            7 => 'ultimate_cron.memcache-progress.inc',
            8 => 'ultimate_cron.signal.inc',
            9 => 'ultimate_cron.cache-signal.inc',
          ),
          'configure' => 'admin/config/system/cron/settings',
          'version' => '7.x-2.0',
          'project' => 'ultimate_cron',
          'datestamp' => '1472716411',
        ),
        'schema_version' => '7206',
        'project' => 'ultimate_cron',
        'version' => '7.x-2.0',
      ),
      'view_unpublished' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/view_unpublished/view_unpublished.module',
        'basename' => 'view_unpublished.module',
        'name' => 'view_unpublished',
        'info' => 
        array (
          'name' => 'View Unpublished',
          'description' => 'Select which roles should be able to see unpublished nodes.',
          'package' => 'Permissions',
          'version' => '7.x-1.1',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'view_unpublished_handler_filter_node_status.inc',
          ),
          'project' => 'view_unpublished',
          'datestamp' => '1339127836',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'view_unpublished',
        'version' => '7.x-1.1',
      ),
      'crypt_blowfish' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/clients/connections/clients_drupal/crypt_blowfish/crypt_blowfish.module',
        'basename' => 'crypt_blowfish.module',
        'name' => 'crypt_blowfish',
        'info' => 
        array (
          'name' => 'PEAR Crypt Blowfish',
          'description' => 'Provides integration with PEAR Crypt_Blowfish class for password storage. This module is strongly recommended if using Drupal Services clients.',
          'core' => '7.x',
          'php' => '5.1',
          'package' => 'Clients',
          'version' => '7.x-3.1',
          'project' => 'clients',
          'datestamp' => '1436261343',
          'dependencies' => 
          array (
          ),
        ),
        'schema_version' => 0,
        'project' => 'clients',
        'version' => '7.x-3.1',
      ),
      'clients_drupal' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/clients/connections/clients_drupal/clients_drupal.module',
        'basename' => 'clients_drupal.module',
        'name' => 'clients_drupal',
        'info' => 
        array (
          'name' => 'Drupal clients XMLRPC',
          'description' => 'Provides connections to remote Drupal sites running Services module with XMLRPC endpoints.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'clients',
          ),
          'package' => 'Clients',
          'files' => 
          array (
            0 => 'clients_drupal.inc',
            1 => 'clients_drupal.testing.inc',
          ),
          'version' => '7.x-3.1',
          'project' => 'clients',
          'datestamp' => '1436261343',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'clients',
        'version' => '7.x-3.1',
      ),
      'clients_drupal_rest' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/clients/connections/clients_drupal_rest/clients_drupal_rest.module',
        'basename' => 'clients_drupal_rest.module',
        'name' => 'clients_drupal_rest',
        'info' => 
        array (
          'name' => 'Drupal clients REST',
          'description' => 'Provides connections to remote Drupal sites running Services module with REST endpoints.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'clients',
          ),
          'package' => 'Clients',
          'files' => 
          array (
            0 => 'clients_drupal_rest.inc',
            1 => 'clients_drupal_rest.testing.inc',
          ),
          'version' => '7.x-3.1',
          'project' => 'clients',
          'datestamp' => '1436261343',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'clients',
        'version' => '7.x-3.1',
      ),
      'clients_resource_remote_views_block' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/clients/resources/clients_resource_remote_views_block/clients_resource_remote_views_block.module',
        'basename' => 'clients_resource_remote_views_block.module',
        'name' => 'clients_resource_remote_views_block',
        'info' => 
        array (
          'name' => 'Remote Views Block',
          'description' => 'Provides a resource for blocks based on remote views.',
          'package' => 'Clients',
          'dependencies' => 
          array (
            0 => 'clients',
          ),
          'core' => '7.x',
          'files' => 
          array (
            0 => 'clients_resource_remote_views_block.resource.inc',
          ),
          'version' => '7.x-3.1',
          'project' => 'clients',
          'datestamp' => '1436261343',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'clients',
        'version' => '7.x-3.1',
      ),
      'clients' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/clients/clients.module',
        'basename' => 'clients.module',
        'name' => 'clients',
        'info' => 
        array (
          'name' => 'Clients',
          'description' => 'Basic service management and API for Web Services clients',
          'core' => '7.x',
          'package' => 'Clients',
          'configure' => 'admin/structure/clients',
          'dependencies' => 
          array (
            0 => 'entity',
            1 => 'ctools',
          ),
          'files' => 
          array (
            0 => 'includes/clients.connection.admin.inc',
            1 => 'includes/clients.entity.inc',
            2 => 'includes/clients.controller.inc',
            3 => 'includes/clients.ui.inc',
            4 => 'includes/clients.features.inc',
            5 => 'tests/clients.test',
          ),
          'version' => '7.x-3.1',
          'project' => 'clients',
          'datestamp' => '1436261343',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'clients',
        'version' => '7.x-3.1',
      ),
      'query_parameters_to_url' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/query_parameters_to_url/query_parameters_to_url.module',
        'basename' => 'query_parameters_to_url.module',
        'name' => 'query_parameters_to_url',
        'info' => 
        array (
          'name' => 'Query Parameters To URL',
          'description' => 'Rewrites URL query parameters into Clean URL components on specified paths.',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'query_parameters_to_url.test',
          ),
          'test_dependencies' => 
          array (
            0 => 'globalredirect',
          ),
          'version' => '7.x-1.4',
          'project' => 'query_parameters_to_url',
          'datestamp' => '1421087278',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'query_parameters_to_url',
        'version' => '7.x-1.4',
      ),
      'webform_validation' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/webform_validation/webform_validation.module',
        'basename' => 'webform_validation.module',
        'name' => 'webform_validation',
        'info' => 
        array (
          'name' => 'Webform Validation',
          'description' => 'Add validation rules to Webforms.',
          'core' => '7.x',
          'package' => 'Webform',
          'dependencies' => 
          array (
            0 => 'webform',
          ),
          'files' => 
          array (
            0 => 'webform_validation.admin.inc',
            1 => 'webform_validation.install',
            2 => 'webform_validation.module',
            3 => 'webform_validation.rules.inc',
            4 => 'webform_validation.validators.inc',
          ),
          'php' => '5.3',
          'version' => '7.x-1.11',
          'project' => 'webform_validation',
          'datestamp' => '1455735566',
        ),
        'schema_version' => '7106',
        'project' => 'webform_validation',
        'version' => '7.x-1.11',
      ),
      'elements' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/elements/elements.module',
        'basename' => 'elements.module',
        'name' => 'elements',
        'info' => 
        array (
          'name' => 'Elements',
          'description' => 'Provides a library of Form API elements.',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'elements.module',
            1 => 'elements.theme.inc',
          ),
          'version' => '7.x-1.4',
          'project' => 'elements',
          'datestamp' => '1370667652',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'elements',
        'version' => '7.x-1.4',
      ),
      'better_formats' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/better_formats/better_formats.module',
        'basename' => 'better_formats.module',
        'name' => 'better_formats',
        'info' => 
        array (
          'name' => 'Better Formats',
          'description' => 'Enhances the core input format system by managing input format defaults and settings.',
          'core' => '7.x',
          'configure' => 'admin/config/content/formats',
          'version' => '7.x-1.0-beta2',
          'project' => 'better_formats',
          'datestamp' => '1453922961',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'project' => 'better_formats',
        'version' => '7.x-1.0-beta2',
      ),
      'services_api_key_auth' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/services_api_key_auth/services_api_key_auth.module',
        'basename' => 'services_api_key_auth.module',
        'name' => 'services_api_key_auth',
        'info' => 
        array (
          'name' => 'Services API Key Authentication',
          'description' => 'Enable the ability to set an API Key for services endpoints.',
          'package' => 'Services',
          'dependencies' => 
          array (
            0 => 'services',
          ),
          'core' => '7.x',
          'configure' => 'admin/structure/services/api_key_settings',
          'version' => '7.x-1.3',
          'project' => 'services_api_key_auth',
          'datestamp' => '1494880990',
          'php' => '5.2.4',
        ),
        'schema_version' => '7001',
        'project' => 'services_api_key_auth',
        'version' => '7.x-1.3',
      ),
      'date_api' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/date/date_api/date_api.module',
        'basename' => 'date_api.module',
        'name' => 'date_api',
        'info' => 
        array (
          'name' => 'Date API',
          'description' => 'A Date API that can be used by other modules.',
          'package' => 'Date/Time',
          'core' => '7.x',
          'php' => '5.2',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'date.css',
            ),
          ),
          'files' => 
          array (
            0 => 'date_api.module',
            1 => 'date_api_sql.inc',
          ),
          'version' => '7.x-2.9',
          'project' => 'date',
          'datestamp' => '1441727353',
          'dependencies' => 
          array (
          ),
        ),
        'schema_version' => '7001',
        'project' => 'date',
        'version' => '7.x-2.9',
      ),
      'date_repeat_field' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/date/date_repeat_field/date_repeat_field.module',
        'basename' => 'date_repeat_field.module',
        'name' => 'date_repeat_field',
        'info' => 
        array (
          'name' => 'Date Repeat Field',
          'description' => 'Creates the option of Repeating date fields and manages Date fields that use the Date Repeat API.',
          'dependencies' => 
          array (
            0 => 'date_api',
            1 => 'date',
            2 => 'date_repeat',
          ),
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'date_repeat_field.css',
            ),
          ),
          'package' => 'Date/Time',
          'core' => '7.x',
          'version' => '7.x-2.9',
          'project' => 'date',
          'datestamp' => '1441727353',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'date',
        'version' => '7.x-2.9',
      ),
      'date_popup' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/date/date_popup/date_popup.module',
        'basename' => 'date_popup.module',
        'name' => 'date_popup',
        'info' => 
        array (
          'name' => 'Date Popup',
          'description' => 'Enables jquery popup calendars and time entry widgets for selecting dates and times.',
          'dependencies' => 
          array (
            0 => 'date_api',
          ),
          'package' => 'Date/Time',
          'core' => '7.x',
          'configure' => 'admin/config/date/date_popup',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'themes/datepicker.1.7.css',
            ),
          ),
          'version' => '7.x-2.9',
          'project' => 'date',
          'datestamp' => '1441727353',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'date',
        'version' => '7.x-2.9',
      ),
      'date_migrate_example' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/date/date_migrate/date_migrate_example/date_migrate_example.module',
        'basename' => 'date_migrate_example.module',
        'name' => 'date_migrate_example',
        'info' => 
        array (
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'date',
            1 => 'date_repeat',
            2 => 'date_repeat_field',
            3 => 'features',
            4 => 'migrate',
          ),
          'description' => 'Examples of migrating with the Date module',
          'features' => 
          array (
            'field' => 
            array (
              0 => 'node-date_migrate_example-body',
              1 => 'node-date_migrate_example-field_date',
              2 => 'node-date_migrate_example-field_date_range',
              3 => 'node-date_migrate_example-field_date_repeat',
              4 => 'node-date_migrate_example-field_datestamp',
              5 => 'node-date_migrate_example-field_datestamp_range',
              6 => 'node-date_migrate_example-field_datetime',
              7 => 'node-date_migrate_example-field_datetime_range',
            ),
            'node' => 
            array (
              0 => 'date_migrate_example',
            ),
          ),
          'files' => 
          array (
            0 => 'date_migrate_example.migrate.inc',
          ),
          'name' => 'Date Migration Example',
          'package' => 'Features',
          'project' => 'date',
          'version' => '7.x-2.9',
          'datestamp' => '1441727353',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'date',
        'version' => '7.x-2.9',
      ),
      'date_repeat' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/date/date_repeat/date_repeat.module',
        'basename' => 'date_repeat.module',
        'name' => 'date_repeat',
        'info' => 
        array (
          'name' => 'Date Repeat API',
          'description' => 'A Date Repeat API to calculate repeating dates and times from iCal rules.',
          'dependencies' => 
          array (
            0 => 'date_api',
          ),
          'package' => 'Date/Time',
          'core' => '7.x',
          'php' => '5.2',
          'files' => 
          array (
            0 => 'tests/date_repeat.test',
            1 => 'tests/date_repeat_form.test',
          ),
          'version' => '7.x-2.9',
          'project' => 'date',
          'datestamp' => '1441727353',
        ),
        'schema_version' => 0,
        'project' => 'date',
        'version' => '7.x-2.9',
      ),
      'date_tools' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/date/date_tools/date_tools.module',
        'basename' => 'date_tools.module',
        'name' => 'date_tools',
        'info' => 
        array (
          'name' => 'Date Tools',
          'description' => 'Tools to import and auto-create dates and calendars.',
          'dependencies' => 
          array (
            0 => 'date',
          ),
          'package' => 'Date/Time',
          'core' => '7.x',
          'configure' => 'admin/config/date/tools',
          'files' => 
          array (
            0 => 'tests/date_tools.test',
          ),
          'version' => '7.x-2.9',
          'project' => 'date',
          'datestamp' => '1441727353',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'date',
        'version' => '7.x-2.9',
      ),
      'date_context' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/date/date_context/date_context.module',
        'basename' => 'date_context.module',
        'name' => 'date_context',
        'info' => 
        array (
          'name' => 'Date Context',
          'description' => 'Adds an option to the Context module to set a context condition based on the value of a date field.',
          'package' => 'Date/Time',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'date',
            1 => 'context',
          ),
          'files' => 
          array (
            0 => 'date_context.module',
            1 => 'plugins/date_context_date_condition.inc',
          ),
          'version' => '7.x-2.9',
          'project' => 'date',
          'datestamp' => '1441727353',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'date',
        'version' => '7.x-2.9',
      ),
      'date_all_day' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/date/date_all_day/date_all_day.module',
        'basename' => 'date_all_day.module',
        'name' => 'date_all_day',
        'info' => 
        array (
          'name' => 'Date All Day',
          'description' => 'Adds \'All Day\' functionality to date fields, including an \'All Day\' theme and \'All Day\' checkboxes for the Date select and Date popup widgets.',
          'dependencies' => 
          array (
            0 => 'date_api',
            1 => 'date',
          ),
          'package' => 'Date/Time',
          'core' => '7.x',
          'version' => '7.x-2.9',
          'project' => 'date',
          'datestamp' => '1441727353',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'date',
        'version' => '7.x-2.9',
      ),
      'date_views' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/date/date_views/date_views.module',
        'basename' => 'date_views.module',
        'name' => 'date_views',
        'info' => 
        array (
          'name' => 'Date Views',
          'description' => 'Views integration for date fields and date functionality.',
          'package' => 'Date/Time',
          'dependencies' => 
          array (
            0 => 'date_api',
            1 => 'views',
          ),
          'core' => '7.x',
          'php' => '5.2',
          'files' => 
          array (
            0 => 'includes/date_views_argument_handler.inc',
            1 => 'includes/date_views_argument_handler_simple.inc',
            2 => 'includes/date_views_filter_handler.inc',
            3 => 'includes/date_views_filter_handler_simple.inc',
            4 => 'includes/date_views.views.inc',
            5 => 'includes/date_views_plugin_pager.inc',
          ),
          'version' => '7.x-2.9',
          'project' => 'date',
          'datestamp' => '1441727353',
        ),
        'schema_version' => '7200',
        'project' => 'date',
        'version' => '7.x-2.9',
      ),
      'date' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/date/date.module',
        'basename' => 'date.module',
        'name' => 'date',
        'info' => 
        array (
          'name' => 'Date',
          'description' => 'Makes date/time fields available.',
          'dependencies' => 
          array (
            0 => 'date_api',
          ),
          'package' => 'Date/Time',
          'core' => '7.x',
          'php' => '5.2',
          'files' => 
          array (
            0 => 'date.migrate.inc',
            1 => 'tests/date_api.test',
            2 => 'tests/date.test',
            3 => 'tests/date_field.test',
            4 => 'tests/date_migrate.test',
            5 => 'tests/date_validation.test',
            6 => 'tests/date_timezone.test',
            7 => 'tests/date_views_pager.test',
            8 => 'tests/date_views_popup.test',
          ),
          'version' => '7.x-2.9',
          'project' => 'date',
          'datestamp' => '1441727353',
        ),
        'schema_version' => '7004',
        'project' => 'date',
        'version' => '7.x-2.9',
      ),
      'context_omega' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/context_omega/context_omega.module',
        'basename' => 'context_omega.module',
        'name' => 'context_omega',
        'info' => 
        array (
          'name' => 'Context Omega',
          'dependencies' => 
          array (
            0 => 'context',
          ),
          'description' => 'Provide a reaction to switch layout for omega theme.',
          'package' => 'Context',
          'core' => '7.x',
          'version' => '7.x-1.1',
          'project' => 'context_omega',
          'datestamp' => '1374658571',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'context_omega',
        'version' => '7.x-1.1',
      ),
      'wsclient_rest' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/wsclient/wsclient_rest/wsclient_rest.module',
        'basename' => 'wsclient_rest.module',
        'name' => 'wsclient_rest',
        'info' => 
        array (
          'name' => 'Web service client REST',
          'description' => 'Implements a REST endpoint to connect to REST services.',
          'package' => 'Services',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'wsclient_rest.module',
          ),
          'dependencies' => 
          array (
            0 => 'wsclient',
            1 => 'http_client',
          ),
          'version' => '7.x-1.0',
          'project' => 'wsclient',
          'datestamp' => '1366136535',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'wsclient',
        'version' => '7.x-1.0',
      ),
      'wsclient_examples' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/wsclient/wsclient_examples/wsclient_examples.module',
        'basename' => 'wsclient_examples.module',
        'name' => 'wsclient_examples',
        'info' => 
        array (
          'name' => 'Web service client examples',
          'description' => 'Example web services.',
          'package' => 'Services',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'wsclient_examples.test',
          ),
          'dependencies' => 
          array (
            0 => 'wsclient_soap',
            1 => 'wsclient_rest',
          ),
          'version' => '7.x-1.0',
          'project' => 'wsclient',
          'datestamp' => '1366136535',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'wsclient',
        'version' => '7.x-1.0',
      ),
      'wsclient_ui' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/wsclient/wsclient_ui/wsclient_ui.module',
        'basename' => 'wsclient_ui.module',
        'name' => 'wsclient_ui',
        'info' => 
        array (
          'name' => 'Web service client UI',
          'description' => 'Provides a user interface to administer web service descriptions.',
          'package' => 'Services',
          'core' => '7.x',
          'configure' => 'admin/config/services/wsclient',
          'files' => 
          array (
            0 => 'wsclient_ui.inc',
          ),
          'dependencies' => 
          array (
            0 => 'wsclient',
            1 => 'rules',
          ),
          'version' => '7.x-1.0',
          'project' => 'wsclient',
          'datestamp' => '1366136535',
          'php' => '5.2.4',
        ),
        'schema_version' => '7101',
        'project' => 'wsclient',
        'version' => '7.x-1.0',
      ),
      'wsclient_tester' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/wsclient/wsclient_tester/wsclient_tester.module',
        'basename' => 'wsclient_tester.module',
        'name' => 'wsclient_tester',
        'info' => 
        array (
          'name' => 'Web service client Tester',
          'description' => 'Extends the webservice client UI with a form for realtime web service debugging.',
          'core' => '7.x',
          'package' => 'Services',
          'dependencies' => 
          array (
            0 => 'wsclient_ui',
          ),
          'version' => '7.x-1.0',
          'project' => 'wsclient',
          'datestamp' => '1366136535',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'wsclient',
        'version' => '7.x-1.0',
      ),
      'wsclient_soap' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/wsclient/wsclient_soap/wsclient_soap.module',
        'basename' => 'wsclient_soap.module',
        'name' => 'wsclient_soap',
        'info' => 
        array (
          'name' => 'Web service client SOAP',
          'description' => 'Implements a SOAP endpoint to connect to SOAP services.',
          'package' => 'Services',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'wsclient_soap.module',
          ),
          'dependencies' => 
          array (
            0 => 'wsclient',
          ),
          'version' => '7.x-1.0',
          'project' => 'wsclient',
          'datestamp' => '1366136535',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'wsclient',
        'version' => '7.x-1.0',
      ),
      'wsclient' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/wsclient/wsclient.module',
        'basename' => 'wsclient.module',
        'name' => 'wsclient',
        'info' => 
        array (
          'name' => 'Web service client',
          'description' => 'Interact with remote sites, provides Rules integration.',
          'package' => 'Services',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'wsclient.features.inc',
            1 => 'wsclient.inc',
          ),
          'dependencies' => 
          array (
            0 => 'entity',
          ),
          'version' => '7.x-1.0',
          'project' => 'wsclient',
          'datestamp' => '1366136535',
          'php' => '5.2.4',
        ),
        'schema_version' => '7103',
        'project' => 'wsclient',
        'version' => '7.x-1.0',
      ),
      'image_captcha' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/captcha/image_captcha/image_captcha.module',
        'basename' => 'image_captcha.module',
        'name' => 'image_captcha',
        'info' => 
        array (
          'name' => 'Image CAPTCHA',
          'description' => 'Provides an image based CAPTCHA challenge.',
          'package' => 'Spam control',
          'dependencies' => 
          array (
            0 => 'captcha',
          ),
          'core' => '7.x',
          'configure' => 'admin/config/people/captcha/image_captcha',
          'files' => 
          array (
            0 => 'image_captcha.install',
            1 => 'image_captcha.module',
            2 => 'image_captcha.admin.inc',
            3 => 'image_captcha.user.inc',
          ),
          'version' => '7.x-1.3',
          'project' => 'captcha',
          'datestamp' => '1427464219',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'captcha',
        'version' => '7.x-1.3',
      ),
      'captcha' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/captcha/captcha.module',
        'basename' => 'captcha.module',
        'name' => 'captcha',
        'info' => 
        array (
          'name' => 'CAPTCHA',
          'description' => 'Base CAPTCHA module for adding challenges to arbitrary forms.',
          'package' => 'Spam control',
          'core' => '7.x',
          'configure' => 'admin/config/people/captcha',
          'files' => 
          array (
            0 => 'captcha.module',
            1 => 'captcha.inc',
            2 => 'captcha.admin.inc',
            3 => 'captcha.install',
            4 => 'captcha.test',
          ),
          'version' => '7.x-1.3',
          'project' => 'captcha',
          'datestamp' => '1427464219',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'project' => 'captcha',
        'version' => '7.x-1.3',
      ),
      'views_slideshow_cycle' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/views_slideshow/contrib/views_slideshow_cycle/views_slideshow_cycle.module',
        'basename' => 'views_slideshow_cycle.module',
        'name' => 'views_slideshow_cycle',
        'info' => 
        array (
          'name' => 'Views Slideshow: Cycle',
          'description' => 'Adds a Rotating slideshow mode to Views Slideshow.',
          'dependencies' => 
          array (
            0 => 'views_slideshow',
            1 => 'libraries',
          ),
          'package' => 'Views',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'views_slideshow_cycle.module',
            1 => 'views_slideshow_cycle.views_slideshow.inc',
            2 => 'theme/views_slideshow_cycle.theme.inc',
          ),
          'version' => '7.x-3.1',
          'project' => 'views_slideshow',
          'datestamp' => '1382584826',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'views_slideshow',
        'version' => '7.x-3.1',
      ),
      'views_slideshow' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/views_slideshow/views_slideshow.module',
        'basename' => 'views_slideshow.module',
        'name' => 'views_slideshow',
        'info' => 
        array (
          'name' => 'Views Slideshow',
          'description' => 'Provides a View style that displays rows as a jQuery slideshow.  This is an API and requires Views Slideshow Cycle or another module that supports the API.',
          'dependencies' => 
          array (
            0 => 'views (>=3.0)',
          ),
          'package' => 'Views',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'views_slideshow.module',
            1 => 'theme/views_slideshow.theme.inc',
            2 => 'views_slideshow.views.inc',
            3 => 'views_slideshow_plugin_style_slideshow.inc',
          ),
          'version' => '7.x-3.1',
          'project' => 'views_slideshow',
          'datestamp' => '1382584826',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'views_slideshow',
        'version' => '7.x-3.1',
      ),
      'bean_usage' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/bean/bean_usage/bean_usage.module',
        'basename' => 'bean_usage.module',
        'name' => 'bean_usage',
        'info' => 
        array (
          'name' => 'Bean Usage',
          'description' => 'View Bean (Block Entities) Usage',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'bean',
            1 => 'blockreference',
          ),
          'package' => 'Bean',
          'version' => '7.x-1.11',
          'project' => 'bean',
          'datestamp' => '1470638340',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'bean',
        'version' => '7.x-1.11',
      ),
      'bean_admin_ui' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/bean/bean_admin_ui/bean_admin_ui.module',
        'basename' => 'bean_admin_ui.module',
        'name' => 'bean_admin_ui',
        'info' => 
        array (
          'name' => 'Bean Admin UI',
          'description' => 'Add the ability to create Block Types in the UI',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'bean_admin_ui.module',
            1 => 'plugins/BeanCustom.class.php',
          ),
          'dependencies' => 
          array (
            0 => 'bean',
          ),
          'configure' => 'admin/structure/block-types',
          'package' => 'Bean',
          'version' => '7.x-1.11',
          'project' => 'bean',
          'datestamp' => '1470638340',
          'php' => '5.2.4',
        ),
        'schema_version' => '7003',
        'project' => 'bean',
        'version' => '7.x-1.11',
      ),
      'bean_uuid' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/bean/bean_uuid/bean_uuid.module',
        'basename' => 'bean_uuid.module',
        'name' => 'bean_uuid',
        'info' => 
        array (
          'name' => 'Bean UUID',
          'description' => 'Allow deploying bean blocks through Deploy and UUID modules.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'bean',
            1 => 'uuid',
          ),
          'package' => 'Bean',
          'version' => '7.x-1.11',
          'project' => 'bean',
          'datestamp' => '1470638340',
          'php' => '5.2.4',
        ),
        'schema_version' => '7201',
        'project' => 'bean',
        'version' => '7.x-1.11',
      ),
      'bean_entitycache' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/bean/bean_entitycache/bean_entitycache.module',
        'basename' => 'bean_entitycache.module',
        'name' => 'bean_entitycache',
        'info' => 
        array (
          'name' => 'Bean - Entitycache',
          'description' => 'Integrates the Bean module with the Entitycache module',
          'core' => '7.x',
          'package' => 'Performance and scalability',
          'files' => 
          array (
            0 => 'includes/bean_entitycache.core.inc',
          ),
          'dependencies' => 
          array (
            0 => 'bean',
            1 => 'entitycache',
          ),
          'version' => '7.x-1.11',
          'project' => 'bean',
          'datestamp' => '1470638340',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'bean',
        'version' => '7.x-1.11',
      ),
      'bean' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/bean/bean.module',
        'basename' => 'bean.module',
        'name' => 'bean',
        'info' => 
        array (
          'name' => 'Bean',
          'description' => 'Create Bean (Block Entities)',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'includes/bean.core.inc',
            1 => 'includes/bean.info.inc',
            2 => 'plugins/BeanPlugin.class.php',
            3 => 'plugins/BeanDefault.class.php',
            4 => 'includes/translation.handler.bean.inc',
            5 => 'includes/bean.inline_entity_form.inc',
            6 => 'views/views_handler_filter_bean_type.inc',
            7 => 'views/views_handler_field_bean_type.inc',
            8 => 'views/views_handler_field_bean_edit_link.inc',
            9 => 'views/views_handler_field_bean_delete_link.inc',
            10 => 'views/views_handler_field_bean_operations.inc',
            11 => 'bean.test',
          ),
          'dependencies' => 
          array (
            0 => 'entity',
            1 => 'ctools',
          ),
          'package' => 'Bean',
          'version' => '7.x-1.11',
          'project' => 'bean',
          'datestamp' => '1470638340',
          'php' => '5.2.4',
        ),
        'schema_version' => '7013',
        'project' => 'bean',
        'version' => '7.x-1.11',
      ),
      'field_permissions' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/field_permissions/field_permissions.module',
        'basename' => 'field_permissions.module',
        'name' => 'field_permissions',
        'info' => 
        array (
          'name' => 'Field Permissions',
          'description' => 'Set field-level permissions to create, update or view fields.',
          'package' => 'Fields',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'field_permissions.test',
          ),
          'configure' => 'admin/reports/fields/permissions',
          'version' => '7.x-1.0',
          'project' => 'field_permissions',
          'datestamp' => '1476649740',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7001',
        'project' => 'field_permissions',
        'version' => '7.x-1.0',
      ),
      'placeholder' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/placeholder/placeholder.module',
        'basename' => 'placeholder.module',
        'name' => 'placeholder',
        'info' => 
        array (
          'name' => 'Placeholder',
          'description' => 'Add support for the HTML5 placeholder attribute, with backward browser compatibility.',
          'core' => '7.x',
          'package' => 'Other',
          'dependencies' => 
          array (
            0 => 'libraries (>=7.x-2.2)',
          ),
          'version' => '7.x-1.1',
          'project' => 'placeholder',
          'datestamp' => '1411850355',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'placeholder',
        'version' => '7.x-1.1',
      ),
      'http_client_oauth' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/http_client/http_client_oauth.module',
        'basename' => 'http_client_oauth.module',
        'name' => 'http_client_oauth',
        'info' => 
        array (
          'name' => 'Http Client OAuth',
          'description' => 'Provides a OAuth authentication mechanism for the Http Client',
          'dependencies' => 
          array (
            0 => 'oauth_common',
            1 => 'http_client',
          ),
          'files' => 
          array (
            0 => 'includes/HttpClientOAuth.inc',
          ),
          'package' => 'Services - clients',
          'core' => '7.x',
          'version' => '7.x-2.4',
          'project' => 'http_client',
          'datestamp' => '1345646840',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'http_client',
        'version' => '7.x-2.4',
      ),
      'http_client' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/http_client/http_client.module',
        'basename' => 'http_client.module',
        'name' => 'http_client',
        'info' => 
        array (
          'name' => 'Http Client',
          'description' => 'Provides a Http client for use with the services Http server',
          'files' => 
          array (
            0 => 'includes/HttpClient.inc',
            1 => 'includes/HttpClientXMLFormatter.inc',
            2 => 'includes/HttpClientCurlDelegate.inc',
          ),
          'package' => 'Services - clients',
          'core' => '7.x',
          'version' => '7.x-2.4',
          'project' => 'http_client',
          'datestamp' => '1345646840',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'http_client',
        'version' => '7.x-2.4',
      ),
      'mediafield' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/media/modules/mediafield/mediafield.module',
        'basename' => 'mediafield.module',
        'name' => 'mediafield',
        'info' => 
        array (
          'name' => 'Media Field',
          'description' => 'Provides a field type that stores media-specific data. <em>Deprecated by the core File field type.</em>',
          'package' => 'Media',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'media',
          ),
          'version' => '7.x-2.19',
          'project' => 'media',
          'datestamp' => '1524677887',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'media',
        'version' => '7.x-2.19',
      ),
      'media_bulk_upload' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/media/modules/media_bulk_upload/media_bulk_upload.module',
        'basename' => 'media_bulk_upload.module',
        'name' => 'media_bulk_upload',
        'info' => 
        array (
          'name' => 'Media Bulk Upload',
          'description' => 'Adds support for uploading multiple files at a time.',
          'package' => 'Media',
          'core' => '7.x',
          'configure' => 'admin/config/media/browser',
          'dependencies' => 
          array (
            0 => 'media',
            1 => 'multiform (>= 7.x-1.3)',
            2 => 'plupload',
          ),
          'test_dependencies' => 
          array (
            0 => 'multiform',
            1 => 'plupload',
          ),
          'files' => 
          array (
            0 => 'includes/MediaBrowserBulkUpload.inc',
            1 => 'tests/media_bulk_upload.test',
          ),
          'version' => '7.x-2.19',
          'project' => 'media',
          'datestamp' => '1524677887',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'media',
        'version' => '7.x-2.19',
      ),
      'media_wysiwyg' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/media/modules/media_wysiwyg/media_wysiwyg.module',
        'basename' => 'media_wysiwyg.module',
        'name' => 'media_wysiwyg',
        'info' => 
        array (
          'name' => 'Media WYSIWYG',
          'description' => 'Adds support for embedding media using client-side WYSIWYG editors.',
          'package' => 'Media',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'media',
          ),
          'test_dependencies' => 
          array (
            0 => 'ckeditor',
            1 => 'token',
            2 => 'wysiwyg',
          ),
          'files' => 
          array (
            0 => 'media_wysiwyg.test',
            1 => 'tests/media_wysiwyg.file_usage.test',
            2 => 'tests/media_wysiwyg.macro.test',
            3 => 'tests/media_wysiwyg.paragraph_fix_filter.test',
          ),
          'configure' => 'admin/config/media/browser',
          'version' => '7.x-2.19',
          'project' => 'media',
          'datestamp' => '1524677887',
          'php' => '5.2.4',
        ),
        'schema_version' => '7207',
        'project' => 'media',
        'version' => '7.x-2.19',
      ),
      'media_wysiwyg_view_mode' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/media/modules/media_wysiwyg_view_mode/media_wysiwyg_view_mode.module',
        'basename' => 'media_wysiwyg_view_mode.module',
        'name' => 'media_wysiwyg_view_mode',
        'info' => 
        array (
          'name' => 'Media WYSIWYG View Mode',
          'description' => 'DEPRECATED, this folder is only here so that the module can be uninstalled.',
          'package' => 'Media',
          'core' => '7.x',
          'version' => '7.x-2.19',
          'project' => 'media',
          'datestamp' => '1524677887',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'media',
        'version' => '7.x-2.19',
      ),
      'media_internet' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/media/modules/media_internet/media_internet.module',
        'basename' => 'media_internet.module',
        'name' => 'media_internet',
        'info' => 
        array (
          'name' => 'Media Internet Sources',
          'description' => 'Provides an API for accessing media on various internet services',
          'package' => 'Media',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'media',
          ),
          'files' => 
          array (
            0 => 'includes/MediaBrowserInternet.inc',
            1 => 'includes/MediaInternetBaseHandler.inc',
            2 => 'includes/MediaInternetFileHandler.inc',
            3 => 'includes/MediaInternetNoHandlerException.inc',
            4 => 'includes/MediaInternetValidationException.inc',
            5 => 'tests/media_internet.test',
          ),
          'version' => '7.x-2.19',
          'project' => 'media',
          'datestamp' => '1524677887',
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'project' => 'media',
        'version' => '7.x-2.19',
      ),
      'media' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/media/media.module',
        'basename' => 'media.module',
        'name' => 'media',
        'info' => 
        array (
          'name' => 'Media',
          'description' => 'Provides the core Media API',
          'package' => 'Media',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'file_entity',
            1 => 'image',
            2 => 'views',
          ),
          'test_dependencies' => 
          array (
            0 => 'token',
          ),
          'files' => 
          array (
            0 => 'includes/MediaReadOnlyStreamWrapper.inc',
            1 => 'includes/MediaBrowserPluginInterface.inc',
            2 => 'includes/MediaBrowserPlugin.inc',
            3 => 'includes/MediaBrowserUpload.inc',
            4 => 'includes/MediaBrowserView.inc',
            5 => 'includes/MediaEntityTranslationHandler.inc',
            6 => 'includes/media_views_plugin_display_media_browser.inc',
            7 => 'includes/media_views_plugin_style_media_browser.inc',
            8 => 'tests/media.test',
          ),
          'configure' => 'admin/config/media/browser',
          'version' => '7.x-2.19',
          'project' => 'media',
          'datestamp' => '1524677887',
          'php' => '5.2.4',
        ),
        'schema_version' => '7227',
        'project' => 'media',
        'version' => '7.x-2.19',
      ),
      'menu_admin_per_menu' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/menu_admin_per_menu/menu_admin_per_menu.module',
        'basename' => 'menu_admin_per_menu.module',
        'name' => 'menu_admin_per_menu',
        'info' => 
        array (
          'name' => 'Menu Admin per Menu',
          'description' => 'Allows to give roles per menu admin permissions without giving them full administrer menu permission.',
          'package' => 'Administration',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'menu',
          ),
          'files' => 
          array (
            0 => 'menu_admin_per_menu.module',
          ),
          'version' => '7.x-1.0',
          'project' => 'menu_admin_per_menu',
          'datestamp' => '1295735798',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'menu_admin_per_menu',
        'version' => '7.x-1.0',
      ),
      'single_image' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/single_image/single_image.module',
        'basename' => 'single_image.module',
        'name' => 'single_image',
        'info' => 
        array (
          'name' => 'Single Image Formatter',
          'description' => 'Print only one image on a multiple images field',
          'core' => '7.x',
          'package' => 'Fields',
          'dependencies' => 
          array (
            0 => 'image',
          ),
          'version' => '7.x-1.1',
          'project' => 'single_image',
          'datestamp' => '1366643128',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'single_image',
        'version' => '7.x-1.1',
      ),
      'draggableviews_book' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/draggableviews/draggableviews_book/draggableviews_book.module',
        'basename' => 'draggableviews_book.module',
        'name' => 'draggableviews_book',
        'info' => 
        array (
          'name' => 'Draggableviews Book',
          'description' => 'Reorder books',
          'package' => 'Views',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'draggableviews_book_views_handler_argument.inc',
          ),
          'dependencies' => 
          array (
            0 => 'draggableviews',
            1 => 'book',
          ),
          'version' => '7.x-2.1',
          'project' => 'draggableviews',
          'datestamp' => '1425397028',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'draggableviews',
        'version' => '7.x-2.1',
      ),
      'draggableviews' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/draggableviews/draggableviews.module',
        'basename' => 'draggableviews.module',
        'name' => 'draggableviews',
        'info' => 
        array (
          'name' => 'Draggableviews',
          'description' => 'Makes Views draggable',
          'dependencies' => 
          array (
            0 => 'views',
            1 => 'entity',
          ),
          'package' => 'Views',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'handlers/draggableviews_handler.inc',
            1 => 'handlers/draggableviews_hierarchy_handler.inc',
            2 => 'views/draggableviews_handler_field_draggable.inc',
            3 => 'views/draggableviews_handler_sort.inc',
            4 => 'views/draggableviews_join_handler.inc',
            5 => 'test/draggableviews.test',
            6 => 'handlers/draggableviews_handler_native.inc',
            7 => 'handlers/draggableviews_handler_fieldapi.inc',
            8 => 'handlers/draggableviews_hierarchy_handler_native.inc',
          ),
          'version' => '7.x-2.1',
          'project' => 'draggableviews',
          'datestamp' => '1425397028',
          'php' => '5.2.4',
        ),
        'schema_version' => '7205',
        'project' => 'draggableviews',
        'version' => '7.x-2.1',
      ),
      'context_ui' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/context/context_ui/context_ui.module',
        'basename' => 'context_ui.module',
        'name' => 'context_ui',
        'info' => 
        array (
          'name' => 'Context UI',
          'description' => 'Provides a simple UI for settings up a site structure using Context.',
          'dependencies' => 
          array (
            0 => 'context',
          ),
          'package' => 'Context',
          'core' => '7.x',
          'configure' => 'admin/structure/context',
          'files' => 
          array (
            0 => 'context.module',
            1 => 'tests/context_ui.test',
          ),
          'version' => '7.x-3.10',
          'project' => 'context',
          'datestamp' => '1551220089',
          'php' => '5.2.4',
        ),
        'schema_version' => '6004',
        'project' => 'context',
        'version' => '7.x-3.10',
      ),
      'context_layouts' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/context/context_layouts/context_layouts.module',
        'basename' => 'context_layouts.module',
        'name' => 'context_layouts',
        'info' => 
        array (
          'name' => 'Context layouts',
          'description' => 'Allow theme layer to provide multiple region layouts and integrate with context.',
          'dependencies' => 
          array (
            0 => 'context',
          ),
          'package' => 'Context',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'plugins/context_layouts_reaction_block.inc',
          ),
          'version' => '7.x-3.10',
          'project' => 'context',
          'datestamp' => '1551220089',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'context',
        'version' => '7.x-3.10',
      ),
      'context' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/context/context.module',
        'basename' => 'context.module',
        'name' => 'context',
        'info' => 
        array (
          'name' => 'Context',
          'dependencies' => 
          array (
            0 => 'ctools',
          ),
          'description' => 'Provide modules with a cache that lasts for a single page request.',
          'package' => 'Context',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'tests/context.test',
            1 => 'tests/context.conditions.test',
            2 => 'tests/context.reactions.test',
          ),
          'version' => '7.x-3.10',
          'project' => 'context',
          'datestamp' => '1551220089',
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'project' => 'context',
        'version' => '7.x-3.10',
      ),
      'breakpoints' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/breakpoints/breakpoints.module',
        'basename' => 'breakpoints.module',
        'name' => 'breakpoints',
        'info' => 
        array (
          'name' => 'Breakpoints',
          'description' => 'Manage breakpoints',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'ctools',
          ),
          'files' => 
          array (
            0 => 'breakpoints.module',
            1 => 'breakpoints.test',
          ),
          'configure' => 'admin/config/media/breakpoints',
          'version' => '7.x-1.4',
          'project' => 'breakpoints',
          'datestamp' => '1450195709',
          'php' => '5.2.4',
        ),
        'schema_version' => '7102',
        'project' => 'breakpoints',
        'version' => '7.x-1.4',
      ),
      'varnish' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/varnish/varnish.module',
        'basename' => 'varnish.module',
        'name' => 'varnish',
        'info' => 
        array (
          'name' => 'Varnish',
          'description' => 'Provides integration with the Varnish HTTP accelerator.',
          'core' => '7.x',
          'configure' => 'admin/config/development/varnish',
          'package' => 'Caching',
          'files' => 
          array (
            0 => 'varnish.admin.inc',
            1 => 'varnish.cache.inc',
            2 => 'varnish.test',
          ),
          'version' => '7.x-1.0-beta3',
          'project' => 'varnish',
          'datestamp' => '1410442429',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'varnish',
        'version' => '7.x-1.0-beta3',
      ),
      'ctools_custom_content' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/ctools/ctools_custom_content/ctools_custom_content.module',
        'basename' => 'ctools_custom_content.module',
        'name' => 'ctools_custom_content',
        'info' => 
        array (
          'name' => 'Custom content panes',
          'description' => 'Create custom, exportable, reusable content panes for applications like Panels.',
          'core' => '7.x',
          'package' => 'Chaos tool suite',
          'version' => '7.x-1.10',
          'dependencies' => 
          array (
            0 => 'ctools',
          ),
          'project' => 'ctools',
          'datestamp' => '1471454104',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'ctools',
        'version' => '7.x-1.10',
      ),
      'bulk_export' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/ctools/bulk_export/bulk_export.module',
        'basename' => 'bulk_export.module',
        'name' => 'bulk_export',
        'info' => 
        array (
          'name' => 'Bulk Export',
          'description' => 'Performs bulk exporting of data objects known about by Chaos tools.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'ctools',
          ),
          'package' => 'Chaos tool suite',
          'version' => '7.x-1.10',
          'project' => 'ctools',
          'datestamp' => '1471454104',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'ctools',
        'version' => '7.x-1.10',
      ),
      'views_content' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/ctools/views_content/views_content.module',
        'basename' => 'views_content.module',
        'name' => 'views_content',
        'info' => 
        array (
          'name' => 'Views content panes',
          'description' => 'Allows Views content to be used in Panels, Dashboard and other modules which use the CTools Content API.',
          'package' => 'Chaos tool suite',
          'dependencies' => 
          array (
            0 => 'ctools',
            1 => 'views',
          ),
          'core' => '7.x',
          'version' => '7.x-1.10',
          'files' => 
          array (
            0 => 'plugins/views/views_content_plugin_display_ctools_context.inc',
            1 => 'plugins/views/views_content_plugin_display_panel_pane.inc',
            2 => 'plugins/views/views_content_plugin_style_ctools_context.inc',
          ),
          'project' => 'ctools',
          'datestamp' => '1471454104',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'ctools',
        'version' => '7.x-1.10',
      ),
      'ctools_plugin_example' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/ctools/ctools_plugin_example/ctools_plugin_example.module',
        'basename' => 'ctools_plugin_example.module',
        'name' => 'ctools_plugin_example',
        'info' => 
        array (
          'name' => 'Chaos Tools (CTools) Plugin Example',
          'description' => 'Shows how an external module can provide ctools plugins (for Panels, etc.).',
          'package' => 'Chaos tool suite',
          'version' => '7.x-1.10',
          'dependencies' => 
          array (
            0 => 'ctools',
            1 => 'panels',
            2 => 'page_manager',
            3 => 'advanced_help',
          ),
          'core' => '7.x',
          'project' => 'ctools',
          'datestamp' => '1471454104',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'ctools',
        'version' => '7.x-1.10',
      ),
      'ctools_access_ruleset' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/ctools/ctools_access_ruleset/ctools_access_ruleset.module',
        'basename' => 'ctools_access_ruleset.module',
        'name' => 'ctools_access_ruleset',
        'info' => 
        array (
          'name' => 'Custom rulesets',
          'description' => 'Create custom, exportable, reusable access rulesets for applications like Panels.',
          'core' => '7.x',
          'package' => 'Chaos tool suite',
          'version' => '7.x-1.10',
          'dependencies' => 
          array (
            0 => 'ctools',
          ),
          'project' => 'ctools',
          'datestamp' => '1471454104',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'ctools',
        'version' => '7.x-1.10',
      ),
      'term_depth' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/ctools/term_depth/term_depth.module',
        'basename' => 'term_depth.module',
        'name' => 'term_depth',
        'info' => 
        array (
          'name' => 'Term Depth access',
          'description' => 'Controls access to context based upon term depth',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'ctools',
          ),
          'package' => 'Chaos tool suite',
          'version' => '7.x-1.10',
          'project' => 'ctools',
          'datestamp' => '1471454104',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'ctools',
        'version' => '7.x-1.10',
      ),
      'stylizer' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/ctools/stylizer/stylizer.module',
        'basename' => 'stylizer.module',
        'name' => 'stylizer',
        'info' => 
        array (
          'name' => 'Stylizer',
          'description' => 'Create custom styles for applications such as Panels.',
          'core' => '7.x',
          'package' => 'Chaos tool suite',
          'version' => '7.x-1.10',
          'dependencies' => 
          array (
            0 => 'ctools',
            1 => 'color',
          ),
          'project' => 'ctools',
          'datestamp' => '1471454104',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'ctools',
        'version' => '7.x-1.10',
      ),
      'ctools_ajax_sample' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/ctools/ctools_ajax_sample/ctools_ajax_sample.module',
        'basename' => 'ctools_ajax_sample.module',
        'name' => 'ctools_ajax_sample',
        'info' => 
        array (
          'name' => 'Chaos Tools (CTools) AJAX Example',
          'description' => 'Shows how to use the power of Chaos AJAX.',
          'package' => 'Chaos tool suite',
          'version' => '7.x-1.10',
          'dependencies' => 
          array (
            0 => 'ctools',
          ),
          'core' => '7.x',
          'project' => 'ctools',
          'datestamp' => '1471454104',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'ctools',
        'version' => '7.x-1.10',
      ),
      'page_manager' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/ctools/page_manager/page_manager.module',
        'basename' => 'page_manager.module',
        'name' => 'page_manager',
        'info' => 
        array (
          'name' => 'Page manager',
          'description' => 'Provides a UI and API to manage pages within the site.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'ctools',
          ),
          'package' => 'Chaos tool suite',
          'version' => '7.x-1.10',
          'project' => 'ctools',
          'datestamp' => '1471454104',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'ctools',
        'version' => '7.x-1.10',
      ),
      'ctools' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/ctools/ctools.module',
        'basename' => 'ctools.module',
        'name' => 'ctools',
        'info' => 
        array (
          'name' => 'Chaos tools',
          'description' => 'A library of helpful tools by Merlin of Chaos.',
          'core' => '7.x',
          'package' => 'Chaos tool suite',
          'files' => 
          array (
            0 => 'includes/context.inc',
            1 => 'includes/css-cache.inc',
            2 => 'includes/math-expr.inc',
            3 => 'includes/stylizer.inc',
            4 => 'tests/css_cache.test',
          ),
          'version' => '7.x-1.10',
          'project' => 'ctools',
          'datestamp' => '1471454104',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7001',
        'project' => 'ctools',
        'version' => '7.x-1.10',
      ),
      'admin_menu_toolbar' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/admin_menu/admin_menu_toolbar/admin_menu_toolbar.module',
        'basename' => 'admin_menu_toolbar.module',
        'name' => 'admin_menu_toolbar',
        'info' => 
        array (
          'name' => 'Administration menu Toolbar style',
          'description' => 'A better Toolbar.',
          'package' => 'Administration',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'admin_menu',
          ),
          'version' => '7.x-3.0-rc5',
          'project' => 'admin_menu',
          'datestamp' => '1419029284',
          'php' => '5.2.4',
        ),
        'schema_version' => '6300',
        'project' => 'admin_menu',
        'version' => '7.x-3.0-rc5',
      ),
      'admin_devel' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/admin_menu/admin_devel/admin_devel.module',
        'basename' => 'admin_devel.module',
        'name' => 'admin_devel',
        'info' => 
        array (
          'name' => 'Administration Development tools',
          'description' => 'Administration and debugging functionality for developers and site builders.',
          'package' => 'Administration',
          'core' => '7.x',
          'scripts' => 
          array (
            0 => 'admin_devel.js',
          ),
          'version' => '7.x-3.0-rc5',
          'project' => 'admin_menu',
          'datestamp' => '1419029284',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'admin_menu',
        'version' => '7.x-3.0-rc5',
      ),
      'admin_menu' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/admin_menu/admin_menu.module',
        'basename' => 'admin_menu.module',
        'name' => 'admin_menu',
        'info' => 
        array (
          'name' => 'Administration menu',
          'description' => 'Provides a dropdown menu to most administrative tasks and other common destinations (to users with the proper permissions).',
          'package' => 'Administration',
          'core' => '7.x',
          'configure' => 'admin/config/administration/admin_menu',
          'dependencies' => 
          array (
            0 => 'system (>7.10)',
          ),
          'files' => 
          array (
            0 => 'tests/admin_menu.test',
          ),
          'version' => '7.x-3.0-rc5',
          'project' => 'admin_menu',
          'datestamp' => '1419029284',
          'php' => '5.2.4',
        ),
        'schema_version' => '7304',
        'project' => 'admin_menu',
        'version' => '7.x-3.0-rc5',
      ),
      'site_verify' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/site_verify/site_verify.module',
        'basename' => 'site_verify.module',
        'name' => 'site_verify',
        'info' => 
        array (
          'name' => 'Site Verification',
          'description' => 'Verifies ownership of a site for use with search engines.',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'site_verify.module',
            1 => 'site_verify.admin.inc',
            2 => 'site_verify.install',
            3 => 'site_verify.test',
          ),
          'configure' => 'admin/config/search/verifications',
          'version' => '7.x-1.2',
          'project' => 'site_verify',
          'datestamp' => '1495647186',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '3',
        'project' => 'site_verify',
        'version' => '7.x-1.2',
      ),
      'ife' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/ife/ife.module',
        'basename' => 'ife.module',
        'name' => 'ife',
        'info' => 
        array (
          'name' => 'Inline Form Errors',
          'description' => 'Put form error messages inline with the form elements',
          'package' => 'User interface',
          'core' => '7.x',
          'configure' => 'admin/config/user-interface/ife',
          'files' => 
          array (
            0 => 'ife.install',
            1 => 'ife.module',
            2 => 'ife.settings.inc',
            3 => 'ife.theme.inc',
            4 => 'ife.variable.inc',
          ),
          'version' => '7.x-2.0-alpha2',
          'project' => 'ife',
          'datestamp' => '1351726918',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'ife',
        'version' => '7.x-2.0-alpha2',
      ),
      'webform' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/webform/webform.module',
        'basename' => 'webform.module',
        'name' => 'webform',
        'info' => 
        array (
          'name' => 'Webform',
          'description' => 'Enables the creation of forms and questionnaires.',
          'core' => '7.x',
          'package' => 'Webform',
          'configure' => 'admin/config/content/webform',
          'php' => '5.3',
          'dependencies' => 
          array (
            0 => 'ctools',
            1 => 'views',
          ),
          'test_dependencies' => 
          array (
            0 => 'token',
          ),
          'files' => 
          array (
            0 => 'includes/webform.webformconditionals.inc',
            1 => 'includes/exporters/webform_exporter_delimited.inc',
            2 => 'includes/exporters/webform_exporter_excel_delimited.inc',
            3 => 'includes/exporters/webform_exporter_excel_xlsx.inc',
            4 => 'includes/exporters/webform_exporter.inc',
            5 => 'views/webform_handler_area_result_pager.inc',
            6 => 'views/webform_handler_field_form_body.inc',
            7 => 'views/webform_handler_field_is_draft.inc',
            8 => 'views/webform_handler_field_node_link_edit.inc',
            9 => 'views/webform_handler_field_node_link_results.inc',
            10 => 'views/webform_handler_field_submission_count.inc',
            11 => 'views/webform_handler_field_submission_data.inc',
            12 => 'views/webform_handler_field_submission_link.inc',
            13 => 'views/webform_handler_field_webform_status.inc',
            14 => 'views/webform_handler_filter_is_draft.inc',
            15 => 'views/webform_handler_filter_submission_data.inc',
            16 => 'views/webform_handler_filter_webform_status.inc',
            17 => 'views/webform_handler_numeric_data.inc',
            18 => 'views/webform_handler_relationship_submission_data.inc',
            19 => 'views/webform_plugin_row_submission_view.inc',
            20 => 'views/webform.views.inc',
            21 => 'tests/components.test',
            22 => 'tests/conditionals.test',
            23 => 'tests/permissions.test',
            24 => 'tests/submission.test',
            25 => 'tests/webform.test',
          ),
          'version' => '7.x-4.14',
          'project' => 'webform',
          'datestamp' => '1472386754',
        ),
        'schema_version' => '7430',
        'project' => 'webform',
        'version' => '7.x-4.14',
      ),
      'robotstxt' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/robotstxt/robotstxt.module',
        'basename' => 'robotstxt.module',
        'name' => 'robotstxt',
        'info' => 
        array (
          'name' => 'robots.txt',
          'description' => 'Generates the robots.txt file dynamically and gives you the chance to edit it, on a per-site basis, from the web UI.',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'robotstxt.module',
            1 => 'robotstxt.admin.inc',
            2 => 'robotstxt.install',
          ),
          'configure' => 'admin/config/search/robotstxt',
          'version' => '7.x-1.3',
          'project' => 'robotstxt',
          'datestamp' => '1419385385',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7104',
        'project' => 'robotstxt',
        'version' => '7.x-1.3',
      ),
      'admin_views' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/admin_views/admin_views.module',
        'basename' => 'admin_views.module',
        'name' => 'admin_views',
        'info' => 
        array (
          'name' => 'Administration views',
          'description' => 'Replaces all system object management pages in Drupal core with real views.',
          'package' => 'Administration',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'views',
            1 => 'views_bulk_operations (>=7.x-3.2)',
          ),
          'files' => 
          array (
            0 => 'plugins/views_plugin_display_system.inc',
            1 => 'plugins/views_plugin_access_menu.inc',
            2 => 'tests/admin_views.test',
          ),
          'version' => '7.x-1.6',
          'project' => 'admin_views',
          'datestamp' => '1470165840',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'admin_views',
        'version' => '7.x-1.6',
      ),
      'views_php' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/views_php/views_php.module',
        'basename' => 'views_php.module',
        'name' => 'views_php',
        'info' => 
        array (
          'name' => 'Views PHP',
          'description' => 'Allows the usage of PHP to construct a view.',
          'package' => 'Views',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'views',
          ),
          'files' => 
          array (
            0 => 'plugins/views/views_php_handler_area.inc',
            1 => 'plugins/views/views_php_handler_field.inc',
            2 => 'plugins/views/views_php_handler_filter.inc',
            3 => 'plugins/views/views_php_handler_sort.inc',
            4 => 'plugins/views/views_php_plugin_access.inc',
            5 => 'plugins/views/views_php_plugin_cache.inc',
            6 => 'plugins/views/views_php_plugin_pager.inc',
            7 => 'plugins/views/views_php_plugin_query.inc',
            8 => 'plugins/views/views_php_plugin_wrapper.inc',
          ),
          'version' => '7.x-1.0-alpha3',
          'project' => 'views_php',
          'datestamp' => '1447386022',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'views_php',
        'version' => '7.x-1.0-alpha3',
      ),
      'plupload' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/plupload/plupload.module',
        'basename' => 'plupload.module',
        'name' => 'plupload',
        'info' => 
        array (
          'name' => 'Plupload integration module',
          'description' => 'Provides a plupload element.',
          'files' => 
          array (
            0 => 'plupload.module',
          ),
          'core' => '7.x',
          'package' => 'Media',
          'version' => '7.x-1.7',
          'project' => 'plupload',
          'datestamp' => '1415390716',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'plupload',
        'version' => '7.x-1.7',
      ),
      'menu_block_export' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/menu_block/menu_block_export.module',
        'basename' => 'menu_block_export.module',
        'name' => 'menu_block_export',
        'info' => 
        array (
          'name' => 'Menu Block Export',
          'description' => 'Provides export interface for Menu block module.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'menu_block',
          ),
          'files' => 
          array (
            0 => 'menu_block_export.module',
            1 => 'menu_block_export.admin.inc',
          ),
          'configure' => 'admin/config/user-interface/menu-block/export',
          'version' => '7.x-2.7',
          'project' => 'menu_block',
          'datestamp' => '1435676232',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'menu_block',
        'version' => '7.x-2.7',
      ),
      'menu_block' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/menu_block/menu_block.module',
        'basename' => 'menu_block.module',
        'name' => 'menu_block',
        'info' => 
        array (
          'name' => 'Menu Block',
          'description' => 'Provides configurable blocks of menu items.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'menu (>7.11)',
          ),
          'configure' => 'admin/config/user-interface/menu-block',
          'version' => '7.x-2.7',
          'project' => 'menu_block',
          'datestamp' => '1435676232',
          'php' => '5.2.4',
        ),
        'schema_version' => '7203',
        'project' => 'menu_block',
        'version' => '7.x-2.7',
      ),
      'search_api_facetapi' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/search_api/contrib/search_api_facetapi/search_api_facetapi.module',
        'basename' => 'search_api_facetapi.module',
        'name' => 'search_api_facetapi',
        'info' => 
        array (
          'name' => 'Search facets',
          'description' => 'Integrate the Search API with the Facet API to provide facetted searches.',
          'dependencies' => 
          array (
            0 => 'search_api',
            1 => 'facetapi',
          ),
          'core' => '7.x',
          'package' => 'Search',
          'files' => 
          array (
            0 => 'plugins/facetapi/adapter.inc',
            1 => 'plugins/facetapi/query_type_term.inc',
            2 => 'plugins/facetapi/query_type_date.inc',
          ),
          'version' => '7.x-1.18',
          'project' => 'search_api',
          'datestamp' => '1461155351',
          'php' => '5.2.4',
        ),
        'schema_version' => '7101',
        'project' => 'search_api',
        'version' => '7.x-1.18',
      ),
      'search_api_views' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/search_api/contrib/search_api_views/search_api_views.module',
        'basename' => 'search_api_views.module',
        'name' => 'search_api_views',
        'info' => 
        array (
          'name' => 'Search views',
          'description' => 'Integrates the Search API with Views, enabling users to create views with searches as filters or arguments.',
          'dependencies' => 
          array (
            0 => 'search_api',
            1 => 'views',
          ),
          'core' => '7.x',
          'package' => 'Search',
          'files' => 
          array (
            0 => 'includes/display_facet_block.inc',
            1 => 'includes/handler_argument.inc',
            2 => 'includes/handler_argument_fulltext.inc',
            3 => 'includes/handler_argument_more_like_this.inc',
            4 => 'includes/handler_argument_string.inc',
            5 => 'includes/handler_argument_date.inc',
            6 => 'includes/handler_argument_taxonomy_term.inc',
            7 => 'includes/handler_filter.inc',
            8 => 'includes/handler_filter_boolean.inc',
            9 => 'includes/handler_filter_date.inc',
            10 => 'includes/handler_filter_entity.inc',
            11 => 'includes/handler_filter_fulltext.inc',
            12 => 'includes/handler_filter_language.inc',
            13 => 'includes/handler_filter_options.inc',
            14 => 'includes/handler_filter_taxonomy_term.inc',
            15 => 'includes/handler_filter_text.inc',
            16 => 'includes/handler_filter_user.inc',
            17 => 'includes/handler_sort.inc',
            18 => 'includes/plugin_cache.inc',
            19 => 'includes/query.inc',
          ),
          'version' => '7.x-1.18',
          'project' => 'search_api',
          'datestamp' => '1461155351',
          'php' => '5.2.4',
        ),
        'schema_version' => '7102',
        'project' => 'search_api',
        'version' => '7.x-1.18',
      ),
      'search_api' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/search_api/search_api.module',
        'basename' => 'search_api.module',
        'name' => 'search_api',
        'info' => 
        array (
          'name' => 'Search API',
          'description' => 'Provides a generic API for modules offering search capabilities.',
          'dependencies' => 
          array (
            0 => 'entity',
          ),
          'core' => '7.x',
          'package' => 'Search',
          'files' => 
          array (
            0 => 'search_api.test',
            1 => 'includes/callback.inc',
            2 => 'includes/callback_add_aggregation.inc',
            3 => 'includes/callback_add_hierarchy.inc',
            4 => 'includes/callback_add_url.inc',
            5 => 'includes/callback_add_viewed_entity.inc',
            6 => 'includes/callback_bundle_filter.inc',
            7 => 'includes/callback_comment_access.inc',
            8 => 'includes/callback_language_control.inc',
            9 => 'includes/callback_node_access.inc',
            10 => 'includes/callback_node_status.inc',
            11 => 'includes/callback_role_filter.inc',
            12 => 'includes/callback_user_status.inc',
            13 => 'includes/datasource.inc',
            14 => 'includes/datasource_entity.inc',
            15 => 'includes/datasource_external.inc',
            16 => 'includes/datasource_multiple.inc',
            17 => 'includes/exception.inc',
            18 => 'includes/index_entity.inc',
            19 => 'includes/processor.inc',
            20 => 'includes/processor_highlight.inc',
            21 => 'includes/processor_html_filter.inc',
            22 => 'includes/processor_ignore_case.inc',
            23 => 'includes/processor_stopwords.inc',
            24 => 'includes/processor_tokenizer.inc',
            25 => 'includes/processor_transliteration.inc',
            26 => 'includes/query.inc',
            27 => 'includes/server_entity.inc',
            28 => 'includes/service.inc',
          ),
          'configure' => 'admin/config/search/search_api',
          'version' => '7.x-1.18',
          'project' => 'search_api',
          'datestamp' => '1461155351',
          'php' => '5.2.4',
        ),
        'schema_version' => '7118',
        'project' => 'search_api',
        'version' => '7.x-1.18',
      ),
      'mailsystem' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/mailsystem/mailsystem.module',
        'basename' => 'mailsystem.module',
        'name' => 'mailsystem',
        'info' => 
        array (
          'package' => 'Mail',
          'name' => 'Mail System',
          'description' => 'Provides a user interface for per-module and site-wide mail_system selection.',
          'php' => '5.0',
          'core' => '7.x',
          'configure' => 'admin/config/system/mailsystem',
          'dependencies' => 
          array (
            0 => 'filter',
          ),
          'version' => '7.x-2.34',
          'project' => 'mailsystem',
          'datestamp' => '1334082653',
        ),
        'schema_version' => 0,
        'project' => 'mailsystem',
        'version' => '7.x-2.34',
      ),
      'total_control' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/total_control/total_control.module',
        'basename' => 'total_control.module',
        'name' => 'total_control',
        'info' => 
        array (
          'name' => 'Total Control',
          'description' => 'Total Control Administrative Dashboard',
          'dependencies' => 
          array (
            0 => 'ctools',
            1 => 'panels',
            2 => 'page_manager',
            3 => 'views_content',
            4 => 'views_bulk_operations',
          ),
          'package' => 'Administration',
          'core' => '7.x',
          'version' => '7.x-2.4',
          'project' => 'total_control',
          'datestamp' => '1359007981',
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'project' => 'total_control',
        'version' => '7.x-2.4',
      ),
      'panelizer' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/panelizer/panelizer.module',
        'basename' => 'panelizer.module',
        'name' => 'panelizer',
        'info' => 
        array (
          'name' => 'Panelizer',
          'description' => 'Allow any node type to have custom panel displays, similar to the panel node type.',
          'package' => 'Panels',
          'dependencies' => 
          array (
            0 => 'panels (>= 3.6)',
            1 => 'ctools',
            2 => 'page_manager',
          ),
          'core' => '7.x',
          'configure' => 'admin/structure/panelizer',
          'files' => 
          array (
            0 => 'plugins/entity/PanelizerEntityDefault.class.php',
            1 => 'plugins/search_api/PanelizerSearchApiAlterCallback.class.php',
            2 => 'plugins/views/panelizer_handler_field_link.inc',
            3 => 'plugins/views/panelizer_handler_panelizer_status.inc',
            4 => 'plugins/views/panelizer_handler_filter_panelizer_status.inc',
            5 => 'plugins/views/panelizer_plugin_row_panelizer_node_view.inc',
            6 => 'tests/panelizer.helper.test',
            7 => 'tests/panelizer.admin_settings.test',
            8 => 'tests/panelizer.node.test',
            9 => 'tests/panelizer.term.test',
            10 => 'tests/panelizer.user.test',
            11 => 'tests/panelizer.node_revisions.test',
            12 => 'tests/panelizer.node_content_translation.test',
            13 => 'tests/panelizer.exportables.test',
            14 => 'tests/panelizer.with_panels_ipe.test',
            15 => 'tests/panelizer.with_pathauto.test',
            16 => 'tests/panelizer.with_revisioning.test',
            17 => 'tests/panelizer.with_views.test',
            18 => 'tests/panelizer.with_workbench_moderation.test',
          ),
          'test_dependencies' => 
          array (
            0 => 'pathauto',
            1 => 'revisioning',
            2 => 'views',
            3 => 'workbench_moderation (>= 3.x)',
          ),
          'version' => '7.x-3.4',
          'project' => 'panelizer',
          'datestamp' => '1471635552',
          'php' => '5.2.4',
        ),
        'schema_version' => '7303',
        'project' => 'panelizer',
        'version' => '7.x-3.4',
      ),
      'taxonomy_access_fix' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/taxonomy_access_fix/taxonomy_access_fix.module',
        'basename' => 'taxonomy_access_fix.module',
        'name' => 'taxonomy_access_fix',
        'info' => 
        array (
          'name' => 'Taxonomy access fix',
          'description' => 'Fixes the crooked access checks for Taxonomy pages',
          'core' => '7.x',
          'package' => 'Taxonomy',
          'dependencies' => 
          array (
            0 => 'taxonomy',
          ),
          'version' => '7.x-2.3',
          'project' => 'taxonomy_access_fix',
          'datestamp' => '1447247349',
          'php' => '5.2.4',
        ),
        'schema_version' => '7201',
        'project' => 'taxonomy_access_fix',
        'version' => '7.x-2.3',
      ),
      'conditional_fields' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/conditional_fields/conditional_fields.module',
        'basename' => 'conditional_fields.module',
        'name' => 'conditional_fields',
        'info' => 
        array (
          'name' => 'Conditional Fields',
          'description' => 'Define dependencies between fields based on their states and values.',
          'core' => '7.x',
          'package' => 'Fields',
          'dependencies' => 
          array (
            0 => 'system (>=7.14)',
            1 => 'field',
          ),
          'configure' => 'admin/structure/dependencies',
          'version' => '7.x-3.0-alpha2',
          'project' => 'conditional_fields',
          'datestamp' => '1443545943',
          'php' => '5.2.4',
        ),
        'schema_version' => '7002',
        'project' => 'conditional_fields',
        'version' => '7.x-3.0-alpha2',
      ),
      'auto_nodetitle' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/auto_nodetitle/auto_nodetitle.module',
        'basename' => 'auto_nodetitle.module',
        'name' => 'auto_nodetitle',
        'info' => 
        array (
          'name' => 'Automatic Nodetitles',
          'description' => 'Allows hiding of the content title field and automatic title creation.',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'auto_nodetitle.install',
            1 => 'auto_nodetitle.module',
            2 => 'auto_nodetitle.js',
          ),
          'version' => '7.x-1.0',
          'project' => 'auto_nodetitle',
          'datestamp' => '1307449915',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '1',
        'project' => 'auto_nodetitle',
        'version' => '7.x-1.0',
      ),
      'field_collection' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/field_collection/field_collection.module',
        'basename' => 'field_collection.module',
        'name' => 'field_collection',
        'info' => 
        array (
          'name' => 'Field collection',
          'description' => 'Provides a field collection field, to which any number of fields can be attached.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'entity',
          ),
          'files' => 
          array (
            0 => 'field_collection.test',
            1 => 'field_collection.entity.inc',
            2 => 'field_collection.info.inc',
            3 => 'views/field_collection_handler_relationship.inc',
            4 => 'field_collection.migrate.inc',
          ),
          'configure' => 'admin/structure/field-collections',
          'package' => 'Fields',
          'version' => '7.x-1.0-beta11',
          'project' => 'field_collection',
          'datestamp' => '1454338759',
          'php' => '5.2.4',
        ),
        'schema_version' => '7006',
        'project' => 'field_collection',
        'version' => '7.x-1.0-beta11',
      ),
      'views_json_query' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/views_json_query/views_json_query.module',
        'basename' => 'views_json_query.module',
        'name' => 'views_json_query',
        'info' => 
        array (
          'name' => 'Views Json Query Plugin',
          'description' => 'Adds a views backend to query Json files.',
          'package' => 'Views',
          'dependencies' => 
          array (
            0 => 'views',
          ),
          'core' => '7.x',
          'files' => 
          array (
            0 => 'views_json_query_plugin_query_json.inc',
            1 => 'handlers/views_json_query_handler_field.inc',
            2 => 'handlers/views_json_query_handler_filter.inc',
            3 => 'handlers/views_json_query_handler_filter_query_string.inc',
            4 => 'handlers/views_json_query_handler_sort.inc',
            5 => 'handlers/views_json_query_handler_argument_query_string.inc',
          ),
          'version' => '7.x-1.0+14-dev',
          'project' => 'views_json_query',
          'datestamp' => '1551303515',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'views_json_query',
        'version' => '7.x-1.0+14-dev',
      ),
      'rules_admin' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/rules/rules_admin/rules_admin.module',
        'basename' => 'rules_admin.module',
        'name' => 'rules_admin',
        'info' => 
        array (
          'name' => 'Rules UI',
          'description' => 'Administrative interface for managing rules.',
          'package' => 'Rules',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'rules_admin.module',
            1 => 'rules_admin.inc',
          ),
          'dependencies' => 
          array (
            0 => 'rules',
          ),
          'version' => '7.x-2.9',
          'project' => 'rules',
          'datestamp' => '1426527210',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'rules',
        'version' => '7.x-2.9',
      ),
      'rules_i18n' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/rules/rules_i18n/rules_i18n.module',
        'basename' => 'rules_i18n.module',
        'name' => 'rules_i18n',
        'info' => 
        array (
          'name' => 'Rules translation',
          'description' => 'Allows translating rules.',
          'dependencies' => 
          array (
            0 => 'rules',
            1 => 'i18n_string',
          ),
          'package' => 'Multilingual - Internationalization',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'rules_i18n.i18n.inc',
            1 => 'rules_i18n.rules.inc',
            2 => 'rules_i18n.test',
          ),
          'version' => '7.x-2.9',
          'project' => 'rules',
          'datestamp' => '1426527210',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'rules',
        'version' => '7.x-2.9',
      ),
      'rules_scheduler' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/rules/rules_scheduler/rules_scheduler.module',
        'basename' => 'rules_scheduler.module',
        'name' => 'rules_scheduler',
        'info' => 
        array (
          'name' => 'Rules Scheduler',
          'description' => 'Schedule the execution of Rules components using actions.',
          'dependencies' => 
          array (
            0 => 'rules',
          ),
          'package' => 'Rules',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'rules_scheduler.admin.inc',
            1 => 'rules_scheduler.module',
            2 => 'rules_scheduler.install',
            3 => 'rules_scheduler.rules.inc',
            4 => 'rules_scheduler.test',
            5 => 'includes/rules_scheduler.handler.inc',
            6 => 'includes/rules_scheduler.views_default.inc',
            7 => 'includes/rules_scheduler.views.inc',
            8 => 'includes/rules_scheduler_views_filter.inc',
          ),
          'version' => '7.x-2.9',
          'project' => 'rules',
          'datestamp' => '1426527210',
          'php' => '5.2.4',
        ),
        'schema_version' => '7204',
        'project' => 'rules',
        'version' => '7.x-2.9',
      ),
      'rules' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/rules/rules.module',
        'basename' => 'rules.module',
        'name' => 'rules',
        'info' => 
        array (
          'name' => 'Rules',
          'description' => 'React on events and conditionally evaluate actions.',
          'package' => 'Rules',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'rules.features.inc',
            1 => 'tests/rules.test',
            2 => 'includes/faces.inc',
            3 => 'includes/rules.core.inc',
            4 => 'includes/rules.event.inc',
            5 => 'includes/rules.processor.inc',
            6 => 'includes/rules.plugins.inc',
            7 => 'includes/rules.state.inc',
            8 => 'includes/rules.dispatcher.inc',
            9 => 'modules/node.eval.inc',
            10 => 'modules/php.eval.inc',
            11 => 'modules/rules_core.eval.inc',
            12 => 'modules/system.eval.inc',
            13 => 'ui/ui.controller.inc',
            14 => 'ui/ui.core.inc',
            15 => 'ui/ui.data.inc',
            16 => 'ui/ui.plugins.inc',
          ),
          'dependencies' => 
          array (
            0 => 'entity_token',
            1 => 'entity',
          ),
          'version' => '7.x-2.9',
          'project' => 'rules',
          'datestamp' => '1426527210',
          'php' => '5.2.4',
        ),
        'schema_version' => '7214',
        'project' => 'rules',
        'version' => '7.x-2.9',
      ),
      'property_validation' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/field_validation/property_validation/property_validation.module',
        'basename' => 'property_validation.module',
        'name' => 'property_validation',
        'info' => 
        array (
          'name' => 'Property Validation',
          'description' => 'Add validation rules to properties.',
          'package' => 'Fields',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'field',
            1 => 'ctools',
            2 => 'entity',
          ),
          'files' => 
          array (
            0 => 'property_validation_validator.inc',
          ),
          'version' => '7.x-2.6',
          'project' => 'field_validation',
          'datestamp' => '1434802401',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'field_validation',
        'version' => '7.x-2.6',
      ),
      'field_validation_extras' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/field_validation/field_validation_extras/field_validation_extras.module',
        'basename' => 'field_validation_extras.module',
        'name' => 'field_validation_extras',
        'info' => 
        array (
          'name' => 'Field validation extras',
          'description' => 'Extra validators for Field validation 7.x-2.x.',
          'package' => 'Fields',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'field_validation',
          ),
          'version' => '7.x-2.6',
          'project' => 'field_validation',
          'datestamp' => '1434802401',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'field_validation',
        'version' => '7.x-2.6',
      ),
      'field_validation_ui' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/field_validation/field_validation_ui.module',
        'basename' => 'field_validation_ui.module',
        'name' => 'field_validation_ui',
        'info' => 
        array (
          'name' => 'Field Validation UI',
          'description' => 'UI for Field Validation.',
          'package' => 'Fields',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'field_validation',
            1 => 'ctools',
          ),
          'version' => '7.x-2.6',
          'project' => 'field_validation',
          'datestamp' => '1434802401',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'field_validation',
        'version' => '7.x-2.6',
      ),
      'field_validation' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/field_validation/field_validation.module',
        'basename' => 'field_validation.module',
        'name' => 'field_validation',
        'info' => 
        array (
          'name' => 'Field Validation',
          'description' => 'Add validation rules to fields.',
          'package' => 'Fields',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'field',
            1 => 'token',
            2 => 'ctools',
          ),
          'files' => 
          array (
            0 => 'field_validation_validator.inc',
          ),
          'version' => '7.x-2.6',
          'project' => 'field_validation',
          'datestamp' => '1434802401',
          'php' => '5.2.4',
        ),
        'schema_version' => '7005',
        'project' => 'field_validation',
        'version' => '7.x-2.6',
      ),
      'wysiwyg_filter' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/wysiwyg_filter/wysiwyg_filter.module',
        'basename' => 'wysiwyg_filter.module',
        'name' => 'wysiwyg_filter',
        'info' => 
        array (
          'name' => 'WYSIWYG Filter',
          'description' => 'Provides an input filter that allows site administrators configure which HTML elements, attributes and style properties are allowed.',
          'package' => 'Input filters',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'wysiwyg_filter.admin.inc',
            1 => 'wysiwyg_filter.inc',
            2 => 'wysiwyg_filter.install',
            3 => 'wysiwyg_filter.module',
            4 => 'wysiwyg_filter.pages.inc',
          ),
          'version' => '7.x-1.6-rc2',
          'project' => 'wysiwyg_filter',
          'datestamp' => '1310326321',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'wysiwyg_filter',
        'version' => '7.x-1.6-rc2',
      ),
      'link' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/link/link.module',
        'basename' => 'link.module',
        'name' => 'link',
        'info' => 
        array (
          'name' => 'Link',
          'description' => 'Defines simple link field types.',
          'core' => '7.x',
          'package' => 'Fields',
          'files' => 
          array (
            0 => 'link.migrate.inc',
            1 => 'tests/link.test',
            2 => 'tests/link.attribute.test',
            3 => 'tests/link.crud.test',
            4 => 'tests/link.crud_browser.test',
            5 => 'tests/link.token.test',
            6 => 'tests/link.entity_token.test',
            7 => 'tests/link.validate.test',
            8 => 'views/link_views_handler_argument_target.inc',
            9 => 'views/link_views_handler_filter_protocol.inc',
          ),
          'version' => '7.x-1.6',
          'project' => 'link',
          'datestamp' => '1550680687',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7002',
        'project' => 'link',
        'version' => '7.x-1.6',
      ),
      'default_menu_link' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/default_menu_link/default_menu_link.module',
        'basename' => 'default_menu_link.module',
        'name' => 'default_menu_link',
        'info' => 
        array (
          'name' => 'Default Menu Link',
          'description' => 'Provides you with a checkbox on all content types to set the "provide a menu link" value to true by default.',
          'package' => 'Other',
          'version' => '7.x-1.3',
          'core' => '7.x',
          'project' => 'default_menu_link',
          'datestamp' => '1390599504',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7100',
        'project' => 'default_menu_link',
        'version' => '7.x-1.3',
      ),
      'views_export' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/views/views_export/views_export.module',
        'basename' => 'views_export.module',
        'name' => 'views_export',
        'info' => 
        array (
          'dependencies' => 
          array (
          ),
          'description' => '',
          'version' => NULL,
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => '',
        'version' => NULL,
      ),
      'views' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/views/views.module',
        'basename' => 'views.module',
        'name' => 'views',
        'info' => 
        array (
          'name' => 'Views',
          'description' => 'Create customized lists and queries from your database.',
          'package' => 'Views',
          'core' => '7.x',
          'php' => '5.2',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'css/views.css',
            ),
          ),
          'dependencies' => 
          array (
            0 => 'ctools',
          ),
          'files' => 
          array (
            0 => 'handlers/views_handler_area.inc',
            1 => 'handlers/views_handler_area_messages.inc',
            2 => 'handlers/views_handler_area_result.inc',
            3 => 'handlers/views_handler_area_text.inc',
            4 => 'handlers/views_handler_area_text_custom.inc',
            5 => 'handlers/views_handler_area_view.inc',
            6 => 'handlers/views_handler_argument.inc',
            7 => 'handlers/views_handler_argument_date.inc',
            8 => 'handlers/views_handler_argument_formula.inc',
            9 => 'handlers/views_handler_argument_many_to_one.inc',
            10 => 'handlers/views_handler_argument_null.inc',
            11 => 'handlers/views_handler_argument_numeric.inc',
            12 => 'handlers/views_handler_argument_string.inc',
            13 => 'handlers/views_handler_argument_group_by_numeric.inc',
            14 => 'handlers/views_handler_field.inc',
            15 => 'handlers/views_handler_field_counter.inc',
            16 => 'handlers/views_handler_field_boolean.inc',
            17 => 'handlers/views_handler_field_contextual_links.inc',
            18 => 'handlers/views_handler_field_ctools_dropdown.inc',
            19 => 'handlers/views_handler_field_custom.inc',
            20 => 'handlers/views_handler_field_date.inc',
            21 => 'handlers/views_handler_field_entity.inc',
            22 => 'handlers/views_handler_field_links.inc',
            23 => 'handlers/views_handler_field_markup.inc',
            24 => 'handlers/views_handler_field_math.inc',
            25 => 'handlers/views_handler_field_numeric.inc',
            26 => 'handlers/views_handler_field_prerender_list.inc',
            27 => 'handlers/views_handler_field_time_interval.inc',
            28 => 'handlers/views_handler_field_serialized.inc',
            29 => 'handlers/views_handler_field_machine_name.inc',
            30 => 'handlers/views_handler_field_url.inc',
            31 => 'handlers/views_handler_filter.inc',
            32 => 'handlers/views_handler_filter_boolean_operator.inc',
            33 => 'handlers/views_handler_filter_boolean_operator_string.inc',
            34 => 'handlers/views_handler_filter_combine.inc',
            35 => 'handlers/views_handler_filter_date.inc',
            36 => 'handlers/views_handler_filter_equality.inc',
            37 => 'handlers/views_handler_filter_entity_bundle.inc',
            38 => 'handlers/views_handler_filter_group_by_numeric.inc',
            39 => 'handlers/views_handler_filter_in_operator.inc',
            40 => 'handlers/views_handler_filter_many_to_one.inc',
            41 => 'handlers/views_handler_filter_numeric.inc',
            42 => 'handlers/views_handler_filter_string.inc',
            43 => 'handlers/views_handler_filter_fields_compare.inc',
            44 => 'handlers/views_handler_relationship.inc',
            45 => 'handlers/views_handler_relationship_groupwise_max.inc',
            46 => 'handlers/views_handler_sort.inc',
            47 => 'handlers/views_handler_sort_date.inc',
            48 => 'handlers/views_handler_sort_formula.inc',
            49 => 'handlers/views_handler_sort_group_by_numeric.inc',
            50 => 'handlers/views_handler_sort_menu_hierarchy.inc',
            51 => 'handlers/views_handler_sort_random.inc',
            52 => 'includes/base.inc',
            53 => 'includes/handlers.inc',
            54 => 'includes/plugins.inc',
            55 => 'includes/view.inc',
            56 => 'modules/aggregator/views_handler_argument_aggregator_fid.inc',
            57 => 'modules/aggregator/views_handler_argument_aggregator_iid.inc',
            58 => 'modules/aggregator/views_handler_argument_aggregator_category_cid.inc',
            59 => 'modules/aggregator/views_handler_field_aggregator_title_link.inc',
            60 => 'modules/aggregator/views_handler_field_aggregator_category.inc',
            61 => 'modules/aggregator/views_handler_field_aggregator_item_description.inc',
            62 => 'modules/aggregator/views_handler_field_aggregator_xss.inc',
            63 => 'modules/aggregator/views_handler_filter_aggregator_category_cid.inc',
            64 => 'modules/aggregator/views_plugin_row_aggregator_rss.inc',
            65 => 'modules/book/views_plugin_argument_default_book_root.inc',
            66 => 'modules/comment/views_handler_argument_comment_user_uid.inc',
            67 => 'modules/comment/views_handler_field_comment.inc',
            68 => 'modules/comment/views_handler_field_comment_depth.inc',
            69 => 'modules/comment/views_handler_field_comment_link.inc',
            70 => 'modules/comment/views_handler_field_comment_link_approve.inc',
            71 => 'modules/comment/views_handler_field_comment_link_delete.inc',
            72 => 'modules/comment/views_handler_field_comment_link_edit.inc',
            73 => 'modules/comment/views_handler_field_comment_link_reply.inc',
            74 => 'modules/comment/views_handler_field_comment_node_link.inc',
            75 => 'modules/comment/views_handler_field_comment_username.inc',
            76 => 'modules/comment/views_handler_field_ncs_last_comment_name.inc',
            77 => 'modules/comment/views_handler_field_ncs_last_updated.inc',
            78 => 'modules/comment/views_handler_field_node_comment.inc',
            79 => 'modules/comment/views_handler_field_node_new_comments.inc',
            80 => 'modules/comment/views_handler_field_last_comment_timestamp.inc',
            81 => 'modules/comment/views_handler_filter_comment_user_uid.inc',
            82 => 'modules/comment/views_handler_filter_ncs_last_updated.inc',
            83 => 'modules/comment/views_handler_filter_node_comment.inc',
            84 => 'modules/comment/views_handler_sort_comment_thread.inc',
            85 => 'modules/comment/views_handler_sort_ncs_last_comment_name.inc',
            86 => 'modules/comment/views_handler_sort_ncs_last_updated.inc',
            87 => 'modules/comment/views_plugin_row_comment_rss.inc',
            88 => 'modules/comment/views_plugin_row_comment_view.inc',
            89 => 'modules/contact/views_handler_field_contact_link.inc',
            90 => 'modules/field/views_handler_field_field.inc',
            91 => 'modules/field/views_handler_relationship_entity_reverse.inc',
            92 => 'modules/field/views_handler_argument_field_list.inc',
            93 => 'modules/field/views_handler_filter_field_list_boolean.inc',
            94 => 'modules/field/views_handler_argument_field_list_string.inc',
            95 => 'modules/field/views_handler_filter_field_list.inc',
            96 => 'modules/filter/views_handler_field_filter_format_name.inc',
            97 => 'modules/locale/views_handler_field_node_language.inc',
            98 => 'modules/locale/views_handler_filter_node_language.inc',
            99 => 'modules/locale/views_handler_argument_locale_group.inc',
            100 => 'modules/locale/views_handler_argument_locale_language.inc',
            101 => 'modules/locale/views_handler_field_locale_group.inc',
            102 => 'modules/locale/views_handler_field_locale_language.inc',
            103 => 'modules/locale/views_handler_field_locale_link_edit.inc',
            104 => 'modules/locale/views_handler_filter_locale_group.inc',
            105 => 'modules/locale/views_handler_filter_locale_language.inc',
            106 => 'modules/locale/views_handler_filter_locale_version.inc',
            107 => 'modules/locale/views_handler_sort_node_language.inc',
            108 => 'modules/node/views_handler_argument_dates_various.inc',
            109 => 'modules/node/views_handler_argument_node_language.inc',
            110 => 'modules/node/views_handler_argument_node_nid.inc',
            111 => 'modules/node/views_handler_argument_node_type.inc',
            112 => 'modules/node/views_handler_argument_node_vid.inc',
            113 => 'modules/node/views_handler_argument_node_uid_revision.inc',
            114 => 'modules/node/views_handler_field_history_user_timestamp.inc',
            115 => 'modules/node/views_handler_field_node.inc',
            116 => 'modules/node/views_handler_field_node_link.inc',
            117 => 'modules/node/views_handler_field_node_link_delete.inc',
            118 => 'modules/node/views_handler_field_node_link_edit.inc',
            119 => 'modules/node/views_handler_field_node_revision.inc',
            120 => 'modules/node/views_handler_field_node_revision_link.inc',
            121 => 'modules/node/views_handler_field_node_revision_link_delete.inc',
            122 => 'modules/node/views_handler_field_node_revision_link_revert.inc',
            123 => 'modules/node/views_handler_field_node_path.inc',
            124 => 'modules/node/views_handler_field_node_type.inc',
            125 => 'modules/node/views_handler_field_node_version_count.inc',
            126 => 'modules/node/views_handler_filter_history_user_timestamp.inc',
            127 => 'modules/node/views_handler_filter_node_access.inc',
            128 => 'modules/node/views_handler_filter_node_status.inc',
            129 => 'modules/node/views_handler_filter_node_type.inc',
            130 => 'modules/node/views_handler_filter_node_uid_revision.inc',
            131 => 'modules/node/views_handler_filter_node_version_count.inc',
            132 => 'modules/node/views_handler_sort_node_version_count.inc',
            133 => 'modules/node/views_plugin_argument_default_node.inc',
            134 => 'modules/node/views_plugin_argument_validate_node.inc',
            135 => 'modules/node/views_plugin_row_node_rss.inc',
            136 => 'modules/node/views_plugin_row_node_view.inc',
            137 => 'modules/profile/views_handler_field_profile_date.inc',
            138 => 'modules/profile/views_handler_field_profile_list.inc',
            139 => 'modules/profile/views_handler_filter_profile_selection.inc',
            140 => 'modules/search/views_handler_argument_search.inc',
            141 => 'modules/search/views_handler_field_search_score.inc',
            142 => 'modules/search/views_handler_filter_search.inc',
            143 => 'modules/search/views_handler_sort_search_score.inc',
            144 => 'modules/search/views_plugin_row_search_view.inc',
            145 => 'modules/statistics/views_handler_field_accesslog_path.inc',
            146 => 'modules/statistics/views_handler_field_node_counter_timestamp.inc',
            147 => 'modules/statistics/views_handler_field_statistics_numeric.inc',
            148 => 'modules/system/views_handler_argument_file_fid.inc',
            149 => 'modules/system/views_handler_field_file.inc',
            150 => 'modules/system/views_handler_field_file_extension.inc',
            151 => 'modules/system/views_handler_field_file_filemime.inc',
            152 => 'modules/system/views_handler_field_file_uri.inc',
            153 => 'modules/system/views_handler_field_file_status.inc',
            154 => 'modules/system/views_handler_filter_file_status.inc',
            155 => 'modules/taxonomy/views_handler_argument_taxonomy.inc',
            156 => 'modules/taxonomy/views_handler_argument_term_node_tid.inc',
            157 => 'modules/taxonomy/views_handler_argument_term_node_tid_depth.inc',
            158 => 'modules/taxonomy/views_handler_argument_term_node_tid_depth_join.inc',
            159 => 'modules/taxonomy/views_handler_argument_term_node_tid_depth_modifier.inc',
            160 => 'modules/taxonomy/views_handler_argument_vocabulary_vid.inc',
            161 => 'modules/taxonomy/views_handler_argument_vocabulary_machine_name.inc',
            162 => 'modules/taxonomy/views_handler_field_taxonomy.inc',
            163 => 'modules/taxonomy/views_handler_field_term_node_tid.inc',
            164 => 'modules/taxonomy/views_handler_field_term_link_edit.inc',
            165 => 'modules/taxonomy/views_handler_filter_term_node_tid.inc',
            166 => 'modules/taxonomy/views_handler_filter_term_node_tid_depth.inc',
            167 => 'modules/taxonomy/views_handler_filter_term_node_tid_depth_join.inc',
            168 => 'modules/taxonomy/views_handler_filter_vocabulary_vid.inc',
            169 => 'modules/taxonomy/views_handler_filter_vocabulary_machine_name.inc',
            170 => 'modules/taxonomy/views_handler_relationship_node_term_data.inc',
            171 => 'modules/taxonomy/views_plugin_argument_validate_taxonomy_term.inc',
            172 => 'modules/taxonomy/views_plugin_argument_default_taxonomy_tid.inc',
            173 => 'modules/tracker/views_handler_argument_tracker_comment_user_uid.inc',
            174 => 'modules/tracker/views_handler_filter_tracker_comment_user_uid.inc',
            175 => 'modules/tracker/views_handler_filter_tracker_boolean_operator.inc',
            176 => 'modules/system/views_handler_filter_system_type.inc',
            177 => 'modules/translation/views_handler_argument_node_tnid.inc',
            178 => 'modules/translation/views_handler_field_node_link_translate.inc',
            179 => 'modules/translation/views_handler_field_node_translation_link.inc',
            180 => 'modules/translation/views_handler_filter_node_tnid.inc',
            181 => 'modules/translation/views_handler_filter_node_tnid_child.inc',
            182 => 'modules/translation/views_handler_relationship_translation.inc',
            183 => 'modules/user/views_handler_argument_user_uid.inc',
            184 => 'modules/user/views_handler_argument_users_roles_rid.inc',
            185 => 'modules/user/views_handler_field_user.inc',
            186 => 'modules/user/views_handler_field_user_language.inc',
            187 => 'modules/user/views_handler_field_user_link.inc',
            188 => 'modules/user/views_handler_field_user_link_cancel.inc',
            189 => 'modules/user/views_handler_field_user_link_edit.inc',
            190 => 'modules/user/views_handler_field_user_mail.inc',
            191 => 'modules/user/views_handler_field_user_name.inc',
            192 => 'modules/user/views_handler_field_user_permissions.inc',
            193 => 'modules/user/views_handler_field_user_picture.inc',
            194 => 'modules/user/views_handler_field_user_roles.inc',
            195 => 'modules/user/views_handler_filter_user_current.inc',
            196 => 'modules/user/views_handler_filter_user_name.inc',
            197 => 'modules/user/views_handler_filter_user_permissions.inc',
            198 => 'modules/user/views_handler_filter_user_roles.inc',
            199 => 'modules/user/views_plugin_argument_default_current_user.inc',
            200 => 'modules/user/views_plugin_argument_default_user.inc',
            201 => 'modules/user/views_plugin_argument_validate_user.inc',
            202 => 'modules/user/views_plugin_row_user_view.inc',
            203 => 'plugins/views_plugin_access.inc',
            204 => 'plugins/views_plugin_access_none.inc',
            205 => 'plugins/views_plugin_access_perm.inc',
            206 => 'plugins/views_plugin_access_role.inc',
            207 => 'plugins/views_plugin_argument_default.inc',
            208 => 'plugins/views_plugin_argument_default_php.inc',
            209 => 'plugins/views_plugin_argument_default_fixed.inc',
            210 => 'plugins/views_plugin_argument_default_raw.inc',
            211 => 'plugins/views_plugin_argument_validate.inc',
            212 => 'plugins/views_plugin_argument_validate_numeric.inc',
            213 => 'plugins/views_plugin_argument_validate_php.inc',
            214 => 'plugins/views_plugin_cache.inc',
            215 => 'plugins/views_plugin_cache_none.inc',
            216 => 'plugins/views_plugin_cache_time.inc',
            217 => 'plugins/views_plugin_display.inc',
            218 => 'plugins/views_plugin_display_attachment.inc',
            219 => 'plugins/views_plugin_display_block.inc',
            220 => 'plugins/views_plugin_display_default.inc',
            221 => 'plugins/views_plugin_display_embed.inc',
            222 => 'plugins/views_plugin_display_extender.inc',
            223 => 'plugins/views_plugin_display_feed.inc',
            224 => 'plugins/views_plugin_display_page.inc',
            225 => 'plugins/views_plugin_exposed_form_basic.inc',
            226 => 'plugins/views_plugin_exposed_form.inc',
            227 => 'plugins/views_plugin_exposed_form_input_required.inc',
            228 => 'plugins/views_plugin_localization_core.inc',
            229 => 'plugins/views_plugin_localization.inc',
            230 => 'plugins/views_plugin_localization_none.inc',
            231 => 'plugins/views_plugin_pager.inc',
            232 => 'plugins/views_plugin_pager_full.inc',
            233 => 'plugins/views_plugin_pager_mini.inc',
            234 => 'plugins/views_plugin_pager_none.inc',
            235 => 'plugins/views_plugin_pager_some.inc',
            236 => 'plugins/views_plugin_query.inc',
            237 => 'plugins/views_plugin_query_default.inc',
            238 => 'plugins/views_plugin_row.inc',
            239 => 'plugins/views_plugin_row_fields.inc',
            240 => 'plugins/views_plugin_row_rss_fields.inc',
            241 => 'plugins/views_plugin_style.inc',
            242 => 'plugins/views_plugin_style_default.inc',
            243 => 'plugins/views_plugin_style_grid.inc',
            244 => 'plugins/views_plugin_style_list.inc',
            245 => 'plugins/views_plugin_style_jump_menu.inc',
            246 => 'plugins/views_plugin_style_mapping.inc',
            247 => 'plugins/views_plugin_style_rss.inc',
            248 => 'plugins/views_plugin_style_summary.inc',
            249 => 'plugins/views_plugin_style_summary_jump_menu.inc',
            250 => 'plugins/views_plugin_style_summary_unformatted.inc',
            251 => 'plugins/views_plugin_style_table.inc',
            252 => 'tests/handlers/views_handlers.test',
            253 => 'tests/handlers/views_handler_area_text.test',
            254 => 'tests/handlers/views_handler_argument_null.test',
            255 => 'tests/handlers/views_handler_argument_string.test',
            256 => 'tests/handlers/views_handler_field.test',
            257 => 'tests/handlers/views_handler_field_boolean.test',
            258 => 'tests/handlers/views_handler_field_custom.test',
            259 => 'tests/handlers/views_handler_field_counter.test',
            260 => 'tests/handlers/views_handler_field_date.test',
            261 => 'tests/handlers/views_handler_field_file_extension.test',
            262 => 'tests/handlers/views_handler_field_file_size.test',
            263 => 'tests/handlers/views_handler_field_math.test',
            264 => 'tests/handlers/views_handler_field_url.test',
            265 => 'tests/handlers/views_handler_field_xss.test',
            266 => 'tests/handlers/views_handler_filter_combine.test',
            267 => 'tests/handlers/views_handler_filter_date.test',
            268 => 'tests/handlers/views_handler_filter_equality.test',
            269 => 'tests/handlers/views_handler_filter_in_operator.test',
            270 => 'tests/handlers/views_handler_filter_numeric.test',
            271 => 'tests/handlers/views_handler_filter_string.test',
            272 => 'tests/handlers/views_handler_sort_random.test',
            273 => 'tests/handlers/views_handler_sort_date.test',
            274 => 'tests/handlers/views_handler_sort.test',
            275 => 'tests/test_handlers/views_test_area_access.inc',
            276 => 'tests/test_plugins/views_test_plugin_access_test_dynamic.inc',
            277 => 'tests/test_plugins/views_test_plugin_access_test_static.inc',
            278 => 'tests/test_plugins/views_test_plugin_style_test_mapping.inc',
            279 => 'tests/plugins/views_plugin_display.test',
            280 => 'tests/styles/views_plugin_style_jump_menu.test',
            281 => 'tests/styles/views_plugin_style.test',
            282 => 'tests/styles/views_plugin_style_base.test',
            283 => 'tests/styles/views_plugin_style_mapping.test',
            284 => 'tests/styles/views_plugin_style_unformatted.test',
            285 => 'tests/views_access.test',
            286 => 'tests/views_analyze.test',
            287 => 'tests/views_basic.test',
            288 => 'tests/views_argument_default.test',
            289 => 'tests/views_argument_validator.test',
            290 => 'tests/views_exposed_form.test',
            291 => 'tests/field/views_fieldapi.test',
            292 => 'tests/views_glossary.test',
            293 => 'tests/views_groupby.test',
            294 => 'tests/views_handlers.test',
            295 => 'tests/views_module.test',
            296 => 'tests/views_pager.test',
            297 => 'tests/views_plugin_localization_test.inc',
            298 => 'tests/views_translatable.test',
            299 => 'tests/views_query.test',
            300 => 'tests/views_upgrade.test',
            301 => 'tests/views_test.views_default.inc',
            302 => 'tests/comment/views_handler_argument_comment_user_uid.test',
            303 => 'tests/comment/views_handler_filter_comment_user_uid.test',
            304 => 'tests/node/views_node_revision_relations.test',
            305 => 'tests/taxonomy/views_handler_relationship_node_term_data.test',
            306 => 'tests/user/views_handler_field_user_name.test',
            307 => 'tests/user/views_user_argument_default.test',
            308 => 'tests/user/views_user_argument_validate.test',
            309 => 'tests/user/views_user.test',
            310 => 'tests/views_cache.test',
            311 => 'tests/views_view.test',
            312 => 'tests/views_ui.test',
          ),
          'version' => '7.x-3.15',
          'project' => 'views',
          'datestamp' => '1487784193',
        ),
        'schema_version' => '7302',
        'project' => 'views',
        'version' => '7.x-3.15',
      ),
      'views_ui' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/views/views_ui.module',
        'basename' => 'views_ui.module',
        'name' => 'views_ui',
        'info' => 
        array (
          'name' => 'Views UI',
          'description' => 'Administrative interface to views. Without this module, you cannot create or edit your views.',
          'package' => 'Views',
          'core' => '7.x',
          'configure' => 'admin/structure/views',
          'dependencies' => 
          array (
            0 => 'views',
          ),
          'files' => 
          array (
            0 => 'views_ui.module',
            1 => 'plugins/views_wizard/views_ui_base_views_wizard.class.php',
          ),
          'version' => '7.x-3.15',
          'project' => 'views',
          'datestamp' => '1487784193',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'views',
        'version' => '7.x-3.15',
      ),
      'field_group' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/field_group/field_group.module',
        'basename' => 'field_group.module',
        'name' => 'field_group',
        'info' => 
        array (
          'name' => 'Field Group',
          'description' => 'Provides the ability to group your fields on both form and display.',
          'package' => 'Fields',
          'dependencies' => 
          array (
            0 => 'field',
            1 => 'ctools',
          ),
          'core' => '7.x',
          'files' => 
          array (
            0 => 'tests/field_group.ui.test',
            1 => 'tests/field_group.display.test',
          ),
          'version' => '7.x-1.5',
          'project' => 'field_group',
          'datestamp' => '1452033709',
          'php' => '5.2.4',
        ),
        'schema_version' => '7008',
        'project' => 'field_group',
        'version' => '7.x-1.5',
      ),
      'cer' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/cer/cer.module',
        'basename' => 'cer.module',
        'name' => 'cer',
        'info' => 
        array (
          'name' => 'Corresponding Entity References',
          'description' => 'Syncs the entity references between entity types which have an entityreference to each other.',
          'core' => '7.x',
          'package' => 'Fields',
          'dependencies' => 
          array (
            0 => 'entityreference',
            1 => 'ctools',
          ),
          'files' => 
          array (
            0 => 'handler.inc',
          ),
          'configure' => 'admin/config/system/cer',
          'version' => '7.x-2.x-dev',
          'project' => 'cer',
          'datestamp' => '1407528862',
          'php' => '5.2.4',
        ),
        'schema_version' => '7002',
        'project' => 'cer',
        'version' => '7.x-2.x-dev',
      ),
      'mimemail_compress' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/mimemail/modules/mimemail_compress/mimemail_compress.module',
        'basename' => 'mimemail_compress.module',
        'name' => 'mimemail_compress',
        'info' => 
        array (
          'name' => 'Mime Mail CSS Compressor',
          'description' => 'Converts CSS to inline styles in an HTML message. (Requires the PHP DOM extension.)',
          'package' => 'Mail',
          'dependencies' => 
          array (
            0 => 'mimemail',
          ),
          'core' => '7.x',
          'files' => 
          array (
            0 => 'mimemail_compress.inc',
          ),
          'version' => '7.x-1.1',
          'project' => 'mimemail',
          'datestamp' => '1539793390',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'mimemail',
        'version' => '7.x-1.1',
      ),
      'mimemail_action' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/mimemail/modules/mimemail_action/mimemail_action.module',
        'basename' => 'mimemail_action.module',
        'name' => 'mimemail_action',
        'info' => 
        array (
          'name' => 'Mime Mail Action',
          'description' => 'Provide actions for Mime Mail.',
          'package' => 'Mail',
          'dependencies' => 
          array (
            0 => 'mimemail',
            1 => 'trigger',
          ),
          'core' => '7.x',
          'version' => '7.x-1.1',
          'project' => 'mimemail',
          'datestamp' => '1539793390',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'mimemail',
        'version' => '7.x-1.1',
      ),
      'mimemail_example' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/mimemail/modules/mimemail_example/mimemail_example.module',
        'basename' => 'mimemail_example.module',
        'name' => 'mimemail_example',
        'info' => 
        array (
          'name' => 'Mime Mail Example',
          'description' => 'Example of how to use the Mime Mail module.',
          'dependencies' => 
          array (
            0 => 'mimemail',
          ),
          'package' => 'Example modules',
          'core' => '7.x',
          'version' => '7.x-1.1',
          'project' => 'mimemail',
          'datestamp' => '1539793390',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'mimemail',
        'version' => '7.x-1.1',
      ),
      'mimemail' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/mimemail/mimemail.module',
        'basename' => 'mimemail.module',
        'name' => 'mimemail',
        'info' => 
        array (
          'name' => 'Mime Mail',
          'description' => 'Send MIME-encoded emails with embedded images and attachments.',
          'dependencies' => 
          array (
            0 => 'mailsystem',
            1 => 'system (>=7.24)',
          ),
          'package' => 'Mail',
          'core' => '7.x',
          'configure' => 'admin/config/system/mimemail',
          'files' => 
          array (
            0 => 'includes/mimemail.mail.inc',
            1 => 'tests/mimemail.test',
            2 => 'tests/mimemail_rules.test',
            3 => 'tests/mimemail_compress.test',
          ),
          'test_dependencies' => 
          array (
            0 => 'rules',
            1 => 'entity',
            2 => 'entity_token',
          ),
          'version' => '7.x-1.1',
          'project' => 'mimemail',
          'datestamp' => '1539793390',
          'php' => '5.2.4',
        ),
        'schema_version' => '7002',
        'project' => 'mimemail',
        'version' => '7.x-1.1',
      ),
      'ckeditor_link' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/ckeditor_link/ckeditor_link.module',
        'basename' => 'ckeditor_link.module',
        'name' => 'ckeditor_link',
        'info' => 
        array (
          'name' => 'CKEditor Link',
          'description' => 'Easily create links to Drupal internal paths through CKEditor.',
          'package' => 'User interface',
          'core' => '7.x',
          'configure' => 'admin/config/content/ckeditor_link',
          'version' => '7.x-2.4',
          'project' => 'ckeditor_link',
          'datestamp' => '1454115840',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'ckeditor_link',
        'version' => '7.x-2.4',
      ),
      'video_embed_facebook' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/video_embed_field/video_embed_facebook/video_embed_facebook.module',
        'basename' => 'video_embed_facebook.module',
        'name' => 'video_embed_facebook',
        'info' => 
        array (
          'name' => 'Video Embed Facebook',
          'description' => 'Provides Facebook handler for Video Embed Fields.  This module also serves as an example of how to add handlers to video embed field.',
          'core' => '7.x',
          'package' => 'Media',
          'configure' => 'admin/config/media/vef_video_styles',
          'dependencies' => 
          array (
            0 => 'video_embed_field',
          ),
          'version' => '7.x-2.0-beta11',
          'project' => 'video_embed_field',
          'datestamp' => '1441639440',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'video_embed_field',
        'version' => '7.x-2.0-beta11',
      ),
      'video_embed_brightcove' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/video_embed_field/video_embed_brightcove/video_embed_brightcove.module',
        'basename' => 'video_embed_brightcove.module',
        'name' => 'video_embed_brightcove',
        'info' => 
        array (
          'name' => 'Video Embed Brightcove',
          'description' => 'Provides Brightcove handler for Video Embed Fields.',
          'core' => '7.x',
          'package' => 'Media',
          'configure' => 'admin/config/media/vef_video_styles',
          'dependencies' => 
          array (
            0 => 'video_embed_field',
          ),
          'version' => '7.x-2.0-beta11',
          'project' => 'video_embed_field',
          'datestamp' => '1441639440',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'video_embed_field',
        'version' => '7.x-2.0-beta11',
      ),
      'video_embed_field' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/video_embed_field/video_embed_field.module',
        'basename' => 'video_embed_field.module',
        'name' => 'video_embed_field',
        'info' => 
        array (
          'name' => 'Video Embed Field',
          'description' => 'Expose a field type for embedding videos from youtube or vimeo.',
          'core' => '7.x',
          'package' => 'Media',
          'configure' => 'admin/config/media/vef',
          'files' => 
          array (
            0 => 'video_embed_field.migrate.inc',
            1 => 'views/handlers/views_embed_field_views_handler_field_thumbnail_path.inc',
          ),
          'dependencies' => 
          array (
            0 => 'ctools',
            1 => 'image',
          ),
          'version' => '7.x-2.0-beta11',
          'project' => 'video_embed_field',
          'datestamp' => '1441639440',
          'php' => '5.2.4',
        ),
        'schema_version' => '7010',
        'project' => 'video_embed_field',
        'version' => '7.x-2.0-beta11',
      ),
      'flexslider_fields' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/flexslider/flexslider_fields/flexslider_fields.module',
        'basename' => 'flexslider_fields.module',
        'name' => 'flexslider_fields',
        'info' => 
        array (
          'name' => 'FlexSlider Fields',
          'description' => 'Adds a display mode in Fields for FlexSlider',
          'core' => '7.x',
          'package' => 'FlexSlider',
          'dependencies' => 
          array (
            0 => 'flexslider',
          ),
          'version' => '7.x-2.0-rc1',
          'project' => 'flexslider',
          'datestamp' => '1438285141',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'flexslider',
        'version' => '7.x-2.0-rc1',
      ),
      'flexslider_example' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/flexslider/flexslider_example/flexslider_example.module',
        'basename' => 'flexslider_example.module',
        'name' => 'flexslider_example',
        'info' => 
        array (
          'name' => 'FlexSlider Example',
          'description' => 'Sample implementation of FlexSlider',
          'core' => '7.x',
          'package' => 'FlexSlider',
          'php' => '5.2.4',
          'dependencies' => 
          array (
            0 => 'context',
            1 => 'features',
            2 => 'flexslider',
            3 => 'flexslider_fields',
            4 => 'flexslider_views',
            5 => 'image',
            6 => 'menu',
            7 => 'strongarm',
            8 => 'views',
          ),
          'features' => 
          array (
            'context' => 
            array (
              0 => 'flexslider_example_thumbnail',
            ),
            'ctools' => 
            array (
              0 => 'context:context:3',
              1 => 'flexslider:flexslider_default_preset:1',
              2 => 'strongarm:strongarm:1',
              3 => 'views:views_default:3.0',
            ),
            'features_api' => 
            array (
              0 => 'api:1',
            ),
            'field' => 
            array (
              0 => 'node-flexslider_example-field_flexslider_example_image',
              1 => 'node-flexslider_example-field_flexslider_example_slidesh',
            ),
            'flexslider_optionset' => 
            array (
              0 => 'flexslider_carousel_with_min_and_max_ranges',
              1 => 'flexslider_default_basic_carousel',
              2 => 'flexslider_default_slider_thumbnail_controlnav',
              3 => 'flexslider_default_slider_w_thumbnail_slider',
              4 => 'flexslider_default_thumbnail_captions',
              5 => 'flexslider_default_thumbnail_slider',
            ),
            'menu_custom' => 
            array (
              0 => 'menu-flexslider-example',
            ),
            'node' => 
            array (
              0 => 'flexslider_example',
            ),
            'variable' => 
            array (
              0 => 'field_bundle_settings_node__flexslider_example',
            ),
            'views_view' => 
            array (
              0 => 'flexslider_views_example',
            ),
          ),
          'version' => '7.x-2.0-rc1',
          'project' => 'flexslider',
          'datestamp' => '1438285141',
        ),
        'schema_version' => '7001',
        'project' => 'flexslider',
        'version' => '7.x-2.0-rc1',
      ),
      'flexslider_views' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/flexslider/flexslider_views/flexslider_views.module',
        'basename' => 'flexslider_views.module',
        'name' => 'flexslider_views',
        'info' => 
        array (
          'name' => 'FlexSlider Views Style',
          'description' => 'Adds a Views style plugin for FlexSlider',
          'core' => '7.x',
          'package' => 'FlexSlider',
          'dependencies' => 
          array (
            0 => 'views',
            1 => 'flexslider',
          ),
          'files' => 
          array (
            0 => 'flexslider_views.module',
            1 => 'flexslider_views.views.inc',
            2 => 'flexslider_views_plugin_style_flexslider.inc',
          ),
          'version' => '7.x-2.0-rc1',
          'project' => 'flexslider',
          'datestamp' => '1438285141',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'flexslider',
        'version' => '7.x-2.0-rc1',
      ),
      'flexslider' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/flexslider/flexslider.module',
        'basename' => 'flexslider.module',
        'name' => 'flexslider',
        'info' => 
        array (
          'name' => 'FlexSlider',
          'description' => 'Integrate the FlexSlider 2 library with Drupal',
          'core' => '7.x',
          'package' => 'FlexSlider',
          'dependencies' => 
          array (
            0 => 'libraries (>=2.x)',
            1 => 'ctools',
            2 => 'image',
          ),
          'files' => 
          array (
            0 => 'theme/flexslider.theme.inc',
            1 => 'flexslider.test',
          ),
          'configure' => 'admin/config/media/flexslider',
          'version' => '7.x-2.0-rc1',
          'project' => 'flexslider',
          'datestamp' => '1438285141',
          'php' => '5.2.4',
        ),
        'schema_version' => '7202',
        'project' => 'flexslider',
        'version' => '7.x-2.0-rc1',
      ),
      'securelogin' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/securelogin/securelogin.module',
        'basename' => 'securelogin.module',
        'name' => 'securelogin',
        'info' => 
        array (
          'name' => 'Secure Login',
          'description' => 'Enables user login and other forms to be submitted securely via HTTPS and enforces secure authenticated sessions.',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'securelogin.admin.inc',
            1 => 'securelogin.install',
            2 => 'securelogin.module',
            3 => 'securelogin.test',
          ),
          'configure' => 'admin/config/people/securelogin',
          'version' => '7.x-1.6',
          'project' => 'securelogin',
          'datestamp' => '1446062040',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'project' => 'securelogin',
        'version' => '7.x-1.6',
      ),
      'extlink' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/extlink/extlink.module',
        'basename' => 'extlink.module',
        'name' => 'extlink',
        'info' => 
        array (
          'name' => 'External Links',
          'description' => 'Determine behavior and appearance for external links. Options include: Make external links open in a new window, add icons next to external links and email addresses, display pop-up warnings when users click external links.',
          'package' => 'User interface',
          'core' => '7.x',
          'configure' => 'admin/config/user-interface/extlink',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'extlink.css',
            ),
          ),
          'files' => 
          array (
            0 => 'extlink.test',
          ),
          'version' => '7.x-1.18',
          'project' => 'extlink',
          'datestamp' => '1406278728',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7101',
        'project' => 'extlink',
        'version' => '7.x-1.18',
      ),
      'email' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/email/email.module',
        'basename' => 'email.module',
        'name' => 'email',
        'info' => 
        array (
          'name' => 'Email',
          'description' => 'Defines an email field type.',
          'core' => '7.x',
          'package' => 'Fields',
          'files' => 
          array (
            0 => 'email.migrate.inc',
          ),
          'version' => '7.x-1.3',
          'project' => 'email',
          'datestamp' => '1397134155',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'email',
        'version' => '7.x-1.3',
      ),
      'imagemagick_advanced' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/imagemagick/imagemagick_advanced/imagemagick_advanced.module',
        'basename' => 'imagemagick_advanced.module',
        'name' => 'imagemagick_advanced',
        'info' => 
        array (
          'name' => 'ImageMagick Advanced',
          'description' => 'Provides advanced ImageMagick effects and options.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'imagemagick',
          ),
          'version' => '7.x-1.0',
          'project' => 'imagemagick',
          'datestamp' => '1362244511',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'imagemagick',
        'version' => '7.x-1.0',
      ),
      'imagemagick' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/imagemagick/imagemagick.module',
        'basename' => 'imagemagick.module',
        'name' => 'imagemagick',
        'info' => 
        array (
          'name' => 'ImageMagick',
          'description' => 'Provides ImageMagick integration.',
          'core' => '7.x',
          'configure' => 'admin/config/media/image-toolkit',
          'version' => '7.x-1.0',
          'project' => 'imagemagick',
          'datestamp' => '1362244511',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'imagemagick',
        'version' => '7.x-1.0',
      ),
      'honeypot' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/honeypot/honeypot.module',
        'basename' => 'honeypot.module',
        'name' => 'honeypot',
        'info' => 
        array (
          'name' => 'Honeypot',
          'description' => 'Mitigates spam form submissions using the honeypot method.',
          'core' => '7.x',
          'configure' => 'admin/config/content/honeypot',
          'package' => 'Spam control',
          'files' => 
          array (
            0 => 'honeypot.test',
          ),
          'version' => '7.x-1.22',
          'project' => 'honeypot',
          'datestamp' => '1457672041',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7101',
        'project' => 'honeypot',
        'version' => '7.x-1.22',
      ),
      'recaptcha_mailhide' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/recaptcha/recaptcha_mailhide.module',
        'basename' => 'recaptcha_mailhide.module',
        'name' => 'recaptcha_mailhide',
        'info' => 
        array (
          'name' => 'reCAPTCHA Mailhide',
          'description' => 'Uses the reCAPTCHA web service to protect email addresses.',
          'package' => 'Spam control',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'recaptcha_mailhide.module',
          ),
          'version' => '7.x-1.12',
          'project' => 'recaptcha',
          'datestamp' => '1428593287',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'recaptcha',
        'version' => '7.x-1.12',
      ),
      'recaptcha' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/recaptcha/recaptcha.module',
        'basename' => 'recaptcha.module',
        'name' => 'recaptcha',
        'info' => 
        array (
          'name' => 'reCAPTCHA',
          'description' => 'Uses the reCAPTCHA web service to improve the CAPTCHA system.',
          'core' => '7.x',
          'package' => 'Spam control',
          'dependencies' => 
          array (
            0 => 'captcha',
          ),
          'files' => 
          array (
            0 => 'tests/recaptcha_base.test',
            1 => 'tests/recaptcha_ui.test',
            2 => 'tests/recaptcha_server_status.test',
          ),
          'configure' => 'admin/config/people/captcha/recaptcha',
          'version' => '7.x-1.12',
          'project' => 'recaptcha',
          'datestamp' => '1428593287',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'recaptcha',
        'version' => '7.x-1.12',
      ),
      'rules_http_client' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/rules_http_client/rules_http_client.module',
        'basename' => 'rules_http_client.module',
        'name' => 'rules_http_client',
        'info' => 
        array (
          'name' => 'Rules HTTP Client',
          'description' => 'Provides an action for making http requests.',
          'package' => 'Rules',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'rules',
          ),
          'version' => '7.x-1.0-beta1',
          'project' => 'rules_http_client',
          'datestamp' => '1386187110',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'rules_http_client',
        'version' => '7.x-1.0-beta1',
      ),
      'jquery_update' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/jquery_update/jquery_update.module',
        'basename' => 'jquery_update.module',
        'name' => 'jquery_update',
        'info' => 
        array (
          'name' => 'jQuery Update',
          'description' => 'Update jQuery and jQuery UI to a more recent version.',
          'package' => 'User interface',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'jquery_update.module',
            1 => 'jquery_update.install',
          ),
          'configure' => 'admin/config/development/jquery_update',
          'version' => '7.x-2.7',
          'project' => 'jquery_update',
          'datestamp' => '1445379855',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'project' => 'jquery_update',
        'version' => '7.x-2.7',
      ),
      'file_entity' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/file_entity/file_entity.module',
        'basename' => 'file_entity.module',
        'name' => 'file_entity',
        'info' => 
        array (
          'name' => 'File Entity',
          'description' => 'Extends Drupal file entities to be fieldable and viewable.',
          'package' => 'Media',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'field',
            1 => 'file',
            2 => 'ctools',
            3 => 'system (>=7.33)',
          ),
          'test_dependencies' => 
          array (
            0 => 'token',
            1 => 'views',
          ),
          'files' => 
          array (
            0 => 'views/views_handler_argument_file_type.inc',
            1 => 'views/views_handler_field_file_rendered.inc',
            2 => 'views/views_handler_field_file_type.inc',
            3 => 'views/views_handler_filter_file_type.inc',
            4 => 'views/views_handler_filter_schema_type.inc',
            5 => 'views/views_handler_field_file_filename.inc',
            6 => 'views/views_handler_field_file_link.inc',
            7 => 'views/views_handler_field_file_link_edit.inc',
            8 => 'views/views_handler_field_file_link_delete.inc',
            9 => 'views/views_handler_field_file_link_download.inc',
            10 => 'views/views_handler_field_file_link_usage.inc',
            11 => 'views/views_plugin_row_file_rss.inc',
            12 => 'views/views_plugin_row_file_view.inc',
            13 => 'file_entity.test',
            14 => 'file_entity_views.test',
          ),
          'configure' => 'admin/config/media/file-settings',
          'version' => '7.x-2.25',
          'project' => 'file_entity',
          'datestamp' => '1541794687',
          'php' => '5.2.4',
        ),
        'schema_version' => '7216',
        'project' => 'file_entity',
        'version' => '7.x-2.25',
      ),
      'publish_button' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/publish_button/publish_button.module',
        'basename' => 'publish_button.module',
        'name' => 'publish_button',
        'info' => 
        array (
          'name' => 'Publish button',
          'description' => 'Inserts a publish button.',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'publish_button_views_handler_node_link.inc',
          ),
          'version' => '7.x-1.1',
          'project' => 'publish_button',
          'datestamp' => '1418774881',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'publish_button',
        'version' => '7.x-1.1',
      ),
      'transliteration' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/transliteration/transliteration.module',
        'basename' => 'transliteration.module',
        'name' => 'transliteration',
        'info' => 
        array (
          'name' => 'Transliteration',
          'description' => 'Converts non-latin text to US-ASCII and sanitizes file names.',
          'core' => '7.x',
          'configure' => 'admin/config/media/file-system',
          'version' => '7.x-3.2',
          'project' => 'transliteration',
          'datestamp' => '1395079444',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7300',
        'project' => 'transliteration',
        'version' => '7.x-3.2',
      ),
      'feeds_xpathparser' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/feeds_xpathparser/feeds_xpathparser.module',
        'basename' => 'feeds_xpathparser.module',
        'name' => 'feeds_xpathparser',
        'info' => 
        array (
          'name' => 'Feeds XPath Parser',
          'description' => 'Parse an XML or HTML document using XPath.',
          'package' => 'Feeds',
          'dependencies' => 
          array (
            0 => 'feeds',
          ),
          'files' => 
          array (
            0 => 'FeedsXPathParserBase.inc',
            1 => 'FeedsXPathParserHTML.inc',
            2 => 'FeedsXPathParserXML.inc',
            3 => 'FeedsXPathParserQueryParser.inc',
            4 => 'FeedsXPathParserDOMXPath.inc',
            5 => 'tests/feeds_xpathparser.test',
            6 => 'tests/feeds_xpathparser_parser_html.test',
            7 => 'tests/feeds_xpathparser_parser_xml.test',
            8 => 'tests/feeds_xpathparser_query_parser.test',
          ),
          'core' => '7.x',
          'version' => '7.x-1.1',
          'project' => 'feeds_xpathparser',
          'datestamp' => '1435895044',
          'php' => '5.2.4',
        ),
        'schema_version' => '7101',
        'project' => 'feeds_xpathparser',
        'version' => '7.x-1.1',
      ),
      'menu_breadcrumb' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/menu_breadcrumb/menu_breadcrumb.module',
        'basename' => 'menu_breadcrumb.module',
        'name' => 'menu_breadcrumb',
        'info' => 
        array (
          'name' => 'Menu breadcrumb',
          'description' => 'Allows you to use the menu the current page belongs to for the breadcrumb.',
          'dependencies' => 
          array (
            0 => 'menu',
          ),
          'core' => '7.x',
          'files' => 
          array (
            0 => 'menu_breadcrumb.install',
          ),
          'configure' => 'admin/config/user-interface/menu-breadcrumb',
          'version' => '7.x-1.6',
          'project' => 'menu_breadcrumb',
          'datestamp' => '1425993992',
          'php' => '5.2.4',
        ),
        'schema_version' => '6100',
        'project' => 'menu_breadcrumb',
        'version' => '7.x-1.6',
      ),
      'actions_permissions' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/views_bulk_operations/actions_permissions.module',
        'basename' => 'actions_permissions.module',
        'name' => 'actions_permissions',
        'info' => 
        array (
          'name' => 'Actions permissions (VBO)',
          'description' => 'Provides permission-based access control for actions. Used by Views Bulk Operations.',
          'package' => 'Administration',
          'core' => '7.x',
          'version' => '7.x-3.3',
          'project' => 'views_bulk_operations',
          'datestamp' => '1435764542',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'views_bulk_operations',
        'version' => '7.x-3.3',
      ),
      'views_bulk_operations' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/views_bulk_operations/views_bulk_operations.module',
        'basename' => 'views_bulk_operations.module',
        'name' => 'views_bulk_operations',
        'info' => 
        array (
          'name' => 'Views Bulk Operations',
          'description' => 'Provides a way of selecting multiple rows and applying operations to them.',
          'dependencies' => 
          array (
            0 => 'entity',
            1 => 'views',
          ),
          'package' => 'Views',
          'core' => '7.x',
          'php' => '5.2.9',
          'files' => 
          array (
            0 => 'plugins/operation_types/base.class.php',
            1 => 'views/views_bulk_operations_handler_field_operations.inc',
          ),
          'version' => '7.x-3.3',
          'project' => 'views_bulk_operations',
          'datestamp' => '1435764542',
        ),
        'schema_version' => 0,
        'project' => 'views_bulk_operations',
        'version' => '7.x-3.3',
      ),
      'editableviews' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/editableviews/editableviews.module',
        'basename' => 'editableviews.module',
        'name' => 'editableviews',
        'info' => 
        array (
          'name' => 'Editable Views',
          'description' => 'Allows entity data in a view to be edited.',
          'package' => 'Views',
          'dependencies' => 
          array (
            0 => 'views',
            1 => 'entity',
            2 => 'ctools',
            3 => 'field_ui',
          ),
          'core' => '7.x',
          'files' => 
          array (
            0 => 'editableviews_plugin_style_row_edit_table.inc',
            1 => 'handlers/editableviews_handler_field_field_edit.inc',
            2 => 'handlers/editableviews_handler_field_node_title_edit.inc',
            3 => 'handlers/editableviews_handler_field_entity_metadata_property.inc',
            4 => 'handlers/editableviews_handler_field_save_button_jump_link.inc',
            5 => 'tests/editableviews.test',
          ),
          'test_dependencies' => 
          array (
            0 => 'entityreference',
            1 => 'features',
          ),
          'version' => '7.x-1.0-beta10',
          'project' => 'editableviews',
          'datestamp' => '1438114140',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'editableviews',
        'version' => '7.x-1.0-beta10',
      ),
      'module_filter' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/module_filter/module_filter.module',
        'basename' => 'module_filter.module',
        'name' => 'module_filter',
        'info' => 
        array (
          'name' => 'Module filter',
          'description' => 'Filter the modules list.',
          'core' => '7.x',
          'package' => 'Administration',
          'files' => 
          array (
            0 => 'module_filter.install',
            1 => 'module_filter.js',
            2 => 'module_filter.module',
            3 => 'module_filter.admin.inc',
            4 => 'module_filter.theme.inc',
            5 => 'css/module_filter.css',
            6 => 'css/module_filter_tab.css',
            7 => 'js/module_filter.js',
            8 => 'js/module_filter_tab.js',
          ),
          'configure' => 'admin/config/user-interface/modulefilter',
          'version' => '7.x-2.0',
          'project' => 'module_filter',
          'datestamp' => '1424631189',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7201',
        'project' => 'module_filter',
        'version' => '7.x-2.0',
      ),
      'eva' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/eva/eva.module',
        'basename' => 'eva.module',
        'name' => 'eva',
        'info' => 
        array (
          'name' => 'Eva',
          'description' => 'Provides a Views display type that can be attached to entities.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'views',
          ),
          'package' => 'Views',
          'files' => 
          array (
            0 => 'eva_plugin_display_entity.inc',
          ),
          'version' => '7.x-1.3',
          'project' => 'eva',
          'datestamp' => '1470619440',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'eva',
        'version' => '7.x-1.3',
      ),
      'backup_migrate' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/backup_migrate/backup_migrate.module',
        'basename' => 'backup_migrate.module',
        'name' => 'backup_migrate',
        'info' => 
        array (
          'name' => 'Backup and Migrate',
          'description' => 'Backup or migrate the Drupal Database quickly and without unnecessary data.',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'backup_migrate.module',
            1 => 'backup_migrate.install',
            2 => 'includes/destinations.inc',
            3 => 'includes/profiles.inc',
            4 => 'includes/schedules.inc',
          ),
          'configure' => 'admin/config/system/backup_migrate',
          'version' => '7.x-2.8',
          'project' => 'backup_migrate',
          'datestamp' => '1383686305',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7205',
        'project' => 'backup_migrate',
        'version' => '7.x-2.8',
      ),
      'field_default_token' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/field_default_token/field_default_token.module',
        'basename' => 'field_default_token.module',
        'name' => 'field_default_token',
        'info' => 
        array (
          'name' => 'Field default token',
          'description' => 'Enables to use tokens as field default values.',
          'package' => 'Fields',
          'core' => '7.x',
          'version' => '7.x-1.3',
          'project' => 'field_default_token',
          'datestamp' => '1452121485',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'project' => 'field_default_token',
        'version' => '7.x-1.3',
      ),
      'og_register' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/og/og_register/og_register.module',
        'basename' => 'og_register.module',
        'name' => 'og_register',
        'info' => 
        array (
          'name' => 'Organic groups register',
          'description' => 'Allow subscribing to groups during the user registration.',
          'package' => 'Organic groups',
          'dependencies' => 
          array (
            0 => 'og',
          ),
          'core' => '7.x',
          'files' => 
          array (
            0 => 'og_register.module',
            1 => 'og_register.install',
          ),
          'version' => '7.x-2.9',
          'project' => 'og',
          'datestamp' => '1461150274',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'og',
        'version' => '7.x-2.9',
      ),
      'og_example' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/og/og_example/og_example.module',
        'basename' => 'og_example.module',
        'name' => 'og_example',
        'info' => 
        array (
          'name' => 'OG example',
          'description' => 'Example module to show Organic groups configuration that can be used as building block.',
          'core' => '7.x',
          'package' => 'Features',
          'dependencies' => 
          array (
            0 => 'ctools',
            1 => 'entityreference_prepopulate',
            2 => 'features',
            3 => 'list',
            4 => 'message_notify',
            5 => 'og',
            6 => 'og_ui',
            7 => 'page_manager',
            8 => 'panels',
            9 => 'rules',
            10 => 'views_content',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'page_manager:pages_default:1',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'field_base' => 
            array (
              0 => 'body',
              1 => 'field_node_reference',
              2 => 'group_group',
              3 => 'og_group_ref',
            ),
            'field_instance' => 
            array (
              0 => 'message-og_new_content-field_node_reference',
              1 => 'node-group-body',
              2 => 'node-group-group_group',
              3 => 'node-post-body',
              4 => 'node-post-og_group_ref',
            ),
            'message_type' => 
            array (
              0 => 'og_new_content',
            ),
            'node' => 
            array (
              0 => 'group',
              1 => 'post',
            ),
            'page_manager_handlers' => 
            array (
              0 => 'node_view_panel_context',
            ),
            'rules_config' => 
            array (
              0 => 'rules_og_new_content_message',
            ),
          ),
          'version' => '7.x-2.9',
          'project' => 'og',
          'datestamp' => '1461150274',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'og',
        'version' => '7.x-2.9',
      ),
      'og_field_access' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/og/og_field_access/og_field_access.module',
        'basename' => 'og_field_access.module',
        'name' => 'og_field_access',
        'info' => 
        array (
          'name' => 'Organic groups field access',
          'description' => 'Provide field access based on group.',
          'package' => 'Organic groups',
          'dependencies' => 
          array (
            0 => 'og',
          ),
          'core' => '7.x',
          'files' => 
          array (
            0 => 'og_field_access.module',
            1 => 'og_field_access.test',
          ),
          'version' => '7.x-2.9',
          'project' => 'og',
          'datestamp' => '1461150274',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'og',
        'version' => '7.x-2.9',
      ),
      'og_context' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/og/og_context/og_context.module',
        'basename' => 'og_context.module',
        'name' => 'og_context',
        'info' => 
        array (
          'name' => 'Organic groups context',
          'description' => 'Get a group from a viewed page.',
          'package' => 'Organic groups',
          'dependencies' => 
          array (
            0 => 'og',
          ),
          'core' => '7.x',
          'files' => 
          array (
            0 => 'og_context.module',
            1 => 'og_context.install',
            2 => 'includes/views/handlers/og_context_plugin_argument_default_group_context.inc',
            3 => 'includes/views/handlers/og_context_plugin_access_og_perm.inc',
            4 => 'og_context.test',
          ),
          'version' => '7.x-2.9',
          'project' => 'og',
          'datestamp' => '1461150274',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'og',
        'version' => '7.x-2.9',
      ),
      'og_access' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/og/og_access/og_access.module',
        'basename' => 'og_access.module',
        'name' => 'og_access',
        'info' => 
        array (
          'name' => 'Organic groups access control',
          'description' => 'Enable access control for private and public groups and group content.',
          'package' => 'Organic groups',
          'dependencies' => 
          array (
            0 => 'og',
          ),
          'core' => '7.x',
          'version' => '7.x-2.9',
          'files' => 
          array (
            0 => 'og_access.module',
            1 => 'og_access.install',
            2 => 'og_access.test',
          ),
          'project' => 'og',
          'datestamp' => '1461150274',
          'php' => '5.2.4',
        ),
        'schema_version' => '7200',
        'project' => 'og',
        'version' => '7.x-2.9',
      ),
      'og_ui' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/og/og_ui/og_ui.module',
        'basename' => 'og_ui.module',
        'name' => 'og_ui',
        'info' => 
        array (
          'name' => 'Organic groups UI',
          'description' => 'Organic groups UI.',
          'package' => 'Organic groups',
          'dependencies' => 
          array (
            0 => 'og',
            1 => 'views_bulk_operations',
          ),
          'core' => '7.x',
          'version' => '7.x-2.9',
          'files' => 
          array (
            0 => 'og_ui.test',
            1 => 'includes/views/handlers/og_ui_handler_area_og_membership_overview.inc',
            2 => 'includes/migrate/7000/add_field.inc',
            3 => 'includes/migrate/7000/populate_field.inc',
            4 => 'includes/migrate/7000/set_roles.inc',
          ),
          'configure' => 'admin/config/group',
          'project' => 'og',
          'datestamp' => '1461150274',
          'php' => '5.2.4',
        ),
        'schema_version' => '7200',
        'project' => 'og',
        'version' => '7.x-2.9',
      ),
      'og' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/og/og.module',
        'basename' => 'og.module',
        'name' => 'og',
        'info' => 
        array (
          'name' => 'Organic groups',
          'description' => 'API to allow associating content with groups.',
          'package' => 'Organic groups',
          'dependencies' => 
          array (
            0 => 'options',
            1 => 'list',
            2 => 'text',
            3 => 'entity',
            4 => 'entityreference',
          ),
          'core' => '7.x',
          'files' => 
          array (
            0 => 'og.info.inc',
            1 => 'includes/og.admin.inc',
            2 => 'includes/og.exception.inc',
            3 => 'includes/og.membership.inc',
            4 => 'includes/og.membership_type.inc',
            5 => 'includes/views/og.views.inc',
            6 => 'og.test',
            7 => 'includes/views/handlers/og_plugin_argument_validate_group.inc',
            8 => 'includes/views/handlers/og_plugin_argument_default_user_groups.inc',
            9 => 'includes/views/handlers/og_handler_field_group_member_count.inc',
            10 => 'includes/views/handlers/og_handler_field_group_audience_state.inc',
            11 => 'includes/views/handlers/og_handler_field_prerender_list.inc',
            12 => 'includes/views/handlers/og_handler_field_user_roles.inc',
            13 => 'includes/views/handlers/og_handler_field_group_permissions.inc',
            14 => 'includes/views/handlers/og_handler_field_og_membership_link_edit.inc',
            15 => 'includes/views/handlers/og_handler_field_og_membership_link_delete.inc',
            16 => 'includes/views/handlers/og_handler_filter_group_audience_state.inc',
            17 => 'includes/views/handlers/og_handler_filter_user_roles.inc',
            18 => 'includes/views/handlers/og_handler_relationship.inc',
            19 => 'includes/views/handlers/og_handler_relationship_membership_roles.inc',
            20 => 'includes/migrate/plugins/destinations/og_membership.inc',
            21 => 'includes/migrate/7000/og_add_fields.inc',
            22 => 'includes/migrate/7000/og_content.inc',
            23 => 'includes/migrate/7000/og_group.inc',
            24 => 'includes/migrate/7000/og_user.inc',
            25 => 'includes/migrate/7000/og_ogur_roles.migrate.inc',
            26 => 'includes/migrate/7000/og_ogur.migrate.inc',
            27 => 'includes/migrate/og.migrate.inc',
            28 => 'includes/migrate/7200/og_og_membership.migrate.inc',
            29 => 'includes/migrate/7200/og_roles.migrate.inc',
            30 => 'includes/migrate/7200/og_user_roles.migrate.inc',
          ),
          'version' => '7.x-2.9',
          'project' => 'og',
          'datestamp' => '1461150274',
          'php' => '5.2.4',
        ),
        'schema_version' => '7205',
        'project' => 'og',
        'version' => '7.x-2.9',
      ),
      'feeds_news' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/feeds/feeds_news/feeds_news.module',
        'basename' => 'feeds_news.module',
        'name' => 'feeds_news',
        'info' => 
        array (
          'name' => 'Feeds News',
          'description' => 'A news aggregator built with feeds, creates nodes from imported feed items. With OPML import.',
          'core' => '7.x',
          'package' => 'Feeds',
          'dependencies' => 
          array (
            0 => 'ctools',
            1 => 'features',
            2 => 'feeds',
            3 => 'views',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'feeds:feeds_importer_default:1',
              1 => 'views:views_default:3.0',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'feeds_importer' => 
            array (
              0 => 'feed',
              1 => 'opml',
            ),
            'field_base' => 
            array (
              0 => 'field_feed_item_description',
            ),
            'field_instance' => 
            array (
              0 => 'node-feed_item-field_feed_item_description',
            ),
            'node' => 
            array (
              0 => 'feed',
              1 => 'feed_item',
            ),
            'views_view' => 
            array (
              0 => 'feeds_defaults_feed_items',
            ),
          ),
          'files' => 
          array (
            0 => 'feeds_news.module',
            1 => 'feeds_news.test',
          ),
          'version' => '7.x-2.0-beta2',
          'project' => 'feeds',
          'datestamp' => '1456055647',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'feeds',
        'version' => '7.x-2.0-beta2',
      ),
      'feeds_ui' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/feeds/feeds_ui/feeds_ui.module',
        'basename' => 'feeds_ui.module',
        'name' => 'feeds_ui',
        'info' => 
        array (
          'name' => 'Feeds Admin UI',
          'description' => 'Administrative UI for Feeds module.',
          'package' => 'Feeds',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'feeds',
          ),
          'configure' => 'admin/structure/feeds',
          'files' => 
          array (
            0 => 'feeds_ui.test',
          ),
          'version' => '7.x-2.0-beta2',
          'project' => 'feeds',
          'datestamp' => '1456055647',
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'project' => 'feeds',
        'version' => '7.x-2.0-beta2',
      ),
      'feeds_import' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/feeds/feeds_import/feeds_import.module',
        'basename' => 'feeds_import.module',
        'name' => 'feeds_import',
        'info' => 
        array (
          'name' => 'Feeds Import',
          'description' => 'An example of a node importer and a user importer.',
          'core' => '7.x',
          'package' => 'Feeds',
          'dependencies' => 
          array (
            0 => 'ctools',
            1 => 'feeds',
          ),
          'features' => 
          array (
            'ctools' => 
            array (
              0 => 'feeds:feeds_importer_default:1',
            ),
            'features_api' => 
            array (
              0 => 'api:2',
            ),
            'feeds_importer' => 
            array (
              0 => 'node',
              1 => 'user',
            ),
          ),
          'files' => 
          array (
            0 => 'feeds_import.test',
          ),
          'version' => '7.x-2.0-beta2',
          'project' => 'feeds',
          'datestamp' => '1456055647',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'feeds',
        'version' => '7.x-2.0-beta2',
      ),
      'feeds' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/feeds/feeds.module',
        'basename' => 'feeds.module',
        'name' => 'feeds',
        'info' => 
        array (
          'name' => 'Feeds',
          'description' => 'Aggregates RSS/Atom/RDF feeds, imports CSV files and more.',
          'package' => 'Feeds',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'ctools',
            1 => 'job_scheduler',
          ),
          'test_dependencies' => 
          array (
            0 => 'date:date',
            1 => 'entity_translation:entity_translation',
            2 => 'feeds_xpathparser:feeds_xpathparser',
            3 => 'link:link',
            4 => 'i18n:i18n_taxonomy',
          ),
          'files' => 
          array (
            0 => 'includes/FeedsConfigurable.inc',
            1 => 'includes/FeedsImporter.inc',
            2 => 'includes/FeedsSource.inc',
            3 => 'libraries/ParserCSV.inc',
            4 => 'libraries/http_request.inc',
            5 => 'libraries/PuSHSubscriber.inc',
            6 => 'plugins/FeedsCSVParser.inc',
            7 => 'plugins/FeedsFetcher.inc',
            8 => 'plugins/FeedsFileFetcher.inc',
            9 => 'plugins/FeedsHTTPFetcher.inc',
            10 => 'plugins/FeedsNodeProcessor.inc',
            11 => 'plugins/FeedsOPMLParser.inc',
            12 => 'plugins/FeedsParser.inc',
            13 => 'plugins/FeedsPlugin.inc',
            14 => 'plugins/FeedsProcessor.inc',
            15 => 'plugins/FeedsSimplePieParser.inc',
            16 => 'plugins/FeedsSitemapParser.inc',
            17 => 'plugins/FeedsSyndicationParser.inc',
            18 => 'plugins/FeedsTermProcessor.inc',
            19 => 'plugins/FeedsUserProcessor.inc',
            20 => 'tests/feeds.test',
            21 => 'tests/common_syndication_parser.test',
            22 => 'tests/feeds_date_time.test',
            23 => 'tests/feeds_mapper_date.test',
            24 => 'tests/feeds_mapper_date_multiple.test',
            25 => 'tests/feeds_mapper_field.test',
            26 => 'tests/feeds_mapper_file.test',
            27 => 'tests/feeds_mapper_hooks.test',
            28 => 'tests/feeds_mapper_link.test',
            29 => 'tests/feeds_mapper_list.test',
            30 => 'tests/feeds_mapper_multilingual_fields.test',
            31 => 'tests/feeds_mapper_path.test',
            32 => 'tests/feeds_mapper_profile.test',
            33 => 'tests/feeds_mapper_unique.test',
            34 => 'tests/feeds_mapper.test',
            35 => 'tests/feeds_mapper_config.test',
            36 => 'tests/feeds_fetcher_file.test',
            37 => 'tests/feeds_mapper_format_config.test',
            38 => 'tests/feeds_fetcher_http.test',
            39 => 'tests/feeds_i18n.test',
            40 => 'tests/feeds_i18n_node.test',
            41 => 'tests/feeds_i18n_taxonomy.test',
            42 => 'tests/feeds_parser_csv.test',
            43 => 'tests/feeds_parser_sitemap.test',
            44 => 'tests/feeds_parser_syndication.test',
            45 => 'tests/feeds_processor_node.test',
            46 => 'tests/feeds_processor_term.test',
            47 => 'tests/feeds_processor_user.test',
            48 => 'tests/feeds_push.test',
            49 => 'tests/feeds_scheduler.test',
            50 => 'tests/feeds_mapper_link.test',
            51 => 'tests/feeds_mapper_summary.test',
            52 => 'tests/feeds_mapper_taxonomy.test',
            53 => 'tests/http_request.test',
            54 => 'tests/parser_csv.test',
            55 => 'views/feeds_views_handler_argument_importer_id.inc',
            56 => 'views/feeds_views_handler_field_importer_name.inc',
            57 => 'views/feeds_views_handler_field_log_message.inc',
            58 => 'views/feeds_views_handler_field_severity.inc',
            59 => 'views/feeds_views_handler_field_source.inc',
            60 => 'views/feeds_views_handler_filter_severity.inc',
            61 => 'views/feeds_views_plugin_argument_validate_feed_nid.inc',
          ),
          'version' => '7.x-2.0-beta2',
          'project' => 'feeds',
          'datestamp' => '1456055647',
          'php' => '5.2.4',
        ),
        'schema_version' => '7212',
        'project' => 'feeds',
        'version' => '7.x-2.0-beta2',
      ),
      'computed_field' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/computed_field/computed_field.module',
        'basename' => 'computed_field.module',
        'name' => 'computed_field',
        'info' => 
        array (
          'name' => 'Computed Field',
          'description' => 'Defines a field type that allows values to be "computed" via PHP code.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'field',
          ),
          'package' => 'Fields',
          'version' => '7.x-1.1',
          'project' => 'computed_field',
          'datestamp' => '1453389259',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'computed_field',
        'version' => '7.x-1.1',
      ),
      'token' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/token/token.module',
        'basename' => 'token.module',
        'name' => 'token',
        'info' => 
        array (
          'name' => 'Token',
          'description' => 'Provides a user interface for the Token API and some missing core tokens.',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'token.test',
          ),
          'version' => '7.x-1.6',
          'project' => 'token',
          'datestamp' => '1425149060',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7001',
        'project' => 'token',
        'version' => '7.x-1.6',
      ),
      'shib_auth_profile' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/shib_auth/shib_auth_profile/shib_auth_profile.module',
        'basename' => 'shib_auth_profile.module',
        'name' => 'shib_auth_profile',
        'info' => 
        array (
          'name' => 'Shibboleth profile fields',
          'description' => 'Set user profile valus based on Shibboleth values.',
          'package' => 'Shibboleth',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'shib_auth',
          ),
          'version' => '7.x-4.3',
          'project' => 'shib_auth',
          'datestamp' => '1435233895',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'shib_auth',
        'version' => '7.x-4.3',
      ),
      'shib_auth' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/shib_auth/shib_auth.module',
        'basename' => 'shib_auth.module',
        'name' => 'shib_auth',
        'info' => 
        array (
          'name' => 'Shibboleth authentication',
          'description' => 'Shibboleth authentication module.',
          'package' => 'Shibboleth',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'shib_auth_forms.inc',
            1 => 'shib_auth_roles_forms.inc',
          ),
          'configure' => 'admin/config/people/shib_auth',
          'version' => '7.x-4.3',
          'project' => 'shib_auth',
          'datestamp' => '1435233895',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7001',
        'project' => 'shib_auth',
        'version' => '7.x-4.3',
      ),
      'mobile_detect_caching' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/mobile_detect/mobile_detect_caching/mobile_detect_caching.module',
        'basename' => 'mobile_detect_caching.module',
        'name' => 'mobile_detect_caching',
        'info' => 
        array (
          'name' => 'Mobile Detect Caching',
          'description' => 'Cache handling for Mobile Detect (EXPERIMENTAL! USE AT OWN RISK!)',
          'core' => '7.x',
          'package' => 'Mobile Detect',
          'dependencies' => 
          array (
            0 => 'mobile_detect',
          ),
          'version' => '7.x-1.0-alpha1',
          'project' => 'mobile_detect',
          'datestamp' => '1446408241',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'mobile_detect',
        'version' => '7.x-1.0-alpha1',
      ),
      'mobile_detect_ctools' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/mobile_detect/mobile_detect_ctools/mobile_detect_ctools.module',
        'basename' => 'mobile_detect_ctools.module',
        'name' => 'mobile_detect_ctools',
        'info' => 
        array (
          'name' => 'Mobile Detect ctools',
          'description' => 'ctools plugins utilizing the Mobile_Detect library',
          'core' => '7.x',
          'package' => 'Mobile Detect',
          'dependencies' => 
          array (
            0 => 'mobile_detect',
            1 => 'ctools',
          ),
          'version' => '7.x-1.0-alpha1',
          'project' => 'mobile_detect',
          'datestamp' => '1446408241',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'mobile_detect',
        'version' => '7.x-1.0-alpha1',
      ),
      'mobile_detect_variables' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/mobile_detect/mobile_detect_variables/mobile_detect_variables.module',
        'basename' => 'mobile_detect_variables.module',
        'name' => 'mobile_detect_variables',
        'info' => 
        array (
          'name' => 'Mobile Detect Variables',
          'description' => 'Sub-module to provide $is_mobile and $is_tablet to preprocess and templates.',
          'core' => '7.x',
          'package' => 'Mobile Detect',
          'dependencies' => 
          array (
            0 => 'mobile_detect',
          ),
          'version' => '7.x-1.0-alpha1',
          'project' => 'mobile_detect',
          'datestamp' => '1446408241',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'mobile_detect',
        'version' => '7.x-1.0-alpha1',
      ),
      'mobile_detect' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/mobile_detect/mobile_detect.module',
        'basename' => 'mobile_detect.module',
        'name' => 'mobile_detect',
        'info' => 
        array (
          'name' => 'Mobile Detect',
          'description' => 'Lightweight mobile detection based on <a href=\'http://mobiledetect.net/\'>Mobile_Detect.php</a>',
          'core' => '7.x',
          'package' => 'Mobile Detect',
          'files' => 
          array (
            0 => 'mobile_detect.drush.inc',
          ),
          'version' => '7.x-1.0-alpha1',
          'project' => 'mobile_detect',
          'datestamp' => '1446408241',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'mobile_detect',
        'version' => '7.x-1.0-alpha1',
      ),
      'node_menu_required' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/node_menu_required/node_menu_required.module',
        'basename' => 'node_menu_required.module',
        'name' => 'node_menu_required',
        'info' => 
        array (
          'name' => 'Node menu required',
          'description' => 'Allows menu links to be set required per content type.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'menu',
          ),
          'version' => '7.x-1.0',
          'project' => 'node_menu_required',
          'datestamp' => '1328564446',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'node_menu_required',
        'version' => '7.x-1.0',
      ),
      'wysiwyg' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/wysiwyg/wysiwyg.module',
        'basename' => 'wysiwyg.module',
        'name' => 'wysiwyg',
        'info' => 
        array (
          'name' => 'Wysiwyg',
          'description' => 'Allows to edit content with client-side editors.',
          'package' => 'User interface',
          'core' => '7.x',
          'configure' => 'admin/config/content/wysiwyg',
          'files' => 
          array (
            0 => 'wysiwyg.module',
            1 => 'tests/wysiwyg.test',
          ),
          'version' => '7.x-2.2',
          'project' => 'wysiwyg',
          'datestamp' => '1349213776',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7200',
        'project' => 'wysiwyg',
        'version' => '7.x-2.2',
      ),
      'better_exposed_filters' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/better_exposed_filters/better_exposed_filters.module',
        'basename' => 'better_exposed_filters.module',
        'name' => 'better_exposed_filters',
        'info' => 
        array (
          'name' => 'Better Exposed Filters',
          'description' => 'Allow the use of checkboxes or radio buttons for exposed Views filters',
          'core' => '7.x',
          'package' => 'Views',
          'dependencies' => 
          array (
            0 => 'views',
          ),
          'files' => 
          array (
            0 => 'better_exposed_filters_exposed_form_plugin.inc',
            1 => 'tests/better_exposed_filters.test',
          ),
          'version' => '7.x-3.5',
          'project' => 'better_exposed_filters',
          'datestamp' => '1508952850',
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'project' => 'better_exposed_filters',
        'version' => '7.x-3.5',
      ),
      'services_oauth' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/services/auth/services_oauth/services_oauth.module',
        'basename' => 'services_oauth.module',
        'name' => 'services_oauth',
        'info' => 
        array (
          'name' => 'OAuth Authentication',
          'description' => 'Provides OAuth authentication for the services module',
          'package' => 'Services - authentication',
          'dependencies' => 
          array (
            0 => 'services',
            1 => 'oauth_common',
          ),
          'core' => '7.x',
          'php' => '5.2',
          'version' => '7.x-3.12',
          'project' => 'services',
          'datestamp' => '1429118524',
        ),
        'schema_version' => '6200',
        'project' => 'services',
        'version' => '7.x-3.12',
      ),
      'xmlrpc_server' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/services/servers/xmlrpc_server/xmlrpc_server.module',
        'basename' => 'xmlrpc_server.module',
        'name' => 'xmlrpc_server',
        'info' => 
        array (
          'name' => 'XMLRPC Server',
          'description' => 'Provides a XMLRPC server.',
          'package' => 'Services - servers',
          'files' => 
          array (
            0 => 'xmlrpc_server.module',
          ),
          'dependencies' => 
          array (
            0 => 'services',
          ),
          'core' => '7.x',
          'version' => '7.x-3.12',
          'project' => 'services',
          'datestamp' => '1429118524',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'services',
        'version' => '7.x-3.12',
      ),
      'rest_server' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/services/servers/rest_server/rest_server.module',
        'basename' => 'rest_server.module',
        'name' => 'rest_server',
        'info' => 
        array (
          'name' => 'REST Server',
          'description' => 'Provides an REST server.',
          'package' => 'Services - servers',
          'files' => 
          array (
            0 => 'rest_server.module',
            1 => 'includes/RESTServer.inc',
            2 => 'includes/ServicesContentTypeNegotiator.inc',
            3 => 'includes/ServicesRESTServerFactory.inc',
            4 => 'includes/ServicesContext.inc',
            5 => 'includes/ServicesParser.inc',
            6 => 'includes/ServicesFormatter.inc',
            7 => 'tests/ServicesRESTServerTests.test',
            8 => 'tests/rest_server_mock_classes.inc',
            9 => 'lib/bencode.php',
            10 => 'lib/mimeparse.php',
          ),
          'dependencies' => 
          array (
            0 => 'services',
            1 => 'libraries (>=2.x)',
          ),
          'core' => '7.x',
          'version' => '7.x-3.12',
          'project' => 'services',
          'datestamp' => '1429118524',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'services',
        'version' => '7.x-3.12',
      ),
      'services' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/services/services.module',
        'basename' => 'services.module',
        'name' => 'services',
        'info' => 
        array (
          'name' => 'Services',
          'description' => 'Provide an API for creating web services.',
          'package' => 'Services',
          'core' => '7.x',
          'php' => '5.x',
          'configure' => 'admin/structure/services',
          'files' => 
          array (
            0 => 'includes/services.runtime.inc',
            1 => 'tests/functional/NoAuthEndpointTestRunner.test',
            2 => 'tests/functional/ServicesResourceNodeTests.test',
            3 => 'tests/functional/ServicesResourceUserTests.test',
            4 => 'tests/functional/ServicesResourceSystemTests.test',
            5 => 'tests/functional/ServicesResourceCommentTests.test',
            6 => 'tests/functional/ServicesResourceTaxonomyTests.test',
            7 => 'tests/functional/ServicesResourceFileTests.test',
            8 => 'tests/functional/ServicesResourceDisabledTests.test',
            9 => 'tests/functional/ServicesEndpointTests.test',
            10 => 'tests/functional/ServicesParserTests.test',
            11 => 'tests/functional/ServicesAliasTests.test',
            12 => 'tests/functional/ServicesXMLRPCTests.test',
            13 => 'tests/functional/ServicesVersionTests.test',
            14 => 'tests/functional/ServicesArgumentsTests.test',
            15 => 'tests/functional/ServicesSecurityTests.test',
            16 => 'tests/unit/ServicesSpycLibraryTests.test',
            17 => 'tests/ui/ServicesUITests.test',
            18 => 'tests/services.test',
          ),
          'dependencies' => 
          array (
            0 => 'ctools',
          ),
          'version' => '7.x-3.12',
          'project' => 'services',
          'datestamp' => '1429118524',
        ),
        'schema_version' => '7402',
        'project' => 'services',
        'version' => '7.x-3.12',
      ),
      'og_role_watchdog' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/role_watchdog/modules/og_role_watchdog/og_role_watchdog.module',
        'basename' => 'og_role_watchdog.module',
        'name' => 'og_role_watchdog',
        'info' => 
        array (
          'name' => 'OG Role watchdog',
          'description' => 'Logs changes to user roles made in Organic Groups.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'role_watchdog',
            1 => 'og',
          ),
          'files' => 
          array (
            0 => 'og_role_watchdog.install',
            1 => 'og_role_watchdog.module',
            2 => 'og_role_watchdog.pages.inc',
          ),
          'version' => '7.x-2.0-beta2',
          'project' => 'role_watchdog',
          'datestamp' => '1349227567',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'role_watchdog',
        'version' => '7.x-2.0-beta2',
      ),
      'role_watchdog' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/role_watchdog/role_watchdog.module',
        'basename' => 'role_watchdog.module',
        'name' => 'role_watchdog',
        'info' => 
        array (
          'name' => 'Role watchdog',
          'description' => 'Logs changes to user roles.',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'role_watchdog.admin.inc',
            1 => 'role_watchdog.install',
            2 => 'role_watchdog.module',
            3 => 'role_watchdog.pages.inc',
          ),
          'version' => '7.x-2.0-beta2',
          'project' => 'role_watchdog',
          'datestamp' => '1349227567',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7101',
        'project' => 'role_watchdog',
        'version' => '7.x-2.0-beta2',
      ),
      'job_scheduler_trigger' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/job_scheduler/modules/job_scheduler_trigger/job_scheduler_trigger.module',
        'basename' => 'job_scheduler_trigger.module',
        'name' => 'job_scheduler_trigger',
        'info' => 
        array (
          'name' => 'Job Scheduler Trigger',
          'description' => 'Creates scheduler triggers that fire up at certain days, times',
          'core' => '7.x',
          'php' => '5.2',
          'dependencies' => 
          array (
            0 => 'job_scheduler',
          ),
          'version' => '7.x-2.0-alpha3',
          'project' => 'job_scheduler',
          'datestamp' => '1336466457',
        ),
        'schema_version' => 0,
        'project' => 'job_scheduler',
        'version' => '7.x-2.0-alpha3',
      ),
      'job_scheduler' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/job_scheduler/job_scheduler.module',
        'basename' => 'job_scheduler.module',
        'name' => 'job_scheduler',
        'info' => 
        array (
          'name' => 'Job Scheduler',
          'description' => 'Scheduler API',
          'files' => 
          array (
            0 => 'job_scheduler.module',
            1 => 'job_scheduler.install',
            2 => 'JobScheduler.inc',
            3 => 'JobSchedulerCronTab.inc',
          ),
          'core' => '7.x',
          'php' => '5.2',
          'version' => '7.x-2.0-alpha3',
          'project' => 'job_scheduler',
          'datestamp' => '1336466457',
          'dependencies' => 
          array (
          ),
        ),
        'schema_version' => '7101',
        'project' => 'job_scheduler',
        'version' => '7.x-2.0-alpha3',
      ),
      'themekey_css' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/themekey/themekey_css/themekey_css.module',
        'basename' => 'themekey_css.module',
        'name' => 'themekey_css',
        'info' => 
        array (
          'name' => 'ThemeKey CSS (Experimental)',
          'description' => 'Define rules to dynamically add CSS files to a page. Experimental!',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'themekey',
          ),
          'package' => 'ThemeKey',
          'configure' => 'admin/config/user-interface/themekey/css',
          'version' => '7.x-3.2',
          'project' => 'themekey',
          'datestamp' => '1400056438',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'themekey',
        'version' => '7.x-3.2',
      ),
      'themekey_example' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/themekey/themekey_example/themekey_example.module',
        'basename' => 'themekey_example.module',
        'name' => 'themekey_example',
        'info' => 
        array (
          'name' => 'ThemeKey Example',
          'description' => 'Implements parts of the ThemeKey API as an example for Developers.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'themekey',
          ),
          'package' => 'Example modules',
          'version' => '7.x-3.2',
          'project' => 'themekey',
          'datestamp' => '1400056438',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'themekey',
        'version' => '7.x-3.2',
      ),
      'themekey_simpletest' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/themekey/tests/themekey_simpletest.module',
        'basename' => 'themekey_simpletest.module',
        'name' => 'themekey_simpletest',
        'info' => 
        array (
          'name' => 'ThemeKey Testing',
          'description' => 'Just a fake module for testing ThemeKey\'s module plugins',
          'core' => '7.x',
          'package' => 'Development',
          'version' => '7.x-3.2',
          'project' => 'themekey',
          'datestamp' => '1400056438',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'themekey',
        'version' => '7.x-3.2',
      ),
      'themekey_redirect' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/themekey/themekey_redirect/themekey_redirect.module',
        'basename' => 'themekey_redirect.module',
        'name' => 'themekey_redirect',
        'info' => 
        array (
          'name' => 'ThemeKey Redirect',
          'description' => 'Provides an additional rule chain to define rules to redirect the user.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'themekey',
          ),
          'package' => 'ThemeKey',
          'configure' => 'admin/config/user-interface/themekey/redirects',
          'version' => '7.x-3.2',
          'project' => 'themekey',
          'datestamp' => '1400056438',
          'php' => '5.2.4',
        ),
        'schema_version' => '7300',
        'project' => 'themekey',
        'version' => '7.x-3.2',
      ),
      'themekey' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/themekey/themekey.module',
        'basename' => 'themekey.module',
        'name' => 'themekey',
        'info' => 
        array (
          'name' => 'ThemeKey',
          'description' => 'Map themes to Drupal paths or object properties.',
          'core' => '7.x',
          'package' => 'ThemeKey',
          'configure' => 'admin/config/user-interface/themekey/settings',
          'dependencies' => 
          array (
            0 => 'system (>=7.22)',
          ),
          'files' => 
          array (
            0 => 'ThemeKeyEntityFieldQuery.php',
            1 => 'modules/themekey_browser_detection.php',
            2 => 'tests/themekey.test',
            3 => 'tests/ThemekeyDrupalPropertiesTestCase.test',
            4 => 'tests/ThemekeyModulePluginsTestCase.test',
            5 => 'tests/ThemekeyNodePropertiesTestCase.test',
            6 => 'tests/ThemekeyRuleChainTestCase.test',
            7 => 'tests/ThemekeySystemPropertiesTestCase.test',
            8 => 'tests/ThemekeyUITestCase.test',
          ),
          'version' => '7.x-3.2',
          'project' => 'themekey',
          'datestamp' => '1400056438',
          'php' => '5.2.4',
        ),
        'schema_version' => '7301',
        'project' => 'themekey',
        'version' => '7.x-3.2',
      ),
      'themekey_ui' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/themekey/themekey_ui.module',
        'basename' => 'themekey_ui.module',
        'name' => 'themekey_ui',
        'info' => 
        array (
          'name' => 'ThemeKey UI',
          'description' => 'Integrates ThemeKey with Drupal administration forms.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'themekey',
          ),
          'package' => 'ThemeKey',
          'configure' => 'admin/config/user-interface/themekey/settings/ui',
          'version' => '7.x-3.2',
          'project' => 'themekey',
          'datestamp' => '1400056438',
          'php' => '5.2.4',
        ),
        'schema_version' => '7301',
        'project' => 'themekey',
        'version' => '7.x-3.2',
      ),
      'themekey_debug' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/themekey/themekey_debug.module',
        'basename' => 'themekey_debug.module',
        'name' => 'themekey_debug',
        'info' => 
        array (
          'name' => 'ThemeKey Debug',
          'description' => 'Debug ThemeKey, see which rules are applied and the current values of all properties.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'themekey',
          ),
          'package' => 'ThemeKey',
          'configure' => 'admin/config/user-interface/themekey/settings/debug',
          'version' => '7.x-3.2',
          'project' => 'themekey',
          'datestamp' => '1400056438',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'themekey',
        'version' => '7.x-3.2',
      ),
      'themekey_user_profile' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/themekey/themekey_user_profile.module',
        'basename' => 'themekey_user_profile.module',
        'name' => 'themekey_user_profile',
        'info' => 
        array (
          'name' => 'ThemeKey User Profile',
          'description' => 'Allows users to select their own theme for this site. Replaces the corresponding feature that existed in Drupal 6 Core.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'themekey',
            1 => 'themekey_ui',
          ),
          'package' => 'ThemeKey',
          'configure' => 'admin/config/user-interface/themekey/settings/ui',
          'version' => '7.x-3.2',
          'project' => 'themekey',
          'datestamp' => '1400056438',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'themekey',
        'version' => '7.x-3.2',
      ),
      'themekey_features' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/themekey/themekey_features.module',
        'basename' => 'themekey_features.module',
        'name' => 'themekey_features',
        'info' => 
        array (
          'name' => 'ThemeKey Features (Experimental!)',
          'description' => 'Integrates ThemeKey with Features. Warning! Don\'t use in production! Highly Experimental!',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'themekey',
            1 => 'features',
          ),
          'package' => 'ThemeKey',
          'version' => '7.x-3.2',
          'project' => 'themekey',
          'datestamp' => '1400056438',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'themekey',
        'version' => '7.x-3.2',
      ),
      'themekey_compat' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/themekey/themekey_compat.module',
        'basename' => 'themekey_compat.module',
        'name' => 'themekey_compat',
        'info' => 
        array (
          'name' => 'ThemeKey Compatibility',
          'description' => 'Optionally disable the theme switching capability of core and additional modules. Their theme switching capabilities will become part of ThemeKey\'s theme switching rule chain instead and therefor configurable.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'themekey',
          ),
          'package' => 'ThemeKey',
          'configure' => 'admin/config/user-interface/themekey/settings/compat',
          'version' => '7.x-3.2',
          'project' => 'themekey',
          'datestamp' => '1400056438',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'themekey',
        'version' => '7.x-3.2',
      ),
      'fitvids' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/fitvids/fitvids.module',
        'basename' => 'fitvids.module',
        'name' => 'fitvids',
        'info' => 
        array (
          'name' => 'FitVids',
          'description' => 'jQuery plugin for fluid width video embeds.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'libraries',
          ),
          'configure' => 'admin/config/media/fitvids',
          'scripts' => 
          array (
            0 => 'fitvids.js',
          ),
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'fitvids.css',
            ),
          ),
          'version' => '7.x-1.17',
          'project' => 'fitvids',
          'datestamp' => '1417817582',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'fitvids',
        'version' => '7.x-1.17',
      ),
      'feeds_tamper_ui' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/feeds_tamper/feeds_tamper_ui/feeds_tamper_ui.module',
        'basename' => 'feeds_tamper_ui.module',
        'name' => 'feeds_tamper_ui',
        'info' => 
        array (
          'name' => 'Feeds Tamper Admin UI',
          'description' => 'Administrative UI for Feeds Tamper module.',
          'package' => 'Feeds',
          'dependencies' => 
          array (
            0 => 'feeds_tamper',
            1 => 'feeds_ui',
          ),
          'files' => 
          array (
            0 => 'tests/feeds_tamper_ui.test',
          ),
          'core' => '7.x',
          'version' => '7.x-1.1',
          'project' => 'feeds_tamper',
          'datestamp' => '1433291282',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'feeds_tamper',
        'version' => '7.x-1.1',
      ),
      'feeds_tamper' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/feeds_tamper/feeds_tamper.module',
        'basename' => 'feeds_tamper.module',
        'name' => 'feeds_tamper',
        'info' => 
        array (
          'name' => 'Feeds Tamper',
          'description' => 'Modify feeds data before it gets saved.',
          'package' => 'Feeds',
          'dependencies' => 
          array (
            0 => 'feeds',
          ),
          'files' => 
          array (
            0 => 'tests/feeds_tamper.test',
            1 => 'tests/feeds_tamper_plugins.test',
            2 => 'tests/feeds_tamper_efq_finder.test',
          ),
          'core' => '7.x',
          'version' => '7.x-1.1',
          'project' => 'feeds_tamper',
          'datestamp' => '1433291282',
          'php' => '5.2.4',
        ),
        'schema_version' => '7004',
        'project' => 'feeds_tamper',
        'version' => '7.x-1.1',
      ),
      'vppr' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/vppr/vppr.module',
        'basename' => 'vppr.module',
        'name' => 'vppr',
        'info' => 
        array (
          'name' => 'Vocabulary Permissions Per Role',
          'description' => 'Allow adding to/editing terms of/removing terms from vocabularies per role.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'taxonomy',
          ),
          'version' => '7.x-1.0',
          'project' => 'vppr',
          'datestamp' => '1349514718',
          'php' => '5.2.4',
        ),
        'schema_version' => '7000',
        'project' => 'vppr',
        'version' => '7.x-1.0',
      ),
      'multiple_selects' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/multiple_selects/multiple_selects.module',
        'basename' => 'multiple_selects.module',
        'name' => 'multiple_selects',
        'info' => 
        array (
          'name' => 'Multiple Selects',
          'description' => 'Adding a possibility to use multiple select fields rather than a multiselect field.',
          'package' => 'Fields',
          'dependency' => 
          array (
            0 => 'options',
          ),
          'core' => '7.x',
          'version' => '7.x-1.2',
          'project' => 'multiple_selects',
          'datestamp' => '1338214868',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'multiple_selects',
        'version' => '7.x-1.2',
      ),
      'addressfield' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/addressfield/addressfield.module',
        'basename' => 'addressfield.module',
        'name' => 'addressfield',
        'info' => 
        array (
          'name' => 'Address Field',
          'description' => 'Manage a flexible address field, implementing the xNAL standard.',
          'core' => '7.x',
          'package' => 'Fields',
          'dependencies' => 
          array (
            0 => 'ctools',
          ),
          'files' => 
          array (
            0 => 'addressfield.migrate.inc',
            1 => 'views/addressfield_views_handler_field_administrative_area.inc',
            2 => 'views/addressfield_views_handler_field_country.inc',
            3 => 'views/addressfield_views_handler_filter_country.inc',
          ),
          'version' => '7.x-1.2',
          'project' => 'addressfield',
          'datestamp' => '1444254070',
          'php' => '5.2.4',
        ),
        'schema_version' => '7001',
        'project' => 'addressfield',
        'version' => '7.x-1.2',
      ),
      'libraries' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/libraries/libraries.module',
        'basename' => 'libraries.module',
        'name' => 'libraries',
        'info' => 
        array (
          'name' => 'Libraries',
          'description' => 'Allows version-dependent and shared usage of external libraries.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'system (>=7.11)',
          ),
          'files' => 
          array (
            0 => 'tests/LibrariesAdminWebTest.test',
            1 => 'tests/LibrariesLoadWebTest.test',
            2 => 'tests/LibrariesUnitTest.test',
            3 => 'tests/LibrariesWebTestBase.test',
          ),
          'version' => '7.x-2.3',
          'project' => 'libraries',
          'datestamp' => '1463077450',
          'php' => '5.2.4',
        ),
        'schema_version' => '7201',
        'project' => 'libraries',
        'version' => '7.x-2.3',
      ),
      'search_api_db' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/search_api_db/search_api_db.module',
        'basename' => 'search_api_db.module',
        'name' => 'search_api_db',
        'info' => 
        array (
          'name' => 'Database search',
          'description' => 'Offers an implementation of the Search API that uses database tables for indexing content.',
          'dependencies' => 
          array (
            0 => 'search_api',
          ),
          'core' => '7.x',
          'package' => 'Search',
          'files' => 
          array (
            0 => 'search_api_db.test',
            1 => 'service.inc',
          ),
          'version' => '7.x-1.4',
          'project' => 'search_api_db',
          'datestamp' => '1410186261',
          'php' => '5.2.4',
        ),
        'schema_version' => '7106',
        'project' => 'search_api_db',
        'version' => '7.x-1.4',
      ),
      'xmlsitemap_menu' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/xmlsitemap/xmlsitemap_menu/xmlsitemap_menu.module',
        'basename' => 'xmlsitemap_menu.module',
        'name' => 'xmlsitemap_menu',
        'info' => 
        array (
          'name' => 'XML sitemap menu',
          'description' => 'Adds menu item links to the sitemap.',
          'package' => 'XML sitemap',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'xmlsitemap',
            1 => 'menu',
          ),
          'files' => 
          array (
            0 => 'xmlsitemap_menu.module',
            1 => 'xmlsitemap_menu.install',
            2 => 'xmlsitemap_menu.test',
          ),
          'version' => '7.x-2.4',
          'project' => 'xmlsitemap',
          'datestamp' => '1531917526',
          'php' => '5.2.4',
        ),
        'schema_version' => '6201',
        'project' => 'xmlsitemap',
        'version' => '7.x-2.4',
      ),
      'xmlsitemap_taxonomy' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/xmlsitemap/xmlsitemap_taxonomy/xmlsitemap_taxonomy.module',
        'basename' => 'xmlsitemap_taxonomy.module',
        'name' => 'xmlsitemap_taxonomy',
        'info' => 
        array (
          'name' => 'XML sitemap taxonomy',
          'description' => 'Add taxonomy term links to the sitemap.',
          'package' => 'XML sitemap',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'xmlsitemap',
            1 => 'taxonomy',
          ),
          'files' => 
          array (
            0 => 'xmlsitemap_taxonomy.module',
            1 => 'xmlsitemap_taxonomy.install',
            2 => 'xmlsitemap_taxonomy.test',
          ),
          'version' => '7.x-2.4',
          'project' => 'xmlsitemap',
          'datestamp' => '1531917526',
          'php' => '5.2.4',
        ),
        'schema_version' => '7200',
        'project' => 'xmlsitemap',
        'version' => '7.x-2.4',
      ),
      'xmlsitemap_engines' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/xmlsitemap/xmlsitemap_engines/xmlsitemap_engines.module',
        'basename' => 'xmlsitemap_engines.module',
        'name' => 'xmlsitemap_engines',
        'info' => 
        array (
          'name' => 'XML sitemap engines',
          'description' => 'Submit the sitemap to search engines.',
          'package' => 'XML sitemap',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'xmlsitemap',
          ),
          'files' => 
          array (
            0 => 'xmlsitemap_engines.module',
            1 => 'xmlsitemap_engines.admin.inc',
            2 => 'xmlsitemap_engines.install',
            3 => 'tests/xmlsitemap_engines.test',
          ),
          'recommends' => 
          array (
            0 => 'site_verify',
          ),
          'configure' => 'admin/config/search/xmlsitemap/engines',
          'version' => '7.x-2.4',
          'project' => 'xmlsitemap',
          'datestamp' => '1531917526',
          'php' => '5.2.4',
        ),
        'schema_version' => '6202',
        'project' => 'xmlsitemap',
        'version' => '7.x-2.4',
      ),
      'xmlsitemap_user' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/xmlsitemap/xmlsitemap_user/xmlsitemap_user.module',
        'basename' => 'xmlsitemap_user.module',
        'name' => 'xmlsitemap_user',
        'info' => 
        array (
          'name' => 'XML sitemap user',
          'description' => 'Adds user profile links to the sitemap.',
          'package' => 'XML sitemap',
          'dependencies' => 
          array (
            0 => 'xmlsitemap',
          ),
          'core' => '7.x',
          'files' => 
          array (
            0 => 'xmlsitemap_user.module',
            1 => 'xmlsitemap_user.install',
            2 => 'xmlsitemap_user.test',
          ),
          'version' => '7.x-2.4',
          'project' => 'xmlsitemap',
          'datestamp' => '1531917526',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'xmlsitemap',
        'version' => '7.x-2.4',
      ),
      'xmlsitemap_i18n' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/xmlsitemap/xmlsitemap_i18n/xmlsitemap_i18n.module',
        'basename' => 'xmlsitemap_i18n.module',
        'name' => 'xmlsitemap_i18n',
        'info' => 
        array (
          'name' => 'XML sitemap internationalization',
          'description' => 'Enables multilingual XML sitemaps.',
          'package' => 'XML sitemap',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'xmlsitemap',
            1 => 'i18n',
          ),
          'files' => 
          array (
            0 => 'xmlsitemap_i18n.module',
            1 => 'xmlsitemap_i18n.test',
          ),
          'version' => '7.x-2.4',
          'project' => 'xmlsitemap',
          'datestamp' => '1531917526',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'xmlsitemap',
        'version' => '7.x-2.4',
      ),
      'xmlsitemap_node' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/xmlsitemap/xmlsitemap_node/xmlsitemap_node.module',
        'basename' => 'xmlsitemap_node.module',
        'name' => 'xmlsitemap_node',
        'info' => 
        array (
          'name' => 'XML sitemap node',
          'description' => 'Adds content links to the sitemap.',
          'package' => 'XML sitemap',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'xmlsitemap',
          ),
          'files' => 
          array (
            0 => 'xmlsitemap_node.module',
            1 => 'xmlsitemap_node.install',
            2 => 'xmlsitemap_node.test',
          ),
          'version' => '7.x-2.4',
          'project' => 'xmlsitemap',
          'datestamp' => '1531917526',
          'php' => '5.2.4',
        ),
        'schema_version' => '6201',
        'project' => 'xmlsitemap',
        'version' => '7.x-2.4',
      ),
      'xmlsitemap_custom' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/xmlsitemap/xmlsitemap_custom/xmlsitemap_custom.module',
        'basename' => 'xmlsitemap_custom.module',
        'name' => 'xmlsitemap_custom',
        'info' => 
        array (
          'name' => 'XML sitemap custom',
          'description' => 'Adds user configurable links to the sitemap.',
          'package' => 'XML sitemap',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'xmlsitemap',
          ),
          'files' => 
          array (
            0 => 'xmlsitemap_custom.module',
            1 => 'xmlsitemap_custom.admin.inc',
            2 => 'xmlsitemap_custom.install',
            3 => 'xmlsitemap_custom.test',
          ),
          'configure' => 'admin/config/search/xmlsitemap/custom',
          'version' => '7.x-2.4',
          'project' => 'xmlsitemap',
          'datestamp' => '1531917526',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'xmlsitemap',
        'version' => '7.x-2.4',
      ),
      'xmlsitemap' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/xmlsitemap/xmlsitemap.module',
        'basename' => 'xmlsitemap.module',
        'name' => 'xmlsitemap',
        'info' => 
        array (
          'name' => 'XML sitemap',
          'description' => 'Creates an XML sitemap conforming to the <a href="http://sitemaps.org/">sitemaps.org protocol</a>.',
          'package' => 'XML sitemap',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'xmlsitemap.module',
            1 => 'xmlsitemap.inc',
            2 => 'xmlsitemap.admin.inc',
            3 => 'xmlsitemap.drush.inc',
            4 => 'xmlsitemap.generate.inc',
            5 => 'xmlsitemap.xmlsitemap.inc',
            6 => 'xmlsitemap.pages.inc',
            7 => 'xmlsitemap.install',
            8 => 'xmlsitemap.test',
          ),
          'recommends' => 
          array (
            0 => 'robotstxt',
          ),
          'configure' => 'admin/config/search/xmlsitemap',
          'version' => '7.x-2.4',
          'project' => 'xmlsitemap',
          'datestamp' => '1531917526',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7203',
        'project' => 'xmlsitemap',
        'version' => '7.x-2.4',
      ),
      'strongarm' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/strongarm/strongarm.module',
        'basename' => 'strongarm.module',
        'name' => 'strongarm',
        'info' => 
        array (
          'name' => 'Strongarm',
          'description' => 'Enforces variable values defined by modules that need settings set to operate properly.',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'ctools',
          ),
          'files' => 
          array (
            0 => 'strongarm.admin.inc',
            1 => 'strongarm.install',
            2 => 'strongarm.module',
          ),
          'version' => '7.x-2.0',
          'project' => 'strongarm',
          'datestamp' => '1339604214',
          'php' => '5.2.4',
        ),
        'schema_version' => '7201',
        'project' => 'strongarm',
        'version' => '7.x-2.0',
      ),
      'ape' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/ape/ape.module',
        'basename' => 'ape.module',
        'name' => 'ape',
        'info' => 
        array (
          'name' => 'Advanced Page Expiration',
          'description' => 'Allows finer control of the Cache Control header.',
          'package' => 'Performance and scalability',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'ape.test',
          ),
          'configure' => 'admin/config/development/ape',
          'version' => '7.x-1.2',
          'project' => 'ape',
          'datestamp' => '1476294519',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'ape',
        'version' => '7.x-1.2',
      ),
      'entity_token' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/entity/entity_token.module',
        'basename' => 'entity_token.module',
        'name' => 'entity_token',
        'info' => 
        array (
          'name' => 'Entity tokens',
          'description' => 'Provides token replacements for all properties that have no tokens and are known to the entity API.',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'entity_token.tokens.inc',
            1 => 'entity_token.module',
          ),
          'dependencies' => 
          array (
            0 => 'entity',
          ),
          'version' => '7.x-1.9',
          'project' => 'entity',
          'datestamp' => '1518620551',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'entity',
        'version' => '7.x-1.9',
      ),
      'entity' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/entity/entity.module',
        'basename' => 'entity.module',
        'name' => 'entity',
        'info' => 
        array (
          'name' => 'Entity API',
          'description' => 'Enables modules to work with any entity type and to provide entities.',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'entity.features.inc',
            1 => 'entity.i18n.inc',
            2 => 'entity.info.inc',
            3 => 'entity.rules.inc',
            4 => 'entity.test',
            5 => 'includes/entity.inc',
            6 => 'includes/entity.controller.inc',
            7 => 'includes/entity.ui.inc',
            8 => 'includes/entity.wrapper.inc',
            9 => 'views/entity.views.inc',
            10 => 'views/handlers/entity_views_field_handler_helper.inc',
            11 => 'views/handlers/entity_views_handler_area_entity.inc',
            12 => 'views/handlers/entity_views_handler_field_boolean.inc',
            13 => 'views/handlers/entity_views_handler_field_date.inc',
            14 => 'views/handlers/entity_views_handler_field_duration.inc',
            15 => 'views/handlers/entity_views_handler_field_entity.inc',
            16 => 'views/handlers/entity_views_handler_field_field.inc',
            17 => 'views/handlers/entity_views_handler_field_numeric.inc',
            18 => 'views/handlers/entity_views_handler_field_options.inc',
            19 => 'views/handlers/entity_views_handler_field_text.inc',
            20 => 'views/handlers/entity_views_handler_field_uri.inc',
            21 => 'views/handlers/entity_views_handler_relationship_by_bundle.inc',
            22 => 'views/handlers/entity_views_handler_relationship.inc',
            23 => 'views/plugins/entity_views_plugin_row_entity_view.inc',
          ),
          'version' => '7.x-1.9',
          'project' => 'entity',
          'datestamp' => '1518620551',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7003',
        'project' => 'entity',
        'version' => '7.x-1.9',
      ),
      'context_og' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/context_og/context_og.module',
        'basename' => 'context_og.module',
        'name' => 'context_og',
        'info' => 
        array (
          'name' => 'Context OG',
          'description' => 'Provides Organic Groups conditions and reactions for the Context module.',
          'package' => 'Context',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'og',
            1 => 'og_context',
            2 => 'ctools',
            3 => 'context',
          ),
          'version' => '7.x-2.1',
          'project' => 'context_og',
          'datestamp' => '1355739999',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'context_og',
        'version' => '7.x-2.1',
      ),
      'metatag_mobile' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/metatag/metatag_mobile/metatag_mobile.module',
        'basename' => 'metatag_mobile.module',
        'name' => 'metatag_mobile',
        'info' => 
        array (
          'name' => 'Metatag: Mobile & UI Adjustments',
          'description' => 'Provides support for meta tags used to control the mobile browser experience.',
          'package' => 'SEO',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'metatag:metatag',
          ),
          'files' => 
          array (
            0 => 'tests/metatag_mobile.test',
            1 => 'tests/metatag_mobile.tags.test',
          ),
          'version' => '7.x-1.25',
          'project' => 'metatag',
          'datestamp' => '1522849089',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'metatag',
        'version' => '7.x-1.25',
      ),
      'metatag_twitter_cards' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/metatag/metatag_twitter_cards/metatag_twitter_cards.module',
        'basename' => 'metatag_twitter_cards.module',
        'name' => 'metatag_twitter_cards',
        'info' => 
        array (
          'name' => 'Metatag: Twitter Cards',
          'description' => 'Provides support for Twitter\'s Card meta tags.',
          'package' => 'SEO',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'metatag:metatag',
          ),
          'files' => 
          array (
            0 => 'tests/metatag_twitter_cards.test',
            1 => 'tests/metatag_twitter_cards.tags.test',
          ),
          'version' => '7.x-1.25',
          'project' => 'metatag',
          'datestamp' => '1522849089',
          'php' => '5.2.4',
        ),
        'schema_version' => '7102',
        'project' => 'metatag',
        'version' => '7.x-1.25',
      ),
      'metatag_favicons' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/metatag/metatag_favicons/metatag_favicons.module',
        'basename' => 'metatag_favicons.module',
        'name' => 'metatag_favicons',
        'info' => 
        array (
          'name' => 'Metatag: favicons',
          'description' => 'Provides support for many different favicons.',
          'package' => 'SEO',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'metatag:metatag',
          ),
          'files' => 
          array (
            0 => 'metatag_favicons.mask-icon.class.inc',
            1 => 'tests/metatag_favicons.test',
            2 => 'tests/metatag_favicons.tags.test',
          ),
          'version' => '7.x-1.25',
          'project' => 'metatag',
          'datestamp' => '1522849089',
          'php' => '5.2.4',
        ),
        'schema_version' => '7100',
        'project' => 'metatag',
        'version' => '7.x-1.25',
      ),
      'metatag_devel' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/metatag/metatag_devel/metatag_devel.module',
        'basename' => 'metatag_devel.module',
        'name' => 'metatag_devel',
        'info' => 
        array (
          'name' => 'Metatag: Devel',
          'description' => 'Provides development / debugging functionality for the Metatag module. Integrates with Devel Generate.',
          'package' => 'Development',
          'core' => '7.x',
          'tags' => 
          array (
            0 => 'developer',
          ),
          'dependencies' => 
          array (
            0 => 'metatag:metatag',
          ),
          'files' => 
          array (
            0 => 'tests/metatag_devel.test',
          ),
          'version' => '7.x-1.25',
          'project' => 'metatag',
          'datestamp' => '1522849089',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'metatag',
        'version' => '7.x-1.25',
      ),
      'metatag_google_cse' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/metatag/metatag_google_cse/metatag_google_cse.module',
        'basename' => 'metatag_google_cse.module',
        'name' => 'metatag_google_cse',
        'info' => 
        array (
          'name' => 'Metatag: Google Custom Search Engine (CSE)',
          'description' => 'Provides support for meta tags used for Google Custom Search Engine.',
          'package' => 'SEO',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'metatag:metatag',
          ),
          'files' => 
          array (
            0 => 'tests/metatag_google_cse.test',
            1 => 'tests/metatag_google_cse.tags.test',
          ),
          'version' => '7.x-1.25',
          'project' => 'metatag',
          'datestamp' => '1522849089',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'metatag',
        'version' => '7.x-1.25',
      ),
      'metatag_facebook' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/metatag/metatag_facebook/metatag_facebook.module',
        'basename' => 'metatag_facebook.module',
        'name' => 'metatag_facebook',
        'info' => 
        array (
          'name' => 'Metatag: Facebook',
          'description' => 'Provides support for Facebook\'s custom meta tags.',
          'package' => 'SEO',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'metatag:metatag',
          ),
          'files' => 
          array (
            0 => 'tests/metatag_facebook.test',
            1 => 'tests/metatag_facebook.tags.test',
          ),
          'version' => '7.x-1.25',
          'project' => 'metatag',
          'datestamp' => '1522849089',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'metatag',
        'version' => '7.x-1.25',
      ),
      'metatag_hreflang' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/metatag/metatag_hreflang/metatag_hreflang.module',
        'basename' => 'metatag_hreflang.module',
        'name' => 'metatag_hreflang',
        'info' => 
        array (
          'name' => 'Metatag: hreflang',
          'description' => 'Provides support for the hreflang meta tag with some extra logic to simplify it.',
          'package' => 'SEO',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'metatag:metatag',
            1 => 'drupal:locale',
          ),
          'files' => 
          array (
            0 => 'tests/metatag_hreflang.test',
            1 => 'tests/metatag_hreflang.tags.test',
            2 => 'tests/metatag_hreflang.with_entity_translation.test',
          ),
          'test_dependencies' => 
          array (
            0 => 'devel:devel',
            1 => 'entity_translation:entity_translation',
          ),
          'version' => '7.x-1.25',
          'project' => 'metatag',
          'datestamp' => '1522849089',
          'php' => '5.2.4',
        ),
        'schema_version' => '7103',
        'project' => 'metatag',
        'version' => '7.x-1.25',
      ),
      'metatag_opengraph_products' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/metatag/metatag_opengraph_products/metatag_opengraph_products.module',
        'basename' => 'metatag_opengraph_products.module',
        'name' => 'metatag_opengraph_products',
        'info' => 
        array (
          'name' => 'Metatag: OpenGraph Products',
          'description' => 'Provides additional Open Graph Protocol meta tags for describing products.',
          'package' => 'SEO',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'metatag:metatag',
            1 => 'metatag:metatag_opengraph',
          ),
          'files' => 
          array (
            0 => 'tests/metatag_opengraph_products.test',
            1 => 'tests/metatag_opengraph_products.tags.test',
          ),
          'version' => '7.x-1.25',
          'project' => 'metatag',
          'datestamp' => '1522849089',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'metatag',
        'version' => '7.x-1.25',
      ),
      'metatag_verification' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/metatag/metatag_verification/metatag_verification.module',
        'basename' => 'metatag_verification.module',
        'name' => 'metatag_verification',
        'info' => 
        array (
          'name' => 'Metatag: Verification',
          'description' => 'Various meta tags for verifying ownership of a site.',
          'package' => 'SEO',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'metatag:metatag',
          ),
          'files' => 
          array (
            0 => 'tests/metatag_verification.test',
            1 => 'tests/metatag_verification.tags.test',
          ),
          'version' => '7.x-1.25',
          'project' => 'metatag',
          'datestamp' => '1522849089',
          'php' => '5.2.4',
        ),
        'schema_version' => '7101',
        'project' => 'metatag',
        'version' => '7.x-1.25',
      ),
      'metatag_panels' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/metatag/metatag_panels/metatag_panels.module',
        'basename' => 'metatag_panels.module',
        'name' => 'metatag_panels',
        'info' => 
        array (
          'name' => 'Metatag: Panels',
          'description' => 'Provides Metatag integration within the Panels interface.',
          'package' => 'SEO',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'metatag:metatag',
            1 => 'panels:panels',
          ),
          'files' => 
          array (
            0 => 'tests/metatag_panels.test',
            1 => 'tests/metatag_panels.i18n.test',
          ),
          'version' => '7.x-1.25',
          'project' => 'metatag',
          'datestamp' => '1522849089',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'metatag',
        'version' => '7.x-1.25',
      ),
      'metatag_google_plus' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/metatag/metatag_google_plus/metatag_google_plus.module',
        'basename' => 'metatag_google_plus.module',
        'name' => 'metatag_google_plus',
        'info' => 
        array (
          'name' => 'Metatag: Google+',
          'description' => 'Provides support for Google+ \'itemscope\', \'author\' and \'publisher\' meta tags.',
          'package' => 'SEO',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'metatag:metatag',
          ),
          'files' => 
          array (
            0 => 'metatag_google_plus.inc',
            1 => 'tests/metatag_google_plus.test',
            2 => 'tests/metatag_google_plus.tags.test',
          ),
          'version' => '7.x-1.25',
          'project' => 'metatag',
          'datestamp' => '1522849089',
          'php' => '5.2.4',
        ),
        'schema_version' => '7100',
        'project' => 'metatag',
        'version' => '7.x-1.25',
      ),
      'metatag_app_links' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/metatag/metatag_app_links/metatag_app_links.module',
        'basename' => 'metatag_app_links.module',
        'name' => 'metatag_app_links',
        'info' => 
        array (
          'name' => 'Metatag: App Links',
          'description' => 'Provides support for applinks.org meta tags.',
          'package' => 'SEO',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'metatag:metatag',
          ),
          'files' => 
          array (
            0 => 'tests/metatag_app_links.test',
            1 => 'tests/metatag_app_links.tags.test',
          ),
          'version' => '7.x-1.25',
          'project' => 'metatag',
          'datestamp' => '1522849089',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'metatag',
        'version' => '7.x-1.25',
      ),
      'metatag_dc_advanced' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/metatag/metatag_dc_advanced/metatag_dc_advanced.module',
        'basename' => 'metatag_dc_advanced.module',
        'name' => 'metatag_dc_advanced',
        'info' => 
        array (
          'name' => 'Metatag: Dublin Core Advanced',
          'description' => 'Provides forty additional meta tags from the <a href="http://dublincore.org/">Dublin Core Metadata Institute</a>.',
          'package' => 'SEO',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'metatag:metatag',
            1 => 'metatag:metatag_dc',
          ),
          'files' => 
          array (
            0 => 'tests/metatag_dc_advanced.test',
            1 => 'tests/metatag_dc_advanced.tags.test',
          ),
          'version' => '7.x-1.25',
          'project' => 'metatag',
          'datestamp' => '1522849089',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'metatag',
        'version' => '7.x-1.25',
      ),
      'metatag_views' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/metatag/metatag_views/metatag_views.module',
        'basename' => 'metatag_views.module',
        'name' => 'metatag_views',
        'info' => 
        array (
          'name' => 'Metatag: Views',
          'description' => 'Provides Metatag integration within the Views interface.',
          'package' => 'SEO',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'metatag:metatag',
            1 => 'views:views',
          ),
          'files' => 
          array (
            0 => 'metatag_views.inc',
            1 => 'metatag_views_plugin_display_extender_metatags.inc',
            2 => 'tests/metatag_views.test',
            3 => 'tests/metatag_views.i18n.test',
          ),
          'version' => '7.x-1.25',
          'project' => 'metatag',
          'datestamp' => '1522849089',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'metatag',
        'version' => '7.x-1.25',
      ),
      'metatag_context' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/metatag/metatag_context/metatag_context.module',
        'basename' => 'metatag_context.module',
        'name' => 'metatag_context',
        'info' => 
        array (
          'name' => 'Metatag: Context',
          'description' => 'Assigned Metatag using Context definitions, allowing them to be assigned by path and other criteria.',
          'package' => 'SEO',
          'core' => '7.x',
          'configure' => 'admin/config/search/metatags/context',
          'dependencies' => 
          array (
            0 => 'metatag:metatag',
            1 => 'context:context',
          ),
          'files' => 
          array (
            0 => 'tests/metatag_context.test',
            1 => 'tests/metatag_context.i18n.test',
          ),
          'version' => '7.x-1.25',
          'project' => 'metatag',
          'datestamp' => '1522849089',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'metatag',
        'version' => '7.x-1.25',
      ),
      'metatag_importer' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/metatag/metatag_importer/metatag_importer.module',
        'basename' => 'metatag_importer.module',
        'name' => 'metatag_importer',
        'info' => 
        array (
          'name' => 'Metatag Importer',
          'description' => 'Import data from other modules into Metatag.',
          'core' => '7.x',
          'package' => 'SEO',
          'dependencies' => 
          array (
            0 => 'metatag:metatag',
          ),
          'files' => 
          array (
            0 => 'tests/metatag_importer.test',
          ),
          'version' => '7.x-1.25',
          'project' => 'metatag',
          'datestamp' => '1522849089',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'metatag',
        'version' => '7.x-1.25',
      ),
      'metatag_opengraph' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/metatag/metatag_opengraph/metatag_opengraph.module',
        'basename' => 'metatag_opengraph.module',
        'name' => 'metatag_opengraph',
        'info' => 
        array (
          'name' => 'Metatag: OpenGraph',
          'description' => 'Provides support for Open Graph Protocol meta tags.',
          'package' => 'SEO',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'metatag:metatag',
          ),
          'files' => 
          array (
            0 => 'tests/metatag_opengraph.test',
            1 => 'tests/metatag_opengraph.tags.test',
          ),
          'version' => '7.x-1.25',
          'project' => 'metatag',
          'datestamp' => '1522849089',
          'php' => '5.2.4',
        ),
        'schema_version' => '7106',
        'project' => 'metatag',
        'version' => '7.x-1.25',
      ),
      'metatag_dc' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/metatag/metatag_dc/metatag_dc.module',
        'basename' => 'metatag_dc.module',
        'name' => 'metatag_dc',
        'info' => 
        array (
          'name' => 'Metatag: Dublin Core',
          'description' => 'Provides the fifteen <a href="http://dublincore.org/documents/dces/">Dublin Core Metadata Element Set 1.1</a> meta tags from the <a href="http://dublincore.org/">Dublin Core Metadata Institute</a>.',
          'package' => 'SEO',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'metatag:metatag',
          ),
          'files' => 
          array (
            0 => 'tests/metatag_dc.test',
            1 => 'tests/metatag_dc.tags.test',
          ),
          'version' => '7.x-1.25',
          'project' => 'metatag',
          'datestamp' => '1522849089',
          'php' => '5.2.4',
        ),
        'schema_version' => '7100',
        'project' => 'metatag',
        'version' => '7.x-1.25',
      ),
      'metatag' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/metatag/metatag.module',
        'basename' => 'metatag.module',
        'name' => 'metatag',
        'info' => 
        array (
          'name' => 'Metatag',
          'description' => 'Adds support and an API to implement meta tags.',
          'package' => 'SEO',
          'core' => '7.x',
          'dependencies' => 
          array (
            0 => 'drupal:system (>= 7.40)',
            1 => 'ctools:ctools',
            2 => 'token:token',
          ),
          'configure' => 'admin/config/search/metatags',
          'files' => 
          array (
            0 => 'metatag.inc',
            1 => 'metatag.migrate.inc',
            2 => 'metatag.search_api.inc',
            3 => 'tests/metatag.helper.test',
            4 => 'tests/metatag.unit.test',
            5 => 'tests/metatag.tags_helper.test',
            6 => 'tests/metatag.tags.test',
            7 => 'tests/metatag.node.test',
            8 => 'tests/metatag.term.test',
            9 => 'tests/metatag.user.test',
            10 => 'tests/metatag.core_tag_removal.test',
            11 => 'tests/metatag.bulk_revert.test',
            12 => 'tests/metatag.string_handling.test',
            13 => 'tests/metatag.string_handling_with_i18n.test',
            14 => 'tests/metatag.xss.test',
            15 => 'tests/metatag.output_caching.test',
            16 => 'tests/metatag.image.test',
            17 => 'tests/metatag.locale.test',
            18 => 'tests/metatag.node.with_i18n.test',
            19 => 'tests/metatag.term.with_i18n.test',
            20 => 'tests/metatag.with_i18n_output.test',
            21 => 'tests/metatag.with_i18n_disabled.test',
            22 => 'tests/metatag.with_i18n_config.test',
            23 => 'tests/metatag.with_me.test',
            24 => 'tests/metatag.with_media.test',
            25 => 'tests/metatag.with_panels.test',
            26 => 'tests/metatag.with_profile2.test',
            27 => 'tests/metatag.with_search_api.test',
            28 => 'tests/metatag.with_workbench_moderation.test',
            29 => 'tests/metatag.with_views.test',
          ),
          'test_dependencies' => 
          array (
            0 => 'devel:devel',
            1 => 'imagecache_token:imagecache_token',
            2 => 'entity_translation:entity_translation',
            3 => 'i18n:i18n',
            4 => 'me:me',
            5 => 'file_entity:file_entity',
            6 => 'media:media (>= 2.0, < 3.0)',
            7 => 'panels:panels',
            8 => 'profile2:profile2',
            9 => 'entity:entity',
            10 => 'search_api:search_api',
            11 => 'workbench_moderation:workbench_moderation',
            12 => 'views:views',
            13 => 'context:context',
          ),
          'version' => '7.x-1.25',
          'project' => 'metatag',
          'datestamp' => '1522849089',
          'php' => '5.2.4',
        ),
        'schema_version' => '7115',
        'project' => 'metatag',
        'version' => '7.x-1.25',
      ),
      'diff' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/diff/diff.module',
        'basename' => 'diff.module',
        'name' => 'diff',
        'info' => 
        array (
          'name' => 'Diff',
          'description' => 'Show differences between content revisions.',
          'core' => '7.x',
          'files' => 
          array (
            0 => 'DiffEngine.php',
          ),
          'version' => '7.x-3.2',
          'project' => 'diff',
          'datestamp' => '1352784357',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7305',
        'project' => 'diff',
        'version' => '7.x-3.2',
      ),
      'webform_ajax' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/webform_ajax/webform_ajax.module',
        'basename' => 'webform_ajax.module',
        'name' => 'webform_ajax',
        'info' => 
        array (
          'name' => 'Webform AJAX',
          'description' => 'Adds AJAX support to Webforms',
          'core' => '7.x',
          'package' => 'Webform',
          'dependencies' => 
          array (
            0 => 'webform',
            1 => 'ctools',
          ),
          'version' => '7.x-1.1',
          'project' => 'webform_ajax',
          'datestamp' => '1361543750',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'webform_ajax',
        'version' => '7.x-1.1',
      ),
      'features' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/features/features.module',
        'basename' => 'features.module',
        'name' => 'features',
        'info' => 
        array (
          'name' => 'Features',
          'description' => 'Provides feature management for Drupal.',
          'core' => '7.x',
          'package' => 'Features',
          'files' => 
          array (
            0 => 'tests/features.test',
          ),
          'test_dependencies' => 
          array (
            0 => 'image',
            1 => 'strongarm',
            2 => 'taxonomy',
            3 => 'views',
          ),
          'configure' => 'admin/structure/features/settings',
          'version' => '7.x-2.10',
          'project' => 'features',
          'datestamp' => '1461011641',
          'dependencies' => 
          array (
          ),
          'php' => '5.2.4',
        ),
        'schema_version' => '7200',
        'project' => 'features',
        'version' => '7.x-2.10',
      ),
      'addressfield_tokens' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/modules/contrib/addressfield_tokens/addressfield_tokens.module',
        'basename' => 'addressfield_tokens.module',
        'name' => 'addressfield_tokens',
        'info' => 
        array (
          'name' => 'Address Field Tokens',
          'description' => 'Creates tokens for address fields, adds new addressfield renders, and adds webform integration.',
          'core' => '7.x',
          'package' => 'Fields',
          'dependencies' => 
          array (
            0 => 'addressfield',
            1 => 'entity_token',
            2 => 'token',
          ),
          'version' => '7.x-1.5',
          'project' => 'addressfield_tokens',
          'datestamp' => '1414599829',
          'php' => '5.2.4',
        ),
        'schema_version' => 0,
        'project' => 'addressfield_tokens',
        'version' => '7.x-1.5',
      ),
    ),
    'themes' => 
    array (
      'creighton_frontpage' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/themes/custom/web_themes/creighton_frontpage/creighton_frontpage.info',
        'basename' => 'creighton_frontpage.info',
        'name' => 'Creighton University frontpage',
        'info' => 
        array (
          'name' => 'Creighton University frontpage',
          'description' => 'This theme is for development only.',
          'base theme' => 'bootstrap',
          'engine' => 'phptemplate',
          'core' => '7.x',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'css/styles.css',
            ),
          ),
          'scripts' => 
          array (
            0 => 'js/site.js',
          ),
          'regions' => 
          array (
            'alert_header' => 'Alert Header',
            'header' => 'Main Header',
            'secondary_header' => 'Secondary Header',
            'header_image' => 'Header Image',
            'highlighted' => 'Highlighted',
            'help' => 'Help',
            'academics_program_title' => 'Academics Program Title',
            'content' => 'Content',
            'sidebar_first' => 'First Sidebar',
            'sidebar_second' => 'Second Sidebar',
            'footer' => 'Footer',
            'main_nav' => 'Main Mega Navigation',
            'dropdown_menu' => 'Drop down toggle for menu',
          ),
          'plugins' => 
          array (
            'panels' => 
            array (
              'layouts' => 'panels',
            ),
          ),
          'settings' => 
          array (
            'toggle_logo' => '1',
            'toggle_name' => '0',
            'toggle_slogan' => '0',
            'toggle_node_user_picture' => '1',
            'toggle_comment_user_picture' => '1',
            'toggle_comment_user_verification' => '1',
            'toggle_favicon' => '1',
            'toggle_main_menu' => '1',
            'toggle_secondary_menu' => '1',
            'default_logo' => '0',
            'logo_path' => 'sites/all/themes/custom/web_themes/creighton_2016/images/logos/CU_Logo.png',
            'logo_upload' => '',
            'default_favicon' => '0',
            'favicon_path' => '',
            'favicon_upload' => '',
          ),
          'version' => NULL,
        ),
        'project' => '',
        'version' => NULL,
      ),
      'creighton_admin_ember' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/themes/custom/web_themes/creighton_admin_ember/creighton_admin_ember.info',
        'basename' => 'creighton_admin_ember.info',
        'name' => 'Creighton Admin Ember',
        'info' => 
        array (
          'name' => 'Creighton Admin Ember',
          'base theme' => 'ember',
          'description' => 'This is a sub-theme of theme Ember',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'stylesheets' => 
          array (
            'screen' => 
            array (
              0 => 'admin.css',
            ),
          ),
          'settings' => 
          array (
            'shortcut_module_link' => '1',
            'views_ui_override' => '1',
          ),
          'regions' => 
          array (
            'content' => 'Content',
            'help' => 'Help',
            'messages' => 'Messages',
            'page_top' => 'Page top',
            'page_bottom' => 'Page bottom',
            'sidebar_first' => 'First sidebar',
          ),
          'regions_hidden' => 
          array (
            0 => 'sidebar_first',
          ),
        ),
        'project' => '',
        'version' => '7.62',
      ),
      'creighton_2017' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/themes/custom/web_themes/creighton_2017/creighton_2017.info',
        'basename' => 'creighton_2017.info',
        'name' => 'Creighton University 2017',
        'info' => 
        array (
          'name' => 'Creighton University 2017',
          'description' => '2017 Subsite Pages Refresh and New Colors',
          'base theme' => 'creighton_2016',
          'screenshot' => 'screenshot.png',
          'engine' => 'phptemplate',
          'core' => '7.x',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'css/subsites.css',
              1 => '../creighton_2016/css/frontpage2016.css',
            ),
          ),
          'regions' => 
          array (
            'alert_header' => 'Alert Header',
            'header' => 'Main Header',
            'secondary_header' => 'Secondary Header',
            'header_image' => 'Header Image',
            'highlighted' => 'Highlighted',
            'help' => 'Help',
            'academics_program_title' => 'Academics Program Title',
            'content' => 'Content',
            'sidebar_first' => 'First Sidebar',
            'sidebar_second' => 'Second Sidebar',
            'footer' => 'Footer',
            'main_nav' => 'Main Mega Navigation',
            'dropdown_menu' => 'Drop down toggle for menu',
            'header_searchbox' => 'Header Search',
            'header_tranlinks' => 'Transaction Links',
            'megamenu_dropdown' => 'Menu Dropdown',
            'megamenu_submenu' => 'Mega Menu Submenu',
            'homepage_slider' => 'Home Page Slider',
          ),
          'plugins' => 
          array (
            'panels' => 
            array (
              'layouts' => 'panels',
            ),
          ),
          'settings' => 
          array (
            'toggle_logo' => '1',
            'toggle_name' => '0',
            'toggle_slogan' => '0',
            'toggle_node_user_picture' => '1',
            'toggle_comment_user_picture' => '1',
            'toggle_comment_user_verification' => '1',
            'toggle_favicon' => '1',
            'toggle_main_menu' => '1',
            'toggle_secondary_menu' => '1',
            'omega_toggle_front_page_content' => '1',
            'default_logo' => '0',
            'logo_path' => 'sites/all/themes/custom/web_themes/creighton_2016/images/logos/CU_Logo.png',
            'logo_upload' => '',
            'default_favicon' => '0',
            'favicon_path' => '',
            'favicon_upload' => '',
            'omega_enable_warning' => '1',
            'omega_toggle_extension_layouts' => '1',
            'omega_layout' => 'cu-default-2017',
            'omega_toggle_extension_development' => '0',
            'omega_rebuild_theme_registry' => '0',
            'omega_rebuild_aggregates' => '0',
            'omega_browser_width_indicator' => '0',
            'omega_livereload' => '1',
            'omega_livereload_script' => 'http://:/livereload.js',
            'omega_livereload_host' => '',
            'omega_livereload_port' => '',
            'omega_demo_regions' => '0',
            'omega_toggle_extension_compatibility' => '1',
            'omega_conditional_classes_html' => '1',
            'omega_apple_touch' => '0',
            'omega_cleartype' => '1',
            'omega_handheld_friendly' => '1',
            'omega_mobile_optimized' => '1',
            'omega_viewport' => '1',
            'omega_viewport_user_scaleable' => '1',
            'omega_viewport_initial_scale' => '1.0',
            'omega_chrome_edge' => '1',
            'omega_chrome_popup' => '0',
            'omega_chrome_notice' => '0',
            'omega_toggle_extension_assets' => '1',
            'omega_libraries' => 
            array (
              'selectivizr' => 
              array (
                'status' => '0',
              ),
              'respond' => 
              array (
                'status' => '1',
              ),
              'pie' => 
              array (
                'status' => '0',
              ),
            ),
          ),
          'version' => NULL,
        ),
        'project' => '',
        'version' => NULL,
      ),
      'creighton_barktik' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/themes/custom/web_themes/creighton_bartik/creighton_barktik.info',
        'basename' => 'creighton_barktik.info',
        'name' => 'Creighton Bartik',
        'info' => 
        array (
          'name' => 'Creighton Bartik',
          'description' => 'A subtheme of Bartik, which is a flexible, recolorable theme with many regions.',
          'core' => '7.x',
          'base theme' => 'bartik',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'css/creighton_bartik.css',
              1 => 'css/colors.css',
            ),
          ),
          'regions' => 
          array (
            'header' => 'Header',
            'help' => 'Help',
            'page_top' => 'Page top',
            'page_bottom' => 'Page bottom',
            'highlighted' => 'Highlighted',
            'featured' => 'Featured',
            'content' => 'Content',
            'sidebar_first' => 'Sidebar first',
            'sidebar_second' => 'Sidebar second',
            'triptych_first' => 'Triptych first',
            'triptych_middle' => 'Triptych middle',
            'triptych_last' => 'Triptych last',
            'footer_firstcolumn' => 'Footer first column',
            'footer_secondcolumn' => 'Footer second column',
            'footer_thirdcolumn' => 'Footer third column',
            'footer_fourthcolumn' => 'Footer fourth column',
            'footer' => 'Footer',
          ),
          'settings' => 
          array (
            'shortcut_module_link' => '0',
          ),
          'version' => NULL,
        ),
        'project' => '',
        'version' => NULL,
      ),
      'creightonbootstrap' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/themes/custom/web_themes/creightonbootstrap/creightonbootstrap.info',
        'basename' => 'creightonbootstrap.info',
        'name' => 'Creighton University Bootstrap Sub-Theme (CDN)',
        'info' => 
        array (
          'name' => 'Creighton University Bootstrap Sub-Theme (CDN)',
          'description' => 'Uses the jsDelivr CDN for all CSS and JavaScript. No source files or compiling is necessary and is recommended for simple sites or beginners.',
          'core' => '7.x',
          'base theme' => 'bootstrap',
          'regions' => 
          array (
            'navigation' => 'Navigation',
            'header' => 'Top Bar',
            'highlighted' => 'Highlighted',
            'help' => 'Help',
            'content' => 'Content',
            'sidebar_first' => 'Primary',
            'sidebar_second' => 'Secondary',
            'footer' => 'Footer',
            'page_top' => 'Page top',
            'page_bottom' => 'Page bottom',
          ),
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'css/style.css',
            ),
          ),
          'version' => NULL,
        ),
        'project' => '',
        'version' => NULL,
      ),
      'creighton_panopoly' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/themes/custom/web_themes/creighton_panopoly/creighton_panopoly.info',
        'basename' => 'creighton_panopoly.info',
        'name' => 'Creighton University Panopoly',
        'info' => 
        array (
          'name' => 'Creighton University Panopoly',
          'description' => 'Panopoly Front Page Refresh',
          'base theme' => 'omega',
          'screenshot' => 'screenshot.png',
          'engine' => 'phptemplate',
          'core' => '7.x',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'css/styles.css',
              1 => 'css/reset.css',
              2 => 'css/hacks.css',
            ),
          ),
          'scripts' => 
          array (
            0 => 'js/vendor/jquery.bxslider.min.js',
            1 => 'js/site.js',
          ),
          'regions' => 
          array (
            'alert_header' => 'Alert Header',
            'header' => 'Main Header',
            'secondary_header' => 'Secondary Header',
            'header_image' => 'Header Image',
            'highlighted' => 'Highlighted',
            'help' => 'Help',
            'academics_program_title' => 'Academics Program Title',
            'content' => 'Content',
            'sidebar_first' => 'First Sidebar',
            'sidebar_second' => 'Second Sidebar',
            'footer' => 'Footer',
          ),
          'plugins' => 
          array (
            'panels' => 
            array (
              'layouts' => 'panels',
            ),
          ),
          'settings' => 
          array (
            'toggle_logo' => '1',
            'toggle_name' => '0',
            'toggle_slogan' => '0',
            'toggle_node_user_picture' => '1',
            'toggle_comment_user_picture' => '1',
            'toggle_comment_user_verification' => '1',
            'toggle_favicon' => '1',
            'toggle_main_menu' => '1',
            'toggle_secondary_menu' => '1',
            'omega_toggle_front_page_content' => '1',
            'default_logo' => '0',
            'logo_path' => 'sites/all/themes/custom/web_themes/creighton_panopoly/images/logos/CU_Logo.png',
            'logo_upload' => '',
            'default_favicon' => '0',
            'favicon_path' => '',
            'favicon_upload' => '',
            'omega_enable_warning' => '1',
            'omega_toggle_extension_layouts' => '1',
            'omega_layout' => 'cu-default-2015',
            'omega_toggle_extension_development' => '0',
            'omega_rebuild_theme_registry' => '0',
            'omega_rebuild_aggregates' => '0',
            'omega_browser_width_indicator' => '0',
            'omega_livereload' => '1',
            'omega_livereload_script' => 'http://:/livereload.js',
            'omega_livereload_host' => '',
            'omega_livereload_port' => '',
            'omega_demo_regions' => '0',
            'omega_toggle_extension_compatibility' => '1',
            'omega_conditional_classes_html' => '1',
            'omega_apple_touch' => '0',
            'omega_cleartype' => '1',
            'omega_handheld_friendly' => '1',
            'omega_mobile_optimized' => '1',
            'omega_viewport' => '1',
            'omega_viewport_user_scaleable' => '1',
            'omega_chrome_edge' => '1',
            'omega_chrome_popup' => '0',
            'omega_chrome_notice' => '0',
            'omega_toggle_extension_assets' => '1',
            'omega_libraries' => 
            array (
              'selectivizr' => 
              array (
                'status' => '0',
              ),
              'respond' => 
              array (
                'status' => '1',
              ),
              'pie' => 
              array (
                'status' => '0',
              ),
            ),
          ),
          'version' => NULL,
        ),
        'project' => '',
        'version' => NULL,
      ),
      'creighton_2015' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/themes/custom/web_themes/creighton_2015/creighton_2015.info',
        'basename' => 'creighton_2015.info',
        'name' => 'Creighton University 2015',
        'info' => 
        array (
          'name' => 'Creighton University 2015',
          'description' => '2015 Front Page Refresh and New Colors',
          'base theme' => 'omega',
          'screenshot' => 'screenshot.png',
          'engine' => 'phptemplate',
          'core' => '7.x',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'css/reset.css',
              1 => 'css/styles.css',
              2 => 'css/hacks.css',
            ),
          ),
          'scripts' => 
          array (
            0 => 'js/vendor/jquery.bxslider.min.js',
            1 => 'js/site.js',
          ),
          'regions' => 
          array (
            'alert_header' => 'Alert Header',
            'header' => 'Main Header',
            'secondary_header' => 'Secondary Header',
            'header_image' => 'Header Image',
            'highlighted' => 'Highlighted',
            'help' => 'Help',
            'academics_program_title' => 'Academics Program Title',
            'content' => 'Content',
            'sidebar_first' => 'First Sidebar',
            'sidebar_second' => 'Second Sidebar',
            'footer' => 'Footer',
          ),
          'plugins' => 
          array (
            'panels' => 
            array (
              'layouts' => 'panels',
            ),
          ),
          'settings' => 
          array (
            'toggle_logo' => '1',
            'toggle_name' => '0',
            'toggle_slogan' => '0',
            'toggle_node_user_picture' => '1',
            'toggle_comment_user_picture' => '1',
            'toggle_comment_user_verification' => '1',
            'toggle_favicon' => '1',
            'toggle_main_menu' => '1',
            'toggle_secondary_menu' => '1',
            'omega_toggle_front_page_content' => '1',
            'default_logo' => '0',
            'logo_path' => 'sites/all/themes/custom/web_themes/creighton_2015/images/logos/CU_Logo.png',
            'logo_upload' => '',
            'default_favicon' => '0',
            'favicon_path' => '',
            'favicon_upload' => '',
            'omega_enable_warning' => '1',
            'omega_toggle_extension_layouts' => '1',
            'omega_layout' => 'cu-default-2015',
            'omega_toggle_extension_development' => '0',
            'omega_rebuild_theme_registry' => '0',
            'omega_rebuild_aggregates' => '0',
            'omega_browser_width_indicator' => '0',
            'omega_livereload' => '1',
            'omega_livereload_script' => 'http://:/livereload.js',
            'omega_livereload_host' => '',
            'omega_livereload_port' => '',
            'omega_demo_regions' => '0',
            'omega_toggle_extension_compatibility' => '1',
            'omega_conditional_classes_html' => '1',
            'omega_apple_touch' => '0',
            'omega_cleartype' => '1',
            'omega_handheld_friendly' => '1',
            'omega_mobile_optimized' => '1',
            'omega_viewport' => '1',
            'omega_viewport_user_scaleable' => '1',
            'omega_chrome_edge' => '1',
            'omega_chrome_popup' => '0',
            'omega_chrome_notice' => '0',
            'omega_toggle_extension_assets' => '1',
            'omega_libraries' => 
            array (
              'selectivizr' => 
              array (
                'status' => '0',
              ),
              'respond' => 
              array (
                'status' => '1',
              ),
              'pie' => 
              array (
                'status' => '0',
              ),
            ),
          ),
          'version' => NULL,
        ),
        'project' => '',
        'version' => NULL,
      ),
      'creighton_2013' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/themes/custom/web_themes/creighton_2013/creighton_2013.info',
        'basename' => 'creighton_2013.info',
        'name' => 'Creighton University 2013',
        'info' => 
        array (
          'name' => 'Creighton University 2013',
          'description' => 'Please provide a description for your theme.',
          'base theme' => 'omega',
          'screenshot' => 'screenshot.png',
          'engine' => 'phptemplate',
          'core' => '7.x',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'css/styles.css',
              1 => 'css/reset.css',
              2 => 'css/hacks.css',
            ),
          ),
          'scripts' => 
          array (
            0 => 'js/vendor/jquery.bxslider.min.js',
            1 => 'js/vendor/jquery.easing.1.3.js',
            2 => 'js/site.js',
          ),
          'regions' => 
          array (
            'alert_header' => 'Alert Header',
            'header' => 'Main Header',
            'secondary_header' => 'Secondary Header',
            'header_image' => 'Header Image',
            'highlighted' => 'Highlighted',
            'help' => 'Help',
            'academics_program_title' => 'Academics Program Title',
            'content' => 'Content',
            'sidebar_first' => 'First Sidebar',
            'sidebar_second' => 'Second Sidebar',
            'badge_footer' => 'Footer Badge',
            'left_footer' => 'Left Sidebar Footer',
            'right_footer' => 'Right Sidebar Footer',
          ),
          'plugins' => 
          array (
            'panels' => 
            array (
              'layouts' => 'panels',
            ),
          ),
          'settings' => 
          array (
            'toggle_logo' => '1',
            'toggle_name' => '0',
            'toggle_slogan' => '0',
            'toggle_node_user_picture' => '1',
            'toggle_comment_user_picture' => '1',
            'toggle_comment_user_verification' => '1',
            'toggle_favicon' => '1',
            'toggle_main_menu' => '1',
            'toggle_secondary_menu' => '1',
            'omega_toggle_front_page_content' => '1',
            'default_logo' => '0',
            'logo_path' => 'sites/all/themes/custom/creighton_2013/images/logos/CU_Logo.png',
            'logo_upload' => '',
            'default_favicon' => '0',
            'favicon_path' => '',
            'favicon_upload' => '',
            'omega_enable_warning' => '1',
            'omega_toggle_extension_layouts' => '1',
            'omega_layout' => 'cu-default',
            'omega_toggle_extension_development' => '0',
            'omega_rebuild_theme_registry' => '0',
            'omega_rebuild_aggregates' => '0',
            'omega_browser_width_indicator' => '0',
            'omega_livereload' => '1',
            'omega_livereload_script' => 'http://:/livereload.js',
            'omega_livereload_host' => '',
            'omega_livereload_port' => '',
            'omega_demo_regions' => '0',
            'omega_toggle_extension_compatibility' => '1',
            'omega_conditional_classes_html' => '1',
            'omega_apple_touch' => '0',
            'omega_cleartype' => '1',
            'omega_handheld_friendly' => '1',
            'omega_mobile_optimized' => '1',
            'omega_viewport' => '1',
            'omega_viewport_user_scaleable' => '1',
            'omega_chrome_edge' => '1',
            'omega_chrome_popup' => '0',
            'omega_chrome_notice' => '0',
            'omega_toggle_extension_assets' => '1',
            'omega_libraries' => 
            array (
              'selectivizr' => 
              array (
                'status' => '0',
              ),
              'respond' => 
              array (
                'status' => '1',
              ),
              'pie' => 
              array (
                'status' => '0',
              ),
            ),
          ),
          'version' => NULL,
        ),
        'project' => '',
        'version' => NULL,
      ),
      'creighton_admin' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/themes/custom/web_themes/creighton_admin/creighton_admin.info',
        'basename' => 'creighton_admin.info',
        'name' => 'Creighton Admin',
        'info' => 
        array (
          'name' => 'Creighton Admin',
          'base theme' => 'seven',
          'description' => 'This is a sub-theme of theme Seven',
          'package' => 'Core',
          'version' => '7.62',
          'core' => '7.x',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'admin.css',
            ),
          ),
          'regions' => 
          array (
            'content' => 'Content',
            'help' => 'Help',
            'page_top' => 'Page top',
            'page_bottom' => 'Page bottom',
            'sidebar_first' => 'First sidebar',
          ),
          'regions_hidden' => 
          array (
            0 => 'sidebar_first',
          ),
        ),
        'project' => '',
        'version' => '7.62',
      ),
      'creighton_2016' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/themes/custom/web_themes/creighton_2016/creighton_2016.info',
        'basename' => 'creighton_2016.info',
        'name' => 'Creighton University 2016',
        'info' => 
        array (
          'name' => 'Creighton University 2016',
          'description' => '2016 Front Page Refresh and New Colors',
          'base theme' => 'omega',
          'screenshot' => 'screenshot.png',
          'engine' => 'phptemplate',
          'core' => '7.x',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'css/reset.css',
              1 => 'css/styles.css',
              2 => 'css/hacks.css',
              3 => 'css/customer-typeahead.css',
            ),
          ),
          'scripts' => 
          array (
            0 => 'js/vendor/jquery.bxslider.min.js',
            1 => 'js/site.js',
            2 => 'js/vendor/modernizr.js',
            3 => 'js/vendor/picturefill.min.js',
            4 => 'js/vendor/handlebars.js',
            5 => 'js/vendor/typeahead.bundle.js',
            6 => 'js/vendor/typeahead.fb.js',
            7 => 'js/vendor/fitty.min.js',
          ),
          'regions' => 
          array (
            'alert_header' => 'Alert Header',
            'header' => 'Main Header',
            'secondary_header' => 'Secondary Header',
            'header_image' => 'Header Image',
            'highlighted' => 'Highlighted',
            'help' => 'Help',
            'academics_program_title' => 'Academics Program Title',
            'content' => 'Content',
            'sidebar_first' => 'First Sidebar',
            'sidebar_second' => 'Second Sidebar',
            'footer' => 'Footer',
            'main_nav' => 'Main Mega Navigation',
            'dropdown_menu' => 'Drop down toggle for menu',
            'header_searchbox' => 'Header Search',
            'header_tranlinks' => 'Transaction Links',
            'megamenu_dropdown' => 'Menu Dropdown',
            'megamenu_submenu' => 'Mega Menu Submenu',
            'homepage_slider' => 'Home Page Slider',
          ),
          'plugins' => 
          array (
            'panels' => 
            array (
              'layouts' => 'panels',
            ),
          ),
          'settings' => 
          array (
            'toggle_logo' => '1',
            'toggle_name' => '0',
            'toggle_slogan' => '0',
            'toggle_node_user_picture' => '1',
            'toggle_comment_user_picture' => '1',
            'toggle_comment_user_verification' => '1',
            'toggle_favicon' => '1',
            'toggle_main_menu' => '1',
            'toggle_secondary_menu' => '1',
            'omega_toggle_front_page_content' => '1',
            'default_logo' => '0',
            'logo_path' => 'sites/all/themes/custom/web_themes/creighton_2016/images/logos/CU_Logo.png',
            'logo_upload' => '',
            'default_favicon' => '0',
            'favicon_path' => '',
            'favicon_upload' => '',
            'omega_enable_warning' => '1',
            'omega_toggle_extension_layouts' => '1',
            'omega_layout' => 'cu-default-2016',
            'omega_toggle_extension_development' => '0',
            'omega_rebuild_theme_registry' => '0',
            'omega_rebuild_aggregates' => '0',
            'omega_browser_width_indicator' => '0',
            'omega_livereload' => '1',
            'omega_livereload_script' => 'http://:/livereload.js',
            'omega_livereload_host' => '',
            'omega_livereload_port' => '',
            'omega_demo_regions' => '0',
            'omega_toggle_extension_compatibility' => '1',
            'omega_conditional_classes_html' => '1',
            'omega_apple_touch' => '0',
            'omega_cleartype' => '1',
            'omega_handheld_friendly' => '1',
            'omega_mobile_optimized' => '1',
            'omega_viewport' => '1',
            'omega_viewport_user_scaleable' => '1',
            'omega_viewport_initial_scale' => '1.0',
            'omega_chrome_edge' => '1',
            'omega_chrome_popup' => '0',
            'omega_chrome_notice' => '0',
            'omega_toggle_extension_assets' => '1',
            'omega_libraries' => 
            array (
              'selectivizr' => 
              array (
                'status' => '0',
              ),
              'respond' => 
              array (
                'status' => '1',
              ),
              'pie' => 
              array (
                'status' => '0',
              ),
            ),
          ),
          'version' => NULL,
        ),
        'project' => '',
        'version' => NULL,
      ),
      'bootstrap' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/themes/contrib/bootstrap/bootstrap.info',
        'basename' => 'bootstrap.info',
        'name' => 'Bootstrap',
        'info' => 
        array (
          'name' => 'Bootstrap',
          'description' => 'Built to use Bootstrap, a sleek, intuitive, and powerful front-end framework for faster and easier web development.',
          'core' => '7.x',
          'simplytest_dependencies' => 
          array (
            0 => 'jquery_update',
          ),
          'regions' => 
          array (
            'navigation' => 'Navigation',
            'header' => 'Top Bar',
            'highlighted' => 'Highlighted',
            'help' => 'Help',
            'content' => 'Content',
            'sidebar_first' => 'Primary',
            'sidebar_second' => 'Secondary',
            'footer' => 'Footer',
            'page_top' => 'Page top',
            'page_bottom' => 'Page bottom',
          ),
          'settings' => 
          array (
            'bootstrap_fluid_container' => '0',
            'bootstrap_button_size' => '',
            'bootstrap_button_colorize' => '1',
            'bootstrap_button_iconize' => '1',
            'bootstrap_image_shape' => '',
            'bootstrap_image_responsive' => '1',
            'bootstrap_table_bordered' => '0',
            'bootstrap_table_condensed' => '0',
            'bootstrap_table_hover' => '1',
            'bootstrap_table_striped' => '1',
            'bootstrap_table_responsive' => '1',
            'bootstrap_breadcrumb' => '1',
            'bootstrap_breadcrumb_home' => '0',
            'bootstrap_breadcrumb_title' => '1',
            'bootstrap_navbar_position' => '',
            'bootstrap_navbar_inverse' => '0',
            'bootstrap_pager_first_and_last' => '1',
            'bootstrap_region_well-navigation' => '',
            'bootstrap_region_well-header' => '',
            'bootstrap_region_well-highlighted' => '',
            'bootstrap_region_well-help' => '',
            'bootstrap_region_well-content' => '',
            'bootstrap_region_well-sidebar_first' => 'well',
            'bootstrap_region_well-sidebar_second' => '',
            'bootstrap_region_well-footer' => '',
            'bootstrap_anchors_fix' => '0',
            'bootstrap_anchors_smooth_scrolling' => '0',
            'bootstrap_forms_required_has_error' => '0',
            'bootstrap_forms_has_error_value_toggle' => '1',
            'bootstrap_forms_smart_descriptions' => '1',
            'bootstrap_forms_smart_descriptions_limit' => '250',
            'bootstrap_forms_smart_descriptions_allowed_tags' => 'b, code, em, i, kbd, span, strong',
            'bootstrap_popover_enabled' => '1',
            'bootstrap_popover_animation' => '1',
            'bootstrap_popover_html' => '0',
            'bootstrap_popover_placement' => 'right',
            'bootstrap_popover_selector' => '',
            'bootstrap_popover_trigger' => 
            array (
              '\'hover\'' => '0',
              '\'focus\'' => '0',
              '\'click\'' => 'click',
            ),
            'bootstrap_popover_trigger_autoclose' => '1',
            'bootstrap_popover_title' => '',
            'bootstrap_popover_content' => '',
            'bootstrap_popover_delay' => '0',
            'bootstrap_popover_container' => 'body',
            'bootstrap_tooltip_enabled' => '1',
            'bootstrap_tooltip_animation' => '1',
            'bootstrap_tooltip_html' => '0',
            'bootstrap_tooltip_placement' => 'auto left',
            'bootstrap_tooltip_selector' => '',
            'bootstrap_tooltip_trigger' => 
            array (
              '\'hover\'' => 'hover',
              '\'focus\'' => 'focus',
              '\'click\'' => '0',
            ),
            'bootstrap_tooltip_delay' => '0',
            'bootstrap_tooltip_container' => 'body',
            'bootstrap_cdn_provider' => 'jsdelivr',
            'bootstrap_cdn_custom_css' => 'https://cdn.jsdelivr.net/bootstrap/3.3.7/css/bootstrap.css',
            'bootstrap_cdn_custom_css_min' => 'https://cdn.jsdelivr.net/bootstrap/3.3.7/css/bootstrap.min.css',
            'bootstrap_cdn_custom_js' => 'https://cdn.jsdelivr.net/bootstrap/3.3.7/js/bootstrap.js',
            'bootstrap_cdn_custom_js_min' => 'https://cdn.jsdelivr.net/bootstrap/3.3.7/js/bootstrap.min.js',
            'bootstrap_cdn_jsdelivr_version' => '3.3.7',
            'bootstrap_cdn_jsdelivr_theme' => 'bootstrap',
            'toggle_name' => '1',
            'toggle_search' => '1',
            'jquery_update_jquery_version' => '2.1',
          ),
          'exclude' => 
          array (
            'css' => 
            array (
              0 => 'misc/vertical-tabs.css',
              1 => 'modules/aggregator/aggregator.css',
              2 => 'modules/book/book.css',
              3 => 'modules/comment/comment.css',
              4 => 'modules/dblog/dblog.css',
              5 => 'modules/file/file.css',
              6 => 'modules/filter/filter.css',
              7 => 'modules/forum/forum.css',
              8 => 'modules/help/help.css',
              9 => 'modules/menu/menu.css',
              10 => 'modules/openid/openid.css',
              11 => 'modules/poll/poll.css',
              12 => 'modules/search/search.css',
              13 => 'modules/statistics/statistics.css',
              14 => 'modules/syslog/syslog.css',
              15 => 'modules/system/maintenance.css',
              16 => 'modules/system/system.maintenance.css',
              17 => 'modules/system/system.menus.css',
              18 => 'modules/system/system.messages.css',
              19 => 'modules/system/system.theme.css',
              20 => 'modules/taxonomy/taxonomy.css',
              21 => 'modules/tracker/tracker.css',
              22 => 'modules/update/update.css',
              23 => 'modules/user/user.css',
            ),
          ),
          'breakpoints' => 
          array (
            'screen-xs-max' => '(max-width: 767px)',
            'screen-sm-min' => '(min-width: 768px)',
            'screen-sm-max' => '(max-width: 991px)',
            'screen-md-min' => '(min-width: 992px)',
            'screen-md-max' => '(max-width: 1199px)',
            'screen-lg-min' => '(min-width: 1200px)',
          ),
          'multipliers' => 
          array (
            'screen-xs-max' => 
            array (
              0 => '1.5x',
              1 => '2x',
            ),
            'screen-sm-min' => 
            array (
              0 => '1.5x',
              1 => '2x',
            ),
            'screen-sm-max' => 
            array (
              0 => '1.5x',
              1 => '2x',
            ),
            'screen-md-min' => 
            array (
              0 => '1.5x',
              1 => '2x',
            ),
            'screen-md-max' => 
            array (
              0 => '1.5x',
              1 => '2x',
            ),
            'screen-lg-min' => 
            array (
              0 => '1.5x',
              1 => '2x',
            ),
          ),
          'version' => '7.x-3.14',
          'project' => 'bootstrap',
          'datestamp' => '1495748288',
        ),
        'project' => 'bootstrap',
        'version' => '7.x-3.14',
      ),
      'omega' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/themes/contrib/omega/omega/omega.info',
        'basename' => 'omega.info',
        'name' => 'Omega',
        'info' => 
        array (
          'name' => 'Omega',
          'description' => 'A powerful base theme framework.',
          'screenshot' => 'screenshot.png',
          'engine' => 'phptemplate',
          'core' => '7.x',
          'regions' => 
          array (
            'branding' => 'Branding',
            'header' => 'Header',
            'navigation' => 'Navigation',
            'highlighted' => 'Highlighted',
            'help' => 'Help',
            'content' => 'Content',
            'sidebar_first' => 'First Sidebar',
            'sidebar_second' => 'Second Sidebar',
            'footer' => 'Footer',
          ),
          'plugins' => 
          array (
            'panels' => 
            array (
              'layouts' => 'panels/layouts',
              'styles' => 'panels/styles',
            ),
          ),
          'version' => '7.x-4.4',
          'project' => 'omega',
          'datestamp' => '1437473042',
        ),
        'project' => 'omega',
        'version' => '7.x-4.4',
      ),
      'ohm' => 
      array (
        'filename' => '/var/aegir/platforms/cu_platform-2.50.1/sites/all/themes/contrib/omega/ohm/ohm.info',
        'basename' => 'ohm.info',
        'name' => 'Ohm',
        'info' => 
        array (
          'name' => 'Ohm',
          'description' => 'Omega based demonstration theme. Serves as a best-practice reference for the Omega documentation. Ohm will be constantly updated as best practice evolves so shouldn\'t be used in production.',
          'base theme' => 'omega',
          'screenshot' => 'screenshot.png',
          'engine' => 'phptemplate',
          'core' => '7.x',
          'stylesheets' => 
          array (
            'all' => 
            array (
              0 => 'css/ohm.normalize.css',
              1 => 'css/ohm.hacks.css',
              2 => 'css/ohm.styles.css',
              3 => 'css/ohm.no-query.css',
            ),
          ),
          'regions' => 
          array (
            'branding' => 'Branding',
            'navigation' => 'Navigation bar',
            'header' => 'Header',
            'hero' => 'Hero',
            'highlighted' => 'Highlighted',
            'help' => 'Help',
            'content' => 'Content',
            'sidebar_first' => 'First sidebar',
            'sidebar_second' => 'Second sidebar',
            'footer' => 'Footer',
          ),
          'layout' => 
          array (
            'hero' => 
            array (
              'stylesheets' => 
              array (
                'all' => 
                array (
                  0 => 'css/layouts/hero/ohm-hero.layout.css',
                ),
              ),
            ),
          ),
          'settings' => 
          array (
            'toggle_logo' => '1',
            'toggle_name' => '1',
            'toggle_slogan' => '1',
            'toggle_node_user_picture' => '1',
            'toggle_comment_user_picture' => '1',
            'toggle_comment_user_verification' => '1',
            'toggle_favicon' => '1',
            'toggle_main_menu' => '1',
            'toggle_secondary_menu' => '1',
            'omega_toggle_front_page_content' => '1',
            'default_logo' => '1',
            'logo_path' => '',
            'logo_upload' => '',
            'default_favicon' => '1',
            'favicon_path' => '',
            'favicon_upload' => '',
            'omega_toggle_extension_assets' => '1',
            'omega_libraries' => 
            array (
              'selectivizr' => 
              array (
                'status' => '0',
              ),
              'respond' => 
              array (
                'status' => '0',
              ),
              'pie' => 
              array (
                'status' => '0',
              ),
              'html5shiv' => 
              array (
                'status' => '1',
              ),
              'messages' => 
              array (
                'status' => '1',
              ),
            ),
            'omega_toggle_extension_compatibility' => '1',
            'omega_conditional_classes_html' => '1',
            'omega_apple_touch' => '1',
            'omega_cleartype' => '1',
            'omega_handheld_friendly' => '1',
            'omega_mobile_optimized' => '1',
            'omega_viewport' => '1',
            'omega_viewport_user_scaleable' => '1',
            'omega_chrome_edge' => '1',
            'omega_chrome_popup' => '0',
            'omega_chrome_notice' => '0',
            'omega_toggle_extension_layouts' => '1',
            'omega_layout' => 'ohm-hero',
            'omega_toggle_extension_development' => '1',
            'omega_rebuild_theme_registry' => '0',
            'omega_rebuild_aggregates' => '0',
            'omega_browser_width_indicator' => '0',
            'omega_livereload' => '1',
            'omega_livereload_script' => 'http://localhost:35729/livereload.js',
            'omega_livereload_host' => 'localhost',
            'omega_livereload_port' => '35729',
            'omega_demo_regions' => '1',
            'omega_demo_regions_list' => 
            array (
              'navigation' => 'navigation',
              'header' => 'header',
              'hero' => 'hero',
              'highlighted' => 'highlighted',
              'help' => 'help',
              'content' => 'content',
              'sidebar_first' => 'sidebar_first',
              'sidebar_second' => 'sidebar_second',
              'footer' => 'footer',
            ),
          ),
          'version' => '7.x-4.4',
          'project' => 'omega',
          'datestamp' => '1437473042',
        ),
        'project' => 'omega',
        'version' => '7.x-4.4',
      ),
    ),
  ),
  'profiles' => 
  array (
    'minimal' => 
    array (
      'modules' => 
      array (
      ),
      'themes' => 
      array (
      ),
    ),
    'cu_site' => 
    array (
      'modules' => 
      array (
        'site_sample_variables' => 
        array (
          'filename' => '/var/aegir/platforms/cu_platform-2.50.1/profiles/cu_site/modules/site/site_sample_variables/site_sample_variables.module',
          'basename' => 'site_sample_variables.module',
          'name' => 'site_sample_variables',
          'info' => 
          array (
            'name' => 'Variables',
            'description' => 'Default strongarm variables for sample Creighton site',
            'core' => '7.x',
            'package' => 'Site',
            'php' => '5.2.4',
            'version' => '7.x-1.0',
            'project' => 'site_sample_variables',
            'dependencies' => 
            array (
              0 => 'ctools',
              1 => 'strongarm',
            ),
            'features' => 
            array (
              'ctools' => 
              array (
                0 => 'strongarm:strongarm:1',
              ),
              'features_api' => 
              array (
                0 => 'api:1',
              ),
              'variable' => 
              array (
                0 => 'site_name',
              ),
            ),
          ),
          'schema_version' => 0,
          'project' => 'site_sample_variables',
          'version' => '7.x-1.0',
        ),
      ),
      'themes' => 
      array (
      ),
    ),
    'standard' => 
    array (
      'modules' => 
      array (
      ),
      'themes' => 
      array (
      ),
    ),
  ),
);