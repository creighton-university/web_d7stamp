<?php
/**
 * @file
 * redirect_manager_feature.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function redirect_manager_feature_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'node-redirect_manager_url_redirect-field_redirect_manager_case_ins'.
  $field_instances['node-redirect_manager_url_redirect-field_redirect_manager_case_ins'] = array(
    'bundle' => 'redirect_manager_url_redirect',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_redirect_manager_case_ins',
    'label' => 'Case Insensitive',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'node-redirect_manager_url_redirect-field_redirect_manager_dest'.
  $field_instances['node-redirect_manager_url_redirect-field_redirect_manager_dest'] = array(
    'bundle' => 'redirect_manager_url_redirect',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Must be full URL including http(s)',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_redirect_manager_dest',
    'label' => 'Destination',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'full_html_plus_media' => 'full_html_plus_media',
          'mail_html' => 'mail_html',
          'plain_text' => 'plain_text',
          'slider_headline' => 'slider_headline',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => -9,
            ),
            'full_html_plus_media' => array(
              'weight' => 0,
            ),
            'mail_html' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'slider_headline' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'node-redirect_manager_url_redirect-field_redirect_manager_host'.
  $field_instances['node-redirect_manager_url_redirect-field_redirect_manager_host'] = array(
    'bundle' => 'redirect_manager_url_redirect',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_redirect_manager_host',
    'label' => 'Host',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'multiple_selects',
      'settings' => array(),
      'type' => 'multiple_selects',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'node-redirect_manager_url_redirect-field_redirect_manager_url'.
  $field_instances['node-redirect_manager_url_redirect-field_redirect_manager_url'] = array(
    'bundle' => 'redirect_manager_url_redirect',
    'default_value' => array(
      0 => array(
        'value' => '/',
      ),
    ),
    'deleted' => 0,
    'description' => 'Relative to Host',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_redirect_manager_url',
    'label' => 'URL',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 'full_html',
          'full_html_plus_media' => 'full_html_plus_media',
          'mail_html' => 'mail_html',
          'plain_text' => 'plain_text',
          'slider_headline' => 'slider_headline',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => -9,
            ),
            'full_html_plus_media' => array(
              'weight' => 0,
            ),
            'mail_html' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'slider_headline' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'node-redirect_manager_url_redirect-field_redirect_manager_wildcard'.
  $field_instances['node-redirect_manager_url_redirect-field_redirect_manager_wildcard'] = array(
    'bundle' => 'redirect_manager_url_redirect',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_redirect_manager_wildcard',
    'label' => 'Wildcard',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Case Insensitive');
  t('Destination');
  t('Host');
  t('Must be full URL including http(s)');
  t('Relative to Host');
  t('URL');
  t('Wildcard');

  return $field_instances;
}
