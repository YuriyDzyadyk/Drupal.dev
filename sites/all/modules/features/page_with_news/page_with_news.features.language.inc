<?php
/**
 * @file
 * page_with_news.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function page_with_news_locale_default_languages() {
  $languages = array();

  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => '',
    'weight' => -10,
  );
  // Exported language: uk.
  $languages['uk'] = array(
    'language' => 'uk',
    'name' => 'Ukrainian',
    'native' => 'Українська',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 3,
    'formula' => '(((($n%10)==1)&&(($n%100)!=11))?(0):((((($n%10)>=2)&&(($n%10)<=4))&&((($n%100)<10)||(($n%100)>=20)))?(1):2))',
    'domain' => '',
    'prefix' => 'uk',
    'weight' => -9,
  );
  return $languages;
}
