/*
 * drone_joystick_config.c
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

#include "drone_game_configurations.h"

const struct ControllerConfiguration DRONE_JOYSTICK_CONFIG = {
	.mode = BTM_JOYSTICK_ANALOG,
	.joystick_configs = {
		{ // LEFT JOYSTICK
			.x_deadzone = 475,
			.y_deadzone = 475
		},
		{ // RIGHT JOYSTICK
			.x_deadzone = 475,
			.y_deadzone = 475
		}
	}
};
