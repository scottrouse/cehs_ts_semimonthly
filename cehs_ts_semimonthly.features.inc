<?php
/**
 * @file
 * cehs_ts_semimonthly.features.inc
 */

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
