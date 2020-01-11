
typedef enum {
  FAULT,
  NEUTRAL,
  DRIVE,
  NUM_CAR_EVENTS,
} InputCarEvents;

typedef enum {
  PRESSED = NUM_CAR_EVENTS + 1,
  RELEASED,
  NUM_BRAKE_EVENTS,
} BrakeEvents;

typedef enum {
  PEDAL_EVENT_THROTTLE_READING = NUM_BRAKE_EVENTS + 1,
  PEDAL_EVENT_THROTTLE_ENABLE,
  PEDAL_EVENT_THROTTLE_DISABLE,
  NUM_THROTTLE_EVENTS,
} ThrottleEvents;
