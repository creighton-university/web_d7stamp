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
  if(isset($content['field_contact_block_facebook'])){
    $facebook_link = $content['field_contact_block_facebook']['#items'][0]['display_url'];
  }
  if(isset($content['field_contact_block_twitter'])){
    $twitter_link = $content['field_contact_block_twitter']['#items'][0]['url'];
  }
  if(isset($content['field_contact_block_linkedin'])){
    $linkedin_link = $content['field_contact_block_linkedin']['#items'][0]['url'];
  }
  if(isset($content['field_contact_block_youtube'])){
    $youtube_link = $content['field_contact_block_youtube']['#items'][0]['url'];
  }


  // krumo($content);
  // die;
?>

<ul class="social-media">
  <?php if(isset($facebook_link)) : ?>
  <li>
    <a class="facebook" href="<?php print($facebook_link); ?>" title="Visit our Facebook page">Facebook</a>
  </li>
  <?php endif; ?>
  <?php if(isset($twitter_link)) : ?>
  <li>
    <a class="twitter" href="<?php print($twitter_link); ?>" title="Visit our Twitter page">Twitter</a>
  </li>
  <?php endif; ?>
  <?php if(isset($linkedin_link)) : ?>
  <li>
    <a class="linkedin" href="<?php print($linkedin_link); ?>" title="Visit our LinkedIn page">LinkedIn</a>
  </li>
  <?php endif; ?>
  <?php if(isset($youtube_link)) : ?>
  <li>
    <a class="youtube" href="<?php print($youtube_link); ?>" title="Visit our YouTube page">YouTube</a>
  </li>
  <?php endif; ?>
</ul>
<p class="contact-address">
  <?php print($content['field_contact_block_address']['#items'][0]['safe_value']); ?><br>
  Omaha, NE 68178<br>
  <?php print($content['field_contact_block_phone']['#items'][0]['safe_value']); ?><br>
  <a href="https://www.creighton.edu/ask" title="Ask a question">Ask a question</a>
</p>


