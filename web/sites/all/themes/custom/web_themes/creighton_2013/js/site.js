(function ($) {
  var hasTouch = false;
  if (('ontouchstart' in document.documentElement)) {
    hasTouch = true;
  }

  // IE Doesn't support origin
  if (!window.location.origin) {
    window.location.origin = window.location.protocol + "//" + window.location.hostname + (window.location.port ? ':' + window.location.port: '');
  }

  var hasSlideshow = false;


  var mobileMenu_icon = $('.nav-toggle');
  var mainMenu_containter = $('.l-region--header');

  var cu = {

    construct: function(){
      if ($('.slideshow')) {
        hasSlideshow = true;
      }
    },

    init: function(){

      if(hasSlideshow){
        if ($('html').hasClass('lt-ie9')) {
          setTimeout(function(){
            cu.inlineSlider();
          }, 250);
        }else{
          setTimeout(function(){
            cu.inlineSlider();
          }, 250);
        }

      }
    },

    log: function(data){
      if( typeof console !== 'undefined'){
        console.log(data);
      }
    },

    heroSlider: function(){

      $('.front-page-slider .field-collection-container').bxSlider({
        slideSelector: '.field-collection-view',
        pager: false,
        startSlide: 0,
        adaptiveHeight: true,
        preloadImages: 'all',
        onSliderLoad: function(){
          if(hasTouch){
            $('.bx-controls').hide();
          }
          var newSlides = $('.front-page-slider .field-collection-container').css({
            'opacity': '1',
            'filter': 'alpha(opacity=100)',
            'zoom': '1'
          });
        }
      });
    },

    inlineSlider: function(){
      $('.bxslider').bxSlider({
        pager: false,

        onSliderLoad: function(){
          var newSlides = $('.bean-inline-slider .slideshow').css({
            'opacity': '1',
            'filter': 'alpha(opacity=100)',
            'zoom': '1'
          });
        }
      });
    },

  };

  function urlQuery(){
    /* Spliting query into an array was sourced from
     * http://stackoverflow.com/questions/901115/how-can-i-get-query-string-values-in-javascript
    */
    var urlParams,
        match,
        pl = /\+/g,  // Regex for replacing addition symbol with a space
        search = /([^&=]+)=?([^&]*)/g,
        decode = function (s) { return decodeURIComponent(s.replace(pl, " ")); },
        query = window.location.search.substring(1);

    urlParams = {};
    while (match = search.exec(query))
      urlParams[decode(match[1])] = decode(match[2]);
  }

  $(document).ready(function() {

    cu.construct();

    cu.init();

    $('.dropdown').dropdown();
    // Header Main Menu
    $('.mobile-menu-icon').bind('click', function(e){
      e.preventDefault();
      $('.block--menu-block-header-main-menu, .secondary-header').toggleClass('open');
      return false;
    });
    // Side Nav Toggle
    $('.small-menu-trigger').bind('click', function(){
      $('#block-menu-block-sidebar-secondary-menu').toggleClass('open');
      $(this).toggleClass('open');
      return false;
    });

    $('.block--tab-acc').on('click', '.item-list a', function(event){
      event.preventDefault();
      $('.block--tab-acc .item-list li').removeClass('active');
      $('.block--tab-acc .tab-content').addClass('tab-acc-hide');
      var tabLink = $(this).parent().attr('class');
      var curTab = $(this);

      displayTabs(curTab, tabLink);

    });

    /*
     * Site wide tab functionality
     */
    $('.block--tab-acc').on('click', 'h3 a', function(event){
      event.preventDefault();

      var curTab = $(this);
      var tabLink = $(this).parent().attr('class');

      if($(this).parent().hasClass('active')){
        $(this).parent().removeClass('active');
        tabLink = $(this).parent().attr('class');
        var contentBlock = $('.block--tab-acc .acc-content');
        // console.log(tabLink);
        $.each(contentBlock, function(index, val) {
          if($(this).attr('id') === tabLink){
            $(this).slideToggle('fast').removeClass('accordion-show');
          }
        });
      }else{
        $('.block--tab-acc h3').removeClass('active');
        $('.block--tab-acc .accordion-show').slideToggle('fast').removeClass('accordion-show');

        displayAccordions(curTab, tabLink);
      }
    });

    /**
     * Academics Filtering navigation tabs
     */
    $('.nav__academics-filter').on('click', 'a', function(event){
      event.preventDefault();

      //cu.academicFilterType();

      $('.nav__academics-filter a').removeClass('active');
      $(this).addClass('active');
      $('.filter__academics').not('.button-list').removeClass('show').addClass('hide');
      $($(this).attr('href')).removeClass('hide').addClass('show');
      $('.button-list').addClass('show');
    });

    $('.filter-reset').on('click', this, function(event){
      event.preventDefault();

      window.location.href = window.location.pathname;
    });

    $('.academic--filter').on('click', this, function(event){
      event.preventDefault();

      var filterInputs = [],
          filterInterests = [],
          prgInterests = '',
          filterName,
          filterValue,
          newFilterURL;
      filterInputs = $('#filter-types input');
      filterInterests = $('#filter-interests input');

      $.each(filterInterests, function(key, value){
        if($(value).attr('checked')){
          prgInterests += '&aca_prg_interests[]=' + $(value).attr('value');
        }
      });

      $.each(filterInputs, function(key, value){

        if($(value).attr('checked')){
          var index = $(value).attr('id').indexOf('-')
          filterName = $(value).attr('id').slice(0, index);
          newFilterURL = window.location.origin + '/programs/e?' + filterName + '=' + $(value).attr('value');

        }

      });

      window.location.href = newFilterURL + prgInterests;

    });
  });

  // Things that can happen after the dom loads.
  $(window).load(function() {

    if($('body').hasClass('front')){
      var slideCount = $('.front-page-slider .field-collection-view').length;
      if( $('html').hasClass('lt-ie9') && slideCount > 1 ){
        setTimeout(function(){
          cu.heroSlider();
        }, 1000);
      }else if( slideCount > 1 ){
        cu.heroSlider();
      }else{
        var newSlides = $('.front-page-slider .field-collection-container').css({
            'opacity': '1',
            'filter': 'alpha(opacity=100)',
            'zoom': '1'
          });
      }
    }
    $('.front-page-slider .field-collection-view').css("height","auto");
  });

  function displayTabs(curTab, tabLink){
    $(curTab).parent().addClass('active');
    var contentBlock = $('.block--tab-acc .tab-content');
    $.each(contentBlock, function(index, val) {
       if($(this).attr('id') === tabLink){
        $(this).removeClass('tab-acc-hide');
       }
    });
  }
  function displayAccordions(curTab, tabLink){
    $(curTab).parent().addClass('active');
    var contentBlock = $('.block--tab-acc .acc-content');
    $.each(contentBlock, function(index, val) {
       if($(this).attr('id') === tabLink){
        $(this).slideToggle('fast').addClass('accordion-show');
       }
    });
  }

})(window.jQuery);







  /* Audience Dropdown
 *
 * $(element).dropdown()
 *
 * Based on the Twitter Bootstrap dropdown with mark-up but with less js for our needs.
 *
 * http://getbootstrap.com/2.3.2/javascript.html#dropdowns
 *
*/
!function ($) {
$.fn.dropdown = function() {
  return this.each(function () {
      var _container = $(this), // the container
          _trigger = $('.dropdown-toggle',this); // the trigger we click

      _trigger.click(function(){
          $(_container).toggleClass('open'); // toggle the open class, opens the dropdown with CSS
          return false;
      });

      $('.dropdown-menu li a', this).click(function(){
         var newText = $(this).text();
         _trigger.text(newText);
         _container.toggleClass('open');

         /* How will the audience options be loaded in? We could do that with Ajax here or also hide/show options if they already exist in the DOM. */

        var collectionName = $(this).attr('class');

        var audienceLinks = $('.audience-links');
        var nextCollection = ".audience-links." + collectionName;
        // console.log(nextCollection);
        if(audienceLinks.hasClass('active') ){
          audienceLinks.removeClass('active');
        }
        $(nextCollection).addClass('active');

        return false;
      });
      /* Close the dropdown if the user clicks somewhere else on the page that isn't the dropdown */
      $(document, this).click(function(e){
          if($(e.target).closest('.dropdown-menu li a', this).length !== 0) return false;
          if(_container.hasClass('open')) _container.removeClass('open');
      });
  });

};
$.fn.hasAttr = function(name) {
   return this.attr(name) !== undefined;
};
}(window.jQuery);



