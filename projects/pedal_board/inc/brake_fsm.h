#pragma once
#include "fsm.h"

// initialize the brake fsm
StatusCode brake_fsm_init(Fsm *brake);

// process the fsm event
bool brake_fsm_process_event(Fsm *brake_fsm, Event *e);
