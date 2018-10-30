<?php
/**
 * @file
 * lb_registration.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function lb_registration_default_rules_configuration() {
  $items = array();
  $items['lb_registration_lb_application_recommitment_due'] = entity_import('rules_config', '{ "lb_registration_lb_application_recommitment_due" : {
      "LABEL" : "LB: Application Recommitment Due",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny Certification Process" ],
      "REQUIRES" : [ "rules", "mimemail" ],
      "USES VARIABLES" : {
        "company" : { "label" : "Company", "type" : "crm_core_contact" },
        "contact" : { "label" : "Primary Contact", "type" : "crm_core_contact" }
      },
      "RULES" : [
        { "RULE" : {
            "DO" : [
              { "mimemail" : {
                  "key" : "rules_lb_application_recommitment_due",
                  "to" : "[contact:primary-email]",
                  "from_mail" : "recommit@leapingbunny.org",
                  "subject" : "Your Status with the Leaping Bunny Program",
                  "body" : "\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nDear [contact:contact_name],\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nThank you for being part of the Leaping Bunny Program! This message contains important and time-sensitive information about actions you must take in order to keep your company\\u2019s status as \\u201ccertified cruelty-free.\\u201d\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nA key difference between the Leaping Bunny Program and other cruelty-free certification programs is our requirement that companies \\u201crecommit\\u201d to the program annually. We know that product formulations change, suppliers come and go, and manufacturers develop innovative lines to meet consumer needs. Therefore, it is essential for us to confirm that while products and ingredients may change, a Leaping Bunny certified company\\u2019s animal testing policy remains the same.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nTo get started, please complete the following steps:\\r\\n\\u003Col\\u003E\\r\\n\\u003Cli\\u003EGo to \\u003Ca href=\\u0022http:\\/\\/leapingbunny.org\\/user\\u0022\\u003ELeapingBunny.org\\/user\\u003C\\/a\\u003E.\\u003C\\/li\\u003E\\r\\n\\u003Cli\\u003EEnter your username and password.\\u003C\\/li\\u003E\\r\\n\\u003Cli\\u003EOnce you are in your account, click the Complete Recommitment button (on the right side of your screen) and go through the step-by-step process of updating information in each section of the application.\\u003C\\/li\\u003E\\r\\n\\u003Cli\\u003EAfter submitting your Recommitment Application, a Leaping Bunny staff person will review all of your information, and be in touch to let you know if there are any questions or if the application has been accepted.\\u003C\\/li\\u003E\\r\\n\\u003C\\/ol\\u003E\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nIt is important that we hear back from you. Please complete your recommitment process within 3 weeks of receiving this message in order to remain part of the Leaping Bunny Program.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nIf you have any questions, please view the Recommitment FAQ on our website or email \\u003Ca href=\\u0022mailto:recommit@leapingbunny.org\\u0022\\u003Erecommit@leapingbunny.org\\u003C\\/a\\u003E or call us at 888-546-2242.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nWe look forward to hearing from you!\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nThe Leaping Bunny Team\\r\\n\\u003C\\/p\\u003E\\r\\n",
                  "language" : [ "" ]
                }
              }
            ],
            "LABEL" : "Send HTML Email"
          }
        }
      ]
    }
  }');
  $items['lb_registration_lb_application_request_foreign'] = entity_import('rules_config', '{ "lb_registration_lb_application_request_foreign" : {
      "LABEL" : "LB: Application Request foreign",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny Certification Process" ],
      "REQUIRES" : [ "rules", "mimemail" ],
      "USES VARIABLES" : {
        "company" : { "label" : "Company", "type" : "crm_core_contact" },
        "contact" : { "label" : "Primary contact", "type" : "crm_core_contact" },
        "info_request" : { "label" : "Info request activity", "type" : "crm_core_activity" }
      },
      "DO" : [
        { "mimemail" : {
            "key" : "rules_lb_application_request_foreign",
            "to" : "[contact:primary-email]",
            "subject" : "Leaping Bunny needs to hear from you",
            "body" : "\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nDear [contact:contact-name:given],\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nThank you for contacting the Coalition for Consumer Information on Cosmetics\\u0027 (CCIC) Leaping Bunny Program. I appreciate your interest in seeking to manufacture products that have not been tested on animals.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nHowever, [company:contact_name] does not qualify for our program. Currently, CCIC only certifies companies that sell cosmetic, personal care, and household products under their own name, and that are headquartered in the United States or Canada. Currently, CCIC\\u2019s Leaping Bunny Program only certifies companies head-quartered in the United States and Canada. However, our sister organization, the European Coalition to End Animal Experiments (ECEAE) runs the Leaping Bunny Program overseas and may be able to help you. I suggest you contact the ECEAE to inquire about certification (e-mail: claire.fletcher@crueltyfreeinternational.org@crueltyfreeinternational.org, website: www.gocrueltyfree.org).\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nBest of luck!  Thank you for your interest in manufacturing products with compassion.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\r\\nCaitlin McGrother\\r\\n\\u003Cbr\\u003E\\r\\nAdministrator\\r\\n\\u003Cbr\\u003E\\r\\ncaitlin@leapingbunny.com\\r\\n\\u003C\\/p\\u003E",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['lb_registration_lb_company_application_approved_2_week_delay'] = entity_import('rules_config', '{ "lb_registration_lb_company_application_approved_2_week_delay" : {
      "LABEL" : "LB: Company Application Approved 2 Week Delay",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny Certification Process" ],
      "REQUIRES" : [ "rules", "mimemail" ],
      "USES VARIABLES" : {
        "company" : { "label" : "Company", "type" : "crm_core_contact" },
        "contact" : { "label" : "Primary Contact", "type" : "crm_core_contact" }
      },
      "RULES" : [
        { "RULE" : {
            "DO" : [
              { "mimemail" : {
                  "key" : "rules_lb_company_application_approved_2_week_delay",
                  "to" : "[contact:primary-email]",
                  "reply_to" : "kim@leapingbunny.org",
                  "subject" : "Promotional Opportunities with Leaping Bunny",
                  "body" : "\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nDear [contact:contact_name],\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003EWelcome to the Leaping Bunny Program and congratulations on your recent cruelty-free certification! My job is to promote both the Leaping Bunny Logo and its mission as well as Leaping Bunny certified companies like yours.\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003EWe offer a wide variety of \\u003Ca href=\\u0022http:\\/\\/www.leapingbunny.org\\/sites\\/default\\/files\\/contractors_declarations\\/leaping-bunny_marketing-opportunities_07-26.pdf\\u0022 target=\\u0022_blank\\u0022\\u003Emarketing opportunities\\u003C\\/a\\u003E, which are free and really easy to put together. Companies have had great success in working with us in the past as we promote them and their products to a very targeted audience. We\\u0027d like to work with you, too. Please \\u003Ca href=\\u0022http:\\/\\/www.leapingbunny.org\\/sites\\/default\\/files\\/contractors_declarations\\/leaping-bunny_marketing-opportunities_07-26.pdf\\u0022 target=\\u0022_blank\\u0022\\u003Ehave a look at the PDF\\u003C\\/a\\u003E and drop me a line to let me know how you\\u2019d like to work together.\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003EIn addition, we have a very popular Cruelty-Free App for iPhones and Androids. Consumers can search for companies by name and product type and now bar code. It\\u2019s the only free app of its kind! Please email us your company\\u2019s UPC prefix(es) (usually 6-8 digits without the leading zeros) so we can be sure to include it. Over 7,000 people download our app per month. You don\\u0027t want to miss out on getting your company\\u0027s name in the scan section of the database. (It will be listed by company and by product regardless, so no worries there.) If your company doesn\\u0027t have one, please let me know that too!\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003EI look forward to working together in the coming weeks and months.\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003EBest,\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003EKim Paschen\\u003Cbr\\u003E\\r\\n  Program Mananger\\u003C\\/p\\u003E",
                  "language" : [ "" ]
                }
              }
            ],
            "LABEL" : "Send HTML Email"
          }
        }
      ]
    }
  }');
  $items['lb_registration_supplier_sample_purchase_order'] = entity_import('rules_config', '{ "lb_registration_supplier_sample_purchase_order" : {
      "LABEL" : "LB Registration: Supplier sample purchase order",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny" ],
      "REQUIRES" : [ "rules", "mimemail" ],
      "USES VARIABLES" : { "company" : { "label" : "Company", "type" : "crm_core_contact" } },
      "DO" : [
        { "mimemail" : {
            "key" : "rules_lb_registration_supplier_sample_purchase_order",
            "to" : "admin@leapingbunny.org",
            "subject" : "[company:contact_name] uploaded sample purchase order ",
            "body" : "\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\n[company:contact_name] uploaded a sample purchase order.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nShould this e-mail have reached you in error, please contact us at 888-546-CCIC or admin@leapingbunny.org.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nThank you,\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\r\\nCaitlin McGrother\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\r\\nLeaping Bunny Administrator\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nadmin@leapingbunny.org\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nCONFIDENTIALITY NOTICE: This communication with its contents may contain confidential and\\/or legally privileged information. It is solely for the use of the intended recipient{s}. Unauthorized interception, review, use or disclosure is prohibited and may violate applicable laws including the Electronic Communications Privacy Act. If you are not the intended recipient, please contact the sender and destroy all copies of the communication.\\r\\n\\u003C\\/p\\u003E",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_lb_application_request'] = entity_import('rules_config', '{ "rules_lb_application_request" : {
      "LABEL" : "LB: Application Request",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny Certification Process" ],
      "REQUIRES" : [ "rules", "mimemail" ],
      "USES VARIABLES" : { "company" : { "label" : "Company", "type" : "crm_core_contact" } },
      "RULES" : [
        { "RULE" : {
            "DO" : [
              { "mimemail" : {
                  "key" : "rules_lb_application_request",
                  "to" : "admin@leapingbunny.org",
                  "subject" : "[company:contact_name] has filled out a registration form on leapingbunny.org",
                  "body" : "Visit the \\u003Ca href=\\u0022[site:url]\\/crm-core\\/reports\\/lb_requests\\/applications\\/requests\\u0022\\u003Eapplication request report\\u003C\\/a\\u003E to view this request.",
                  "language" : [ "" ]
                }
              }
            ],
            "LABEL" : "Send HTML Email"
          }
        }
      ]
    }
  }');
  $items['rules_lb_application_request_approved'] = entity_import('rules_config', '{ "rules_lb_application_request_approved" : {
      "LABEL" : "LB: Application Request Approved",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny Certification Process" ],
      "REQUIRES" : [ "rules", "mimemail" ],
      "USES VARIABLES" : {
        "company" : { "label" : "Company", "type" : "crm_core_contact" },
        "contact" : { "label" : "Primary Contact", "type" : "crm_core_contact" },
        "user" : { "label" : "User Account", "type" : "user" },
        "reset_url" : { "label" : "Reset URL", "type" : "uri" }
      },
      "RULES" : [
        { "RULE" : {
            "DO" : [
              { "mimemail" : {
                  "key" : "rules_lb_application_request_approved",
                  "to" : "[contact:primary-email]",
                  "subject" : "Your Company Account Has Now Been Created on LeapingBunny.org",
                  "body" : "\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nDear [contact:contact_name],\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nRecently, you requested to apply for Leaping Bunny certification for [company:contact_name]. Your request has been approved and your account is now activated.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nYour account has the username [user:name]. Please use the following \\u003Cstrong\\u003Eone-time log-in link\\u003C\\/strong\\u003E to reset your password, and begin your application:\\r\\n[reset-url:value]\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px; font-weight:bold;\\u0022\\u003E\\r\\nWhen logging in to your Company Page in the future, please choose \\u0022Log In,\\u0022 under \\u0022For Companies\\u0022 in the main menu at LeapingBunny.org.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nThe key element to Leaping Bunny certification is the assurance that no animal testing is used in any phase of product development by your company, its laboratories, or its suppliers after a Fixed Cut-Off Date.  Pay close attention to the Fixed Cut-Off Date you choose, as that date represents the date your company ceased all animal testing as well as the date your suppliers and manufacturers must adhere to in providing your company with products, ingredients, or formulations.  \\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nIf at any time you have questions, please view our \\u003Ca href=\\u0022http:\\/\\/leapingbunny.org\\/sites\\/default\\/files\\/leaping-bunny_user-guide.pdf\\u0022\\u003EUser Guide\\u003C\\/a\\u003E or contact us at admin@leapingbunny.org. \\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nWe look forward to helping you with certification!\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nThe Leaping Bunny Team\\r\\n\\u003C\\/p\\u003E\\r\\n",
                  "language" : [ "" ]
                }
              }
            ],
            "LABEL" : "Send HTML Email"
          }
        }
      ]
    }
  }');
  $items['rules_lb_application_request_denied'] = entity_import('rules_config', '{ "rules_lb_application_request_denied" : {
      "LABEL" : "LB: Application Request Denied",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny Certification Process" ],
      "REQUIRES" : [ "rules", "mimemail" ],
      "USES VARIABLES" : {
        "company" : { "label" : "Company", "type" : "crm_core_contact" },
        "contact" : { "label" : "Primary Contact", "type" : "crm_core_contact" },
        "denial" : { "label" : "Denial Activity", "type" : "crm_core_activity" }
      },
      "RULES" : [
        { "RULE" : {
            "DO" : [
              { "mimemail" : {
                  "key" : "rules_lb_application_request_denied",
                  "to" : "[contact:primary-email]",
                  "subject" : "Your request to apply for certification has been denied",
                  "body" : "Recently, you requested to apply for Leaping Bunny certification for [company:contact_name]. Your request has been denied for the following reason: [denial:field_lb_justification]\\r\\n\\r\\nPlease contact Leaping Bunny if you believe this is in error."
                }
              }
            ],
            "LABEL" : "Send HTML Email"
          }
        }
      ]
    }
  }');
  $items['rules_lb_application_request_needs_more_info'] = entity_import('rules_config', '{ "rules_lb_application_request_needs_more_info" : {
      "LABEL" : "LB: Application Request needs more info",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny Certification Process" ],
      "REQUIRES" : [ "rules", "mimemail" ],
      "USES VARIABLES" : {
        "company" : { "label" : "Company", "type" : "crm_core_contact" },
        "contact" : { "label" : "Primary contact", "type" : "crm_core_contact" },
        "info_request" : { "label" : "Info request activity", "type" : "crm_core_activity" }
      },
      "DO" : [
        { "mimemail" : {
            "key" : "rules_lb_application_request_needs_more_info",
            "to" : "[contact:primary-email]",
            "subject" : "Leaping Bunny Needs to Hear From You",
            "body" : "\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nDear [contact:contact-name:given],\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nThank you for contacting the Coalition for Consumer Information on Cosmetics\\u0027 (CCIC) Leaping Bunny Program. We appreciate your interest in seeking to manufacture products that have not been tested on animals.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nHowever, we are unsure if [company:contact_name] qualifies for our program. Can you please tell us a little bit about your company and\\/or provide a link to your website? \\u003Cstrong\\u003ECurrently, CCIC only certifies companies that sell cosmetic, personal care, and household products under their own name, and that are headquartered in the United States or Canada.\\u003C\\/strong\\u003E For example, we would not certify distributors, manufacturers, ingredient suppliers, or private label companies, unless they have a line of their own products (then we can certify that specific line). We would hate for you to spend time filling out an application if your company does not already meet these requirements.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nWith that said, if your company does meet those conditions, please let me know and I will update your account.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nThank you, and we look forward to hearing from you again!\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nThe Leaping Bunny Team\\r\\n\\u003C\\/p\\u003E\\r\\n",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_lb_application_request_received'] = entity_import('rules_config', '{ "rules_lb_application_request_received" : {
      "LABEL" : "LB: Application Request Received",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny Certification Process" ],
      "REQUIRES" : [ "rules", "mimemail" ],
      "USES VARIABLES" : {
        "company" : { "label" : "Company", "type" : "crm_core_contact" },
        "contact" : { "label" : "Primary contact", "type" : "crm_core_contact" }
      },
      "RULES" : [
        { "RULE" : {
            "DO" : [
              { "mimemail" : {
                  "key" : "rules_lb_application_request_received",
                  "to" : "[contact:field-ao-email-address]",
                  "subject" : "Thank You for Your Interest in Leaping Bunny!",
                  "body" : "\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nDear [contact:contact_name],\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nThank you for your interest in the Coalition for Consumer Information on Cosmetics\\u0027 (CCIC) Leaping Bunny Program. We are happy to hear of your company\\u0027s interest in our cruelty-free certification program.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nJoining the Leaping Bunny Program is free and only requires you to go through a few steps. Once certified, complimentary listing in our online and print Compassionate Shopping Guide as well as our free Cruelty-Free app for iPhones and Androids is included as well. These guides are marketed to over 10 million caring consumers who support the animal groups forming the CCIC. At any time, you may opt to license the Leaping Bunny Logo with payment of a one-time sliding scale fee. We also offer an extensive menu of FREE marketing and opportunities for all certified companies that market specifically to a passionate, targeted audience. \\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nLeaping Bunny provides compassionate consumers with a list they can truly trust. It is consistently rated the most meaningful certifying standard for cruelty-free cosmetic, personal care, and household products. In fact, a recent survey from UL Environment conducted in October 2014 found that the Leaping Bunny Logo is the top claim for influencing purchasing decisions for personal care products, for supporting a price premium, and for positive brand impact. \\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nWe will review the information you submitted and be back in touch with you shortly!\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nSincerely,\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nThe Leaping Bunny Team\\r\\n\\u003C\\/p\\u003E\\r\\n",
                  "language" : [ "" ]
                }
              }
            ],
            "LABEL" : "Send HTML Email"
          }
        }
      ]
    }
  }');
  $items['rules_lb_company_application_approved'] = entity_import('rules_config', '{ "rules_lb_company_application_approved" : {
      "LABEL" : "LB: Company Application Approved",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny Certification Process" ],
      "REQUIRES" : [ "rules", "mimemail" ],
      "USES VARIABLES" : {
        "company" : { "label" : "Company", "type" : "crm_core_contact" },
        "contact" : { "label" : "Primary Contact", "type" : "crm_core_contact" }
      },
      "RULES" : [
        { "RULE" : {
            "DO" : [
              { "mimemail" : {
                  "key" : "rules_lb_company_application_approved",
                  "to" : "[contact:primary-email]",
                  "bcc" : "webmaster@leapingbunny.org",
                  "subject" : "Your Application for Leaping Bunny Certification Has Been Approved!",
                  "body" : "\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nCongratulations! Your company, [company:contact_name], is now certified with Leaping Bunny. Please remember to keep your company and contact information up to date at LeapingBunny.org.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nYour company\\u0027s brand(s) will now appear in the online version of the \\u003Cem\\u003ECompassionate Shopping Guide\\u003C\\/em\\u003E found at LeapingBunny.org, as well as our smartphone app and the next print run of the paper Compassionate Shopping Guide.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nYou\\u0027ll notice a few additions to your company page, when logging back in to LeapingBunny.org:\\r\\n\\u003Cul\\u003E\\r\\n\\u003Cli\\u003EYour company\\u0027s status will be listed as Approved.\\u003C\\/li\\u003E\\r\\n\\u003Cli\\u003EYour company\\u0027s approval and recommitment-due dates will be noted.\\u003C\\/li\\u003E\\r\\n\\u003Cli\\u003EYou\\u0027ll be able to view the application you submitted.\\u003C\\/li\\u003E\\r\\n\\u003Cli\\u003EYou\\u0027ll have the opportunity to license the Leaping Bunny logo (by clicking on the button beneath \\u0022View Application\\u0022 on the right-hand side of your page).\\u003C\\/li\\u003E\\r\\n\\u003C\\/ul\\u003E\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nThough you may be eager to share the news with your customers and followers that you are now Leaping Bunny certified, you are only able to use our logo on your packaging, social media, and website if you first license it. If you\\u2019re considering doing so, you can be assured it\\u2019s a worthwhile investment. According to a survey conducted in October 2014 by UL Environment, The Leaping Bunny Logo was ranked as the top third-party claim for personal care products for supporting a price premium, influencing purchasing decisions, and positively impacting the brand. If you have any questions regarding logo licensing, please contact Caitlin at \\u003Ca href=\\u0022mailto:caitlin@leapingbunny.org\\u0022\\u003Ecaitlin@leapingbunny.org\\u003C\\/a\\u003E. If you would like a non-logo announcement image to use, please contact Kim at \\u003Ca href=\\u0022mailto:kim@leapingbunny.org\\u0022\\u003Ekim@leapingbunny.org\\u003C\\/a\\u003E.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nAs always, we\\u0027re here to help!  If you have any questions or concerns about your company\\u0027s status or presence on LeapingBunny.org, please contact us using the information below. Stay tuned for more information on free marketing\\/promotional opportunities.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nThank you for commitment to manufacturing products with compassion!\\r\\n\\u00a0\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nBest,\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\r\\nCaitlin McGrother\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nLeaping Bunny Administrator\\r\\n\\u003C\\/p\\u003E",
                  "language" : [ "" ]
                }
              }
            ],
            "LABEL" : "Send HTML Email"
          }
        }
      ]
    }
  }');
  $items['rules_lb_company_application_approved_2_week_delay_rule'] = entity_import('rules_config', '{ "rules_lb_company_application_approved_2_week_delay_rule" : {
      "LABEL" : "LB Company Application Approved 2 Week Delay Rule",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [
        "rules",
        "lb_registration",
        "mimemail",
        "rules_scheduler",
        "crm_core_activity"
      ],
      "ON" : { "crm_core_activity_insert" : [] },
      "IF" : [
        { "data_is" : {
            "data" : [ "crm-core-activity:type" ],
            "value" : "lb_company_application_approved"
          }
        },
        { "lb_registration_is_initial_application" : { "company" : [ "crm-core-activity:field-lb-company" ] } }
      ],
      "DO" : [
        { "mimemail" : {
            "key" : "rules_lb_company_application_approved",
            "to" : "dontsend@leapingbunny.org",
            "subject" : "Your Company Account Has Now Been Created on LeapingBunny.org",
            "body" : "PLACEHOLDER: A message letting the company know that they have been approved.",
            "language" : [ "crm-core-activity:type" ]
          }
        },
        { "schedule" : {
            "component" : "lb_registration_lb_company_application_approved_2_week_delay",
            "date" : "+14 days",
            "param_company" : [ "crm-core-activity:field-lb-company" ],
            "param_contact" : [ "crm-core-activity:field-lb-primary-contact" ]
          }
        }
      ]
    }
  }');
  $items['rules_lb_company_application_initiated'] = entity_import('rules_config', '{ "rules_lb_company_application_initiated" : {
      "LABEL" : "LB: Company Application Initiated",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny Certification Process" ],
      "USES VARIABLES" : {
        "company" : { "label" : "Company", "type" : "crm_core_contact" },
        "contact" : { "label" : "Primary Contact", "type" : "crm_core_contact" }
      },
      "RULES" : []
    }
  }');
  $items['rules_lb_company_application_rejected'] = entity_import('rules_config', '{ "rules_lb_company_application_rejected" : {
      "LABEL" : "LB: Company Application Rejected",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny Certification Process" ],
      "USES VARIABLES" : {
        "company" : { "label" : "Company", "type" : "crm_core_contact" },
        "contact" : { "label" : "Primary Contact", "type" : "crm_core_contact" }
      },
      "RULES" : []
    }
  }');
  $items['rules_lb_manufacturer_supplier_listed'] = entity_import('rules_config', '{ "rules_lb_manufacturer_supplier_listed" : {
      "LABEL" : "LB: Manufacturer \\/ Supplier Listed",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny Certification Process" ],
      "USES VARIABLES" : {
        "company" : { "label" : "Company", "type" : "crm_core_contact" },
        "contractor" : { "label" : "Manufacturer \\/ supplier", "type" : "crm_core_contact" }
      },
      "RULES" : []
    }
  }');
  $items['rules_lb_recommitment_application_approved'] = entity_import('rules_config', '{ "rules_lb_recommitment_application_approved" : {
      "LABEL" : "LB: Recommitment Application Approved",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny Certification Process" ],
      "REQUIRES" : [ "rules", "mimemail" ],
      "USES VARIABLES" : {
        "company" : { "label" : "Company", "type" : "crm_core_contact" },
        "contact" : { "label" : "Primary Contact", "type" : "crm_core_contact" }
      },
      "RULES" : [
        { "RULE" : {
            "DO" : [
              { "mimemail" : {
                  "key" : "rules_lb_recommitment_application_approved",
                  "to" : "[contact:primary-email]",
                  "reply_to" : "recommit@leapingbunny.org",
                  "subject" : "Your Company Recommitment on LeapingBunny.org",
                  "body" : "\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nCongratulations! [company:contact_name]\\u2019s recommitment with Leaping Bunny has been approved. Please remember to keep your company and contact information up to date at LeapingBunny.org.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nYour company\\u0027s brand(s) continues to appear in the online version of the \\u003Cem\\u003ECompassionate Shopping Guide\\u003C\\/em\\u003E found at LeapingBunny.org, as well as our smartphone app and the print run of the paper \\u003Cem\\u003ECompassionate Shopping Guide\\u003C\\/em\\u003E.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nNow that recommitment is over with, please stay in touch! Leaping Bunny would love to work with your company via our free promotional\\/marketing opportunities through social media, e-newsletters, and our website\\/blog. Please reach out to \\u003Ca href=\\u0022mailto:kim@leapingbunny.org\\u0022\\u003Ekim@leapingbunny.org\\u003C\\/a\\u003E if interested.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nAs always, we\\u0027re here to help! If you have any questions or concerns about your company\\u0027s status or presence on LeapingBunny.org, please contact us using the information below.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nThank you for commitment to manufacturing products with compassion!\\r\\n\\u00a0\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nBest,\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\r\\nCaitlin McGrother\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nLeaping Bunny Administrator\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\n\\u003Cspan style=\\u0022font-weight:bold;\\u0022\\u003EPLEASE NOTE: There is an ongoing glitch in our system which continues to send recommitment reminder emails to companies, even after they have successfully recommitted. Please disregard all recommitment reminder emails, including the final email which states you will be removed from the Program. Your recommitment was successfully submitted and approved, and you are in good standing with the Leaping Bunny Program. There is no threat of removal.\\u003C\\/span\\u003E\\r\\n\\u003C\\/p\\u003E",
                  "language" : [ "" ]
                }
              }
            ],
            "LABEL" : "Send HTML Email"
          }
        }
      ]
    }
  }');
  $items['rules_lb_registration_manufacturer_contact_notification'] = entity_import('rules_config', '{ "rules_lb_registration_manufacturer_contact_notification" : {
      "LABEL" : "LB Registration: Manufacturer contact notification",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny" ],
      "REQUIRES" : [ "rules", "mimemail" ],
      "USES VARIABLES" : {
        "company" : { "label" : "Company", "type" : "crm_core_contact" },
        "manufacturer" : { "label" : "Manufacturer", "type" : "crm_core_contact" },
        "manufacturer_contact" : { "label" : "Manufacturer contact", "type" : "crm_core_contact" },
        "product_declaration_form_path" : { "label" : "Product declaration form path", "type" : "uri" },
        "material_declaration_file_path" : { "label" : "Material declaration file path", "type" : "uri" },
        "cut_off_date" : { "label" : "Cut-off Date", "type" : "text" }
      },
      "DO" : [
        { "mimemail" : {
            "key" : "rules_lb_registration_manufacturer_contact_notification",
            "to" : [ "manufacturer-contact:primary-email" ],
            "subject" : "[company:contact_name]\\u0027s Declaration of Product Compliance Form Needed for Leaping Bunny Certification",
            "body" : "\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nDear [manufacturer-contact:contact_name],\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\n[manufacturer:contact_name] currently manufactures cosmetic or household products for [company:contact_name]. [company:contact_name] has made a commitment to remove animal testing from its supply chain and is seeking either certification or a renewal of its membership status within the Coalition for Consumer Information on Cosmetics\\u0027 (CCIC) Leaping Bunny Program. To do this, it must obtain an assurance that your company does not manufacture products for [company:contact_name] that have been tested on animals, or contain component ingredients that have been tested on animals, after [cut-off-date:value].\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nPlease take a moment to confirm your understanding of [company:contact_name]\\u0027s animal testing policy by acknowledging your cooperation and signing the Declaration of Product Compliance:\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\n\\u003Ca href=\\u0022[product-declaration-form-path:value]\\u0022\\u003EClick here to view and sign\\u003C\\/a\\u003E.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nPlease note: You must obtain assurances from ingredient suppliers that none of the ingredients used in products supplied to [company:contact_name]\\u0027s have been tested on animals after [cut-off-date:value]. You will need to either amend your purchase order forms or obtain a \\u003Ca href=\\u0022[material-declaration-file-path:value]\\u0022\\u003EDeclaration of Raw Material Compliance\\u003C\\/a\\u003E from each supplier that provides ingredients included in [company:contact_name]\\u0027s products.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nThank you for taking the time to assist [company:contact_name] in manufacturing products with compassion. Your time and efforts are greatly appreciated.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nYour information will be held in strict confidence and used only for the purpose of maintaining [company:contact_name]\\u0027s compliance with the Leaping Bunny Program.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nShould this e-mail have reached you in error, please contact us at 888.546.CCIC or admin@leapingbunny.org.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nThank you,\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\r\\nCaitlin McGrother\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\r\\nLeaping Bunny Administratior\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nadmin@leapingbunny.org\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nCONFIDENTIALITY NOTICE: This communication with its contents may contain confidential and\\/or legally privileged information. It is solely for the use of the intended recipient{s}. Unauthorized interception, review, use or disclosure is prohibited and may violate applicable laws including the Electronic Communications Privacy Act. If you are not the intended recipient, please contact the sender and destroy all copies of the communication.\\r\\n\\u003C\\/p\\u003E\\r\\n",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_lb_registration_supplier_contact_notification'] = entity_import('rules_config', '{ "rules_lb_registration_supplier_contact_notification" : {
      "LABEL" : "LB Registration: Supplier contact notification",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny" ],
      "REQUIRES" : [ "rules", "mimemail" ],
      "USES VARIABLES" : {
        "company" : { "label" : "Company", "type" : "crm_core_contact" },
        "supplier" : { "label" : "Supplier", "type" : "crm_core_contact" },
        "supplier_contact" : { "label" : "Supplier contact", "type" : "crm_core_contact" },
        "declaration_form_link_path" : { "label" : "Declaration form link path", "type" : "uri" },
        "cut_off_date" : { "label" : "Cut-off Date", "type" : "text" }
      },
      "DO" : [
        { "mimemail" : {
            "key" : "rules_lb_registration_supplier_contact_notification",
            "to" : [ "supplier-contact:primary-email" ],
            "subject" : "[company:contact_name]\\u0027s Supplier Form Needed for Leaping Bunny Certification",
            "body" : "\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nDear [supplier-contact:contact_name],\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\n[supplier:contact_name] currently supplies [company:contact_name] with ingredients or formulations. [company:contact_name] has made a commitment to remove animal testing from its supply chain and is seeking either certification or a renewal of its membership status within the Coalition for Consumer Information on Cosmetics\\u0027 (CCIC) Leaping Bunny Program. To do this, it must obtain an assurance that your company does not supply [company:contact_name] with any ingredients or formulations that have been tested on animals after [cut-off-date:value].\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nPlease take a moment to confirm your understanding of [company:contact_name]\\u0027s animal testing policy by acknowledging your cooperation and signing the Declaration of Raw Material Compliance:\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\n\\u003Ca href=\\u0022[declaration-form-link-path:value]\\u0022\\u003EClick here to view and sign\\u003C\\/a\\u003E.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nThank you for taking the time to assist [company:contact_name] in manufacturing products with compassion. Your time and efforts are greatly appreciated.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nYour information will be held in strict confidence and used only for the purpose of maintaining [company:contact_name]\\u0027s compliance with the Leaping Bunny Program.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nShould this e-mail have reached you in error, please contact us at 888-546-CCIC or admin@leapingbunny.org.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nThank you,\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\r\\nCaitlin McGrother\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\r\\nLeaping Bunny Administrator\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nadmin@leapingbunny.org\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nCONFIDENTIALITY NOTICE: This communication with its contents may contain confidential and\\/or legally privileged information. It is solely for the use of the intended recipient{s}. Unauthorized interception, review, use or disclosure is prohibited and may violate applicable laws including the Electronic Communications Privacy Act. If you are not the intended recipient, please contact the sender and destroy all copies of the communication.\\r\\n\\u003C\\/p\\u003E",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_lb_schedule_recommitment_due_tasks'] = entity_import('rules_config', '{ "rules_lb_schedule_recommitment_due_tasks" : {
      "LABEL" : "LB schedule recommitment due tasks",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny" ],
      "REQUIRES" : [ "rules", "rules_scheduler" ],
      "USES VARIABLES" : {
        "primary_contact" : { "label" : "Primary contact", "type" : "crm_core_contact" },
        "company" : { "label" : "Company", "type" : "crm_core_contact" }
      },
      "ACTION SET" : [
        { "schedule" : {
            "component" : "rules_recommitment_due_email_1",
            "date" : "+2 week",
            "identifier" : "recommitment_due_[company:contact-id]_email_1",
            "param_primary_contact" : [ "primary-contact" ],
            "param_company" : [ "company" ]
          }
        },
        { "schedule" : {
            "component" : "rules_recommitment_due_email_2",
            "date" : "+4 week",
            "identifier" : "recommitment_due_[company:contact-id]_email_2",
            "param_primary_contact" : [ "primary-contact" ],
            "param_company" : [ "company" ]
          }
        },
        { "schedule" : {
            "component" : "rules_recommitment_due_email_3",
            "date" : "+6 week",
            "identifier" : "recommitment_due_[company:contact-id]_email_3",
            "param_primary_contact" : [ "primary-contact" ],
            "param_company" : [ "company" ]
          }
        },
        { "schedule" : {
            "component" : "rules_recommitment_due_email_4",
            "date" : "+6 week",
            "identifier" : "recommitment_due_[company:contact-id]_email_4",
            "param_primary_contact" : [ "primary-contact" ],
            "param_company" : [ "company" ]
          }
        }
      ]
    }
  }');
  $items['rules_lb_send_email_to_admin_on_recommitment_submitted'] = entity_import('rules_config', '{ "rules_lb_send_email_to_admin_on_recommitment_submitted" : {
      "LABEL" : "LB: Send email to LB Admin when Recommitment is submitted",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny Certification Process" ],
      "REQUIRES" : [ "rules", "mimemail", "crm_core_activity" ],
      "ON" : { "crm_core_activity_insert" : [] },
      "IF" : [
        { "data_is" : {
            "data" : [ "crm-core-activity:type" ],
            "value" : "lb_recommitment_submitted"
          }
        },
        { "entity_has_field" : {
            "entity" : [ "crm-core-activity:field-lb-company" ],
            "field" : "contact_name"
          }
        }
      ],
      "DO" : [
        { "mimemail" : {
            "key" : "rules_lb_recommitment_submitted",
            "to" : "emily@leapingbunny.org",
            "from_name" : [ "site:name" ],
            "subject" : "[site:name] - Recommitment Application submitted",
            "body" : "A Recommitment Application has been submitted for the company \\u003Cb\\u003E[crm-core-activity:field-lb-company:contact_name]\\u003C\\/b\\u003E.",
            "plaintext" : "A Recommitment Application has been submitted for the company [crm-core-activity:field-lb-company:contact_name].",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_lb_send_thankyou_email_on_recommitment_submitted'] = entity_import('rules_config', '{ "rules_lb_send_thankyou_email_on_recommitment_submitted" : {
      "LABEL" : "LB: Send Thank You email to Primary contact when Recommitment is submitted",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny Certification Process" ],
      "REQUIRES" : [ "rules", "mimemail", "crm_core_activity" ],
      "ON" : { "crm_core_activity_insert" : [] },
      "IF" : [
        { "data_is" : {
            "data" : [ "crm-core-activity:type" ],
            "value" : "lb_recommitment_submitted"
          }
        }
      ],
      "DO" : [
        { "mimemail" : {
            "key" : "rules_lb_recommitment_submitted",
            "to" : "[contact:primary-email]",
            "from_name" : [ "site:name" ],
            "subject" : "[site:name] - Thank you for your Recommitment Application",
            "body" : "\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nThank you for submitting your recommitment to the Leaping Bunny Program!\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nNow that you\\u0027ve submitted your recommitment, it will be reviewed by a Leaping Bunny Administrator. We will contact you to keep you informed of your recommitment\\u0027s status.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nIf you have any questions or concerns, please contact emilie@leapingbunny.org.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022margin-bottom:10px;\\u0022\\u003E\\r\\nThank you again, and have a great day!\\r\\n\\u003C\\/p\\u003E",
            "plaintext" : "Thank you for submitting your recommitment to the Leaping Bunny Program!\\r\\n\\r\\nNow that you\\u0027ve submitted your recommitment, it will be reviewed by a Leaping Bunny Administrator. We will contact you to keep you informed of your recommitment\\u0027s status.\\r\\n\\r\\nIf you have any questions or concerns, please contact emilie@leapingbunny.org.\\r\\n\\r\\nThank you again, and have a great day!",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_recommitment_due_email_1'] = entity_import('rules_config', '{ "rules_recommitment_due_email_1" : {
      "LABEL" : "Recommitment due - (email 1)",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny" ],
      "REQUIRES" : [ "lb_registration", "rules", "mimemail" ],
      "USES VARIABLES" : {
        "primary_contact" : { "label" : "Primary contact", "type" : "crm_core_contact" },
        "company" : { "label" : "Company", "type" : "crm_core_contact" }
      },
      "IF" : [
        { "lb_registration_company_recommitment_due_status" : { "company" : [ "company" ] } }
      ],
      "DO" : [
        { "mimemail" : {
            "key" : "recommitment_due_email_1",
            "to" : [ "primary-contact:primary-email" ],
            "reply_to" : "recommit@leapingbunny.org",
            "subject" : "2nd Try: Your Status with the Leaping Bunny Program",
            "body" : "\\u003Cp style=\\u0022padding-bottom:10px;\\u0022\\u003E\\r\\nDear [primary-contact:contact_name],\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022padding-bottom:10px;\\u0022\\u003E\\r\\nWe\\u2019re writing to follow up because we haven\\u2019t yet heard back from you after our last email that contained time sensitive information regarding your company\\u2019s status in the Leaping Bunny Program.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022padding-bottom:10px;\\u0022\\u003E\\r\\nThe gist: In order for companies to remain listed in all versions of our \\u003Cem\\u003ECompassionate Shopping Guide\\u003C\\/em\\u003E and remain Leaping Bunny certified, we require you to \\u201crecommit\\u201d to the program annually. Your due date for recommitment is \\u003Cspan style=\\u0022font-weight:bold;\\u0022\\u003Eone week from today.\\u003C\\/span\\u003E You can fulfill this obligation in just a few steps by \\u003Ca href=\\u0022http:\\/\\/leapingbunny.org\\/user\\u0022\\u003Elogging into our website\\u003C\\/a\\u003E.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022padding-bottom:10px;\\u0022\\u003E\\r\\nIt is important that we hear back from you. As you know, one key difference between the Leaping Bunny Program and other cruelty-free certification programs is the requirement that companies \\u201crecommit\\u201d to the program annually.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022padding-bottom:10px;\\u0022\\u003E\\r\\nIf you have any questions, please \\u003Ca href=\\u0022http:\\/\\/leapingbunny.org\\/content\\/recommitment-faq\\u0022\\u003Eview our Recommitment FAQ\\u003C\\/a\\u003E or contact us contact us through email at \\u003Ca href=\\u0022mailto:recommit@leapingbunny.org\\u0022\\u003Erecommit@leapingbunny.org\\u003C\\/a\\u003E or call at 888-546-2242.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EAnd if you\\u2019ve already begun the process or completed it, please feel free to disregard this email.\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022padding-bottom:10px;\\u0022\\u003E\\r\\nThank you for your prompt attention to this matter.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022padding-bottom:10px;\\u0022\\u003E\\r\\nSincerely,\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003E\\r\\nThe Leaping Bunny Team\\r\\n\\u003C\\/p\\u003E\\r\\n\\r\\n",
            "plaintext" : "Dear [primary-contact:contact_name],\\r\\n\\r\\nWe\\u2019re writing to follow up because we haven\\u2019t yet heard back from you after our last email that contained time sensitive information regarding your company\\u2019s status in the Leaping Bunny Program.\\r\\n\\r\\nThe gist: In order for companies to remain listed in all versions of our \\u003Cem\\u003ECompassionate Shopping Guide\\u003C\\/em\\u003E and remain Leaping Bunny certified, we require you to \\u201crecommit\\u201d to the program annually. Your due date for recommitment is \\u003Cspan style=\\u0022font-weight:bold;\\u0022\\u003Eone week from today.\\u003C\\/span\\u003E You can fulfill this obligation in just a few steps by logging into our website [ http:\\/\\/leapingbunny.org\\/user ].\\r\\n\\r\\nIt is important that we hear back from you. As you know, one key difference between the Leaping Bunny Program and other cruelty-free certification programs is the requirement that companies \\u201crecommit\\u201d to the program annually.\\r\\n\\r\\nIf you have any questions, please view our Recommitment FAQ [ http:\\/\\/leapingbunny.org\\/content\\/recommitment-faq ] or contact us contact us through email at recommit@leapingbunny.org or call at 888-546-2242.\\r\\n\\r\\nAnd if you\\u2019ve already begun the process or completed it, please feel free to disregard this email.\\r\\n\\r\\nThank you for your prompt attention to this matter.\\r\\n\\r\\nSincerely,\\r\\nThe Leaping Bunny Team\\r\\n",
            "language" : [ "company:type" ]
          }
        }
      ]
    }
  }');
  $items['rules_recommitment_due_email_2'] = entity_import('rules_config', '{ "rules_recommitment_due_email_2" : {
      "LABEL" : "Recommitment due - (email 2)",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny" ],
      "REQUIRES" : [ "lb_registration", "rules", "mimemail" ],
      "USES VARIABLES" : {
        "primary_contact" : { "label" : "Primary contact", "type" : "crm_core_contact" },
        "company" : { "label" : "Company", "type" : "crm_core_contact" }
      },
      "IF" : [
        { "lb_registration_company_recommitment_due_status" : { "company" : [ "company" ] } }
      ],
      "DO" : [
        { "mimemail" : {
            "key" : "recommitment_due_email_2",
            "to" : [ "primary-contact:primary-email" ],
            "reply_to" : "recommit@leapingbunny.org",
            "subject" : "Important: Your Recommitment is Past Due",
            "body" : "\\u003Cp style=\\u0022padding-bottom:10px;\\u0022\\u003E\\r\\nDear [primary-contact:contact_name],\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022padding-bottom:10px;\\u0022\\u003E\\r\\nThe deadline for your company to recommit to the Leaping Bunny Program has now passed. We have made previous attempts to reach out to you about fulfilling this obligation to remain certified in the Leaping Bunny Program.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022padding-bottom:10px;\\u0022\\u003E\\r\\nWe hope to keep your company on our list of Leaping Bunny certified companies that have pledged to be free of animal testing, so we are extending your deadline to \\u003Cspan style=\\u0022font-weight:bold;\\u0022\\u003Eone week from today\\u003C\\/span\\u003E to give you a little extra time. You can get the process started by \\u003Ca href=\\u0022http:\\/\\/leapingbunny.org\\/user\\u0022\\u003Elogging into your company\\u2019s account\\u003C\\/a\\u003E.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022padding-bottom:10px;\\u0022\\u003E\\r\\nIt is important that we hear back from you as soon as possible. As you know, one key difference that sets the Leaping Bunny Program apart from other cruelty-free certification programs is the requirement that companies \\u201crecommit\\u201d to the program annually. \\u003Cspan style=\\u0022font-weight:bold;\\u0022\\u003EWe will not be able to continue to list your company as cruelty-free if this obligation is not fulfilled.\\u003C\\/span\\u003E \\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022padding-bottom:10px;\\u0022\\u003E\\r\\nPlease \\u003Ca href=\\u0022http:\\/\\/leapingbunny.org\\/content\\/recommitment-faq\\u0022\\u003Eview our Recommitment FAQ\\u003C\\/a\\u003E, or contact us through email at \\u003Ca href=\\u0022mailto:recommit@leapingbunny.org\\u0022\\u003Erecommit@leapingbunny.org\\u003C\\/a\\u003E or call 888-546-2242 if you need assistance with logging in or have additional questions.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022padding-bottom:10px;\\u0022\\u003E\\r\\nAnd if you\\u2019ve already begun the process or completed it, please feel free to disregard this email.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022padding-bottom:10px;\\u0022\\u003E\\r\\nThank you for your prompt attention to this matter.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ESincerely,\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThe Leaping Bunny Team\\u003C\\/p\\u003E",
            "plaintext" : "Dear [primary-contact:contact_name],\\r\\n\\r\\nThe deadline for your company to recommit to the Leaping Bunny Program has now passed. We have made previous attempts to reach out to you about fulfilling \\r\\nthis obligation to remain certified in the Leaping Bunny Program.\\r\\n\\r\\nWe hope to keep your company on our list of Leaping Bunny certified companies that have pledged to be free of animal testing, so we are extending your deadline to **one week from today** to give you a little extra time. You can get the process started by logging into your company\\u2019s account. [ http:\\/\\/leapingbunny.org\\/user ]\\r\\n\\r\\nIt is important that we hear back from you as soon as possible. As you know, one key difference that sets the Leaping Bunny Program apart from other cruelty-free certification programs is the requirement that companies \\u201crecommit\\u201d to the program annually. **We will not be able to continue to list your company as cruelty-free if this obligation is not fulfilled.**\\r\\n\\r\\nPlease view our Recommitment FAQ [ http:\\/\\/leapingbunny.org\\/content\\/recommitment-faq ], or contact us through email at recommit@leapingbunny.org or call 888-546-2242 if you need assistance with logging in or have additional questions.\\r\\n\\r\\nAnd if you\\u2019ve already begun the process or completed it, please feel free to disregard this email.\\r\\n\\r\\nThank you for your prompt attention to this matter.\\r\\n\\r\\nSincerely,\\r\\nThe Leaping Bunny Team",
            "language" : [ "company:type" ]
          }
        }
      ]
    }
  }');
  $items['rules_recommitment_due_email_3'] = entity_import('rules_config', '{ "rules_recommitment_due_email_3" : {
      "LABEL" : "Recommitment due - (email 3)",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny" ],
      "REQUIRES" : [ "lb_registration", "rules", "mimemail" ],
      "USES VARIABLES" : {
        "primary_contact" : { "label" : "Primary contact", "type" : "crm_core_contact" },
        "company" : { "label" : "Company", "type" : "crm_core_contact" }
      },
      "IF" : [
        { "lb_registration_company_recommitment_due_status" : { "company" : [ "company" ] } },
        { "entity_has_field" : { "entity" : [ "company" ], "field" : "field_lb_logo_user" } },
        { "NOT data_is" : { "data" : [ "company:field-lb-logo-user" ], "value" : "1" } }
      ],
      "DO" : [
        { "mimemail" : {
            "key" : "recommitment_due_email_3",
            "to" : [ "primary-contact:primary-email" ],
            "reply_to" : "recommit@leapingbunby.org",
            "subject" : "Notice of Company Removal from the Leaping Bunny Program",
            "body" : "\\u003Cp style=\\u0022padding-bottom:10px;\\u0022\\u003E\\r\\nDear [primary-contact:contact_name],\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022padding-bottom:10px;\\u0022\\u003E\\r\\nThe deadline and grace period for your company to recommit to the Leaping Bunny Program have passed. We attempted to contact you several times and we have not heard back from you on your company\\u2019s cruelty-free status.  As a reminder, when your company applied to become a part of the Leaping Bunny Program, it agreed to recommit annually in order to remain a part of the program.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022padding-bottom:10px;\\u0022\\u003E\\r\\nSince this agreement was not upheld, we are writing to inform you that, effective immediately, [company:contact_name] is no longer considered certified through the Leaping Bunny Program. Consequently, your company will be removed from all versions of our \\u003Cem\\u003ECompassionate Shopping Guide\\u003C\\/em\\u003E, website, and social media channels.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022padding-bottom:10px;\\u0022\\u003E\\r\\nThe Leaping Bunny certification program was established in 1996 to connect compassionate consumers with companies that did not test on animals. We must uphold our reputation for being the gold standard in cruelty-free certification by listing only companies that continue to actively pledge to make products free of animal testing at all stages of product development.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022padding-bottom:10px;\\u0022\\u003E\\r\\nIf you believe you have received this letter in error, please contact us at \\u003Ca href=\\u0022mailto:recommit@leapingbunny.org\\u0022\\u003Erecommit@leapingbunny.org\\u003C\\/a\\u003E or call 888-546-2242 immediately.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ESincerely,\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThe Leaping Bunny Team\\u003C\\/p\\u003E",
            "language" : [ "company:type" ]
          }
        }
      ]
    }
  }');
  $items['rules_recommitment_due_email_4'] = entity_import('rules_config', '{ "rules_recommitment_due_email_4" : {
      "LABEL" : "Recommitment due - (email 4)",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Leaping Bunny" ],
      "REQUIRES" : [ "lb_registration", "rules", "mimemail" ],
      "USES VARIABLES" : {
        "primary_contact" : { "label" : "Primary contact", "type" : "crm_core_contact" },
        "company" : { "label" : "Company", "type" : "crm_core_contact" }
      },
      "IF" : [
        { "lb_registration_company_recommitment_due_status" : { "company" : [ "company" ] } },
        { "entity_has_field" : { "entity" : [ "company" ], "field" : "field_lb_logo_user" } },
        { "data_is" : { "data" : [ "company:field-lb-logo-user" ], "value" : "1" } }
      ],
      "DO" : [
        { "mimemail" : {
            "key" : "recommitment_due_email_4",
            "to" : [ "primary-contact:primary-email" ],
            "reply_to" : "recommit@leapingbunny.org",
            "subject" : "Notice of Company Removal from the Leaping Bunny Program",
            "body" : "\\u003Cp style=\\u0022padding-bottom:10px;\\u0022\\u003E\\r\\nDear [primary-contact:contact_name],\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022padding-bottom:10px;\\u0022\\u003E\\r\\nThe deadline and grace period for your company to recommit to the Leaping Bunny Program have passed. We attempted to contact you several times and we have not heard back from you on your company\\u2019s cruelty-free status.  As a reminder, when your company applied to become a part of the Leaping Bunny Program, it agreed to recommit annually in order to remain a part of the program.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022padding-bottom:10px;\\u0022\\u003E\\r\\nSince this agreement was not upheld, we are writing to inform you that, effective immediately, [company:contact_name] is no longer considered certified through the Leaping Bunny Program. Consequently, your company will be removed from all versions of our \\u003Cem\\u003ECompassionate Shopping Guide\\u003C\\/em\\u003E, website, and social media channels.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022padding-bottom:10px;\\u0022\\u003E\\r\\nImportantly, according to the terms of the Leaping Bunny Logo Conditions of Use \\u0026 Application, which your company agreed to when licensing the logo, \\u003Cem\\u003Eall rights granted shall cease\\u003C\\/em\\u003E. \\u003Cspan style=\\u0022font-weight:bold;\\u0022\\u003EThis means that you must remove the Leaping Bunny Logo from all marketing materials and packaging.\\u003C\\/span\\u003E The license does provide that, to the extent necessary to enable the company to sell or otherwise dispose of all products bearing the Leaping Bunny Logo in its possession, [company:contact_name] will have a maximum of ninety days (90) from this date to effect this sale or disposal.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp style=\\u0022padding-bottom:10px;\\u0022\\u003E\\r\\nThe Leaping Bunny certification program was established in 1996 to connect compassionate consumers with companies that did not test on animals. We must uphold our reputation for being the gold standard in cruelty-free certification by listing only companies that continue to actively pledge to make products free of animal testing at all stages of product development.\\r\\n\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003EThe Leaping Bunny Team\\u003C\\/p\\u003E",
            "plaintext" : "Dear [primary-contact:contact_name],\\r\\n\\r\\nThe deadline and grace period for your company to recommit to the Leaping Bunny Program have passed. We attempted to contact you several times and we have not heard back from you on your company\\u2019s cruelty-free status.  As a reminder, when your company applied to become a part of the Leaping Bunny Program, it agreed to recommit annually in order to remain a part of the program.\\r\\n\\r\\nSince this agreement was not upheld, we are writing to inform you that, effective immediately, [company:contact_name] is no longer considered certified through the Leaping Bunny Program. Consequently, your company will be removed from all versions of our Compassionate Shopping Guide, website, and social media channels.\\r\\n\\r\\nImportantly, according to the terms of the Leaping Bunny Logo Conditions of Use \\u0026 Application, which your company agreed to when licensing the logo, all rights granted shall cease. **This means that you must remove the Leaping Bunny Logo from all marketing materials and packaging.** The license does provide that, to the extent necessary to enable the company to sell or otherwise dispose of all products bearing the Leaping Bunny Logo in its possession, [company:contact_name] will have a maximum of ninety days (90) from this date to effect this sale or disposal.\\r\\n\\r\\nThe Leaping Bunny certification program was established in 1996 to connect compassionate consumers with companies that did not test on animals. We must uphold our reputation for being the gold standard in cruelty-free certification by listing only companies that continue to actively pledge to make products free of animal testing at all stages of product development.\\r\\n\\r\\nThe Leaping Bunny Team",
            "language" : [ "company:type" ]
          }
        }
      ]
    }
  }');
  return $items;
}
