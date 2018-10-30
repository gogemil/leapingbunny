/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {

  // To understand behaviors, see https://drupal.org/node/756722#behaviors
  Drupal.behaviors.ao_frontend_template = {
    attach: function(context, settings) {

    // handles display of meny navigation
    $('body', context).once('able-activate', function(){
      
      
      /**
       * Creates a callout on the screen
       */
      aoCallout = function(content){
        var callout;
        $('BODY').append('<div class="aoCallout"></div>');
        callout = $('.aoCallout');
        callout.html(content);
        // make sure we can see H3 elements
        callout.find('h3').attr('style', '');
      }
      
      // find the fields with a description 
      // finds textareas, textareas with summaries, checkboxes, textboxes, datetime 
      var aoFieldSelectors = ".text-format-wrapper > div.description, .form-type-textarea > div.description, .form-type-checkbox > div.description, .form-type-textfield > div.description, .form-type-select > div.description",
      aoDTSelectors = ".fieldset-wrapper > .fieldset-description",
      aoExclude = "[class$='-summary'] > div.description, .filter-wrapper .fieldset-wrapper .form-item, [id$='-format-help'] > div.description",
      aoFormDecs = $(".node-form .form-wrapper").find(aoFieldSelectors).not(aoExclude),
      aoDTDecs = $(".node-form").find(aoDTSelectors);
      
      if(aoFormDecs.length > 0 || aoDTDecs.length > 0){
        
        var helpItems;

        // get all the descriptions for fields
        // adjust the selectors above if necessary for other field types
        aoFormDecs.each(function(){
          var label = $(this).parent().find('LABEL').not('.text-summary-wrapper > .form-item > LABEL').first(), helpItems;
          label.append('<div class="ao-field-help"></div>');
          label.find('.ao-field-help').html('&nbsp;?&nbsp;<div class="ao-show-help">' + $(this).html() + '</div>');
          $(this).hide();
        });
        
        // date time fields are their own special ray of sunshine
        aoDTDecs.each(function(){
          var label = $(this).parents('.form-field-type-datetime').find('.fieldset-legend'), helpItems;
          label.append('<div class="ao-field-help"></div>');
          label.find('.ao-field-help').html('&nbsp;?&nbsp;<div class="ao-show-help">' + $(this).html() + '</div>');
          $(this).hide();
        });
        
        // get all the help items we just created
        helpItems = $('.ao-field-help');
        
        // have them display help text where appropriate
        helpItems.each(function(){
          $(this).bind('mouseover', function(){
            aoCallout($(this).find('.ao-show-help').html());
          });
          $(this).bind('mouseout', function(){
            $('.aoCallout').remove();
          });
        });
        
      }
      
      // track the position of the mouse
      var currentMousePos = { x: -1, y: -1 };
      
      $(document).mousemove(function(event) {
        var formatBubble = $('.aoFormatBubble, .aoCallout'), w, h;
        currentMousePos.x = event.pageX;
        currentMousePos.y = event.pageY;
        
        if(formatBubble.length){
          // position the format bubble where the mouse is
          w = formatBubble.width();
          h = formatBubble.height();
          formatBubble.css('left', currentMousePos.x - w/2);
          formatBubble.css('top', currentMousePos.y - h - 50);
        }
        
      });

      // create buttons for each input filter
      $check = $('.text-format-wrapper').find('SELECT');
      if ($check.length > 0){
        $check.hide();
        // check each text filter
        for($i = 0; $i < $check.length; $i++){
          $items = $('#' + $($check[$i]).attr('id') + ' > option').map(function(){
            var text, value, itemClass = '', newItem;
            text = $(this).text();
            value = $(this).val();
            if ($(this).attr('selected')){
              itemClass = " active-val";
            }
            newItem = $(this).parent().before('<div class="ao-input-format-select' + itemClass + '" name="' + value + '">' + text + '</div>');
          });
        }
        
        // make the guidelines appear over each input format
        $('.ao-input-format-select').bind('mouseover', function(){
          var guides = $(this).parents('.fieldset-wrapper').find('.filter-guidelines-item'), guideClass = $(this).text().replace(/\s+/g, '_').toLowerCase(), formatBubble;

          // check the guides, see if there is one that matches
          guides.each(function(){
            if($(this).hasClass("filter-guidelines-" + guideClass)){
              aoCallout($(this).html());
            }
          });
          
        });
        $('.ao-input-format-select').bind('mouseout', function(){
          $('.aoCallout').remove();
        });
        
        // changes the value of the select box for input filters, which should not be visible
        $('.ao-input-format-select').click(function(){
          var select, value;
            // set the value of the select list based on what the person selected
            select = $(this).parent().find('SELECT');
            value = $(this).attr('name');
            select.val(value).change();
            // get all the other selects around this one and make them not selected
            $(this).parent().find('.text-format-select').removeClass('active-val');
            // then make this one selected
            $(this).addClass('active-val');
        });
      }
    });

  }
};


})(jQuery, Drupal, this, this.document);
