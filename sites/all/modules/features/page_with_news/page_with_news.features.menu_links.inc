<?php
/**
 * @file
 * page_with_news.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function page_with_news_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_news-page:news_page.
  $menu_links['main-menu_news-page:news_page'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'news_page',
    'router_path' => 'news_page',
    'link_title' => 'News page',
    'options' => array(
      'identifier' => 'main-menu_news-page:news_page',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('News page');

  return $menu_links;
}
