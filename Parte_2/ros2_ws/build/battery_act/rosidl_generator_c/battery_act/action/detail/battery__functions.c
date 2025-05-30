// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from battery_act:action/Battery.idl
// generated code does not contain a copyright notice
#include "battery_act/action/detail/battery__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
battery_act__action__Battery_Goal__init(battery_act__action__Battery_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // target_percentage
  return true;
}

void
battery_act__action__Battery_Goal__fini(battery_act__action__Battery_Goal * msg)
{
  if (!msg) {
    return;
  }
  // target_percentage
}

bool
battery_act__action__Battery_Goal__are_equal(const battery_act__action__Battery_Goal * lhs, const battery_act__action__Battery_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_percentage
  if (lhs->target_percentage != rhs->target_percentage) {
    return false;
  }
  return true;
}

bool
battery_act__action__Battery_Goal__copy(
  const battery_act__action__Battery_Goal * input,
  battery_act__action__Battery_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // target_percentage
  output->target_percentage = input->target_percentage;
  return true;
}

battery_act__action__Battery_Goal *
battery_act__action__Battery_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_act__action__Battery_Goal * msg = (battery_act__action__Battery_Goal *)allocator.allocate(sizeof(battery_act__action__Battery_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(battery_act__action__Battery_Goal));
  bool success = battery_act__action__Battery_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
battery_act__action__Battery_Goal__destroy(battery_act__action__Battery_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    battery_act__action__Battery_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
battery_act__action__Battery_Goal__Sequence__init(battery_act__action__Battery_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_act__action__Battery_Goal * data = NULL;

  if (size) {
    data = (battery_act__action__Battery_Goal *)allocator.zero_allocate(size, sizeof(battery_act__action__Battery_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = battery_act__action__Battery_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        battery_act__action__Battery_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
battery_act__action__Battery_Goal__Sequence__fini(battery_act__action__Battery_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      battery_act__action__Battery_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

battery_act__action__Battery_Goal__Sequence *
battery_act__action__Battery_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_act__action__Battery_Goal__Sequence * array = (battery_act__action__Battery_Goal__Sequence *)allocator.allocate(sizeof(battery_act__action__Battery_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = battery_act__action__Battery_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
battery_act__action__Battery_Goal__Sequence__destroy(battery_act__action__Battery_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    battery_act__action__Battery_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
battery_act__action__Battery_Goal__Sequence__are_equal(const battery_act__action__Battery_Goal__Sequence * lhs, const battery_act__action__Battery_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!battery_act__action__Battery_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
battery_act__action__Battery_Goal__Sequence__copy(
  const battery_act__action__Battery_Goal__Sequence * input,
  battery_act__action__Battery_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(battery_act__action__Battery_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    battery_act__action__Battery_Goal * data =
      (battery_act__action__Battery_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!battery_act__action__Battery_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          battery_act__action__Battery_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!battery_act__action__Battery_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `warning`
#include "rosidl_runtime_c/string_functions.h"

bool
battery_act__action__Battery_Result__init(battery_act__action__Battery_Result * msg)
{
  if (!msg) {
    return false;
  }
  // warning
  if (!rosidl_runtime_c__String__init(&msg->warning)) {
    battery_act__action__Battery_Result__fini(msg);
    return false;
  }
  return true;
}

void
battery_act__action__Battery_Result__fini(battery_act__action__Battery_Result * msg)
{
  if (!msg) {
    return;
  }
  // warning
  rosidl_runtime_c__String__fini(&msg->warning);
}

bool
battery_act__action__Battery_Result__are_equal(const battery_act__action__Battery_Result * lhs, const battery_act__action__Battery_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // warning
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->warning), &(rhs->warning)))
  {
    return false;
  }
  return true;
}

bool
battery_act__action__Battery_Result__copy(
  const battery_act__action__Battery_Result * input,
  battery_act__action__Battery_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // warning
  if (!rosidl_runtime_c__String__copy(
      &(input->warning), &(output->warning)))
  {
    return false;
  }
  return true;
}

battery_act__action__Battery_Result *
battery_act__action__Battery_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_act__action__Battery_Result * msg = (battery_act__action__Battery_Result *)allocator.allocate(sizeof(battery_act__action__Battery_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(battery_act__action__Battery_Result));
  bool success = battery_act__action__Battery_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
battery_act__action__Battery_Result__destroy(battery_act__action__Battery_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    battery_act__action__Battery_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
battery_act__action__Battery_Result__Sequence__init(battery_act__action__Battery_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_act__action__Battery_Result * data = NULL;

  if (size) {
    data = (battery_act__action__Battery_Result *)allocator.zero_allocate(size, sizeof(battery_act__action__Battery_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = battery_act__action__Battery_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        battery_act__action__Battery_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
battery_act__action__Battery_Result__Sequence__fini(battery_act__action__Battery_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      battery_act__action__Battery_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

battery_act__action__Battery_Result__Sequence *
battery_act__action__Battery_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_act__action__Battery_Result__Sequence * array = (battery_act__action__Battery_Result__Sequence *)allocator.allocate(sizeof(battery_act__action__Battery_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = battery_act__action__Battery_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
battery_act__action__Battery_Result__Sequence__destroy(battery_act__action__Battery_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    battery_act__action__Battery_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
battery_act__action__Battery_Result__Sequence__are_equal(const battery_act__action__Battery_Result__Sequence * lhs, const battery_act__action__Battery_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!battery_act__action__Battery_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
battery_act__action__Battery_Result__Sequence__copy(
  const battery_act__action__Battery_Result__Sequence * input,
  battery_act__action__Battery_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(battery_act__action__Battery_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    battery_act__action__Battery_Result * data =
      (battery_act__action__Battery_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!battery_act__action__Battery_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          battery_act__action__Battery_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!battery_act__action__Battery_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
battery_act__action__Battery_Feedback__init(battery_act__action__Battery_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_percentage
  return true;
}

void
battery_act__action__Battery_Feedback__fini(battery_act__action__Battery_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_percentage
}

bool
battery_act__action__Battery_Feedback__are_equal(const battery_act__action__Battery_Feedback * lhs, const battery_act__action__Battery_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_percentage
  if (lhs->current_percentage != rhs->current_percentage) {
    return false;
  }
  return true;
}

bool
battery_act__action__Battery_Feedback__copy(
  const battery_act__action__Battery_Feedback * input,
  battery_act__action__Battery_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_percentage
  output->current_percentage = input->current_percentage;
  return true;
}

battery_act__action__Battery_Feedback *
battery_act__action__Battery_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_act__action__Battery_Feedback * msg = (battery_act__action__Battery_Feedback *)allocator.allocate(sizeof(battery_act__action__Battery_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(battery_act__action__Battery_Feedback));
  bool success = battery_act__action__Battery_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
battery_act__action__Battery_Feedback__destroy(battery_act__action__Battery_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    battery_act__action__Battery_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
battery_act__action__Battery_Feedback__Sequence__init(battery_act__action__Battery_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_act__action__Battery_Feedback * data = NULL;

  if (size) {
    data = (battery_act__action__Battery_Feedback *)allocator.zero_allocate(size, sizeof(battery_act__action__Battery_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = battery_act__action__Battery_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        battery_act__action__Battery_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
battery_act__action__Battery_Feedback__Sequence__fini(battery_act__action__Battery_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      battery_act__action__Battery_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

battery_act__action__Battery_Feedback__Sequence *
battery_act__action__Battery_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_act__action__Battery_Feedback__Sequence * array = (battery_act__action__Battery_Feedback__Sequence *)allocator.allocate(sizeof(battery_act__action__Battery_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = battery_act__action__Battery_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
battery_act__action__Battery_Feedback__Sequence__destroy(battery_act__action__Battery_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    battery_act__action__Battery_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
battery_act__action__Battery_Feedback__Sequence__are_equal(const battery_act__action__Battery_Feedback__Sequence * lhs, const battery_act__action__Battery_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!battery_act__action__Battery_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
battery_act__action__Battery_Feedback__Sequence__copy(
  const battery_act__action__Battery_Feedback__Sequence * input,
  battery_act__action__Battery_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(battery_act__action__Battery_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    battery_act__action__Battery_Feedback * data =
      (battery_act__action__Battery_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!battery_act__action__Battery_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          battery_act__action__Battery_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!battery_act__action__Battery_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "battery_act/action/detail/battery__functions.h"

bool
battery_act__action__Battery_SendGoal_Request__init(battery_act__action__Battery_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    battery_act__action__Battery_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!battery_act__action__Battery_Goal__init(&msg->goal)) {
    battery_act__action__Battery_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
battery_act__action__Battery_SendGoal_Request__fini(battery_act__action__Battery_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  battery_act__action__Battery_Goal__fini(&msg->goal);
}

bool
battery_act__action__Battery_SendGoal_Request__are_equal(const battery_act__action__Battery_SendGoal_Request * lhs, const battery_act__action__Battery_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!battery_act__action__Battery_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
battery_act__action__Battery_SendGoal_Request__copy(
  const battery_act__action__Battery_SendGoal_Request * input,
  battery_act__action__Battery_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!battery_act__action__Battery_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

battery_act__action__Battery_SendGoal_Request *
battery_act__action__Battery_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_act__action__Battery_SendGoal_Request * msg = (battery_act__action__Battery_SendGoal_Request *)allocator.allocate(sizeof(battery_act__action__Battery_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(battery_act__action__Battery_SendGoal_Request));
  bool success = battery_act__action__Battery_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
battery_act__action__Battery_SendGoal_Request__destroy(battery_act__action__Battery_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    battery_act__action__Battery_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
battery_act__action__Battery_SendGoal_Request__Sequence__init(battery_act__action__Battery_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_act__action__Battery_SendGoal_Request * data = NULL;

  if (size) {
    data = (battery_act__action__Battery_SendGoal_Request *)allocator.zero_allocate(size, sizeof(battery_act__action__Battery_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = battery_act__action__Battery_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        battery_act__action__Battery_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
battery_act__action__Battery_SendGoal_Request__Sequence__fini(battery_act__action__Battery_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      battery_act__action__Battery_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

battery_act__action__Battery_SendGoal_Request__Sequence *
battery_act__action__Battery_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_act__action__Battery_SendGoal_Request__Sequence * array = (battery_act__action__Battery_SendGoal_Request__Sequence *)allocator.allocate(sizeof(battery_act__action__Battery_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = battery_act__action__Battery_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
battery_act__action__Battery_SendGoal_Request__Sequence__destroy(battery_act__action__Battery_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    battery_act__action__Battery_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
battery_act__action__Battery_SendGoal_Request__Sequence__are_equal(const battery_act__action__Battery_SendGoal_Request__Sequence * lhs, const battery_act__action__Battery_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!battery_act__action__Battery_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
battery_act__action__Battery_SendGoal_Request__Sequence__copy(
  const battery_act__action__Battery_SendGoal_Request__Sequence * input,
  battery_act__action__Battery_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(battery_act__action__Battery_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    battery_act__action__Battery_SendGoal_Request * data =
      (battery_act__action__Battery_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!battery_act__action__Battery_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          battery_act__action__Battery_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!battery_act__action__Battery_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
battery_act__action__Battery_SendGoal_Response__init(battery_act__action__Battery_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    battery_act__action__Battery_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
battery_act__action__Battery_SendGoal_Response__fini(battery_act__action__Battery_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
battery_act__action__Battery_SendGoal_Response__are_equal(const battery_act__action__Battery_SendGoal_Response * lhs, const battery_act__action__Battery_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
battery_act__action__Battery_SendGoal_Response__copy(
  const battery_act__action__Battery_SendGoal_Response * input,
  battery_act__action__Battery_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

battery_act__action__Battery_SendGoal_Response *
battery_act__action__Battery_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_act__action__Battery_SendGoal_Response * msg = (battery_act__action__Battery_SendGoal_Response *)allocator.allocate(sizeof(battery_act__action__Battery_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(battery_act__action__Battery_SendGoal_Response));
  bool success = battery_act__action__Battery_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
battery_act__action__Battery_SendGoal_Response__destroy(battery_act__action__Battery_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    battery_act__action__Battery_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
battery_act__action__Battery_SendGoal_Response__Sequence__init(battery_act__action__Battery_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_act__action__Battery_SendGoal_Response * data = NULL;

  if (size) {
    data = (battery_act__action__Battery_SendGoal_Response *)allocator.zero_allocate(size, sizeof(battery_act__action__Battery_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = battery_act__action__Battery_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        battery_act__action__Battery_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
battery_act__action__Battery_SendGoal_Response__Sequence__fini(battery_act__action__Battery_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      battery_act__action__Battery_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

battery_act__action__Battery_SendGoal_Response__Sequence *
battery_act__action__Battery_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_act__action__Battery_SendGoal_Response__Sequence * array = (battery_act__action__Battery_SendGoal_Response__Sequence *)allocator.allocate(sizeof(battery_act__action__Battery_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = battery_act__action__Battery_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
battery_act__action__Battery_SendGoal_Response__Sequence__destroy(battery_act__action__Battery_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    battery_act__action__Battery_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
battery_act__action__Battery_SendGoal_Response__Sequence__are_equal(const battery_act__action__Battery_SendGoal_Response__Sequence * lhs, const battery_act__action__Battery_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!battery_act__action__Battery_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
battery_act__action__Battery_SendGoal_Response__Sequence__copy(
  const battery_act__action__Battery_SendGoal_Response__Sequence * input,
  battery_act__action__Battery_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(battery_act__action__Battery_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    battery_act__action__Battery_SendGoal_Response * data =
      (battery_act__action__Battery_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!battery_act__action__Battery_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          battery_act__action__Battery_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!battery_act__action__Battery_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
battery_act__action__Battery_GetResult_Request__init(battery_act__action__Battery_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    battery_act__action__Battery_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
battery_act__action__Battery_GetResult_Request__fini(battery_act__action__Battery_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
battery_act__action__Battery_GetResult_Request__are_equal(const battery_act__action__Battery_GetResult_Request * lhs, const battery_act__action__Battery_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
battery_act__action__Battery_GetResult_Request__copy(
  const battery_act__action__Battery_GetResult_Request * input,
  battery_act__action__Battery_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

battery_act__action__Battery_GetResult_Request *
battery_act__action__Battery_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_act__action__Battery_GetResult_Request * msg = (battery_act__action__Battery_GetResult_Request *)allocator.allocate(sizeof(battery_act__action__Battery_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(battery_act__action__Battery_GetResult_Request));
  bool success = battery_act__action__Battery_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
battery_act__action__Battery_GetResult_Request__destroy(battery_act__action__Battery_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    battery_act__action__Battery_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
battery_act__action__Battery_GetResult_Request__Sequence__init(battery_act__action__Battery_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_act__action__Battery_GetResult_Request * data = NULL;

  if (size) {
    data = (battery_act__action__Battery_GetResult_Request *)allocator.zero_allocate(size, sizeof(battery_act__action__Battery_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = battery_act__action__Battery_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        battery_act__action__Battery_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
battery_act__action__Battery_GetResult_Request__Sequence__fini(battery_act__action__Battery_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      battery_act__action__Battery_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

battery_act__action__Battery_GetResult_Request__Sequence *
battery_act__action__Battery_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_act__action__Battery_GetResult_Request__Sequence * array = (battery_act__action__Battery_GetResult_Request__Sequence *)allocator.allocate(sizeof(battery_act__action__Battery_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = battery_act__action__Battery_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
battery_act__action__Battery_GetResult_Request__Sequence__destroy(battery_act__action__Battery_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    battery_act__action__Battery_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
battery_act__action__Battery_GetResult_Request__Sequence__are_equal(const battery_act__action__Battery_GetResult_Request__Sequence * lhs, const battery_act__action__Battery_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!battery_act__action__Battery_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
battery_act__action__Battery_GetResult_Request__Sequence__copy(
  const battery_act__action__Battery_GetResult_Request__Sequence * input,
  battery_act__action__Battery_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(battery_act__action__Battery_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    battery_act__action__Battery_GetResult_Request * data =
      (battery_act__action__Battery_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!battery_act__action__Battery_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          battery_act__action__Battery_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!battery_act__action__Battery_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "battery_act/action/detail/battery__functions.h"

bool
battery_act__action__Battery_GetResult_Response__init(battery_act__action__Battery_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!battery_act__action__Battery_Result__init(&msg->result)) {
    battery_act__action__Battery_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
battery_act__action__Battery_GetResult_Response__fini(battery_act__action__Battery_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  battery_act__action__Battery_Result__fini(&msg->result);
}

bool
battery_act__action__Battery_GetResult_Response__are_equal(const battery_act__action__Battery_GetResult_Response * lhs, const battery_act__action__Battery_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!battery_act__action__Battery_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
battery_act__action__Battery_GetResult_Response__copy(
  const battery_act__action__Battery_GetResult_Response * input,
  battery_act__action__Battery_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!battery_act__action__Battery_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

battery_act__action__Battery_GetResult_Response *
battery_act__action__Battery_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_act__action__Battery_GetResult_Response * msg = (battery_act__action__Battery_GetResult_Response *)allocator.allocate(sizeof(battery_act__action__Battery_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(battery_act__action__Battery_GetResult_Response));
  bool success = battery_act__action__Battery_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
battery_act__action__Battery_GetResult_Response__destroy(battery_act__action__Battery_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    battery_act__action__Battery_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
battery_act__action__Battery_GetResult_Response__Sequence__init(battery_act__action__Battery_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_act__action__Battery_GetResult_Response * data = NULL;

  if (size) {
    data = (battery_act__action__Battery_GetResult_Response *)allocator.zero_allocate(size, sizeof(battery_act__action__Battery_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = battery_act__action__Battery_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        battery_act__action__Battery_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
battery_act__action__Battery_GetResult_Response__Sequence__fini(battery_act__action__Battery_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      battery_act__action__Battery_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

battery_act__action__Battery_GetResult_Response__Sequence *
battery_act__action__Battery_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_act__action__Battery_GetResult_Response__Sequence * array = (battery_act__action__Battery_GetResult_Response__Sequence *)allocator.allocate(sizeof(battery_act__action__Battery_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = battery_act__action__Battery_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
battery_act__action__Battery_GetResult_Response__Sequence__destroy(battery_act__action__Battery_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    battery_act__action__Battery_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
battery_act__action__Battery_GetResult_Response__Sequence__are_equal(const battery_act__action__Battery_GetResult_Response__Sequence * lhs, const battery_act__action__Battery_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!battery_act__action__Battery_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
battery_act__action__Battery_GetResult_Response__Sequence__copy(
  const battery_act__action__Battery_GetResult_Response__Sequence * input,
  battery_act__action__Battery_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(battery_act__action__Battery_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    battery_act__action__Battery_GetResult_Response * data =
      (battery_act__action__Battery_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!battery_act__action__Battery_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          battery_act__action__Battery_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!battery_act__action__Battery_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "battery_act/action/detail/battery__functions.h"

bool
battery_act__action__Battery_FeedbackMessage__init(battery_act__action__Battery_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    battery_act__action__Battery_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!battery_act__action__Battery_Feedback__init(&msg->feedback)) {
    battery_act__action__Battery_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
battery_act__action__Battery_FeedbackMessage__fini(battery_act__action__Battery_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  battery_act__action__Battery_Feedback__fini(&msg->feedback);
}

bool
battery_act__action__Battery_FeedbackMessage__are_equal(const battery_act__action__Battery_FeedbackMessage * lhs, const battery_act__action__Battery_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!battery_act__action__Battery_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
battery_act__action__Battery_FeedbackMessage__copy(
  const battery_act__action__Battery_FeedbackMessage * input,
  battery_act__action__Battery_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!battery_act__action__Battery_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

battery_act__action__Battery_FeedbackMessage *
battery_act__action__Battery_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_act__action__Battery_FeedbackMessage * msg = (battery_act__action__Battery_FeedbackMessage *)allocator.allocate(sizeof(battery_act__action__Battery_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(battery_act__action__Battery_FeedbackMessage));
  bool success = battery_act__action__Battery_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
battery_act__action__Battery_FeedbackMessage__destroy(battery_act__action__Battery_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    battery_act__action__Battery_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
battery_act__action__Battery_FeedbackMessage__Sequence__init(battery_act__action__Battery_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_act__action__Battery_FeedbackMessage * data = NULL;

  if (size) {
    data = (battery_act__action__Battery_FeedbackMessage *)allocator.zero_allocate(size, sizeof(battery_act__action__Battery_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = battery_act__action__Battery_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        battery_act__action__Battery_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
battery_act__action__Battery_FeedbackMessage__Sequence__fini(battery_act__action__Battery_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      battery_act__action__Battery_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

battery_act__action__Battery_FeedbackMessage__Sequence *
battery_act__action__Battery_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_act__action__Battery_FeedbackMessage__Sequence * array = (battery_act__action__Battery_FeedbackMessage__Sequence *)allocator.allocate(sizeof(battery_act__action__Battery_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = battery_act__action__Battery_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
battery_act__action__Battery_FeedbackMessage__Sequence__destroy(battery_act__action__Battery_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    battery_act__action__Battery_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
battery_act__action__Battery_FeedbackMessage__Sequence__are_equal(const battery_act__action__Battery_FeedbackMessage__Sequence * lhs, const battery_act__action__Battery_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!battery_act__action__Battery_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
battery_act__action__Battery_FeedbackMessage__Sequence__copy(
  const battery_act__action__Battery_FeedbackMessage__Sequence * input,
  battery_act__action__Battery_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(battery_act__action__Battery_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    battery_act__action__Battery_FeedbackMessage * data =
      (battery_act__action__Battery_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!battery_act__action__Battery_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          battery_act__action__Battery_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!battery_act__action__Battery_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
