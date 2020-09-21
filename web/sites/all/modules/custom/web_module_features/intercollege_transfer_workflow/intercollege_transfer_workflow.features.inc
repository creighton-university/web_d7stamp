<?php
/**
 * @file
 * intercollege_transfer_workflow.features.inc
 */

/**
 * Implements hook_default_Workflow().
 */
function intercollege_transfer_workflow_default_Workflow() {
  $workflows = array();

  // Exported workflow: 'intercollege_transfer'
  $workflows['intercollege_transfer'] = entity_import('Workflow', '{
    "name" : "intercollege_transfer",
    "tab_roles" : [],
    "options" : [],
    "states" : {
      "(creation)" : {"weight":"-50","sysid":"1","state":"(creation)","status":"1","name":"(creation)"},
      "accepted" : {"weight":"-16","sysid":"0","state":"Accepted","status":"1","name":"accepted"},
      "business_dean" : {"weight":"-11","sysid":"0","state":"Awaiting Business Dean Approval","status":"0","name":"business_dean"},
      "ccas_dean" : {"weight":"-8","sysid":"0","state":"Awaiting CCAS Dean Approval","status":"0","name":"ccas_dean"},
      "cps_dean" : {"weight":"-10","sysid":"0","state":"Awaiting CPS Dean Approval","status":"0","name":"cps_dean"},
      "creighton_review" : {"weight":"-19","sysid":"0","state":"Creighton Review","status":"1","name":"creighton_review"},
      "current_dean" : {"weight":"-18","sysid":"0","state":"Current Dean","status":"1","name":"current_dean"},
      "deferred" : {"weight":"-15","sysid":"0","state":"Deferred","status":"1","name":"deferred"},
      "denied" : {"weight":"-14","sysid":"0","state":"Denied","status":"1","name":"denied"},
      "future_dean" : {"weight":"-17","sysid":"0","state":"Future Dean","status":"1","name":"future_dean"},
      "nursing_dean" : {"weight":"-9","sysid":"0","state":"Awaiting Nursing Dean Approval","status":"0","name":"nursing_dean"},
      "spahp_dean" : {"weight":"-12","sysid":"0","state":"Awaiting SPAHP Dean Approval","status":"0","name":"spahp_dean"},
      "withdrawn" : {"weight":"-13","sysid":"0","state":"Withdrawn","status":"1","name":"withdrawn"}
    },
    "transitions" : {
      "_creation_to_accepted" : {"roles":{"3":3,"6":6},"name":"_creation_to_accepted","label":"","rdf_mapping":[],"start_state":"(creation)","end_state":"accepted"},
      "_creation_to_creighton_review" : {"roles":{"-1":-1,"2":2,"3":3,"6":6},"name":"_creation_to_creighton_review","label":"","rdf_mapping":[],"start_state":"(creation)","end_state":"creighton_review"},
      "_creation_to_current_dean" : {"roles":{"3":3,"6":6},"name":"_creation_to_current_dean","label":"","rdf_mapping":[],"start_state":"(creation)","end_state":"current_dean"},
      "_creation_to_deferred" : {"roles":{"3":3,"6":6},"name":"_creation_to_deferred","label":"","rdf_mapping":[],"start_state":"(creation)","end_state":"deferred"},
      "_creation_to_denied" : {"roles":{"3":3,"6":6},"name":"_creation_to_denied","label":"","rdf_mapping":[],"start_state":"(creation)","end_state":"denied"},
      "_creation_to_future_dean" : {"roles":{"3":3,"6":6},"name":"_creation_to_future_dean","label":"","rdf_mapping":[],"start_state":"(creation)","end_state":"future_dean"},
      "_creation_to_withdrawn" : {"roles":{"3":3,"6":6},"name":"_creation_to_withdrawn","label":"","rdf_mapping":[],"start_state":"(creation)","end_state":"withdrawn"},
      "accepted_to_accepted" : {"roles":{"-1":-1,"2":2,"3":3,"6":6,"5":5,"4":4},"name":"accepted_to_accepted","label":"","rdf_mapping":[],"start_state":"accepted","end_state":"accepted"},
      "accepted_to_creighton_review" : {"roles":{"3":3,"6":6},"name":"accepted_to_creighton_review","label":"","rdf_mapping":[],"start_state":"accepted","end_state":"creighton_review"},
      "accepted_to_current_dean" : {"roles":{"3":3,"6":6},"name":"accepted_to_current_dean","label":"","rdf_mapping":[],"start_state":"accepted","end_state":"current_dean"},
      "accepted_to_deferred" : {"roles":{"3":3,"6":6},"name":"accepted_to_deferred","label":"","rdf_mapping":[],"start_state":"accepted","end_state":"deferred"},
      "accepted_to_denied" : {"roles":{"3":3,"6":6},"name":"accepted_to_denied","label":"","rdf_mapping":[],"start_state":"accepted","end_state":"denied"},
      "accepted_to_future_dean" : {"roles":{"3":3,"6":6},"name":"accepted_to_future_dean","label":"","rdf_mapping":[],"start_state":"accepted","end_state":"future_dean"},
      "accepted_to_withdrawn" : {"roles":{"3":3,"6":6},"name":"accepted_to_withdrawn","label":"","rdf_mapping":[],"start_state":"accepted","end_state":"withdrawn"},
      "creighton_review_to_accepted" : {"roles":{"3":3,"6":6},"name":"creighton_review_to_accepted","label":"","rdf_mapping":[],"start_state":"creighton_review","end_state":"accepted"},
      "creighton_review_to_creighton_review" : {"roles":{"-1":-1,"2":2,"3":3,"6":6,"5":5,"4":4},"name":"creighton_review_to_creighton_review","label":"","rdf_mapping":[],"start_state":"creighton_review","end_state":"creighton_review"},
      "creighton_review_to_current_dean" : {"roles":{"3":3,"6":6},"name":"creighton_review_to_current_dean","label":"","rdf_mapping":[],"start_state":"creighton_review","end_state":"current_dean"},
      "creighton_review_to_deferred" : {"roles":{"3":3,"6":6},"name":"creighton_review_to_deferred","label":"","rdf_mapping":[],"start_state":"creighton_review","end_state":"deferred"},
      "creighton_review_to_denied" : {"roles":{"3":3,"6":6},"name":"creighton_review_to_denied","label":"","rdf_mapping":[],"start_state":"creighton_review","end_state":"denied"},
      "creighton_review_to_future_dean" : {"roles":{"3":3,"6":6},"name":"creighton_review_to_future_dean","label":"","rdf_mapping":[],"start_state":"creighton_review","end_state":"future_dean"},
      "creighton_review_to_withdrawn" : {"roles":{"3":3,"6":6},"name":"creighton_review_to_withdrawn","label":"","rdf_mapping":[],"start_state":"creighton_review","end_state":"withdrawn"},
      "current_dean_to_accepted" : {"roles":{"3":3,"6":6},"name":"current_dean_to_accepted","label":"","rdf_mapping":[],"start_state":"current_dean","end_state":"accepted"},
      "current_dean_to_creighton_review" : {"roles":{"3":3,"6":6},"name":"current_dean_to_creighton_review","label":"","rdf_mapping":[],"start_state":"current_dean","end_state":"creighton_review"},
      "current_dean_to_current_dean" : {"roles":{"-1":-1,"2":2,"3":3,"6":6,"5":5,"4":4},"name":"current_dean_to_current_dean","label":"","rdf_mapping":[],"start_state":"current_dean","end_state":"current_dean"},
      "current_dean_to_deferred" : {"roles":{"3":3,"6":6},"name":"current_dean_to_deferred","label":"","rdf_mapping":[],"start_state":"current_dean","end_state":"deferred"},
      "current_dean_to_denied" : {"roles":{"3":3,"6":6},"name":"current_dean_to_denied","label":"","rdf_mapping":[],"start_state":"current_dean","end_state":"denied"},
      "current_dean_to_future_dean" : {"roles":{"3":3,"6":6},"name":"current_dean_to_future_dean","label":"","rdf_mapping":[],"start_state":"current_dean","end_state":"future_dean"},
      "current_dean_to_withdrawn" : {"roles":{"3":3,"6":6},"name":"current_dean_to_withdrawn","label":"","rdf_mapping":[],"start_state":"current_dean","end_state":"withdrawn"},
      "deferred_to_accepted" : {"roles":{"3":3,"6":6},"name":"deferred_to_accepted","label":"","rdf_mapping":[],"start_state":"deferred","end_state":"accepted"},
      "deferred_to_creighton_review" : {"roles":{"3":3,"6":6},"name":"deferred_to_creighton_review","label":"","rdf_mapping":[],"start_state":"deferred","end_state":"creighton_review"},
      "deferred_to_current_dean" : {"roles":{"3":3,"6":6},"name":"deferred_to_current_dean","label":"","rdf_mapping":[],"start_state":"deferred","end_state":"current_dean"},
      "deferred_to_deferred" : {"roles":{"-1":-1,"2":2,"3":3,"6":6,"5":5,"4":4},"name":"deferred_to_deferred","label":"","rdf_mapping":[],"start_state":"deferred","end_state":"deferred"},
      "deferred_to_denied" : {"roles":{"3":3,"6":6},"name":"deferred_to_denied","label":"","rdf_mapping":[],"start_state":"deferred","end_state":"denied"},
      "deferred_to_future_dean" : {"roles":{"3":3,"6":6},"name":"deferred_to_future_dean","label":"","rdf_mapping":[],"start_state":"deferred","end_state":"future_dean"},
      "deferred_to_withdrawn" : {"roles":{"3":3,"6":6},"name":"deferred_to_withdrawn","label":"","rdf_mapping":[],"start_state":"deferred","end_state":"withdrawn"},
      "denied_to_accepted" : {"roles":{"3":3,"6":6},"name":"denied_to_accepted","label":"","rdf_mapping":[],"start_state":"denied","end_state":"accepted"},
      "denied_to_creighton_review" : {"roles":{"3":3,"6":6},"name":"denied_to_creighton_review","label":"","rdf_mapping":[],"start_state":"denied","end_state":"creighton_review"},
      "denied_to_current_dean" : {"roles":{"3":3,"6":6},"name":"denied_to_current_dean","label":"","rdf_mapping":[],"start_state":"denied","end_state":"current_dean"},
      "denied_to_deferred" : {"roles":{"3":3,"6":6},"name":"denied_to_deferred","label":"","rdf_mapping":[],"start_state":"denied","end_state":"deferred"},
      "denied_to_denied" : {"roles":{"-1":-1,"2":2,"3":3,"6":6,"5":5,"4":4},"name":"denied_to_denied","label":"","rdf_mapping":[],"start_state":"denied","end_state":"denied"},
      "denied_to_future_dean" : {"roles":{"3":3,"6":6},"name":"denied_to_future_dean","label":"","rdf_mapping":[],"start_state":"denied","end_state":"future_dean"},
      "denied_to_withdrawn" : {"roles":{"3":3,"6":6},"name":"denied_to_withdrawn","label":"","rdf_mapping":[],"start_state":"denied","end_state":"withdrawn"},
      "future_dean_to_accepted" : {"roles":{"3":3,"6":6},"name":"future_dean_to_accepted","label":"","rdf_mapping":[],"start_state":"future_dean","end_state":"accepted"},
      "future_dean_to_creighton_review" : {"roles":{"3":3,"6":6},"name":"future_dean_to_creighton_review","label":"","rdf_mapping":[],"start_state":"future_dean","end_state":"creighton_review"},
      "future_dean_to_current_dean" : {"roles":{"3":3,"6":6},"name":"future_dean_to_current_dean","label":"","rdf_mapping":[],"start_state":"future_dean","end_state":"current_dean"},
      "future_dean_to_deferred" : {"roles":{"3":3,"6":6},"name":"future_dean_to_deferred","label":"","rdf_mapping":[],"start_state":"future_dean","end_state":"deferred"},
      "future_dean_to_denied" : {"roles":{"3":3,"6":6},"name":"future_dean_to_denied","label":"","rdf_mapping":[],"start_state":"future_dean","end_state":"denied"},
      "future_dean_to_future_dean" : {"roles":{"-1":-1,"2":2,"3":3,"6":6,"5":5,"4":4},"name":"future_dean_to_future_dean","label":"","rdf_mapping":[],"start_state":"future_dean","end_state":"future_dean"},
      "future_dean_to_withdrawn" : {"roles":{"3":3,"6":6},"name":"future_dean_to_withdrawn","label":"","rdf_mapping":[],"start_state":"future_dean","end_state":"withdrawn"},
      "withdrawn_to_accepted" : {"roles":{"3":3,"6":6},"name":"withdrawn_to_accepted","label":"","rdf_mapping":[],"start_state":"withdrawn","end_state":"accepted"},
      "withdrawn_to_creighton_review" : {"roles":{"-1":-1,"3":3,"6":6},"name":"withdrawn_to_creighton_review","label":"","rdf_mapping":[],"start_state":"withdrawn","end_state":"creighton_review"},
      "withdrawn_to_current_dean" : {"roles":{"3":3,"6":6},"name":"withdrawn_to_current_dean","label":"","rdf_mapping":[],"start_state":"withdrawn","end_state":"current_dean"},
      "withdrawn_to_deferred" : {"roles":{"3":3,"6":6},"name":"withdrawn_to_deferred","label":"","rdf_mapping":[],"start_state":"withdrawn","end_state":"deferred"},
      "withdrawn_to_denied" : {"roles":{"3":3,"6":6},"name":"withdrawn_to_denied","label":"","rdf_mapping":[],"start_state":"withdrawn","end_state":"denied"},
      "withdrawn_to_future_dean" : {"roles":{"3":3,"6":6},"name":"withdrawn_to_future_dean","label":"","rdf_mapping":[],"start_state":"withdrawn","end_state":"future_dean"},
      "withdrawn_to_withdrawn" : {"roles":{"-1":-1,"2":2,"3":3,"6":6,"5":5,"4":4},"name":"withdrawn_to_withdrawn","label":"","rdf_mapping":[],"start_state":"withdrawn","end_state":"withdrawn"}
    },
    "label" : "Intercollege Transfer",
    "typeMap" : [],
    "rdf_mapping" : [],
    "system_roles" : {
      "-1" : "(author)",
      "2" : "authenticated user",
      "3" : "administrator",
      "6" : "manager",
      "5" : "author",
      "4" : "advanced author"
    }
  }');

  return $workflows;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function intercollege_transfer_workflow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "panels" && $api == "layouts") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function intercollege_transfer_workflow_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function intercollege_transfer_workflow_node_info() {
  $items = array(
    'intercollege_transfer' => array(
      'name' => t('Intercollege Transfer'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('site:current-user:name] - [node:created]'),
      'help' => t('You will be asked to confirm your information before submitting.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_wsclient_service().
 */
function intercollege_transfer_workflow_default_wsclient_service() {
  $items = array();
  $items['banner_service_pull'] = entity_import('wsclient_service', '{
    "settings" : [],
    "operations" : { "get_student_info" : {
        "url" : "",
        "label" : "Get Student Info",
        "parameter" : { "netID" : { "type" : "text" } },
        "name" : "get_student_info",
        "result" : { "type" : "banner_student_info", "label" : "student_info_result" }
      }
    },
    "datatypes" : { "banner_student_info" : {
        "label" : "Banner Student Info",
        "property info" : {
          "netID" : { "type" : "text", "label" : "" },
          "firstName" : { "type" : "text", "label" : "" },
          "lastName" : { "type" : "text", "label" : "" },
          "country" : { "type" : "text", "label" : "" },
          "address1" : { "type" : "text", "label" : "" },
          "address2" : { "type" : "text", "label" : "" },
          "city" : { "type" : "text", "label" : "" },
          "state" : { "type" : "text", "label" : "" },
          "zip" : { "type" : "text", "label" : "" },
          "currentCollege" : { "type" : "text", "label" : "" },
          "currentClass" : { "type" : "text", "label" : "" },
          "currentAdvisor" : { "type" : "text", "label" : "" },
          "currentGPA" : { "type" : "text", "label" : "" },
          "currentMajor" : { "type" : "text", "label" : "" }
        },
        "name" : "banner_student_info"
      }
    },
    "global_parameters" : [],
    "name" : "banner_service_pull",
    "label" : "Banner Service Pull",
    "url" : "http:\\/\\/webscripts.creighton.edu\\/ws\\/student-banner-academic-lookup\\/",
    "type" : "rest",
    "authentication" : null,
    "rdf_mapping" : []
  }');
  return $items;
}
