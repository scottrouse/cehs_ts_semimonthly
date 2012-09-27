<?php
/**
 * @file
 * cehs_ts_semimonthly.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cehs_ts_semimonthly_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function cehs_ts_semimonthly_node_info() {
  $items = array(
    'ts_semimonthly' => array(
      'name' => t('Semi-Monthly Timesheet'),
      'base' => 'node_content',
      'description' => t('This is the standard timesheet for employees on a Semi-Monthly Payroll schedule.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
