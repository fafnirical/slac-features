<?php

// Rebuild slac_int_org profile.

$commands = array(
  array(
    'description' => 'Drop all database tables: ',
    'command' => 'drush sql-drop -y',
  ),
  array(
    'description' => 'Install selected profile: ',
    'command' => 'drush si slac_int_org --db-url=mysql://slac_features:SwHbNJEZ6QRxrlU@localhost/slac_features --account-name=admin --account-pass=618hWVCDmY1n3uf --account-mail=admin@example.com --site-name=SLAC-INT-ORG-' . date(DATE_ATOM) . ' -y'
  ),
  array(
    'description' => 'Disable webauth module',
    'command' => 'drush dis webauth -y'
  ),
  array(
    'description' => 'Disable slac_files_rewrite module',
    'command' => 'drush dis slac_files_rewrite -y'
  ),
);

foreach ($commands as $command) {
  exec($command['command'], $command_output);
}

print 'Site has been rebuilt';
