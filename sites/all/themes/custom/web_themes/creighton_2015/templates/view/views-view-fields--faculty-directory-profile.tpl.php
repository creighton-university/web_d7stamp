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
function encodeToIso($string) {
	return mb_convert_encoding($string, "ISO-8859-1", mb_detect_encoding($string, "UTF-8, ISO-8859-1, ISO-8859-15", true));
}
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
	<?php if (!empty($row->field_faculty_credential)) { ?>
		<?php $fullname .= ', ' . $row->field_faculty_credential; ?>
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
			$leader_full .= trim($leadership->{'activity-type'});
			$leader_full .= ', ' . $leadership->{'office'};
			$leadership_array[] = $leader_full;
			$leader_full = "";
		}
		if (count($leadership_array)) {
			 foreach($leadership_array as $role) { ?>
				<div><?php print $role; ?></div>
			<?php } ?>
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
	<!------------------------ ACADEMIC APPOINTMENTS tab ---------------------->
	<?php ////////////////// Need academic appointments ////////////////////// ?>
	<?php if (!empty($row->departments) ||
		!empty($row->field_fc_rank_his_academic_rank) ||
		!empty($row->school2)) { ?>

		<h3 class="accordion-<?php print $tabNum; ?>">
			<a href="#accordion-<?php print $tabNum; ?>">Academic Appointments</a>
		</h3>
		<div id="accordion-<?php print $tabNum; ?>" class="acc-content">
			<div id="academic-appointments">

				<?php if (!empty($row->departments)) { ?>
					<h3>Department</h3>
					<ul>
						<?php foreach($row->departments as $department) { ?>
							<li><?php print $department; ?></li>
						<?php } ?>
					</ul>
				<?php } ?>
				<?php if (!empty($row->field_fc_rank_his_academic_rank)) { ?>
					<h3>Position</h3>
					<ul>
						<li><?php print $row->field_fc_rank_his_academic_rank; ?></li>
					</ul>
				<?php } ?>
				<?php if (!empty($row->school2)) { ?>
					<h3>Secondary Appointment</h3>
					<ul>
						<li><?php print $row->school2; ?></li>
					</ul>
				<?php } ?>
			</div><!-- END of #academic-appointments -->
		</div><!-- END of #accordion-<?php print $tabNum++; ?> -->
	<?php } ?>
	<!------------------------ TEACHING ACTIVITY tab ---------------------->
	<?php if (!empty($row->field_faculty_teaching_activity)) { ?>
		<h3 class="accordion-<?php print $tabNum; ?>">
			<a href="#accordion-<?php print $tabNum; ?>">Teaching Activity</a>
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
	<!------------------------ BIOGRAPHY tab ---------------------->
	<?php if (!empty($row->field_fc_additional_pro_bio) || !empty($row->cv_file_link)) : ?>
		<h3 class="accordion-<?php print $tabNum; ?>">
			<a href="#accordion-<?php print $tabNum; ?>">Biography</a>
		</h3>
		<div id="accordion-<?php print $tabNum; ?>" class="acc-content">
			<?php if (!empty($row->field_fc_additional_pro_bio)): ?>
				<div id="pro_bio">
					<?php print $row->field_fc_additional_pro_bio ?>
				</div>
			<?php endif; ?>
			<?php if (!empty($row->cv_file_link)): ?>
				<div id="pro-cv-link">
					<a href="<?php print $row->cv_file_link ?>">View my CV.</a>
				</div>
			<?php endif; ?>
		</div><!-- END of #accordion-<?php print $tabNum++; ?> -->
	<?php endif; ?>
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
				<?php if (!empty($row->certifications)) { ?>
					<h3>Certifications</h3>
					<?php print $row->certifications; ?>
				<?php } ?>
			</div><!-- END of #pro_educatio -->
		</div><!-- END of #accordion-<?php print $tabNum++; ?> -->
	<?php } ?>
	<!------------------------ PUBlICATIONS AND PRESENTATIONS tab ---------------------->
	<?php if (!empty($row->field_faculty_publications) || !empty($row->field_faculty_presentations)) {
			//////// if there are any PUBLICATIONS make an array of them ////////
		if (!empty($row->field_faculty_publications)) {
			$publications_array = array();
			foreach ($row->field_faculty_publications as $publications) {
				foreach ($publications as $key => $pubcat) {
					foreach ($pubcat as $pcat) {
						$tempPub = trim($pcat->{'Description'});
            if (!empty($pcat->{'Journal'})) {
			        $tempPub .= ', ' . $pcat->{'Journal'};
			    	}
            if (!empty($pcat->{'volume_issue'})) {
			        $tempPub .= ', ' . $pcat->{'volume_issue'};
			      }
			      if (!empty($pcat->{'page_numbers'})) {
			        $tempPub .= ', ' . $pcat->{'page_numbers'};
			      }
			      if (!empty($pcat->{'Date'})) {
			        $tempPub .= ', ' . substr($pcat->{'Date'}, 0, 4);
			      }
            $publications_array[$key][] = $tempPub;
					}
				}
			}
		}
		//////// if there are any PRESENTATIONS make an array of them ////////
		if (!empty($row->field_faculty_presentations)) {


				$presentations_array = array();
				foreach ($row->field_faculty_presentations as $presentation) {
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
					if (count($publications_array)) : ?>
            <?php foreach ($publications_array as $key => $publication) : ?>
							<h3><?php print $key ?></h3>
							<ul>
								<?php foreach($publication as $pub): ?>
									<li><?php print $pub ?></li>
								<?php endforeach; ?>
							</ul>
            <?php endforeach; ?>
          <?php endif; ?>
				<?php // if there is anything in the PRESENTATIONS array, loop through and print // ?>
				<?php if (count($presentations_array)) : ?>
					<h3>Presentations</h3>
					<ul>
						<?php foreach($presentations_array as $pres) : ?>
							<li><?php print $pres; ?></li>
						<?php endforeach; ?>
					</ul>
				<?php endif; ?>
			</div><!-- END of #publications-presentations -->
		</div><!-- END of #accordion-<?php print $tabNum++; ?> -->
	<?php } ?>
<?php } ?>
	<!------------------------ RESEARCH AND SCHOLARSHIP tab ---------------------->
	<?php if (!empty($row->field_faculty_grants)) {
		$grants_array = array();
		foreach ($row->field_faculty_grants as $grant) {
			$grants_array[] = $grant->{'description'};
		}
	} ?>


		<?php if ((isset($grants_array) && count($grants_array)) ||
		!empty($row->field_fc_add_pro_research_int) ||
		!empty($row->field_fc_add_pro_curr_research)) { ?>
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
					<div class="expert-profile">
						<?php if (!empty($row->field_fc_additional_pro_personal_link)) { ?>
							<a href="<?php print $row->field_fc_additional_pro_personal_link; ?>">Expert Profile</a>
						<?php } ?>

					</div>
				</div><!-- END of #research-scholarship -->
			</div><!-- END of #accordion-<?php print $tabNum++; ?> -->

		<?php } ?>

	<!------------------------ AWARDS AND HONORS tab ---------------------->
	<?php if (!empty($row->field_faculty_consult_honor_pat)) {
		$award_array = array();
		foreach($row->field_faculty_consult_honor_pat as $award) {
			$tempAward = "";
			if (!empty($award->{'title'})) {
				$tempAward .= trim($award->{'title'});
				if (!empty($award->{'granting_source'})) {
					$tempAward .= ', ';
				}
			}
			if (!empty($award->{'granting_source'})) {
				$tempAward .= $award->{'granting_source'};
			}
			if (!empty($award->{'start'})) {
				$tempAward .= ', ' . substr($award->{'start'}, 0, 4);
			}
			$award_array[] = $tempAward;
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
//		if (!empty($row->field_faculty_office_number)) {
//			$sideblock .= $row->field_faculty_office_number . '</p>';
//	}
//		if (!empty($row->cv_file_link)) {
//			$sideblock .= '<a href="' . $row->cv_file_link . '">' . 'View my CV.</a>';
//		}
	print $sideblock; ?>
    <div class="expert-profile">
        <?php if (!empty($row->field_fc_additional_pro_personal_link)) { ?>
            <a href="<?php print $row->field_fc_additional_pro_personal_link; ?>">Expert Profile</a>
        <?php } ?>

    </div>
	</div><!-- END of #faculty-profile-sideblock-->
