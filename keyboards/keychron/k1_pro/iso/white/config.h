/* Copyright 2023 @ Keychron (https://www.keychron.com)
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

#ifdef LED_MATRIX_ENABLE
/* LED Matrix Driver Configuration */
<<<<<<< HEAD:keyboards/keychron/c1_pro/ansi/white/config.h
#define SNLED27351_I2C_ADDRESS_1 SNLED27351_I2C_ADDRESS_GND
#define SNLED27351_PHASE_CHANNEL SNLED27351_SCAN_PHASE_9_CHANNEL
#define SNLED27351_CURRENT_TUNE \
    { 0x9D, 0x9D, 0x44, 0x9D, 0x9D, 0x44, 0x9D, 0x9D, 0x44, 0x9D, 0x9D, 0x44 }

/* Enbale caps_lock, win os and mac os indicator */
#define CAPS_LOCK_LED_INDEX 63
#define MAC_LOCK_LED_INDEX 64
#define WIN_LOCK_LED_INDEX 65
=======
#    define DRIVER_COUNT 1
#    define DRIVER_ADDR_1 0b1110100

/* LED Matrix Configuration */
#    define LED_MATRIX_LED_COUNT 88

/* Set to infinit, which is use in USB mode by default */
#    define LED_MATRIX_TIMEOUT LED_MATRIX_TIMEOUT_INFINITE

/* Allow to shutdown driver to save power */
#    define LED_MATRIX_DRIVER_SHUTDOWN_ENABLE

/* Turn off backllit if brightness value is low */
#    define LED_MATRIX_BRIGHTNESS_TURN_OFF_VAL 48

/* Indication led */
#    define LOW_BAT_IND_INDEX 80

// LED Matrix Animation modes. Explicitly enabled
// For full list of effects, see:
// https://docs.qmk.fm/#/feature_led_matrix?id=led-matrix-effects
// #if defined(LED_MATRIX_KEYPRESSES) || defined(LED_MATRIX_KEYRELEASES)
#    define LED_MATRIX_KEYPRESSES
#    define LED_MATRIX_KEYRELEASES

/* Use first 6 channels of LED driver */
#    define PHASE_CHANNEL MSKPHASE_6CHANNEL

/* Set LED driver current */
#    define SNLED27351_CURRENT_TUNE \
        { 0x1d, 0x1d, 0x1d, 0x1d, 0x1d, 0x1d, 0x1d, 0x1d, 0x1d, 0x1d, 0x1d, 0x1d }
#endif
>>>>>>> 4ae5990fcc (Added wireless support; Added Lemokey L3; Added Keychron V1 Max):keyboards/keychron/k1_pro/iso/white/config.h
