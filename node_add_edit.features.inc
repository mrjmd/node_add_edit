<?php
/**
 * @file
 * node_add_edit.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function node_add_edit_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
