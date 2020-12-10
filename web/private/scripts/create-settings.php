<?php

/**
 * @file
 * creates
 */
$site = $_ENV['PANTHEON_SITE_NAME'];
echo "Copy default.settings.php to settings.php\n";
passthru("cp ./sites/default/default.settings.php ./sites/default/settings.php");
echo "install drupal\n";
passthru("drush site-install cu_site --account-name=cu-admin --account-pass=2FCyT##YRh8s --site-name='$site' -y");
