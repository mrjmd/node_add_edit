<?php

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'single' => TRUE,
  'icon' => 'icon_node_form.png',
  'title' => t('Node form add/edit'),
  'description' => t('Custom form for node add/edit.'),
  'required context' => new ctools_context_required(t('Form'), 'node_form'),
  'category' => t('Form'),
);

/**
 * Our content type render function, displays our form fields.
 */
function node_add_edit_node_add_edit_form_content_type_render($subtype, $conf, $panel_args, &$context) {
  $block = new stdClass();
  $block->module = t('node_form');
  $block->delta = 'node-add-edit';

  // If we have our contextual node form, add our fields.
  if (isset($context->form)) {
    // Add author field.
    if (isset($context->form['author']) && isset($context->form['author']['name'])) {
      $block->content['author'] = $context->form['author']['name'];
      // Set access to false on the original rather than removing so that
      // vertical tabs doesn't clone it.
      $context->form['author']['name']['#access'] = FALSE;
    }
    // Add last updated field.
    if (isset($context->form['field_updated'])) {
      $block->content['field_updated'] = $context->form['field_updated'];
      $context->form['field_updated']['#access'] = FALSE;
    }
    // Add buttons and other necessaries for submission.
    foreach (array('actions', 'form_token', 'form_build_id', 'form_id') as $element) {
      $block->content[$element] = isset($context->form[$element]) ? $context->form[$element] : NULL;
      unset($context->form[$element]);
    }
    // We only want delete and submit buttons, remove preview.
    if (isset($block->content['actions']['preview'])) {
      unset($block->content['actions']['preview']);
    }
  }
  else {
    $block->content = t('Update date.');
  }
  return $block;
}

/**
 * Our admin title for the content type.
 */
function node_add_edit_node_add_edit_form_content_type_admin_title($subtype, $conf, $context) {
  return t('"@s" node form add/edit fields', array('@s' => $context->identifier));
}

/**
 * The instance config form for our content type, blank for now.
 */
function node_add_edit_node_add_edit_form_content_type_edit_form($form, &$form_state) {
  // provide a blank form so we have a place to have context settings.
  return $form;
}
