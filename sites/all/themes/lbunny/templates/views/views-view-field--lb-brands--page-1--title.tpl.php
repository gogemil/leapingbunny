<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */

$uses_logo = isset($row->logo_user_value) ? TRUE : FALSE;
$dirty_parent = isset($row->dirty_parent) ? TRUE : FALSE;
$canadian = (isset($row->field_lb_brands_node__field_data_field_ao_business_address_f) && $row->field_lb_brands_node__field_data_field_ao_business_address_f == 'CA');

$brand_icon_content = '';
if ($dirty_parent) {
  $brand_icon_content .= '<span class="brand-icon brand-icon-dirty"></span>';
}
if ($uses_logo) {
  $brand_icon_content .= '<span class="brand-icon brand-icon-logo"></span>';
}
if ($canadian) {
  $brand_icon_content .= '<span class="brand-icon brand-icon-canadian"></span>';
}

?>
<div class="brand-icon-content"><?php print $output . $brand_icon_content; ?></div>

