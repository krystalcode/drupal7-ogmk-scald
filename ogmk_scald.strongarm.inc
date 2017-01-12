<?php
/**
 * @file
 * ogmk_scald.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ogmk_scald_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dnd_callback_url';
  $strongarm->value = 'scald/dnd-library';
  $export['dnd_callback_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scald_extra_dnd_css';
  $strongarm->value = 0;
  $export['scald_extra_dnd_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scald_extra_dnd_library';
  $strongarm->value = 1;
  $export['scald_extra_dnd_library'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scald_extra_generate_contexts';
  $strongarm->value = 'numeric';
  $export['scald_extra_generate_contexts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scald_extra_generate_thumbnails';
  $strongarm->value = 'numeric';
  $export['scald_extra_generate_thumbnails'] = $strongarm;

  return $export;
}
