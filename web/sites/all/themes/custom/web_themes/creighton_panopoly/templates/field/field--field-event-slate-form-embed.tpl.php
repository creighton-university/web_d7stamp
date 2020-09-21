<?php
/*
* Safe display of slate embed code.
*/

$slate_embed_code = isset($items[0]['#markup']) ? htmlspecialchars_decode($items[0]['#markup'], ENT_QUOTES) : '';

?>
<?php print $slate_embed_code; ?>
