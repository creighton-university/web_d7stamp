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


$databases['hub']['default'] = array(
  'server' => 'live-legacy-creighton-hub.pantheonsite.io',
  'driver' => 'mysql',
  'database' => 'pantheon',
  'username' => 'pantheon',
  'password' => '11735cbf939d48a0b273a21b089802a3',
  'host' => 'dbserver.live.8f16d3f9-7730-4512-a10c-11663041c508.drush.in',
  'port' => '13065',
  'prefix' => '',
);

$drupal_hash_salt = $_ENV['DRUPAL_HASH_SALT'];

@var Array $varyHeaders

@var Array $environments

$varyString = implode(', ', $varyHeaders);
header("Vary: ${varyString}", FALSE);
if (in_array($_ENV['PANTHEON_ENVIRONMENT'], $environments) && (isset($_SERVER['HTTP_X_MASKED_HOST']))) { 
  $base_url = "https://" . $_SERVER['HTTP_X_MASKED_HOST'];
  if (isset($_SERVER['HTTP_X_MASKED_PATH'])) {
    $base_url = $base_url . $_SERVER['HTTP_MASKED_PATH'];
  }
}
