<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function words2words_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => 1);
  }
  elseif ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_flag_default_flags().
 */
function words2words_flag_default_flags() {
  $flags = array();
  // Exported flag: "Reviewed".
  $flags['reviewed'] = array(
    'content_type' => 'node',
    'title' => 'Reviewed',
    'global' => '0',
    'types' => array(
      '0' => 'word',
    ),
    'flag_short' => 'Add to My Review Words',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Remove from My Review Words',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        '0' => 2,
      ),
      'unflag' => array(
        '0' => 2,
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'i18n' => 0,
    'module' => 'words2words',
    'locked' => array(
      '0' => 'name',
    ),
    'api_version' => 2,
  );
  // Exported flag: "Teacher Recommend".
  $flags['teach_recomm'] = array(
    'content_type' => 'node',
    'title' => 'Teacher Recommend',
    'global' => '1',
    'types' => array(
      '0' => 'word',
    ),
    'flag_short' => 'Teacher Recommend',
    'flag_long' => '',
    'flag_message' => 'Teacher Recommended for Group',
    'unflag_short' => 'Stop Recommending',
    'unflag_long' => '',
    'unflag_message' => 'Teacher Removed from Recommended for Group',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        '0' => 3,
        '1' => 4,
      ),
      'unflag' => array(
        '0' => 3,
        '1' => 4,
      ),
    ),
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'i18n' => 0,
    'module' => 'words2words',
    'locked' => array(
      '0' => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function words2words_imagecache_default_presets() {
  $items = array(
    '160x120' => array(
      'presetname' => '160x120',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '100',
            'height' => '80',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function words2words_node_info() {
  $items = array(
    'word' => array(
      'name' => t('Word'),
      'module' => 'features',
      'description' => t('A <em>word</em> is a term that is definable and translatable. '),
      'has_title' => '1',
      'title_label' => t('Word'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function words2words_views_api() {
  return array(
    'api' => '2',
  );
}
