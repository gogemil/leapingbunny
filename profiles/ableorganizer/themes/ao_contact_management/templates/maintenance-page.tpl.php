<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */
?>
<!DOCTYPE html>
<html lang="<?php print $language->language ?>" dir="<?php print $language->dir ?>">
  <head>
    <title><?php print $head_title; ?></title>
    <?php print $head; ?>
    <?php print $styles; ?>
    <?php print $scripts; ?>
  </head>
<body class="<?php print $classes; ?> <?php print drupal_html_class($title);?>">
	<section class="branding" id="branding" role="branding">
	  <div class="section-wrapper">
	    <?php if ($logo): ?>
	      <a href="<?php print $front_page; ?>crm-core" title="<?php print t('Home'); ?>" rel="home" class="header__logo" id="logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" class="header__logo-image" /></a>
	    <?php endif; ?>
	  </div>
	</section>
	<section class="header" id="header">
	  <div class="section-wrapper">
	    <?php if($breadcrumb): ?>
	      <div id="breadcrumb"><?php print $breadcrumb; ?></div>
	    <?php endif; ?>
	    <?php print render($title_prefix); ?>
	    <?php if ($title): ?>
	      <h1 class="page__title title" id="page-title"><?php print $title; ?></h1>
	    <?php endif; ?>
	    <?php print render($title_suffix); ?>
	  </div>
	</section>
	<section class="content column" role="main">
	  <div class="section-wrapper">
	    <?php print $messages; ?>
			<div id="content" class="column" role="main">
	    	<?php print $content; ?>
			</div>
	    <?php if ($sidebar_first): ?>
	      <aside class="sidebars">
	      <section class="region region-sidebar-first column sidebar">
	        <?php print $sidebar_first; ?>
	      </section>
	      </aside>
	    <?php endif; ?>
	  </div>
	</section>
	<footer>
	  <div class="section-wrapper">
	    <?php print render($page['footer']); ?>  
	  </div>
	</footer>
	<?php print render($page['bottom']); ?>
  </body>
</html>
