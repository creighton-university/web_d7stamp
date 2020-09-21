<?php
//dpm($row);

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>
<div id="pic-thru-school" >
<?php if (!empty($row->field_faculty_first_name)) { ?>
	<?php $fullname = $row->field_faculty_first_name . ' ';?>
	<?php if (!empty($row->field_faculty_middle_name)) {?>
		<?php $fullname .= substr($row->field_faculty_middle_name,0,1) . '. '; ?>
	<?php } ?>
	<?php if (!empty($row->field_faculty_last_name)) { ?>
		<?php $fullname .= $row->field_faculty_last_name; ?>
	<?php } ?>
	<?php if (!empty($row->field_faculty_name_suffix)) { ?>
		<?php $fullname .= ', ' . $row->field_faculty_name_suffix; ?>
	<?php } ?>
<?php } // END of name test (shouldn't everyone pass this one, at least? // ?>

<div class="field--name-field-profile2-image">
	<?php if (!empty($row->image)) { ?>
		<img src="<?php print $row->image; ?>" alt="<?php print $fullname; ?>" >
	<?php } ?>
</div>

<h2 class="special" id="fullname"><?php print $fullname ?></h2><!-- END of #fullname .special -->

<div id="rank-positions">
	<?php if (!empty($row->field_fc_rank_his_academic_rank)) { ?>
		<div><?php print $row->field_fc_rank_his_academic_rank; ?></div>
	<?php } ?>
	<?php //////// if there are any LEADERSHIP roles and if they can be displayed, make an array of them //////// 
	if (!empty($row->field_faculty_admin_roles_ldrshp)) { 
		$leadership_array = array();
		$leader_full = "";
		foreach($row->field_faculty_admin_roles_ldrshp as $leadership) {
			$leader_full .= $leadership->{'activity-type'};
			$leader_full .= ', ' . $leadership->{'office'};
			$leadership_array[] = $leader_full;
			$leader_full = "";
		}
	} ?>	
	<?php //////// if there is anything in the array, loop through and print //////// 
	if (count($leadership_array)) { ?>
		<?php foreach($leadership_array as $role) { ?>
			<div><?php print $role; ?></div>	
			<?php } ?>
		<?php } ?>
</div><!-- END of #rank-positions-->

<?php if (!empty($row->school)) { ?>
	<div id="school-appointment"><?php print $row->school; ?></div><!-- END of #school-appointment-->
<?php } ?>
	</div><!-- END of #pic-thru-school -->
