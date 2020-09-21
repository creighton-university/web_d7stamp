/**
 * Academics Filtering navigation tabs
 */
jQuery(document).ready(function() {
  
  //Detect submit from enter - needed for IE
  jQuery('#edit-title').keypress(function (e) {
    if (e.which == 13) {
      jQuery('.view-filters form').submit();
      return false;
    }
  });
  
  //Dynamicly add <li></li> for styling; Template involved 12 files
  jQuery('td.views-field-field-aca-prg-associates-title a').wrap('<li></li>');
  jQuery('td.views-field-field-aca-prg-certificate-title a').wrap('<li></li>');
  jQuery('td.views-field-field-aca-prg-bachelors a').wrap('<li></li>');
  jQuery('td.views-field-field-aca-prg-masters-title a').wrap('<li></li>');
  jQuery('td.views-field-field-aca-prg-doctorate-title a').wrap('<li></li>');
  
  var currURL;
  var currURLArgs;
  var currURLArgVars;
  var currArg;
  var i;
  //Get current URL
  currURL = window.location.href;
  //Split String at ?
  currURLArgs = currURL.split('?');
  if(currURLArgs.length > 1) {
    currURLArgVars = currURLArgs[1].split('&');

  for(i in currURLArgVars) {
    
    currArg = currURLArgVars[i].split('=');
    /*
    Associate     td.views-field-field-aca-prg-associates-title a 
    Certificate   td.views-field-field-aca-prg-certificate-title a 
    UnderGrad     td.views-field-field-aca-prg-bachelors a 
    Masters       td.views-field-field-aca-prg-masters-title a 
    Doctorate     td.views-field-field-aca-prg-doctorate-title a
    Online        a.online-course
    */
    //Online
    if(currArg[0] == 'online' && currArg[1] == 2) {
      //Remove non relevant columns
      jQuery('td.views-field-field-aca-prg-associates-title li').css('display', 'none');
      jQuery('td.views-field-field-aca-prg-certificate-title li').css('display', 'none');
      jQuery('td.views-field-field-aca-prg-bachelors li').css('display', 'none');
      jQuery('td.views-field-field-aca-prg-masters-title li').css('display', 'none');
      jQuery('td.views-field-field-aca-prg-doctorate-title li').css('display', 'none');
      jQuery('a.online-course').parent().css('display', '');            
    }
    //Accelearted
    if(currArg[0] == 'accelerated' && currArg[1] == 2) {
     
    }
    //Professional
    if(currArg[0] == 'professional' && currArg[1] == 1) {

    }
    //Associate
    if(currArg[0] == 'prg_offered' && currArg[1] == 1) {
      //Remove non relevant columns
      //jQuery('td.views-field-field-aca-prg-associates-title').html('');
      jQuery('td.views-field-field-aca-prg-certificate-title').html('');
      jQuery('td.views-field-field-aca-prg-bachelors').html('');
      jQuery('td.views-field-field-aca-prg-masters-title').html('');
      jQuery('td.views-field-field-aca-prg-doctorate-title').html('');
      jQuery('a.online-course').html('');
      
      //Remove Horizontal border lines on mobile
      jQuery('td.views-field-field-aca-prg-associates-title').css('border-top','0px solid white');
      jQuery('td.views-field-field-aca-prg-certificate-title').css('border-top','0px solid white');
      jQuery('td.views-field-field-aca-prg-bachelors-title').css('border-top','0px solid white');
      jQuery('td.views-field-field-aca-prg-masters-title').css('border-top','0px solid white');
      jQuery('td.views-field-field-aca-prg-doctorate-title').css('border-top','0px solid white');
    }
    //Undergrad
    if(currArg[0] == 'prg_offered' && currArg[1] == 2) {
      //Remove non relevant columns
      //jQuery('td.views-field-field-aca-prg-associates-title').html('');
      //jQuery('td.views-field-field-aca-prg-certificate-title').html('');
      //jQuery('td.views-field-field-aca-prg-bachelors').html('');
      jQuery('td.views-field-field-aca-prg-masters-title').html('');
      jQuery('td.views-field-field-aca-prg-doctorate-title').html('');
      jQuery('a.online-course').html('');
      
      //Remove Horizontal border lines on mobile
      //jQuery('td.views-field-field-aca-prg-associates-title').css('border-top','0px solid white');
      //jQuery('td.views-field-field-aca-prg-certificate-title').css('border-top','0px solid white');
      //jQuery('td.views-field-field-aca-prg-bachelors-title').css('border-top','0px solid white');
      jQuery('td.views-field-field-aca-prg-masters-title').css('border-top','0px solid white');
      jQuery('td.views-field-field-aca-prg-doctorate-title').css('border-top','0px solid white');
    }
    //Grad
    if(currArg[0] == 'prg_offered' && currArg[1] == 3) {
      //Remove non relevant columns
      jQuery('td.views-field-field-aca-prg-associates-title').html('');
      //jQuery('td.views-field-field-aca-prg-certificate-title').html('');
      jQuery('td.views-field-field-aca-prg-bachelors').html('');
      //jQuery('td.views-field-field-aca-prg-masters-title').html('');
      //jQuery('td.views-field-field-aca-prg-doctorate-title').html('');
      //jQuery('a.online-course').html('');
      
      //Remove Horizontal border lines on mobile
      jQuery('td.views-field-field-aca-prg-associates-title').css('border-top','0px solid white');
      jQuery('td.views-field-field-aca-prg-certificate-title').css('border-top','0px solid white');
      jQuery('td.views-field-field-aca-prg-bachelors-title').css('border-top','0px solid white');
      jQuery('td.views-field-field-aca-prg-masters-title').css('border-top','0px solid white');
      //jQuery('td.views-field-field-aca-prg-doctorate-title').css('border-top','0px solid white');
    }
  }
  
  }
	jQuery('.nav__academics-filter').on('click', 'a', function(event){
	  event.preventDefault();
	
	  jQuery('.nav__academics-filter a').removeClass('active');
	  jQuery(this).addClass('active');
	  jQuery('.filter__academics').not('.button-list').removeClass('show').addClass('hide');
	  jQuery(jQuery(this).attr('href')).removeClass('hide').addClass('show');
	  jQuery('.button-list').addClass('show');
	});

	jQuery('.filter-reset').on('click', this, function(event){
	  event.preventDefault();
	
	  window.location.href = window.location.pathname;
	});

	jQuery('.academic--filter').on('click', this, function(event){
  event.preventDefault();

  var filterInputs = [],
      filterInterests = [],
      prgInterests = '',
      filterName,
      filterValue,
      newFilterURL;
      filterInputs = jQuery('#filter-types input');
      filterInterests = jQuery('#filter-interests input');

  jQuery.each(filterInterests, function(key, value) {
    if(jQuery(value).attr('checked')) {
      prgInterests += '&aca_prg_interests[]=' + jQuery(value).attr('value');
    }
  });

  jQuery.each(filterInputs, function(key, value) {
    if(jQuery(value).attr('checked')) {
      var index = jQuery(value).attr('id').indexOf('-')
      filterName = jQuery(value).attr('id').slice(0, index);
      newFilterURL = window.location.origin + '/programs/e?' + filterName + '=' + jQuery(value).attr('value');      
    }
  });

  window.location.href = newFilterURL + prgInterests;
  });
});