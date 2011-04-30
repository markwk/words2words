<?php

/**
 * Implementation of hook_strongarm().
 */
function words2words_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_word';
  $strongarm->value = 0;

  $export['comment_anonymous_word'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_word';
  $strongarm->value = '3';

  $export['comment_controls_word'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_word';
  $strongarm->value = '4';

  $export['comment_default_mode_word'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_word';
  $strongarm->value = '2';

  $export['comment_default_order_word'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_word';
  $strongarm->value = '50';

  $export['comment_default_per_page_word'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_word';
  $strongarm->value = '1';

  $export['comment_form_location_word'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_word';
  $strongarm->value = '0';

  $export['comment_preview_word'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_word';
  $strongarm->value = '0';

  $export['comment_subject_field_word'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_word';
  $strongarm->value = '2';

  $export['comment_word'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_word';
  $strongarm->value = array(
    'title' => '-9',
    'revision_information' => '3',
    'author' => '4',
    'options' => '5',
    'comment_settings' => '6',
    'menu' => '1',
    'taxonomy' => '0',
    'book' => '-1',
    'og_nodeapi' => '2',
  );

  $export['content_extra_weights_word'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_word';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
    2 => 'revision',
  );

  $export['node_options_word'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_word_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => 'Word',
    ),
    'menu' => array(
      'region' => 'right',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Menu settings',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'revision_information' => array(
      'region' => 'right',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => 'Revision information',
      'collapsed' => 0,
      'hidden' => 0,
    ),
    'comment_settings' => array(
      'region' => 'right',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'Comment settings',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'options' => array(
      'region' => 'right',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Publishing options',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'author' => array(
      'region' => 'right',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Authoring information',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'buttons' => array(
      'region' => 'main',
      'weight' => '9',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'notifications' => array(
      'region' => 'main',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'Notifications',
      'collapsed' => 0,
      'hidden' => 0,
    ),
    'book' => array(
      'region' => 'right',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'Book outline',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'taxonomy' => array(
      'region' => 'right',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'field_word_lang' => array(
      'region' => 'main',
      'weight' => '1',
      'has_required' => TRUE,
      'title' => 'Word Language',
    ),
    'field_word_type' => array(
      'region' => 'main',
      'weight' => '3',
      'has_required' => TRUE,
      'title' => 'Word Type',
    ),
    'field_word_def' => array(
      'region' => 'main',
      'weight' => '4',
      'has_required' => TRUE,
      'title' => 'Definition',
    ),
    'field_sentence' => array(
      'region' => 'main',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => 'Sample Sentence',
      'hidden' => 0,
    ),
    'field_translation' => array(
      'region' => 'main',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'Translation',
      'hidden' => 0,
    ),
    'field_transl_lang' => array(
      'region' => 'main',
      'weight' => '7',
      'has_required' => TRUE,
      'title' => 'Translation Language',
    ),
    'field_word_image' => array(
      'region' => 'main',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Image',
      'hidden' => 0,
    ),
    'og_nodeapi' => array(
      'region' => 'right',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => 'Groups',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'attachments' => array(
      'region' => 'right',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 1,
    ),
  );

  $export['nodeformscols_field_placements_word_default'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_word';
  $strongarm->value = 'group_post_standard';

  $export['og_content_type_usage_word'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_word';
  $strongarm->value = '0';

  $export['upload_word'] = $strongarm;
  return $export;
}
