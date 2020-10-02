<?php
/**
 * @file
 * parking_permits.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function parking_permits_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function parking_permits_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function parking_permits_node_info() {
  $items = array(
    'automobile' => array(
      'name' => t('Automobile'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'fee_rate_ct' => array(
      'name' => t('Fee Rate CT'),
      'base' => 'node_content',
      'description' => t('Fee rate content type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'permit2' => array(
      'name' => t('Parking Permit'),
      'base' => 'node_content',
      'description' => t('Permit content type (version 2)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_wsclient_service().
 */
function parking_permits_default_wsclient_service() {
  $items = array();
  $items['hr_person_parking_permit'] = entity_import('wsclient_service', '{
    "settings" : [],
    "operations" : { "get_employee_attributes" : {
        "url" : "",
        "label" : "Get employee attributes",
        "parameter" : { "netID" : { "type" : "text" } },
        "name" : "get_employee_attributes",
        "result" : { "type" : "employe_attributes", "label" : "Employee attributes" }
      }
    },
    "datatypes" : { "employe_attributes" : {
        "label" : "Employee attributes",
        "property info" : {
          "FIRST_NAME" : { "type" : "text", "label" : "First Name" },
          "LAST_NAME" : { "type" : "text", "label" : "Last Name" },
          "PYROLL" : { "type" : "text", "label" : "Payroll" },
          "FT_PT" : { "type" : "text", "label" : "Full Time\\/Part Time" },
          "PERSON_TYPE" : { "type" : "text", "label" : "Person Type" },
          "EMPLOYEE_NBR" : { "type" : "text", "label" : "Employee Number" },
          "MIDDLE_NAME" : { "type" : "text", "label" : "Middle Name" },
          "LOC_DESCR" : { "type" : "text", "label" : "Location" },
          "ORG_NAME" : { "type" : "text", "label" : "Department" }
        },
        "name" : "employe_attributes"
      }
    },
    "global_parameters" : [],
    "name" : "hr_person_parking_permit",
    "label" : "HR Person Parking Permit",
    "url" : "http:\\/\\/webscripts.creighton.edu\\/ws\\/hr-person-parking-permit\\/",
    "type" : "rest",
    "authentication" : null,
    "rdf_mapping" : []
  }');
  return $items;
}
