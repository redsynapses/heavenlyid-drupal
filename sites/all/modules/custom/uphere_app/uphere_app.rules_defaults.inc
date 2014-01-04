<?php
/**
 * @file
 * uphere_app.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function uphere_app_default_rules_configuration() {
  $items = array();
  $items['rules_reference_dongle_with_vehicle'] = entity_import('rules_config', '{ "rules_reference_dongle_with_vehicle" : {
      "LABEL" : "Reference Dongle with Vehicle",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_presave--dongle" : { "bundle" : "dongle" } },
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "text", "value" : [ "node:field-dongle-vin" ] },
            "PROVIDE" : { "variable_added" : { "variable_added_vin" : "Added variable" } }
          }
        },
        { "entity_query" : {
            "USING" : {
              "type" : "node",
              "property" : "field_veh_vin",
              "value" : [ "variable-added-vin" ]
            },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched_veh" : "Fetched entity" } }
          }
        },
        { "drupal_message" : { "message" : "Just picked up the node [entity-fetched-veh:0] for VIN [node:field-dongle-vin] for this Dongle [node:field-dongle-id]" } },
        { "data_set" : {
            "data" : [ "node:field-dongle-veh-ref" ],
            "value" : [ "entity-fetched-veh:0" ]
          }
        }
      ]
    }
  }');
  return $items;
}
