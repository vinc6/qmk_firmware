/* Copyright 2022 QMK
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

#define _CHIBIOS_HAL_CONF_VER_8_0_

#define HAL_USE_I2C TRUE

<<<<<<< HEAD:keyboards/mechlovin/olly/octagon/halconf.h
#define HAL_USE_SPI TRUE
=======
#ifdef KC_BLUETOOTH_ENABLE
#    define PAL_USE_CALLBACKS TRUE
#    define HAL_USE_SERIAL TRUE
#    define HAL_USE_RTC TRUE
#endif
>>>>>>> 4ae5990fcc (Added wireless support; Added Lemokey L3; Added Keychron V1 Max):keyboards/keychron/k2_pro/halconf.h

#include_next <halconf.h>
