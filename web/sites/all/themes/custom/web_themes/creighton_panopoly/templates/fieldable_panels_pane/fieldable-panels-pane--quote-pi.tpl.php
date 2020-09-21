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
  //dpm($content,'content');

  $profile_image = isset($content['field_profile_image']) ? $content['field_profile_image'] : array(); // perhaps use a scratch image for latter condition

  if(isset($content['field_quote_pi_body']['#items'][0]['safe_value'])){
    $profile_body = $content['field_quote_pi_body']['#items'][0]['safe_value'];
  }
  
  //$profile_name = isset($content['field_profile_name']) ? $content['field_profile_name'] : array();
  if(isset($content['field_quote_pi_name']['#items'])){
    $profile_name = $content['field_quote_pi_name']['#items'][0]['safe_value'];
  }

  if(isset($content['field_quote_pi_affiliation']['#items'][0]['safe_value'])){
    $profile_affiliation = $content['field_quote_pi_affiliation']['#items'][0]['safe_value'];
  }

  $quote = $content['field_quote_pi_quote']['#items'][0]['value'];

  if(isset($content['field_link_type']['#items'][0]['value'])) {
    if($content['field_link_type']['#items'][0]['value'] == 1 && isset($content['field_int_link'][0]['#item']['target_id'])){
      $readmore_link = $GLOBALS['base_url'] . '/' . drupal_get_path_alias('node/' . $content['field_int_link'][0]['#item']['target_id']);
    }
    elseif($content['field_link_type']['#items'][0]['value'] == 2 && isset($content['field_external_link']['#items'][0]['url'])){
      $readmore_link = file_create_url($content['field_external_link']['#items'][0]['url']);
    }
    elseif($content['field_link_type']['#items'][0]['value'] == 3 && isset($content['field_file_link'][0]['#markup'])){
      $path = file_load($content['field_file_link'][0]['#markup'])->uri;
      $readmore_link = file_create_url($path);
    }
  }
  
//  $imageUri = isset($content['field_profile_image'][0]['#item']['uri']) ? $content['field_profile_image'][0]['#item']['uri'] : '';
//  dpm($imageUri);
?>
<div class="block--profile sidebar-item quote-pi">
  <?php print render($profile_image); ?>
  <?php if($quote == '1'): ?>
    <blockquote><q><?php (isset($profile_body)) ? print $profile_body : print ''; ?></q></blockquote>
  <?php else: ?>
    <p><?php (isset($profile_body)) ? print $profile_body : print ''; ?></p>
  <?php endif; ?>
  <?php if(isset($profile_name) || isset($profile_affiliation)) : ?>
    <footer>
      <?php (isset($profile_name)) ? print '&mdash;&nbsp;' . $profile_name : print '' ?>
      <?php if(isset($profile_name) && isset($profile_affiliation)) : ?><span><?php print($profile_affiliation); ?></span><?php endif; ?>
    </footer>
  <?php endif; ?>
  <?php if(isset($readmore_link)) : ?> <a class="profile-link" href="<?php print($readmore_link); ?>">Read More</a> <?php endif; ?>
</div>
