<?php
$file = file_load($settings['region_background_image']);
$image = image_load($file->uri);
?>
<div class="region_background_image clearfix" style="background-image: url('<?php print file_create_url($image->source); ?>');">
  <div class="region_background_image_container clearfix">
    <?php print $content; ?>
  </div>
</div>
