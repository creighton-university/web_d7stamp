(function ($) {
	
// Localizejs
//$.getScript("https://cdn.localizejs.com/localize.js", function(){
//});
//!function(a){if(!a.Localize){a.Localize={};for(var e=["translate","untranslate","phrase","initialize","translatePage","setLanguage","getLanguage","detectLanguage","getAvailableLanguages","untranslatePage","bootstrap","prefetch","on","off"],t=0;t<e.length;t++)a.Localize[e[t]]=function(){}}}(window);
// Localize.initialize({
//  key: 'Ai8mKOD1BSn1r',
//  rememberLanguage: true
// });
	
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////
  //Variables
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////
  var mobileMenu_icon = $('.nav-toggle');
  var mainMenu_containter = $('.l-region--header');
  var slider;
  var frontPage = 0;
  var width;
  var menu;
  var mobileEnd = 767;
  var tabletStart = 768;
  var tabletEnd = 1049;
  var audience = Array();
  //var numPics;
  // IE Doesn't support origin
  if (!window.location.origin) {
    window.location.origin = window.location.protocol + "//" + window.location.hostname + (window.location.port ? ':' + window.location.port: '');
  }
  
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////
  $(window).load(function() {    
  // executes when complete page is fully loaded, including all frames, objects and images
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////       
    // because the president's site is not conventional (cbu04905)
    if (! $('body').hasClass('section-office-of-the-president')) {
	    $(".hero").css("min-height","220px");  //Added to keep the top from collapsing when no image shows up (cbu04905)
	    }

    $(".hero").css("height","auto");  //Set this to auto after hard set for UX
    if( $('body').hasClass('front') ) {
      frontPage = 1;      
    }
    width = $( document ).width();       
    //Show Pics Tablet and Desktop only
    if(width >= tabletStart) {
      
      // Hack for Chrome to redraw side menu
      // 42 (42.0.2311.90)
      // http://stackoverflow.com/questions/29695386/google-chrome-issue-rendering-font-from-font-face
      $('#block-menu-block-sidebar-secondary-menu').hide().show(0);
          
      // if(frontPage == 1) {
      //   ////////////////////////////////////////////////////////////
      //   //WWW FRONT PAGE
      //   ////////////////////////////////////////////////////////////
      //   if( $('body').hasClass('site-www') ) {
      //     slider = $('.front-page-slider .field-collection-container').bxSlider({
      //     pager: false,
      //     controls: false,
      //     adaptiveHeight: true,
      //     preloadImages: 'visible',   // all or visible
      //     onSliderLoad: function() {
      //       var newSlides = $('.front-page-slider .field-collection-container').css({
      //         'opacity': '1',
      //         'filter': 'alpha(opacity=100)',
      //         'zoom': '1'
      //         });
      //      //$('.front-page-slider article').show();
      //       }
      //     });
      //   }//if( $('body').hasClass('site-www') ) {
      //   ////////////////////////////////////////////////////////////
      //   //ALT FRONT PAGES
      //   ////////////////////////////////////////////////////////////
      //   else {
        slider = $('.front-page-slider .field-collection-container').bxSlider({
            randomStart: true,
            pager: false,

            mode: 'fade',
            controls: true,
            nextText: '',
            prevText: '',
            prevSelector: '.bx-slide-prev',
            nextSelector: '.bx-slide-next',
            adaptiveHeight: true,
            preloadImages: 'visible',   // all or visible
            onSliderLoad: function() {
                /*var newSlides = */
                $('.front-page-slider .field-collection-container').css({
                    'opacity': '1',
                    'filter': 'alpha(opacity=100)',
                    'zoom': '1'
                });

                $('.hero-pic').css({'visibility':'visible', 'height':'auto'});
            }
        });
      //
      //   //Quicklinks
    	// $('#mobile-quicklinks').click(function() {
      // 		$(this).toggleClass('expanded');
      // 		$('#block-menu-block-header-utility-menu').toggle();
      // 		$('#block-menu-block-header-transaction-menu').toggle();
    	// });
      //     /////////////////// trying to fix hero image not showing up (cbu04905)
      //
      //    var currWidth = parseInt($(".bx-viewport").css("width"),10);
      //    var currHeight = parseInt($(".bx-viewport").css("height"),10);
      //    // the height should be 1/3 of the width at least
      //    var targHeight = parseInt(currWidth/3);
      //    var intervalID = window.setInterval(myCallback, 200);

      //    function myCallback() {
      //        // test on targHeight - 1 in case the calculation loses a decimal or rounds down
      //        if ((currWidth > 3 * targHeight) && (currHeight < targHeight)) {
      //          targHeight = currWidth/3;
      //        }
      //      jQuery(".bx-viewport").css("min-height",targHeight);
      //    }
      //
      //
      //   }//else
      //   // Added IE, Safari 8 having trouble loading bxSlider
      //     setTimeout(function(){
      //           slider.redrawSlider();
      //     },200);
      //   //Remove Buttons if only one slide
         if($(".hero-pic").length == 1) {
            $(".bx-slide-controls").hide();
         }
      // }//if(frontPage == 1) {
    }//if(width > tabletEnd) {
  });//$(window).load(function() { 
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////  
  $(document).ready(function() {
  // executes when HTML-Document is loaded and DOM is ready
  //////////////////////////////////////////////////////////////////////////////////////////////////////////// 
    //Get count of images
    //numPics = $(".hero-pic").size();
    //www site only to randomize start pic  
    // if( $('body').hasClass('site-www') ) {
    //
    //     //Randomize First Image
    //     //Random 0,1,2
    //     //var randomnumber = Math.floor(Math.random() * (maximum - minimum + 1)) + minimum;
    //     var randHero = Math.floor((Math.random() * 3) + 0);
    //     //var randHero = Math.floor((Math.random() * numPics) + 0);
    //     $(".hero-pic").hide();
    //     $(".hero-pic").each(function(i) {
    //       if( i == randHero ) {
    //         width = $( document ).width();
    //         if(width > tabletEnd) {
    //           backgroundHeroWidth = 'front_page_slider_custom_user_min_width_78_125em_1x';
    //         }
    //         else {
    //           backgroundHeroWidth = 'front_page_slider_custom_user_max_width_56_25em_1x';
    //         }
    //         backgroundHeroFile = $(this).attr("value");
    //         backgroundHero = 'http://'+location.hostname+'/sites/'+location.hostname+'/files/styles/'+backgroundHeroWidth+'/public/block/front-page-slide/image/'+backgroundHeroFile;
    //         $(".hero").css("background-image","url('"+backgroundHero+"')");
    //         $(this).show();
    //       }//if(i==randHero) {
    //     });
    //
    // }//if( $('body').hasClass('www-site') ) {
    width = $( document ).width();         
    //Show schools-colleges on Tablet and above
    // if(width > tabletEnd){
    //   //Set High School 1st Audience Active
    //   $('.bean-front-page-audience .dropdown-menu > :first-child .field-collection-view').addClass('active');
    //   $('.bean-front-page-audience .dropdown-menu > :first-child').addClass('audience-active');
    // }
    /*
     * Front Page Mobile Effects Begin
     */    
    $(window).resize(function() {
      width = $( document ).width();
      //Show schools-colleges on Tablet and above
      if(width > tabletStart){
        $('.schools-colleges .dropdown-menu .field-collection-view').show();
      }      
    }); 
    //Quicklinks
    $('#mobile-quicklinks').click(function() {
      $(this).toggleClass('expanded');
      $('#block-menu-block-header-utility-menu').toggle();
      $('#block-menu-block-header-transaction-menu').toggle();
    });     
    //Main Menu Header
    $('.main-header a.fp-dropdown-links').click(function() {   
      menu = $(this).parent();
      fpMenuExpand(menu);            
      return false;
    });
    //Audience Menu
    $('.bean-front-page-audience .dropdown-menu .audience-button').click(function() {
      fpAudience($(this));
    });
    //FP Gold Section Schools or Colleges
    $('#mini-panel-home_schools_and_colleges_2016 a.fp-dropdown-links').click(function() {   
      menu = $(this).parent();
      fpMenuExpand(menu);            
      return false;
    });
    //Main Menu Footer
    $('.footer a.fp-dropdown-links').click(function() {   
      menu = $(this).parent();
      fpMenuExpand(menu);            
      return false;
    });
    /* Faith -- Support */
    $('.academic-search-schools-colleges .faith-support h4').click(function() {
      $(this).parent().parent().find('p').toggle();
    });
    /*
     * Front Page Mobile Effects End
     */
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

  });//$(document).ready(function() {
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////
  //Functions
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////
  function phoneTest() {
    return ($(window).width() > 480);
  }

  function displayTabs(curTab, tabLink) {
    $(curTab).parent().addClass('active');
    var contentBlock = $('.block--tab-acc .tab-content');
    $.each(contentBlock, function(index, val) {
       if($(this).attr('id') === tabLink){
        $(this).removeClass('tab-acc-hide');
       }
    });
  }
  // for Slate link to the general inquiry form
  // adds the interaction summary with the current page to the URL that is passed
/*
  jQuery(document).ready(function() {
	//for each link that we are looking for
	jQuery('a[href$="code=ad3020fc-ce79-4a4c-be0f-6fe423654899"]').each(function(i, item) {
		var href = jQuery(item).attr('href');
		//append the current URL after clicking the link
		jQuery(item).attr('href', href + '&sys:interaction:summary=' + document.location.href);
	});
  });
*/
  function displayAccordions(curTab, tabLink) {
    $(curTab).parent().addClass('active');
    var contentBlock = $('.block--tab-acc .acc-content');
    $.each(contentBlock, function(index, val) {
       if($(this).attr('id') === tabLink){
        $(this).slideToggle('fast').addClass('accordion-show');
       }
    });
  }
  function fpMenuExpand(menu) {
    var dropMenu = $(menu);  
    var currMenu = $(menu).find('.field-collection-view');          
    var width = $( document ).width();
    width = width + 15; //Some error ?
        
    //Active Audience background  
   $('.audience-active').toggleClass('audience-active');                        
    //--Mobile--//////////////////////////////////////////
    if(width < mobileEnd) {           
      $('#drop-main-menu-header .field-collection-view').hide();
      $('#drop-audience-select .field-collection-view').hide();
      $('#drop-school-college-select .field-collection-view').hide();
      $('#drop-main-menu-footer .field-collection-view').hide(); 
    }  
    //--Tablet--//////////////////////////////////////////
    if(width > mobileEnd && width < tabletEnd) {           
       $('#drop-main-menu-header .field-collection-view').hide();
       $('#drop-audience-select .field-collection-view').hide();
    }
    //--Mobile && Tablet && Desk--////////////////////////
      //Toggle if same 
      if( $(currMenu).hasClass('active') ) {              
        $(currMenu).hide();  
        $(currMenu).toggleClass('active');
                                     
      } else {                                                                   
        //Reset
        $(dropMenu).addClass('audience-active'); 
        //Set new active
        $(currMenu).slideToggle('fast').toggleClass('active');          
      }           
    //--Tablet && Desktop--///////////////////////////////
    if(width > tabletStart) {           
    }    
  }//function fpMenuExpand(menu) {  
  function fpAudience(audienceButton) {
    var dropMenu = $(audienceButton).parent();  
    var currMenu = $(audienceButton).parent().find('.field-collection-view');                     
    var width = $( document ).width();
    width = width + 15; //Some error ?
    
    $('.dropdown-menu').removeClass('audience-active');
  
    //Active Audience background  
    $('.dropdown-menu li').removeClass('audience-active');          
    $('.audience-active').toggleClass('audience-active');
    
    //--Mobile--//////////////////////////////////////////
    if(width < mobileEnd) {
      $('#drop-main-menu-header .field-collection-view').hide();
      $('#drop-audience-select .field-collection-view').hide();
      $('#drop-school-college-select .field-collection-view').hide();
      $('#drop-main-menu-footer .field-collection-view').hide();
      }  
    //--Tablet--//////////////////////////////////////////
    if(width > mobileEnd && width < tabletEnd) {       
       $('#drop-main-menu-header .field-collection-view').hide();
       $('#drop-audience-select .field-collection-view').hide();
      }
    //--Mobile && Tablet--///////////////////////////////
      //Expand Audience Menu
    if(width < tabletEnd) {
      if( $(currMenu).hasClass('active') ) {           
        $(currMenu).hide();  
        $(currMenu).toggleClass('active');   
        
      } else {              
        //Reset
        $('.dropdown-menu .field-collection-view').removeClass('active');
        $(dropMenu).addClass('audience-active');
        //Set new active
        $(currMenu).slideToggle('fast').toggleClass('active');          
      }                         
    }         
    //--Tablet && Desktop--//////////////////////////////
    if(width >= tabletStart) {   
       if(frontPage == 1) {
        //Change Audience Image
        slider.goToSlide( $(audienceButton).parent().index() );        
      }            
    }                    
    //--Desktop--///////////////////////////////////////
      //Change Widget                                
    if(width > tabletEnd) {     
      //Show schools-colleges on Tablet and above
      $('.schools-colleges .dropdown-menu .field-collection-view').show();
      
      $(dropMenu).parent().find('.fp-audience-marketing').hide();
      $(dropMenu).find('.fp-audience-marketing').show();
    
      //Reset
      $('.field-collection-view').removeClass('active');
      $(dropMenu).parent().find('.field-collection-view').hide();
      //Set new active
      $(currMenu).toggleClass('active');
      $(currMenu).show();
      $(dropMenu).addClass('audience-active');
    }
         
    return false;
  }
})(window.jQuery);

