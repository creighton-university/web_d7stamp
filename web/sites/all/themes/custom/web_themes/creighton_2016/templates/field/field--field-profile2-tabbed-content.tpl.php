<?php
  $content_title = array();
  $content_body = array();

  $first_fcArray = $items[0]['entity']['field_collection_item'];
  $first_fckey = key($first_fcArray);

  foreach ($items as $delta => $item) {
    $cur_fc_array = $item['entity']['field_collection_item'];
    $cur_fc_key = key($cur_fc_array);
    array_push($content_title, $item['entity']['field_collection_item'][$cur_fc_key]['field_profile2_tabbed_title'][0]['#markup']);
    array_push($content_body, $item['entity']['field_collection_item'][$cur_fc_key]['field_profile2_tabbed_body'][0]['#markup']);
  }
?>
<?php // Tabs markup ?>
<div class="item-list">
  <ul>
    <?php
    foreach($content_title as $delta => $title){
      if($delta == 0){
        print '<li class="item-'. $delta . ' active"><a href="#item-' . $delta . '">' . $title . '</a></li>';
      }else{
        print '<li class="item-'. $delta . '"><a href="#item-' . $delta . '">' . $title . '</a></li>';
      }
    } ?>
  </ul>
</div>
<div class="tab-acc-content">
  <?php
    foreach($content_body as $delta => $body){
      if($delta == 0){
        print '<div id="item-' . $delta . '" class="tab-content">' . $body . '</div>';
      }else{
        print '<div id="item-' . $delta . '" class="tab-content tab-acc-hide">' . $body . '</div>';
      }
    }
  ?>
</div>

