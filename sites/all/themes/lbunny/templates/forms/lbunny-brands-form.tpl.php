<?php
  // Prepare data.
  $cosmetics = $animal_care = $household = $personal_care = array();
  $query = $_GET;
  $page_path = $query['q'];
  unset($query['q']);

  foreach ($form['field_lb_cosmetics_tid']['#options'] as $tid => $item) {
    $options = array(
      'query' => array('field_lb_cosmetics_tid' => $tid),
      'attributes' => array(
        'data-filter' => str_replace(array(' ', '/'), '_', $item),
        'class' => array('filter'),
      ),
    );
    if (_lb_brands_string_check_all($item)) {
      $options['attributes']['data-filter'] .= ' all';
    }
    $cosmetics[] = l($item, $page_path, $options);
  }
  foreach ($form['field_lb_animal_care_tid']['#options'] as $tid => $item) {
    $options = array(
      'query' => array('field_lb_animal_care_tid' => $tid),
      'attributes' => array(
        'data-filter' => str_replace(array(' ', '/'), '_', $item),
        'class' => array('filter'),
      ),
    );
    if (_lb_brands_string_check_all($item)) {
      $options['attributes']['data-filter'] .= ' all';
    }
    $animal_care[] = l($item, $page_path, $options);
  }
  foreach ($form['field_lb_household_products_tid']['#options'] as $tid => $item) {
    $options = array(
      'query' => array('field_lb_household_products_tid' => $tid),
      'attributes' => array(
        'data-filter' => str_replace(array(' ', '/'), '_', $item),
        'class' => array('filter'),
      ),
    );
    if (_lb_brands_string_check_all($item)) {
      $options['attributes']['data-filter'] .= ' all';
    }
    $household[] = l($item, $page_path, $options);
  }
  foreach ($form['field_lb_personal_care_tid']['#options'] as $tid => $item) {
    $options = array(
      'query' => array('field_lb_personal_care_tid' => $tid),
      'attributes' => array(
        'data-filter' => str_replace(array(' ', '/'), '_', $item),
        'class' => array('filter'),
      ),
    );
    if (_lb_brands_string_check_all($item)) {
      $options['attributes']['data-filter'] .= ' all';
    }
    $personal_care[] = l($item, $page_path, $options);
  }

  $grid_mode = FALSE;
  if (arg(2) != 'list') {
    $grid_mode = TRUE;
  }

$options = array('html' => TRUE, 'attributes' => array('target' => '_blank'));
$path = 'http://www.gocrueltyfree.org/search?country=231';
$european_link = l(t('View a list of companies available in Europe &raquo;'), $path, $options);
?>

<div id="lbunny-brands-form">

  <div class="header">
    <div class="application">
      <?php
      $title = t('Cruelty-Free App for iPhone or Android');
      $img_vars = array(
        'path' => 'sites/all/themes/lbunny/images/application.jpg',
        'alt' => $title,
        'title' => $title,
      );
      $image = theme('image', $img_vars);
      $link_path = 'node/5';
      print l($image, $link_path, array('html' => TRUE));
      print l(t('Get the Cruelty-Free App for iPhone or Android >>'), $link_path);
      ?>
    </div>
    <div class="title"><?php print render($form['title']); ?><?php print render($form['submit']); ?></div>
    <div class="key-info">
      <h4>Key</h4>
      <ul>
        <li class="first">Cruelty-free company that uses the Leaping Bunny logo.</li>
        <li class="second">Canadian cruelty-free company.</li>
        <li class="third">Cruelty-free subsidiary of a company that isn’t compliant.</li>
      </ul>
    </div>
  </div>

  <div class="narrow-by">
    <div class="label"><span>Filter By</span><span class="mobile">Narrow List By</span></div>
    <div class="content">
      <div class="inner">
        <div class="left">
          <h3>Product Category</h3>
          <div class="filter-items">
            <div class="filter-item">
              <h4>Cosmetics</h4>
              <?php print render($form['field_lb_cosmetics_tid']); print theme('item_list', array('items' => $cosmetics)); ?>
            </div>
            <div class="filter-item">
              <h4>Animal Care</h4>
              <?php print render($form['field_lb_animal_care_tid']); print theme('item_list', array('items' => $animal_care)); ?>
            </div>
            <div class="filter-item">
              <h4>Household</h4>
              <?php print render($form['field_lb_household_products_tid']); print theme('item_list', array('items' => $household)); ?>
            </div>
            <div class="filter-item">
              <h4>Personal Care</h4>
              <?php print render($form['field_lb_personal_care_tid']); print theme('item_list', array('items' => $personal_care)); ?>
            </div>
          </div>
        </div>
        <div class="right">
          <h3>Other</h3>
          <div class="other">
            <ul>
              <li><a href="#" class="filter" data-filter="all">All</a></li>
              <li><a href="#" class="filter" data-filter="recent">Recently Certified Brands</a></li>
              <li><a href="#" class="filter" data-filter="uses-logo">Uses the Leaping Bunny Logo</a></li>
              <li><a href="#" class="filter" data-filter="CA">Canadian Company</a></li>
              <li><a href="#" class="filter" data-filter="has-promotions">Offering a Promotion</a></li>
              <li><a href="#" class="filter" data-filter="is-partner">Leaping Bunny Partner</a></li>
            </ul>
          </div>

          <h3>Jump to letter</h3>
          <div class="letters">
          <?php
            foreach(range('A','Z') as $i) {
              print l($i, $page_path, array('query' => $query, 'fragment' => $i));
            }
          ?>
          </div>

          <h3 class="europe-companies"><?php print $european_link; ?></h3>
        </div>
      </div>
      <div class="display-mode-wrapper">
        <div class="display-mode-button grid <?php ($grid_mode) ? print 'active' : ''; ?>">
          <?php print l(t('View all thumbnails'), 'guide/brands'); ?>
        </div>
        <div class="display-mode-button list <?php (!$grid_mode) ? print 'active' : ''; ?>">
          <?php print l(t('View entire list'), 'guide/brands/list'); ?>
        </div>
      </div>
    </div>
  </div>

  <div class="hidden">
    <?php print drupal_render_children($form); ?>
  </div>
</div>
