<?php
/**
 * @file
 * custom_ctools_plugin.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function custom_ctools_plugin_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'administrative_title2';
  $page->task = 'page';
  $page->admin_title = 'Administrative title';
  $page->admin_description = '';
  $page->path = 'pagetest';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_administrative_title2__panel';
  $handler->task = 'page';
  $handler->subtask = 'administrative_title2';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Custom Test Context',
        'keyword' => 'custom_ctools_plugincontext',
        'name' => 'custom_ctools_plugincontext',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'custom_ctools_plugin_access',
          'settings' => NULL,
          'context' => 'context_custom_ctools_plugincontext_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd1a8f637-a420-4996-93b8-b77e34286193';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_administrative_title2__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8ba47b1b-6609-4d64-88cb-a3a9a8c4af5d';
  $pane->panel = 'center';
  $pane->type = 'custom_ctools_plugin_content_type';
  $pane->subtype = 'custom_ctools_plugin_content_type';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8ba47b1b-6609-4d64-88cb-a3a9a8c4af5d';
  $display->content['new-8ba47b1b-6609-4d64-88cb-a3a9a8c4af5d'] = $pane;
  $display->panels['center'][0] = 'new-8ba47b1b-6609-4d64-88cb-a3a9a8c4af5d';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;

  return $page;
}
