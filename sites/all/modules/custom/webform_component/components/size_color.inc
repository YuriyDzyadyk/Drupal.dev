<?php

/**
 * Implements _webform_defaults_component().
 */

function _webform_defaults_size_color() {

  $size_color = array(
    'name' => '',
    'form_key' => NULL,
    'pid' => 0,
    'weight' => 0,
    'value' => '',
    'mandatory' => 0,
    'extra' => array(
      'private' => FALSE,
      'options_source' => '',
      'color' => '',
      'size' => '',
//      'disabled' => 0,
//      'unique' => 0,
      'attributes' => array(),
    ),
  );

  return $size_color;
}

/**
 * Implements _webform_theme_component().
 */
function _webform_defaults_theme_size_color() {

  return array(
    'webform_display_select' => array(
      'render element' => 'element',
      'file' => 'components/size_color.inc',
    ),
  );

}

/**
 * Implements _webform_edit_component().
 */
function _webform_edit_size_color($component) {
  dpm($component) ;
  $form = array();
  $form['extra']['color'] = array(
    '#type' => 'select',
    '#title' => t('Color'),
    '#options' =>  webform_colors(),
    //'#default_value' => $component['extra']['color'],
    '#size' => 60,
    '#required' => TRUE,
//    '#maxlength' => 255,
//    '#weight' => 1.1,
    '#parents' => array('extra', 'color'),
    '#description' => t('Choose color'),
  );
  $form['extra']['size'] = array(
    '#type' => 'select',
    '#title' => t('Size'),
    '#options' =>  webform_size(),
 //   '#default_value' => $component['extra']['size'],
    '#size' => 60,
    '#required' => TRUE,
//    '#maxlength' => 255,
//    '#weight' => 1.2,
    '#parents' => array('extra', 'size'),
    '#description' => t('Choose size'),
  );
}


///**
//* Load Webform select option info from 3rd party modules.
// */
//function _webform_select_options_info() {
//    $items = array();
//
//    $items['colors'] = array(
//      'title' => t('Colors'),
//      'options callback' => 'webform_colors',
//    );
//
//    $items['size'] = array(
//      'title' => t('Size'),
//      'options callback' => 'webform_size',
//    );
//
//   return $items;
//
//  }

  /**
   * Option list containing the days of the week.
   */
function webform_colors($component, $flat, $arguments) {
    $colors = array(
      'red' => t('Red'),
      'blue' => t('Blue'),
      'orange' => t('Orange'),
    );

    return $colors;
}

function webform_size($component, $flat, $arguments) {
  $sizes = array(
    'm' => t('M'),
    'l' => t('L'),
    's' => t('S'),
  );


  return $sizes;
}