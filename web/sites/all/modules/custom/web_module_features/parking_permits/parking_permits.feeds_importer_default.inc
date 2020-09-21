<?php
/**
 * @file
 * parking_permits.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function parking_permits_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'permit_importer_v1';
  $feeds_importer->config = array(
    'name' => 'permit importer v1',
    'description' => 'permit importer version 1',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'PERMITTITLE',
            'target' => 'title',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'NETID',
            'target' => 'user_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'NETID',
            'target' => 'field_netid_ref:label',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'PERMIT_YEAR',
            'target' => 'field_permit_year_tax',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'PERMIT_TYPENO',
            'target' => 'field_permit_holder_type_tax',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'PERMIT_GROUPNO',
            'target' => 'field_permit_holder_category_tax',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'PERMITNBR1',
            'target' => 'field_sticker_num_1',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'AUTOTITLE1',
            'target' => 'field_sticker_to_vehicle_1_er:label',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'PERMITNBR2',
            'target' => 'field_sticker_num_2',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'AUTOTITLE2',
            'target' => 'field_sticker_to_vehicle_2_er:label',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'PERMITNBR3',
            'target' => 'field_sticker_num_3',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'AUTOTITLE3',
            'target' => 'field_sticker_to_vehicle_3_er:label',
            'unique' => FALSE,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'MAIL_DATE',
            'target' => 'field_mail_date:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '1',
        'update_non_existent' => 'delete',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'permit2',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['permit_importer_v1'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'rate_table_importer';
  $feeds_importer->config = array(
    'name' => 'Rate table',
    'description' => 'Rate table importer',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'PERMIT_YEAR',
            'target' => 'field_permit_year_frct',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'PERSON_TYPE',
            'target' => 'field_person_type_frct',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'FT_PT',
            'target' => 'field_ft_pt_frct',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'PAY_CYCLE',
            'target' => 'field_pay_cycle_frct',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'LAST_APPL_DATE',
            'target' => 'field_last_appl_date_frct:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'FIRST_PYMT_DATE',
            'target' => 'field_first_pymt_date_frct:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'TOTAL_AMT',
            'target' => 'field_total_amt_frct',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'DEDUCTIONS',
            'target' => 'field_deductions_frct',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'ADD_VEH_AMT',
            'target' => 'field_add_veh_amt_frct',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'fee_rate_ct',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['rate_table_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'testasdf';
  $feeds_importer->config = array(
    'name' => 'User Importer',
    'description' => 'Parking Permits user importer',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(
          3 => 0,
          6 => 0,
          5 => 0,
          4 => 0,
          7 => 0,
          8 => 0,
        ),
        'status' => '1',
        'defuse_mail' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'NETID',
            'target' => 'name',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'EMAIL',
            'target' => 'mail',
            'unique' => 1,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'NETID',
            'target' => 'field_blueid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'DELVRY_PT',
            'target' => 'field_delvry_pt',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'FULL_NAME',
            'target' => 'field_full_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'ORG',
            'target' => 'field_org',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'ADDRESS_LINE1',
            'target' => 'field_address_line1',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'ADDRESS_LINE2',
            'target' => 'field_address_line2',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'ADDRESS_LINE3',
            'target' => 'field_address_line3',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'DELVRY_PT',
            'target' => 'field_delvry_pt',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'FULL_NAME',
            'target' => 'field_full_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'ORG',
            'target' => 'field_org',
            'unique' => FALSE,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'ADDRESS_LINE1',
            'target' => 'field_address_line1',
            'unique' => FALSE,
            'language' => 'und',
          ),
          13 => array(
            'source' => 'ADDRESS_LINE2',
            'target' => 'field_address_line2',
            'unique' => FALSE,
            'language' => 'und',
          ),
          14 => array(
            'source' => 'ADDRESS_LINE3',
            'target' => 'field_address_line3',
            'unique' => FALSE,
            'language' => 'und',
          ),
          15 => array(
            'source' => 'CITY',
            'target' => 'field_city',
            'unique' => FALSE,
            'language' => 'und',
          ),
          16 => array(
            'source' => 'STATE',
            'target' => 'field_state',
            'unique' => FALSE,
            'language' => 'und',
          ),
          17 => array(
            'source' => 'ZIP',
            'target' => 'field_zip',
            'unique' => FALSE,
            'language' => 'und',
          ),
          18 => array(
            'source' => 'BLDG',
            'target' => 'field_bldg',
            'unique' => FALSE,
            'language' => 'und',
          ),
          19 => array(
            'source' => 'MAIL_DROP',
            'target' => 'field_mail_drop',
            'unique' => FALSE,
            'language' => 'und',
          ),
          20 => array(
            'source' => 'HRMS_REFERENCE',
            'target' => 'field_hrms_reference',
            'unique' => FALSE,
            'language' => 'und',
          ),
          21 => array(
            'source' => 'HRMS_DATE',
            'target' => 'field_hrms_date:start',
            'unique' => FALSE,
            'language' => 'und',
          ),
          22 => array(
            'source' => 'HOME_PHONE',
            'target' => 'field_home_phone',
            'unique' => FALSE,
            'language' => 'und',
          ),
          23 => array(
            'source' => 'CELL_PHONE',
            'target' => 'field_cell_phone',
            'unique' => FALSE,
            'language' => 'und',
          ),
          24 => array(
            'source' => 'RCOMMENT',
            'target' => 'field_rcomment',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '1',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'user',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['testasdf'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'vehicle_importer_one';
  $feeds_importer->config = array(
    'name' => 'vehicle importer one',
    'description' => 'vehicle importer one - primary vehicles',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'AUTOTITLE1',
            'target' => 'title',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'NETID',
            'target' => 'user_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'LICNO_1',
            'target' => 'field_vehlicnumber2',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'LICSTATE_1',
            'target' => 'field_vehlicstate2',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'YEAR_1',
            'target' => 'field_vehyear',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'MAKENO_1',
            'target' => 'field_vehmake_tax',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'MODEL_1',
            'target' => 'field_vehmodel',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'STYLENO_1',
            'target' => 'field_vehstyle_tax',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'COLORNO_1',
            'target' => 'field_vehcolor_tax',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'NETID',
            'target' => 'field_netid_ref:label',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '1',
        'update_non_existent' => 'delete',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'automobile',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['vehicle_importer_one'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'vehicle_importer_three';
  $feeds_importer->config = array(
    'name' => 'vehicle importer three',
    'description' => 'vehicle importer three - tertiary vehicles',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'AUTOTITLE3',
            'target' => 'title',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'NETID',
            'target' => 'user_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'LICNO_3',
            'target' => 'field_vehlicnumber2',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'LICSTATE_3',
            'target' => 'field_vehlicstate2',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'YEAR_3',
            'target' => 'field_vehyear',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'MAKENO_3',
            'target' => 'field_vehmake_tax',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'MODEL_3',
            'target' => 'field_vehmodel',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'STYLENO_3',
            'target' => 'field_vehstyle_tax',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'COLORNO_3',
            'target' => 'field_vehcolor_tax',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'NETID',
            'target' => 'field_netid_ref:label',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '1',
        'update_non_existent' => 'delete',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'automobile',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['vehicle_importer_three'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'vehicle_importer_two';
  $feeds_importer->config = array(
    'name' => 'vehicle importer two',
    'description' => 'vehicle importer two - secondary vehicles',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'AUTOTITLE2',
            'target' => 'title',
            'unique' => 1,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'NETID',
            'target' => 'user_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'LICNO_2',
            'target' => 'field_vehlicnumber2',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'LICSTATE_2',
            'target' => 'field_vehlicstate2',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'YEAR_2',
            'target' => 'field_vehyear',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'MAKENO_2',
            'target' => 'field_vehmake_tax',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'MODEL_2',
            'target' => 'field_vehmodel',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'STYLENO_2',
            'target' => 'field_vehstyle_tax',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'COLORNO_2',
            'target' => 'field_vehcolor_tax',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'NETID',
            'target' => 'field_netid_ref:label',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '1',
        'update_non_existent' => 'delete',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'automobile',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['vehicle_importer_two'] = $feeds_importer;

  return $export;
}
