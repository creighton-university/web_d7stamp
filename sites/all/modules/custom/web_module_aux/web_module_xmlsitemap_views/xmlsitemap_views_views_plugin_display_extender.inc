<?php
/**
 * @file
 * Definition of xmlsitemap_views_views_plugin_display_extender.
 */

/**
 * Adds XML Sitemap settings to the display
 *
 * @ingroup views_display_plugins
 * @ignore style_class_names*/
class xmlsitemap_views_views_plugin_display_extender extends views_plugin_display_extender {
  function add_signature(&$view) {}
  /**
   * Provide a form to edit options for this plugin.
   */
  function option_definition() {
    $options = parent::option_definition();
    $options['xmlsitemap'] = array('default' => 0);
    return $options;
  }
  /**
   * Alter the options to allow for defaults.
   */
  function options_definition_alter(&$options) {
    $options['xmlsitemap'] = array('default' => 0);
  }

  /**
   * Provide a form to edit options for this plugin.
   */
  function options_form(&$form, &$form_state) {
    if (strpos($form['#section'], '-xmlsitemap') == TRUE) {
      $form['#title'] .= t('XML Sitemap status');
      $form['xmlsitemap_status'] = array(
        '#type' => 'select',
        '#options' => array(0 => 'Excluded', 1 => 'Included'),
        '#title' => t('Inclusion'),
        '#description' => t('Set inclusion status for view display'),
        '#weight' => 0,
        '#default_value' => $this->display->get_option('xmlsitemap_status'),
      );
      $form['xmlsitemap_filter_terms'] = array(
        '#type' => 'textfield',
        '#title' => t('Contextual Filter Terms'),
        '#description' => t('Enter multiple values in the form of 1+2+3 (for OR) or 1,2,3 (for AND).'),
        '#default_value' => strlen($this->display->get_option('xmlsitemap_filter_terms')) ? $this->display->get_option('xmlsitemap_filter_terms') : '',
        '#states' => array('visible' => array(':input[name="xmlsitemap_status"]' => array('value' => 1))),
      );
    }
  }

  /**
   * Handle any special handling on the validate form.
   */
  function options_submit(&$form, &$form_state) {
    if (isset($form_state['values']['xmlsitemap_status'])) {
      $this->display->set_option('xmlsitemap_status', $form_state['values']['xmlsitemap_status']);
      $this->display->set_option('xmlsitemap_filter_terms', $form_state['values']['xmlsitemap_filter_terms']);
    }
  }

  /**
   * Provide the default summary for options in the views UI.
   *
   * This output is returned as an array.
   */
  function options_summary(&$categories, &$options) {
    $options['xmlsitemap'] = array(
      'category' => 'other',
      'title' => t('XML Sitemap status'),
      'value' => $this->display->get_option('xmlsitemap_status') ? 'Included' : 'Excluded',
      'desc' => t('Inclusion status for view display'),
    );
  }
}
