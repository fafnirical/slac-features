<?php
/**
 * @file
 * slac_extorg_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function slac_extorg_roles_user_default_roles() {
  $roles = array();

  // Exported role: site owner.
  $roles['site owner'] = array(
    'name' => 'site owner',
    'weight' => 5,
  );

  return $roles;
}