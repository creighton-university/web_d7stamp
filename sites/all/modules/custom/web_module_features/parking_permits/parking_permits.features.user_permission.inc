<?php
/**
 * @file
 * parking_permits.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function parking_permits_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in permityear'.
  $permissions['add terms in permityear'] = array(
    'name' => 'add terms in permityear',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'create automobile content'.
  $permissions['create automobile content'] = array(
    'name' => 'create automobile content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create field_fee_date_authorized'.
  $permissions['create field_fee_date_authorized'] = array(
    'name' => 'create field_fee_date_authorized',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_fee_deduction_amt'.
  $permissions['create field_fee_deduction_amt'] = array(
    'name' => 'create field_fee_deduction_amt',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_fee_first_payment_date'.
  $permissions['create field_fee_first_payment_date'] = array(
    'name' => 'create field_fee_first_payment_date',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_fee_ft_pt'.
  $permissions['create field_fee_ft_pt'] = array(
    'name' => 'create field_fee_ft_pt',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_fee_num_deductions'.
  $permissions['create field_fee_num_deductions'] = array(
    'name' => 'create field_fee_num_deductions',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_fee_pay_cycle'.
  $permissions['create field_fee_pay_cycle'] = array(
    'name' => 'create field_fee_pay_cycle',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_fee_total_amt'.
  $permissions['create field_fee_total_amt'] = array(
    'name' => 'create field_fee_total_amt',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_fee_vehicle_add_count'.
  $permissions['create field_fee_vehicle_add_count'] = array(
    'name' => 'create field_fee_vehicle_add_count',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_netid_ref'.
  $permissions['create field_netid_ref'] = array(
    'name' => 'create field_netid_ref',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_permit_holder_category_tax'.
  $permissions['create field_permit_holder_category_tax'] = array(
    'name' => 'create field_permit_holder_category_tax',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_permit_holder_type_er_tax'.
  $permissions['create field_permit_holder_type_er_tax'] = array(
    'name' => 'create field_permit_holder_type_er_tax',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_sticker_num_1'.
  $permissions['create field_sticker_num_1'] = array(
    'name' => 'create field_sticker_num_1',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_sticker_num_2'.
  $permissions['create field_sticker_num_2'] = array(
    'name' => 'create field_sticker_num_2',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_sticker_num_3'.
  $permissions['create field_sticker_num_3'] = array(
    'name' => 'create field_sticker_num_3',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_vehcolor_tax'.
  $permissions['create field_vehcolor_tax'] = array(
    'name' => 'create field_vehcolor_tax',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_vehmake_tax'.
  $permissions['create field_vehmake_tax'] = array(
    'name' => 'create field_vehmake_tax',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_vehmodel'.
  $permissions['create field_vehmodel'] = array(
    'name' => 'create field_vehmodel',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_vehstyle_tax'.
  $permissions['create field_vehstyle_tax'] = array(
    'name' => 'create field_vehstyle_tax',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_vehyear'.
  $permissions['create field_vehyear'] = array(
    'name' => 'create field_vehyear',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create permit2 content'.
  $permissions['create permit2 content'] = array(
    'name' => 'create permit2 content',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any automobile content'.
  $permissions['delete any automobile content'] = array(
    'name' => 'delete any automobile content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any permit2 content'.
  $permissions['delete any permit2 content'] = array(
    'name' => 'delete any permit2 content',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own automobile content'.
  $permissions['delete own automobile content'] = array(
    'name' => 'delete own automobile content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own permit2 content'.
  $permissions['delete own permit2 content'] = array(
    'name' => 'delete own permit2 content',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in permityear'.
  $permissions['delete terms in permityear'] = array(
    'name' => 'delete terms in permityear',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any automobile content'.
  $permissions['edit any automobile content'] = array(
    'name' => 'edit any automobile content',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any permit2 content'.
  $permissions['edit any permit2 content'] = array(
    'name' => 'edit any permit2 content',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_fee_date_authorized'.
  $permissions['edit field_fee_date_authorized'] = array(
    'name' => 'edit field_fee_date_authorized',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_fee_deduction_amt'.
  $permissions['edit field_fee_deduction_amt'] = array(
    'name' => 'edit field_fee_deduction_amt',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_fee_first_payment_date'.
  $permissions['edit field_fee_first_payment_date'] = array(
    'name' => 'edit field_fee_first_payment_date',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_fee_ft_pt'.
  $permissions['edit field_fee_ft_pt'] = array(
    'name' => 'edit field_fee_ft_pt',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_fee_num_deductions'.
  $permissions['edit field_fee_num_deductions'] = array(
    'name' => 'edit field_fee_num_deductions',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_fee_pay_cycle'.
  $permissions['edit field_fee_pay_cycle'] = array(
    'name' => 'edit field_fee_pay_cycle',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_fee_total_amt'.
  $permissions['edit field_fee_total_amt'] = array(
    'name' => 'edit field_fee_total_amt',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_fee_vehicle_add_count'.
  $permissions['edit field_fee_vehicle_add_count'] = array(
    'name' => 'edit field_fee_vehicle_add_count',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_netid_ref'.
  $permissions['edit field_netid_ref'] = array(
    'name' => 'edit field_netid_ref',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_permit_holder_category_tax'.
  $permissions['edit field_permit_holder_category_tax'] = array(
    'name' => 'edit field_permit_holder_category_tax',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_permit_holder_type_er_tax'.
  $permissions['edit field_permit_holder_type_er_tax'] = array(
    'name' => 'edit field_permit_holder_type_er_tax',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_sticker_num_1'.
  $permissions['edit field_sticker_num_1'] = array(
    'name' => 'edit field_sticker_num_1',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_sticker_num_2'.
  $permissions['edit field_sticker_num_2'] = array(
    'name' => 'edit field_sticker_num_2',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_sticker_num_3'.
  $permissions['edit field_sticker_num_3'] = array(
    'name' => 'edit field_sticker_num_3',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_vehcolor_tax'.
  $permissions['edit field_vehcolor_tax'] = array(
    'name' => 'edit field_vehcolor_tax',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_vehmake_tax'.
  $permissions['edit field_vehmake_tax'] = array(
    'name' => 'edit field_vehmake_tax',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_vehmodel'.
  $permissions['edit field_vehmodel'] = array(
    'name' => 'edit field_vehmodel',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_vehstyle_tax'.
  $permissions['edit field_vehstyle_tax'] = array(
    'name' => 'edit field_vehstyle_tax',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_vehyear'.
  $permissions['edit field_vehyear'] = array(
    'name' => 'edit field_vehyear',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own automobile content'.
  $permissions['edit own automobile content'] = array(
    'name' => 'edit own automobile content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own field_fee_date_authorized'.
  $permissions['edit own field_fee_date_authorized'] = array(
    'name' => 'edit own field_fee_date_authorized',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_fee_deduction_amt'.
  $permissions['edit own field_fee_deduction_amt'] = array(
    'name' => 'edit own field_fee_deduction_amt',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_fee_first_payment_date'.
  $permissions['edit own field_fee_first_payment_date'] = array(
    'name' => 'edit own field_fee_first_payment_date',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_fee_ft_pt'.
  $permissions['edit own field_fee_ft_pt'] = array(
    'name' => 'edit own field_fee_ft_pt',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_fee_num_deductions'.
  $permissions['edit own field_fee_num_deductions'] = array(
    'name' => 'edit own field_fee_num_deductions',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_fee_pay_cycle'.
  $permissions['edit own field_fee_pay_cycle'] = array(
    'name' => 'edit own field_fee_pay_cycle',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_fee_total_amt'.
  $permissions['edit own field_fee_total_amt'] = array(
    'name' => 'edit own field_fee_total_amt',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_fee_vehicle_add_count'.
  $permissions['edit own field_fee_vehicle_add_count'] = array(
    'name' => 'edit own field_fee_vehicle_add_count',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_netid_ref'.
  $permissions['edit own field_netid_ref'] = array(
    'name' => 'edit own field_netid_ref',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_permit_holder_category_tax'.
  $permissions['edit own field_permit_holder_category_tax'] = array(
    'name' => 'edit own field_permit_holder_category_tax',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_permit_holder_type_er_tax'.
  $permissions['edit own field_permit_holder_type_er_tax'] = array(
    'name' => 'edit own field_permit_holder_type_er_tax',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_sticker_num_1'.
  $permissions['edit own field_sticker_num_1'] = array(
    'name' => 'edit own field_sticker_num_1',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_sticker_num_2'.
  $permissions['edit own field_sticker_num_2'] = array(
    'name' => 'edit own field_sticker_num_2',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_sticker_num_3'.
  $permissions['edit own field_sticker_num_3'] = array(
    'name' => 'edit own field_sticker_num_3',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_vehcolor_tax'.
  $permissions['edit own field_vehcolor_tax'] = array(
    'name' => 'edit own field_vehcolor_tax',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_vehmake_tax'.
  $permissions['edit own field_vehmake_tax'] = array(
    'name' => 'edit own field_vehmake_tax',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_vehmodel'.
  $permissions['edit own field_vehmodel'] = array(
    'name' => 'edit own field_vehmodel',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_vehstyle_tax'.
  $permissions['edit own field_vehstyle_tax'] = array(
    'name' => 'edit own field_vehstyle_tax',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_vehyear'.
  $permissions['edit own field_vehyear'] = array(
    'name' => 'edit own field_vehyear',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own permit2 content'.
  $permissions['edit own permit2 content'] = array(
    'name' => 'edit own permit2 content',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit read-only field_fee_date_authorized'.
  $permissions['edit read-only field_fee_date_authorized'] = array(
    'name' => 'edit read-only field_fee_date_authorized',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit read-only field_fee_deduction_amt'.
  $permissions['edit read-only field_fee_deduction_amt'] = array(
    'name' => 'edit read-only field_fee_deduction_amt',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit read-only field_fee_first_payment_date'.
  $permissions['edit read-only field_fee_first_payment_date'] = array(
    'name' => 'edit read-only field_fee_first_payment_date',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit read-only field_fee_ft_pt'.
  $permissions['edit read-only field_fee_ft_pt'] = array(
    'name' => 'edit read-only field_fee_ft_pt',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit read-only field_fee_num_deductions'.
  $permissions['edit read-only field_fee_num_deductions'] = array(
    'name' => 'edit read-only field_fee_num_deductions',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit read-only field_fee_pay_cycle'.
  $permissions['edit read-only field_fee_pay_cycle'] = array(
    'name' => 'edit read-only field_fee_pay_cycle',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit read-only field_fee_total_amt'.
  $permissions['edit read-only field_fee_total_amt'] = array(
    'name' => 'edit read-only field_fee_total_amt',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit read-only field_fee_vehicle_add_count'.
  $permissions['edit read-only field_fee_vehicle_add_count'] = array(
    'name' => 'edit read-only field_fee_vehicle_add_count',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit read-only field_netid_ref'.
  $permissions['edit read-only field_netid_ref'] = array(
    'name' => 'edit read-only field_netid_ref',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit read-only field_permit_holder_category_tax'.
  $permissions['edit read-only field_permit_holder_category_tax'] = array(
    'name' => 'edit read-only field_permit_holder_category_tax',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit read-only field_permit_holder_type_er_tax'.
  $permissions['edit read-only field_permit_holder_type_er_tax'] = array(
    'name' => 'edit read-only field_permit_holder_type_er_tax',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit read-only field_sticker_num_1'.
  $permissions['edit read-only field_sticker_num_1'] = array(
    'name' => 'edit read-only field_sticker_num_1',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit read-only field_sticker_num_2'.
  $permissions['edit read-only field_sticker_num_2'] = array(
    'name' => 'edit read-only field_sticker_num_2',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit read-only field_sticker_num_3'.
  $permissions['edit read-only field_sticker_num_3'] = array(
    'name' => 'edit read-only field_sticker_num_3',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit read-only field_vehcolor_tax'.
  $permissions['edit read-only field_vehcolor_tax'] = array(
    'name' => 'edit read-only field_vehcolor_tax',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit read-only field_vehmake_tax'.
  $permissions['edit read-only field_vehmake_tax'] = array(
    'name' => 'edit read-only field_vehmake_tax',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit read-only field_vehmodel'.
  $permissions['edit read-only field_vehmodel'] = array(
    'name' => 'edit read-only field_vehmodel',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit read-only field_vehstyle_tax'.
  $permissions['edit read-only field_vehstyle_tax'] = array(
    'name' => 'edit read-only field_vehstyle_tax',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit read-only field_vehyear'.
  $permissions['edit read-only field_vehyear'] = array(
    'name' => 'edit read-only field_vehyear',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit terms in permityear'.
  $permissions['edit terms in permityear'] = array(
    'name' => 'edit terms in permityear',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'view field_fee_date_authorized'.
  $permissions['view field_fee_date_authorized'] = array(
    'name' => 'view field_fee_date_authorized',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_fee_deduction_amt'.
  $permissions['view field_fee_deduction_amt'] = array(
    'name' => 'view field_fee_deduction_amt',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_fee_first_payment_date'.
  $permissions['view field_fee_first_payment_date'] = array(
    'name' => 'view field_fee_first_payment_date',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_fee_ft_pt'.
  $permissions['view field_fee_ft_pt'] = array(
    'name' => 'view field_fee_ft_pt',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_fee_num_deductions'.
  $permissions['view field_fee_num_deductions'] = array(
    'name' => 'view field_fee_num_deductions',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_fee_pay_cycle'.
  $permissions['view field_fee_pay_cycle'] = array(
    'name' => 'view field_fee_pay_cycle',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_fee_total_amt'.
  $permissions['view field_fee_total_amt'] = array(
    'name' => 'view field_fee_total_amt',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_fee_vehicle_add_count'.
  $permissions['view field_fee_vehicle_add_count'] = array(
    'name' => 'view field_fee_vehicle_add_count',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_netid_ref'.
  $permissions['view field_netid_ref'] = array(
    'name' => 'view field_netid_ref',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_permit_holder_category_tax'.
  $permissions['view field_permit_holder_category_tax'] = array(
    'name' => 'view field_permit_holder_category_tax',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_permit_holder_type_er_tax'.
  $permissions['view field_permit_holder_type_er_tax'] = array(
    'name' => 'view field_permit_holder_type_er_tax',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_sticker_num_1'.
  $permissions['view field_sticker_num_1'] = array(
    'name' => 'view field_sticker_num_1',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_sticker_num_2'.
  $permissions['view field_sticker_num_2'] = array(
    'name' => 'view field_sticker_num_2',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_sticker_num_3'.
  $permissions['view field_sticker_num_3'] = array(
    'name' => 'view field_sticker_num_3',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_vehcolor_tax'.
  $permissions['view field_vehcolor_tax'] = array(
    'name' => 'view field_vehcolor_tax',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_vehmake_tax'.
  $permissions['view field_vehmake_tax'] = array(
    'name' => 'view field_vehmake_tax',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_vehmodel'.
  $permissions['view field_vehmodel'] = array(
    'name' => 'view field_vehmodel',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_vehstyle_tax'.
  $permissions['view field_vehstyle_tax'] = array(
    'name' => 'view field_vehstyle_tax',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_vehyear'.
  $permissions['view field_vehyear'] = array(
    'name' => 'view field_vehyear',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_fee_date_authorized'.
  $permissions['view own field_fee_date_authorized'] = array(
    'name' => 'view own field_fee_date_authorized',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_fee_deduction_amt'.
  $permissions['view own field_fee_deduction_amt'] = array(
    'name' => 'view own field_fee_deduction_amt',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_fee_first_payment_date'.
  $permissions['view own field_fee_first_payment_date'] = array(
    'name' => 'view own field_fee_first_payment_date',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_fee_ft_pt'.
  $permissions['view own field_fee_ft_pt'] = array(
    'name' => 'view own field_fee_ft_pt',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_fee_num_deductions'.
  $permissions['view own field_fee_num_deductions'] = array(
    'name' => 'view own field_fee_num_deductions',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_fee_pay_cycle'.
  $permissions['view own field_fee_pay_cycle'] = array(
    'name' => 'view own field_fee_pay_cycle',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_fee_total_amt'.
  $permissions['view own field_fee_total_amt'] = array(
    'name' => 'view own field_fee_total_amt',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_fee_vehicle_add_count'.
  $permissions['view own field_fee_vehicle_add_count'] = array(
    'name' => 'view own field_fee_vehicle_add_count',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_netid_ref'.
  $permissions['view own field_netid_ref'] = array(
    'name' => 'view own field_netid_ref',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_permit_holder_category_tax'.
  $permissions['view own field_permit_holder_category_tax'] = array(
    'name' => 'view own field_permit_holder_category_tax',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_permit_holder_type_er_tax'.
  $permissions['view own field_permit_holder_type_er_tax'] = array(
    'name' => 'view own field_permit_holder_type_er_tax',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_sticker_num_1'.
  $permissions['view own field_sticker_num_1'] = array(
    'name' => 'view own field_sticker_num_1',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_sticker_num_2'.
  $permissions['view own field_sticker_num_2'] = array(
    'name' => 'view own field_sticker_num_2',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_sticker_num_3'.
  $permissions['view own field_sticker_num_3'] = array(
    'name' => 'view own field_sticker_num_3',
    'roles' => array(
      'Dispatcher' => 'Dispatcher',
      'PermitManager' => 'PermitManager',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_vehcolor_tax'.
  $permissions['view own field_vehcolor_tax'] = array(
    'name' => 'view own field_vehcolor_tax',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_vehmake_tax'.
  $permissions['view own field_vehmake_tax'] = array(
    'name' => 'view own field_vehmake_tax',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_vehmodel'.
  $permissions['view own field_vehmodel'] = array(
    'name' => 'view own field_vehmodel',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_vehstyle_tax'.
  $permissions['view own field_vehstyle_tax'] = array(
    'name' => 'view own field_vehstyle_tax',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_vehyear'.
  $permissions['view own field_vehyear'] = array(
    'name' => 'view own field_vehyear',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
