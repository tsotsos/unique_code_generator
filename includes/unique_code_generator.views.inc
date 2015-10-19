<?php
/**
 * Implements hook_views_data().
 */
function unique_code_generator_views_data()
{

    $data = array();
    $data['unique_code_generator']['table']['group'] = t('Unique Code generator');
    $data['unique_code_generator']['table']['base'] = array(
        'title' => t('unique_code_generator'),
        'help' => t('Contains records we want exposed to Views.'),
    );
    $data['unique_code_generator']['id'] = array(
        'title' => t('ID'),
        'help' => t('The record ID.'),
        'field' => array(
            'handler' => 'views_handler_field_numeric',
        ),
        'sort' => array(
            'handler' => 'views_handler_sort',
        ),
        'filter' => array(
            'handler' => 'views_handler_filter_numeric',
        ),
    );
    $data['unique_code_generator']['code'] = array(
        'title' => t('Code'),
        'help' => t('The Code.'),
        'field' => array(
            'handler' => 'views_handler_field',
        ),
        'sort' => array(
            'handler' => 'views_handler_sort',
        ),
        'filter' => array(
            'handler' => 'views_handler_filter_string',
        ),
    );
    $data['unique_code_generator']['created'] = array(
        'title' => t('Created datetime'),
        'help' => t('The code created date time.'),
        'field' => array(
            'handler' => 'views_handler_field_date',
        ),
        'sort' => array(
            'handler' => 'views_handler_sort_date',
        ),
        'filter' => array(
            'handler' => 'views_handler_filter_date',
        ),
    );
    $data['unique_code_generator']['table']['join']['users'] = array(
        'user' => array(
            'left_field' => 'uid',
            'field' => 'uid',
        ),
    );
    $data['unique_code_generator']['uid'] = array(
    'title' => t('User ID'),
    'help' => t('The user ID of the user'),
    'relationship' => array(
      'base' => 'users',
      'base field' => 'uid',
      'handler' => 'views_handler_relationship',
      'skip base' => 'users',
    ),
  );
    return $data;

}
