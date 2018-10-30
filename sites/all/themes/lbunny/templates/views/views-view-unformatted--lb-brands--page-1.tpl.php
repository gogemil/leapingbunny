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

  <div class="columns">
    <?php for($i = 0; $i < $columns; $i++) : ?>
      <div class="column column-wrapper-<?php print $i + 1; ?>">
        <?php for($id = $last_id; $id < $row_count; $id++) : ?>
          <?php if (!empty($rows[$id])) : ?>
            <div class="views-row views-row-<?php print $id + 1; ?> views-row-<?php print $id % 2 ? 'odd' : 'even'; ?>">
              <?php print $rows[$id]; ?>
            </div>
          <?php endif; ?>
        <?php endfor; ?>
      </div>

      <?php if ($last_id != $id) : ?>
        <?php $last_id = $id; ?>
        <?php $row_count += $row_count; ?>
      <?php endif; ?>

    <?php endfor; ?>
  </div>
  <a href="#main-content" class="back-to-top"><?php print t('Back to top'); ?></a>
</div>
