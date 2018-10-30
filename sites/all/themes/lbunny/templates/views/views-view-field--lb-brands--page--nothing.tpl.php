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

$promotions = isset($row->brand_promotions_nid) ? TRUE : FALSE;
$partnerships = isset($row->brand_partnerships_nid) ? TRUE : FALSE;
$footer_content = '';
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

if ($promotions || $partnerships) {
  $footer_content = t("View each brand's");
  if ($promotions) {
    $footer_content .= ' ';
    $footer_content .= l(t('exclusive deals'), 'shop/deals');
    // Use $row->nid to link to specific brand if needed.
  }

  if ($promotions && $partnerships) {
    $footer_content .= ' ';
    $footer_content .= t('and');
  }

  if ($partnerships) {
    $footer_content .= ' ';
    $footer_content .= l(t('partnerships with Leaping Bunny'), 'shop/partners');
  }
  $footer_content .= '.';
}

?>
<div class="brand-tooltip">
  <div class="title"><?php print check_plain($row->node_title); ?></div>
    <?php if (!empty($row->field_field_ao_website[0]['rendered']['#element']) || !empty($brand_icon_content)) : ?>
      <div class="website">
      <?php if (!empty($row->field_field_ao_website[0]['rendered']['#element'])) : ?>
        <div class="website-content"><?php print l($row->field_field_ao_website[0]['rendered']['#element']['title'], $row->field_field_ao_website[0]['rendered']['#element']['url'], array('attributes' => array('target'=>'_blank')));?></div>
      <?php endif; ?>
        <div class="brand-icon-content"><?php print $brand_icon_content; ?></div>
      </div>
    <?php endif; ?>
  <div class="content-wrapper">
    <?php if (!empty($row->field_field_lb_description)) : ?>
    <div class="description">
      <div class="label"><?php print t('Company description'); ?></div>
      <div class="description-content"><?php print $row->field_field_lb_description[0]['rendered']['#markup'];?></div>
    </div>
    <?php endif; ?>


    <div class="categories">
      <div class="label">Product categories</div>
      <?php foreach ($row->field_field_lb_cosmetics as $category) : ?>
        <div class="category-item"><?php print $category['rendered']['#markup']; ?></div>
      <?php endforeach; ?>

      <?php foreach ($row->field_field_lb_animal_care as $category) : ?>
        <div class="category-item"><?php print $category['rendered']['#markup']; ?></div>
      <?php endforeach; ?>

      <?php foreach ($row->field_field_lb_personal_care as $category) : ?>
        <div class="category-item"><?php print $category['rendered']['#markup']; ?></div>
      <?php endforeach; ?>

      <?php foreach ($row->field_field_lb_household_products as $category) : ?>
        <div class="category-item"><?php print $category['rendered']['#markup']; ?></div>
      <?php endforeach; ?>
    </div>
  </div>
  <div class="brand-footer">
    <?php print $footer_content; ?>
  </div>
</div>
