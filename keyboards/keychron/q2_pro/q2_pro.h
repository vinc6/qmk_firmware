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

#include "quantum.h"
<<<<<<<< HEAD:keyboards/keychron/q2_pro/q2_pro.h
#ifdef VIA_ENABLE
#    include "via.h"
#endif

#ifdef VIA_ENABLE
#    define USER_START QK_KB_0
#else
#    define USER_START SAFE_RANGE
========
#include "keychron_task.h"
#ifdef FACTORY_TEST_ENABLE
#    include "factory_test.h"
#    include "keychron_common.h"
#endif
#ifdef LK_WIRELESS_ENABLE
#    include "lkbt51.h"
#    include "wireless.h"
#    include "keychron_wireless_common.h"
#    include "battery.h"
#endif
#if HAL_USE_ADC
#    include "analog.h"
#endif
#include "eeprom_he.h"
#ifdef ANANLOG_MATRIX
#    include "analog_matrix.h"
>>>>>>>> refs/remotes/origin/hall_effect_playground:keyboards/keychron/q1_he/q1_he.c
#endif

<<<<<<< HEAD:keyboards/keychron/c1_pro/c1_pro.c
#ifdef DIP_SWITCH_ENABLE
bool dip_switch_update_kb(uint8_t index, bool active) {
    if (index == 0) {
        default_layer_set(1UL << (active ? 2 : 0));
    }
    dip_switch_update_user(index, active);

    return true;
}
#endif

<<<<<<<< HEAD:keyboards/keychron/q2_pro/q2_pro.h
#endif // DIP_SWITCH_ENABLE
=======
// clang-format off
enum {
    KC_LOPTN = USER_START,
    KC_ROPTN,
    KC_LCMMD,
    KC_RCMMD,
    KC_TASK,
    KC_FILE,
    KC_SNAP,
    KC_CTANA,
    KC_SIRI,
#ifdef KC_BLUETOOTH_ENABLE
    BT_HST1,
    BT_HST2,
    BT_HST3,
    BAT_LVL,
#else
    BT_HST1 = KC_TRNS,
    BT_HST2 = KC_TRNS,
    BT_HST3 = KC_TRNS,
    BAT_LVL = KC_TRNS,
#endif
	NEW_SAFE_RANGE
};
>>>>>>> 4ae5990fcc (Added wireless support; Added Lemokey L3; Added Keychron V1 Max):keyboards/keychron/q2_pro/q2_pro.h
========
void keyboard_post_init_kb(void) {
#ifdef LK_WIRELESS_ENABLE
    setPinInput(P2P4_MODE_SELECT_PIN);
    setPinInput(BT_MODE_SELECT_PIN);

    lkbt51_init(false);
    wireless_init();
#endif

#ifdef ENCODER_ENABLE
    encoder_cb_init();
#endif

    keyboard_post_init_user();
}

#ifdef LK_WIRELESS_ENABLE
bool lpm_is_kb_idle(void) {
    return !factory_reset_indicating();
}
#endif
>>>>>>>> refs/remotes/origin/hall_effect_playground:keyboards/keychron/q1_he/q1_he.c
