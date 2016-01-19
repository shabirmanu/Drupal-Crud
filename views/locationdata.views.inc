<?php

/**
 * @file
 * Views integration for the mydons custom module
 */

/**
 * Implements hook_views_data()
 *
 */
function locationdata_views_data() {

 $table = array(
    'location' => array(  //  Custom table
       'table' => array(
          'group' => 'Custom Tables',      // Groupname Mydons
             'base' => array(
               'field' => 'id',  //Primary key
               'title' => 'Location',
               'help' => 'Location database table'
            )
        ),
     //Description of id
        'id' => array(  
           'title' => t('Location Id'),
           'help' => t('Location Id field'),
           // is mydons_custom_id field sortable TRUE
           'field' => array(
              'click sortable' => TRUE,  
            ),
      //Filter handler for filtering records by mydons_custom_id     
           'filter' => array(
               'handler' => 'views_handler_filter_numeric'   
            ),  

           'sort' => array(
              'handler' => 'views_handler_sort'       
           )
         ),
      //Description of mydons_custom_title field
        'name' => array(      
           'title' => t('Name'),
           'help' => t('Location Name'),
           'field' => array(
              'click sortable' => TRUE,
           ),
           'filter' => array(
              'handler' => 'views_handler_filter_string'
           ),

           'sort' => array(
              'handler' => 'views_handler_sort'
           ),
          

        ),


        'bond_goal' => array(      
           'title' => t('Bond Goal'),
           'help' => t('Bond Goal'),
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

        'deposit_goal' => array(      
           'title' => t('Deposit Goad'),
           'help' => t('Deposit Goal'),
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
       

          'category' => array(      
           'title' => t('Category'),
           'help' => t('Category'),
           'field' => array(
              'click sortable' => TRUE,
           ),
           'filter' => array(
              'handler' => 'views_handler_filter_string'
           ),

           'sort' => array(
              'handler' => 'views_handler_sort'
           ),
            'relationship' => array(
            'base' => 'taxonomy_term_data', // The name of the table to join with.
            'base field' => 'tid', // The name of the field on the joined table.
            'relationship field' => 'category',
            // 'field' => 'nid' -- see hook_views_data_alter(); not needed here.
            'handler' => 'views_handler_relationship',
            'label' => t('Term Reference:Category'),
            'title' => t('Referenced Category Terms'),
          ),

        ),
          'date_created' => array(      
           'title' => t('Created Date'),
           'field' => array(
              'handler' => 'views_handler_field_date',
              'click sortable' => TRUE,
           ),
           'filter' => array(
              'handler' => 'views_handler_filter_date'
           ),

           'sort' => array(
              'handler' => 'views_handler_sort_date'
           )
        ),

        'date_updated' => array(      
           'title' => t('Updated Date'),
           'field' => array(
              'handler' => 'views_handler_field_date',
              'click sortable' => TRUE,
           ),
           'filter' => array(
              'handler' => 'views_handler_filter_date'
           ),

           'sort' => array(
              'handler' => 'views_handler_sort_date'
           )
        ),


     
      )
    );
    return $table;
}