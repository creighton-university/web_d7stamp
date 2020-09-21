jQuery(document).ready(function() {
  jQuery('.course-block').click( function(event) {
    var courseLink = jQuery(this).find('.courses-accordion-link');
    
    if( jQuery(courseLink).hasClass('active') ) {
      jQuery(courseLink).removeClass('active');
      jQuery(courseLink).find(".course-expand").html("+");
    } else {
      jQuery(courseLink).addClass('active');
      jQuery(courseLink).find(".course-expand").html("&ndash;");
    }
    
    jQuery('.courses-acc-content').each(function(index, val) {
          
      if( jQuery(this).parent().parent().parent().parent().parent().find('.courses-accordion-link').hasClass('active') ) {
        jQuery(this).slideDown('fast', function() {
          jQuery(this).css('overflow','visible');
        });
      } else {
        jQuery(this).slideUp('fast', function() {
          jQuery(this).css('overflow','visible');
        });
      }
    });
  });
});