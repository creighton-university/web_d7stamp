<?php
  // krumo($items);

  global $style_type;
  $randId = rand(0,10000);
  $idArray = array();
  $content_title = array();
  $content_body = array();

  $first_fcArray = $items[0]['entity']['field_collection_item'];
  $first_fckey = key($first_fcArray);

  foreach ($items as $delta => $item) {
    $cur_fc_array = $item['entity']['field_collection_item'];
    $cur_fc_key = key($cur_fc_array);
    array_push($content_title, $item['entity']['field_collection_item'][$cur_fc_key]['field_tabbed_acc_title'][0]['#markup']);
    array_push($content_body, $item['entity']['field_collection_item'][$cur_fc_key]['field_tabbed_acc_body'][0]['#markup']);
    array_push($idArray, $randId);
    $randId++;
  }
?>

<?php if($style_type == 'accordion'): ?>
  <?php //Accordion markup ?>
      <?php
      foreach($content_title as $delta => $title){
        if($delta == 0){
          //add class "active" below to show open
          print '<h3 class="accordion-'. $idArray[$delta] . '"><a href="#accordion-' . $idArray[$delta] . '">' . $title . '</a></h3>';
          //add class "accordion-show" below to show open
          print '<div id="accordion-' . $idArray[$delta] . '" class="acc-content">' . $content_body[$delta] . '</div>';
        }else{
          print '<h3 class="accordion-'. $idArray[$delta] . '"><a href="#accordion-' . $idArray[$delta] . '">' . $title . '</a></h3>';
          print '<div id="accordion-' . $idArray[$delta] . '" class="acc-content">' . $content_body[$delta] . '</div>';
        }
      } ?>
<?php else: ?>
  <?php // Tabs markup ?>
  <div class="item-list">
    <ul>
      <?php
      foreach($content_title as $delta => $title){
        if($delta == 0){
          print '<li class="item-'. $idArray[$delta] . ' active"><a href="#item-' . $idArray[$delta] . '">' . $title . '</a></li>';
        }else{
          print '<li class="item-'. $idArray[$delta] . '"><a href="#item-' . $idArray[$delta] . '">' . $title . '</a></li>';
        }
        array_push($tabIDArray, $uniqueId);
      } ?>
    </ul>
  </div>
  <div class="tab-acc-content">
    <?php
      foreach($content_body as $delta => $body){
        if($delta == 0){
          print '<div id="item-' . $idArray[$delta] . '" class="tab-content">' . $body . '</div>';
        }else{
          print '<div id="item-' . $idArray[$delta] . '" class="tab-content tab-acc-hide">' . $body . '</div>';
        }
      }
    ?>
  </div>
<?php endif; ?>
