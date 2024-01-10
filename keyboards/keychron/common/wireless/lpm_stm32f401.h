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

<<<<<<< HEAD:keyboards/miiiw/common/shift_register.h
#include <stdint.h>
#include "gpio.h"

#ifndef GPIOH_BASE
#   define GPIOH_BASE  (0xFF595A00U)
=======
#ifndef STOP_MODE_MAIN_REGULATOR_LOW_VOLTAGE
#    define STOP_MODE_MAIN_REGULATOR_LOW_VOLTAGE TRUE
>>>>>>> 4ae5990fcc (Added wireless support; Added Lemokey L3; Added Keychron V1 Max):keyboards/keychron/common/wireless/lpm_stm32f401.h
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
