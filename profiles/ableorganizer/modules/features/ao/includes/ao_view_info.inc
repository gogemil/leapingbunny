<?php 

/**
 * Returns a list of view modes for a selected view
 */
function ao_select_view_title_ajax_callback($view_title = ""){
  
  $matches = array();
  
  $views = array_keys(views_get_all_views());
  
  foreach($views as $item){
    if(stristr($item, trim($view_title))){
      $matches[$item] = $item;
    }
  }
  
  return drupal_json_output($matches);
}

