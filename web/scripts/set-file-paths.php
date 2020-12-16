<?php

echo "set public\n";
passthru("drush vset file_public_path sites/default/files");
echo "set private\n";
passthru("drush vset file_private_path sites/default/files/private");
echo "set temp\n";
passthru("drush vset file_temporary_path sites/default/files/temp");
echo "rebuild cache\n";
passthru("drush cr");
