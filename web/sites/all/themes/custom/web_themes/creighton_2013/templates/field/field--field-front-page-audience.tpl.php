
<?php
  // foreach ($items as $delta => $item) {
  //   print render($item);
  // }
  $cur_menu = null;
  $first_fcArray = $items[0]['entity']['field_collection_item'];
  $first_fckey = key($first_fcArray);

  // krumo($items);
  // die;

?>

<div class="options">
  <h5>Quick Links</h5>
  <div class="i-am-a">I am a/an:</div>
  <div class="dropdown">
    <a class="dropdown-toggle" data-toggle="dropdown" href="#"><?php print( $items[0]['entity']['field_collection_item'][$first_fckey]['field_fp_audience']['#items'][0]['safe_value'] ); ?></a>
    <ul class="dropdown-menu" role="menu" >
      <?php foreach ($items as $delta => $item) {
        $fcArray = $items[$delta]['entity']['field_collection_item'];
        $fcArray_key = key($fcArray);
        $cur_item = $item['entity']['field_collection_item'][$fcArray_key]['field_fp_audience']['#items'][0]['safe_value'];

        $item_class = str_replace('&amp;', '', $cur_item);
        $item_class = str_replace(' ', '-', $item_class);
      ?>
      <li><a class="<?php echo $item_class ?>" role="menuitem" href="#collection-<?php echo $delta ?>"><?php print( $cur_item ); ?></a></li>
    <?php } ?>
    </ul><!-- /.dropdown-menu -->
  </div><!-- /.dropdown -->
</div><!-- /.options -->
<?php foreach ($items as $delta => $item) { ?>
  <?php

    $fcArray = $items[$delta]['entity']['field_collection_item'];
    $fcArray_key = key($fcArray);
    $cur_item = $item['entity']['field_collection_item'][$fcArray_key]['field_fp_audience']['#items'][0]['safe_value'];
    $item_class = str_replace('&amp;', '', $cur_item);
    $item_class = str_replace(' ', '-', $item_class);
  ?>
  <?php if($delta == 0) : ?>
    <div class="audience-links <?php echo $item_class; ?> active">
    <?php print render($item); ?>
    </div>
    <?php else : ?>
    <div class="audience-links <?php echo $item_class; ?>">
    <?php print render($item); ?>
    </div>
    <?php endif; ?>
<?php } ?>
