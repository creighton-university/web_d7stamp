<?php //check if und is empty mmc 3.7.19
  if(!empty($element['#object']->field_event_location['und']) 
      && strtolower($element['#object']->field_event_location['und'][0]['value']) == 'online') {
    $items[0]['#markup'] = '<span class="date-display-start" property="dc:date" datatype="xsd:dateTime" content="' . 
                              date('Y-m-d\T00:00:00P', strtotime($element['#items'][0]['value'])) . 
                              '">' . 
                              date('l, F j, Y', strtotime($element['#items'][0]['value'])) . 
                              '</span> - <span class="date-display-end" property="dc:date" datatype="xsd:dateTime" content="' .
                              date('Y-m-d\T00:00:00P', strtotime($element['#items'][0]['value2'])) .
                              '">' . 
                              date('l, F j, Y', strtotime($element['#items'][0]['value2'])) . '</span>';
  }
  print '<div class="' . $classes  . '">' . $items[0]['#markup'] . '</div>';
?>
