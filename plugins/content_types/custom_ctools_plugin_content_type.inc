<?php


/**
 * @file
 * CTools content type that takes advantage of context.
 *
 *
 */

$plugin = array(
  'title'            => t('Custom Test content type'),
  'content_types'    => 'custom_ctools_plugin_content_type',
  'single'           => true,
  'render callback'  => 'custom_ctools_plugin_content_type_render',
  'description'      => t('Content type - works with a custom_ctools_plugin context.'),
  'required context' => new ctools_context_required(t('Custom Test Context'), 'custom_ctools_plugincontext'),
  'admin title'      => 'custom_ctools_plugin_content_type_admin_title',
  'admin info'       => 'custom_ctools_plugin_content_type_admin_info',
  'category'         => array(t('Custom Test'), -9),
);

function custom_ctools_plugin_content_type_admin_title($subtype, $conf, $context = null)
{
  $output = t('Custom Test Context');

  return $output;
}

/**
 * Callback to provide administrative info (the preview in panels when building
 * a panel).
 *
 * In this case we'll render the content with a dummy argument and
 * a dummy context.
 */
function custom_ctools_plugin_content_type_admin_info($subtype, $conf, $context = null)
{
  $context = new stdClass();
  $context->data = new stdClass();
  $context->data->description = t("no real context");
  $block = custom_ctools_plugin_content_type_render($subtype, $conf, array(), $context);

  return $block;
}

/**
 * Run-time rendering of the body of the block (content type)
 *
 * @param $subtype
 * @param $conf
 *   Configuration as done at admin time
 * @param $args
 * @param $context
 *   Context - in this case we don't have any
 *
 * @return
 *   An object with at least title and content members
 */
function custom_ctools_plugin_content_type_render($subtype, $conf, $args, $context)
{
  $data = (object) $context->data;
  $block = new stdClass();
  $block->title = "Custom Test Content";
  $block->content = ((isset($data->value)) && ($data->value)) ? t('TRUE') : t('FALSE');
  return $block;
}