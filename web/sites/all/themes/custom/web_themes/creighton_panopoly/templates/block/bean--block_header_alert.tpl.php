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
//$emergencyType
// dangerous|Dangerous (Red with "!" icon)
// weather|Weather-related (Orange with snowflake icon)
// other|Not dangerous (Orange with "!" icon)
$emergencyType  = $content['field_emergency_type']['#items'][0]['value'];
$emergencyHeadline  = $content['field_emergency_headline']['#items'][0]['value'];
// default to weather alert
$headerClass = 'alert-orange';
$iconPath = '/images/alert-header/alert-snow.png';
if($emergencyType == 'dangerous') {
  $headerClass = 'alert-red';
  $iconPath = '/images/alert-header/alert-symbol.png';
} else if ($emergencyType == 'other') {
	$headerClass = 'alert-orange';
	$iconPath = '/images/alert-header/alert-symbol.png';
}

$headerContent = $content['field_header_alert_markup']['#items'][0]['value'];
$headerLink = $content['field_header_alert_link']['#items'][0]['url'];
//Header alert Active = ON
if ($headerAlert == '1') {
?>
  <div class="header-alert <?php print $headerClass; ?>">
    
    <div class="container">
	    <img src="/<?php echo drupal_get_path('theme',$GLOBALS['theme']) . $iconPath; ?>" />

      <div id="alert-content">
	      
		<div id="alert-headline"><?php print $emergencyHeadline; ?></div>
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

