<?php
/**
 * @file
 * stanford_historical_material.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function stanford_historical_material_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_add_edit_content|node|stanford_document|form';
  $field_group->group_name = 'group_add_edit_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_document';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Add/Edit Content',
    'weight' => '11',
    'children' => array(
      0 => 'group_document',
      1 => 'group_audio',
      2 => 'group_video',
      3 => 'group_quote',
      4 => 'group_tag',
      5 => 'group_image',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Add/Edit Content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-add-edit-content field-group-htabs',
      ),
    ),
  );
  $field_groups['group_add_edit_content|node|stanford_document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_audio|node|stanford_document|form';
  $field_group->group_name = 'group_audio';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_document';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_add_edit_content';
  $field_group->data = array(
    'label' => 'Audio',
    'weight' => '29',
    'children' => array(
      0 => 'field_s_doc_audio',
      1 => 'field_s_doc_audiocopyright',
      2 => 'field_s_doc_audiovtt',
      3 => 'field_s_doc_audio_transcription',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Audio',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-audio field-group-htab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_audio|node|stanford_document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_descriptor|node|stanford_document|default';
  $field_group->group_name = 'group_descriptor';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_document';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_s_postcard_content';
  $field_group->data = array(
    'label' => 'Descriptor',
    'weight' => '16',
    'children' => array(
      0 => 'field_s_doc_author',
      1 => 'field_s_doc_date',
      2 => 'field_s_doc_location',
      3 => 'field_s_doc_genre',
      4 => 'field_s_doc_topic',
      5 => 'field_s_doc_conjectured_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Descriptor',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'descriptor group-descriptor field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_descriptor|node|stanford_document|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_descriptor|node|stanford_document|full';
  $field_group->group_name = 'group_descriptor';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_document';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s_postcard_content';
  $field_group->data = array(
    'label' => 'Descriptor',
    'weight' => '28',
    'children' => array(
      0 => 'field_s_doc_genre',
      1 => 'group_s_date_style',
      2 => 'group_s_author_style',
      3 => 'group_s_location_style',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Descriptor',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'descriptor group-descriptor field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_descriptor|node|stanford_document|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_document|node|stanford_document|form';
  $field_group->group_name = 'group_document';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_document';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_add_edit_content';
  $field_group->data = array(
    'label' => 'Document',
    'weight' => '28',
    'children' => array(
      0 => 'field_s_doc_download_document',
      1 => 'field_s_doc_doccopyright',
      2 => 'field_s_doc_doctranscription',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Document',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-document field-group-htab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_document|node|stanford_document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_footnote|node|stanford_document|full';
  $field_group->group_name = 'group_footnote';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_document';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s_postcard_content';
  $field_group->data = array(
    'label' => 'Footnote',
    'weight' => '35',
    'children' => array(
      0 => 'field_s_doc_footnote',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Footnote',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-footnote field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_footnote|node|stanford_document|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_headnote|node|stanford_document|full';
  $field_group->group_name = 'group_headnote';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_document';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s_postcard_content';
  $field_group->data = array(
    'label' => 'Headnote',
    'weight' => '33',
    'children' => array(
      0 => 'field_s_doc_headnote',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Headnote',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-headnote field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_headnote|node|stanford_document|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|stanford_document|form';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_document';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_add_edit_content';
  $field_group->data = array(
    'label' => 'Image',
    'weight' => '31',
    'children' => array(
      0 => 'field_s_image_info',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Image',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-image field-group-htab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_image|node|stanford_document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_more_link|node|stanford_document|full';
  $field_group->group_name = 'group_more_link';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_document';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s_postcard_content';
  $field_group->data = array(
    'label' => 'More Link Group',
    'weight' => '29',
    'children' => array(
      0 => 'field_s_doc_video',
      1 => 'field_s_doc_audio',
      2 => 'field_s_doc_download_document',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'More Link Group',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-more-link field-group-div more-link',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_more_link|node|stanford_document|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_quote|node|stanford_document|form';
  $field_group->group_name = 'group_quote';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_document';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_add_edit_content';
  $field_group->data = array(
    'label' => 'Quote',
    'weight' => '32',
    'children' => array(
      0 => 'field_s_doc_quote',
      1 => 'field_s_doc_quotesource',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Quote',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-quote field-group-htab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_quote|node|stanford_document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_author_style|node|stanford_document|full';
  $field_group->group_name = 'group_s_author_style';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_document';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_descriptor';
  $field_group->data = array(
    'label' => 'Author Style',
    'weight' => '4',
    'children' => array(
      0 => 'field_s_doc_author',
      1 => 'field_s_doc_conjectured_author',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Author Style',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-s-author-style field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_s_author_style|node|stanford_document|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_date_style|node|stanford_document|full';
  $field_group->group_name = 'group_s_date_style';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_document';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_descriptor';
  $field_group->data = array(
    'label' => 'Date Style',
    'weight' => '5',
    'children' => array(
      0 => 'field_s_doc_date',
      1 => 'field_s_doc_conjectured_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Date Style',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-s-date-style field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_s_date_style|node|stanford_document|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_image_style|node|stanford_document|full';
  $field_group->group_name = 'group_s_image_style';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_document';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Featured Image',
    'weight' => '3',
    'children' => array(
      0 => 'field_s_image_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Featured Image',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-s-image-style field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_s_image_style|node|stanford_document|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_location_style|node|stanford_document|full';
  $field_group->group_name = 'group_s_location_style';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_document';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_descriptor';
  $field_group->data = array(
    'label' => 'Location Style',
    'weight' => '6',
    'children' => array(
      0 => 'field_s_doc_location',
      1 => 'field_s_doc_conjectured_location',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Location Style',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-s-location-style field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_s_location_style|node|stanford_document|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard_content|node|stanford_document|default';
  $field_group->group_name = 'group_s_postcard_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_document';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Postcard Content',
    'weight' => '19',
    'children' => array(
      0 => 'group_descriptor',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'postcard-content group-s-postcard-content field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_s_postcard_content|node|stanford_document|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard_content|node|stanford_document|full';
  $field_group->group_name = 'group_s_postcard_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_document';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Postcard Content',
    'weight' => '5',
    'children' => array(
      0 => 'field_s_doc_source',
      1 => 'group_descriptor',
      2 => 'group_headnote',
      3 => 'group_transcription',
      4 => 'group_footnote',
      5 => 'group_more_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'postcard-content group-s-postcard-content field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_s_postcard_content|node|stanford_document|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard_image|node|stanford_document|default';
  $field_group->group_name = 'group_s_postcard_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_document';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_s_postcard';
  $field_group->data = array(
    'label' => 'Postcard Image',
    'weight' => '18',
    'children' => array(
      0 => 'field_s_image_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard Image',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'postcard-image group_s_postcard_image field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_s_postcard_image|node|stanford_document|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard|node|stanford_document|default';
  $field_group->group_name = 'group_s_postcard';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_document';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Postcard',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_s_doc_video',
      2 => 'field_s_doc_audio',
      3 => 'field_s_doc_headnote',
      4 => 'field_s_doc_footnote',
      5 => 'field_s_doc_source',
      6 => 'field_s_doc_names',
      7 => 'group_s_postcard_image',
      8 => 'group_s_postcard_content',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'postcard group-s-postcard field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_s_postcard|node|stanford_document|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_s_postcard|node|stanford_document|full';
  $field_group->group_name = 'group_s_postcard';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_document';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Postcard',
    'weight' => '0',
    'children' => array(
      0 => 'group_s_postcard_image',
      1 => 'group_s_postcard_content',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Postcard',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'postcard-left-wrap group-s-postcard field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_s_postcard|node|stanford_document|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tag|node|stanford_document|form';
  $field_group->group_name = 'group_tag';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_document';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_add_edit_content';
  $field_group->data = array(
    'label' => 'Meta data',
    'weight' => '33',
    'children' => array(
      0 => 'field_s_doc_genre',
      1 => 'field_s_doc_topic',
      2 => 'field_s_lesson_plan_grades',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Meta data',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-tag field-group-htab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_tag|node|stanford_document|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_transcription|node|stanford_document|full';
  $field_group->group_name = 'group_transcription';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_document';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_s_postcard_content';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '34',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Details',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-transcription field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_transcription|node|stanford_document|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video|node|stanford_document|form';
  $field_group->group_name = 'group_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'stanford_document';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_add_edit_content';
  $field_group->data = array(
    'label' => 'Video',
    'weight' => '30',
    'children' => array(
      0 => 'field_s_doc_video',
      1 => 'field_s_doc_videocopyright',
      2 => 'field_s_doc_videovtt',
      3 => 'field_s_doc_video_transcription',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Video',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-video field-group-htab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_video|node|stanford_document|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Add/Edit Content');
  t('Audio');
  t('Author Style');
  t('Date Style');
  t('Descriptor');
  t('Details');
  t('Document');
  t('Featured Image');
  t('Footnote');
  t('Headnote');
  t('Image');
  t('Location Style');
  t('Meta data');
  t('More Link Group');
  t('Postcard');
  t('Postcard Content');
  t('Postcard Image');
  t('Quote');
  t('Video');

  return $field_groups;
}
