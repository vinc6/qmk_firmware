/* Copyright 2023 @ lokher (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

<<<<<<< HEAD
<<<<<<<< HEAD:keyboards/keychron/common/wireless/lpm_stm32f401.h
<<<<<<< HEAD:keyboards/miiiw/common/shift_register.h
#include <stdint.h>
#include "gpio.h"

#ifndef GPIOH_BASE
#   define GPIOH_BASE  (0xFF595A00U)
=======
#ifndef STOP_MODE_MAIN_REGULATOR_LOW_VOLTAGE
#    define STOP_MODE_MAIN_REGULATOR_LOW_VOLTAGE TRUE
>>>>>>> 4ae5990fcc (Added wireless support; Added Lemokey L3; Added Keychron V1 Max):keyboards/keychron/common/wireless/lpm_stm32f401.h
========
#ifndef STOP_MODE_MAIN_REGULATOR_LOW_VOLTAGE
#    define STOP_MODE_MAIN_REGULATOR_LOW_VOLTAGE TRUE
>>>>>>>> refs/remotes/origin/hall_effect_playground:keyboards/lemokey/common/wireless/lpm_stm32f401.h
=======
<<<<<<<< HEAD:keyboards/keychron/common/wireless/wireless_config.h
#include "config.h"

//
#ifndef BT_HOST_DEVICES_COUNT
#    define BT_HOST_DEVICES_COUNT 3
#endif

#define P2P4G_HOST_DEVICES_COUNT 1

//  Uint: Second
#ifndef DISCONNECTED_BACKLIGHT_OFF_DELAY_TIME
#    define DISCONNECTED_BACKLIGHT_OFF_DELAY_TIME 40
#endif

//  Uint: Second, the timer restarts on key activities.
#ifndef CONNECTED_BACKLIGHT_OFF_DELAY_TIME
#    define CONNECTED_BACKLIGHT_OFF_DELAY_TIME 600
#endif
========
#ifndef STOP_MODE_MAIN_REGULATOR_LOW_VOLTAGE
#    define STOP_MODE_MAIN_REGULATOR_LOW_VOLTAGE TRUE
>>>>>>> refs/remotes/origin/hall_effect_playground
#endif

#ifndef STOP_MODE_LOW_POWER_REGULATOR_LOW_VOLTAG
#    define STOP_MODE_LOW_POWER_REGULATOR_LOW_VOLTAG TRUE
#endif

#ifndef STOP_MODE_FLASH_POWER_DOWN
#    define STOP_MODE_FLASH_POWER_DOWN TRUE
#endif

#ifndef STOP_MODE_LOW_POWER_DEEPSLEEP
#    define STOP_MODE_LOW_POWER_DEEPSLEEP TRUE
#endif
<<<<<<< HEAD
=======
>>>>>>>> refs/remotes/origin/hall_effect_playground:keyboards/keychron/common/wireless/lpm_stm32f401.h
>>>>>>> refs/remotes/origin/hall_effect_playground
