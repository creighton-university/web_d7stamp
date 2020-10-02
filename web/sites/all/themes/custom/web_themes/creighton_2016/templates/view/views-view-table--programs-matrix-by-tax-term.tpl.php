<?php

/**
 * @file
 * Template to display a view as a table.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $header: An array of header labels keyed by field id.
 * - $caption: The caption for this table. May be empty.
 * - $header_classes: An array of header classes keyed by field id.
 * - $fields: An array of CSS IDs to use for each field id.
 * - $classes: A class or classes to apply to the table, based on settings.
 * - $row_classes: An array of classes to apply to each row, indexed by row
 *   number. This matches the index in $rows.
 * - $rows: An array of row items. Each row is an array of content.
 *   $rows are keyed by row number, fields within rows are keyed by field ID.
 * - $field_classes: An array of classes to apply to each field, indexed by
 *   field id, then row number. This matches the index in $rows.
 * @ingroup views_templates
 */
?>
<?php
/**
 * This is using tablesaw by Filament Group to make the table act to responsive desgin.
 * https://github.com/filamentgroup/tablesaw
 *
 * - Add classes (tablesaw, tablesaw-stack) to the table layout
 * - Add attribute data-mode="stack" to the table
 *
 */
drupal_add_css(drupal_get_path('theme', 'creighton_2016') . '/css/matrix/tablesaw.css');
drupal_add_js(drupal_get_path('theme', 'creighton_2016') .'/js/vendor/tablesaw.stackonly.js');
drupal_add_js(drupal_get_path('theme', 'creighton_2016') .'/js/matrix.js');
?>

<div <?php if ($classes) { print 'class="table '. $classes . ' tablesaw tablesaw-stack" '; } ?><?php print $attributes; ?> data-mode="stack">
  <?php if (!empty($title) || !empty($caption)) : ?>
    <caption><?php print $caption . $title; ?></caption>
  <?php endif; ?>
  <?php if (!empty($header)) : ?>
    <div class="thead">
      <div class="tr">
        <?php foreach ($header as $field => $label): ?>
          <div  <?php if ($header_classes[$field]) { print 'class="th '. $header_classes[$field] . '" '; } ?>>
            <?php print $label; ?>
          </div><!-- END .th -->
        <?php endforeach; ?>
      </div><!-- END .tr -->
    </div><!-- END .thead -->
  <?php endif; ?>
  <div class="tbody">
    <?php foreach ($rows as $row_count => $row): ?>
      <div <?php if ($row_classes[$row_count]) { print 'class="tr ' . implode(' ', $row_classes[$row_count]) .'"';  } ?>>
        <?php foreach ($row as $field => $content): ?>
          <div <?php if ($field_classes[$field][$row_count]) { print 'class="td '. $field_classes[$field][$row_count] . '" '; } ?>>
            <ul><?php
              print $content ;
              ?>
            </ul>
          </div><!-- END .td -->
        <?php endforeach; ?>
      </div><!-- END .tr -->
    <?php endforeach; ?>
  </div><!-- END .tbody -->
</div>

