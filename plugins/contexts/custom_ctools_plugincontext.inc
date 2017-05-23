<?php
/**
 * @file
 * Custom context type plugin.
 *
 */
$plugin = array(
  'title' => t("Custom Test Context"),
  'description' => t('A Custom Test context.'),
  'context' => 'custom_ctools_plugin_context_create',
  'context name' => 'custom_ctools_plugincontext',
  'keyword' => 'custom_ctools_plugincontext',
);

/**
 * Create a context, either from manual configuration or from an argument on the URL.
 *
 * @param $empty
 *   If true, just return an empty context.
 * @param $data
 *   If from settings form, an array as from a form. If from argument, a string.
 * @param $conf
 *   TRUE if the $data is coming from admin configuration, FALSE if it's from a URL arg.
 *
 * @return
 *   a Context object/
 */
function custom_ctools_plugin_context_create($empty, $data = null, $conf = false) {
  $context = new ctools_context('custom_ctools_plugincontext');
  $context->plugin = 'custom_ctools_plugincontext';

  if ($empty) {
    return $context;
  }

  $context->data = new stdClass();
  $context->data->value = (time() % 2);
  $context->title = t("Custom Test Context");
  return $context;

}