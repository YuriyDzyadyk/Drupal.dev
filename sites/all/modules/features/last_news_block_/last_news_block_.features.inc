<?php
/**
 * @file
 * last_news_block_.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function last_news_block__ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function last_news_block__views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
