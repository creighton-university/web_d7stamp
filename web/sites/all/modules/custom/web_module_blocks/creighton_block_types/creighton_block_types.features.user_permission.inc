<?php
/**
 * @file
 * creighton_block_types.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function creighton_block_types_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create any contact_block bean'.
  $permissions['create any contact_block bean'] = array(
    'name' => 'create any contact_block bean',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any copy_block bean'.
  $permissions['create any copy_block bean'] = array(
    'name' => 'create any copy_block bean',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any featured_content_2 bean'.
  $permissions['create any featured_content_2 bean'] = array(
    'name' => 'create any featured_content_2 bean',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any featured_links bean'.
  $permissions['create any featured_links bean'] = array(
    'name' => 'create any featured_links bean',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any featured_related_content bean'.
  $permissions['create any featured_related_content bean'] = array(
    'name' => 'create any featured_related_content bean',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any footer_badge bean'.
  $permissions['create any footer_badge bean'] = array(
    'name' => 'create any footer_badge bean',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any front_page_audience bean'.
  $permissions['create any front_page_audience bean'] = array(
    'name' => 'create any front_page_audience bean',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any front_page_featured_content bean'.
  $permissions['create any front_page_featured_content bean'] = array(
    'name' => 'create any front_page_featured_content bean',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any front_page_slider bean'.
  $permissions['create any front_page_slider bean'] = array(
    'name' => 'create any front_page_slider bean',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any header_background_image bean'.
  $permissions['create any header_background_image bean'] = array(
    'name' => 'create any header_background_image bean',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any inline_slider bean'.
  $permissions['create any inline_slider bean'] = array(
    'name' => 'create any inline_slider bean',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any profile bean'.
  $permissions['create any profile bean'] = array(
    'name' => 'create any profile bean',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any promo_box bean'.
  $permissions['create any promo_box bean'] = array(
    'name' => 'create any promo_box bean',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any quote bean'.
  $permissions['create any quote bean'] = array(
    'name' => 'create any quote bean',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any related_links bean'.
  $permissions['create any related_links bean'] = array(
    'name' => 'create any related_links bean',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any tabbed_accordion bean'.
  $permissions['create any tabbed_accordion bean'] = array(
    'name' => 'create any tabbed_accordion bean',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'author' => 'author',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any contact_block bean'.
  $permissions['delete any contact_block bean'] = array(
    'name' => 'delete any contact_block bean',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any copy_block bean'.
  $permissions['delete any copy_block bean'] = array(
    'name' => 'delete any copy_block bean',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any featured_content_2 bean'.
  $permissions['delete any featured_content_2 bean'] = array(
    'name' => 'delete any featured_content_2 bean',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any featured_links bean'.
  $permissions['delete any featured_links bean'] = array(
    'name' => 'delete any featured_links bean',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any featured_related_content bean'.
  $permissions['delete any featured_related_content bean'] = array(
    'name' => 'delete any featured_related_content bean',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any footer_badge bean'.
  $permissions['delete any footer_badge bean'] = array(
    'name' => 'delete any footer_badge bean',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any front_page_audience bean'.
  $permissions['delete any front_page_audience bean'] = array(
    'name' => 'delete any front_page_audience bean',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any front_page_featured_content bean'.
  $permissions['delete any front_page_featured_content bean'] = array(
    'name' => 'delete any front_page_featured_content bean',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any front_page_slider bean'.
  $permissions['delete any front_page_slider bean'] = array(
    'name' => 'delete any front_page_slider bean',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any header_background_image bean'.
  $permissions['delete any header_background_image bean'] = array(
    'name' => 'delete any header_background_image bean',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any inline_slider bean'.
  $permissions['delete any inline_slider bean'] = array(
    'name' => 'delete any inline_slider bean',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any profile bean'.
  $permissions['delete any profile bean'] = array(
    'name' => 'delete any profile bean',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any promo_box bean'.
  $permissions['delete any promo_box bean'] = array(
    'name' => 'delete any promo_box bean',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any quote bean'.
  $permissions['delete any quote bean'] = array(
    'name' => 'delete any quote bean',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any related_links bean'.
  $permissions['delete any related_links bean'] = array(
    'name' => 'delete any related_links bean',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any tabbed_accordion bean'.
  $permissions['delete any tabbed_accordion bean'] = array(
    'name' => 'delete any tabbed_accordion bean',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any contact_block bean'.
  $permissions['edit any contact_block bean'] = array(
    'name' => 'edit any contact_block bean',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any copy_block bean'.
  $permissions['edit any copy_block bean'] = array(
    'name' => 'edit any copy_block bean',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any featured_content_2 bean'.
  $permissions['edit any featured_content_2 bean'] = array(
    'name' => 'edit any featured_content_2 bean',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any featured_links bean'.
  $permissions['edit any featured_links bean'] = array(
    'name' => 'edit any featured_links bean',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any featured_related_content bean'.
  $permissions['edit any featured_related_content bean'] = array(
    'name' => 'edit any featured_related_content bean',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any footer_badge bean'.
  $permissions['edit any footer_badge bean'] = array(
    'name' => 'edit any footer_badge bean',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any front_page_audience bean'.
  $permissions['edit any front_page_audience bean'] = array(
    'name' => 'edit any front_page_audience bean',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any front_page_featured_content bean'.
  $permissions['edit any front_page_featured_content bean'] = array(
    'name' => 'edit any front_page_featured_content bean',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any front_page_slider bean'.
  $permissions['edit any front_page_slider bean'] = array(
    'name' => 'edit any front_page_slider bean',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any header_background_image bean'.
  $permissions['edit any header_background_image bean'] = array(
    'name' => 'edit any header_background_image bean',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any inline_slider bean'.
  $permissions['edit any inline_slider bean'] = array(
    'name' => 'edit any inline_slider bean',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any profile bean'.
  $permissions['edit any profile bean'] = array(
    'name' => 'edit any profile bean',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any promo_box bean'.
  $permissions['edit any promo_box bean'] = array(
    'name' => 'edit any promo_box bean',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any quote bean'.
  $permissions['edit any quote bean'] = array(
    'name' => 'edit any quote bean',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any related_links bean'.
  $permissions['edit any related_links bean'] = array(
    'name' => 'edit any related_links bean',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any tabbed_accordion bean'.
  $permissions['edit any tabbed_accordion bean'] = array(
    'name' => 'edit any tabbed_accordion bean',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'author' => 'author',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'use text format slider_headline'.
  $permissions['use text format slider_headline'] = array(
    'name' => 'use text format slider_headline',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'manager' => 'manager',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view any contact_block bean'.
  $permissions['view any contact_block bean'] = array(
    'name' => 'view any contact_block bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any copy_block bean'.
  $permissions['view any copy_block bean'] = array(
    'name' => 'view any copy_block bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any featured_content_2 bean'.
  $permissions['view any featured_content_2 bean'] = array(
    'name' => 'view any featured_content_2 bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any featured_links bean'.
  $permissions['view any featured_links bean'] = array(
    'name' => 'view any featured_links bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any featured_related_content bean'.
  $permissions['view any featured_related_content bean'] = array(
    'name' => 'view any featured_related_content bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any footer_badge bean'.
  $permissions['view any footer_badge bean'] = array(
    'name' => 'view any footer_badge bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'manager' => 'manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any front_page_audience bean'.
  $permissions['view any front_page_audience bean'] = array(
    'name' => 'view any front_page_audience bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any front_page_featured_content bean'.
  $permissions['view any front_page_featured_content bean'] = array(
    'name' => 'view any front_page_featured_content bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any front_page_slider bean'.
  $permissions['view any front_page_slider bean'] = array(
    'name' => 'view any front_page_slider bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any header_background_image bean'.
  $permissions['view any header_background_image bean'] = array(
    'name' => 'view any header_background_image bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any inline_slider bean'.
  $permissions['view any inline_slider bean'] = array(
    'name' => 'view any inline_slider bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any profile bean'.
  $permissions['view any profile bean'] = array(
    'name' => 'view any profile bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any promo_box bean'.
  $permissions['view any promo_box bean'] = array(
    'name' => 'view any promo_box bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any quote bean'.
  $permissions['view any quote bean'] = array(
    'name' => 'view any quote bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any related_links bean'.
  $permissions['view any related_links bean'] = array(
    'name' => 'view any related_links bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any tabbed_accordion bean'.
  $permissions['view any tabbed_accordion bean'] = array(
    'name' => 'view any tabbed_accordion bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
