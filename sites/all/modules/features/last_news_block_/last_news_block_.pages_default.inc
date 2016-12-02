<?php
/**
 * @file
 * last_news_block_.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function last_news_block__default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'my_panel_page';
  $page->task = 'page';
  $page->admin_title = 'My Panel Page';
  $page->admin_description = 'It is my Panel Page';
  $page->path = 'panel-page';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Panel Page',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_my_panel_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'my_panel_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 1,
          1 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '72.04739704739706',
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'column',
        'width' => '27.952602952602952',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_region',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_region' => array(
        'type' => 'region',
        'title' => 'Left region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => array(
        'corner_location' => 'pane',
      ),
      'left_below' => array(
        'corner_location' => 'panel',
      ),
      'right_below' => array(
        'corner_location' => 'pane',
      ),
      'bottom' => NULL,
      'center' => NULL,
      'left_region' => NULL,
    ),
    'left_below' => array(
      'style' => 'rounded_corners',
    ),
    'right_below' => array(
      'style' => 'rounded_corners',
    ),
    'middle' => array(
      'style' => 'rounded_corners',
    ),
    'left_region' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '60edc8aa-01b6-4d6b-9fbf-aa9334a5e61d';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_my_panel_page__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-8ff43b75-fbb0-4d42-9de2-54caf572367c';
  $pane->panel = 'left_region';
  $pane->type = 'block';
  $pane->subtype = 'views-lastnews-block_last_news';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8ff43b75-fbb0-4d42-9de2-54caf572367c';
  $display->content['new-8ff43b75-fbb0-4d42-9de2-54caf572367c'] = $pane;
  $display->panels['left_region'][0] = 'new-8ff43b75-fbb0-4d42-9de2-54caf572367c';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_my_panel_page__panel_context_69981ea2-3189-4626-bfab-a07a2d1d18a9';
  $handler->task = 'page';
  $handler->subtask = 'my_panel_page';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Test panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'panel-page/test',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Test';
  $display->uuid = '987093ab-b6ee-4ae6-835b-087107d440dd';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_my_panel_page__panel_context_69981ea2-3189-4626-bfab-a07a2d1d18a9';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-abd2801b-54e0-4d58-8d80-0710743416da';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'search-form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'abd2801b-54e0-4d58-8d80-0710743416da';
  $display->content['new-abd2801b-54e0-4d58-8d80-0710743416da'] = $pane;
  $display->panels['center'][0] = 'new-abd2801b-54e0-4d58-8d80-0710743416da';
  $pane = new stdClass();
  $pane->pid = 'new-66e04598-2bc1-4b25-85ef-992f04400a18';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'system-powered-by';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '66e04598-2bc1-4b25-85ef-992f04400a18';
  $display->content['new-66e04598-2bc1-4b25-85ef-992f04400a18'] = $pane;
  $display->panels['center'][1] = 'new-66e04598-2bc1-4b25-85ef-992f04400a18';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-abd2801b-54e0-4d58-8d80-0710743416da';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['my_panel_page'] = $page;

  return $pages;

}
