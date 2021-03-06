<?php

/**
 * @file
 * Main view template.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
?>
<script>
/*
 * 
 * programs?
 * Sample URL: programs?alpha=b&online=All&accelerated=All&professional=All&prg_offered=All&name_1=&name_2=&title=
/////////////////////
Starts with 
alpha=
/////////////////////
Search
&title=Biology
/////////////////////
&online=All
Campus
&online=1
Online
&online=2
/////////////////////
&accelerated=All
Traditional
&accelerated=1
Accelerated
&accelerated=2
/////////////////////
&professional=All
Professional
&professional=1
Non Professional
&professional=2
/////////////////////
&prg_offered=All
Associate
&prg_offered=1
UnderGrad
&prg_offered=2
Grad
&prg_offered=3
/////////////////////
&name=Finance%2FBanking&name_1=Information+Technology
/////////////////////
 * 
 */
  var alpha             = '';
  var title             = '';
  var online            = 'All';
  var accelerated       = 'All';
  var professional      = 'All';
  var prgOffered        = 'All';
  var acaPrgInterests   = '';

<?php
$online       = (isset($_GET['online']) ? $_GET['online'] : 'All');
$accelerated  = (isset($_GET['accelerated']) ? $_GET['accelerated'] : 'All');
$professional = (isset($_GET['professional']) ? $_GET['professional'] : 'All');
$prgOffered   = (isset($_GET['prg_offered']) ? $_GET['prg_offered'] : 'All');
?>
  online        = '<?php echo $online; ?>';
  accelerated   = '<?php echo $accelerated; ?>';
  professional  = '<?php echo $professional; ?>';
  prgOffered    = '<?php echo $prgOffered; ?>';
  
  //Program Interests Variables
  var arrayPrgInterests   = [];
  var prgInterestsVal     = '';
  var prgInterestsString  = '';
<?php
//Get all Program interests from &name, &name_1 ... &name_15

