<?php
/**
 * @file
 * uphere_start.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function uphere_start_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
