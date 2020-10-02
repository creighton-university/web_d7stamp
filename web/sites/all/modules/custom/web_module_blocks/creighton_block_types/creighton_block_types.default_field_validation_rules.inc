<?php
/**
 * @file
 * creighton_block_types.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function creighton_block_types_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Block Featured Content 2 Alt Tag';
  $rule->name = 'block_featured_cont_2_alt_tag';
  $rule->field_name = 'field_featured_content2_image';
  $rule->col = 'alt';
  $rule->entity_type = 'bean';
  $rule->bundle = 'featured_content_2';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if(!empty($this->item[\'fid\']) && $this->value===\'\'){

  $this->set_error();

}',
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      3 => 0,
      6 => 0,
      5 => 0,
      4 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = 'Alt tag is required.';
  $export['block_featured_cont_2_alt_tag'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Block Footer Badge Image Alt Tag';
  $rule->name = 'block_footer_badge_image_alt_tag';
  $rule->field_name = 'field_footer_badge_image';
  $rule->col = 'alt';
  $rule->entity_type = 'bean';
  $rule->bundle = 'footer_badge';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if($this->entity->field_footer_badge_type[\'und\'][0][\'value\'] == \'override\' && !empty($this->item[\'fid\']) && $this->value===\'\'){
  $this->set_error();
}',
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      3 => 0,
      6 => 0,
      5 => 0,
      4 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = 'Alt tag is required.';
  $export['block_footer_badge_image_alt_tag'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Block Header Background Image Alt Tag';
  $rule->name = 'block_head_back_image_alt_tag';
  $rule->field_name = 'field_header_background_image';
  $rule->col = 'alt';
  $rule->entity_type = 'bean';
  $rule->bundle = 'header_background_image';
  $rule->validator = 'field_validation_required_validator';
  $rule->settings = array(
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      3 => 0,
      6 => 0,
      5 => 0,
      4 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = 'Alt tag is required.';
  $export['block_head_back_image_alt_tag'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Block Profile Image Alt Tag';
  $rule->name = 'block_profile_image_alt_tag';
  $rule->field_name = 'field_profile_image';
  $rule->col = 'alt';
  $rule->entity_type = 'bean';
  $rule->bundle = 'profile';
  $rule->validator = 'field_validation_required_validator';
  $rule->settings = array(
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      3 => 0,
      6 => 0,
      5 => 0,
      4 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = 'Alt tag is required.';
  $export['block_profile_image_alt_tag'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Field Collection Featured Related Content Alt Tag';
  $rule->name = 'field_col_feat_rel_cont_alt_tag';
  $rule->field_name = 'field_featured_rel_cont_image';
  $rule->col = 'alt';
  $rule->entity_type = 'field_collection_item';
  $rule->bundle = 'field_featured_rel_cont';
  $rule->validator = 'field_validation_required_validator';
  $rule->settings = array(
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      3 => 0,
      6 => 0,
      5 => 0,
      4 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = 'Alt tag is required.';
  $export['field_col_feat_rel_cont_alt_tag'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Field Collection Front Page Featured Alt Tag';
  $rule->name = 'field_col_fp_featured_alt_tag';
  $rule->field_name = 'field_fp_featured_image';
  $rule->col = 'alt';
  $rule->entity_type = 'field_collection_item';
  $rule->bundle = 'field_front_page_featured';
  $rule->validator = 'field_validation_required_validator';
  $rule->settings = array(
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      3 => 0,
      6 => 0,
      5 => 0,
      4 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = 'Alt tag is required.';
  $export['field_col_fp_featured_alt_tag'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Field Collection Inline Slider Alt Tag';
  $rule->name = 'field_col_inline_slider_alt_tag';
  $rule->field_name = 'field_inline_slider_image';
  $rule->col = 'alt';
  $rule->entity_type = 'field_collection_item';
  $rule->bundle = 'field_inline_slider';
  $rule->validator = 'field_validation_required_validator';
  $rule->settings = array(
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      3 => 0,
      6 => 0,
      5 => 0,
      4 => 0,
    ),
    'errors' => 1,
  );
  $rule->error_message = 'Alt tag is required.';
  $export['field_col_inline_slider_alt_tag'] = $rule;

  return $export;
}
