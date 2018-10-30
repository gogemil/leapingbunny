<?php
/**
 * @file
 * ableorganizer_sample_donation_pages.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function ableorganizer_sample_donation_pages_uuid_default_entities() {
  $entities = array();

  $entities['cmcd_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/2b66066f-0a98-43b7-bc0e-a74c6e4130e6',
      'cause' => FALSE,
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_donation_node_config' => array(
      'nid' => '2b66066f-0a98-43b7-bc0e-a74c6e4130e6',
      'thanks_email' => 'rules_cmcd_thank_you_message',
      'recommended_amounts' => '10,25,50,100',
    ),
    'crm_core_profile_node_config' => array(
      'nid' => '2b66066f-0a98-43b7-bc0e-a74c6e4130e6',
      'use_profile' => 1,
      'profile_name' => 'ao_fundraiser_form',
      'display_profile' => 0,
      'inline_title' => 'Fundraiser form',
    ),
    'field_cmcd_body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'value' => '<p>Our online fundraiser is for a popular program run by the organization that appeals to a wide audience. It gets more traction with a certain segment of our followers.&nbsp;</p><p>By getting involved, you can help us do something important. You can get involved at any of the recommended donation levels.&nbsp;</p>',
        ),
      ),
    ),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
    'log' => '',
    'promote' => 0,
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'Fundraiser',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcd_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'donate/fundraiser',
        'language' => 'und',
      ),
    ),
    'uuid' => '2b66066f-0a98-43b7-bc0e-a74c6e4130e6',
  );
  $entities['cmcd_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/3e876d31-271a-47da-8564-2bb667953ade',
      'cause' => FALSE,
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_donation_node_config' => array(
      'nid' => '3e876d31-271a-47da-8564-2bb667953ade',
      'thanks_email' => 'rules_cmcd_thank_you_message',
      'recommended_amounts' => 500,
    ),
    'crm_core_profile_node_config' => array(
      'nid' => '3e876d31-271a-47da-8564-2bb667953ade',
      'use_profile' => 1,
      'profile_name' => 'ao_annual_appeal_form',
      'display_profile' => 0,
      'inline_title' => 'Annual appeal form',
    ),
    'field_cmcd_body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'value' => '<p>For 45 years, the organization&nbsp;has been conducting its annual appeal to provide funding to meet the health, social and welfare needs of the poor and vulnerable regardless of race, creed or origin. &nbsp;The people of this organization have been exceedingly generous, as the minimum goals for the appeal have grown each year to meet the increased demand for vital services and programs.</p><p>This year our minimum need is&nbsp;<strong>$10 million</strong>. The quality of life of many men, women and children and their hope for the future continue to depend on us reaching this minimum goal and on your continued generosity.</p><p>Please take a moment to consider how needs are as great as ever and how donors have helped in the past.</p><h3>Campaign Distribution</h3><p>Each year your gifts are distributed for those groups that reach beyond the basic boundaries of the organization to provide social, financial, psychological and&nbsp;moral assistance to tens of thousands in our operating area. The&nbsp;budgeted needs for the upcoming year are&nbsp;based on a $10 million goal. The distribution from last year was over $8 million.</p>',
        ),
      ),
    ),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
    'log' => '',
    'promote' => 0,
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'Annual Appeal',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcd_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'donate/annual-appeal',
        'language' => 'und',
      ),
    ),
    'uuid' => '3e876d31-271a-47da-8564-2bb667953ade',
  );
  $entities['cmcd_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/7c28ea35-4da6-4316-91ca-6e5ca19f79f1',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => 'Thank you for signing up!',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
    'log' => '',
    'promote' => 0,
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'Thank you',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'donate/thank-you',
        'language' => 'und',
      ),
    ),
    'uuid' => '7c28ea35-4da6-4316-91ca-6e5ca19f79f1',
  );
  $entities['cmcd_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/d2ce8616-ab53-4c71-8c87-9c438c6a1cad',
      'cause' => FALSE,
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_donation_node_config' => array(
      'nid' => 'd2ce8616-ab53-4c71-8c87-9c438c6a1cad',
      'thanks_email' => 'rules_cmcd_thank_you_message',
      'recommended_amounts' => '10,25,50,100',
    ),
    'crm_core_profile_node_config' => array(
      'nid' => 'd2ce8616-ab53-4c71-8c87-9c438c6a1cad',
      'use_profile' => 1,
      'profile_name' => 'ao_walk_up_donation',
      'display_profile' => 1,
      'inline_title' => '',
    ),
    'field_cmcd_body' => array(),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
    'log' => '',
    'promote' => 0,
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'Walk Up Donation',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcd_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'donate/walkup',
        'language' => 'und',
      ),
    ),
    'uuid' => 'd2ce8616-ab53-4c71-8c87-9c438c6a1cad',
  );
  $entities['cmcd_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/e5742cc9-af29-4b1a-930b-24921ae633d4',
      'cause' => FALSE,
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'crm_core_donation_node_config' => array(
      'nid' => 'e5742cc9-af29-4b1a-930b-24921ae633d4',
      'thanks_email' => 'rules_cmcd_thank_you_message',
      'recommended_amounts' => '10,25,50,100',
    ),
    'crm_core_profile_node_config' => array(
      'nid' => 'e5742cc9-af29-4b1a-930b-24921ae633d4',
      'use_profile' => 1,
      'profile_name' => 'ao_donation_form',
      'display_profile' => 0,
      'inline_title' => 'Make a donation now',
    ),
    'field_cmcd_body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'value' => '<p>Your donation to our organization&nbsp;will feed hungry families, provide health care and clean water in remote villages, help farmers to grow better crops, protect orphans and vulnerable children, and allow for an immediate response to emergencies.&nbsp;</p><p>For 70 years, our organization has been providing expertise and compassion to the very poorest of our brothers and sisters in 91 countries. But we can\'t do this lifesaving work without your help. Please make a generous gift today and fill out the secure form to make a one-time donation.</p>',
        ),
      ),
    ),
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
    'log' => '',
    'promote' => 0,
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'Online Donation Page',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'cmcd_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'donate/online-donation',
        'language' => 'und',
      ),
    ),
    'uuid' => 'e5742cc9-af29-4b1a-930b-24921ae633d4',
  );
  $entities['cmcd_sample_content_dp'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/89d14933-399b-438d-bfbe-585dd8cfe124',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<p>Thank you for considering supporting our work. Your contribution is absolutely vital. Without it, the valuable work of our organization\'s&nbsp;field staff would be impossible. Your support demonstrates solidarity with the people our programs and events go to&nbsp;help.&nbsp;It also helps up in other, vital ways:</p>

<ul>
	<li>To ensure the freedom to provide humanitarian assistance whenever and wherever it is needed.</li>
	<li>To remain independent from political, religious and economic interests.</li>
</ul>

<p>There are 4 easy ways to give.</p>

<p><a href="/donate/online-donation">Make an online donation</a></p>

<p>Online donations are the quickest and easiest ways to become involved. Make a donation in any amount today!</p>

<p><a href="/donate/annual-appeal">Join our Annual Appeal</a></p>

<p>Our organization\'s Annual Appeal campaign goes towards offsetting operating costs and ensuring our staff has the tools they need to carry out our programs.</p>

<p><a href="/donate/fundraiser">Participate in our fundraiser</a></p>

<p>Our online fundraiser is for a popular program run by the organization that appeals to a wide audience. It gets more traction with a certain segment of our followers. You can get involved at any of the recommended&nbsp;donation levels.&nbsp;</p>

<p><a href="/donate/walkup">Walk up donations</a></p>

<p>We use this form internally for recording donations to our organization. It is a direct entry form that allows us to track offline donations received through walk ups, phone calls, and the like. While everyone can see the link to this form, the only people who should be able to fill it out are people who are logged in.</p>
',
        ),
      ),
    ),
    'cid' => 0,
    'comment' => 1,
    'comment_count' => 0,
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => 1,
    'log' => '',
    'menu_link' => array(
      'menu_name' => 'main-menu',
      'mlid' => 991,
      'plid' => 0,
      'link_path' => 'node/7',
      'router_path' => 'node/%',
      'link_title' => 'Donate',
      'options' => array(
        'attributes' => array(
          'title' => '',
        ),
        'identifier' => 'main-menu_donate:node/7',
      ),
      'module' => 'menu',
      'hidden' => 0,
      'external' => 0,
      'has_children' => 0,
      'expanded' => 0,
      'weight' => 0,
      'depth' => 1,
      'customized' => 1,
      'p1' => 991,
      'p2' => 0,
      'p3' => 0,
      'p4' => 0,
      'p5' => 0,
      'p6' => 0,
      'p7' => 0,
      'p8' => 0,
      'p9' => 0,
      'updated' => 0,
      'vid' => 17,
      'uuid' => '26b8c74e-ca8f-4568-b202-dc4b61771a44',
      'path' => 'node/%',
      'load_functions' => array(
        1 => 'node_load',
      ),
      'to_arg_functions' => '',
      'access_callback' => 'node_access',
      'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
      'page_callback' => 'node_page_view',
      'page_arguments' => 'a:1:{i:0;i:1;}',
      'delivery_callback' => '',
      'fit' => 2,
      'number_parts' => 2,
      'context' => 0,
      'tab_parent' => '',
      'tab_root' => 'node/%',
      'title' => 'Donate',
      'title_callback' => 'node_page_title',
      'title_arguments' => 'a:1:{i:0;i:1;}',
      'theme_callback' => '',
      'theme_arguments' => 'a:0:{}',
      'type' => 6,
      'description' => '',
      'position' => '',
      'include_file' => '',
      'link_weight' => 0,
      'href' => 'node/7',
      'access' => TRUE,
      'localized_options' => array(
        'attributes' => array(
          'title' => '',
        ),
        'identifier' => 'main-menu_donate:node/7',
      ),
    ),
    'promote' => 0,
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => 1,
    'sticky' => 0,
    'title' => 'Ways to Donate',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'donate',
        'language' => 'und',
      ),
    ),
    'uuid' => '89d14933-399b-438d-bfbe-585dd8cfe124',
  );

  return $entities;
}
