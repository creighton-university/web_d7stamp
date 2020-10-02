<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */
?>
<?php
// print each entry of the custom tab
foreach ($row->field_field_tab_custom_all as $tab) {
        // get the tab title from the field summary
        $tabTitle = $tab['raw']['summary'];
        // get the tab content from the rendered markup
        $tabContent = $tab['rendered']['#markup'];
        // create a string to add to the id of the h3
        // build string from the title with spaces removed
        $tabID = str_replace(" ", "", $tabTitle);
        // build the html for the output
        $tabHTML = '<h3 class="accordion-custom-tab-' .  $tabID . '">';
        $tabHTML .= '<a href="#accordion-custom-tab">' . $tabTitle . '</a></h3>' . "\n";
        $tabHTML .= '<div class="acc-content" id="accordion-custom-tab-' . $tabID .'">' . $tabContent . '</div>' . "\n";
        // print the html
        print $tabHTML;
}
?>
