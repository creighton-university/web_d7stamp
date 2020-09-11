<?php

/**
 * Set the breadcrumb trail to the selected menu item using a context reaction while adhering to Creighton's breadcrumb structure.
 */
class subsite_parent_crumbs_reaction_context_reaction_creighton_crumbs extends context_reaction_breadcrumb {
  /**
   * Overrides set_active_trail_from_link to set the breadcrumb instead of the menu path.
   */
  function set_active_trail_from_link($item) {
    $breadcrumb = array(l(t('Home'), 'https://www.creighton.edu'));
    $ps = variable_get('subsite_parents');
    $p = variable_get('subsite_top_level_site');
    // if current site is not WWW, insert trimmed site name in breadcrumb path
    if($p != 'www') {
      // replace " | Creighton University" in site_name if present
      $breadcrumb[] = l(t(str_replace(' | Creighton University', '', variable_get('site_name'))), '/');
    }
    // if current site is a subsite, insert parent site into breadcrumb path unless parent site is WWW
    if(variable_get('subsite_is_subsite') && isset($ps[$p]) && isset($ps[$p]['url']) && $p != 'www') {
      $breadcrumb[] = l(t($ps[$p]['title']), $ps[$p]['url']);
    }
    $result = db_select('menu_links')
      ->fields('menu_links', array('p1', 'p2', 'p3', 'p4', 'p5', 'p6', 'p7', 'p8'))
      ->condition('hidden', 0)
      ->condition('link_path', $item['link_path'])
      ->execute();
    while ($parents = $result->fetchAssoc()) {
      $set = FALSE;
      foreach (array_filter($parents) as $plid) {
        $parent = menu_link_load($plid);
        if ($parent && $parent['access'] && empty($parent['hidden']) && !empty($parent['title'])) {
          $set = TRUE;
          // don't include current page in breadcrumb path as that is done prior to actually setting the final breadcrumb path
          // override title using link_title; sets active title in breadcrumb path correctly but doesn't seem to affect page title
          if ($parent['link_path'] == current_path() || $parent['link_path'] == request_path() || $parent['link_path'] == drupal_get_path_alias()) {
            $parent_link_title = $parent['link_title'];
            drupal_set_title($parent_link_title);
            continue;
          }
          $breadcrumb[] = l($parent['title'], $parent['href']);
        }
      }
      // Only set the breadcrumb if one or more links were added to the
      // trail. If not, continue iterating through possible menu links.
      if ($set) {
        // add current page to path before setting breadcrumb
        $breadcrumb[] = (isset($parent_link_title)) ? t($parent_link_title) : t(drupal_get_title());
        drupal_set_breadcrumb($breadcrumb);
        break;
      }
    }
  }
  /**
   * Return the title to be used for the current menu item.
   */
  function get_link_title($item) {
    return module_exists('i18n_menu') ? _i18n_menu_link_title($item) : $item['title'];
  }
}
