// IIFE (Immediately Invoked Function Execution or Self Invoking Function) http://benalman.com/news/2010/11/immediately-invoked-function-expression/
var creightonEdu = window.creightonEdu || {};
(function(ce_lib) {
  ce_lib(window.jQuery, window, document); // dependency injection
}(function ($, window, document) {
  $(function() {
    // document ready
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