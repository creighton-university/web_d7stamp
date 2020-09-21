/**
 * Created on 10/24/2016.
 * Accessibility hack for the front page Front Page Hero Slider.
 */

(function ($) {
    $(document).ready(function() {
        var nextText = "Next Slide";
        $(".view-homepage-slider a.flex-next").attr("aria-label",nextText);
        $(".view-homepage-slider a.flex-next").attr("role","button");
        var prevText = "Previous Slide";
        $(".view-homepage-slider a.flex-prev").attr("aria-label",prevText);
        $(".view-homepage-slider a.flex-prev").attr("role","button");
    });
})(jQuery);
