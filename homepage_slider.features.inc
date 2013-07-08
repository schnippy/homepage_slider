<?php
/**
 * @file
 * homepage_slider.features.inc
 */

/**
 * Implements hook_views_api().
 */
function homepage_slider_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function homepage_slider_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: homepage_slider
  $nodequeues['homepage_slider'] = array(
    'title' => 'Homepage Slider',
    'subqueue_title' => '',
    'size' => 0,
    'link' => '',
    'link_remove' => '',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 0,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'name' => 'homepage_slider',
    'subqueues' => 1,
    'types' => array(
      0 => 'homepage_slider',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_image_default_styles().
 */
function homepage_slider_image_default_styles() {
  $styles = array();

  // Exported image style: frontpage_slideshow.
  $styles['frontpage_slideshow'] = array(
    'name' => 'frontpage_slideshow',
    'effects' => array(
      1 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 720,
          'height' => 347,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function homepage_slider_node_info() {
  $items = array(
    'homepage_slider' => array(
      'name' => t('Homepage Slider'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
