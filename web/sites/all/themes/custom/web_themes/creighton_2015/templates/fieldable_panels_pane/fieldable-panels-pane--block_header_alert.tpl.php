<?php
/**
 * @file
 * Default theme implementation for beans.
 *
 * Available variables:
 * - $content: An array of comment items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $title: The (sanitized) entity label.
 * - $url: Direct url of the current entity if specified.
 * - $page: Flag for the full page state.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity-{ENTITY_TYPE}
 *   - {ENTITY_TYPE}-{BUNDLE}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
?>

<?php
//$headerAlert
//Active  = 1
//Off     = 0
$headerAlert = $content['field_header_alert_activate']['#items'][0]['value'];
//$headerColor 
//Orange  = 1
//Red     = 0
$headerColor  = $content['field_header_alert_color']['#items'][0]['value'];
$headerClass = 'alert-orange';
if($headerColor == '1') {
  $headerClass = 'alert-red';
}

$headerContent = $content['field_header_alert_markup']['#items'][0]['value'];
$headerLink = $content['field_header_alert_link']['#items'][0]['url'];
//Header alert Active = ON
if ($headerAlert == '1') {
?>
  <div class="header-alert <?php print $headerClass; ?>">
    <div class="container">
      <img src="/<?php echo drupal_get_path('theme',$GLOBALS['theme']); ?>/images/alert-header/alert-symbol.png" />
      <div id="alert-content">
        <?php print $headerContent; 
        if($headerLink == ''){          
        } else {
        ?>
          <a id="alert-info" href="<?php print $headerLink; ?>">More Information</a>
        <?php
        }        
        ?>               
      </div>
    </div>
  </div>
<?php
}

