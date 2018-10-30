<?php
/**
 * @file
 * Brands template.
 */
?>
<div class="letter-wrapper">
  <?php if (!empty($title)) : ?>
    <h3 id="<?php print $title; ?>"><?php print $title; ?></h3>
  <?php endif; ?>

  <div class="views-rows-wrapper">
    <?php foreach ($rows as $id => $row): ?>
      <div class="<?php print $classes_array[$id]; ?>">
        <div class="views-row-content">
          <?php print $row; ?>
        </div>
      </div>
    <?php endforeach; ?>
  </div>
  <a href="#main-content" class="back-to-top"><?php print t('Back to top'); ?></a>
</div>
