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
<<<<<<< HEAD:keyboards/mlego/m60_split/m60_split.h
#include "quantum.h"

static inline void led_lwr(const bool on) {
#ifdef LED_NUM_LOCK_PIN
    gpio_write_pin(LED_NUM_LOCK_PIN, on);
=======
#ifndef STOP_MODE_MAIN_REGULATOR_LOW_VOLTAGE
#    define STOP_MODE_MAIN_REGULATOR_LOW_VOLTAGE TRUE
>>>>>>> 4ae5990fcc (Added wireless support; Added Lemokey L3; Added Keychron V1 Max):keyboards/lemokey/common/wireless/lpm_stm32f401.h
#endif

<<<<<<< HEAD:keyboards/mlego/m60_split/m60_split.h
static inline void led_rse(const bool on) {
#ifdef LED_SCROLL_LOCK_PIN
    gpio_write_pin(LED_SCROLL_LOCK_PIN, on);
=======
#ifndef STOP_MODE_LOW_POWER_REGULATOR_LOW_VOLTAG
#    define STOP_MODE_LOW_POWER_REGULATOR_LOW_VOLTAG TRUE
>>>>>>> 4ae5990fcc (Added wireless support; Added Lemokey L3; Added Keychron V1 Max):keyboards/lemokey/common/wireless/lpm_stm32f401.h
#endif

<<<<<<< HEAD:keyboards/mlego/m60_split/m60_split.h
static inline void led_caps(const bool on) {
#ifdef LED_CAPS_LOCK_PIN
    gpio_write_pin(LED_CAPS_LOCK_PIN, !on);
=======
#ifndef STOP_MODE_FLASH_POWER_DOWN
#    define STOP_MODE_FLASH_POWER_DOWN TRUE
>>>>>>> 4ae5990fcc (Added wireless support; Added Lemokey L3; Added Keychron V1 Max):keyboards/lemokey/common/wireless/lpm_stm32f401.h
=======
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
#endif

#ifndef STOP_MODE_LOW_POWER_REGULATOR_LOW_VOLTAG
#    define STOP_MODE_LOW_POWER_REGULATOR_LOW_VOLTAG TRUE
#endif

#ifndef STOP_MODE_FLASH_POWER_DOWN
#    define STOP_MODE_FLASH_POWER_DOWN TRUE
>>>>>>> refs/remotes/origin/hall_effect_playground
#endif

#ifndef STOP_MODE_LOW_POWER_DEEPSLEEP
#    define STOP_MODE_LOW_POWER_DEEPSLEEP TRUE
#endif
