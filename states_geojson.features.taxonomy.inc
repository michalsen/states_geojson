<?php
/**
 * @file
 * states_geojson.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function states_geojson_taxonomy_default_vocabularies() {
  return array(
    'states' => array(
      'name' => 'States',
      'machine_name' => 'states',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
