<?php

/**
 * Function for saving function value in $variable before it displaying in the page .
 */
function school_preprocess_page(&$variables) {
  $variables ['footer_text'] = theme_get_setting('school_text');
}

/**
 * Function for choosing templates.
 */
function school_preprocess_node(&$variables) {
  // dpm($variables);
  $node = $variables['node'];
  // Right variant to get value from array
  // (not through the language) -- $node->field_type['und'][0]['value']
  // after we should use this variable like that -- $get_field_type[0]['value']
  $get_field_type = field_get_items('node', $node, 'field_type');
  // dpm($get_field_type);
  if ($node->type == 'news') {
    if (isset($get_field_type[0]['value']) && $get_field_type[0]['value'] == 'media') {
      $variables['theme_hook_suggestions'][] = 'node__' . $node->type . '__media';
    }
    else {
      $variables['theme_hook_suggestions'][] = 'node__' . $node->type . '__press';
    }

  }
}

