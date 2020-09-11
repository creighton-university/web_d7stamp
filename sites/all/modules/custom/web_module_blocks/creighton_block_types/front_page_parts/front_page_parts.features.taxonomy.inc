<?php
/**
 * @file
 * front_page_parts.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function front_page_parts_taxonomy_default_vocabularies() {
  return array(
    'admissions_site_tags' => array(
      'name' => 'Admissions site tags',
      'machine_name' => 'admissions_site_tags',
      'description' => 'These are the terms to describe the Admissions site content',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
