<?php
/**
 * @file
 * custom_ctools_plugin.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function custom_ctools_plugin_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
