(function ($) {
  Drupal.behaviors.lbRegistration = {
    attach: function(context) {
      $("input[name='lb_application[field_lb_suppliers_option][und]']").once().on("click", function () {
        if ($('#suppliers').is(':visible')) {
          if (!confirm(Drupal.t("Warning: By changing the option from Collecting Declarations of Raw Material Compliance to Amend Purchase Orders, all supplier data you have previously entered will be lost."))) {
            return false;
          }
        }
      });

      // Check if the field exists, otherwise js error is thrown
      if ($("input[name='lb_application[field_lb_suppliers_option][und]']").length != 0) {
        var eventList = $._data($("input[name='lb_application[field_lb_suppliers_option][und]']")[0], "events");
        eventList.click.unshift(eventList.click.pop());
      }
    }
  }

}(jQuery));
