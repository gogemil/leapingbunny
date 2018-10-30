(function ($) {

Drupal.behaviors.lbCore = {
  attach: function(context, settings) {
    // add buttons for views bulk operations
    // check to see if VBO is present on the form
    var vbo = $('.vbo-views-form');

    // toggle btn-expander class on the button when checkboxes are selected
    var checkboxes = vbo.find('.vbo-select, .vbo-table-select-all');
    checkboxes.bind('click', function() {
      var selected = 0;
      if($(this).attr('checked') == 'checked') {
        selected = 1;
      }
      if(selected == 1) {
        $('.btn-vbo').removeClass('btn-disabled');
        $('.btn-vbo').addClass('btn-expander');
      } else {
        $('.btn-vbo').addClass('btn-disabled');
        $('.btn-vbo').removeClass('btn-expander');
      }
    });

  }
};

})(jQuery);
