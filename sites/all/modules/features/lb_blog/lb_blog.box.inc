<?php
/**
 * @file
 * lb_blog.box.inc
 */

/**
 * Implements hook_default_box().
 */
function lb_blog_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'lb_blog_about_box';
  $box->plugin_key = 'simple';
  $box->title = 'About';
  $box->description = 'LB Blog: About box';
  $box->options = array(
    'body' => array(
      'value' => '<p>It is easier than ever to shop cruelty-free!</p>

<p>Are you looking for recommendations or interested in the latest Leaping Bunny certified products? This blog is for you.&nbsp; We review Leaping Bunny certified products, ranging from beauty, personal care, and household products, and provide you with the necessary information to help you make informed purchases.</p>

<p>The Leaping Bunny Program set the <a href="/about/the-standard">gold standard</a> for certifying companies cruelty-free and free of animal testing.&nbsp; We work closely with brands to help make shopping for animal-friendly products accessible and trustworthy.&nbsp; Check out the <a href="/guide/brands">shopping guide</a> for our ever expanding list of cruelty-free companies.&nbsp; The power is in the consumer and we hope to provide you with the tools to shop cruelty-free.</p>
',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['lb_blog_about_box'] = $box;

  return $export;
}
