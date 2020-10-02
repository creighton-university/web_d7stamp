<?php
/**
 * @file
 * redirect_manager_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function redirect_manager_feature_taxonomy_default_vocabularies() {
  return array(
    'redirect_manager_host' => array(
      'name' => 'Redirect Manager Host',
      'machine_name' => 'redirect_manager_host',
      'description' => '',
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
