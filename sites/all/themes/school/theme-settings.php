<?php


/**
 * Function for changing "school theme"_system settings (here we add form for text entering).
 */
function school_form_system_theme_settings_alter(&$form, $form_state) {
  $form['school_text'] = array(
    '#type'          => 'textfield',
    '#title'         => t('Footer text'),
    '#default_value' => theme_get_setting('school_text'),
    '#description'   => t("Place this text in the widget spot on your site."),
  );
}
