<?php
/**
 * @file
 * campuscms_feature_search.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function campuscms_feature_search_user_default_permissions() {
  $permissions = array();

  // Exported permission: access_google_appliance_content
  $permissions['access_google_appliance_content'] = array(
    'name' => 'access_google_appliance_content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'google_appliance',
  );

  // Exported permission: administer_google_appliance
  $permissions['administer_google_appliance'] = array(
    'name' => 'administer_google_appliance',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'google_appliance',
  );

  return $permissions;
}
