/**
 * Attaches the debugging behavior.
 */
(function($) {
  Drupal.behaviors.ableorganizer_sample_content = {
    attach: function (context) {
      // front page stuff
      var wwidth  = $('#above-content-two .section-wrapper').width();
      var wheight = $('#above-content-two').height();

      $(".ao_profeat_dialog").dialog({
          autoOpen: false,
          modal: true,
          closeOnEscape: true,
          draggable: false,
          resizable: false,
          height: wheight,
          width: wwidth,
          show: {
            effect: 'fadeIn',
            duration: 250,
            easing: 'swing',
          },
          hide: {
            effect: 'fadeOut',
            duration: 200,
            easing: 'swing',
          },
          open: function() {
            jQuery('.ui-widget-overlay').bind('click', function() {
              jQuery('.ao_profeat_dialog').dialog('close');
            })
          },
        }
      );
      $('.ui-dialog-titlebar').hide();
      $( ".ao_profeat" ).click(function() {
        var content = $(this).find(".ao_profeat_dialog_content");
        var diag = $(".ao_profeat_dialog");
        diag.html(content.html());
        diag.dialog("open");
      });

    }
  };
})(jQuery);
