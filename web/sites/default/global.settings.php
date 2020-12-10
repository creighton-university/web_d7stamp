<?php

/**
 * @file
 * D7 Creighton site-specific configuration file.
 */
$databases['default']['default'] = array(
  'driver' => 'mysql',
  'database' => $_ENV['DB_NAME'],
  'username' => $_ENV['DB_NAME'],
  'password' => $_ENV['DB_PASSWORD'],
  'host' => $_ENV['DB_HOST'],
  'port' => $_ENV['DB_PORT']
);


$databases['hub']['default'] = array(
  'driver' => 'mysql',
  'database' => 'pantheon',
  'username' => 'pantheon',
  'password' => '1ddad38f53454188bf844b60692c1060',
  'host' => 'dbserver.dev.417e48f5-7e72-433e-a021-17d2da467dad.drush.in',
  'port' => '11386'
);

$drupal_hash_salt = $_ENV['DRUPAL_HASH_SALT'];
