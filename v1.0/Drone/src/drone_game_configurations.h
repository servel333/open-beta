/*
 * drone_game_configurations.h
 * Version: Drone Open Beta 1.0
 *
 * Copyright (C) 2013 EVO CONTROLLERS, LLC.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef DRONE_GAME_CONFIGURATIONS_H_
#define DRONE_GAME_CONFIGURATIONS_H_

#include "configurations.h"

extern const struct GlobalHeader DEFAULT_HEADER;

extern const struct ControllerConfiguration DRONE_KEYBOARD_CONFIG;
extern const struct ControllerConfiguration DRONE_KEYBOARD_MOUSE_CONFIG;
extern const struct ControllerConfiguration DRONE_GAMEPAD_CONFIG;
extern const struct ControllerConfiguration DRONE_JOYSTICK_CONFIG;
extern const struct ControllerConfiguration DRONE_IOS_CONFIG;
//extern const struct ControllerConfiguration DRONE_SSF_GAMEPAD_CONFIG;
extern const struct ControllerConfiguration DRONE_SSF_ARCADE_CONFIG;
//extern const struct ControllerConfiguration DRONE_XPLAY_CONFIG;
extern const struct ControllerConfiguration DRONE_GTEL_CONFIG;
extern const struct ControllerConfiguration DRONE_GTEL_IOS_CONFIG;
extern const struct ControllerConfiguration DRONE_GSRS_CONFIG;
extern const struct ControllerConfiguration DRONE_ICP_CONFIG;

#endif /* DEFAULT_CONFIGURATIONS_H_ */