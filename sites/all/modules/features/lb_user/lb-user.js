(function ($) {

  Drupal.behaviors.lbUser = {
    attach: function(context, settings) {

      // Disable Sharethis tracking cookie to enable CDN caching.
      document.cookie = '__unam=none;'

    }
  };

})(jQuery);
