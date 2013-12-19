<?php
/**
 * @file
 * hevenly_id.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hevenly_id_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'get_inventory';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'get-inventory';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'get-inventory';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Dongle ID */
  $handler->display->display_options['fields']['field_dongle_id']['id'] = 'field_dongle_id';
  $handler->display->display_options['fields']['field_dongle_id']['table'] = 'field_data_field_dongle_id';
  $handler->display->display_options['fields']['field_dongle_id']['field'] = 'field_dongle_id';
  /* Field: Content: Dongle Location */
  $handler->display->display_options['fields']['field_dongle_loc']['id'] = 'field_dongle_loc';
  $handler->display->display_options['fields']['field_dongle_loc']['table'] = 'field_data_field_dongle_loc';
  $handler->display->display_options['fields']['field_dongle_loc']['field'] = 'field_dongle_loc';
  $handler->display->display_options['fields']['field_dongle_loc']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_dongle_loc']['type'] = 'geofield_latlon';
  $handler->display->display_options['fields']['field_dongle_loc']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
    'labels' => 1,
  );
  /* Field: Content: Dongle VIN */
  $handler->display->display_options['fields']['field_dongle_vin']['id'] = 'field_dongle_vin';
  $handler->display->display_options['fields']['field_dongle_vin']['table'] = 'field_data_field_dongle_vin';
  $handler->display->display_options['fields']['field_dongle_vin']['field'] = 'field_dongle_vin';
  $handler->display->display_options['fields']['field_dongle_vin']['label'] = 'Dongle Vehicle VIN';
  /* Field: Content: Dongle assigned to Store */
  $handler->display->display_options['fields']['field_dongle_store']['id'] = 'field_dongle_store';
  $handler->display->display_options['fields']['field_dongle_store']['table'] = 'field_data_field_dongle_store';
  $handler->display->display_options['fields']['field_dongle_store']['field'] = 'field_dongle_store';
  $handler->display->display_options['fields']['field_dongle_store']['label'] = 'Dongle Store';
  $handler->display->display_options['fields']['field_dongle_store']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Dongle attached to Vehicle */
  $handler->display->display_options['fields']['field_dongle_veh_ref']['id'] = 'field_dongle_veh_ref';
  $handler->display->display_options['fields']['field_dongle_veh_ref']['table'] = 'field_data_field_dongle_veh_ref';
  $handler->display->display_options['fields']['field_dongle_veh_ref']['field'] = 'field_dongle_veh_ref';
  $handler->display->display_options['fields']['field_dongle_veh_ref']['type'] = 'entityreference_entity_view';
  $handler->display->display_options['fields']['field_dongle_veh_ref']['settings'] = array(
    'view_mode' => 'full',
    'links' => 0,
  );
  /* Contextual filter: Content: Dongle assigned to Store (field_dongle_store) */
  $handler->display->display_options['arguments']['field_dongle_store_target_id']['id'] = 'field_dongle_store_target_id';
  $handler->display->display_options['arguments']['field_dongle_store_target_id']['table'] = 'field_data_field_dongle_store';
  $handler->display->display_options['arguments']['field_dongle_store_target_id']['field'] = 'field_dongle_store_target_id';
  $handler->display->display_options['arguments']['field_dongle_store_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_dongle_store_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_dongle_store_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_dongle_store_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dongle' => 'dongle',
  );

  /* Display: JSON */
  $handler = $view->new_display('page', 'JSON', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 1;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'data/inventory/%';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'data/inventory/p/%';
  $export['get_inventory'] = $view;

  $view = new view();
  $view->name = 'get_stores';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'get-stores';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'get-stores';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['plaintext_output'] = 0;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Store ID */
  $handler->display->display_options['fields']['field_store_id']['id'] = 'field_store_id';
  $handler->display->display_options['fields']['field_store_id']['table'] = 'field_data_field_store_id';
  $handler->display->display_options['fields']['field_store_id']['field'] = 'field_store_id';
  /* Field: Content: Store Location */
  $handler->display->display_options['fields']['field_store_loc']['id'] = 'field_store_loc';
  $handler->display->display_options['fields']['field_store_loc']['table'] = 'field_data_field_store_loc';
  $handler->display->display_options['fields']['field_store_loc']['field'] = 'field_store_loc';
  $handler->display->display_options['fields']['field_store_loc']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_store_loc']['type'] = 'geofield_latlon';
  $handler->display->display_options['fields']['field_store_loc']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
    'labels' => 1,
  );
  /* Field: Content: Store Location (field_store_loc) - proximity */
  $handler->display->display_options['fields']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['fields']['field_geofield_distance']['table'] = 'field_data_field_store_loc';
  $handler->display->display_options['fields']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['fields']['field_geofield_distance']['label'] = 'Distance proximity';
  $handler->display->display_options['fields']['field_geofield_distance']['precision'] = '0';
  $handler->display->display_options['fields']['field_geofield_distance']['source'] = 'contextual_geofield_filter';
  $handler->display->display_options['fields']['field_geofield_distance']['geofield_proximity_manual'] = array(
    'lat' => '',
    'lon' => '',
  );
  $handler->display->display_options['fields']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_store_loc';
  $handler->display->display_options['fields']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_store_loc';
  $handler->display->display_options['fields']['field_geofield_distance']['radius_of_earth'] = '3959';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = 'View Inventory';
  $handler->display->display_options['fields']['path']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['path'] = 'data/inventory/[nid] ';
  /* Sort criterion: Content: Store Location (field_store_loc) - proximity */
  $handler->display->display_options['sorts']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['sorts']['field_geofield_distance']['table'] = 'field_data_field_store_loc';
  $handler->display->display_options['sorts']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['sorts']['field_geofield_distance']['source'] = 'contextual_geofield_filter';
  $handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_manual'] = array(
    'lat' => '',
    'lon' => '',
  );
  $handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_entity_url_field'] = 'field_store_loc';
  $handler->display->display_options['sorts']['field_geofield_distance']['geofield_proximity_current_user_field'] = 'field_store_loc';
  /* Contextual filter: Content: Store Location (field_store_loc) - proximity */
  $handler->display->display_options['arguments']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['arguments']['field_geofield_distance']['table'] = 'field_data_field_store_loc';
  $handler->display->display_options['arguments']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['arguments']['field_geofield_distance']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_geofield_distance']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_geofield_distance']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_geofield_distance']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_geofield_distance']['proximity'] = array(
    'operation' => 'lt',
    'default_radius' => '1000',
    'radius_unit' => '3959',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'store' => 'store',
  );

  /* Display: JSON */
  $handler = $view->new_display('page', 'JSON', 'page');
  $handler->display->display_options['path'] = 'data/stores';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
    'field_store_id' => 'field_store_id',
    'field_store_loc' => 'field_store_loc',
    'field_geofield_distance' => 'field_geofield_distance',
    'path' => 'path',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_store_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_store_loc' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_geofield_distance' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'data/stores/p';
  $export['get_stores'] = $view;

  return $export;
}
