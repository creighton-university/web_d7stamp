#!/bin/bash
set -e

SITE=$1
ENV=$2
#get all the newest aliases from pantheon
terminus alias --all
#set the correct file paths
drush @pantheon.$SITE.$ENV vset file_public_path sites/default/files
drush @pantheon.$SITE.$ENV vset file_public_path sites/default/files/private
drush @pantheon.$SITE.$ENV vset file_public_path sites/default/files/private/temp
drush @pantheon.$SITE.$ENV cr
