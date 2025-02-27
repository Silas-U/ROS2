// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_action_interfaces:action/Fibonacci.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "custom_action_interfaces/action/fibonacci.h"


#ifndef CUSTOM_ACTION_INTERFACES__ACTION__DETAIL__FIBONACCI__STRUCT_H_
#define CUSTOM_ACTION_INTERFACES__ACTION__DETAIL__FIBONACCI__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Fibonacci in the package custom_action_interfaces.
typedef struct custom_action_interfaces__action__Fibonacci_Goal
{
  int32_t order;
} custom_action_interfaces__action__Fibonacci_Goal;

// Struct for a sequence of custom_action_interfaces__action__Fibonacci_Goal.
typedef struct custom_action_interfaces__action__Fibonacci_Goal__Sequence
{
  custom_action_interfaces__action__Fibonacci_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_action_interfaces__action__Fibonacci_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'sequence'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/Fibonacci in the package custom_action_interfaces.
typedef struct custom_action_interfaces__action__Fibonacci_Result
{
  rosidl_runtime_c__int32__Sequence sequence;
} custom_action_interfaces__action__Fibonacci_Result;

// Struct for a sequence of custom_action_interfaces__action__Fibonacci_Result.
typedef struct custom_action_interfaces__action__Fibonacci_Result__Sequence
{
  custom_action_interfaces__action__Fibonacci_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_action_interfaces__action__Fibonacci_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'partial_sequence'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in action/Fibonacci in the package custom_action_interfaces.
typedef struct custom_action_interfaces__action__Fibonacci_Feedback
{
  rosidl_runtime_c__int32__Sequence partial_sequence;
} custom_action_interfaces__action__Fibonacci_Feedback;

// Struct for a sequence of custom_action_interfaces__action__Fibonacci_Feedback.
typedef struct custom_action_interfaces__action__Fibonacci_Feedback__Sequence
{
  custom_action_interfaces__action__Fibonacci_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_action_interfaces__action__Fibonacci_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "custom_action_interfaces/action/detail/fibonacci__struct.h"

/// Struct defined in action/Fibonacci in the package custom_action_interfaces.
typedef struct custom_action_interfaces__action__Fibonacci_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  custom_action_interfaces__action__Fibonacci_Goal goal;
} custom_action_interfaces__action__Fibonacci_SendGoal_Request;

// Struct for a sequence of custom_action_interfaces__action__Fibonacci_SendGoal_Request.
typedef struct custom_action_interfaces__action__Fibonacci_SendGoal_Request__Sequence
{
  custom_action_interfaces__action__Fibonacci_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_action_interfaces__action__Fibonacci_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Fibonacci in the package custom_action_interfaces.
typedef struct custom_action_interfaces__action__Fibonacci_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} custom_action_interfaces__action__Fibonacci_SendGoal_Response;

// Struct for a sequence of custom_action_interfaces__action__Fibonacci_SendGoal_Response.
typedef struct custom_action_interfaces__action__Fibonacci_SendGoal_Response__Sequence
{
  custom_action_interfaces__action__Fibonacci_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_action_interfaces__action__Fibonacci_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  custom_action_interfaces__action__Fibonacci_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  custom_action_interfaces__action__Fibonacci_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Fibonacci in the package custom_action_interfaces.
typedef struct custom_action_interfaces__action__Fibonacci_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  custom_action_interfaces__action__Fibonacci_SendGoal_Request__Sequence request;
  custom_action_interfaces__action__Fibonacci_SendGoal_Response__Sequence response;
} custom_action_interfaces__action__Fibonacci_SendGoal_Event;

// Struct for a sequence of custom_action_interfaces__action__Fibonacci_SendGoal_Event.
typedef struct custom_action_interfaces__action__Fibonacci_SendGoal_Event__Sequence
{
  custom_action_interfaces__action__Fibonacci_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_action_interfaces__action__Fibonacci_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Fibonacci in the package custom_action_interfaces.
typedef struct custom_action_interfaces__action__Fibonacci_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} custom_action_interfaces__action__Fibonacci_GetResult_Request;

// Struct for a sequence of custom_action_interfaces__action__Fibonacci_GetResult_Request.
typedef struct custom_action_interfaces__action__Fibonacci_GetResult_Request__Sequence
{
  custom_action_interfaces__action__Fibonacci_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_action_interfaces__action__Fibonacci_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "custom_action_interfaces/action/detail/fibonacci__struct.h"

/// Struct defined in action/Fibonacci in the package custom_action_interfaces.
typedef struct custom_action_interfaces__action__Fibonacci_GetResult_Response
{
  int8_t status;
  custom_action_interfaces__action__Fibonacci_Result result;
} custom_action_interfaces__action__Fibonacci_GetResult_Response;

// Struct for a sequence of custom_action_interfaces__action__Fibonacci_GetResult_Response.
typedef struct custom_action_interfaces__action__Fibonacci_GetResult_Response__Sequence
{
  custom_action_interfaces__action__Fibonacci_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_action_interfaces__action__Fibonacci_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  custom_action_interfaces__action__Fibonacci_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  custom_action_interfaces__action__Fibonacci_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Fibonacci in the package custom_action_interfaces.
typedef struct custom_action_interfaces__action__Fibonacci_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  custom_action_interfaces__action__Fibonacci_GetResult_Request__Sequence request;
  custom_action_interfaces__action__Fibonacci_GetResult_Response__Sequence response;
} custom_action_interfaces__action__Fibonacci_GetResult_Event;

// Struct for a sequence of custom_action_interfaces__action__Fibonacci_GetResult_Event.
typedef struct custom_action_interfaces__action__Fibonacci_GetResult_Event__Sequence
{
  custom_action_interfaces__action__Fibonacci_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_action_interfaces__action__Fibonacci_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "custom_action_interfaces/action/detail/fibonacci__struct.h"

/// Struct defined in action/Fibonacci in the package custom_action_interfaces.
typedef struct custom_action_interfaces__action__Fibonacci_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  custom_action_interfaces__action__Fibonacci_Feedback feedback;
} custom_action_interfaces__action__Fibonacci_FeedbackMessage;

// Struct for a sequence of custom_action_interfaces__action__Fibonacci_FeedbackMessage.
typedef struct custom_action_interfaces__action__Fibonacci_FeedbackMessage__Sequence
{
  custom_action_interfaces__action__Fibonacci_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_action_interfaces__action__Fibonacci_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_ACTION_INTERFACES__ACTION__DETAIL__FIBONACCI__STRUCT_H_
