<?php
/**
 * @file
 * hevenly_id.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hevenly_id_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hevenly_id_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function hevenly_id_node_info() {
  $items = array(
    'dongle' => array(
      'name' => t('dongle'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'store' => array(
      'name' => t('store'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Store name'),
      'help' => '',
    ),
    'vehicle' => array(
      'name' => t('vehicle'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
