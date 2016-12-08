<?php
/**
 * @file
 * node_add_edit.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function node_add_edit_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit__panel_context_24fbe024-3dc0-4381-9122-53103c53474d';
  $handler->task = 'node_edit';
  $handler->subtask = '';
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
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'bb2d58cd-3e45-4ede-a7cd-978576bd8a04';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_edit__panel_context_24fbe024-3dc0-4381-9122-53103c53474d';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2de68f47-055e-4676-b235-7c8297dc4980';
  $pane->panel = 'middle';
  $pane->type = 'node_add_edit_form';
  $pane->subtype = 'node_add_edit_form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2de68f47-055e-4676-b235-7c8297dc4980';
  $display->content['new-2de68f47-055e-4676-b235-7c8297dc4980'] = $pane;
  $display->panels['middle'][0] = 'new-2de68f47-055e-4676-b235-7c8297dc4980';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit__panel_context_24fbe024-3dc0-4381-9122-53103c53474d'] = $handler;

  return $export;
}
