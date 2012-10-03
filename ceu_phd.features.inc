<?php
/**
 * @file
 * ceu_phd.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ceu_phd_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ceu_phd_node_info() {
  $items = array(
    'profile_phd' => array(
      'name' => t('Profile-PhD'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Full name (Last, First)'),
      'help' => '',
    ),
  );
  return $items;
}
