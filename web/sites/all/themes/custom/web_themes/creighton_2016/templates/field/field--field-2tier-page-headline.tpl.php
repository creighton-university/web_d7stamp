<?php
  // Loop through headline field to just print content and not div wrappers.
  // Should only have one piece of content for this field but left the looping.

  foreach ($items as $delta => $item) {
    print render($item);
  }

