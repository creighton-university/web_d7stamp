<?php
/**
 * @file views-view-unformatted.tpl.php
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>
<link rel="stylesheet" type="text/css" href="//cdn.datatables.net/1.10.11/css/jquery.dataTables.css"
      xmlns="http://www.w3.org/1999/html">
<link rel="stylesheet" type="text/css" href="//cdn.datatables.net/plug-ins/1.10.11/features/searchHighlight/dataTables.searchHighlight.css"
      xmlns="http://www.w3.org/1999/html">
<script type="text/javascript" charset="utf8" src="//cdn.datatables.net/1.10.11/js/jquery.dataTables.js"></script>
<script type="text/javascript" charset="utf8" src="//bartaz.github.io/sandbox.js/jquery.highlight.js"></script>
<script type="text/javascript" charset="utf8" src="//cdn.datatables.net/plug-ins/1.10.11/features/searchHighlight/dataTables.searchHighlight.min.js"></script>

<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<fieldset id="main-search">
  <h2>Search</h2>
  <label for="main-search-input">Enter your search term(s) which can include name, specialties, school/college, or class taught, etc.</label>
  <input type="text" id="main-search-input" placeholder="Enter search keywords">
</fieldset>
<div id="narrow-your-search">Narrow your search</div>
<div id="advanced-search" class="clearfix">
  <fieldset id="school-filter">
    <p>Filter by School/College</p>
    <div class="col-1">
      <div>
        <input type="radio"  name="school-filter" id="school-ccas" value="College of Arts and Sciences">
        <label for="school-ccas" >College of Arts and Sciences</label>
      </div>
      <div>
        <input type="radio"  name="school-filter" id="school-hcb" value="Heider College of Business">
        <label for="school-hcb" >Heider College of Business</label>
      </div>
      <div>
        <input type="radio"  name="school-filter" id="school-con" value="College of Nursing">
        <label for="school-con" >College of Nursing</label>
      </div>
      <div>
        <input type="radio"  name="school-filter" id="school-cps" value="College of Professional Studies">
        <label for="school-cps" >College of Professional Studies</label>
      </div>
    </div>
    <div class="col-2">
      <div>
        <input type="radio"  name="school-filter" id="school-gs" value="Graduate School">
        <label for="school-gs" >Graduate School</label>
      </div>
      <div>
        <input type="radio"  name="school-filter" id="school-sod" value="School of Dentistry">
        <label for="school-sod" >School of Dentistry</label>
      </div>
      <div>
        <input type="radio"  name="school-filter" id="school-sol" value="School of Law">
        <label for="school-sol" >School of Law</label>
      </div>
      <div>
        <input type="radio"  name="school-filter" id="school-som" value="School of Medicine">
        <label for="school-som" >School of Medicine</label>
      </div>
    </div>
    <div class="col-3">
      <div>
        <input type="radio" name="school-filter" id="school-sop" value="School of Pharmacy and Health Professions">
        <label for="school-sop">School of Pharmacy and Health Professions</label>
      </div>
      <div>
        <input type="radio"  name="school-filter" id="school-all" value="">
        <label for="school-all" >All schools</label>
      </div>
    </div>

  </fieldset>
  <div id="dept-filter">
    <label for="dept-filter-dropdown">Filter by Department:</label>
  </div>
  <div class="sub-filter">
    <label for="interest-filter" class="main">Filter by Research & Scholarship Interests:</label>
    <div><label for="interest-filter" class="sub" >Search for research interests by keywords:</label>
      <input type="text" name="interest-filter" id="interest-filter" value=""></div>
  </div>
  <div class="sub-filter">
    <label for="interest-filter" class="main">Filter by Expertise/Specializations:</label>
    <div><label for="special-filter" class="sub" >Search for specializations by keywords:</label>
      <input type="text" name="special-filter" id="special-filter" value="">
    </div>
  </div>
  <div id="reset-filters"><a>Reset Filters</a></div>
</div>
<div id="alpha-head">
  <hr id="reset">
  <h2>Alphabetical listing</h2>
  <p>Browse alphabetically by last name.</p>
</div>

<table id="faculty-directory-search" style="width: 100%">
  <thead>
  <tr>
    <th>mainbody</th>
    <th class="school">school</th>
    <th class="full-name">full name</th>
    <th class="research-interests">research Interests</th>
    <th class="specializations">research Interests</th>
    <th class="departments">departments</th>
    <th class="miscellaneous">miscellaneous</th>
  </tr>
  </thead>
  <tbody>
  <?php foreach ($rows as $id => $row): ?>
    <?php print $row; ?>
  <?php endforeach; ?>
  </tbody>

</table>

<script>
  // building alphabet search
  var _alphabetSearch;

  jQuery.fn.dataTable.ext.search.push( function ( settings, searchData ) {
    if ( ! _alphabetSearch ) { // No search term - all results shown
      return true;
    }

    if ( searchData[2].charAt(0) === _alphabetSearch ) {
      return true;
    }

    return false;
  } );

  jQuery(document).ready( function ($) {
    var oldStart = 0;
    // unchecks all the schools filters
    $('input[type=radio]').prop('checked', function () {
      return this.getAttribute('checked') == 'unchecked';
    });
    // defines the table with options
    var facultyTable = jQuery('#faculty-directory-search').DataTable( {
      "order": [[ 2, "asc" ]],
      "paging":         true,
      "pagingType": "simple",
      "searchHighlight": true,
      "bJQueryUI": false,
      "fnDrawCallback": function (o) {
        if ( o._iDisplayStart != oldStart ) {
          var targetOffset = $('#alpha-foot').offset().top;
          $('html,body').animate({scrollTop: targetOffset}, 100);
          oldStart = o._iDisplayStart;
        }
      }
    });
//      $('input#school-all').prop("checked", true);
    // bind data to main search
    $('input#main-search-input').on( 'keyup', function() {
      facultyTable.search(this.value).draw();
    });
    // bind data in school-filter selection to school filter column, which is columns(1), the 2nd column

    $('input[name="school-filter"]').on('click', function () {
      $('input:checked').each (function () {
        facultyTable
            .columns(1)
            .search(this.value)
            .draw();
        console.log(this.value);
      });
    });

    // bind data in interest-filter selection to interest filter column, which is columns(3), the 4th column
    $('#interest-filter').on('keyup', function () {
//      console.log(this.value);
      facultyTable
          .columns(3)
          .search( this.value )
          .draw();
    });
    // bind data in special-filter selection to specializations filter column, which is columns(4), the 5th column
    $('#special-filter').on('keyup', function () {
//      console.log(this.value);
      facultyTable
          .columns(4)
          .search( this.value )
          .draw();
    });
    // adds alphabet to the DOM
    var alphabet = jQuery('<div class="alphabet"/>');

    $('<span class="clear active"/>')
        .data( 'letter', '' )
        .html( 'All' )
        .appendTo( alphabet );

    for ( var i=0 ; i<26 ; i++ ) {
      var letter = String.fromCharCode( 65 + i );

      $('<span/>')
          .data( 'letter', letter )
          .html( letter )
          .appendTo( alphabet );
    }

    alphabet.appendTo($('#alpha-head') );

    // binds alphabet search  to datatable (not quite sure how [cbu04905])
    alphabet.on( 'click', 'span', function () {
      alphabet.find( '.active' ).removeClass( 'active' );
      $(this).addClass( 'active' );

      _alphabetSearch = $(this).data('letter');
      facultyTable.draw();
    } );

// makes populates departments in dropdown
    var deptArray = new Array();
    facultyTable.column(5).cache('search').each( function (d) {
      if (d) {
        // is there a "|", which is used to separate multiple departments in a single faculty record
        if (d.indexOf("|") !== -1) {
          // create array of the departments in a single faculty record
          var deptTempArray = d.split("|");
          // get the number deparments in the single faculty record
          var deptTempArrayNum = deptTempArray.length;
          // add each department to the total department list array
          for (var i = 0; i < deptTempArrayNum; i++) {
            deptArray.push(deptTempArray[i]);
          }
        } else deptArray.push(d);
      }
    });
    var deptFilter = $('#dept-filter');
    var selectSchool = $('<select id="dept-filter-dropdown" />')
        .appendTo(deptFilter)
        .on( 'change', function() {
          facultyTable
              .column( 5 )
              .search( $(this).val() )
              .draw();
        });
    selectSchool.append( $('<option value="">Select one...</option>') );
    /************ function will return array of unique elements ************************/
    /************ from StackOverflow http://stackoverflow.com/a/10192255 ***************/
    function unique(array) {
      return $.grep(array, function(el, index) {
        return index === $.inArray(el, array);
      });
    }
    deptArray = unique(deptArray);
    deptArray = deptArray.sort();
    $.each(deptArray, function ( i, l ) {
      selectSchool.append( $('<option value="'+l+'">'+l+'</option>') );
    });
    $('#reset-filters').on("click", function () {
      $('input#main-search-input').val("");
      $('select#dept-filter-dropdown').val("");
      $('input#interest-filter').val("");
      $('input#special-filter').val("");
      $('.alphabet span.clear').trigger("click");
      facultyTable
          .search( '' )
          .columns().search( '' )
          .draw();

      $('input#school-all').prop("checked", true);
    });
    $('#narrow-your-search').click(function() {
      $(this).toggleClass('expanded');
      $('#advanced-search').toggle();
    });

  });
</script>
