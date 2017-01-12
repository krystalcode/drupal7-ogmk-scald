<?php
/**
 * @file
 * ogmk_scald.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ogmk_scald_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function ogmk_scald_image_default_styles() {
  $styles = array();

  // Exported image style: 48.
  $styles[48] = array(
    'label' => 48,
    'effects' => array(
      14 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 48,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
