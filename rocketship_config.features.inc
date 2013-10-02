<?php
/**
 * @file
 * rocketship_config.features.inc
 */

/**
 * Implements hook_node_info().
 */
function rocketship_config_node_info() {
  $items = array(
    'issue' => array(
      'name' => t('Issue'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
