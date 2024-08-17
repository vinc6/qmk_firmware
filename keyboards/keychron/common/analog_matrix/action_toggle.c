/* Copyright 2024 @ Keychron (https://www.keychron.com)
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

#include "analog_matrix.h"

<<<<<<< HEAD:keyboards/keychron/bluetooth/lpm.h
<<<<<<< HEAD:keyboards/bastardkb/charybdis/3x6/config.h
/* Trackball angle adjustment. */
#define ROTATIONAL_TRANSFORM_ANGLE -25
=======
#ifndef RUN_MODE_PROCESS_TIME
#    define RUN_MODE_PROCESS_TIME 1000
#endif

typedef enum { PM_RUN, PM_LOW_POWER_RUN, PM_SLEEP, PM_LOW_POWER_SLEEP, PM_STOP0, PM_STOP1, PM_STOP2, PM_STANDBY_WITH_RAM, PM_STANDBY, PM_SHUTDOWN } pm_t;

void lpm_init(void);
void lpm_timer_reset(void);
void lpm_timer_stop(void);
bool usb_power_connected(void);
void enter_power_mode(pm_t mode);
void lpm_task(void);
>>>>>>> 4ae5990fcc (Added wireless support; Added Lemokey L3; Added Keychron V1 Max):keyboards/keychron/bluetooth/lpm.h
=======
bool toggle_action(analog_key_t *key) {
    if (key->state == AKS_REGULAR_PRESSED && (key->travel == 0 || key->travel < key->regular.deactn_pt)) {
        key->state = AKS_REGULAR_RELEASED;
    } else if (key->state == AKS_REGULAR_RELEASED && key->travel > key->regular.actn_pt) {
        key->state = AKS_REGULAR_PRESSED;
        key->hold  = !key->hold;
        return true;
    }

    return false;
}
>>>>>>> a576a0b47b (Added q1_he):keyboards/keychron/common/analog_matrix/action_toggle.c
