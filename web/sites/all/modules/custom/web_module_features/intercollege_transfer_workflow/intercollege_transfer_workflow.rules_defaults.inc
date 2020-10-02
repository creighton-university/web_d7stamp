<?php
/**
 * @file
 * intercollege_transfer_workflow.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function intercollege_transfer_workflow_default_rules_configuration() {
  $items = array();
  $items['rules_application_decision_accepted'] = entity_import('rules_config', '{ "rules_application_decision_accepted" : {
      "LABEL" : "Application Decision - Accepted",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "ict-workflow" ],
      "REQUIRES" : [ "rules", "rules_http_client", "workflow_rules", "mimemail" ],
      "ON" : { "node_update--intercollege_transfer" : { "bundle" : "intercollege_transfer" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-application-decision" ], "value" : "accept" } }
      ],
      "DO" : [
        { "request_url" : {
            "USING" : {
              "url" : "http:\\/\\/prod-dl-api.creighton.edu\\/notification",
              "headers" : "Content-Type: application\\/x-www-form-urlencoded",
              "method" : "POST",
              "data" : "publisherKey=e5611ba6-c851-4cf3-aeb7-ebabb4e3b85b\\r\\nnetid=[node:field-netid]\\r\\ntitle=Your transfer was accepted\\r\\nmessage=Your intercollege transfer request has been accepted and forwarded to the registrars office."
            },
            "PROVIDE" : { "http_response" : { "http_response" : "HTTP data" } }
          }
        },
        { "workflowfield_field_set_state" : {
            "node" : [ "node" ],
            "field" : [ "node:field-workflow" ],
            "workflow_state" : { "value" : { "3" : "3" } },
            "workflow_comment" : "Students transfer request has been accepted."
          }
        },
        { "mimemail" : {
            "key" : [ "node:field-application-decision" ],
            "to" : "regsitrars-workflow@creighton.edu",
            "bcc" : "nickstankus@creighton.edu, EmilyTruax@creighton.edu, ChristianBurk@creighton.edu",
            "from_name" : "Inter-college Transfer Request",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "Transfer Approved: [node:field-first-name] [node:field-last-name] ([node:field-netid]) transfer to [node:field-transfer-college]",
            "body" : "[node:field-first-name] [node:field-last-name] ([node:field-netid]) request to transfer from [node:field-current-college-autofill] into [node:field-transfer-college] has been approved for the [node:field-transfer-semester-year-sem] [node:field-year].\\r\\n\\u003Cbr\\u003E\\r\\n\\u003Cbr\\u003E\\r\\nPDF Copy of Request: \\u003Ca href=\\u0022[site:url]\\/printpdf\\/cict\\/[node:nid]\\u0022\\u003E[site:url]\\/printpdf\\/cict\\/[node:nid]\\u003C\\/a\\u003E\\r\\n",
            "language" : [ "" ]
          }
        },
        { "mimemail" : {
            "key" : [ "node:field-netid" ],
            "to" : "[node:field-netid]@creighton.edu",
            "bcc" : "nickstankus@creighton.edu",
            "from_name" : "Inter-college Transfer Request",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "Transfer request: Request approved",
            "body" : "Your transfer to [node:field-transfer-college] has been approved. Your request has been routed to the Office of the Registrar for processing.",
            "plaintext" : "Your transfer to [node:field-transfer-college] has been approved. Your request has been routed to the Office of the Registrar for processing.",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_application_decision_defered'] = entity_import('rules_config', '{ "rules_application_decision_defered" : {
      "LABEL" : "Application Decision - Defered",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "ict-workflow" ],
      "REQUIRES" : [ "rules", "rules_http_client", "workflow_rules", "mimemail" ],
      "ON" : { "node_update--intercollege_transfer" : { "bundle" : "intercollege_transfer" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-application-decision" ], "value" : "defer" } }
      ],
      "DO" : [
        { "request_url" : {
            "USING" : {
              "url" : "https:\\/\\/prod-dl-api.creighton.edu\\/notification",
              "headers" : "Content-Type: application\\/x-www-form-urlencoded",
              "method" : "POST",
              "data" : "publisherKey=e5611ba6-c851-4cf3-aeb7-ebabb4e3b85b\\r\\nnetid=[node:field-netid]\\r\\ntitle=Your transfer was deferred\\r\\nmessage=Your intercollege transfer request has been deferred until [node:field-deferred-til]."
            },
            "PROVIDE" : { "http_response" : { "http_response" : "HTTP data" } }
          }
        },
        { "workflowfield_field_set_state" : {
            "node" : [ "node" ],
            "field" : [ "node:field-workflow" ],
            "workflow_state" : { "value" : { "11" : "11" } },
            "workflow_comment" : "Students transfer request has been deferred. [node:field-deferred-til]"
          }
        },
        { "mimemail" : {
            "key" : [ "node:field-application-decision" ],
            "to" : "nickstankus@creighton.edu",
            "bcc" : "nickstankus@creighton.edu, EmilyTruax@creighton.edu, ChristianBurk@creighton.edu",
            "from_name" : "Inter-college Transfer Request",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "Transfer Deferred: [node:field_first_name] [node:field_last_name] ([node:field-netid]) transfer to [node:field_transfer_college]",
            "body" : "[node:field_first_name] [node:field_last_name] ([node:field-netid]) request to transfer from [node:field_current_college_autofill] into [node:field_transfer_college] has been deferred until [node:field-deferred-til].\\r\\n\\u003Cbr\\u003E\\u003Cbr\\u003E\\r\\nPDF Copy of Request: \\u003Ca href=\\u0022[site:url]\\/printpdf\\/cict\\/[node:nid]\\u0022\\u003E[site:url]\\/printpdf\\/cict\\/[node:nid]\\u003C\\/a\\u003E",
            "language" : [ "" ]
          }
        },
        { "mimemail" : {
            "key" : [ "node:field-deferred-til" ],
            "to" : "[node:field-netid]@creighton.edu",
            "bcc" : "nickstankus@creighton.edu",
            "from_name" : "Inter-college Transfer Request",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "Transfer request: Request deferred",
            "body" : "Your request to transfer to [node:field_transfer_college] has been deferred until [node:field-deferred-til].",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_application_decision_denied'] = entity_import('rules_config', '{ "rules_application_decision_denied" : {
      "LABEL" : "Application Decision - Denied",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "ict-workflow" ],
      "REQUIRES" : [ "rules", "workflow_rules", "mimemail", "rules_http_client" ],
      "ON" : { "node_update--intercollege_transfer" : { "bundle" : "intercollege_transfer" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-application-decision" ], "value" : "deny" } }
      ],
      "DO" : [
        { "workflowfield_field_set_state" : {
            "node" : [ "node" ],
            "field" : [ "node:field-workflow" ],
            "workflow_state" : { "value" : { "6" : "6" } },
            "workflow_comment" : "Students transfer request has been denied. [node:field-decline-reason]"
          }
        },
        { "mimemail" : {
            "key" : [ "node:field-application-decision" ],
            "to" : "nickstankus@creighton.edu",
            "bcc" : "nickstankus@creighton.edu, EmilyTruax@creighton.edu, ChristianBurk@creighton.edu",
            "from_name" : "Inter-college Transfer Request",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "Transfer Denied: [node:field_first_name] [node:field_last_name] ([node:field-netid]) transfer to [node:field_transfer_college]",
            "body" : "[node:field_first_name] [node:field_last_name] ([node:field-netid]) request to transfer from [node:field_current_college_autofill] into [node:field_transfer_college] has been denied.\\r\\n\\u003Cbr\\u003E\\r\\n[node:field-decline-reason]\\r\\n\\u003Cbr\\u003E\\r\\nPDF Copy of Request: \\u003Ca href=\\u0022[site:url]\\/printpdf\\/cict\\/[node:nid]\\u0022\\u003E[site:url]\\/printpdf\\/cict\\/[node:nid]\\u003C\\/a\\u003E\\r\\n",
            "language" : [ "" ]
          }
        },
        { "mimemail" : {
            "key" : [ "node:field-decline-reason" ],
            "to" : "[node:field-netid]@creighton.edu",
            "bcc" : "nickstankus@creighton.edu",
            "from_name" : "Inter-college Transfer Request",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "Transfer request: Request denied",
            "body" : "Your request for transfer to [node:field_transfer_college] has been denied.",
            "language" : [ "" ]
          }
        },
        { "request_url" : {
            "USING" : {
              "url" : "https:\\/\\/prod-dl-api.creighton.edu\\/notification",
              "headers" : "Content-Type: application\\/x-www-form-urlencoded",
              "method" : "POST",
              "data" : "publisherKey=e5611ba6-c851-4cf3-aeb7-ebabb4e3b85b\\r\\nnetid=[node:field-netid]\\r\\ntitle=Your transfer was denied\\r\\nmessage=Your intercollege transfer request has been denied."
            },
            "PROVIDE" : { "http_response" : { "http_response" : "HTTP data" } }
          }
        }
      ]
    }
  }');
  $items['rules_application_withdrawn'] = entity_import('rules_config', '{ "rules_application_withdrawn" : {
      "LABEL" : "Application Withdrawn",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-4",
      "OWNER" : "rules",
      "TAGS" : [ "ict-workflow" ],
      "REQUIRES" : [ "rules", "rules_http_client", "mimemail", "workflow_rules" ],
      "ON" : { "node_update--intercollege_transfer" : { "bundle" : "intercollege_transfer" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-application-decision" ], "value" : "withdraw" } }
      ],
      "DO" : [
        { "request_url" : {
            "USING" : {
              "url" : "https:\\/\\/prod-dl-api.creighton.edu\\/notification",
              "headers" : "Content-Type: application\\/x-www-form-urlencoded",
              "method" : "POST",
              "data" : "publisherKey=e5611ba6-c851-4cf3-aeb7-ebabb4e3b85b\\r\\nnetid=[node:field-netid]\\r\\ntitle=Transfer Request Withdrawn\\r\\nmessage=Your request to transfer has been withdrawn. No further action is required."
            },
            "PROVIDE" : { "http_response" : { "http_response" : "HTTP data" } }
          }
        },
        { "mimemail" : {
            "key" : [ "node:field-application-decision" ],
            "to" : "[node:field-netid]@creighton.edu",
            "bcc" : "nickstankus@creighton.edu, EmilyTruax@creighton.edu, ChristianBurk@creighton.edu",
            "from_name" : "Inter-college Transfer Request",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "Transfer request: Request withdrawn",
            "body" : "Your request to transfer has been withdrawn. No further action is required.",
            "plaintext" : "Your request to transfer has been withdrawn. No further action is required.",
            "language" : [ "" ]
          }
        },
        { "mimemail" : {
            "key" : [ "node:field-first-name" ],
            "to" : "nickstankus@creighton.edu",
            "bcc" : "nickstankus@creighton.edu, EmilyTruax@creighton.edu, ChristianBurk@creighton.edu",
            "from_name" : "Inter-college Transfer Request",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "[node:field-first-name] [node:field-last-name] ([node:field-netid]) request withdrawn",
            "body" : "[node:field-first-name] [node:field-last-name] ([node:field-netid]) request to transfer has been withdrawn. No further action is required.",
            "plaintext" : "[node:field-first-name] [node:field-last-name] ([node:field-netid]) request to transfer has been withdrawn. No further action is required.",
            "language" : [ "" ]
          }
        },
        { "workflowfield_field_set_state" : {
            "node" : [ "node" ],
            "field" : [ "node:field-workflow" ],
            "workflow_state" : { "value" : { "7" : "7" } },
            "workflow_comment" : "Student wishes to withdraw application."
          }
        }
      ]
    }
  }');
  $items['rules_application_withdrawn_2'] = entity_import('rules_config', '{ "rules_application_withdrawn_2" : {
      "LABEL" : "Application Withdrawn 2",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-4",
      "OWNER" : "rules",
      "TAGS" : [ "ict-workflow" ],
      "REQUIRES" : [ "rules", "mimemail", "workflow_rules", "rules_http_client" ],
      "ON" : { "node_update--intercollege_transfer" : { "bundle" : "intercollege_transfer" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-current-academic-dean" ], "value" : "withdraw" } }
      ],
      "DO" : [
        { "mimemail" : {
            "key" : [ "node:field-netid" ],
            "to" : "[node:field-netid]@creighton.edu",
            "bcc" : "nickstankus@creighton.edu, EmilyTruax@creighton.edu, ChristianBurk@creighton.edu",
            "from_name" : "Inter-college Transfer Request",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "Transfer request: Request withdrawn",
            "body" : "Your request to transfer has been withdrawn. No further action is required.",
            "plaintext" : "Your request to transfer has been withdrawn. No further action is required.",
            "language" : [ "" ]
          }
        },
        { "mimemail" : {
            "key" : [ "node:field-first-name" ],
            "to" : "nickstankus@creighton.edu",
            "bcc" : "nickstankus@creighton.edu, EmilyTruax@creighton.edu, ChristianBurk@creighton.edu",
            "from_name" : "Inter-college Transfer Request",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "Subject: [node:field-first-name] [node:field-last-name] ([node:field-netid]) request withdrawn",
            "body" : "[node:field-first-name] [node:field-last-name] ([node:field-netid]) request to transfer has been withdrawn. No further action is required.",
            "plaintext" : "[node:field-first-name] [node:field-last-name] ([node:field-netid]) request to transfer has been withdrawn. No further action is required.",
            "language" : [ "" ]
          }
        },
        { "workflowfield_field_set_state" : {
            "node" : [ "node" ],
            "field" : [ "node:field-workflow" ],
            "workflow_state" : { "value" : { "7" : "7" } },
            "workflow_comment" : "Student wishes to withdraw application."
          }
        },
        { "request_url" : {
            "USING" : {
              "url" : "https:\\/\\/prod-dl-api.creighton.edu\\/notification",
              "headers" : "Content-Type: application\\/x-www-form-urlencoded",
              "method" : "POST",
              "data" : "publisherKey=e5611ba6-c851-4cf3-aeb7-ebabb4e3b85b\\r\\nnetid=[node:field-netid]\\r\\ntitle=Transfer Request Withdrawn\\r\\nmessage=Your request to transfer has been withdrawn. No further action is required."
            },
            "PROVIDE" : { "http_response" : { "http_response" : "HTTP data" } }
          }
        }
      ]
    }
  }');
  $items['rules_banner_student_info'] = entity_import('rules_config', '{ "rules_banner_student_info" : {
      "LABEL" : "Banner Student Info",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-10",
      "OWNER" : "rules",
      "TAGS" : [ "banner_student_info" ],
      "REQUIRES" : [ "wsclient", "rules" ],
      "ON" : { "user_login" : [] },
      "DO" : [
        { "wsclient_banner_service_pull_get_student_info" : {
            "USING" : { "param_netID" : [ "site:current-user:name" ] },
            "PROVIDE" : { "result" : { "result" : "student_info_result" } }
          }
        },
        { "data_set" : {
            "data" : [ "account:field-netid-account" ],
            "value" : [ "result:netID" ]
          }
        },
        { "data_set" : {
            "data" : [ "site:current-user:field-first-name" ],
            "value" : [ "result:firstName" ]
          }
        },
        { "data_set" : {
            "data" : [ "site:current-user:field-last-name" ],
            "value" : [ "result:lastName" ]
          }
        },
        { "data_set" : {
            "data" : [ "site:current-user:field-current-mailing-address:country" ],
            "value" : [ "result:country" ]
          }
        },
        { "data_set" : {
            "data" : [ "site:current-user:field-current-mailing-address:thoroughfare" ],
            "value" : [ "result:address1" ]
          }
        },
        { "data_set" : {
            "data" : [ "site:current-user:field-current-mailing-address:premise" ],
            "value" : [ "result:address2" ]
          }
        },
        { "data_set" : {
            "data" : [ "site:current-user:field-current-mailing-address:postal-code" ],
            "value" : [ "result:zip" ]
          }
        },
        { "data_set" : {
            "data" : [ "site:current-user:field-current-mailing-address:administrative-area" ],
            "value" : [ "result:state" ]
          }
        },
        { "data_set" : {
            "data" : [ "site:current-user:field-current-college-autofill" ],
            "value" : [ "result:currentCollege" ]
          }
        },
        { "data_set" : {
            "data" : [ "site:current-user:field-current-class" ],
            "value" : [ "result:currentClass" ]
          }
        },
        { "data_set" : {
            "data" : [ "site:current-user:field-current-advisor" ],
            "value" : [ "result:currentAdvisor" ]
          }
        },
        { "data_set" : {
            "data" : [ "site:current-user:field-cumulative-gpa" ],
            "value" : [ "result:currentGPA" ]
          }
        },
        { "data_set" : {
            "data" : [ "site:current-user:field-current-major" ],
            "value" : [ "result:currentMajor" ]
          }
        }
      ]
    }
  }');
  $items['rules_current_dean_approval'] = entity_import('rules_config', '{ "rules_current_dean_approval" : {
      "LABEL" : "Current Dean Approval",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "ict-workflow" ],
      "REQUIRES" : [ "rules", "mimemail", "workflow_rules" ],
      "ON" : { "node_update--intercollege_transfer" : { "bundle" : "intercollege_transfer" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-current-academic-dean" ], "value" : "approved" } },
        { "AND" : [] },
        { "data_is_empty" : { "data" : [ "node:field-application-decision" ] } }
      ],
      "DO" : [
        { "mimemail" : {
            "key" : [ "site:name" ],
            "to" : "[node:field-netid]@creighton.edu",
            "bcc" : "WebTeam@creighton.edu, nickstankus@creighton.edu, joshwester@creighton.edu, CalebNachtigall@creighton.edu, ChristianBurk@creighton.edu",
            "from_name" : "Inter-college Transfer Request",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "Transfer request: [node:field-current-college-autofill] has agreed to release you",
            "body" : "[node:field-current-college-autofill] has agreed to release you pending your acceptance into [node:field_transfer_college]. Your request has been routed to [node:field_transfer_college] for review. You will be contacted by the [node:field_transfer_college] dean\\u0027s office to schedule a meeting to review your transfer request.",
            "language" : [ "" ]
          }
        },
        { "mimemail" : {
            "key" : [ "site:name" ],
            "to" : "WebTeam@creighton.edu",
            "bcc" : "nickstankus@creighton.edu, joshwester@creighton.edu, CalebNachtigall@creighton.edu, ChristianBurk@creighton.edu",
            "from_name" : "Inter-college Transfer Request",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "[node:field-first-name] [node:field-last-name] ([node:field-netid]) requested transfer from [node:field-current-college-autofill] to [node:field_transfer_college]",
            "body" : "[node:field-first-name] [node:field-last-name] ([node:field-netid]) has submitted a request to transfer from  [node:field-current-college-autofill] to [node:field_transfer_college] for [node:field-transfer-semester-year-sem] [node:field-year].\\r\\n\\u003Cbr\\u003E\\r\\n\\u003Cul\\u003E\\r\\n\\u003Cli\\u003E\\u003Ca href=\\u0022[site:url]cict\\/[node:nid]\\u0022\\u003EView Request\\u003C\\/a\\u003E\\u003C\\/li\\u003E\\r\\n\\u003Cli\\u003E\\u003Ca href=\\u0022[site:url]cfd\\/[node:nid]\\u0022\\u003EEdit\\/Approve\\u003C\\/a\\u003E\\u003C\\/li\\u003E\\r\\n\\u003Cli\\u003E\\u003Ca href=\\u0022[site:url]workflow\\/future\\u0022\\u003EView all transfer requests\\u003C\\/a\\u003E\\u003C\\/li\\u003E\\r\\n\\u003C\\/ul\\u003E",
            "language" : [ "" ]
          }
        },
        { "workflowfield_field_set_state" : {
            "node" : [ "node" ],
            "field" : [ "node:field-workflow" ],
            "workflow_state" : { "value" : { "13" : "13" } },
            "workflow_comment" : "[node:field_transfer_college] Dean to review."
          }
        }
      ]
    }
  }');
  $items['rules_current_dean_to_college_nursing'] = entity_import('rules_config', '{ "rules_current_dean_to_college_nursing" : {
      "LABEL" : "Current Dean to College of Nursing",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "ict-workflow" ],
      "REQUIRES" : [ "rules", "rules_http_client", "workflow_rules", "mimemail" ],
      "ON" : { "node_update--intercollege_transfer" : { "bundle" : "intercollege_transfer" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-current-academic-dean" ], "value" : "approved" } },
        { "AND" : [] },
        { "data_is" : { "data" : [ "node-unchanged:field-transfer-college" ], "value" : "NURS" } },
        { "AND" : [] },
        { "data_is_empty" : { "data" : [ "node:field-application-decision" ] } }
      ],
      "DO" : [
        { "request_url" : {
            "USING" : {
              "url" : "https:\\/\\/prod-dl-api.creighton.edu\\/notification",
              "headers" : "Content-Type: application\\/x-www-form-urlencoded",
              "method" : "POST",
              "data" : "publisherKey=e5611ba6-c851-4cf3-aeb7-ebabb4e3b85b\\r\\nnetid=[node:field-netid]\\r\\ntitle=Transfer request: [node:field-current-college-autofill] has agreed to release you\\r\\nmessage=[node:field-current-college-autofill] has agreed to release you pending your acceptance into [node:field_transfer_college]. Your request has been routed to [node:field_transfer_college] for review. You will be contacted by the [node:field_transfer_college] dean\\u0027s office to schedule a meeting to review your transfer request."
            },
            "PROVIDE" : { "http_response" : { "http_response" : "HTTP data" } }
          }
        },
        { "workflowfield_field_set_state" : {
            "node" : [ "node" ],
            "field" : [ "node:field-workflow" ],
            "workflow_state" : { "value" : { "13" : "13" } },
            "workflow_comment" : "Nursing Dean to review."
          }
        },
        { "mimemail" : {
            "key" : [ "site:name" ],
            "to" : "[node:field-netid]@creighton.edu",
            "bcc" : "nickstankus@creighton.edu",
            "from_name" : "Inter-college Transfer Request",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "Transfer request: [node:field-current-college-autofill] has agreed to release you",
            "body" : "[node:field-current-college-autofill] has agreed to release you pending your acceptance into [node:field_transfer_college]. Your request has been routed to [node:field_transfer_college] for review. You will be contacted by the [node:field_transfer_college] dean\\u0027s office to schedule a meeting to review your transfer request.",
            "language" : [ "" ]
          }
        },
        { "mimemail" : {
            "key" : [ "site:name" ],
            "to" : "nursing-deans@creightonuniv.onmicrosoft.com",
            "bcc" : "nickstankus@creighton.edu, EmilyTruax@creighton.edu, ChristianBurk@creighton.edu",
            "from_name" : "Inter-college Transfer Request",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "Future Dean Action: [node:field_transfer_college] Updated Inter-college Transfer Request Notification ([node:created])",
            "body" : "An Updated Inter-college Transfer Request has been submitted.\\u003Cbr\\u003E\\r\\nRequestor wishes to transfer from \\u003Cb\\u003E[node:field-current-college-autofill]\\u003C\\/b\\u003E to \\u003Cb\\u003E[node:field_transfer_college]\\u003C\\/b\\u003E.\\r\\n\\u003Cbr\\u003E\\r\\nPlease use links below to access submission.\\r\\n\\u003Cul\\u003E\\r\\n\\u003Cli\\u003E\\u003Ca href=\\u0022[site:url]workflow\\/ict\\/nursing\\u0022\\u003EView all nursing transfer requests\\u003C\\/a\\u003E\\u003C\\/li\\u003E\\r\\n\\u003C\\/ul\\u003E",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_current_dean_to_college_of_arts_and_sciences'] = entity_import('rules_config', '{ "rules_current_dean_to_college_of_arts_and_sciences" : {
      "LABEL" : "Current Dean to College of Arts and Sciences",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "ict-workflow" ],
      "REQUIRES" : [ "rules", "rules_http_client", "workflow_rules", "mimemail" ],
      "ON" : { "node_update--intercollege_transfer" : { "bundle" : "intercollege_transfer" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-current-academic-dean" ], "value" : "approved" } },
        { "AND" : [] },
        { "data_is" : { "data" : [ "node-unchanged:field-transfer-college" ], "value" : "CCAS" } },
        { "AND" : [] },
        { "data_is_empty" : { "data" : [ "node:field-application-decision" ] } }
      ],
      "DO" : [
        { "request_url" : {
            "USING" : {
              "url" : "https:\\/\\/prod-dl-api.creighton.edu\\/notification",
              "headers" : "Content-Type: application\\/x-www-form-urlencoded",
              "method" : "POST",
              "data" : "publisherKey=e5611ba6-c851-4cf3-aeb7-ebabb4e3b85b\\r\\nnetid=[node:field-netid]\\r\\ntitle=Transfer request: [node:field-current-college-autofill] has agreed to release you\\r\\nmessage=[node:field-current-college-autofill] has agreed to release you pending your acceptance into [node:field_transfer_college]. Your request has been routed to [node:field_transfer_college] for review. You will be contacted by the [node:field_transfer_college] dean\\u0027s office to schedule a meeting to review your transfer request."
            },
            "PROVIDE" : { "http_response" : { "http_response" : "HTTP data" } }
          }
        },
        { "workflowfield_field_set_state" : {
            "node" : [ "node" ],
            "field" : [ "node:field-workflow" ],
            "workflow_state" : { "value" : { "13" : "13" } },
            "workflow_comment" : "CCAS Dean to review."
          }
        },
        { "mimemail" : {
            "key" : [ "site:name" ],
            "to" : "[node:field-netid]@creighton.edu",
            "bcc" : "nickstankus@creighton.edu",
            "from_name" : "Inter-college Transfer Request",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "Transfer request: [node:field-current-college-autofill] has agreed to release you",
            "body" : "[node:field-current-college-autofill] has agreed to release you pending your acceptance into [node:field_transfer_college]. Your request has been routed to [node:field_transfer_college] for review. You will be contacted by the [node:field_transfer_college] dean\\u0027s office to schedule a meeting to review your transfer request.",
            "language" : [ "" ]
          }
        },
        { "mimemail" : {
            "key" : [ "site:name" ],
            "to" : "ccas-deans@creighton.edu",
            "bcc" : "nickstankus@creighton.edu, EmilyTruax@creighton.edu, ChristianBurk@creighton.edu",
            "from_name" : "Inter-college Transfer Request",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "Future Dean Action: [node:field_transfer_college] Updated Inter-college Transfer Request Notification ([node:created])",
            "body" : "An Updated Inter-college Transfer Request has been submitted.\\u003Cbr\\u003E\\r\\nRequestor wishes to transfer from \\u003Cb\\u003E[node:field-current-college-autofill]\\u003C\\/b\\u003E to \\u003Cb\\u003E[node:field_transfer_college]\\u003C\\/b\\u003E.\\r\\n\\u003Cbr\\u003E\\r\\nPlease use links below to access submission.\\r\\n\\u003Cul\\u003E\\r\\n\\u003Cli\\u003E\\u003Ca href=\\u0022[site:url]workflow\\/ict\\/ccas\\u0022\\u003EView all CCAS transfer requests\\u003C\\/a\\u003E\\u003C\\/li\\u003E\\r\\n\\u003C\\/ul\\u003E",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_current_dean_to_college_of_professional_studies'] = entity_import('rules_config', '{ "rules_current_dean_to_college_of_professional_studies" : {
      "LABEL" : "Current Dean to College of Professional Studies",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "ict-workflow" ],
      "REQUIRES" : [ "rules", "rules_http_client", "workflow_rules", "mimemail" ],
      "ON" : { "node_update--intercollege_transfer" : { "bundle" : "intercollege_transfer" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-current-academic-dean" ], "value" : "approved" } },
        { "data_is" : { "data" : [ "node-unchanged:field-transfer-college" ], "value" : "CPS" } },
        { "AND" : [] },
        { "data_is_empty" : { "data" : [ "node:field-application-decision" ] } }
      ],
      "DO" : [
        { "request_url" : {
            "USING" : {
              "url" : "https:\\/\\/prod-dl-api.creighton.edu\\/notification",
              "headers" : "Content-Type: application\\/x-www-form-urlencoded",
              "method" : "POST",
              "data" : "publisherKey=e5611ba6-c851-4cf3-aeb7-ebabb4e3b85b\\r\\nnetid=[node:field-netid]\\r\\ntitle=Transfer request: [node:field-current-college-autofill] has agreed to release you\\r\\nmessage=[node:field-current-college-autofill] has agreed to release you pending your acceptance into [node:field_transfer_college]. Your request has been routed to [node:field_transfer_college] for review. You will be contacted by the [node:field_transfer_college] dean\\u0027s office to schedule a meeting to review your transfer request."
            },
            "PROVIDE" : { "http_response" : { "http_response" : "HTTP data" } }
          }
        },
        { "workflowfield_field_set_state" : {
            "node" : [ "node" ],
            "field" : [ "node:field-workflow" ],
            "workflow_state" : { "value" : { "13" : "13" } },
            "workflow_comment" : "CPS Dean to review."
          }
        },
        { "mimemail" : {
            "key" : [ "site:name" ],
            "to" : "[node:field-netid]@creighton.edu",
            "from_name" : "Inter-college Transfer Request",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "Transfer request: [node:field-current-college-autofill] has agreed to release you",
            "body" : "[node:field-current-college-autofill] has agreed to release you pending your acceptance into [node:field_transfer_college]. Your request has been routed to [node:field_transfer_college] for review. You will be contacted by the [node:field_transfer_college] dean\\u0027s office to schedule a meeting to review your transfer request.",
            "language" : [ "" ]
          }
        },
        { "mimemail" : {
            "key" : [ "site:name" ],
            "to" : "cps-deans@creighton.edu",
            "bcc" : "nickstankus@creighton.edu, EmilyTruax@creighton.edu, ChristianBurk@creighton.edu",
            "from_name" : "Inter-college Transfer Request",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "Future Dean Action: [node:field_transfer_college] Updated Inter-college Transfer Request Notification ([node:created])",
            "body" : "An Updated Inter-college Transfer Request has been submitted.\\u003Cbr\\u003E\\r\\nRequestor wishes to transfer from \\u003Cb\\u003E[node:field-current-college-autofill]\\u003C\\/b\\u003E to \\u003Cb\\u003E[node:field_transfer_college]\\u003C\\/b\\u003E.\\r\\n\\u003Cbr\\u003E\\r\\nPlease use links below to access submission.\\r\\n\\u003Cul\\u003E\\r\\n\\u003Cli\\u003E\\u003Ca href=\\u0022[site:url]workflow\\/ict\\/cps\\u0022\\u003EView all CPS transfer requests\\u003C\\/a\\u003E\\u003C\\/li\\u003E\\r\\n\\u003C\\/ul\\u003E",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_current_dean_to_heider_college_of_business'] = entity_import('rules_config', '{ "rules_current_dean_to_heider_college_of_business" : {
      "LABEL" : "Current Dean to Heider College of Business",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "ict-workflow" ],
      "REQUIRES" : [ "rules", "rules_http_client", "workflow_rules", "mimemail" ],
      "ON" : { "node_update--intercollege_transfer" : { "bundle" : "intercollege_transfer" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-current-academic-dean" ], "value" : "approved" } },
        { "data_is" : { "data" : [ "node-unchanged:field-transfer-college" ], "value" : "HCB" } },
        { "AND" : [] },
        { "data_is_empty" : { "data" : [ "node:field-application-decision" ] } }
      ],
      "DO" : [
        { "request_url" : {
            "USING" : {
              "url" : "https:\\/\\/prod-dl-api.creighton.edu\\/notification",
              "headers" : "Content-Type: application\\/x-www-form-urlencoded",
              "method" : "POST",
              "data" : "publisherKey=e5611ba6-c851-4cf3-aeb7-ebabb4e3b85b\\r\\nnetid=[node:field-netid]\\r\\ntitle=Transfer request: [node:field-current-college-autofill] has agreed to release you\\r\\nmessage=[node:field-current-college-autofill] has agreed to release you pending your acceptance into [node:field_transfer_college]. Your request has been routed to [node:field_transfer_college] for review. You will be contacted by the [node:field_transfer_college] dean\\u0027s office to schedule a meeting to review your transfer request."
            },
            "PROVIDE" : { "http_response" : { "http_response" : "HTTP data" } }
          }
        },
        { "workflowfield_field_set_state" : {
            "node" : [ "node" ],
            "field" : [ "node:field-workflow" ],
            "workflow_state" : { "value" : { "13" : "13" } },
            "workflow_comment" : "Heider College of Business Dean to review."
          }
        },
        { "mimemail" : {
            "key" : [ "site:name" ],
            "to" : "[node:field-netid]@creighton.edu",
            "from_name" : "Inter-college Transfer Request",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "Transfer request: [node:field-current-college-autofill] has agreed to release you",
            "body" : "[node:field-current-college-autofill] has agreed to release you pending your acceptance into [node:field_transfer_college]. Your request has been routed to [node:field_transfer_college] for review. You will be contacted by the [node:field_transfer_college] dean\\u0027s office to schedule a meeting to review your transfer request.",
            "language" : [ "" ]
          }
        },
        { "mimemail" : {
            "key" : [ "site:name" ],
            "to" : "business-deans@creighton.edu",
            "bcc" : "nickstankus@creighton.edu, EmilyTruax@creighton.edu, ChristianBurk@creighton.edu",
            "from_name" : "Inter-college Transfer Request",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "Future Dean Action: [node:field_transfer_college] Updated Inter-college Transfer Request Notification ([node:created])",
            "body" : "An Updated Inter-college Transfer Request has been submitted.\\u003Cbr\\u003E\\r\\nRequestor wishes to transfer from \\u003Cb\\u003E[node:field-current-college-autofill]\\u003C\\/b\\u003E to \\u003Cb\\u003E[node:field_transfer_college]\\u003C\\/b\\u003E.\\r\\n\\u003Cbr\\u003E\\r\\nPlease use links below to access submission.\\r\\n\\u003Cul\\u003E\\r\\n\\u003Cli\\u003E\\u003Ca href=\\u0022[site:url]workflow\\/ict\\/business\\u0022\\u003EView all business transfer requests\\u003C\\/a\\u003E\\u003C\\/li\\u003E\\r\\n\\u003C\\/ul\\u003E",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_current_dean_to_spahp'] = entity_import('rules_config', '{ "rules_current_dean_to_spahp" : {
      "LABEL" : "Current Dean to School of Pharmacy and Health Professions",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "ict-workflow" ],
      "REQUIRES" : [ "rules", "rules_http_client", "workflow_rules", "mimemail" ],
      "ON" : { "node_update--intercollege_transfer" : { "bundle" : "intercollege_transfer" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-current-academic-dean" ], "value" : "approved" } },
        { "data_is" : {
            "data" : [ "node-unchanged:field-transfer-college" ],
            "value" : "SPAHP"
          }
        },
        { "AND" : [] },
        { "data_is_empty" : { "data" : [ "node:field-application-decision" ] } }
      ],
      "DO" : [
        { "request_url" : {
            "USING" : {
              "url" : "https:\\/\\/dev-dl-api.creighton.edu\\/notification",
              "headers" : "Content-Type: application\\/x-www-form-urlencoded",
              "method" : "POST",
              "data" : "publisherKey=f86117eb-0fdc-429c-a224-87743a0d501e\\r\\nnetid=[node-unchanged:field-netid]\\r\\ntitle=Transfer request: [node:field-current-college-autofill] has agreed to release you\\r\\nmessage=[node:field-current-college-autofill] has agreed to release you pending your acceptance into [node:field_transfer_college]. Your request has been routed to [node:field_transfer_college] for review. You will be contacted by the [node:field_transfer_college] dean\\u0027s office to schedule a meeting to review your transfer request."
            },
            "PROVIDE" : { "http_response" : { "http_response" : "HTTP data" } }
          }
        },
        { "workflowfield_field_set_state" : {
            "node" : [ "node" ],
            "field" : [ "node:field-workflow" ],
            "workflow_state" : { "value" : { "13" : "13" } },
            "workflow_comment" : "School of Pharmacy and Health Professions Dean to review."
          }
        },
        { "mimemail" : {
            "key" : [ "site:name" ],
            "to" : "nickstankus@creighton.edu",
            "from_name" : "Inter-college Transfer Request",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "Transfer request: [node:field-current-college-autofill] has agreed to release you",
            "body" : "[node:field-current-college-autofill] has agreed to release you pending your acceptance into [node:field_transfer_college]. Your request has been routed to [node:field_transfer_college] for review. You will be contacted by the [node:field_transfer_college] dean\\u0027s office to schedule a meeting to review your transfer request.",
            "language" : [ "" ]
          }
        },
        { "mimemail" : {
            "key" : [ "site:name" ],
            "to" : "nickstankus@creighton.edu",
            "from_name" : "Inter-college Transfer Request",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "Future Dean Action: [node:field_transfer_college] Updated Inter-college Transfer Request Notification ([node:created])",
            "body" : "An Updated Inter-college Transfer Request has been submitted.\\u003Cbr\\u003E\\r\\nRequestor wishes to transfer from \\u003Cb\\u003E[node:field-current-college-autofill]\\u003C\\/b\\u003E to \\u003Cb\\u003E[node:field_transfer_college]\\u003C\\/b\\u003E.\\r\\n\\u003Cbr\\u003E\\r\\nPlease use links below to access submission.\\r\\n\\u003Cul\\u003E\\r\\n\\u003Cli\\u003E\\u003Ca href=\\u0022[site:url]workflow\\/ict\\/spahp\\u0022\\u003EView all SPAHP transfer requests\\u003C\\/a\\u003E\\u003C\\/li\\u003E\\r\\n\\u003C\\/ul\\u003E",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_new_ict_email_current_ccas'] = entity_import('rules_config', '{ "rules_new_ict_email_current_ccas" : {
      "LABEL" : "New ICT Email - Current - College of Arts and Sciences",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "ict-workflow" ],
      "REQUIRES" : [ "rules", "rules_http_client", "mimemail", "workflow_rules" ],
      "ON" : { "node_insert--intercollege_transfer" : { "bundle" : "intercollege_transfer" } },
      "IF" : [
        { "text_matches" : {
            "text" : [ "node:field-current-college-autofill" ],
            "match" : "College of Arts and Sciences"
          }
        }
      ],
      "DO" : [
        { "request_url" : {
            "USING" : {
              "url" : "https:\\/\\/prod-dl-api.creighton.edu\\/notification",
              "headers" : "Content-Type: application\\/x-www-form-urlencoded",
              "method" : "POST",
              "data" : "publisherKey=e5611ba6-c851-4cf3-aeb7-ebabb4e3b85b\\r\\nnetid= [node:field-netid]\\r\\ntitle=Inter-college transfer Request Received\\r\\nmessage=Your transfer request has been submitted. You will be contacted by [node:field-current-college-autofill] to schedule a meeting and review of your transfer request."
            },
            "PROVIDE" : { "http_response" : { "http_response" : "HTTP data" } }
          }
        },
        { "mimemail" : {
            "key" : [ "site:name" ],
            "to" : "ccas-deans@creighton.edu",
            "bcc" : "nickstankus@creighton.edu, EmilyTruax@creighton.edu, ChristianBurk@creighton.edu",
            "from_name" : "Inter-college Transfer Request",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "Current Dean Action: [node:field-current-college-autofill] New Inter-college Transfer Request Notification ([node:created])",
            "body" : "A New Inter-college Transfer Request has been submitted.\\u003Cbr\\u003E\\r\\nRequestor wishes to transfer from \\u003Cb\\u003E[node:field-current-college-autofill]\\u003C\\/b\\u003E to \\u003Cb\\u003E[node:field_transfer_college]\\u003C\\/b\\u003E.\\r\\n\\u003Cbr\\u003E\\r\\nPlease use link below to access submission.\\r\\n\\u003Cul\\u003E\\r\\n\\u003Cli\\u003E\\u003Ca href=\\u0022[site:url]workflow\\/ict\\/ccas\\u0022\\u003EView all CCAS transfer requests\\u003C\\/a\\u003E\\u003C\\/li\\u003E\\r\\n\\u003C\\/ul\\u003E\\r\\n",
            "language" : [ "" ]
          }
        },
        { "mimemail" : {
            "key" : [ "node:field-netid" ],
            "to" : "[node:field-netid]@creighton.edu",
            "bcc" : "nickstankus@creighton.edu",
            "from_name" : "Inter-college transfer",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "Inter-college transfer Request Received",
            "body" : "Your transfer request has been submitted. You will be contacted by [node:field-current-college-autofill] to schedule a meeting and review of your transfer request.",
            "language" : [ "" ]
          }
        },
        { "workflowfield_field_set_state" : {
            "node" : [ "node" ],
            "field" : [ "node:field-workflow" ],
            "workflow_state" : { "value" : { "12" : "12" } },
            "workflow_comment" : "Student submitted request to transfer out of CCAS."
          }
        },
        { "redirect" : { "url" : "[site:url]ictcs\\/[node:nid]" } }
      ]
    }
  }');
  $items['rules_new_ict_email_current_college_of_nursing'] = entity_import('rules_config', '{ "rules_new_ict_email_current_college_of_nursing" : {
      "LABEL" : "New ICT Email - Current - College of Nursing",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "ict-workflow" ],
      "REQUIRES" : [ "rules", "rules_http_client", "mimemail", "workflow_rules" ],
      "ON" : { "node_insert--intercollege_transfer" : { "bundle" : "intercollege_transfer" } },
      "IF" : [
        { "text_matches" : {
            "text" : [ "node:field-current-college-autofill" ],
            "match" : "College of Nursing"
          }
        }
      ],
      "DO" : [
        { "request_url" : {
            "USING" : {
              "url" : "https:\\/\\/prod-dl-api.creighton.edu\\/notification",
              "headers" : "Content-Type: application\\/x-www-form-urlencoded",
              "method" : "POST",
              "data" : "publisherKey=e5611ba6-c851-4cf3-aeb7-ebabb4e3b85b\\r\\nnetid=[node:field-netid]\\r\\ntitle=Inter-college transfer Request Received to transfer out of [node:field-current-college-autofill]\\r\\nmessage=Your transfer request has been submitted. You will be contacted by [node:field-current-college-autofill] to schedule a meeting and review of your transfer request."
            },
            "PROVIDE" : { "http_response" : { "http_response" : "HTTP data" } }
          }
        },
        { "mimemail" : {
            "key" : [ "site:name" ],
            "to" : "nursing-deans@creighton.edu",
            "bcc" : "nickstankus@creighton.edu, EmilyTruax@creighton.edu, ChristianBurk@creighton.edu",
            "from_name" : "Inter-college Transfer Request",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "Current Dean Action: [node:field-current-college-autofill] New Inter-college Transfer Request Notification ([node:created])",
            "body" : "A New Inter-college Transfer Request has been submitted.\\u003Cbr\\u003E\\r\\nRequestor wishes to transfer from \\u003Cb\\u003E[node:field-current-college-autofill]\\u003C\\/b\\u003E to \\u003Cb\\u003E[node:field_transfer_college]\\u003C\\/b\\u003E.\\r\\n\\u003Cbr\\u003E\\r\\nPlease use link below to access submission.\\r\\n\\u003Cul\\u003E\\r\\n\\u003Cli\\u003E\\u003Ca href=\\u0022[site:url]workflow\\/ict\\/nursing\\u0022\\u003EView all Nursing transfer requests\\u003C\\/a\\u003E\\u003C\\/li\\u003E\\r\\n\\u003C\\/ul\\u003E\\r\\n",
            "language" : [ "" ]
          }
        },
        { "mimemail" : {
            "key" : [ "node:field-netid" ],
            "to" : "[node:field-netid]@creighton.edu",
            "bcc" : "nickstankus@creighton.edu",
            "from_name" : "Inter-college transfer",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "Inter-college transfer Request Received",
            "body" : "Your transfer request has been submitted. You will be contacted by [node:field-current-college-autofill] to schedule a meeting and review of your transfer request.",
            "language" : [ "" ]
          }
        },
        { "workflowfield_field_set_state" : {
            "node" : [ "node" ],
            "field" : [ "node:field-workflow" ],
            "workflow_state" : { "value" : { "12" : "12" } },
            "workflow_comment" : "Student submitted request to transfer out of College of Nursing."
          }
        },
        { "redirect" : { "url" : "[site:url]ictcs\\/[node:nid]" } }
      ]
    }
  }');
  $items['rules_new_ict_email_current_college_of_professional_studies'] = entity_import('rules_config', '{ "rules_new_ict_email_current_college_of_professional_studies" : {
      "LABEL" : "New ICT Email - Current - College of Professional Studies",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "ict-workflow" ],
      "REQUIRES" : [ "rules", "rules_http_client", "mimemail", "workflow_rules" ],
      "ON" : { "node_insert--intercollege_transfer" : { "bundle" : "intercollege_transfer" } },
      "IF" : [
        { "text_matches" : {
            "text" : [ "node:field-current-college-autofill" ],
            "match" : "Coll of Professional Studies"
          }
        }
      ],
      "DO" : [
        { "request_url" : {
            "USING" : {
              "url" : "https:\\/\\/prod-dl-api.creighton.edu\\/notification",
              "headers" : "Content-Type: application\\/x-www-form-urlencoded",
              "method" : "POST",
              "data" : "publisherKey=e5611ba6-c851-4cf3-aeb7-ebabb4e3b85b\\r\\nnetid=[node:field-netid]\\r\\ntitle=Inter-college transfer Request Received to transfer out of [node:field-current-college-autofill]\\r\\nmessage=Your transfer request has been submitted. You will be contacted by [node:field-current-college-autofill] to schedule a meeting and review of your transfer request."
            },
            "PROVIDE" : { "http_response" : { "http_response" : "HTTP data" } }
          }
        },
        { "mimemail" : {
            "key" : [ "site:name" ],
            "to" : "cps-deans@creighton.edu",
            "bcc" : "nickstankus@creighton.edu, EmilyTruax@creighton.edu, ChristianBurk@creighton.edu",
            "from_name" : "Inter-college Transfer Request",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "Current Dean Action: [node:field-current-college-autofill] New Inter-college Transfer Request Notification ([node:created])",
            "body" : "A New Inter-college Transfer Request has been submitted.\\u003Cbr\\u003E\\r\\nRequestor wishes to transfer from \\u003Cb\\u003E[node:field-current-college-autofill]\\u003C\\/b\\u003E to \\u003Cb\\u003E[node:field_transfer_college]\\u003C\\/b\\u003E.\\r\\n\\u003Cbr\\u003E\\r\\nPlease use link below to access submission.\\r\\n\\u003Cul\\u003E\\r\\n\\u003Cli\\u003E\\u003Ca href=\\u0022[site:url]workflow\\/ict\\/cps\\u0022\\u003EView all CPS transfer requests\\u003C\\/a\\u003E\\u003C\\/li\\u003E\\r\\n\\u003C\\/ul\\u003E\\r\\n",
            "language" : [ "" ]
          }
        },
        { "mimemail" : {
            "key" : [ "node:field-netid" ],
            "to" : "[node:field-netid]@creighton.edu",
            "bcc" : "nickstankus@creighton.edu",
            "from_name" : "Inter-college transfer",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "Inter-college transfer Request Received",
            "body" : "Your transfer request has been submitted. You will be contacted by [node:field-current-college-autofill] to schedule a meeting and review of your transfer request.",
            "language" : [ "" ]
          }
        },
        { "workflowfield_field_set_state" : {
            "node" : [ "node" ],
            "field" : [ "node:field-workflow" ],
            "workflow_state" : { "value" : { "12" : "12" } },
            "workflow_comment" : "Student submitted request to transfer out of College of Professional Studies."
          }
        },
        { "redirect" : { "url" : "[site:url]ictcs\\/[node:nid]" } }
      ]
    }
  }');
  $items['rules_new_ict_email_current_heider_college_of_business'] = entity_import('rules_config', '{ "rules_new_ict_email_current_heider_college_of_business" : {
      "LABEL" : "New ICT Email - Current - Heider College of Business",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "ict-workflow" ],
      "REQUIRES" : [ "rules", "rules_http_client", "mimemail", "workflow_rules" ],
      "ON" : { "node_insert--intercollege_transfer" : { "bundle" : "intercollege_transfer" } },
      "IF" : [
        { "text_matches" : {
            "text" : [ "node:field-current-college-autofill" ],
            "match" : "Heider College of Business"
          }
        }
      ],
      "DO" : [
        { "request_url" : {
            "USING" : {
              "url" : "https:\\/\\/prod-dl-api.creighton.edu\\/notification",
              "headers" : "Content-Type: application\\/x-www-form-urlencoded",
              "method" : "POST",
              "data" : "publisherKey=e5611ba6-c851-4cf3-aeb7-ebabb4e3b85b\\r\\nnetid=[node:field-netid]\\r\\ntitle=Inter-college transfer Request Received to transfer out of [node:field-current-college-autofill]\\r\\nmessage=Your transfer request has been submitted. You will be contacted by [node:field-current-college-autofill] to schedule a meeting and review of your transfer request."
            },
            "PROVIDE" : { "http_response" : { "http_response" : "HTTP data" } }
          }
        },
        { "mimemail" : {
            "key" : [ "site:name" ],
            "to" : "business-deans@creighton.edu",
            "bcc" : "nickstankus@creighton.edu, EmilyTruax@creighton.edu, ChristianBurk@creighton.edu",
            "from_name" : "Inter-college Transfer Request",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "Current Dean Action: [node:field-current-college-autofill] New Inter-college Transfer Request Notification ([node:created])",
            "body" : "A New Inter-college Transfer Request has been submitted.\\u003Cbr\\u003E\\r\\nRequestor wishes to transfer from \\u003Cb\\u003E[node:field-current-college-autofill]\\u003C\\/b\\u003E to \\u003Cb\\u003E[node:field_transfer_college]\\u003C\\/b\\u003E.\\r\\n\\u003Cbr\\u003E\\r\\nPlease use link below to access submission.\\r\\n\\u003Cul\\u003E\\r\\n\\u003Cli\\u003E\\u003Ca href=\\u0022[site:url]workflow\\/ict\\/business\\u0022\\u003EView all business transfer requests\\u003C\\/a\\u003E\\u003C\\/li\\u003E\\r\\n\\u003C\\/ul\\u003E\\r\\n",
            "language" : [ "" ]
          }
        },
        { "mimemail" : {
            "key" : [ "node:field-netid" ],
            "to" : "[node:field-netid]@creighton.edu",
            "bcc" : "nickstankus@creighton.edu",
            "from_name" : "Inter-college transfer",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "Inter-college transfer Request Received",
            "body" : "Your transfer request has been submitted. You will be contacted by [node:field-current-college-autofill] to schedule a meeting and review of your transfer request.",
            "language" : [ "" ]
          }
        },
        { "workflowfield_field_set_state" : {
            "node" : [ "node" ],
            "field" : [ "node:field-workflow" ],
            "workflow_state" : { "value" : { "12" : "12" } },
            "workflow_comment" : "Student submitted request to transfer out of Heider College of Business."
          }
        },
        { "redirect" : { "url" : "[site:url]ictcs\\/[node:nid]" } }
      ]
    }
  }');
  $items['rules_new_ict_email_current_school_of_pharmacy_and_health_profes'] = entity_import('rules_config', '{ "rules_new_ict_email_current_school_of_pharmacy_and_health_profes" : {
      "LABEL" : "New ICT Email - Current - School of Pharmacy and Health Professions",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "ict-workflow" ],
      "REQUIRES" : [ "rules", "rules_http_client", "mimemail", "workflow_rules" ],
      "ON" : { "node_insert--intercollege_transfer" : { "bundle" : "intercollege_transfer" } },
      "IF" : [
        { "text_matches" : {
            "text" : [ "node:field-current-college-autofill" ],
            "match" : "School of Pharmacy \\u0026 Hlth Prof"
          }
        }
      ],
      "DO" : [
        { "request_url" : {
            "USING" : {
              "url" : "https:\\/\\/dev-dl-api.creighton.edu\\/notification",
              "headers" : "Content-Type: application\\/x-www-form-urlencoded",
              "method" : "POST",
              "data" : "publisherKey=f86117eb-0fdc-429c-a224-87743a0d501e\\r\\nnetid=[node:field-netid]\\r\\ntitle=Inter-college transfer Request Received to transfer out of [node:field-current-college-autofill]\\r\\nmessage=Your transfer request has been submitted. You will be contacted by [node:field-current-college-autofill] to schedule a meeting and review of your transfer request."
            },
            "PROVIDE" : { "http_response" : { "http_response" : "HTTP data" } }
          }
        },
        { "mimemail" : {
            "key" : [ "site:name" ],
            "to" : "nickstankus@creighton.edu",
            "from_name" : "Inter-college Transfer Request",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "Current Dean Action: [node:field-current-college-autofill] New Inter-college Transfer Request Notification ([node:created])",
            "body" : "A New Inter-college Transfer Request has been submitted.\\u003Cbr\\u003E\\r\\nRequestor wishes to transfer from \\u003Cb\\u003E[node:field-current-college-autofill]\\u003C\\/b\\u003E to \\u003Cb\\u003E[node:field_transfer_college]\\u003C\\/b\\u003E.\\r\\n\\u003Cbr\\u003E\\r\\nPlease use link below to access submission.\\r\\n\\u003Cul\\u003E\\r\\n\\u003Cli\\u003E\\u003Ca href=\\u0022[site:url]workflow\\/ict\\/spahp\\u0022\\u003EView all SPAHP transfer requests\\u003C\\/a\\u003E\\u003C\\/li\\u003E\\r\\n\\u003C\\/ul\\u003E\\r\\n",
            "language" : [ "" ]
          }
        },
        { "mimemail" : {
            "key" : [ "node:field-netid" ],
            "to" : "[node:field-netid]@creighton.edu",
            "bcc" : "nickstankus@creighton.edu",
            "from_name" : "Inter-college transfer",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "Inter-college transfer Request Received",
            "body" : "Your transfer request has been submitted. You will be contacted by [node:field-current-college-autofill] to schedule a meeting and review of your transfer request.",
            "language" : [ "" ]
          }
        },
        { "workflowfield_field_set_state" : {
            "node" : [ "node" ],
            "field" : [ "node:field-workflow" ],
            "workflow_state" : { "value" : { "12" : "12" } },
            "workflow_comment" : "Student submitted request to transfer out of School of Pharmacy and Health Professions."
          }
        },
        { "redirect" : { "url" : "[site:url]cict\\/[node:nid]" } },
        { "redirect" : { "url" : "https:\\/\\/my.creighton.edu" } }
      ]
    }
  }');
  $items['rules_updated_workflow_state_email'] = entity_import('rules_config', '{ "rules_updated_workflow_state_email" : {
      "LABEL" : "Updated ICT Workflow State Email",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "ict-workflow" ],
      "REQUIRES" : [ "rules", "mimemail" ],
      "ON" : { "node_update--intercollege_transfer" : { "bundle" : "intercollege_transfer" } },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "3" : "3", "6" : "6" } },
            "operation" : "OR"
          }
        },
        { "NOT data_is" : { "data" : [ "node:field-workflow" ], "value" : "4" } }
      ],
      "DO" : [
        { "mimemail" : {
            "key" : [ "site:name" ],
            "to" : "nickstankus@creighton.edu",
            "from_name" : "Inter-college Transfer Request",
            "from_mail" : "noreply@creighton.edu",
            "reply_to" : "noreply@creighton.edu",
            "subject" : "Inter-college Transfer Request for [site:current-user] changed from [WorkflowTransition:old-state] to [WorkflowTransition:new-state]",
            "body" : "A New Inter-college Transfer Request changed state from [WorkflowTransition:old-state] to [WorkflowTransition:new-state]\\u003Cbr\\u003E\\r\\n\\u003Cbr\\u003E\\r\\nPlease use links below to access submission.\\r\\n\\u003Cul\\u003E\\r\\n\\u003Cli\\u003E\\u003Cb\\u003EView\\u003C\\/b\\u003E: \\u003Ca href=\\u0022[site:url]node[WorkflowTransition:nid]\\u0022\\u003E[site:url]node[WorkflowTransition:nid]\\u003C\\/a\\u003E\\u003C\\/li\\u003E\\r\\n\\u003Cli\\u003E\\u003Cb\\u003EEdit\\u003C\\/b\\u003E: \\u003Ca href=\\u0022[site:url]node[WorkflowTransition:nid]\\/edit\\u0022\\u003E[site:url]node[WorkflowTransition:nid]\\/edit\\u003C\\/a\\u003E\\u003C\\/li\\u003E\\r\\n\\u003Cli\\u003E\\u003Cb\\u003EEdit Workflow State\\u003C\\/b\\u003E: \\u003Ca href=\\u0022[site:url]node[WorkflowTransition:nid]workflow?destination=workflow\\u0022\\u003E[site:url]node[WorkflowTransition:nid]workflow?destination=workflow\\u003C\\/a\\u003E\\u003C\\/li\\u003E\\r\\n\\u003C\\/ul\\u003E\\r\\n\\u003Cbr\\u003E\\r\\n\\u003Cb\\u003EView all current requests on the workflow dashboard.\\u003C\\/b\\u003E\\u003Cbr\\u003E\\r\\nWorkflow Dashboard: \\u003Ca href=\\u0022[site:url]workflow\\u0022\\u003E[site:url]workflow\\u003C\\/a\\u003E\\r\\n\\u003Cbr\\u003E\\u003Cbr\\u003E\\r\\n\\u003Cb\\u003ENode Last Transition\\u003C\\/b\\u003E: [node:last-transition]\\u003Cbr\\u003E\\r\\n\\u003Cb\\u003ENode Field Workflow\\u003C\\/b\\u003E: [node:field-workflow]\\u003Cbr\\u003E\\r\\n\\u003Cbr\\u003E\\r\\n\\u003Cb\\u003EUser\\u003C\\/b\\u003E: [WorkflowTransition:user]\\u003Cbr\\u003E\\r\\n\\u003Cb\\u003ETimestamp\\u003C\\/b\\u003E: [WorkflowTransition:timestamp]\\r\\n\\u003Cb\\u003EDiff\\u003C\\/b\\u003E: [node:diff-markdown]\\r\\n\\r\\n",
            "plaintext" : "[site:name] [site:mail] [WorkflowTransition:field-name]\\r\\n\\r\\n[WorkflowTransition:workflow] changed from [WorkflowTransition:old-state] to [WorkflowTransition:new-state]\\r\\n\\r\\n[WorkflowTransition:user] [WorkflowTransition:timestamp]\\r\\n\\r\\n[site:url]\\/node\\/[WorkflowTransition:nid]\\/workflow?destination=workflow",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
