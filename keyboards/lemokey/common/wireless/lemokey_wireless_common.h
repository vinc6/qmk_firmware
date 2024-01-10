/* Copyright 2023 @ Keychron (https://www.lemokey.com)
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
<<<<<<< HEAD:keyboards/nullbitsco/snap/snap.h
#pragma once

#include "quantum.h"
#include "common/remote_kb.h"
#include "common/bitc_led.h"
=======

#include "stdint.h"
#ifdef VIA_ENABLE
#    include "via.h"
#endif
#include "quantum_keycodes.h"

void lkbt51_param_init(void);

bool process_record_lemokey_wireless(uint16_t keycode, keyrecord_t *record);
void lemokey_wireless_common_task(void);
>>>>>>> 4ae5990fcc (Added wireless support; Added Lemokey L3; Added Keychron V1 Max):keyboards/lemokey/common/wireless/lemokey_wireless_common.h
