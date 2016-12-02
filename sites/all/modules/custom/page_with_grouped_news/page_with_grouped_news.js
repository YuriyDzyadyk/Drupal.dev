(function($) {

    // Re-enable form elements that are disabled for non-ajax situations.
    //behavior - start works from site uploading
    // Drupal.behaviors.changeColorFromStart = {
    //      attach: function() {
    //
    //        //  document.getElementById("5_67").style.color = "red";
    //
    //      }
    // };

    //сustom  ajax command
    Drupal.ajax.prototype.commands.changeColor = function (ajax, response, status) {
        // console.log(ajax);
        // console.log(response);
        // console.log(status);

        if (response.data) {
            var strId = $(ajax.selector);
            strId.css('color', response.data);
        }
    }

})(jQuery);
