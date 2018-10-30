<?php
/**
 * @file
 * Application activity actions template.
 */
?>
<div class="btn-vbo btn-expander"><?php print $label;?>
  <div class="btn-expandable">
    <ul class="links">
      <?php foreach ($links as $link): ?>
        <li><a href="<?php print $link['href'];?>"><?php print $link['label'];?></a></li>
      <?php endforeach;?>
    </ul>
  </div>
</div>
