<?php
/**
 * @file
 * creighton_block_types.default_cer_presets.inc
 */

/**
 * Implements hook_default_cer().
 */
function creighton_block_types_default_cer() {
  $export = array();

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'bean*copy_block*field_block_content_reference*node*2tier_page*field_content_secondary_content';
  $cnr_obj->enabled = 1;
  $export['bean*copy_block*field_block_content_reference*node*2tier_page*field_content_secondary_content'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'bean*copy_block*field_block_content_reference*node*content_page*field_content_secondary_content';
  $cnr_obj->enabled = 1;
  $export['bean*copy_block*field_block_content_reference*node*content_page*field_content_secondary_content'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'bean*featured_links*field_block_content_reference*node*2tier_page*field_content_secondary_content';
  $cnr_obj->enabled = 1;
  $export['bean*featured_links*field_block_content_reference*node*2tier_page*field_content_secondary_content'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'bean*featured_links*field_block_content_reference*node*content_page*field_content_secondary_content';
  $cnr_obj->enabled = 1;
  $export['bean*featured_links*field_block_content_reference*node*content_page*field_content_secondary_content'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'bean*featured_related_content*field_block_content_reference*node*2tier_page*field_content_supp_body_content';
  $cnr_obj->enabled = 1;
  $export['bean*featured_related_content*field_block_content_reference*node*2tier_page*field_content_supp_body_content'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'bean*featured_related_content*field_block_content_reference*node*content_page*field_content_supp_body_content';
  $cnr_obj->enabled = 1;
  $export['bean*featured_related_content*field_block_content_reference*node*content_page*field_content_supp_body_content'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'bean*header_background_image*field_block_2tier_reference*node*2tier_page*field_2tier_page_header_image';
  $cnr_obj->enabled = 1;
  $export['bean*header_background_image*field_block_2tier_reference*node*2tier_page*field_2tier_page_header_image'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'bean*inline_slider*field_block_content_reference*node*2tier_page*field_content_supp_body_content';
  $cnr_obj->enabled = 1;
  $export['bean*inline_slider*field_block_content_reference*node*2tier_page*field_content_supp_body_content'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'bean*inline_slider*field_block_content_reference*node*content_page*field_content_supp_body_content';
  $cnr_obj->enabled = 1;
  $export['bean*inline_slider*field_block_content_reference*node*content_page*field_content_supp_body_content'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'bean*profile*field_block_content_reference*node*2tier_page*field_content_secondary_content';
  $cnr_obj->enabled = 1;
  $export['bean*profile*field_block_content_reference*node*2tier_page*field_content_secondary_content'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'bean*profile*field_block_content_reference*node*content_page*field_content_secondary_content';
  $cnr_obj->enabled = 1;
  $export['bean*profile*field_block_content_reference*node*content_page*field_content_secondary_content'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'bean*promo_box*field_block_content_reference*node*2tier_page*field_content_secondary_content';
  $cnr_obj->enabled = 1;
  $export['bean*promo_box*field_block_content_reference*node*2tier_page*field_content_secondary_content'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'bean*promo_box*field_block_content_reference*node*content_page*field_content_secondary_content';
  $cnr_obj->enabled = 1;
  $export['bean*promo_box*field_block_content_reference*node*content_page*field_content_secondary_content'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'bean*quote*field_block_content_reference*node*2tier_page*field_content_secondary_content';
  $cnr_obj->enabled = 1;
  $export['bean*quote*field_block_content_reference*node*2tier_page*field_content_secondary_content'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'bean*quote*field_block_content_reference*node*content_page*field_content_secondary_content';
  $cnr_obj->enabled = 1;
  $export['bean*quote*field_block_content_reference*node*content_page*field_content_secondary_content'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'bean*related_links*field_block_content_reference*node*2tier_page*field_content_secondary_content';
  $cnr_obj->enabled = 1;
  $export['bean*related_links*field_block_content_reference*node*2tier_page*field_content_secondary_content'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'bean*related_links*field_block_content_reference*node*content_page*field_content_secondary_content';
  $cnr_obj->enabled = 1;
  $export['bean*related_links*field_block_content_reference*node*content_page*field_content_secondary_content'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'bean*tabbed_accordion*field_block_content_reference*node*2tier_page*field_content_supp_body_content';
  $cnr_obj->enabled = 1;
  $export['bean*tabbed_accordion*field_block_content_reference*node*2tier_page*field_content_supp_body_content'] = $cnr_obj;

  $cnr_obj = new stdClass();
  $cnr_obj->disabled = FALSE; /* Edit this to true to make a default cnr_obj disabled initially */
  $cnr_obj->api_version = 1;
  $cnr_obj->entity_types_content_fields = 'bean*tabbed_accordion*field_block_content_reference*node*content_page*field_content_supp_body_content';
  $cnr_obj->enabled = 1;
  $export['bean*tabbed_accordion*field_block_content_reference*node*content_page*field_content_supp_body_content'] = $cnr_obj;

  return $export;
}
