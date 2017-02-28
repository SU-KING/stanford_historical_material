<?php
/**
 * @file
 * stanford_historical_material.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function stanford_historical_material_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'stanford_conjectured_info';
  $ds_field->label = 'Conjectured Info Link';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'stanford_document|*';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<p class="conjectured-date-custom [node:field_test_conjectured_date]"><a href="https://sites.stanford.edu/mlk/node/2139"><span class="offscreen">How do we determine conjectured dates?</span>?</a></p>
',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['stanford_conjectured_info'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function stanford_historical_material_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|stanford_document|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'stanford_document';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_s_postcard',
        3 => 'field_s_doc_footnote',
        5 => 'group_s_author_style',
        6 => 'group_s_postcard_image',
        7 => 'field_s_doc_author',
        8 => 'group_s_date_style',
        9 => 'group_s_postcard_content',
        10 => 'group_s_location_style',
        11 => 'field_s_doc_conjectured_author',
        12 => 'field_s_doc_location',
        13 => 'field_s_doc_date',
        14 => 'field_s_doc_conjectured_location',
        15 => 'field_s_doc_genre',
        16 => 'field_s_doc_conjectured_date',
        17 => 'field_s_doc_headnote',
        18 => 'body',
        19 => 'group_descriptor',
        20 => 'group_more_link',
        21 => 'field_s_doc_download_document',
        22 => 'field_s_doc_video',
        23 => 'field_s_doc_audio',
        24 => 'group_headnote',
        25 => 'group_transcription',
        26 => 'group_footnote',
        27 => 'field_s_doc_source',
      ),
      'related_resources' => array(
        1 => 'field_s_doc_related_resources',
      ),
      'publication' => array(
        2 => 'field_s_doc_publication',
      ),
      'block_s_image' => array(
        4 => 'group_s_image_style',
        28 => 'field_s_image_info',
      ),
    ),
    'fields' => array(
      'group_s_postcard' => 'ds_content',
      'field_s_doc_related_resources' => 'related_resources',
      'field_s_doc_publication' => 'publication',
      'field_s_doc_footnote' => 'ds_content',
      'group_s_image_style' => 'block_s_image',
      'group_s_author_style' => 'ds_content',
      'group_s_postcard_image' => 'ds_content',
      'field_s_doc_author' => 'ds_content',
      'group_s_date_style' => 'ds_content',
      'group_s_postcard_content' => 'ds_content',
      'group_s_location_style' => 'ds_content',
      'field_s_doc_conjectured_author' => 'ds_content',
      'field_s_doc_location' => 'ds_content',
      'field_s_doc_date' => 'ds_content',
      'field_s_doc_conjectured_location' => 'ds_content',
      'field_s_doc_genre' => 'ds_content',
      'field_s_doc_conjectured_date' => 'ds_content',
      'field_s_doc_headnote' => 'ds_content',
      'body' => 'ds_content',
      'group_descriptor' => 'ds_content',
      'group_more_link' => 'ds_content',
      'field_s_doc_download_document' => 'ds_content',
      'field_s_doc_video' => 'ds_content',
      'field_s_doc_audio' => 'ds_content',
      'group_headnote' => 'ds_content',
      'group_transcription' => 'ds_content',
      'group_footnote' => 'ds_content',
      'field_s_doc_source' => 'ds_content',
      'field_s_image_info' => 'block_s_image',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|stanford_document|full'] = $ds_layout;

  return $export;
}
