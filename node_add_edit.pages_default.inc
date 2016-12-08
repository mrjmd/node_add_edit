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
  $pane->pid = 'new-b126479a-f3d0-435e-97bf-b297514f487c';
  $pane->panel = 'middle';
  $pane->type = 'node_form_author';
  $pane->subtype = 'node_form_author';
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
  $pane->uuid = 'b126479a-f3d0-435e-97bf-b297514f487c';
  $display->content['new-b126479a-f3d0-435e-97bf-b297514f487c'] = $pane;
  $display->panels['middle'][0] = 'new-b126479a-f3d0-435e-97bf-b297514f487c';
  $pane = new stdClass();
  $pane->pid = 'new-3bba94d1-71c4-4520-b5d9-a85b816ef8ef';
  $pane->panel = 'middle';
  $pane->type = 'node_form_publishing';
  $pane->subtype = 'node_form_publishing';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3bba94d1-71c4-4520-b5d9-a85b816ef8ef';
  $display->content['new-3bba94d1-71c4-4520-b5d9-a85b816ef8ef'] = $pane;
  $display->panels['middle'][1] = 'new-3bba94d1-71c4-4520-b5d9-a85b816ef8ef';
  $pane = new stdClass();
  $pane->pid = 'new-6ca1457a-5622-4a10-8398-7f22d5cb48a7';
  $pane->panel = 'middle';
  $pane->type = 'node_form_buttons';
  $pane->subtype = 'node_form_buttons';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '6ca1457a-5622-4a10-8398-7f22d5cb48a7';
  $display->content['new-6ca1457a-5622-4a10-8398-7f22d5cb48a7'] = $pane;
  $display->panels['middle'][2] = 'new-6ca1457a-5622-4a10-8398-7f22d5cb48a7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b126479a-f3d0-435e-97bf-b297514f487c';
  $handler->conf['display'] = $display;
  $export['node_edit__panel_context_24fbe024-3dc0-4381-9122-53103c53474d'] = $handler;

  return $export;
}
