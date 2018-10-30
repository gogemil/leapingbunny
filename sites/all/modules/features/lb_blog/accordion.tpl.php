<?php

/**
 * @file
 * Template file for js_example module.
 */
?>
<div class="accordion-container">
  <div class="accordion-icon"></div>
  <div class="accordion-wrapper">
    <div id="accordion">
      <?php foreach ($items as $block_key => $block) : ?>
        <?php if ($block['content'] != NULL): ?>
        <h3><a href="#">
        <?php if($block['subject']) : ?>
          <?php print check_plain($block['subject']); ?>
        <?php endif; ?>
        </a></h3>
        <div class="accordion-content">
          <?php print render($block['content']);?>
        </div>
      <?php endif;?>
      <?php endforeach; ?>
    </div>
  </div> <!-- Ends accordion-wrapper -->
</div>