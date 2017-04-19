<?php
/**
 * @file
 * todolist.features.inc
 */

/**
 * Implements hook_views_api().
 */
function todolist_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function todolist_node_info() {
  $items = array(
    'task' => array(
      'name' => t('Task'),
      'base' => 'node_content',
      'description' => t('A task that coffee shop employee\'s need to accomplish'),
      'has_title' => '1',
      'title_label' => t('Task'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}