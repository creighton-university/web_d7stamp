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

//bandaid fix for the hub credentials changing periodically on pantheon :)
if(file_exists('sites/default/files/private/secrets.json')){
  //this file is updated by a periodic workflow on web_d7stamp github actions
  //the workflow is called update_hub_creds (found in .github/workflows/update_hub_creds.yml)
  $json_text = file_get_contents('sites/default/files/private/secrets.json');
  $secrets = json_decode($json_text, TRUE);
  if(isset($secrets['hub_db_url'])){
    //the credentials for hub are stored as a url
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
}


$drupal_hash_salt = $_ENV['DRUPAL_HASH_SALT'];

/**
 * @file
 * 
 * @var Array $varyHeaders
 * 
 * @var Array $environments
 * 
 */

$varyString = implode(', ', $varyHeaders);
header("Vary: ${varyString}", FALSE);
if (in_array($_ENV['PANTHEON_ENVIRONMENT'], $environments) && (isset($_SERVER['HTTP_X_MASKED_HOST']))) { 
  $base_url = "https://" . $_SERVER['HTTP_X_MASKED_HOST'];
  if (isset($_SERVER['HTTP_X_MASKED_PATH'])) {
    $base_url = $base_url . $_SERVER['HTTP_MASKED_PATH'];
  }
}
