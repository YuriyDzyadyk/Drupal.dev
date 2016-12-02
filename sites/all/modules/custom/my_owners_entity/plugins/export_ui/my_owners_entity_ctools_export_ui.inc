<?php
$plugin = array(
  'schema' => 'my_owners',  // As defined in hook_schema().
  'access' => 'administer my_owners_entity',  // Define a permission users must have to access these pages.

  // Define the menu item.
  'menu' => array(
    'menu item' => 'my_owners_entity',
    'menu title' => 'Plagin for my owners',
    'menu description' => 'Administer my owners presets.',
  ),

  // Define user interface texts.
  'title singular' => t('preset'),
  'title plural' => t('presets'),
  'title singular proper' => t('My owners preset'),
  'title plural proper' => t('My owners presets'),

  // Define the names of the functions that provide the add/edit forms.
//  'form' => array(
//  'settings' => 'my_owners_entity_ctools_export_ui_form',
  // 'submit' and 'validate' are also valid callbacks.
 // ),
);

/**
 * Define the preset add/edit form.
 */
//function my_owners_entity_ctools_export_ui_form(&$form, &$form_state) {
//  $preset = $form_state['item'];
//
//  // Add Mymodule's configuration interface.
//  $form['mydata'] = array(
//    '#type' => 'textfield',
//    '#title' => t('Mymodule configuration'),
//    '#description' => t('This is just the simplest possible example of a configuration interface.'),
//    '#default_value' => $preset->mydata,
//    '#required' => true,
//  );
//
//}

?>