// IIFE (Immediately Invoked Function Execution or Self Invoking Function) http://benalman.com/news/2010/11/immediately-invoked-function-expression/
var creightonEdu = window.creightonEdu || {};
(function(ce_lib) {
  ce_lib(window.jQuery, window, document); // dependency injection
}(function ($, window, document) {
  // executes when HTML-Document is loaded and DOM is ready
  // equivilent to $(document).ready(function() {})
  $(function() {

  });

  // Namespace/Singleton object - these methods are available immediately on page load
  creightonEdu = (function() {
    // Private variables
    var _toggleable = ".toggleable";			// selectors for toggleable content (like accordion)

    //  public methods
    return {
      initMainNav: function (navSection) {
        var objFullMenu = new this.fullMenu('a[data-main-menu-ico="main-hamburger-menu-ico"]');

        // hack menu items to apply icons and have text appear under them and centered.
        $('.pane-menu-menu-resources.small-icons .menu a').each(function () {
          var anchor_text = $(this).text();

          $(this).html('<span></span><span>' + anchor_text + '</span>');
        });

      }, initToggler: function (beforeafter) {
        var _tgc = $(_toggleable);

        if ($(_tgc).length == 0) {
          return 0;
        } else {
          //var tglc = $(_toggleable + ' > div'),
          //tglr = $(_toggleable + ' > p, ' + _toggleable + ' > h1, ' + _toggleable + ' > h2, ' +
          //        _toggleable + ' > h3, ' + _toggleable + ' > button');
          var tglc = $(_toggleable).find('.panel-panel .inside'), // contains elements to be collapsed
              tglr = undefined;  // find the pane title

          if (tglc.length !== 0) {
            tglr = tglc.find('.toggler');
          } else {
            return 0;
          }

          _tgc.attr('data-closed', 'true');

          tglr.each(function () {
            //if ($(this).hasClass('toggler') === false) {
            //$(this).addClass('toggler');
            $(this).attr({
              'role': 'button',
              'aria-haspopup': 'true',
              'aria-expanded': 'false'
            });
            //}
          });

          tglc.each(function () {
            var container_div = document.createElement('div'),
                toggler_sblngs = $(this).children('div.panel-pane ~ div.panel-pane');  // first one is the header

            $(container_div).addClass('toggle-container').attr({'aria-expanded': 'false'});

            toggler_sblngs.wrapAll(container_div);
          });

          var _tglr_o = $(_toggleable + "[data-closed='false']"),
              _tglr_c = $(_toggleable + "[data-closed='true']");

          _tglr_c.find(".toggle-container").hide();

          var toggler = _tglr_c.find('.toggler'),
              widget_close = '<i aria-hidden="true" class="icon-caret-down" /><span>&nbsp;</span>',
              widget_open = '<i aria-hidden="false" class="icon-caret-right" /><span>&nbsp;</span>';

          (beforeafter === "after") ? toggler.append(widget_close) : toggler.prepend(widget_close);
          toggler.removeAttr('href');

          toggler = _tglr_o.find('.toggler');

          (beforeafter === "after") ? toggler.append(widget_open) : toggler.prepend(widget_open);

          $(_toggleable).on('click', '.toggler', function (event) {
            //event.preventDefault();

            var $p = $(this).parents('.toggleable');

            $p.toggleClass('current');

            if ($p.attr('data-closed') === 'true') {
              $p.attr('data-closed', "false");
              //$p.children('.toggle-container').show('fast', function () {
              $p.find('.toggler').children('i').removeClass('icon-caret-down').toggleClass('icon-caret-right');
              //$p.find('.toggle-container').show('slide', { direction: "up" }, 'fast', function () {
              //$p.children('.toggler').children('i').removeClass('icon-caret-down').toggleClass('icon-caret-right');
              //});
              $p.find('.toggle-container').slideDown('fast');
            } else {
              $p.attr('data-closed', "true");
              //$p.children('.toggle-container').hide('fast', function () {
              $p.find('.toggler').children('i').removeClass('icon-caret-right').toggleClass('icon-caret-down');
              $p.find('.toggle-container').slideUp('fast');
              //$p.find('.toggle-container').hide('slide', { direction: "up" }, 100, function () {
              //$p.children('.toggler').children('i').removeClass('icon-caret-right').toggleClass('icon-caret-down');
              //});
            }

            return false;  // performs both .preventDefault() and .stopPropergation()
          });
        }
      }, deviceProfile: {
        isiOS: navigator.userAgent.match(/(iPod|iPhone|iPad)/),
        isDroid: navigator.userAgent.match(/Android/),
        isSamsung: navigator.userAgent.match(/SAMSUNG|SGH-[I|N|T]|GT-[I|P|N]|SM-[N|P|T|Z|G]|SHV-E|SCH-[I|J|R|S]|SPH-L/i),
        isTouch: typeof window.hasOwnProperty === "function" && !!window.hasOwnProperty("ontouchstart"),
        width: window.innerWidth || document.documentElement.clientWidth || document.body.clientWidth
      }, css_breakpoints: {  // reference sass/partials/utility/variables/_grid.scss
        'mobile_end': 767,
        'tablet_start': 768,
        'tablet_end': 1050,
        'desk_start': 1051
      }, initFeaturedContentCards: function(parentObj) {
        var fcc_cards = {
          card_1: $("#fcc-card-1"),
          card_2: $("#fcc-card-2"),
          card_3: $("#fcc-card-3"),
          card_4: $("#fcc-card-4"),
          card_5: $("#fcc-card-5"),
          card_6: $("#fcc-card-6")
        };

        $(".view-fp-fcc-featured-content-card-gallery .carousel").carousel({
          // controls: true,
          pagination: false,
          infinite: true,
          maxWidth: creightonEdu.css_breakpoints.mobile_end + "px",

          controls: {
            "contain": ".view-fp-fcc-featured-content-card-gallery .controls",
            "previous": ".view-fp-fcc-featured-content-card-gallery .previous",
            "next": ".view-fp-fcc-featured-content-card-gallery .next"
          }

        });

        for (x in fcc_cards) {
          fcc_cards[x].flip({trigger:"manual"});
          fcc_cards[x].mouseenter(function() {
            var that = this;
            setTimeout(function() {
              jQuery(that).flip('toggle');

            }, 200);
          });
        }
      }, initSocialGallery: function() {
        $(".view-fp-social-media-card-gallery .carousel").carousel({
          // controls: true,
          pagination: false,
          infinite: true,
          maxWidth: creightonEdu.css_breakpoints.mobile_end + "px",
          controls: {
            "contain": ".view-fp-social-media-card-gallery  .controls",
            "previous": ".view-fp-social-media-card-gallery  .previous",
            "next": ".view-fp-social-media-card-gallery  .next"
          }
        });
      }, init9SchoolsToggle: function() {
        var $schools9menu = $('.pane-floating-schools-colleges');

        if ($schools9menu.length > 0) {
          if (this.deviceProfile.isTouch && this.deviceProfile.width <= this.css_breakpoints.mobile_end) {
            this.initToggler('after');
          }
        }
        if (this.deviceProfile.isTouch && this.deviceProfile.width <= this.css_breakpoints.mobile_end) {
          $('#main_mega_nav .nav-item a[data-main-menu-ico="main-hamburger-menu-ico"]').text('MENU');
        }
      }, designerPlayland: function() {
        $("#designer-playland .carousel").carousel({
          // controls: true,
          pagination: false,
          infinite: true,
          maxWidth: creightonEdu.css_breakpoints.mobile_end + "px",

          controls: {
            "contain": "#designer-playland .controls",
            "previous": "#designer-playland .previous",
            "next": "#designer-playland .next"
          }

        });
      }, initFrontPage: function() {	// Intended to be called only in the document.ready function or inline at the bottom of the front page.
        this.init9SchoolsToggle();
        this.initFeaturedContentCards();
        this.initSocialGallery();
        this.designerPlayland();
      }
    };
  })();
}));

