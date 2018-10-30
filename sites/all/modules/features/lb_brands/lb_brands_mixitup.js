(function ($) {

  Drupal.behaviors.lb_brands_mixitup = {
    attach: function (context, settings) {
      $('#lb-brands', context).mixitup({
        'targetSelector': '.views-row'
      });

      $('#lb-brands .narrow-by .filter', context).click(
        function (event) {
          event.preventDefault();
        }
      );
    }
  };

})(jQuery);
