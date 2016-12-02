<?php
/**
 * @file
 * page_with_news.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function page_with_news_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_d569bb83-0688-4d73-ad7a-750707766c5d';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'News',
    'no_blocks' => 0,
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
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'news' => 'news',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
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
          0 => 'main',
          1 => 2,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '54.99712458603871',
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_region',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '59.91462206556532',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'left_region' => array(
        'type' => 'region',
        'title' => 'Left region',
        'width' => '40.08537793443468',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom_region',
        ),
        'parent' => 'main',
        'class' => 'Bottom region',
        'hide_empty' => 0,
      ),
      'bottom_region' => array(
        'type' => 'region',
        'title' => 'Bottom region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'column',
        'width' => '45.0028754139613',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 3,
        ),
        'class' => 'Image',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'right_region',
        ),
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right_region' => array(
        'type' => 'region',
        'title' => 'Right region',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'center' => NULL,
      'left_region' => NULL,
      'bottom_region' => NULL,
      'right_region' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd69a03e4-6386-4608-a900-d8b25836874c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_d569bb83-0688-4d73-ad7a-750707766c5d';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-92876e6c-3499-4875-bc42-9afc6193a315';
  $pane->panel = 'bottom_region';
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
    'style' => 'rounded_corners',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '92876e6c-3499-4875-bc42-9afc6193a315';
  $display->content['new-92876e6c-3499-4875-bc42-9afc6193a315'] = $pane;
  $display->panels['bottom_region'][0] = 'new-92876e6c-3499-4875-bc42-9afc6193a315';
  $pane = new stdClass();
  $pane->pid = 'new-fb4b68c1-6db9-441a-a94b-27cb5349ae22';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = 'fb4b68c1-6db9-441a-a94b-27cb5349ae22';
  $display->content['new-fb4b68c1-6db9-441a-a94b-27cb5349ae22'] = $pane;
  $display->panels['center'][0] = 'new-fb4b68c1-6db9-441a-a94b-27cb5349ae22';
  $pane = new stdClass();
  $pane->pid = 'new-9ccc4685-118b-4dbb-b61d-29872cc9201c';
  $pane->panel = 'left_region';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_subtitle';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '9ccc4685-118b-4dbb-b61d-29872cc9201c';
  $display->content['new-9ccc4685-118b-4dbb-b61d-29872cc9201c'] = $pane;
  $display->panels['left_region'][0] = 'new-9ccc4685-118b-4dbb-b61d-29872cc9201c';
  $pane = new stdClass();
  $pane->pid = 'new-36d90037-9f7b-4d0b-bc28-6d33bf1eeb0c';
  $pane->panel = 'left_region';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:title_field';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '36d90037-9f7b-4d0b-bc28-6d33bf1eeb0c';
  $display->content['new-36d90037-9f7b-4d0b-bc28-6d33bf1eeb0c'] = $pane;
  $display->panels['left_region'][1] = 'new-36d90037-9f7b-4d0b-bc28-6d33bf1eeb0c';
  $pane = new stdClass();
  $pane->pid = 'new-db424977-3426-4b9d-8564-af6daa4a9a86';
  $pane->panel = 'left_region';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_categories';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'db424977-3426-4b9d-8564-af6daa4a9a86';
  $display->content['new-db424977-3426-4b9d-8564-af6daa4a9a86'] = $pane;
  $display->panels['left_region'][2] = 'new-db424977-3426-4b9d-8564-af6daa4a9a86';
  $pane = new stdClass();
  $pane->pid = 'new-1b8f3d9f-1e34-4b88-b483-0ef0bdde18e2';
  $pane->panel = 'left_region';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_type';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'list_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '1b8f3d9f-1e34-4b88-b483-0ef0bdde18e2';
  $display->content['new-1b8f3d9f-1e34-4b88-b483-0ef0bdde18e2'] = $pane;
  $display->panels['left_region'][3] = 'new-1b8f3d9f-1e34-4b88-b483-0ef0bdde18e2';
  $pane = new stdClass();
  $pane->pid = 'new-84840305-9b08-48cd-81a4-423cd327edcb';
  $pane->panel = 'right_region';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'medium',
      'image_link' => '',
    ),
    'context' => 'argument_entity_id:node_1',
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
  $pane->uuid = '84840305-9b08-48cd-81a4-423cd327edcb';
  $display->content['new-84840305-9b08-48cd-81a4-423cd327edcb'] = $pane;
  $display->panels['right_region'][0] = 'new-84840305-9b08-48cd-81a4-423cd327edcb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-36d90037-9f7b-4d0b-bc28-6d33bf1eeb0c';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_d569bb83-0688-4d73-ad7a-750707766c5d'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function page_with_news_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'page_with_news';
  $page->task = 'page';
  $page->admin_title = 'Page with news';
  $page->admin_description = 'news_page';
  $page->path = 'news_page';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'News page',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
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
  $handler->name = 'page_page_with_news__panel';
  $handler->task = 'page';
  $handler->subtask = 'page_with_news';
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
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
            ),
          ),
          'context' => 'logged-in-user',
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
  $display->title = '';
  $display->uuid = 'd9deaddf-c731-42f2-aeb2-dd29145219be';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_page_with_news__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b9ed8abf-e4fa-476d-86e8-5db0cda38daa';
  $pane->panel = 'center';
  $pane->type = 'views';
  $pane->subtype = 'last_10_articles';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '10',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page_last_10news',
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
  $pane->uuid = 'b9ed8abf-e4fa-476d-86e8-5db0cda38daa';
  $display->content['new-b9ed8abf-e4fa-476d-86e8-5db0cda38daa'] = $pane;
  $display->panels['center'][0] = 'new-b9ed8abf-e4fa-476d-86e8-5db0cda38daa';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b9ed8abf-e4fa-476d-86e8-5db0cda38daa';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_page_with_news__panel_context_3b5705e5-3ba4-4342-83cf-66b4e9e0b2db';
  $handler->task = 'page';
  $handler->subtask = 'page_with_news';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Sign In',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
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
  $display->title = '';
  $display->uuid = '26658e62-f46b-4f35-8e7b-372345d86709';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_page_with_news__panel_context_3b5705e5-3ba4-4342-83cf-66b4e9e0b2db';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-bea676c5-645a-4a2f-b8d8-879f286ebabc';
  $pane->panel = 'center';
  $pane->type = 'block';
  $pane->subtype = 'user-login';
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
  $pane->uuid = 'bea676c5-645a-4a2f-b8d8-879f286ebabc';
  $display->content['new-bea676c5-645a-4a2f-b8d8-879f286ebabc'] = $pane;
  $display->panels['center'][0] = 'new-bea676c5-645a-4a2f-b8d8-879f286ebabc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-bea676c5-645a-4a2f-b8d8-879f286ebabc';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['page_with_news'] = $page;

  return $pages;

}
