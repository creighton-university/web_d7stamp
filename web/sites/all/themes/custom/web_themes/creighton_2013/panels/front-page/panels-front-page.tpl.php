<?php
/**
 * @file
 * Template for the 1 column panel layout.
 *
 * This template provides a three column 25%-50%-25% panel display layout.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   - $content['left']: Content in the left column.
 *   - $content['main']: Content in the middle column.
 *   - $content['nested_right']: Content in the right column.
 */
?>
<section class="hero">
  <?php print $content['top_section']; ?>
</section>
<section>
  <?php print $content['second_section']; ?>
</section>
<section>
  <?php print $content['third_section']; ?>
</section>
<section>
  <?php print $content['fourth_section']; ?>
</section>
<section>
  <div class="container">
    <div class="column bottom-left">
      <?php print $content['bottom_left_section']; ?>
    </div>
    <div class="column omega bottom-right">
      <?php print $content['bottom_right_section']; ?>
    </div>
  </div>
</section>
