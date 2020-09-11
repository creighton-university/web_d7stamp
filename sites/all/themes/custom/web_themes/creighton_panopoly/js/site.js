(function ($) {
	
// Localizejs
//$.getScript("ttps://cdn.localizejs.com/localize.js", function(){
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
  var numPics; 
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
          
      if(frontPage == 1) {
        ////////////////////////////////////////////////////////////
        //WWW FRONT PAGE
        ////////////////////////////////////////////////////////////
        if( $('body').hasClass('site-www') ) {
          slider = $('.front-page-slider .field-collection-container').bxSlider({
          pager: false,                             
          controls: false,
          adaptiveHeight: true,
          preloadImages: 'visible',   // all or visible
          onSliderLoad: function() {
            var newSlides = $('.front-page-slider .field-collection-container').css({
              'opacity': '1',  
              'filter': 'alpha(opacity=100)',
              'zoom': '1'
              });
           //$('.front-page-slider article').show();
            }          
          });                    
        }//if( $('body').hasClass('site-www') ) {
        ////////////////////////////////////////////////////////////
        //ALT FRONT PAGES
        ////////////////////////////////////////////////////////////
        else {
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
            var newSlides = $('.front-page-slider .field-collection-container').css({
              'opacity': '1',  
              'filter': 'alpha(opacity=100)',
              'zoom': '1'
              });
              
             $('.hero-pic').css('visibility','visible');
            }          
          });
          
        //Quicklinks
    	$('#mobile-quicklinks').click(function() {
      		$(this).toggleClass('expanded');
      		$('#block-menu-block-header-utility-menu').toggle();
      		$('#block-menu-block-header-transaction-menu').toggle();
    	});     
       
        }//else
        // Added IE, Safari 8 having trouble loading bxSlider
          setTimeout(function(){
                slider.redrawSlider();
          },200);  
        //Remove Buttons if only one slide      
        if(numPics == 1) {
          $(".bx-slide-controls").hide();
        }
      }//if(frontPage == 1) {      
    }//if(width > tabletEnd) {
  });//$(window).load(function() { 
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////  
  $(document).ready(function() {
  // executes when HTML-Document is loaded and DOM is ready
  //////////////////////////////////////////////////////////////////////////////////////////////////////////// 
    //Get count of images
    numPics = $(".hero-pic").size();   
    //www site only to randomize start pic  
    if( $('body').hasClass('site-www') ) {          
             
        //Randomize First Image  
        //Random 0,1,2 
        //var randomnumber = Math.floor(Math.random() * (maximum - minimum + 1)) + minimum;  
        var randHero = Math.floor((Math.random() * 3) + 0);        
        //var randHero = Math.floor((Math.random() * numPics) + 0);
        $(".hero-pic").hide();
        $(".hero-pic").each(function(i) {          
          if( i == randHero ) {
            width = $( document ).width(); 
            if(width > tabletEnd) {
              backgroundHeroWidth = 'front_page_slider_custom_user_min_width_78_125em_1x';
            }
            else {
              backgroundHeroWidth = 'front_page_slider_custom_user_max_width_56_25em_1x';  
            }                          
            backgroundHeroFile = $(this).attr("value");
            backgroundHero = 'http://'+location.hostname+'/sites/'+location.hostname+'/files/styles/'+backgroundHeroWidth+'/public/block/front-page-slide/image/'+backgroundHeroFile;
            $(".hero").css("background-image","url('"+backgroundHero+"')");      
            $(this).show();              
          }//if(i==randHero) {
        });
  
    }//if( $('body').hasClass('www-site') ) {      
    width = $( document ).width();         
    //Show schools-colleges on Tablet and above
    if(width > tabletEnd){
      //Set High School 1st Audience Active
      $('.bean-front-page-audience .dropdown-menu > :first-child .field-collection-view').addClass('active');
      $('.bean-front-page-audience .dropdown-menu > :first-child').addClass('audience-active');
    }                 
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
    $('#mini-panel-home_schools_and_colleges_2015 a.fp-dropdown-links').click(function() {   
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
