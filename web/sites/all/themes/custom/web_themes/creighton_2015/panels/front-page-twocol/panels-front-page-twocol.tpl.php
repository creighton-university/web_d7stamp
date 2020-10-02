<?php
/**
 * @file
 * Template for the 1 column panel layout.
 *
 * This template provides a two-column 33.5% 66.5% panel display layout.
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
<div id="front-page-2col" class="front-page-alternate">
  <section class="hero">
    <?php print $content['top_section_2col']; ?>
  </section><!-- .hero -->
  <section id="body-content">
    <div class="container">
      <div class="second_section_left_2col">
        <?php print $content['second_section_left_2col']; ?>
        </div><!-- .second_section_left_2col -->
      <div class="second_section_right_2col">
        <?php print $content['second_section_right_2col']; ?>
      </div><!-- .second_section_right_2col -->
    </div><!-- .container -->
  </section><!-- #body-content -->
 
</div><!-- #front-page-2col -->