for($i=0; $i<15; $i++){

  if($i==0){
    $nameVar = 'name';
  } else {
    $nameVar = "name_$i";
  }
  $varNameArray[] = (isset($_GET[$nameVar]) ? $_GET[$nameVar] : '');
?>
  prgInterestsVal = '<?php echo urlencode($varNameArray[$i]); ?>';
  //console.log('varNameArray - PHP:<?php echo urlencode($varNameArray[$i]); ?>');
  if( prgInterestsVal != '') {
    arrayPrgInterests.push(prgInterestsVal);
  }
<?php
}
?>

  var sCount              = '';
  var url                 = '';

  jQuery(document).ready(function () {  
    //online
    jQuery('#online-online').click( function(){     
      online        = jQuery(this).val();
      accelerated   = 'All';
      professional  = 'All';
      prgOffered    = 'All';
      submitFilter();
    });  
    //accelerated  
    jQuery('#accelerated-accelerated').click( function(){  
      online        = 'All';   
      accelerated   = jQuery(this).val();
      professional  = 'All';
      prgOffered    = 'All';
      submitFilter();
    });
    //professional
    jQuery('#professional-professional').click( function(){  
      online        = 'All';   
      accelerated   = 'All';   
      professional  = jQuery(this).val();
      prgOffered    = 'All';
      submitFilter();
    });
    //prgOffered
    jQuery('.prg_offered').click( function(){  
      online        = 'All';
      accelerated   = 'All';
      professional  = 'All'; 
      prgOffered    = jQuery(this).val();
      submitFilter();
    });
    //aca_prg_interests
    jQuery('input[name=aca_prg_interests]').click( function(){     
      prgInterestsVal = jQuery(this).val();
      //UPdate Array
      if(jQuery(this).attr('checked') ) {
        arrayPrgInterests.push(prgInterestsVal);
      } else {
        arrayPrgInterests.splice(arrayPrgInterests.indexOf(prgInterestsVal), 1);
      }    
      submitFilter();    
      });    
    
    //Apply Filter
    function submitFilter() {
      var i;
      var sCount = '';
      
      prgInterestsString = '';

      for (i = 0; i < arrayPrgInterests.length; i++) {
          //Build: &name=Finance%2FBanking&name_1=Information+Technology
          if(i > 0){
            sCount = '_'+i
          }
          prgInterestsString += '&name'+sCount+'=' + arrayPrgInterests[i];
          //console.log('prgInterestsString:' + prgInterestsString);
      }
     
      url = '/programs?alpha='+alpha+'&online='+online+'&accelerated='+accelerated+'&professional='+professional+'&prg_offered='+prgOffered+prgInterestsString+'&title='+title;
      window.location.href = url;
    }
});
</script>
<div class="<?php print $classes; ?>">
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <?php print $title; ?>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <div class="academics--wrapper">
    <div class="academics--filter-sidebar">
      <aside class="l-region l-region--sidebar-first">
        <h1 class="page-title">Academics</h1>
        <nav id="block-menu-block-sidebar-secondary-menu" role="navigation" class="block block--menu-block contextual-links-region block--menu-block-sidebar-secondary-menu">
        <?php
        $block = module_invoke('menu_block','block_view','sidebar_secondary_menu');
        print render($block['content']);
        ?>
        </nav>
      </aside>
      <div class="view-filters">
        <?php print $exposed; ?>
      </div>
      <div class="clearfix">
        <nav class="nav__academics-filter mobile">
          <h3>Filter by:</h3>
          <a class="filter-interest" href="#filter-interests">Interest</a>
          <a class="filter-type" href="#filter-types">Type</a>
        </nav>
      </div>
      <div id="filter-types" class="filter__academics">
        <h3>Filter by type</h3>
        <form action="">
          <div class="form-item">
            <input class="prg_offered" id="prg_offered-associate" name="filterType" type="radio" value="1" <?php if(isset($_GET['prg_offered'])) { if($_GET['prg_offered'] == '1'){ echo 'checked'; } } ?>>
            <label for="prg_offered-associate">Associate</label>
          </div>
          <div class="form-item">
            <input class="prg_offered" id="prg_offered-undergraduated" name="filterType" type="radio" value="2" <?php if(isset($_GET['prg_offered'])) { if($_GET['prg_offered'] == '2'){ echo 'checked'; } } ?> >
            <label for="prg_offered-undergraduated">Undergraduate</label>
          </div>
          <div class="form-item">
            <input class="prg_offered" id="prg_offered-graduate" name="filterType" type="radio" value="3" <?php if(isset($_GET['prg_offered'])) { if($_GET['prg_offered'] == '3'){ echo 'checked'; } } ?> >
            <label for="prg_offered-graduate">Graduate</label>
          </div>         
          <div class="form-item">
            <input class="" id="professional-professional" name="filterType" type="radio" value="1" <?php if(isset($_GET['professional'])) { if($_GET['professional'] == '1'){ echo 'checked'; } } ?> >
            <label for="professional-professional">Professional Schools</label>
          </div>
          <div class="form-item">
            <input class="" id="accelerated-accelerated" name="filterType" type="radio" value="2" <?php if(isset($_GET['accelerated'])) { if($_GET['accelerated'] == '2'){ echo 'checked'; } } ?> >
            <label for="accelerated-accelerated">Accelerated</label>
          </div>
          <div class="form-item">
            <input class="" id="online-online" name="filterType" type="radio" value="2" <?php if(isset($_GET['online'])) { if($_GET['online'] == '2'){ echo 'checked'; } } ?> >
            <label for="online-online">Online</label>
          </div>         
        </form>
        <div class="filter__academics button-list">
          <a class="filter-reset btn" href="#">reset filter</a>
        </div>
      </div>
      <div id="filter-interests"  class="filter__academics">
        <h3>Filter by your interest</h3>
        <form action="">
          <div class="form-item">
            <input class="" id="aca_prg_interests-arts" name="aca_prg_interests" type="checkbox" value="Arts" <?php if(in_array('Arts', $varNameArray)) { echo 'checked'; } ?> >
            <label for="aca_prg_interests-arts">Arts</label>
          </div>
          <div class="form-item">
            <input class="" id="aca_prg_interests-consulting" name="aca_prg_interests" type="checkbox" value="Business%2FConsulting" <?php if(in_array('Business/Consulting', $varNameArray)) { echo 'checked'; } ?> >
            <label for="aca_prg_interests-consulting">Business/Consulting</label>
          </div>
          <div class="form-item">
            <input class="" id="aca_prg_interests-communications" name="aca_prg_interests" type="checkbox" value="Communications%2FMedia" <?php if(in_array('Communications/Media', $varNameArray)) { echo 'checked'; } ?> >
            <label for="aca_prg_interests-communications">Communications/Media</label>
          </div>
          <div class="form-item">
            <input class="" id="aca_prg_interests-elementary" name="aca_prg_interests" type="checkbox" value="Elementary%2FSecondary+Education" <?php if(in_array('Elementary/Secondary Education', $varNameArray)) { echo 'checked'; } ?> >
            <label for="aca_prg_interests-elementary">Elementary/<br>Secondary Education</label>
          </div>
          <div class="form-item">
            <input class="" id="aca_prg_interests-engineering" name="aca_prg_interests" type="checkbox" value="Engineering" <?php if(in_array('Engineering', $varNameArray)) { echo 'checked'; } ?> >
            <label for="aca_prg_interests-engineering">Engineering</label>
          </div>
          <div class="form-item">
            <input class="" id="aca_prg_interests-finance" name="aca_prg_interests" type="checkbox" value="Finance%2FBanking" <?php if(in_array('Finance/Banking', $varNameArray)) { echo 'checked'; } ?> >
            <label for="aca_prg_interests-finance">Finance/Banking</label>
          </div>
          <div class="form-item">
            <input class="" id="aca_prg_interests-government" name="aca_prg_interests" type="checkbox" value="Government" <?php if(in_array('Government', $varNameArray)) { echo 'checked'; } ?> >
            <label for="aca_prg_interests-government">Government</label>
          </div>
          <div class="form-item">
            <input class="" id="aca_prg_interests-health" name="aca_prg_interests" type="checkbox" value="Health%2FMedicine" <?php if(in_array('Health/Medicine', $varNameArray)) { echo 'checked'; } ?> >
            <label for="aca_prg_interests-health">Health/Medicine</label>
          </div>
          <div class="form-item">
            <input class="" id="aca_prg_interests-higher-ed" name="aca_prg_interests" type="checkbox" value="Higher+Education" <?php if(in_array('Higher Education', $varNameArray)) { echo 'checked'; } ?> >
            <label for="aca_prg_interests-higher-ed">Higher Education</label>
          </div>
          <div class="form-item">
            <input class="" id="aca_prg_interests-it" name="aca_prg_interests" type="checkbox" value="Information+Technology" <?php if(in_array('Information Technology', $varNameArray)) { echo 'checked'; } ?> >
            <label for="aca_prg_interests-it">Information Technology</label>
          </div>
          <div class="form-item">
            <input class="" id="aca_prg_interests-law" name="aca_prg_interests" type="checkbox" value="Law" <?php if(in_array('Law', $varNameArray)) { echo 'checked'; } ?> >
            <label for="aca_prg_interests-law">Law</label>
          </div>
          <div class="form-item">
            <input class="" id="aca_prg_interests-management" name="aca_prg_interests" type="checkbox" value="Management" <?php if(in_array('Management', $varNameArray)) { echo 'checked'; } ?> >
            <label for="aca_prg_interests-management">Management</label>
          </div>
          <div class="form-item">
            <input class="" id="aca_prg_interests-ministry" name="aca_prg_interests" type="checkbox" value="Ministry" <?php if(in_array('Ministry', $varNameArray)) { echo 'checked'; } ?> >
            <label for="aca_prg_interests-ministry">Ministry</label>
          </div>
          <div class="form-item">
            <input class="" id="aca_prg_interests-nonprofit" name="aca_prg_interests" type="checkbox" value="Non-Profit+or+NGO" <?php if(in_array('Non-Profit or NGO', $varNameArray)) { echo 'checked'; } ?> >
            <label for="aca_prg_interests-nonprofit">Non-Profit or NGO</label>
          </div>
          <div class="form-item">
            <input class="" id="aca_prg_interests-science" name="aca_prg_interests" type="checkbox" value="Scientific+Research" <?php if(in_array('Scientific Research', $varNameArray)) { echo 'checked'; } ?> >
            <label for="aca_prg_interests-science">Scientific Research</label>
          </div>
        </form>
        <div class="filter__academics button-list">
          <a class="filter-reset btn" href="#">reset filter</a>
        </div>
      </div>      
    </div>
  <div class="academics--matrix-content">
    <?php if ($header): ?>
      <div class="view-header">
        <?php print $header; ?>
      </div>
    <?php endif; ?>

    <?php if ($attachment_before): ?>
      <div class="attachment attachment-before">
        <?php print $attachment_before; ?>
      </div>
    <?php endif; ?>

    <?php if ($rows): ?>
      <div class="view-content">
        <?php print $rows; ?>
      </div>
    <?php elseif ($empty): ?>
      <div class="view-empty">
        <?php print $empty; ?>
      </div>
    <?php endif; ?>

    <?php if ($pager): ?>
      <?php print $pager; ?>
    <?php endif; ?>

    <?php if ($attachment_after): ?>
      <div class="attachment attachment-after">
        <?php print $attachment_after; ?>
      </div>
    <?php endif; ?>

    <?php if ($more): ?>
      <?php print $more; ?>
    <?php endif; ?>

    <?php if ($footer): ?>
      <div class="view-footer">
        <?php print $footer; ?>
      </div>
    <?php endif; ?>
  </div>

  <?php if ($feed_icon): ?>
    <div class="feed-icon">
      <?php print $feed_icon; ?>
    </div>
  <?php endif; ?>

</div>