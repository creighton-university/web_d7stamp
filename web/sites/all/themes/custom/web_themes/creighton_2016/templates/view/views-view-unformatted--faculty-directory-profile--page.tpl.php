<?php

/**
 * @file
 * Template to display a list of rows.
 */
?>
<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>
<?php // dpm($rows); ?>
<?php //dpm(get_defined_vars());?>
<?php foreach ($rows as $delta => $row): ?>
<?php //dpm($row); ?>
  <div<?php print $row_attributes[$delta]; ?>>
    <?php print $row; ?>
  </div>
<?php endforeach; ?>
