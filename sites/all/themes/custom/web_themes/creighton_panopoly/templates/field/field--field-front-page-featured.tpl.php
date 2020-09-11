
<?php
  foreach ($items as $delta => $item) {
    if($delta < 3){
      print render($item);
    }else{
      break;
    }
  }
?>

