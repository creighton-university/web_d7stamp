<?php
////////////////////////////////////////////////////////////
// Program Details page
////////////////////////////////////////////////////////////
//dpm($fields);
global $base_url;
$iconPath = $base_url . '/' . path_to_theme();
?>
<?php 
  if( isset($fields['field_pgm_dts_image']->content) ) : ?>
  <div class="program-image">
    <?php print render($fields['field_pgm_dts_image']->content); ?>
  </div>
<?php endif; ?>
<div class="program-avail-container"> 
<?php 
  if( isset($fields['field_pgm_dts_availibility']->content) ) : ?>
  <div class="program-avail">
    <h3>Program Availability</h3>
    <?php
   //Availability Icons - On-Campus, Online, Accelerated, Hybrid 
    if( strpos($fields['field_pgm_dts_availibility']->content, 'Campus') !== FALSE ) {
      ?>
      <img src='<?php echo $iconPath; ?>/images/program-avail-icons/avail-on-campus-title.png' />
      <?php 
    }
    if( strpos($fields['field_pgm_dts_availibility']->content, 'Online') !== FALSE ) {
       ?>
      <img src='<?php echo $iconPath; ?>/images/program-avail-icons/avail-online-title.png' />
      <?php 
    }
    if( strpos($fields['field_pgm_dts_availibility']->content, 'Accelerated') !== FALSE ) {
       ?>
      <img src='<?php echo $iconPath; ?>/images/program-avail-icons/avail-accelerated-title.png' />
      <?php 
    }
    if( strpos($fields['field_pgm_dts_availibility']->content, 'Hybrid') !== FALSE ) {
       ?>
      <img src='<?php echo $iconPath; ?>/images/program-avail-icons/avail-hybrid-title.png' />
      <?php 
    }   
    ?>
  </div>
<?php endif; ?>
<?php 
  if( isset($fields['field_pgm_dts_other_programs']->content) ) : ?>
  <div class="island__other-programs">
    <h3>Other Programs Available</h3>
    <?php print render($fields['field_pgm_dts_other_programs']->content); ?>
  </div>
<?php endif; ?>
</div>
<?php print render($fields['field_pgm_details_description']->content); ?>
<?php if( isset($fields['field_pgm_dts_outcomes']->content) ) : ?>
  <h2>Outcomes</h2>
  <?php print render($fields['field_pgm_dts_outcomes']->content); ?>
<?php endif; ?>
<?php if( isset($fields['field_pgm_dts_specializations']->content) ) : ?>
  <h2>Specializations</h2>
  <?php print render($fields['field_pgm_dts_specializations']->content); ?>
<?php endif; ?>
<?php if( isset($fields['field_pgm_dts_tab_learn']->content) ||
          isset($fields['field_pgm_dts_tab_curriculum']->content) ||
          isset($fields['field_pgm_dts_tab_organizations']->content) ||
          isset($fields['field_pgm_dts_tab_internships']->content) ||
          isset($fields['field_pgm_dts_tab_research_opp']->content) ||
          isset($fields['field_pgm_dts_tab_admissions_reqs']->content) ) : ?>
  <div class="block--tab-acc accordion">
    <?php if( isset($fields['field_pgm_dts_tab_learn']->content) ) : ?>
      <h3 class="accordion-0">
        <a href="#accordion-0">What You'll Learn</a>
      </h3>
      <div id="accordion-0" class="acc-content">
        <?php print render($fields['field_pgm_dts_tab_learn']->content); ?>
      </div>
    <?php endif; ?>
    <?php if( isset($fields['field_pgm_dts_tab_curriculum']->content) ) : ?>
      <h3 class="accordion-1">
        <a href="#accordion-1">Curriculum</a>
      </h3>
      <div id="accordion-1" class="acc-content">
        <?php print render($fields['field_pgm_dts_tab_curriculum']->content); ?>
      </div>
    <?php endif; ?>
    <?php if( isset($fields['field_pgm_dts_tab_organizations']->content) ) : ?>
      <h3 class="accordion-2">
        <a href="#accordion-2">Student Organizations</a>
      </h3>
      <div id="accordion-2" class="acc-content">
        <?php print render($fields['field_pgm_dts_tab_organizations']->content); ?>
      </div>
    <?php endif; ?>
    <?php if( isset($fields['field_pgm_dts_tab_internships']->content) ) : ?>
      <h3 class="accordion-3">
        <a href="#accordion-3">Internships</a>
      </h3>
      <div id="accordion-3" class="acc-content">
        <?php print render($fields['field_pgm_dts_tab_internships']->content); ?>
      </div>
    <?php endif; ?>
    <?php if( isset($fields['field_pgm_dts_research_opp']->content) ) : ?>
      <h3 class="accordion-4">
        <a href="#accordion-4">Research Opportunities</a>
      </h3>
      <div id="accordion-4" class="acc-content">
        <?php print render($fields['field_pgm_dts_research_opp']->content); ?>
      </div>
    <?php endif; ?>
    <?php if( isset($fields['field_pgm_dts_admissions_reqs']->content) ) : ?>
      <h3 class="accordion-5">
        <a href="#accordion-5">Admissions Requirements</a>
      </h3>
      <div id="accordion-5" class="acc-content">
        <?php print render($fields['field_pgm_dts_admissions_reqs']->content); ?>
      </div>
    <?php endif; ?>
    <?php if( isset($fields['field_pgm_dts_tab_tuition']->content) ) : ?>
      <h3 class="accordion-6">
        <a href="#accordion-6">Tuition &amp; Scholarships</a>
      </h3>
      <div id="accordion-6" class="acc-content">
        <?php print render($fields['field_pgm_dts_tab_tuition']->content); ?>
      </div>
    <?php endif; ?>
  </div>
<?php endif; ?>
<?php if( isset($fields['field_pgm_dts_related_programs']->content) ) : ?>
  <h2>Related Programs</h2>
  <?php print render($fields['field_pgm_dts_related_programs']->content); ?>
<?php endif; ?>