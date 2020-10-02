/**
 * Created on 10/21/2016.
 * Accessibility hack
 */
(function ($) {
    $(document).ready(function () {
        // This line requires that it goes in the footer under the modules js files.
        $(".flex-control-nav.flex-control-thumbs img").attr({"alt": "Select video", "role": "presentation"});

        // Remove redundant aria attributes from legacy theme code.
        $("nav[role='navigation']").removeAttr("role");
        $("article[role='article']").removeAttr("role");
    });
})(jQuery);
