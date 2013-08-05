<?php
/**
 * @file
 * slac_faq.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function slac_faq_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function slac_faq_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function slac_faq_node_info() {
  $items = array(
    'faq' => array(
      'name' => t('FAQ'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Author name'),
      'help' => '',
    ),
  );
  return $items;
}