<?php
/**
 * @file
 * rocketship_config.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rocketship_config_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access news feeds'.
  $permissions['access news feeds'] = array(
    'name' => 'access news feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'aggregator',
  );

  return $permissions;
}
