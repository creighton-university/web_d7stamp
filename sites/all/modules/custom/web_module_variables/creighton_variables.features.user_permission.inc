<?php
/**
 * @file
 * creighton_variables.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function creighton_variables_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in academic_unit'.
  $permissions['add terms in academic_unit'] = array(
    'name' => 'add terms in academic_unit',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in program'.
  $permissions['add terms in program'] = array(
    'name' => 'add terms in program',
    'roles' => array(),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer feeds_tamper'.
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'administer inline form errors'.
  $permissions['administer inline form errors'] = array(
    'name' => 'administer inline form errors',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ife',
  );

  // Exported permission: 'administer mailsystem'.
  $permissions['administer mailsystem'] = array(
    'name' => 'administer mailsystem',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mailsystem',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'administer total control'.
  $permissions['administer total control'] = array(
    'name' => 'administer total control',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'total_control',
  );

  // Exported permission: 'administer xmlsitemap'.
  $permissions['administer xmlsitemap'] = array(
    'name' => 'administer xmlsitemap',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'xmlsitemap',
  );

  // Exported permission: 'delete terms in program'.
  $permissions['delete terms in program'] = array(
    'name' => 'delete terms in program',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit meta tag: abstract'.
  $permissions['edit meta tag: abstract'] = array(
    'name' => 'edit meta tag: abstract',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: author'.
  $permissions['edit meta tag: author'] = array(
    'name' => 'edit meta tag: author',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: canonical'.
  $permissions['edit meta tag: canonical'] = array(
    'name' => 'edit meta tag: canonical',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: content-language'.
  $permissions['edit meta tag: content-language'] = array(
    'name' => 'edit meta tag: content-language',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: dcterms.contributor'.
  $permissions['edit meta tag: dcterms.contributor'] = array(
    'name' => 'edit meta tag: dcterms.contributor',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: dcterms.coverage'.
  $permissions['edit meta tag: dcterms.coverage'] = array(
    'name' => 'edit meta tag: dcterms.coverage',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: dcterms.creator'.
  $permissions['edit meta tag: dcterms.creator'] = array(
    'name' => 'edit meta tag: dcterms.creator',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: dcterms.date'.
  $permissions['edit meta tag: dcterms.date'] = array(
    'name' => 'edit meta tag: dcterms.date',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: dcterms.description'.
  $permissions['edit meta tag: dcterms.description'] = array(
    'name' => 'edit meta tag: dcterms.description',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: dcterms.format'.
  $permissions['edit meta tag: dcterms.format'] = array(
    'name' => 'edit meta tag: dcterms.format',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: dcterms.identifier'.
  $permissions['edit meta tag: dcterms.identifier'] = array(
    'name' => 'edit meta tag: dcterms.identifier',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: dcterms.language'.
  $permissions['edit meta tag: dcterms.language'] = array(
    'name' => 'edit meta tag: dcterms.language',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: dcterms.modified'.
  $permissions['edit meta tag: dcterms.modified'] = array(
    'name' => 'edit meta tag: dcterms.modified',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: dcterms.publisher'.
  $permissions['edit meta tag: dcterms.publisher'] = array(
    'name' => 'edit meta tag: dcterms.publisher',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: dcterms.relation'.
  $permissions['edit meta tag: dcterms.relation'] = array(
    'name' => 'edit meta tag: dcterms.relation',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: dcterms.rights'.
  $permissions['edit meta tag: dcterms.rights'] = array(
    'name' => 'edit meta tag: dcterms.rights',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: dcterms.source'.
  $permissions['edit meta tag: dcterms.source'] = array(
    'name' => 'edit meta tag: dcterms.source',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: dcterms.subject'.
  $permissions['edit meta tag: dcterms.subject'] = array(
    'name' => 'edit meta tag: dcterms.subject',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: dcterms.title'.
  $permissions['edit meta tag: dcterms.title'] = array(
    'name' => 'edit meta tag: dcterms.title',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: dcterms.type'.
  $permissions['edit meta tag: dcterms.type'] = array(
    'name' => 'edit meta tag: dcterms.type',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: description'.
  $permissions['edit meta tag: description'] = array(
    'name' => 'edit meta tag: description',
    'roles' => array(
      'advanced author' => 'advanced author',
      'author' => 'author',
      'manager' => 'manager',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: generator'.
  $permissions['edit meta tag: generator'] = array(
    'name' => 'edit meta tag: generator',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: image_src'.
  $permissions['edit meta tag: image_src'] = array(
    'name' => 'edit meta tag: image_src',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: keywords'.
  $permissions['edit meta tag: keywords'] = array(
    'name' => 'edit meta tag: keywords',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: news_keywords'.
  $permissions['edit meta tag: news_keywords'] = array(
    'name' => 'edit meta tag: news_keywords',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: original-source'.
  $permissions['edit meta tag: original-source'] = array(
    'name' => 'edit meta tag: original-source',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: publisher'.
  $permissions['edit meta tag: publisher'] = array(
    'name' => 'edit meta tag: publisher',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: revisit-after'.
  $permissions['edit meta tag: revisit-after'] = array(
    'name' => 'edit meta tag: revisit-after',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: rights'.
  $permissions['edit meta tag: rights'] = array(
    'name' => 'edit meta tag: rights',
    'roles' => array(),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: robots'.
  $permissions['edit meta tag: robots'] = array(
    'name' => 'edit meta tag: robots',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: shortlink'.
  $permissions['edit meta tag: shortlink'] = array(
    'name' => 'edit meta tag: shortlink',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: standout'.
  $permissions['edit meta tag: standout'] = array(
    'name' => 'edit meta tag: standout',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tag: title'.
  $permissions['edit meta tag: title'] = array(
    'name' => 'edit meta tag: title',
    'roles' => array(
      'advanced author' => 'advanced author',
      'author' => 'author',
      'manager' => 'manager',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'author' => 'author',
      'manager' => 'manager',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit mimemail user settings'.
  $permissions['edit mimemail user settings'] = array(
    'name' => 'edit mimemail user settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: 'edit terms in program'.
  $permissions['edit terms in program'] = array(
    'name' => 'edit terms in program',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'have total control'.
  $permissions['have total control'] = array(
    'name' => 'have total control',
    'roles' => array(
      'administrator' => 'administrator',
      'advanced author' => 'advanced author',
      'author' => 'author',
      'manager' => 'manager',
    ),
    'module' => 'total_control',
  );

  // Exported permission: 'publish button publish any content types'.
  $permissions['publish button publish any content types'] = array(
    'name' => 'publish button publish any content types',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'publish_button',
  );

  // Exported permission: 'publish button unpublish any content types'.
  $permissions['publish button unpublish any content types'] = array(
    'name' => 'publish button unpublish any content types',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'publish_button',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'send arbitrary files'.
  $permissions['send arbitrary files'] = array(
    'name' => 'send arbitrary files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mimemail',
  );

  return $permissions;
}