creightonEdu.fullMenu = function(wrapper) {
  // private variables
  var $main_mega_nav = null,
      $ = null,
      _expandedAttrs = {'aria-expanded': true},
      _collapsedAttrs = {'aria-expanded': false},
      _keyCodes = {
        ENTER: 13,
        ESCAPE: 27,
        DOWN: 40,
        UP: 38
      };

  // priviledged methods
  this.initialize = function() {
    $main_mega_nav.on('click touchend keydown', function (event) {
      if (event.type === 'keydown' && event.keyCode === _keyCodes.ESCAPE) {
        if ($('.sub-nav').hasClass('open')) {
          $('.sub-nav').removeClass('open');
          $(this).toggleClass('open');
          return false;
        }
      }

      if (event.type === 'keydown' && event.keyCode === _keyCodes.ENTER) {
        $('.sub-nav').toggleClass('open');
        $(this).toggleClass('open');
        return false;
      }

      if (event.type === 'click' || event.type === 'touchend') {
        $('.sub-nav').toggleClass('open');
        $(this).toggleClass('open');
        return false;
      }
    });

    $('.sub-nav a').on('keydown', $main_mega_nav.selector, $main_mega_nav.selector, function (event) {
      if (event.type === 'keydown' && event.keyCode === _keyCodes.ESCAPE) {
        if ($('.sub-nav').hasClass('open')) {
          $('.sub-nav').removeClass('open');
          $main_mega_nav.removeClass('open');
          return false;
        }
      }
    });
  };

  this.open = function () {
    $('.sub-nav').removeClass('open');
    $(this).toggleClass('open');
  };

  this.close = function () {

  };

  // Set it up
  if (typeof wrapper !== 'undefined' || typeof wrapper === 'string') {
    $ = jQuery;
    $main_mega_nav = $(wrapper);
    this.initialize();
  } else {
    console.log('Missing parameter: jQuery selector');
  }
};
////////////////////////// for funnelback /////////////////////////
  jQuery(document).ready( function() {
        if(jQuery(window).width() >= 768) {
			 jQuery('header input.cu-query').autocompletion({
				program: 'https://search.creighton.edu/s/suggest.json',
				alpha: '0.5',
				show: '10',
				sort: '0',
				length: '3',
				datasets:{
					organic: {
						name: 'Suggestions',
						collection: 'creighton-search',
						profile: '_default',
						show: '10'
					}
				}
			});
    }
  });

////////////////////////// for long emails /////////////////////////
jQuery(document).ready( function() {
  jQuery(".block--copy-block.sidebar-item.contact-us a").wrap("<div class='email'></div>");
  fitty(".block--copy-block.sidebar-item.contact-us a", {
    minSize: 8,
    maxSize: 17,
    multiLine: true
  });
});