<?php
/**
 * @file
 * crm_core_donation.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function crm_core_donation_default_rules_configuration() {
  $items = array();
  $items['rules_cmcd_thank_you_message'] = entity_import('rules_config', '{ "rules_cmcd_thank_you_message" : {
      "LABEL" : "Donation: Thank You Message",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "TAGS" : [ "CRM Core Donation Thank You Message" ],
      "REQUIRES" : [ "rules", "mimemail" ],
      "USES VARIABLES" : {
        "email_to" : { "label" : "Email to", "type" : "text" },
        "donor" : { "label" : "Donor", "type" : "crm_core_contact" },
        "donation_page" : { "label" : "Donation page", "type" : "node" },
        "amount" : { "label" : "Amount", "type" : "text" }
      },
      "RULES" : [
        { "RULE" : {
            "DO" : [
              { "mimemail" : {
                  "key" : "rules_cmcd_thank_you_message",
                  "to" : "[email-to:value]",
                  "subject" : "Thank You for Supporting the Leaping Bunny Program!",
                  "body" : "Dear [donor:contact-name:given],\\r\\n\\u003Cbr\\u003E\\r\\n\\u003Cbr\\u003E\\r\\nThank you for your donation in the amount of \\u0022[amount:value]\\u0022. Your support is appreciated!\\r\\n\\u003Cbr\\u003E\\r\\n\\u003Cbr\\u003E\\r\\nCan you help this campaign succeed by asking your friends to donate too? There\\u0027s a sample message contained below that you can forward onto your personal networks.\\r\\n\\u003Cbr\\u003E\\r\\n\\u003Cbr\\u003E\\r\\n------- FORWARD THIS TO YOUR FRIENDS -------\\r\\n\\u003Cbr\\u003E\\r\\n\\u003Cbr\\u003E\\r\\nHi,\\r\\n\\u003Cbr\\u003E\\r\\n\\u003Cbr\\u003E\\r\\nI just made a donation to [donation-page:title].\\r\\n\\u003Cbr\\u003E\\r\\n\\u003Cbr\\u003E\\r\\nIt\\u0027s an important cause, and I hope you would consider donating too. It will only take a few moments of your time and go to help a good cause.\\r\\n\\u003Cbr\\u003E\\r\\n\\u003Cbr\\u003E\\r\\nHere\\u0027s the link:\\r\\n\\u003Cbr\\u003E\\r\\n[donation-page:url]\\r\\n\\u003Cbr\\u003E\\r\\n\\u003Cbr\\u003E\\r\\nThanks!\\r\\n\\u003Cbr\\u003E\\r\\n[donor:contact-name:given]\\r\\n\\u003Cbr\\u003E\\r\\n\\u003Cbr\\u003E\\r\\n------------------------------\\r\\n\\u003Cbr\\u003E\\r\\n\\u003Cbr\\u003E\\r\\nThank you again, \\r\\n\\u003Cbr\\u003E\\r\\n\\u003Cbr\\u003E\\r\\nThe Leaping Bunny Team\\r\\n\\u003Cbr \\/\\u003E\\r\\nCoalition for Consumer Information on Cosmetics\\r\\n\\u003Cbr \\/\\u003E\\r\\nPO Box 56537\\r\\n\\u003Cbr \\/\\u003E\\r\\nPhiladelphia, PA 19111\\r\\n\\u003Cbr \\/\\u003E\\r\\n(888) 546 CCIC\\r\\n\\u003Cbr \\/\\u003E\\r\\nwww.leapingbunny.org",
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
  return $items;
}
