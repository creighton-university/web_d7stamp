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
$nameUrl = ""; // for making human-readable name
?>
<?php if (!empty($row->field_faculty_first_name)) {
	$fullname = $row->field_faculty_first_name . ' ';
	$nameUrl = strtolower($row->field_faculty_first_name) . "-";

	if (!empty($row->field_faculty_middle_name)) {
		 $fullname .= substr($row->field_faculty_middle_name,0,1) . '. ';
	 }
	 if (!empty($row->field_faculty_last_name)) {
		 $fullname .= $row->field_faculty_last_name;
		 $nameUrl .= strtolower($row->field_faculty_last_name);
	 }
	 if (!empty($row->field_faculty_name_suffix)) {
		 $fullname .= ', ' . $row->field_faculty_name_suffix;
	 }
	if (!empty($row->field_faculty_credential)) {
		$fullname .= ', ' . $row->field_faculty_credential;
	}
 } // END of name test (shouldn't everyone pass this one, at least? // ?>


<div class="fac-staff-ldr-profile-photo">
	<img src="http://lorempixel.com/150/170/" />
</div>
 <div class="fac-staff-ldr-profile-content">
  <h4><?php print $fullname ?></h4>

	 <?php if (!empty($row->field_fc_rank_his_academic_rank)) { ?>
	 <p class="profile-positions"><?php print $row->field_fc_rank_his_academic_rank; ?></p>
	 <?php } ?>
	 <?php //////// if there are any LEADERSHIP roles and if they can be displayed, make an array of them ////////
	 if (!empty($row->field_faculty_admin_roles_ldrshp)) {
		 $leadership_array = array();
		 $leadership_concat = "";
		 foreach($row->field_faculty_admin_roles_ldrshp as $leadership) {
			 if (empty($leadership->{'Publish to Web'}->{'#markup'})) {
				 $leadership_concat .= $leadership->{'Activity Type'}->{'#title'};
				 $leadership_concat .= ', ' . $leadership->{'Office'}->{'#markup'};
			 } else if (!$leadership->{'Publish to Web'}->{'#markup'} == "Exclude from Web") {
				 $leadership_concat .= $leadership->{'Activity Type'}->{'#title'};
				 $leadership_concat .= ', ' . $leadership->{'Office'}->{'#markup'};
			 }
			 $leadership_array[] = $leadership_concat;
		 }
	 } ?>
	 <?php //////// if there is anything in the array, loop through and print ////////
	 if (!empty($leadership_array)) { ?>
		 <?php foreach($leadership_array as $role) { ?>
	 		<p class="profile-positions">
		 		<?php print $role; ?>
			</p>
		 <?php } ?>
	 <?php } ?>
	<?php if (!empty($row->field_fc_additional_pro_spclztns)) { ?>
		<div class="profile-specialties">
			<?php $specialization_array = array();
			 for($i = 0; $i < count($row->field_fc_additional_pro_spclztns) && $i < 5; $i++ ) {
				 $specialization_array[] = $row->field_fc_additional_pro_spclztns[$i];
			 } ?>
			<ul>
				<?php foreach($specialization_array as $sa) { ?>
					<li class="specialty-item"><?php print $sa; ?></li>
				<?php } ?>
			</ul>
			<?php if(count($row->field_fc_additional_pro_spclztns) > 5) { ?>
				<p><a href="<?php print '/faculty-directory-profile/'  . $row->nid . '/' . $nameUrl; ?>">see more...</a></p>
			<?php } ?>
		</div>
	 <?php } ?>
	 <?php if (!empty($row->school)) { ?>
		 <p class="profile-school">
			<?php print $row->school; ?>
		 </p>
	 <?php } ?>
	 <?php if (!empty($row->field_faculty_email)) { ?>
	<p class="profile-email">
	<a href="<?php print $row->field_faculty_email; ?>"><?php print $row->field_faculty_email; ?></a>
	</p>
	 <?php } ?>
      <?php if (!empty($row->field_faculty_work_number)) { ?>
	 <p class="profile-phone"><?php print $row->field_faculty_work_number; ?></p>
	 <?php } ?>
  </div>
<p class="fac-ldr-profile-link"><a href="<?php print '/faculty-directory-profile/' . $row->nid . '/' . $nameUrl; ?>">View Profile</a></p>


