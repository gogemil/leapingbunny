<?php
/**
 * @file
 * lb_contact_us.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function lb_contact_us_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Contact Us',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '5f23b1d8-fe47-4d08-be24-318a734e79f3',
  'type' => 'contact_form',
  'language' => 'und',
  'created' => 1393432536,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f74ab0d7-35f0-439b-b3f7-e92f8bebad91',
  'revision_uid' => 1,
  'field_cf_body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><strong>Phone:</strong><br>888-546-CCIC</p><p><strong>Mailing Address:</strong><br>CCIC<br>P.O. Box 56537<br>Philadelphia, PA 19111</p>',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p><strong>Phone:</strong><br />888-546-CCIC</p>
<p><strong>Mailing Address:</strong><br />CCIC<br />P.O. Box 56537<br />Philadelphia, PA 19111</p>
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
  'date' => '2014-02-26 11:35:36 -0500',
  'crm_core_profile_node_config' => array(
    'nid' => 'f74ab0d7-35f0-439b-b3f7-e92f8bebad91',
    'use_profile' => 1,
    'profile_name' => 'contact_us',
    'display_profile' => 1,
    'inline_title' => '',
  ),
);
  return $nodes;
}
