<?php
/**
 * @file
 * creighton_block_types.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function creighton_block_types_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'contact_block';
  $bean_type->label = 'Footer Contact';
  $bean_type->options = '';
  $bean_type->description = 'Contact info block that appears in the footer. Contains social media links, address, phone, email.';
  $export['contact_block'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'copy_block';
  $bean_type->label = 'Copy Box';
  $bean_type->options = '';
  $bean_type->description = 'A basic text block that may have pre-defined styles applied to it.';
  $export['copy_block'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'featured_content_2';
  $bean_type->label = 'Featured Content 2';
  $bean_type->options = '';
  $bean_type->description = 'Content structured with an image to the top and a headline, blurb and link/button on the bottom.';
  $export['featured_content_2'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'featured_links';
  $bean_type->label = 'Featured Links';
  $bean_type->options = '';
  $bean_type->description = 'A link used for calls-to-action that appear as a graphic button that appears in the &#039;Second Sidebar&#039; region (to the right of the body when viewing in a desktop environment).';
  $export['featured_links'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'featured_related_content';
  $bean_type->label = 'Featured Content 1';
  $bean_type->options = '';
  $bean_type->description = 'Content structured with an image to the left and a headline, blurb and link/button to the right.';
  $export['featured_related_content'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'footer_badge';
  $bean_type->label = 'Footer Badge';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['footer_badge'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'front_page_audience';
  $bean_type->label = 'Front Page Audience';
  $bean_type->options = '';
  $bean_type->description = 'A drop-down menu coupled with four links/buttons. Used only on Creighton’s home page.';
  $export['front_page_audience'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'front_page_featured_content';
  $bean_type->label = 'Front Page Featured Content';
  $bean_type->options = '';
  $bean_type->description = 'The three image/headline/blurb content blocks that appear on the home page.';
  $export['front_page_featured_content'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'front_page_slider';
  $bean_type->label = 'Front Page Slider';
  $bean_type->options = '';
  $bean_type->description = 'A slider designed for Creighton’s home page.';
  $export['front_page_slider'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'header_background_image';
  $bean_type->label = '2nd Tier Header Image';
  $bean_type->options = '';
  $bean_type->description = 'The image that appears in the header, behind the navigation, on 2nd Tier pages.';
  $export['header_background_image'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'inline_slider';
  $bean_type->label = 'Inline Slider';
  $bean_type->options = '';
  $bean_type->description = 'A in-page slider that is the width of the body area.';
  $export['inline_slider'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'profile';
  $bean_type->label = 'Quote + Image';
  $bean_type->options = '';
  $bean_type->description = 'An image, quote and attribute content element that appears in the &#039;Second Sidebar&#039; region (to the right of the body when viewing in a desktop environment).';
  $export['profile'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'promo_box';
  $bean_type->label = 'Promo Box';
  $bean_type->options = '';
  $bean_type->description = 'Text with an internal link that appears in a blue box in the &#039;Second Sidebar&#039; region (to the right of the body when viewing in a desktop environment).';
  $export['promo_box'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'quote';
  $bean_type->label = 'Quote';
  $bean_type->options = '';
  $bean_type->description = 'Text styled as a quote with an attribute that appears in the &#039;Second Sidebar&#039; region (to the right of the body when viewing in a desktop environment).';
  $export['quote'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'related_links';
  $bean_type->label = 'Related Links';
  $bean_type->options = '';
  $bean_type->description = 'A list of links to supplemental information that appears in the &#039;Second Sidebar&#039; region (to the right of the body when viewing in a desktop environment).';
  $export['related_links'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'tabbed_accordion';
  $bean_type->label = 'Tabbed/Accordion';
  $bean_type->options = '';
  $bean_type->description = 'Content modules that help to organize content and appear at the bottom of the body area. ';
  $export['tabbed_accordion'] = $bean_type;

  return $export;
}
