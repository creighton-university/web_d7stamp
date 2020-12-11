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
  'password' => '3fb722c59e484edfb2096ebd7de775cc',
  'host' => 'dbserver.dev.a7d64488-2ce4-40a1-ac7e-6d677f5cdf8c.drush.in',
  'port' => '14145',
  'prefix' => '',
);

$drupal_hash_salt = $_ENV['DRUPAL_HASH_SALT'];
