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
<?php
$special_num = 20; // number of specializations
?>
<tr>
<td>

<?php if(!empty($row)) { ?>
	<?php if (!empty($row->field_faculty_first_name)) {
		$fullname = $row->field_faculty_first_name . ' ';
		if (!empty($row->field_faculty_middle_name)) {
			$fullname .= substr($row->field_faculty_middle_name,0,1) . '. ';
		}
		if (!empty($row->field_faculty_last_name)) {
			$fullname .= $row->field_faculty_last_name;
		}
		if (!empty($row->field_faculty_name_suffix)) {
			$fullname .= ', ' . $row->field_faculty_name_suffix;
		}
	} // END of name test (shouldn't everyone pass this one, at least? // ?>


	<div class="fac-staff-ldr-profile-photo">
		<?php if (!empty($row->image)) {
			if ($row->image != "NULL") {
				$imgSrc = $row->image;
			} else $imgSrc = "http://lorempixel.com/150/170/";
		} ?>
		<img src="<?php print $imgSrc; ?>" />
	</div>
	<div class="fac-staff-ldr-profile-content">
		<h3><a href="<?php print '/faculty-directory-profile/' . $row->nid; ?>"><?php print $fullname ?></a></h3>

		<?php if (!empty($row->field_fc_rank_his_academic_rank)) { ?>
			<p class="profile-positions"><?php print $row->field_fc_rank_his_academic_rank; ?></p>
		<?php } ?>

		<?php if (!empty($row->school)) { ?>
			<p class="profile-school">
				<?php print $row->school; ?>
			</p>
		<?php } ?>
		<?php if (!empty($row->specializations)) { ?>
			<div class="profile-specialties">
				<?php
					$specialization_array = array();
					$special_text = "";
					$spec_total = count($row->specializations);
					for($i = 0; ($i < $spec_total) && ($i < $special_num); $i++ ) {
//					foreach ($row->specializations as $spec) {
							$special_text .= $row->specializations[$i]->{'specializations'};
							if ($i < $spec_total - 1) {
								$special_text .= ", ";
							}
//					}
							$specialization_array[] = $special_text;
							$special_text = "";

					} ?>
				<?php foreach($specialization_array as $sa) { ?>
					<?php print $sa; ?>
				<?php } ?>

				<?php if(count($row->field_fc_additional_pro_spclztns) > $special_num) { ?>
					<p><a href="?php print '/faculty-directory-profile/' . $row->nid; ?>">see more...</a></p>
				<?php } ?>
			</div><!-- END of profile-specialties -->
	<?php } ?>

		<?php if (!empty($row->field_faculty_email)) { ?>
			<p class="profile-email">
				<a href="mailto:<?php print $row->field_faculty_email; ?>"><?php print $row->field_faculty_email; ?></a>
			</p>
		<?php } ?>
		<?php if (!empty($row->field_faculty_work_number)) { ?>
			<p class="profile-phone"><?php print $row->field_faculty_work_number; ?></p>
		<?php } ?>
	</div><!-- END of .fac-staff-ldr-profile-content -->
<?php } ?>
</td>
	<td class="school">
		<?php if (!empty($row->school)) { ?>
			<?php print $row->school; ?>
		<?php } ?>
	</td>
	<td class="full-name">
		<?php if (!empty($row->field_faculty_last_name)) {
			print $row->field_faculty_last_name;
			}
			if (!empty($row->field_faculty_first_name)) {
				print ' ' . $row->field_faculty_first_name;
			}
			if (!empty($row->field_faculty_middle_name)) {
				print ' ' . substr($row->field_faculty_middle_name,0,1) . '. ';
			}
		 ?>
	</td>
	<td class="research-interests">
		<?php if (!empty($row->research_interests)) {
			foreach ($row->research_interests as $ri) {
				print $ri->{'research_interests'} . ' ';
			}
		}
		if (!empty($row->field_fc_add_pro_curr_research)) {
				print $row->field_fc_add_pro_curr_research;
		}
		?>
	</td>
	<td class="specializations">
		<?php if (!empty($row->specializations)) {
			foreach ($row->specializations as $sp) {
				print $sp->{'specializations'} . ' ';
			}
		}
		?>
	</td>
	<td class="departments">
		<?php if (!empty($row->departments)) {
			// Making pipe-separated values from single rows with multiple content
			$deptNum = count($row->departments);
			if ($deptNum > 1) {
				for ($i = 0; $i < $deptNum; $i++) {
					if ($i < $deptNum - 1) {
						print $row->departments[$i] . '|';
					} else {
						print $row->departments[$i];
					}

				}
			} else {
				print $row->departments;
			}
		}
		?>
	</td>
	<td class="miscellaneous">
		<?php if (!empty($row->field_faculty_publications)) {
			foreach ($row->field_faculty_publications as $pub) {
				print $pub->{'Description'} . ' ';
			}
		}
		if (!empty($row->field_fc_additional_pro_bio)) {
			print $row->field_fc_additional_pro_bio . ' ';
		}
		if (!empty($row->field_fc_additional_pro_educatio)) {
			foreach ($row->field_fc_additional_pro_educatio as $ed) {
				print $ed . ' ';
			}
		}
		if (!empty($row->field_faculty_presentations)) {
			foreach ($row->field_faculty_presentations as $prezi) {
				print $prezi->{'description'} . ' ';
			}
		}
		if (!empty($row->field_faculty_consult_honor_pat)) {
			foreach ($row->field_faculty_consult_honor_pat as $honor) {
				print $honor->{'description'} . ' ';
			}
		}
		if (!empty($row->field_faculty_grants)) {
			foreach ($row->field_faculty_grants as $grant) {
				print $grant->{'description'} . ' ';
			}
		}
		if (!empty($row->field_faculty_admin_roles_ldrshp)) {
			foreach ($row->field_faculty_admin_roles_ldrshp as $lead) {
				print $lead->{'activity-type'} . ', ' . $lead->{'office'} . ' ';
			}
		}
		?>
	</td>
</tr>