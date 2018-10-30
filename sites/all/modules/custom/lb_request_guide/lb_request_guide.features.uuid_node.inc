<?php
/**
 * @file
 * lb_request_guide.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function lb_request_guide_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Request shopping guide',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '5c676e11-091a-4246-a665-d81f284f156b',
  'type' => 'contact_form',
  'language' => 'und',
  'created' => 1393434442,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ff898a3b-a239-4d8a-ac56-924f8e64ace8',
  'revision_uid' => 1,
  'field_cf_body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>[[{"fid":"33","view_mode":"default","fields":{"format":"default","field_file_image_alt_text[und][0][value]":"Compassionate Shopping Guide","field_file_image_title_text[und][0][value]":"Compassionate Shopping Guide"},"tagName":"IMG","src":"http%3A//localhost/leaping-bunny/sites/default/files/shopGuide.jpg","type":"media","attributes":{"alt":"Compassionate Shopping Guide","class":"media-element file-default","height":190,"title":"Compassionate Shopping Guide","width":165}}]]</p><p>Thank you for your interest in the Leaping Bunny Program! Please complete the form below to receive a complimentary, wallet-sized <em>Compassionate Shopping Guide</em> via mail.&nbsp;</p><p><strong>NOTE:</strong> If you are outside North America, please download the Leaping Bunny Global Guide (PDF), which lists all certified companies in Europe, Canada, and the United States. If you would still like the US guide physically delivered to you, please complete the form below.</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p><img alt="Compassionate Shopping Guide" class="media-element file-default" height="190" title="Compassionate Shopping Guide" width="165" typeof="foaf:Image" src="http://default/sites/default/files/shopGuide.jpg" /></p>
<p>Thank you for your interest in the Leaping Bunny Program! Please complete the form below to receive a complimentary, wallet-sized <em>Compassionate Shopping Guide</em> via mail. </p>
<p><strong>NOTE:</strong> If you are outside North America, please download the Leaping Bunny Global Guide (PDF), which lists all certified companies in Europe, Canada, and the United States. If you would still like the US guide physically delivered to you, please complete the form below.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'a:1:{s:17:"mimemail_textonly";i:0;}',
  'date' => '2014-02-26 12:07:22 -0500',
  'crm_core_profile_node_config' => array(
    'nid' => 'ff898a3b-a239-4d8a-ac56-924f8e64ace8',
    'use_profile' => 1,
    'profile_name' => 'request_guide',
    'display_profile' => 1,
    'inline_title' => '',
  ),
);
  return $nodes;
}
