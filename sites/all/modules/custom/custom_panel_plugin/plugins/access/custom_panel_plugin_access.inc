<?php
/**
 * Created by PhpStorm.
 * User: office
 * Date: 22.11.16
 * Time: 16:35
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  // Plugin user-friendly name.
  'title' => t('Eldership rule'),
  // Plugin description.
  'description' => t('Controls access depends (Will hide content plugin for authenticated users)'),
  // Without required context plugin will now be shown in Panels UI.
  'required context' => array(new ctools_context_required(t('User'), 'user')),
  // Function which will allow or restrict access.
  'callback' => 'custom_panel_plugin_access_access',
  // Plugin settings form.
  'settings form' => 'custom_panel_plugin_access_settings_form',
  // Provides a summary descriptions depends on settings selected.
  'summary' => 'custom_panel_plugin_access_summary',
);

/**
 * Settings form for our access plugin.
 */
function custom_panel_plugin_access_settings_form(&$form, &$form_state, $conf) {
  $form['settings']['eldership'] = array(
    '#type' => 'checkbox',
    '#title' => t('Eldership'),
    '#description' => t('Will hide your content plugin for authenticated users'),
    '#default_value' => !empty($conf['eldership']) ? TRUE : FALSE,
  );

  return $form;
}

/**
 * Provide a summary description based on selected settings.
 */
function custom_panel_plugin_access_summary($conf, $context) {
  return   (isset($conf['eldership']) && $conf['eldership']==1) ?
    t('Content hided for authenticated users') :
    t('Content shown for authenticated users');
}

/**
 * Check for access.
 */
function custom_panel_plugin_access_access($conf, $context) {

  global $user;
  if (isset($conf['eldership']) && $conf['eldership']==1){
    return (isset($user->roles[3])) ?  TRUE :  FALSE ;
  }

  return TRUE;

}