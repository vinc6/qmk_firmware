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

<<<<<<< HEAD:keyboards/mechlovin/delphine/keymaps/default/keymap.c
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_6x4(
        KC_ESC,  BL_STEP, RM_TOGG, RM_NEXT,
        KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
        KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
        KC_P4,   KC_P5,   KC_P6,   KC_PEQL,
        KC_P1,   KC_P2,   KC_P3,   KC_PENT,
        KC_P0,   KC_P0,   KC_PDOT, KC_BSPC
    ),
=======
#include "analog_matrix.h"
>>>>>>> refs/remotes/origin/hall_effect_playground:keyboards/lemokey/common/analog_matrix/action_regular_trigger.c

bool regular_trigger_action(analog_key_t *key) {
    if (key->state == AKS_REGULAR_PRESSED && (key->travel == 0 || key->travel < key->regular.deactn_pt)) {
        key->state = AKS_REGULAR_RELEASED;
        return true;
    } else if (key->state == AKS_REGULAR_RELEASED && key->travel >= key->regular.actn_pt) {
        key->state = AKS_REGULAR_PRESSED;
        return true;
    }

    return false;
}
