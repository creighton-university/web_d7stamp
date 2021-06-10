<?php

/**
 * @file
 * D7 Creighton site-specific configuration file.
 */
$databases['default']['default'] = array(
  'driver' => 'mysql',
  'database' => $_ENV['DB_NAME'],
  'username' => $_ENV['DB_USER'],
  'password' => $_ENV['DB_PASSWORD'],
  'host' => $_ENV['DB_HOST'],
  'port' => $_ENV['DB_PORT']
);

/**
 * hub connection, this can be the source of the /programs matrix breaking
 * check that legacy-creighton-hub database connection info matches below
 * if they don't match change the values below to match pantheons
 */
$databases['hub']['default'] = array(
  'server' => 'live-legacy-creighton-hub.pantheonsite.io',
  'driver' => 'mysql',
  'database' => 'pantheon',
  'username' => 'pantheon',
  'password' => '235f844fd9ce474a82fd5d37d47845e5',
  'host' => 'dbserver.live.8f16d3f9-7730-4512-a10c-11663041c508.drush.in',
  'port' => '11332',
  'prefix' => '',
);

if(file_exists('sites/default/files/private/secrets.json')){
  $json_text = file_get_contents('sites/default/files/private/secrets.json');
  $secrets = json_decode($json_text, TRUE);
  $hub_db_creds = parse_url($secrets['hub_db_url']);

  $databases['hub']['default'] = array(
    'server' => 'live-legacy-creighton-hub.pantheonsite.io',
    'driver' => 'mysql',
    'database' => 'pantheon',
    'username' => $hub_db_creds['user'],
    'password' => $hub_db_creds['pass'],
    'host' => $hub_db_creds['host'],
    'port' => $hub_db_creds['port'],
    'prefix' => '',
  );
}


$drupal_hash_salt = $_ENV['DRUPAL_HASH_SALT'];
