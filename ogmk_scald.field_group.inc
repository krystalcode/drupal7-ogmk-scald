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
      1 => 'scald_description',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_r1c1|scald_atom|image|form';
  $field_group->group_name = 'group_r1c1';
  $field_group->entity_type = 'scald_atom';
  $field_group->bundle = 'image';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_r1';
  $field_group->data = array(
    'label' => 'Row 1 Col 1',
    'weight' => '8',
    'children' => array(
      0 => 'scald_thumbnail',
      1 => 'scald_description',
      2 => 'title',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => 'Row 1 Col 1',
      'instance_settings' => array(
        'panelize' => '1',
        'show_heading' => '0',
        'heading_position' => '0',
        'label_element' => 'h3',
        'description_element' => 'p',
        'panel_style' => 'default',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '9',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-r1c1 field-group-bootstrap_grid_col',
        'description' => '',
      ),
    ),
  );
  $field_groups['group_r1c1|scald_atom|image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_r1|scald_atom|image|form';
  $field_group->group_name = 'group_r1';
  $field_group->entity_type = 'scald_atom';
  $field_group->bundle = 'image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '0',
    'children' => array(
      0 => 'group_r1c1',
    ),
    'format_type' => 'bootstrap_grid_row',
    'format_settings' => array(
      'label' => 'Details',
      'instance_settings' => array(
        'show_heading' => '1',
        'heading_position' => '0',
        'label_element' => 'h3',
        'description_element' => 'p',
        'panelize' => '0',
        'panel_style' => 'default',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '3',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-r1 field-group-bootstrap_grid_row',
        'description' => 'Enter the details of the image resource: its title, the image file, and optionally a description.',
      ),
    ),
  );
  $field_groups['group_r1|scald_atom|image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_r2c1|scald_atom|image|form';
  $field_group->group_name = 'group_r2c1';
  $field_group->entity_type = 'scald_atom';
  $field_group->bundle = 'image';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_r2';
  $field_group->data = array(
    'label' => 'Row 2 Col 1',
    'weight' => '8',
    'children' => array(
      0 => 'scald_authors',
      1 => 'scald_tags',
      2 => 'ogmk_shops_ref',
    ),
    'format_type' => 'bootstrap_grid_col',
    'format_settings' => array(
      'label' => 'Row 2 Col 1',
      'instance_settings' => array(
        'panelize' => '1',
        'show_heading' => '0',
        'heading_position' => '0',
        'label_element' => 'h3',
        'description_element' => 'p',
        'panel_style' => 'default',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '9',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-r2c1 field-group-bootstrap_grid_col',
        'description' => '',
      ),
    ),
  );
  $field_groups['group_r2c1|scald_atom|image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_r2|scald_atom|image|form';
  $field_group->group_name = 'group_r2';
  $field_group->entity_type = 'scald_atom';
  $field_group->bundle = 'image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '4',
    'children' => array(
      0 => 'group_r2c1',
    ),
    'format_type' => 'bootstrap_grid_row',
    'format_settings' => array(
      'label' => 'Metadata',
      'instance_settings' => array(
        'show_heading' => '1',
        'heading_position' => '0',
        'label_element' => 'h3',
        'description_element' => 'p',
        'panelize' => '0',
        'panel_style' => 'default',
        'bootstrap_grid_col_xs' => '12',
        'bootstrap_grid_col_sm' => '3',
        'bootstrap_grid_col_md' => '0',
        'bootstrap_grid_col_lg' => '0',
        'required_fields' => 1,
        'classes' => 'group-r2 field-group-bootstrap_grid_row',
        'description' => 'You may optionally attribute the resource to their authors and categorize them under one or more shop or label.',
      ),
    ),
  );
  $field_groups['group_r2|scald_atom|image|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Details');
  t('Metadata');
  t('Row 1 Col 1');
  t('Row 2 Col 1');

  return $field_groups;
}
