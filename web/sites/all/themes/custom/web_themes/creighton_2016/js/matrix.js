/**
 * Academics Filtering navigation tabs
 */
jQuery(document).ready(function() {
  // Add placehoder to search box
  jQuery("input#edit-title").prop("placeholder","Search majors or programs");


  //Detect submit search from enter
  jQuery('#edit-title').keypress(function (e) {
    if (e.which == 13) {
      jQuery('.view-filters').submit();
      return false;
    }
  });
  
  //Dynamicly add <li></li> for styling; Template involved 12 files
  jQuery('td.views-field-field-aca-prg-associates-title a').wrap('<li></li>');
  jQuery('td.views-field-field-aca-prg-certificate-title a').wrap('<li></li>');
  jQuery('td.views-field-field-aca-prg-bachelors a').wrap('<li></li>');
  jQuery('td.views-field-field-aca-prg-masters-title a').wrap('<li></li>');
  jQuery('td.views-field-field-aca-prg-doctorate-title a').wrap('<li></li>');

  //Reproduce wrapping for .td style. (cbu04905)
  jQuery('.td.views-field-field-aca-prg-associates-title a').wrap('<li></li>');
  jQuery('.td.views-field-field-aca-prg-certificate-title a').wrap('<li></li>');
  jQuery('.td.views-field-field-aca-prg-bachelors a').wrap('<li></li>');
  jQuery('.td.views-field-field-aca-prg-masters-title a').wrap('<li></li>');
  jQuery('.td.views-field-field-aca-prg-doctorate-title a').wrap('<li></li>');

  var currURL;
  var currURLArgs;
  var currURLArgVars;
  var currArg;
  var i;
  //Get current URL
  currURL = window.location.href;
  //programs/p/online/All/accelerated/All/professional/All/prg_offered/All/dual_programs/All/undergrad_cert/All/grad_cert/All/name/Arts/name_1/Business/Consulting  
  //Split String at /p/
  currURLArgs = currURL.split('/filter/');
  if(currURLArgs.length > 1) {
    currURLArgVars = currURLArgs[1].split('/');
        
    //Build a new array breaking up the pairs
    //online/All/accelerated/All/professional/All/prg_offered/1
    //online
    //currURLArgVars[0]
    //currURLArgVars[1]
    //accelerated
    //currURLArgVars[2]
    //currURLArgVars[3]
    //professional
    //currURLArgVars[4]
    //currURLArgVars[5]
    //prg_offered
    //currURLArgVars[6]
    //currURLArgVars[7]
    //dual_programs
    //currURLArgVars[8]
    //currURLArgVars[9]
    //undergrad_cert
    //currURLArgVars[10]
    //currURLArgVars[11]
    //grad_cert
    //currURLArgVars[12]
    //currURLArgVars[13]
    //doctorate
    //currURLArgVars[14]
    //currURLArgVars[15]
    //bachelors_to_masters
    //currURLArgVars[16]
    //currURLArgVars[17]    

      /*
      Associate     td.views-field-field-aca-prg-associates-title a 
      Certificate   td.views-field-field-aca-prg-certificate-title a 
      UnderGrad     td.views-field-field-aca-prg-bachelors a 
      Masters       td.views-field-field-aca-prg-masters-title a 
      Doctorate     td.views-field-field-aca-prg-doctorate-title a
      Online        a.online-course
      */
      //Online
      if(currURLArgVars[0] == 'online' && currURLArgVars[1] == 2) {
        //console.log('online');
        //Remove non relevant columns
        jQuery('td.views-field-field-aca-prg-associates-title li').css('display', 'none');
        jQuery('td.views-field-field-aca-prg-certificate-title li').css('display', 'none');
        jQuery('td.views-field-field-aca-prg-bachelors li').css('display', 'none');
        jQuery('td.views-field-field-aca-prg-masters-title li').css('display', 'none');
        jQuery('td.views-field-field-aca-prg-doctorate-title li').css('display', 'none');
        // Duplicates the above for .td style (cbu04905)
        jQuery('.td.views-field-field-aca-prg-associates-title li').css('display', 'none');
        jQuery('.td.views-field-field-aca-prg-certificate-title li').css('display', 'none');
        jQuery('.td.views-field-field-aca-prg-bachelors li').css('display', 'none');
        jQuery('.td.views-field-field-aca-prg-masters-title li').css('display', 'none');
        jQuery('.td.views-field-field-aca-prg-doctorate-title li').css('display', 'none');
        jQuery('a.online-course').parent().css('display', '');
      }
      //Accelearted
      if(currURLArgVars[2] == 'accelerated' && currURLArgVars[3] == 2) {
        //console.log('Accelearted');
      }
      //Professional
      if(currURLArgVars[4] == 'professional' && currURLArgVars[5] == 1) {
        //console.log('Professional');
      }
      //Associate
      if(currURLArgVars[6] == 'prg_offered' && currURLArgVars[7] == 1) {
        //console.log('Associate');
        //Remove non relevant columns
        //jQuery('td.views-field-field-aca-prg-associates-title').html('');
        jQuery('td.views-field-field-aca-prg-certificate-title').html('');
        jQuery('td.views-field-field-aca-prg-bachelors').html('');
        jQuery('td.views-field-field-aca-prg-masters-title').html('');
        jQuery('td.views-field-field-aca-prg-doctorate-title').html('');
        // Duplicates above for .td style (cbu04905)
        jQuery('.td.views-field-field-aca-prg-certificate-title').html('');
        jQuery('.td.views-field-field-aca-prg-bachelors').html('');
        jQuery('.td.views-field-field-aca-prg-masters-title').html('');
        jQuery('.td.views-field-field-aca-prg-doctorate-title').html('');
        jQuery('a.online-course').html('');
        
        //Remove Horizontal border lines on mobile
        jQuery('td.views-field-field-aca-prg-associates-title').css('border-top','0px solid white');
        jQuery('td.views-field-field-aca-prg-certificate-title').css('border-top','0px solid white');
        jQuery('td.views-field-field-aca-prg-bachelors-title').css('border-top','0px solid white');
        jQuery('td.views-field-field-aca-prg-masters-title').css('border-top','0px solid white');
        jQuery('td.views-field-field-aca-prg-doctorate-title').css('border-top','0px solid white');
        // Duplicates above for .td style (cbu04905)
        jQuery('.td.views-field-field-aca-prg-associates-title').css('border-top','0px solid white');
        jQuery('.td.views-field-field-aca-prg-certificate-title').css('border-top','0px solid white');
        jQuery('.td.views-field-field-aca-prg-bachelors-title').css('border-top','0px solid white');
        jQuery('.td.views-field-field-aca-prg-masters-title').css('border-top','0px solid white');
        jQuery('.td.views-field-field-aca-prg-doctorate-title').css('border-top','0px solid white');
      }
      //Undergrad
      if(currURLArgVars[6] == 'prg_offered' && currURLArgVars[7] == 2) {
        //console.log('undergrad');
        //Remove non relevant columns
        //jQuery('td.views-field-field-aca-prg-associates-title').html('');
        //jQuery('td.views-field-field-aca-prg-certificate-title').html('');
        //jQuery('td.views-field-field-aca-prg-bachelors').html('');
        jQuery('td.views-field-field-aca-prg-masters-title').html('');
        jQuery('td.views-field-field-aca-prg-doctorate-title').html('');
        // Duplicates above for .td style (cbu04905)
        jQuery('.td.views-field-field-aca-prg-masters-title').html('');
        jQuery('.td.views-field-field-aca-prg-doctorate-title').html('');
        jQuery('a.online-course').html('');
        
        //Remove Horizontal border lines on mobile
        //jQuery('td.views-field-field-aca-prg-associates-title').css('border-top','0px solid white');
        //jQuery('td.views-field-field-aca-prg-certificate-title').css('border-top','0px solid white');
        //jQuery('td.views-field-field-aca-prg-bachelors-title').css('border-top','0px solid white');
        jQuery('td.views-field-field-aca-prg-masters-title').css('border-top','0px solid white');
        jQuery('td.views-field-field-aca-prg-doctorate-title').css('border-top','0px solid white');
        // Duplicates above for .td style (cbu04905)
        jQuery('.td.views-field-field-aca-prg-masters-title').css('border-top','0px solid white');
        jQuery('.td.views-field-field-aca-prg-doctorate-title').css('border-top','0px solid white');
      }
      //Grad
      if(currURLArgVars[6] == 'prg_offered' && currURLArgVars[7] == 3) {
        //console.log('grad');
        //Remove non relevant columns
        jQuery('td.views-field-field-aca-prg-associates-title').html('');
        //jQuery('td.views-field-field-aca-prg-certificate-title').html('');
        jQuery('td.views-field-field-aca-prg-bachelors').html('');
        //jQuery('td.views-field-field-aca-prg-masters-title').html('');
        //jQuery('td.views-field-field-aca-prg-doctorate-title').html('');
        //jQuery('a.online-course').html('');
        // Duplicates above for .td style (cbu04905)
        jQuery('.td.views-field-field-aca-prg-associates-title').html('');
        jQuery('.td.views-field-field-aca-prg-bachelors').html('');


        //Remove Horizontal border lines on mobile
        jQuery('td.views-field-field-aca-prg-associates-title').css('border-top','0px solid white');
        jQuery('td.views-field-field-aca-prg-certificate-title').css('border-top','0px solid white');
        jQuery('td.views-field-field-aca-prg-bachelors-title').css('border-top','0px solid white');
        jQuery('td.views-field-field-aca-prg-masters-title').css('border-top','0px solid white');
        //jQuery('td.views-field-field-aca-prg-doctorate-title').css('border-top','0px solid white');
        // Duplicates above for .td style (cbu04905)
        jQuery('.td.views-field-field-aca-prg-associates-title').css('border-top','0px solid white');
        jQuery('.td.views-field-field-aca-prg-certificate-title').css('border-top','0px solid white');
        jQuery('.td.views-field-field-aca-prg-bachelors-title').css('border-top','0px solid white');
        jQuery('.td.views-field-field-aca-prg-masters-title').css('border-top','0px solid white');

      }
      //Dual Programs
      if(currURLArgVars[8] == 'dual_programs' && currURLArgVars[9] == 2) {
      }
      //Undergrad Cert
      if(currURLArgVars[10] == 'undergrad_cert' && currURLArgVars[11] == 1) {
      }
      //Grad Cert
      if(currURLArgVars[12] == 'grad_cert' && currURLArgVars[13] == 1) {
      }
      //Doctorate
      if(currURLArgVars[14] == 'doctorate' && currURLArgVars[15] == 1) {
      }
      //Bachelors to masters
      if(currURLArgVars[16] == 'bachelors_to_masters' && currURLArgVars[17] == 1) {
      }
  }//if(currURLArgs.length > 1) {
    
    /**
     * Academics Filtering navigation tabs
     */
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
});