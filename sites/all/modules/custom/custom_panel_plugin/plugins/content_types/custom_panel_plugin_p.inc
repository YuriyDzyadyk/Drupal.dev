<?php
$plugin = array(
  'single' => TRUE,
  'title' => t('Add panel page'),
  'description' => t('Add it'),
  'category' => t('Add the Panes!'),
  'edit form' => 'custom_panel_plugin_edit_form',
  'render callback' => 'custom_panel_plugin_render',

  'admin info' => 'custom_panel_plugin_admin_info', //Provide information about your pane to give some context in the ui
  'defaults' => array( //Give defaults for common options
    'name' => 'rootid',
  ),
);

/**
 * Make sure not to overwrite the $form variable, but to add to it.
 * ctools will put in a submit button and the title override field.
 * $form_state['conf'] will be auto-populated based on previously
 * saved values.
 */
function custom_panel_plugin_edit_form($form, &$form_state) {
  $form['name'] = array(
    '#type' => 'textfield',
    '#title' => t('What is your name?'),
    '#default_value' => $form_state['conf']['name'],
  );
  return $form;
}

/**
 * Handle the submitted data. $form_state['conf'] is automatically handled
 * by ctools. It will save the data and provide it to the correct pane.
 */
function custom_panel_plugin_edit_form_submit(&$form, &$form_state) {
  if(isset($form_state['values']['name'])) {
    $form_state['conf']['name'] = $form_state['values']['name'];
  }
}

/**
 * Renders the pane content, the $conf variable corresponds to the
 * $form_state['conf'] from the submit handler.
 */
function custom_panel_plugin_render($subtype, $conf, $args, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass();
    $block->title = 'Hi, name is:';
    $block->content = $conf['name'];
    return $block;
  }
}

/**
 * Provide some context for the end user so they can tell the difference between
 * two panes of the same type.
 */
function custom_panel_plugin_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass();
    $block->title = $conf['name'];
    $block->content = t("That's all I have to say about that.");
    return $block;
  }
}