<?php if (!empty($row->specializations)) { ?>
	<div id="specializations">
		<h3>Expertise/Specializations</h3>
			<ul>
			<?php foreach($row->specializations as $specializations) { ?>
				<li> <?php print $specializations->{'specializations'}; ?></li>
			<?php } ?>
			</ul>
	</div><!-- END of #specializations-->
<?php } ?>
<!------------------------ START of accordion  ---------------------->
<div class="block--tab-acc accordion">
	<?php $tabNum = 0; ?>
	<!------------------------ BIOGRAPHY tab ---------------------->
	<?php if (!empty($row->field_fc_additional_pro_bio)) { ?>
		<h3 class="accordion-<?php print $tabNum; ?>">
	        <a href="#accordion-<?php print $tabNum; ?>">Biography</a>
		</h3>
		<div id="accordion-<?php print $tabNum; ?>" class="acc-content">
			<?php print $row->field_fc_additional_pro_bio; ?>
		</div><!-- END of #accordion-<?php print $tabNum++; ?> -->
	<?php } ?>
	<!------------------------ EDUCATION tab ---------------------->
	<?php if (!empty($row->field_fc_additional_pro_educatio)) { ?>
		<h3 class="accordion-<?php print $tabNum; ?>">
        	<a href="#accordion-<?php print $tabNum; ?>">Education</a>
		</h3>
		<div id="accordion-<?php print $tabNum; ?>" class="acc-content">
			<div id="pro_educatio">
				<ul>
					<?php foreach($row->field_fc_additional_pro_educatio as $education) { ?>
						<li><?php print $education; ?></li>
					<?php } ?>
				</ul>
			</div><!-- END of #pro_educatio -->
		</div><!-- END of #accordion-<?php print $tabNum++; ?> -->
	<?php } ?>
	<!------------------------ ACADEMIC APPOINTMENTS tab ---------------------->
	<?php ////////////////// Need academic appointments ////////////////////// ?>
	<?php if (1) { ?>
		<?php // TESTING on 1. Change when Ben lets me know (cbu04905) ?>
		<h3 class="accordion-<?php print $tabNum; ?>">
        	<a href="#accordion-<?php print $tabNum; ?>">Academic Appointments</a>
		</h3>
		<div id="accordion-<?php print $tabNum; ?>" class="acc-content">
			<div id="academic-appointments">
				<h3>Department</h3>
				<ul>
					<li>Specific Department (hardcoded[cbu04905])</li>
				</ul> <?php // HARDCODED. Change when Ben lets me know (cbu04905) ?>
				<?php if (!empty($row->field_fc_rank_his_academic_rank)) { ?>
					<h3>Position</h3>
					<ul>
						<li><?php print $row->field_fc_rank_his_academic_rank; ?></li>
					</ul>
				<?php } ?>
				<?php if (1) { // TESTING on 1. Change when Ben lets me know (cbu04905) ?>
					<h3>Secondary Appointment</h3>
					<ul>
						<li>Specific Secondary Department (hardcoded[cbu04905])</li>
					</ul>
				<?php } ?>
			</div><!-- END of #academic-appointments -->
		</div><!-- END of #accordion-<?php print $tabNum++; ?> -->
	<?php } ?>
	<!------------------------ PUBlICATIONS AND PRESENTATIONS tab ---------------------->
	<?php if (!empty($row->field_faculty_publications) ||
		!empty($row->field_faculty_presentations)) { 
			//////// if there are any PUBLICATIONS make an array of them ////////
			if (!empty($row->field_faculty_publications)) {
				$publications_array = array();
				foreach($row->field_faculty_publications as $publication) {
						$publications_array[] = $publication->{'Description'};
				}
			}
		//////// if there are any PRESENTATIONS make an array of them ////////
		if (!empty($row->field_faculty_presentations)) {
				$presentations_array = array();
				foreach($row->field_faculty_presentations as $presentation) {
					$presentations_array[] = $presentation->{'description'};
				}
			}
			 ?>
		<?php if (count($publications_array) || count($presentations_array)) { ?>
		<h3 class="accordion-<?php print $tabNum; ?>">
	        <a href="#accordion-<?php print $tabNum; ?>">Publications and Presentations</a>
		</h3>
		<div id="accordion-<?php print $tabNum; ?>" class="acc-content">
			<div id="publications-presentations">
				<?php // if there is anything in the PUBLICATIONS array, loop through and print //
					if (count($publications_array)) { ?>
						<h3>Publications</h3>
						<ul>
						<?php foreach($publications_array as $pub) { ?>
							<li><?php print $pub; ?></li>	
							<?php } ?>
						</ul>
						<?php } ?>
				<?php // if there is anything in the PRESENTATIONS array, loop through and print //
					if (count($presentations_array)) { ?>
						<h3>Presentations</h3>
						<ul>
						<?php foreach($presentations_array as $pres) { ?>
							<li><?php print $pres; ?></li>	
							<?php } ?>
						</ul>
						<?php } ?>
			</div><!-- END of #publications-presentations -->		
		</div><!-- END of #accordion-<?php print $tabNum++; ?> -->
	<?php } ?>
<?php } ?>
	<!------------------------ AWARDS AND HONORS tab ---------------------->
	<?php if (!empty($row->field_faculty_consult_honor_pat)) {
		$award_array = array();
		foreach($row->field_faculty_consult_honor_pat as $award) {
			$award_array[] = $award->{'description'};
		} ?>
		<?php // if there is anything in the AWARDS array, loop through and print //
		if (count($award_array)) { ?>
			<h3 class="accordion-<?php print $tabNum; ?>">
				<a href="#accordion-<?php print $tabNum; ?>">Awards and Honors</a>
			</h3>
			<div id="accordion-<?php print $tabNum; ?>" class="acc-content">
				<div id="awards-honors">
					<ul>
						<?php foreach($award_array as $aw) { ?>
							<li><?php print $aw; ?></li>
						<?php } ?>
					</ul>
				</div><!-- END of #awards-honors -->
			</div><!-- END of #accordion-<?php print $tabNum++; ?> -->
		<?php } ?>
	<?php } ?>
	<!------------------------ COURSES TAUGHT tab ---------------------->
	<?php if (!empty($row->field_faculty_teaching_activity)) { ?>
		<h3 class="accordion-<?php print $tabNum; ?>">
	        <a href="#accordion-<?php print $tabNum; ?>">Courses Taught</a>
		</h3>
		<div id="accordion-<?php print $tabNum; ?>" class="acc-content">
			<div id="courses-taught">
				<ul>
					<?php foreach($row->field_faculty_teaching_activity as $teaching) { ?>
						<li><?php print $teaching->{'field_fc_teach_course_name_value'}; ?></li>
					<?php } ?>
				</ul>
			</div><!-- END of #courses-taught -->
		</div><!-- END of #accordion-<?php print $tabNum++; ?> -->
	<?php } ?>
	<!------------------------ RESEARCH AND SCHOLARSHIP tab ---------------------->
	<?php if (!empty($row->field_faculty_grants)) {
			$grants_array = array();
			foreach($row->field_faculty_grants as $grant) {
				$grants_array[] = $grant->{'description'};
				}
		} ?>
		<?php if (count($grants_array) || !empty($row->field_fc_add_pro_research_int) || !empty($row->field_fc_add_pro_curr_research)) { ?>
		<h3 class="accordion-<?php print $tabNum; ?>">
	        <a href="#accordion-<?php print $tabNum; ?>">Research and Scholarship</a>
		</h3>
		<div id="accordion-<?php print $tabNum; ?>" class="acc-content">
			<div id="research-scholarship">
				<?php if (!empty($row->field_fc_add_pro_research_int)) { ?>
					<h3>Research and Scholarship Interests</h3>
					<ul>
						<li><?php print $row->field_fc_add_pro_research_int; ?></li>
					</ul>
				<?php } ?>
				<?php if (!empty($row->{'field_fc_add_pro_curr_research'})) { ?>
					<h3>Current Research Projects</h3>
					<ul>
						<li><?php print $row->{'field_fc_add_pro_curr_research'}; ?> </li>
					</ul>
				<?php } ?>
				<?php if (!empty($row->field_faculty_grants)) { ?>
					<h3>Grant Funding Received</h3>
					<ul>
						<?php foreach($grants_array as $ga) { ?>
							<li><?php print $ga; ?></li>
						<?php } ?>
					</ul>
				<?php } ?>
			</div><!-- END of #research-scholarship -->
		</div><!-- END of #accordion-<?php print $tabNum++; ?> -->

	<?php } ?>
	</div><!-- END of .block--tab-acc .accordion-->
	<div id="faculty-profile-sideblock" style="display:none;">

	<?php
		$sideblock = '<p id="fullname"><strong>';
		$sideblock .= "Contact ";
		$sideblock .= $fullname;
		$sideblock .= '</strong><br><!-- END of #fullname -->';

		if (!empty($row->field_faculty_email)) {
			$sideblock .= '<a href="mailto:' . $row->field_faculty_email . '">'. $row->field_faculty_email . '</a><br>';
		}
		if (!empty($row->field_faculty_work_number)) {
			$sideblock .= $row->field_faculty_work_number . '<br>';
		}
		if (!empty($row->field_faculty_office_number)) {
			$sideblock .= $row->field_faculty_office_number . '</p>';
	}
	print $sideblock; ?>
	</div><!-- END of #faculty-profile-sideblock-->
