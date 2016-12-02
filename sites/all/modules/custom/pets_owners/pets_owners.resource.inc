<?php

/**
 * Returns owners
 *
 *
 *
 * @param $pid
 *   ID of the owner we want to return.
 * @return
 *   result which is found.
 *
 * @see node_load()
 */
function _pets_owners_retrieve($pid = 'all') {
   if($pid == 'all'){
     $query = db_select('owners', 'o')
       ->fields('o');
     $result = $query->execute()->fetchAll();
   } else {
     $result = _pets_owners_select_byId($pid);
   }
  return $result;
}

function _pets_owners_select_byId($pid) {
  $query = db_select('owners', 'o')
    ->fields('o')
    ->condition('id', $pid);
  $result = $query->execute()->fetchAll();
  return $result;

}

/**
 * Creates a new node based on submitted values.
 *
 * Note that this function uses drupal_form_submit() to create new nodes,
 * which may require very specific formatting. The full implications of this
 * are beyond the scope of this comment block. The Googles are your friend.
 *
 * @param $node
 *   Array representing the attributes a node edit form would submit.
 * @return
 *   An associative array contained the new node's pid and, if applicable,
 *   the fully qualified URI to this resource.
 *
 * @see drupal_form_submit()
 */
function _pets_owners_update($pid, $data) {
  $result = _pets_owners_select_byId($pid);
  $pets_owner =  owner_validation($data, $result);

    db_update('owners')
      ->fields($pets_owner)
      ->condition('id', $pid)
      ->execute();
  return  $pets_owner;
}

function _pets_owners_create($data) {
  $pets_owner = owner_validation($data);
  db_insert('owners')
      ->fields($pets_owner)
      ->execute();
 return  $pets_owner;
}

function owner_validation($data, $result = ''){

  $pets_owner = array(
    'name' => (isset($data['name']) && $data['name'] != $result[0]->name) ? $data['name'] : $result[0]->name,
    'gender' => (isset($data['gender']) && $data['gender'] != $result[0]->gender) ? $data['gender'] : $result[0]->gender,
    'prefix' => (isset($data['prefix']) && $data['prefix'] != $result[0]->prefix) ? $data['prefix'] : $result[0]->prefix,
    'age' => (isset($data['age']) && $data['age'] != $result[0]->age) ? $data['age'] : $result[0]->age,
    'parents_fname' => (isset($data['parents_fname']) && $data['parents_fname'] != $result[0]->father_name)  ? $data['parents_fname'] : $result[0]->parents_fname,
    'perents_lname' => (isset($data['perents_lname']) && $data['perents_lname'] != $result[0]->mother_name)  ? $data['perents_lname'] : $result[0]->perents_lname,
    'have_pet' => (isset($data['have_pet']) && $data['have_pet'] != $result[0]->have_pet) ? $data['have_pet'] : $result[0]->have_pet,
    'pets_names' => (isset($data['pets_names']) && $data['pets_names'] != $result[0]->pets_names) ? $data['pets_names'] : $result[0]->pets_names,
    'email' => (isset($data['email']) && $data['email'] != $result[0]->email) ? $data['email'] : $result[0]->email,
  );

  //print_r($pets_owner['age']); die;

  if (!isset($pets_owner['name'])) {
    return services_error(t('Missing name'), 406);
  }
  elseif (strlen($pets_owner['name']) > 100) {
    return services_error(t('Too much symbols'), 406);
  }

  if (!isset($pets_owner['gender'])) {
    return services_error(t('Missing gender'), 406);
  }
  elseif ($pets_owner['gender'] != 'female' && $pets_owner['gender'] != 'male'){
    return services_error(t('gender - Wrong entry (only female or male)'), 406);
  }

  if (!isset($pets_owner['prefix'])) {
    return services_error(t('Missing prefix'), 406);
  }
  elseif ($pets_owner['prefix'] != '0' && $pets_owner['prefix'] != '1' && $pets_owner['prefix'] != '2'){
    return services_error(t(' prefix - Wrong entry (only 0, 1 or 2)'), 406);
  }

  if (!isset($pets_owner['have_pet'])) {
    return services_error(t('Missing have_pet'), 406);
  }
  elseif ($pets_owner['have_pet'] != '0' && $pets_owner['have_pet'] != '1' ){
    return services_error(t('have_pet - Wrong entry (only 0, 1)'), 406);
  }
  elseif($pets_owner['have_pet'] == '0') {
    $pets_owner['pets_names'] = '';
  }elseif($pets_owner['have_pet'] == '1' && !isset($pets_owner['pets_names'])) {
    return services_error(t('Missing pets_names'), 406);
  }

  if (!isset($pets_owner['email'])) {
    return services_error(t('Missing email'), 406);
  }
  elseif (!valid_email_address($pets_owner['email'])) {
    return services_error(t('Check your email and retry'), 406);
  }

  if (!is_numeric($pets_owner['age'])) {
    return services_error(t('Age should be numeric'), 406);
  }
  elseif ($pets_owner['age'] >= 120 || $pets_owner['age'] <= 0) {
    return services_error(t('Age can be only between 0 and 120.'), 406);
  }

  if ($pets_owner['age'] >= 17 || $pets_owner['age'] <= 0) {
    $pets_owner['parents_fname'] = '';
    $pets_owner['perents_lname'] = '';
  }
  elseif ($pets_owner['age'] <= 17) {
    return services_error(t('Missing parents_fname or/and perents_lname'), 406);
  }
  elseif (!isset($pets_owner['age'])) {
    return services_error(t('Missing age'), 406);
  }
  return $pets_owner;
 }

/**
 * Delete a node given its pid.
 *
 * @param int $pid
 *   Node ID of the node we're deleting.
 * @return bool
 *   Always returns true.
 */
function _pets_owners_delete($pid) {
   db_delete('owners')
    ->condition('id', $pid)
    ->execute();
  return TRUE;
}

/**
 * Access callback
 */
function _pets_owners_provide_access() {
  return TRUE;
}

///**
// * Updates a new node based on submitted values.
// */
//function _pets_owners_update($pid, $data) {
//
//  db_update('owners')
//    ->fields(
//      array(
//        'name' => isset($data['name']) ? $data['name'] : '',
//        'gender' => isset($data['gender']) ? $data['gender'] : '',
//        'prefix' => isset($data['prefix']) ? $data['prefix'] : '',
//        'age' => isset($data['age']) ? $data['age'] : '',
//        'parents_fname' => isset($data['father_name']) ? $data['father_name'] : '',
//        'perents_lname' => isset($data['mother_name']) ? $data['mother_name'] : '',
//        'have_pet' => isset($data['havePet']) ? $data['havePet'] : '',
//        'pets_names' => isset($data['pet_name']) ? $data['pet_name'] : '',
//        'email' => isset($data['email']) ? $data['email'] : '',
//      )
//    )
//    ->condition('id', $pid)
//    ->execute();
//
//  return $data;
//}
