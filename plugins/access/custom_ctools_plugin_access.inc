<?php

/**
 * @file
 * Plugin to provide access control for test context.
 */

$plugin = array(
  'title'       => t("Custom Test: UNIXTIME is ODD"),
  'description' => t('Control access by unixtime is odd.'),
  'callback'    => 'custom_ctools_plugin_unixtime_ctools_access_check',
  'required context' => new ctools_context_required(t('Custom Test Context'), 'custom_ctools_plugincontext'),
);

/**
 * Check for access.
 */
function custom_ctools_plugin_unixtime_ctools_access_check($conf, $context)
{
  if (empty($context) || empty($context->data) || !isset($context->data->value)) {
    return false;
  }
  return (bool) $context->data->value;
}

