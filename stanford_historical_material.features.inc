<?php
/**
 * @file
 * stanford_historical_material.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_historical_material_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function stanford_historical_material_node_info() {
  $items = array(
    'stanford_document' => array(
      'name' => t('Historical Material'),
      'base' => 'node_content',
      'description' => t('Includes papers, lesson activities, featured documents, audio, video, and quotes.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
