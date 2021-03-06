#pragma once

typedef enum {
  PEDAL_CAN_EVENT_BRAKE_PRESSED = 0,
  PEDAL_CAN_EVENT_BRAKE_RELEASED,
  NUM_PEDAL_CAN_BRAKE_EVENTS,
} PedalCanBrakeEvent;

typedef enum {
  PEDAL_EVENT_THROTTLE_READING = NUM_PEDAL_CAN_BRAKE_EVENTS + 1,
  PEDAL_THROTTLE_EVENT_DATA,
  PEDAL_THROTTLE_EVENT_FAULT,
  PEDAL_EVENT_THROTTLE_ENABLE,
  PEDAL_EVENT_THROTTLE_DISABLE,
  NUM_PEDAL_THROTTLE_EVENTS,
} PedalThrottleEvent;

typedef enum {
  PEDAL_BRAKE_MONITOR_EVENT_FAULT = NUM_PEDAL_THROTTLE_EVENTS + 1,
  NUM_PEDAL_BRAKE_MONITOR_EVENT,
} PedalBrakeMonitorEvent;

typedef enum {
  PEDAL_CAN_RX = NUM_PEDAL_BRAKE_MONITOR_EVENT + 1,
  PEDAL_CAN_TX,
  PEDAL_CAN_FAULT,
  NUM_PEDAL_CAN_EVENTS,
} PedalCanEvent;

typedef enum {
  PEDAL_DRIVE_INPUT_EVENT_DRIVE = NUM_PEDAL_CAN_EVENTS + 1,
  PEDAL_DRIVE_INPUT_EVENT_NEUTRAL,
  PEDAL_DRIVE_INPUT_EVENT_FAULT,
  NUM_PEDAL_DRIVE_INPUT_EVENTS,
} PedalDriveInputEvent;

typedef enum {
  PEDAL_BRAKE_FSM_EVENT_PRESSED = NUM_PEDAL_DRIVE_INPUT_EVENTS + 1,
  PEDAL_BRAKE_FSM_EVENT_RELEASED,
  NUM_PEDAL_BRAKE_FSM_EVENTS,
} PedalBrakeFsmEvent;
