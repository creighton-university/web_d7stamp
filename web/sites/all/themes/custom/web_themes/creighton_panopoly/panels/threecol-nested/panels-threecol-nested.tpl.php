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
<div <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <aside class="sidebar">
    <?php print $content['left']; ?>
  </aside>

  <div class="content-body">
    <div class="content-main" role="main">
      <?php print $content['main']; ?>
    </div>
    <aside class="content-aside">
      <?php print $content['nested_right']; ?>
    </aside>
  </div>


</div>
