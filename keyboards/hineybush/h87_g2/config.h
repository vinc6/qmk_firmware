<<<<<<<< HEAD:keyboards/hineybush/h87_g2/config.h
/*
========
/* Copyright 2024 @ Keychron (https://www.keychron.com)
 *
>>>>>>>> refs/remotes/origin/hall_effect_playground:keyboards/keychron/common/analog_matrix/action_toggle.c
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
<<<<<<<< HEAD:keyboards/hineybush/h87_g2/config.h
#pragma once

#define BACKLIGHT_PWM_DRIVER PWMD3
#define BACKLIGHT_PWM_CHANNEL 1
#define BACKLIGHT_PAL_MODE 1
========

#include "analog_matrix.h"

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
>>>>>>>> refs/remotes/origin/hall_effect_playground:keyboards/keychron/common/analog_matrix/action_toggle.c
