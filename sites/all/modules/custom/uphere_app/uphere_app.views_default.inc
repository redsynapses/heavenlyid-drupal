<?php
/**
 * @file
 * uphere_app.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function uphere_app_views_default_views() {
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
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dongle_veh_ref_target_id']['id'] = 'field_dongle_veh_ref_target_id';
  $handler->display->display_options['relationships']['field_dongle_veh_ref_target_id']['table'] = 'field_data_field_dongle_veh_ref';
  $handler->display->display_options['relationships']['field_dongle_veh_ref_target_id']['field'] = 'field_dongle_veh_ref_target_id';
  $handler->display->display_options['relationships']['field_dongle_veh_ref_target_id']['label'] = 'referenced from field_dongle_veh_ref';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dongle_store_target_id']['id'] = 'field_dongle_store_target_id';
  $handler->display->display_options['relationships']['field_dongle_store_target_id']['table'] = 'field_data_field_dongle_store';
  $handler->display->display_options['relationships']['field_dongle_store_target_id']['field'] = 'field_dongle_store_target_id';
  $handler->display->display_options['relationships']['field_dongle_store_target_id']['label'] = 'referenced from field_dongle_store';
  /* Field: store nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_dongle_store_target_id';
  $handler->display->display_options['fields']['nid']['ui_name'] = 'store nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid_store';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
  /* Field: Content: Dongle assigned to Store */
  $handler->display->display_options['fields']['field_dongle_store']['id'] = 'field_dongle_store';
  $handler->display->display_options['fields']['field_dongle_store']['table'] = 'field_data_field_dongle_store';
  $handler->display->display_options['fields']['field_dongle_store']['field'] = 'field_dongle_store';
  $handler->display->display_options['fields']['field_dongle_store']['label'] = 'dongle_store';
  $handler->display->display_options['fields']['field_dongle_store']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = 'nid_dongle';
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid_1']['hide_alter_empty'] = FALSE;
  /* Field: Content: Dongle ID */
  $handler->display->display_options['fields']['field_dongle_id']['id'] = 'field_dongle_id';
  $handler->display->display_options['fields']['field_dongle_id']['table'] = 'field_data_field_dongle_id';
  $handler->display->display_options['fields']['field_dongle_id']['field'] = 'field_dongle_id';
  $handler->display->display_options['fields']['field_dongle_id']['label'] = 'dongle_id';
  $handler->display->display_options['fields']['field_dongle_id']['element_label_colon'] = FALSE;
  /* Field: Content: Dongle Location */
  $handler->display->display_options['fields']['field_dongle_loc']['id'] = 'field_dongle_loc';
  $handler->display->display_options['fields']['field_dongle_loc']['table'] = 'field_data_field_dongle_loc';
  $handler->display->display_options['fields']['field_dongle_loc']['field'] = 'field_dongle_loc';
  $handler->display->display_options['fields']['field_dongle_loc']['label'] = 'dongle_loc_lat';
  $handler->display->display_options['fields']['field_dongle_loc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dongle_loc']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dongle_loc']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_dongle_loc']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_dongle_loc']['type'] = 'geofield_lat';
  $handler->display->display_options['fields']['field_dongle_loc']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  /* Field: Content: Dongle Location */
  $handler->display->display_options['fields']['field_dongle_loc_1']['id'] = 'field_dongle_loc_1';
  $handler->display->display_options['fields']['field_dongle_loc_1']['table'] = 'field_data_field_dongle_loc';
  $handler->display->display_options['fields']['field_dongle_loc_1']['field'] = 'field_dongle_loc';
  $handler->display->display_options['fields']['field_dongle_loc_1']['label'] = 'dongle_loc_lng';
  $handler->display->display_options['fields']['field_dongle_loc_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dongle_loc_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dongle_loc_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_dongle_loc_1']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_dongle_loc_1']['type'] = 'geofield_lon';
  $handler->display->display_options['fields']['field_dongle_loc_1']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  /* Field: Content: Dongle VIN */
  $handler->display->display_options['fields']['field_dongle_vin']['id'] = 'field_dongle_vin';
  $handler->display->display_options['fields']['field_dongle_vin']['table'] = 'field_data_field_dongle_vin';
  $handler->display->display_options['fields']['field_dongle_vin']['field'] = 'field_dongle_vin';
  $handler->display->display_options['fields']['field_dongle_vin']['label'] = 'dongle_vin';
  $handler->display->display_options['fields']['field_dongle_vin']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_dongle_vin']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_dongle_vin']['hide_alter_empty'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['relationship'] = 'field_dongle_veh_ref_target_id';
  $handler->display->display_options['fields']['nid_2']['label'] = 'nid_veh';
  $handler->display->display_options['fields']['nid_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid_2']['hide_alter_empty'] = FALSE;
  /* Field: Content: Vehicle Title */
  $handler->display->display_options['fields']['field_veh_title']['id'] = 'field_veh_title';
  $handler->display->display_options['fields']['field_veh_title']['table'] = 'field_data_field_veh_title';
  $handler->display->display_options['fields']['field_veh_title']['field'] = 'field_veh_title';
  $handler->display->display_options['fields']['field_veh_title']['relationship'] = 'field_dongle_veh_ref_target_id';
  $handler->display->display_options['fields']['field_veh_title']['label'] = '';
  $handler->display->display_options['fields']['field_veh_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_veh_title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_veh_title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_veh_title']['type'] = 'text_plain';
  /* Field: Content: Vehicle VIN */
  $handler->display->display_options['fields']['field_veh_vin']['id'] = 'field_veh_vin';
  $handler->display->display_options['fields']['field_veh_vin']['table'] = 'field_data_field_veh_vin';
  $handler->display->display_options['fields']['field_veh_vin']['field'] = 'field_veh_vin';
  $handler->display->display_options['fields']['field_veh_vin']['relationship'] = 'field_dongle_veh_ref_target_id';
  $handler->display->display_options['fields']['field_veh_vin']['label'] = '';
  $handler->display->display_options['fields']['field_veh_vin']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_veh_vin']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_veh_vin']['hide_alter_empty'] = FALSE;
  /* Field: Content: Exterior Color */
  $handler->display->display_options['fields']['field_veh_ext_color']['id'] = 'field_veh_ext_color';
  $handler->display->display_options['fields']['field_veh_ext_color']['table'] = 'field_data_field_veh_ext_color';
  $handler->display->display_options['fields']['field_veh_ext_color']['field'] = 'field_veh_ext_color';
  $handler->display->display_options['fields']['field_veh_ext_color']['relationship'] = 'field_dongle_veh_ref_target_id';
  $handler->display->display_options['fields']['field_veh_ext_color']['label'] = '';
  $handler->display->display_options['fields']['field_veh_ext_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_veh_ext_color']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_veh_ext_color']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_veh_ext_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Interior Color */
  $handler->display->display_options['fields']['field_veh_int_color']['id'] = 'field_veh_int_color';
  $handler->display->display_options['fields']['field_veh_int_color']['table'] = 'field_data_field_veh_int_color';
  $handler->display->display_options['fields']['field_veh_int_color']['field'] = 'field_veh_int_color';
  $handler->display->display_options['fields']['field_veh_int_color']['relationship'] = 'field_dongle_veh_ref_target_id';
  $handler->display->display_options['fields']['field_veh_int_color']['label'] = '';
  $handler->display->display_options['fields']['field_veh_int_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_veh_int_color']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_veh_int_color']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_veh_int_color']['type'] = 'text_plain';
  /* Field: Content: Vehicle Engine */
  $handler->display->display_options['fields']['field_veh_engine']['id'] = 'field_veh_engine';
  $handler->display->display_options['fields']['field_veh_engine']['table'] = 'field_data_field_veh_engine';
  $handler->display->display_options['fields']['field_veh_engine']['field'] = 'field_veh_engine';
  $handler->display->display_options['fields']['field_veh_engine']['relationship'] = 'field_dongle_veh_ref_target_id';
  $handler->display->display_options['fields']['field_veh_engine']['label'] = '';
  $handler->display->display_options['fields']['field_veh_engine']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_veh_engine']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_veh_engine']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_veh_engine']['type'] = 'text_plain';
  /* Field: Content: Vehicle Image URL */
  $handler->display->display_options['fields']['field_veh_image_url']['id'] = 'field_veh_image_url';
  $handler->display->display_options['fields']['field_veh_image_url']['table'] = 'field_data_field_veh_image_url';
  $handler->display->display_options['fields']['field_veh_image_url']['field'] = 'field_veh_image_url';
  $handler->display->display_options['fields']['field_veh_image_url']['relationship'] = 'field_dongle_veh_ref_target_id';
  $handler->display->display_options['fields']['field_veh_image_url']['label'] = '';
  $handler->display->display_options['fields']['field_veh_image_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_veh_image_url']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_veh_image_url']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_veh_image_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_veh_image_url']['type'] = 'link_plain';
  /* Field: Content: Vehicle Mileage */
  $handler->display->display_options['fields']['field_veh_mileage']['id'] = 'field_veh_mileage';
  $handler->display->display_options['fields']['field_veh_mileage']['table'] = 'field_data_field_veh_mileage';
  $handler->display->display_options['fields']['field_veh_mileage']['field'] = 'field_veh_mileage';
  $handler->display->display_options['fields']['field_veh_mileage']['relationship'] = 'field_dongle_veh_ref_target_id';
  $handler->display->display_options['fields']['field_veh_mileage']['label'] = '';
  $handler->display->display_options['fields']['field_veh_mileage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_veh_mileage']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_veh_mileage']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_veh_mileage']['settings'] = array(
    'thousand_separator' => ',',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Vehicle Price */
  $handler->display->display_options['fields']['field_veh_price']['id'] = 'field_veh_price';
  $handler->display->display_options['fields']['field_veh_price']['table'] = 'field_data_field_veh_price';
  $handler->display->display_options['fields']['field_veh_price']['field'] = 'field_veh_price';
  $handler->display->display_options['fields']['field_veh_price']['relationship'] = 'field_dongle_veh_ref_target_id';
  $handler->display->display_options['fields']['field_veh_price']['label'] = '';
  $handler->display->display_options['fields']['field_veh_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_veh_price']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_veh_price']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_veh_price']['type'] = 'text_plain';
  /* Field: Content: Vehicle Stock # */
  $handler->display->display_options['fields']['field_veh_stockn']['id'] = 'field_veh_stockn';
  $handler->display->display_options['fields']['field_veh_stockn']['table'] = 'field_data_field_veh_stockn';
  $handler->display->display_options['fields']['field_veh_stockn']['field'] = 'field_veh_stockn';
  $handler->display->display_options['fields']['field_veh_stockn']['relationship'] = 'field_dongle_veh_ref_target_id';
  $handler->display->display_options['fields']['field_veh_stockn']['label'] = '';
  $handler->display->display_options['fields']['field_veh_stockn']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_veh_stockn']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_veh_stockn']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_veh_stockn']['type'] = 'text_plain';
  /* Field: Content: Vehicle Transmission */
  $handler->display->display_options['fields']['field_veh_transmission']['id'] = 'field_veh_transmission';
  $handler->display->display_options['fields']['field_veh_transmission']['table'] = 'field_data_field_veh_transmission';
  $handler->display->display_options['fields']['field_veh_transmission']['field'] = 'field_veh_transmission';
  $handler->display->display_options['fields']['field_veh_transmission']['relationship'] = 'field_dongle_veh_ref_target_id';
  $handler->display->display_options['fields']['field_veh_transmission']['label'] = '';
  $handler->display->display_options['fields']['field_veh_transmission']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_veh_transmission']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_veh_transmission']['type'] = 'text_plain';
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
  $handler->display->display_options['style_options']['root_object'] = 'dongles';
  $handler->display->display_options['style_options']['top_child_object'] = 'dongle';
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
  $handler->display->display_options['path'] = 'dongles/%';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'dongle/p/%';
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
  $handler->display->display_options['style_options']['root_object'] = 'stores';
  $handler->display->display_options['style_options']['top_child_object'] = 'store';
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'store_nid';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = FALSE;
  /* Field: Content: Store ID */
  $handler->display->display_options['fields']['field_store_id']['id'] = 'field_store_id';
  $handler->display->display_options['fields']['field_store_id']['table'] = 'field_data_field_store_id';
  $handler->display->display_options['fields']['field_store_id']['field'] = 'field_store_id';
  $handler->display->display_options['fields']['field_store_id']['label'] = 'store_id';
  $handler->display->display_options['fields']['field_store_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_store_id']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_store_id']['hide_alter_empty'] = FALSE;
  /* Field: Content: Store Name */
  $handler->display->display_options['fields']['field_store_name']['id'] = 'field_store_name';
  $handler->display->display_options['fields']['field_store_name']['table'] = 'field_data_field_store_name';
  $handler->display->display_options['fields']['field_store_name']['field'] = 'field_store_name';
  $handler->display->display_options['fields']['field_store_name']['label'] = 'store_name';
  $handler->display->display_options['fields']['field_store_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_store_name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_store_name']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_store_name']['type'] = 'text_plain';
  /* Field: Content: Store Location */
  $handler->display->display_options['fields']['field_store_loc_1']['id'] = 'field_store_loc_1';
  $handler->display->display_options['fields']['field_store_loc_1']['table'] = 'field_data_field_store_loc';
  $handler->display->display_options['fields']['field_store_loc_1']['field'] = 'field_store_loc';
  $handler->display->display_options['fields']['field_store_loc_1']['label'] = 'store_loc_lat';
  $handler->display->display_options['fields']['field_store_loc_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_store_loc_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_store_loc_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_store_loc_1']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_store_loc_1']['type'] = 'geofield_lat';
  $handler->display->display_options['fields']['field_store_loc_1']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  /* Field: Content: Store Location */
  $handler->display->display_options['fields']['field_store_loc']['id'] = 'field_store_loc';
  $handler->display->display_options['fields']['field_store_loc']['table'] = 'field_data_field_store_loc';
  $handler->display->display_options['fields']['field_store_loc']['field'] = 'field_store_loc';
  $handler->display->display_options['fields']['field_store_loc']['label'] = 'store_loc_lng';
  $handler->display->display_options['fields']['field_store_loc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_store_loc']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_store_loc']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_store_loc']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_store_loc']['type'] = 'geofield_lon';
  $handler->display->display_options['fields']['field_store_loc']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  /* Field: Content: Store Location (field_store_loc) - proximity */
  $handler->display->display_options['fields']['field_geofield_distance']['id'] = 'field_geofield_distance';
  $handler->display->display_options['fields']['field_geofield_distance']['table'] = 'field_data_field_store_loc';
  $handler->display->display_options['fields']['field_geofield_distance']['field'] = 'field_geofield_distance';
  $handler->display->display_options['fields']['field_geofield_distance']['label'] = 'distance';
  $handler->display->display_options['fields']['field_geofield_distance']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_geofield_distance']['hide_alter_empty'] = FALSE;
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
  $handler->display->display_options['fields']['path']['label'] = 'store_dongles_url_json';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '/dongles/[nid]';
  $handler->display->display_options['fields']['path']['alter']['path'] = 'data/inventory/[nid] ';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['path']['hide_alter_empty'] = FALSE;
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
  $handler->display->display_options['path'] = 'store';

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
  $handler->display->display_options['path'] = 'store/p';
  $export['get_stores'] = $view;

  return $export;
}
