<?php
/**
 * @file
 * lb_reminders.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function lb_reminders_default_rules_configuration() {
  $items = array();
  $items['lb_reminders_lb_application_reminder_1'] = entity_import('rules_config', '{ "lb_reminders_lb_application_reminder_1" : {
      "LABEL" : "LB Application Reminder 1",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny" ],
      "REQUIRES" : [ "lb_registration", "rules", "mimemail" ],
      "USES VARIABLES" : {
        "lb_application_contact" : { "label" : "Contact", "type" : "crm_core_contact" },
        "lb_application" : { "label" : "Application", "type" : "crm_core_activity" },
        "lb_company" : { "label" : "Company", "type" : "crm_core_contact" }
      },
      "IF" : [
        { "lb_registration_company_application_is_pending" : { "company" : [ "lb-company" ] } },
        { "AND" : [] },
        { "NOT lb_registration_company_application_initiated" : { "company" : [ "lb-company" ] } }
      ],
      "DO" : [
        { "mimemail" : {
            "key" : "LB Application Reminder 1 for contact [lb-application-contact:contact-id]",
            "to" : "[lb-application-contact:field-ao-email-address]",
            "subject" : "You have not yet completed your application to the Leaping Bunny Program",
            "body" : "Dear [lb-application-contact:contact_name]:\\r\\nThank you for your interest in becoming Leaping Bunny Certified. We noticed that you started your application on [lb-application:field-activity-date] but haven\\u2019t yet completed it. We\\u2019d love to add [lb-company:contact_name] to our growing list of cruelty-free companies. Once certified, you\\u2019ll be listed on our website and in our new Cruelty-Free App, which gets over 5,000 downloads a month, plus be able to take advantage of a full menu of free marketing and promotional opportunities through social media and more. Joining our program is free and optionally licensing our logo is a one-time nominal fee. \\r\\n\\r\\nTo continue working on your application, click here. (www.leapingbunny.org\\/user) If you have trouble logging in or need additional assistance, we are happy to help. You can email us at admin@leapingbunny.org or call us M-F from 9am-4pm ET at 888.548.2242. \\r\\n\\r\\nWe look forward to helping you get certified!\\r\\n\\r\\nThe Leaping Bunny Team",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['lb_reminders_lb_application_reminder_2'] = entity_import('rules_config', '{ "lb_reminders_lb_application_reminder_2" : {
      "LABEL" : "LB Application Reminder 2",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny" ],
      "REQUIRES" : [ "lb_registration", "rules", "mimemail" ],
      "USES VARIABLES" : {
        "lb_application_contact" : { "label" : "Contact", "type" : "crm_core_contact" },
        "lb_application" : { "label" : "Application", "type" : "crm_core_activity" },
        "lb_company" : { "label" : "Company", "type" : "crm_core_contact" }
      },
      "IF" : [
        { "lb_registration_company_application_is_pending" : { "company" : [ "lb-company" ] } },
        { "AND" : [] },
        { "NOT lb_registration_company_application_initiated" : { "company" : [ "lb-company" ] } }
      ],
      "DO" : [
        { "mimemail" : {
            "key" : "LB Application reminder 2 for contact [lb-application-contact:contact-id]",
            "to" : "[lb-application-contact:field-ao-email-address]",
            "subject" : "Do you still wish to become Leaping Bunny certified?",
            "body" : "Dear [lb-application-contact:contact_name]:\\r\\nThank you for beginning your application for Leaping Bunny certification. Your application is still incomplete. Do you have questions or need assistance?  You can always email us at admin@leapingbunny.org and we will respond within one business day or call us M-F from 9am-4pm ET at 888.548.2242. If you do not wish to continue with your application, let us know and we will close it.\\r\\n\\r\\nTo continue working on your application, click here. (www.leapingbunny.org\\/user) We look forward to helping you get certified!\\r\\n\\r\\nThe Leaping Bunny Team"
          }
        }
      ]
    }
  }');
  $items['lb_reminders_lb_check_manufacturer_declaration'] = entity_import('rules_config', '{ "lb_reminders_lb_check_manufacturer_declaration" : {
      "LABEL" : "LB Check Manufacturer Declaration",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny" ],
      "REQUIRES" : [ "rules", "lb_registration" ],
      "USES VARIABLES" : {
        "lb_manufacturer" : { "label" : "manufacturer", "type" : "entity" },
        "lb_company" : { "label" : "company", "type" : "entity" }
      },
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "lb-manufacturer" ], "type" : "crm_core_contact" } },
        { "entity_is_of_type" : { "entity" : [ "lb-company" ], "type" : "crm_core_contact" } },
        { "entity_has_field" : { "entity" : [ "lb-manufacturer" ], "field" : "field_lb_declaration" } },
        { "data_is_empty" : { "data" : [ "lb-manufacturer:field-lb-declaration" ] } },
        { "NOT lb_registration_product_declaration_submitted" : { "supplier" : [ "lb-manufacturer" ], "company" : [ "lb-company" ] } }
      ],
      "DO" : [
        { "mail" : {
            "to" : [
              "lb-company:relation-lb-primary-contact-crm-core-contact:0:primary-email"
            ],
            "subject" : "Your application is missing information",
            "message" : "Dear [lb-manufacturer:contact-name]:\\r\\nWe wanted to let you know that your application for Leaping Bunny certification is missing one or more signed Declaration for Product Compliance forms. To encourage your manufacturers to sign the forms, we first recommend that you contact them directly to check to make sure they received your request and to remind them to fill it out. In addition, you can always log into our website at www.leapingbunny.org\\/user and resend declarations through your company\\u2019s account. \\r\\n\\r\\nIf you need assistance, you can always email us at admin@leapingbunny.org and we will respond within one business day or call us M-F from 9am-4pm ET at 888.548.2242.\\r\\n\\r\\nSincerely,\\r\\nThe Leaping Bunny Team\\r\\n"
          }
        }
      ]
    }
  }');
  $items['lb_reminders_lb_check_supplier_declaration'] = entity_import('rules_config', '{ "lb_reminders_lb_check_supplier_declaration" : {
      "LABEL" : "LB Check Supplier Declaration",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny" ],
      "REQUIRES" : [ "rules", "lb_registration" ],
      "USES VARIABLES" : {
        "lb_supplier" : { "label" : "supplier", "type" : "entity" },
        "lb_company" : { "label" : "company", "type" : "entity" }
      },
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "lb-supplier" ], "type" : "crm_core_contact" } },
        { "entity_has_field" : { "entity" : [ "lb-supplier" ], "field" : "field_lb_declaration" } },
        { "NOT lb_registration_material_declaration_submitted" : { "supplier" : [ "lb-supplier" ], "company" : [ "lb-company" ] } },
        { "data_is_empty" : { "data" : [ "lb-supplier:field-lb-declaration" ] } },
        { "entity_is_of_type" : { "entity" : [ "lb-company" ], "type" : "crm_core_contact" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : [
              "lb-company:relation-lb-primary-contact-crm-core-contact:0:primary-email"
            ],
            "subject" : "Your application is missing information",
            "message" : "Dear [lb-supplier:contact-name]:\\r\\nWe wanted to let you know that your application for Leaping Bunny certification is missing one or more signed Declaration for Raw Material Compliance forms. To encourage your suppliers to sign the forms, we first recommend that you contact them directly to check to make sure they received your request and to remind them to fill it out. In addition, you can always log into our website at www.leapingbunny.org\\/user and resend declarations through your company\\u2019s account. \\r\\n\\r\\nIf you need assistance, you can always email us at admin@leapingbunny.org and we will respond within one business day or call us M-F from 9am-4pm ET at 888.548.2242.\\r\\n\\r\\nSincerely,\\r\\nThe Leaping Bunny Team"
          }
        }
      ]
    }
  }');
  $items['rules_lb_application_reminder'] = entity_import('rules_config', '{ "rules_lb_application_reminder" : {
      "LABEL" : "LB Application Reminder",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny" ],
      "REQUIRES" : [ "rules", "rules_scheduler", "crm_core_activity" ],
      "ON" : { "crm_core_activity_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "crm-core-activity" ],
            "type" : "crm_core_activity",
            "bundle" : { "value" : { "lb_application_request_approved" : "lb_application_request_approved" } }
          }
        }
      ],
      "DO" : [
        { "schedule" : {
            "component" : "lb_reminders_lb_application_reminder_1",
            "date" : "+2 weeks",
            "identifier" : "Send reminder email after 2 weeks to [crm-core-activity:field-lb-company] started [crm-core-activity:created]",
            "param_lb_application_contact" : [ "crm-core-activity:field-lb-primary-contact" ],
            "param_lb_application" : [ "crm-core-activity:field-lb-application-request" ],
            "param_lb_company" : [ "crm-core-activity:field-lb-company" ]
          }
        },
        { "schedule" : {
            "component" : "lb_reminders_lb_application_reminder_2",
            "date" : "+4 weeks",
            "identifier" : "Send reminder email after 4 weeks to [crm-core-activity:field-lb-company] started [crm-core-activity:created]",
            "param_lb_application_contact" : [ "crm-core-activity:field-lb-primary-contact" ],
            "param_lb_application" : [ "crm-core-activity:field-lb-application-request" ],
            "param_lb_company" : [ "crm-core-activity:field-lb-company" ]
          }
        }
      ]
    }
  }');
  $items['rules_lb_manufacturer_declaration_reminder'] = entity_import('rules_config', '{ "rules_lb_manufacturer_declaration_reminder" : {
      "LABEL" : "LB Manufacturer Declaration Reminder",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny" ],
      "REQUIRES" : [ "rules", "rules_scheduler", "relation" ],
      "ON" : { "relation_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "relation" ],
            "type" : "relation",
            "bundle" : { "value" : { "lb_manufacturer" : "lb_manufacturer" } }
          }
        }
      ],
      "DO" : [
        { "schedule" : {
            "component" : "lb_reminders_lb_check_manufacturer_declaration",
            "date" : "+4 weeks",
            "identifier" : "Send remainder email to manufacturer contact [relation:field-lb-manufacturer]",
            "param_lb_manufacturer" : [ "relation:endpoints:0" ],
            "param_lb_company" : [ "relation:endpoints:1" ]
          }
        }
      ]
    }
  }');
  $items['rules_lb_supplier_declaration_reminder'] = entity_import('rules_config', '{ "rules_lb_supplier_declaration_reminder" : {
      "LABEL" : "LB Supplier Declaration Reminder",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny" ],
      "REQUIRES" : [ "rules", "rules_scheduler", "relation" ],
      "ON" : { "relation_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "relation" ],
            "type" : "relation",
            "bundle" : { "value" : { "lb_supplier" : "lb_supplier" } }
          }
        }
      ],
      "DO" : [
        { "schedule" : {
            "component" : "lb_reminders_lb_check_supplier_declaration",
            "date" : "+4 weeks",
            "identifier" : "Send declaration reminder email to supplier [relation:field-lb-supplier]",
            "param_lb_supplier" : [ "relation:endpoints:0" ],
            "param_lb_company" : [ "relation:endpoints:1" ]
          }
        }
      ]
    }
  }');
  return $items;
}

/* // Code with old reminder rules
  $items['lb_reminders_lb_application_reminder_1'] = entity_import('rules_config', '{ "lb_reminders_lb_application_reminder_1" : {
      "LABEL" : "LB Application Reminder 1",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny" ],
      "REQUIRES" : [ "lb_registration", "rules", "mimemail" ],
      "USES VARIABLES" : {
        "lb_application_contact" : { "label" : "Contact", "type" : "crm_core_contact" },
        "lb_application" : { "label" : "Application", "type" : "crm_core_activity" },
        "lb_company" : { "label" : "Company", "type" : "crm_core_contact" }
      },
      "IF" : [
        { "lb_registration_company_application_is_pending" : { "company" : [ "lb-application-contact" ] } },
        { "AND" : [] },
        { "NOT lb_registration_company_application_initiated" : { "company" : [ "lb-application-contact" ] } }
      ],
      "DO" : [
        { "mimemail" : {
            "key" : "LB Application Reminder 1 for contact [lb-application-contact:contact-id]",
            "to" : "[lb-application:field-lb-primary-contact:field-ao-email-address]",
            "subject" : "You have not yet completed your application to the Leaping Bunny Program",
            "body" : "Dear [lb-company:name-contact-name]:\\r\\nThank you for your interest in becoming Leaping Bunny Certified. We noticed that you started your application on [lp-application:field-activity-date] but haven\\u2019t yet completed it. We\\u2019d love to add [lb-application-contact:contact_name] to our growing list of cruelty-free companies. Once certified, you\\u2019ll be listed on our website and in our new Cruelty-Free App, which gets over 5,000 downloads a month, plus be able to take advantage of a full menu of free marketing and promotional opportunities through social media and more. Joining our program is free and optionally licensing our logo is a one-time nominal fee. \\r\\n\\r\\nTo continue working on your application, click here. (www.leapingbunny.org\\/user) If you have trouble logging in or need additional assistance, we are happy to help. You can email us at admin@leapingbunny.org or call us M-F from 9am-4pm ET at 888.548.2242. \\r\\n\\r\\nWe look forward to helping you get certified!\\r\\n\\r\\nThe Leaping Bunny Team",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['lb_reminders_lb_application_reminder_2'] = entity_import('rules_config', '{ "lb_reminders_lb_application_reminder_2" : {
      "LABEL" : "LB Application Reminder 2",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny" ],
      "REQUIRES" : [ "lb_registration", "rules", "mimemail" ],
      "USES VARIABLES" : {
        "lb_application_contact" : { "label" : "Contact", "type" : "crm_core_contact" },
        "lb_application" : { "label" : "Application", "type" : "crm_core_activity" },
        "lb_company" : { "label" : "Company", "type" : "crm_core_contact_type" }
      },
      "IF" : [
        { "lb_registration_company_application_is_pending" : { "company" : [ "lb-application-contact" ] } },
        { "AND" : [] },
        { "NOT lb_registration_company_application_initiated" : { "company" : [ "lb-application-contact" ] } }
      ],
      "DO" : [
        { "mimemail" : {
            "key" : "LB Application reminder 2 for contact [lb-application-contact:contact-id]",
            "to" : "[lb-application:field-lb-primary-contact:field-ao-email-address]",
            "subject" : "Do you still wish to become Leaping Bunny certified?",
            "body" : "Dear [lb-application-contact:contact-name]:\\r\\nThank you for beginning your application for Leaping Bunny certification. Your application is still incomplete. Do you have questions or need assistance?  You can always email us at admin@leapingbunny.org and we will respond within one business day or call us M-F from 9am-4pm ET at 888.548.2242. If you do not wish to continue with your application, let us know and we will close it.\\r\\n\\r\\nTo continue working on your application, click here. (www.leapingbunny.org\\/user) We look forward to helping you get certified!\\r\\n\\r\\nThe Leaping Bunny Team"
          }
        }
      ]
    }
  }');
  $items['rules_lb_application_reminder'] = entity_import('rules_config', '{ "rules_lb_application_reminder" : {
      "LABEL" : "Application Reminder",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny" ],
      "REQUIRES" : [ "rules", "rules_scheduler", "crm_core_activity" ],
      "ON" : { "crm_core_activity_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "crm-core-activity" ],
            "type" : "crm_core_activity",
            "bundle" : { "value" : { "lb_application_request_approved" : "lb_application_request_approved" } }
          }
        }
      ],
      "DO" : [
        { "schedule" : {
            "component" : "lb_reminders_lb_application_reminder_1_cloned_",
            "date" : "+2 minutes",
            "identifier" : "Send reminder email after 2 weeks to [crm-core-activity:field-lb-company] created  [crm-core-activity:created]"
          }
        },
        { "schedule" : {
            "component" : "lb_reminders_lb_application_reminder_2_cloned_",
            "date" : "+4 minutes",
            "identifier" : "Send reminder email after 4 weeks to [crm-core-activity:field-lb-company] created  [crm-core-activity:created]"
          }
        }
      ]
    }
  }');
  $items['rules_lb_check_manufacturer_declaration'] = entity_import('rules_config', '{ "rules_lb_check_manufacturer_declaration" : {
      "LABEL" : "LB Check Manufacturer Declaration",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny" ],
      "REQUIRES" : [ "rules", "lb_registration" ],
      "USES VARIABLES" : {
        "lb_manufacturer" : { "label" : "maufacturer", "type" : "entity" },
        "lb_company" : { "label" : "company", "type" : "entity" }
      },
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "lb-manufacturer" ], "type" : "crm_core_contact" } },
        { "entity_is_of_type" : { "entity" : [ "lb-company" ], "type" : "crm_core_contact" } },
        { "entity_has_field" : { "entity" : [ "lb-manufacturer" ], "field" : "field_lb_declaration" } },
        { "data_is_empty" : { "data" : [ "lb-manufacturer:field-lb-declaration" ] } },
        { "NOT lb_registration_product_declaration_submitted" : { "supplier" : [ "lb-manufacturer" ], "company" : [ "lb-company" ] } }
      ],
      "DO" : [
        { "mail" : {
            "to" : [
              "lb-company:relation-lb-primary-contact-crm-core-contact:0:primary-email"
            ],
            "subject" : "[lb-manufacturer:name-contact-name] has not submitted a declaration",
            "message" : "This is some text about how the manufacturer has not submitted a declaration.",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_lb_check_supplier_declaration'] = entity_import('rules_config', '{ "rules_lb_check_supplier_declaration" : {
      "LABEL" : "LB Check Supplier Declaration",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny" ],
      "REQUIRES" : [ "rules", "lb_registration" ],
      "USES VARIABLES" : {
        "lb_supplier" : { "label" : "supplier", "type" : "entity" },
        "lb_company" : { "label" : "company", "type" : "entity" }
      },
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "lb-supplier" ], "type" : "crm_core_contact" } },
        { "entity_has_field" : { "entity" : [ "lb-supplier" ], "field" : "field_lb_declaration" } },
        { "NOT lb_registration_material_declaration_submitted" : { "supplier" : [ "lb-supplier" ], "company" : [ "lb-company" ] } },
        { "data_is_empty" : { "data" : [ "lb-supplier:field-lb-declaration" ] } },
        { "entity_is_of_type" : { "entity" : [ "lb-company" ], "type" : "crm_core_contact" } }
      ],
      "DO" : [
        { "mail" : {
            "to" : [
              "lb-company:relation-lb-primary-contact-crm-core-contact:0:primary-email"
            ],
            "subject" : "[lb-supplier:name-contact-name] has not submitted a declaration",
            "message" : "This is some text about how the supplier hasn\\u0027t submitted a declaration",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_lb_supplier_declaration_reminder'] = entity_import('rules_config', '{ "rules_lb_supplier_declaration_reminder" : {
      "LABEL" : "LB Supplier Declaration Reminder",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny" ],
      "REQUIRES" : [ "rules", "rules_scheduler", "relation" ],
      "ON" : { "relation_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "relation" ],
            "type" : "relation",
            "bundle" : { "value" : { "lb_supplier" : "lb_supplier" } }
          }
        }
      ],
      "DO" : [
        { "schedule" : {
            "component" : "lb_reminders_lb_check_supplier_declaration_new",
            "date" : "+2 hours",
            "identifier" : "Send declaration reminder email to supplier [relation:field-lb-supplier]",
            "param_lb_supplier" : [ "relation:endpoints:0" ],
            "param_lb_company" : [ "relation:endpoints:1" ]
          }
        }
      ]
    }
  }');
  $items['rules_manufacturer_declaration_reminder'] = entity_import('rules_config', '{ "rules_manufacturer_declaration_reminder" : {
      "LABEL" : "LB Manufacturer Declaration Reminder",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny" ],
      "REQUIRES" : [ "rules", "rules_scheduler", "relation" ],
      "ON" : { "relation_insert" : [] },
      "IF" : [
        { "entity_is_of_bundle" : {
            "entity" : [ "relation" ],
            "type" : "relation",
            "bundle" : { "value" : { "lb_manufacturer" : "lb_manufacturer" } }
          }
        }
      ],
      "DO" : [
        { "schedule" : {
            "component" : "rules_lb_check_manufacturer_declaration",
            "date" : "+2 hours",
            "identifier" : "Send remainder email to manufacturer contact [relation:field-lb-manufacturer]",
            "param_lb_manufacturer" : [ "relation:endpoints:0" ],
            "param_lb_company" : [ "relation:endpoints:1" ]
          }
        }
      ]
    }
  }');*/