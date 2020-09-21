<?php
/**
 * @file
 * parking_permits.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function parking_permits_default_rules_configuration() {
  $items = array();
  $items['rules_count_vehicles'] = entity_import('rules_config', '{ "rules_count_vehicles" : {
      "LABEL" : "count vehicles er2",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-2",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_update--permit2" : { "bundle" : "permit2" },
        "node_insert--permit2" : { "bundle" : "permit2" }
      },
      "IF" : [
        { "NOT data_is_empty" : { "data" : [ "node:field-sticker-to-vehicle-2-er" ] } },
        { "data_is" : { "data" : [ "node:field-authorization-select" ], "value" : "1" } },
        { "OR" : [
            { "entity_is_new" : { "entity" : [ "node" ] } },
            { "NOT data_is" : {
                "data" : [ "node:field-authorization-select" ],
                "value" : [ "node-unchanged:field-authorization-select" ]
              }
            }
          ]
        }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "node:field-fee-vehicle-add-count" ],
            "value" : {
              "select" : "node:field-fee-vehicle-add-count",
              "num_offset" : { "value" : "1" }
            }
          }
        }
      ]
    }
  }');
  $items['rules_count_vehicles_3'] = entity_import('rules_config', '{ "rules_count_vehicles_3" : {
      "LABEL" : "count vehicles er3",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-1",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_update--permit2" : { "bundle" : "permit2" },
        "node_insert--permit2" : { "bundle" : "permit2" }
      },
      "IF" : [
        { "NOT data_is_empty" : { "data" : [ "node:field-sticker-to-vehicle-3-er" ] } },
        { "data_is" : { "data" : [ "node:field-authorization-select" ], "value" : "1" } },
        { "OR" : [
            { "entity_is_new" : { "entity" : [ "node" ] } },
            { "NOT data_is" : {
                "data" : [ "node:field-authorization-select" ],
                "value" : [ "node-unchanged:field-authorization-select" ]
              }
            }
          ]
        }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "node:field-fee-vehicle-add-count" ],
            "value" : {
              "select" : "node:field-fee-vehicle-add-count",
              "num_offset" : { "value" : "1" }
            }
          }
        }
      ]
    }
  }');
  $items['rules_count_vehicles_init'] = entity_import('rules_config', '{ "rules_count_vehicles_init" : {
      "LABEL" : "count vehicles init",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "-3",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_update--permit2" : { "bundle" : "permit2" },
        "node_insert--permit2" : { "bundle" : "permit2" }
      },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-authorization-select" ], "value" : "1" } },
        { "OR" : [
            { "entity_is_new" : { "entity" : [ "node" ] } },
            { "NOT data_is" : {
                "data" : [ "node:field-authorization-select" ],
                "value" : [ "node-unchanged:field-authorization-select" ]
              }
            }
          ]
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-fee-vehicle-add-count" ], "value" : "0" } }
      ]
    }
  }');
  $items['rules_parking_permit_email_confirmation'] = entity_import('rules_config', '{ "rules_parking_permit_email_confirmation" : {
      "LABEL" : "Parking Permit Email Confirmation",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "mimemail" ],
      "ON" : { "node_update--permit2" : { "bundle" : "permit2" } },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-authorization-select" ], "value" : "1" } },
        { "NOT data_is_empty" : { "data" : [ "node:field-sticker-num-1" ] } },
        { "NOT data_is" : {
            "data" : [ "node:field-sticker-num-1" ],
            "value" : [ "node-unchanged:field-sticker-num-1" ]
          }
        }
      ],
      "DO" : [
        { "mimemail" : {
            "key" : "[node:field-netid-ref:field-first-name] [node:field-netid-ref:field-last-name]",
            "to" : "[node:field-netid-ref:mail]",
            "from_mail" : "parking@creighton.edu",
            "subject" : "[node:field-permit-year-tax:name] Parking Permit Confirmation",
            "body" : "Dear [node:field-netid-ref:field-first-name],\\u003Cbr \\/\\u003E\\r\\n\\u003Cbr \\/\\u003E\\r\\nThis message is to notify you that your [node:field-permit-year-tax:name] Parking Permit has been approved. If you selected to pick up your permit at Public Safety, it is now ready for pickup, otherwise you should expect to receive it via Campus Mail at the office location provided on your application.\\u003Cbr \\/\\u003E\\r\\n\\u003Cbr \\/\\u003E\\r\\nCreighton University Department of Public Safety\\u003Cbr \\/\\u003E\\r\\n(402) 280-2104\\u003Cbr \\/\\u003E\\r\\n2222 Burt St.",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_populate_employment_fields'] = entity_import('rules_config', '{ "rules_populate_employment_fields" : {
      "LABEL" : "populate employment fields",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "wsclient" ],
      "ON" : { "user_login" : [] },
      "DO" : [
        { "wsclient_hr_person_parking_permit_get_employee_attributes" : {
            "USING" : { "param_netID" : "[account:name]" },
            "PROVIDE" : { "result" : { "result" : "Employee attributes" } }
          }
        },
        { "data_set" : {
            "data" : [ "account:field-payroll-type" ],
            "value" : [ "result:PYROLL" ]
          }
        },
        { "data_set" : {
            "data" : [ "account:field-person-type" ],
            "value" : [ "result:PERSON-TYPE" ]
          }
        },
        { "data_set" : {
            "data" : [ "account:field-employee-number" ],
            "value" : [ "result:EMPLOYEE-NBR" ]
          }
        },
        { "data_set" : {
            "data" : [ "account:field-full-time-part-time" ],
            "value" : [ "result:FT-PT" ]
          }
        },
        { "data_set" : {
            "data" : [ "account:field-first-name" ],
            "value" : [ "result:FIRST-NAME" ]
          }
        },
        { "data_set" : {
            "data" : [ "account:field-middle-name" ],
            "value" : [ "result:MIDDLE-NAME" ]
          }
        },
        { "data_set" : {
            "data" : [ "account:field-last-name" ],
            "value" : [ "result:LAST-NAME" ]
          }
        },
        { "data_set" : {
            "data" : [ "account:field-location" ],
            "value" : [ "result:LOC-DESCR" ]
          }
        },
        { "data_set" : { "data" : [ "account:field-org" ], "value" : [ "result:ORG-NAME" ] } }
      ]
    }
  }');
  $items['rules_retrieve_calculate_fees'] = entity_import('rules_config', '{ "rules_retrieve_calculate_fees" : {
      "LABEL" : "retrieve and calculate fees",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "5",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "views_rules" ],
      "ON" : {
        "node_update--permit2" : { "bundle" : "permit2" },
        "node_insert--permit2" : { "bundle" : "permit2" }
      },
      "IF" : [
        { "data_is" : { "data" : [ "node:field-authorization-select" ], "value" : "1" } },
        { "OR" : [
            { "entity_is_new" : { "entity" : [ "node" ] } },
            { "NOT data_is" : {
                "data" : [ "node:field-authorization-select" ],
                "value" : [ "node-unchanged:field-authorization-select" ]
              }
            }
          ]
        }
      ],
      "DO" : [
        { "VIEW LOOP" : {
            "VIEW" : "my_permit_pricing_info",
            "DISPLAY" : "views_rules_1",
            "USING" : {
              "field_permit_year_frct_value" : [ "node:field-permit-year-tax:tid" ],
              "field_ft_pt_frct_value" : [ "node:field-netid-ref:uid" ],
              "field_pay_cycle_frct_value" : [ "node:field-netid-ref:uid" ],
              "field_person_type_frct_value" : [ "node:field-netid-ref:uid" ]
            },
            "ROW VARIABLES" : {
              "field_add_veh_amt_frct" : { "field_add_veh_amt_frct" : "add_veh_amt" },
              "field_deductions_frct" : { "field_deductions_frct" : "deductions" },
              "field_ft_pt_frct" : { "field_ft_pt_frct" : "ft_pt" },
              "field_last_appl_date_frct" : { "field_last_appl_date_frct" : "last_appl_date" },
              "field_pay_cycle_frct" : { "field_pay_cycle_frct" : "pay_cycle" },
              "field_permit_year_frct" : { "field_permit_year_frct" : "permit_year" },
              "field_person_type_frct" : { "field_person_type_frct" : "person_type" },
              "field_total_amt_frct" : { "field_total_amt_frct" : "total_amt" },
              "field_first_pymt_date_frct_1" : { "field_first_pymt_date_frct_1" : "first_pymt_date plain" },
              "php_1" : { "php_1" : "authorization_date plain" }
            },
            "DO" : [
              { "data_calc" : {
                  "USING" : {
                    "input_1" : [ "node:field-fee-vehicle-add-count" ],
                    "op" : "*",
                    "input_2" : [ "field-add-veh-amt-frct" ]
                  },
                  "PROVIDE" : { "result" : { "fee_add_result" : "Calculation result" } }
                }
              },
              { "data_calc" : {
                  "USING" : {
                    "input_1" : [ "fee-add-result" ],
                    "op" : "+",
                    "input_2" : [ "field-total-amt-frct" ]
                  },
                  "PROVIDE" : { "result" : { "fee_total_result" : "Calculation result" } }
                }
              },
              { "data_set" : {
                  "data" : [ "node:field-fee-total-amt" ],
                  "value" : [ "fee-total-result" ]
                }
              },
              { "data_set" : {
                  "data" : [ "node:field-fee-num-deductions" ],
                  "value" : [ "field-deductions-frct" ]
                }
              },
              { "data_calc" : {
                  "USING" : {
                    "input_1" : [ "fee-total-result" ],
                    "op" : "\\/",
                    "input_2" : [ "field-deductions-frct" ]
                  },
                  "PROVIDE" : { "result" : { "fee_deduction_result" : "Calculation result" } }
                }
              },
              { "data_set" : {
                  "data" : [ "node:field-fee-deduction-amt" ],
                  "value" : [ "fee-deduction-result" ]
                }
              },
              { "data_set" : { "data" : [ "node:field-fee-ft-pt" ], "value" : [ "field-ft-pt-frct" ] } },
              { "data_set" : {
                  "data" : [ "node:field-fee-pay-cycle" ],
                  "value" : [ "field-pay-cycle-frct" ]
                }
              },
              { "data_set" : {
                  "data" : [ "node:field-fee-first-payment-date" ],
                  "value" : [ "field-first-pymt-date-frct-1" ]
                }
              },
              { "data_set" : { "data" : [ "node:field-fee-date-authorized" ], "value" : [ "php-1" ] } }
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
