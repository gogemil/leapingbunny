(function ($) {

  Drupal.lbunny = Drupal.lbunny || {};

  Drupal.behaviors.lBunny = {
    attach: function (context) {
      var $dropdowns = $('#block-system-main-menu > .menu > li'); // Specifying the element is faster for older browsers

      // equalheight blocks
      var eqHeightSelector = '.not-front .view-lb-user-profile-brands .view-content .field-custom-container';
      if ($(eqHeightSelector).length) {
        $(eqHeightSelector).matchHeight();
      }

      var eqHeightSelector = '.not-front .view-2016-holiday .view-content .field-custom-container';
      if ($(eqHeightSelector).length) {
        $(eqHeightSelector).matchHeight();
      }

      eqHeightSelector = '.not-front .view-lb-brands .view-content .views-row .views-field-field-lb-logo';
      if ($(eqHeightSelector).length) {
        $(eqHeightSelector).matchHeight();
      }

      /**
       * Mouse events
       *
       * @description Mimic hoverIntent plugin by waiting for the mouse to 'settle' within the target before triggering
       */
      $dropdowns
        .on('mouseover', function() {
          // Mouseenter (used with .hover()) does not trigger when user enters from outside document window
          var $this = $(this);

          if ($this.prop('hoverTimeout')) {
            $this.prop('hoverTimeout', clearTimeout($this.prop('hoverTimeout')));
          }

          $this.prop('hoverIntent', setTimeout(function() {
            $this.addClass('hover');
          }, 150));
        })
        .on('mouseleave', function() {
          var $this = $(this);

          if ($this.prop('hoverIntent')) {
            $this.prop('hoverIntent', clearTimeout($this.prop('hoverIntent')));
          }

          $this.prop('hoverTimeout', setTimeout(function() {
            $this.removeClass('hover');
          }, 150));
        });

      /**
       *
       *
       */
      var $errorinputs = $('form .error');

      $errorinputs.each(function() {
        $(this).closest('.form-element-wrapper').addClass('error').append('<span class="form-element-required">' + Drupal.t('Field is required.') + '</span>');
      });
    }
  };

  Drupal.behaviors.lb_narrow_by = {
    attach: function (context, settings) {
      var $toggle_element = $('.view-lb-brands .narrow-by > .label');
      var $area = $('.view-lb-brands .narrow-by > .content > .inner').hide();

      $toggle_element.click(function(event) {
        $area.slideToggle('slow', function() {
          $toggle_element.toggleClass('active', $(this).is(':visible'));
        });
      });
    }
  };

  Drupal.behaviors.lb_brand_tooltip = {
    attach: function (context, settings) {
      var $view = $('.view-display-id-page');
      var $toggle_element = $('.views-row-content', $view);

      $toggle_element
        .click(function(event) {
          Drupal.lbunny.show_tooltip($(this), $view);
        })
        .mouseenter(function(event) {
          Drupal.lbunny.show_tooltip($(this), $view);
        });

      $('body').click(function (event) {
        if ($(event.target).closest('.brand-tooltip-wrapper').length === 0 &&
          $(event.target).closest('.views-row-content').length === 0) {

          // Hide all tooltips.
          $('.brand-tooltip-wrapper', $view).hide();
          $('.views-row-content', $view).removeClass('active');
        }
      });

      $('.brand-tooltip .content-wrapper', $view).each(function() {
        var $categories = $('.categories .category-item', $(this));
        var $description = $('.description', $(this));

        if ($categories.length == 0 && $description.length == 0) {
          $(this).hide();
        }
        else if($categories.length == 0) {
          $('.categories', $(this)).hide();
        }
      });
    }
  };

  Drupal.behaviors.lb_clear_button = {
    attach: function (context, settings) {
      var $reset = $('input[type="reset"]');

      $reset.click(function(event) {
        var $form = $(this).parents('form');
        $form.find('input[type="text"]').attr('value', '');
      });
    }
  };

  /**
   * Show tooltip.
   */
  Drupal.lbunny.show_tooltip = function ($element, $view) {
    if (!$element.hasClass('active')) {
      // Hide all tooltips.
      $('.brand-tooltip-wrapper', $view).hide();
      $('.views-row-content', $view).removeClass('active');

      // Display new tooltip.
      var $position = $element.position();
      var $xpos = $position.left + 20;
      $('.brand-tooltip-wrapper', $element)
        .show()
        .width($view.width())
        .css('background-position', '' + $xpos + 'px 0');
      $element.addClass('active');
    }
  };

  Drupal.behaviors.lb_shop_now = {
    attach: function (context, settings) {
      var eqHeightSelector = '.view-lb-partners .view-content .field-custom-container';
      if ($(eqHeightSelector).length) {
	    $(eqHeightSelector).matchHeight();
      }
	  eqHeightSelector = '.view-lb-promotions .view-content .field-custom-container';
	  if ($(eqHeightSelector).length) {
	    $(eqHeightSelector).matchHeight();
	  }
    eqHeightSelector = '.view-2016-holiday .view-content .field-custom-container';
    if ($(eqHeightSelector).length) {
      $(eqHeightSelector).matchHeight();
    }
	  eqHeightSelector = '.view-lb-recent-promotions .view-content .field-custom-container';
	  if ($(eqHeightSelector).length) {
	    $(eqHeightSelector).matchHeight();
	  }
    }
  };

  Drupal.behaviors.lb_brand_active_filter = {
    attach: function (context, settings) {
      var $toggle_element = $('.view-lb-brands .narrow-by .filter-item select');
      $toggle_element.each(function() {
        var val = $(this).val();
        var label = $(this).find('option[value="'+val+'"]').html().trim();
        label = label.replace(/ /g, "_");
        $(this).closest('.filter-item').find('a[data-filter="'+label+'"]').addClass('filter-active');
      });

      var $click_element = $('.view-lb-brands .narrow-by a.filter');
      $click_element.each(function() {
        $(this).click(function() {
          $(this).closest('.narrow-by').find('li a.filter-active').removeClass('filter-active');
          $(this).addClass('filter-active');
        });
      });
    }
  };

})(jQuery);
