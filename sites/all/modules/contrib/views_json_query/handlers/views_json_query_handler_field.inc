<?php
/**
 * @file
 * Base field handler for views_json_query.
 */

class views_json_query_handler_field extends views_handler_field {
  /**
   * Render.
   */
  function render($values) {
    $key = $this->field_alias;

    if (!isset($values->$key)) {
      return '';
    }

    if (!is_array($values->$key)) {
      $values = $values->$key;
      return $this->render_field($values);
    }
    else {
      $return_value = '';
      $field_tag = $this->element_type(TRUE, FALSE, FALSE);

      // Loop through array and put values into a string
      // place user selected tag and classes (if applicable)
      // into string and then return the value for desired
      // array results
      foreach($values->$key as $value) {
        if ($field_tag !== '') {

          // if the user wants to input classes
          if ($this->options['element_class'] !== '') {
            $return_value .= '<' . $field_tag . ' class="' .

              // Add User classes here
              $this->render_field($this->element_classes())  . '">' .

              // Add an array value here
              $this->render_field($value) . '</' . $field_tag . '>';
          }
          else {
            $return_value .= '<' . $field_tag . '>' . $this->render_field($value) .
                             '</' . $field_tag . '>';
          }
        }

        // If the user selects no tag, don't place the tag in the string.
        else {
          $return_value .= $value;
        }
      }
      return $return_value;
    }
  }

  /**
   * Renders field.
   */
  function render_field($value) {
    return check_plain($value);
  }

  /**
   * Option definition.
   */
  function option_definition() {
    $options = parent::option_definition();
    $options['key'] = array('default' => '');
    return $options;
  }

  /**
   * Options form.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
    $form['key'] = array(
      '#title' => t('Key Chooser'),
      '#description' => t('choose a key'),
      '#type' => 'textfield',
      '#default_value' => $this->options['key'],
      '#required' => TRUE,
    );
  }

  /**
   * Called to add the field to a query.
   */
  function query() {
    // Add the field.
    $this->table_alias = 'json';

    $this->field_alias = $this->query->add_field(
      $this->table_alias,
      $this->options['key'],
      '',
      $this->options
    );
  }

  /**
   * UI name.
   */
  function ui_name($short = FALSE) {
    if (!empty($this->options['ui_name'])) {
      $title = check_plain($this->options['ui_name']);
      return $title;
    }
    $title = $this->definition['title'];

    if ($short && isset($this->definition['title short'])) {
      $title = $this->definition['title short'];
    }

    return t('!key: !title', array(
      '!key' => $this->options['key'],
      '!title' => $title,
    ));
  }

  /**
   * Called to determine what to tell the clicksorter.
   */
  function click_sort($order) {
    if (isset($this->field_alias)) {
      $this->query->add_orderby(NULL, $this->field_alias, $order);
    }
  }
}
