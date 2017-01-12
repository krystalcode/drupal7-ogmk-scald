<?php
/**
 * @file
 * ogmk_scald.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ogmk_scald_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_p1|scald_atom|image|default';
  $field_group->group_name = 'group_p1';
  $field_group->entity_type = 'scald_atom';
  $field_group->bundle = 'image';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'scald_thumbnail',
    ),
    'format_type' => 'bootstrap_panel',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'show_heading' => '1',
        'heading_position' => '0',
        'panel_style' => 'default',
      ),
    ),
  );
  $field_groups['group_p1|scald_atom|image|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_p2|scald_atom|image|default';
  $field_group->group_name = 'group_p2';
  $field_group->entity_type = 'scald_atom';
  $field_group->bundle = 'image';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '1',
    'children' => array(
      0 => 'scald_authors',
      1 => 'scald_tags',
    ),
    'format_type' => 'bootstrap_panel',
    'format_settings' => array(
      'label' => 'Metadata',
      'instance_settings' => array(
        'show_heading' => '1',
        'heading_position' => '0',
        'panel_style' => 'default',
      ),
    ),
  );
  $field_groups['group_p2|scald_atom|image|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Metadata');

  return $field_groups;
}
