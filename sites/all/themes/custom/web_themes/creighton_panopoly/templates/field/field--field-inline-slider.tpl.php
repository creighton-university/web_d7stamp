<div class="slideshow">
  <div class="bxslider">
    <?php
      foreach ($items as $delta => $item) {
        print render($item);
      }
    ?>
  </div>
</div>
