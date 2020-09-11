<?php

/**
 * @file
 * Page located at /admin/config/content/remote_viewer.
 */

/**
 * Function remote_viewer_settings_page Implements hook_settings_page.
 */
function remote_viewer_settings_page() {

  $remote_db_value = 'default';

  $page['remote_viewer'] = array(
    '#type' => 'fieldset',
    '#title' => t('From file settings.php - Remote DB'),
    '#tree' => TRUE,
  );

  $page['remote_viewer'][$remote_db_value] = array(
    '#markup' => t(
        "<h3>Contents of databases variable in settings.php file</h3>
        <p>setttings.php:</p>"
    ),
  );

  // Display $databases in settings.php.
  global $databases;

  $remote_dbs = array_keys($databases);

  foreach ($remote_dbs as $remote_db_value) {
    $remote_db = $databases[$remote_db_value]['default'];

    $page['remote_viewer'][$remote_db_value] = array(
      '#markup' => t(
          "<p>                          
           databases['@dbKey']['default'] = array(   <br />
           'server' => '@server',                <br />
           'driver' => '@driver',                <br />
           'database' => '@database',            <br />
           'username' => '@username',            <br />
           'password' => '@password',            <br />
           'host' => '@host',                    <br />
           'port' => '@port',                    <br />
        );                                        <br />
          </p>",
          array(
            '@dbKey'      => $remote_db_value,
            '@server'     => $remote_db['server'],
            '@driver'     => $remote_db['driver'],
            '@database'   => $remote_db['database'],
            '@username'   => $remote_db['username'],
            '@password'   => $remote_db['password'],
            '@host'       => $remote_db['host'],
            '@port'       => $remote_db['port'],
          )
      ),
    );
  }
  return $page;
}
