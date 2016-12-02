<?php
/**
 * @file
 * Views integration for the custom module
 */


/**
 * Implements hook_views_data()
 */

function pets_owners_views_data() {
  $table = array(
    'owners' => array(
      'table' => array(
        'group' => 'Owners',      // Groupname Mydons
        'base' => array(
          'field' => 'id',
          'title' => 'Owners Custom table',
          'help' =>  'Owners Custom db table'
        )
      ),
      'id' => array(
        'title' => 'Owners Custom Id',
        'help' =>  'Owners Id',
        'field' => array(
          'click sortable' => TRUE,
        ),
        'filter' => array(
          'handler' => 'views_handler_filter_numeric'
        ),
        'sort' => array(
          'handler' => 'views_handler_sort'
        )
      ),

      'name' => array(
        'title' => 'Owners Custom Name',
        'help' =>  'Owners Name field',
        'field' => array(
          'click sortable' => TRUE,
        ),
        'filter' => array(
          'handler' => 'views_handler_filter_string'
        ),
        'sort' => array(
          'handler' => 'views_handler_sort'
        )
      ),

      'gender' => array(
        'title' => 'Owners Custom Gender',
        'help' =>  'Owners Gender field',
        'field' => array(
          'click sortable' => TRUE,
        ),
        'filter' => array(
          'handler' => 'views_handler_filter_string'
        ),
        'sort' => array(
          'handler' => 'views_handler_sort'
        )
      ),

      'prefix' => array(
        'title' => 'Owners Custom Prefix',
        'help' =>  'Owners Prefix field',
        'field' => array(
          'click sortable' => TRUE,
        ),
        'filter' => array(
          'handler' => 'views_handler_filter_in_operator'
        ),
        'sort' => array(
          'handler' => 'views_handler_sort'
        )
      ),

      'age' => array(
        'title' => 'Owners Custom Age',
        'help' =>  'Owners Age field',
        'field' => array(
          'click sortable' => TRUE,
        ),
        'filter' => array(
          'handler' => 'views_handler_filter_numeric'
        ),
        'sort' => array(
          'handler' => 'views_handler_sort'
        )
      ),

      'email' => array(
        'title' => 'Owners Custom E-mail',
        'help' =>  'Owners E-mail field',
        'field' => array(
          'click sortable' => TRUE,
        ),
        'filter' => array(
          'handler' => 'views_handler_filter_string'
        ),
        'sort' => array(
          'handler' => 'views_handler_sort'
        )
      ),
    )
  );

     return $table;
}

function pets_owners_views_data_alter(&$data) {
  //you can overwrite 'prefix' field
  $data['owners']['prefix_filter']['title'] = 'Filter by prefix field';
  $data['owners']['prefix_filter']['help'] = 'Dropdown with 2 values: female (for mrs and ms values), male (mr value).';
  $data['owners']['prefix_filter']['filter']['handler'] = 'pets_owners_handler_in_operator';

  //for bulk in custom table
  if (isset($data['owners']) && isset($data['owners']['table'])) {
    $data['owners']['views_bulk_operations'] = array(
      'title' => t('Bulk for my table'),
      'group' => t('Bulk operations'),
      'help' => t('Provide a checkbox to select the row for bulk operations.'),
      'real field' => 'id',
      //views_bulk_operations_handler_field_operations
      'field' => array(
        'handler' => 'pets_owners_handler_field_operations',
        'click sortable' => FALSE,
      ),
    );
  }

}




class pets_owners_handler_in_operator extends views_handler_filter_in_operator {
  // overwrite the get_value_options function.
  function get_value_options() {

    if (isset($this->value_options)) {
      return;
    }

    //get needed values from db
    //    $options = array();
    //    $query = db_select('owners', 'o')
    //      ->distinct()
    //      ->fields('o', array('prefix'))
    //      ->orderBy('o.prefix');
    //    $results = $query->execute();
    //    foreach($results as $result) {
    //      $options[$result->prefix] = $result->prefix;
    //
    //    }
    //     //dpm($options);
    //    $this->value_options = $options;
    $this->value_options = get_prefix();

    return $this->value_options;
  }

  /**
   *   Overwrite the op_simple, that function find column in db
   */
  function op_simple() {
    if (empty($this->value)) {
      return;
    }
    $this->ensure_my_table();

    // We use array_values() because the checkboxes keep keys and that can cause
    // array addition problems.
    $this->query->add_where($this->options['group'], 'prefix', array_values($this->value), $this->operator);
  }


}



