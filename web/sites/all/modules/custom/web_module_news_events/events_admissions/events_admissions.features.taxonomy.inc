<?php
/**
 * @file
 * events_admissions.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function events_admissions_taxonomy_default_vocabularies() {
  return array(
    'events_vocabulary' => array(
      'name' => 'Events Vocabulary',
      'machine_name' => 'events_vocabulary',
      'description' => 'Tags for describing events',
      'hierarchy' => 0,
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
