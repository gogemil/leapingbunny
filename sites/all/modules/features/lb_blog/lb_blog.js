(function ($) {

  Drupal.behaviors.lb_blog_accordions = {
    attach: function (context, settings) {
      $('.accordion-wrapper').hide();
      $('.accordion-icon').click(function() {
        $('.accordion-wrapper').toggle();
      })
    }
  };

})(jQuery);