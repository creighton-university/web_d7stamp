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
  'password' => 'e9e745bc4888455b9473a65ba51e4b75',
  'host' => 'dbserver.dev.8f16d3f9-7730-4512-a10c-11663041c508.drush.in',
  'port' => '10148',
  'prefix' => '',
);

$drupal_hash_salt = $_ENV['DRUPAL_HASH_SALT'];
