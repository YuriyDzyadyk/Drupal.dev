<?php

/**
 * Implements hook_drush_command().
 */
function custom_drush_commands_drush_command() {

$items['unpublish-nodes'] = array(
  'description' => 'It unpublish all nodes older than 2 days.',
  'aliases' => array('undc'),
  'callback' => 'custom_drush_commands_drush',
  //argument
  'options' => array(
    'days' => 'The number of days for unpublished.',
  ),
);

return $items;
}

function custom_drush_commands_drush() {
  //get argument
  $days = drush_get_option('days', 1);
  if ($days > 1 && is_numeric($days)) {
    $result = custom_drush_commands_select($days);
  }
  else {
    $result = custom_drush_commands_select();
  }
  foreach ($result as $row) {
    $node = node_load($row->nid);
    $node->status = NODE_NOT_PUBLISHED;
    node_save($node);
  }
}

function custom_drush_commands_select($days = 2) {
  $day_before_yesterday = time() - 86400 * $days;
  $query = db_select('node', 'n');
  $query->fields('n', array('nid'));
  $query->condition('n.status', NODE_PUBLISHED);
  $query->condition('n.created', $day_before_yesterday, '<');

  $result = $query->execute()->fetchAll();
  return $result;
}
