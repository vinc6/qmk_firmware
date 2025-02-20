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

#include "stdint.h"
#ifdef VIA_ENABLE
#    include "via.h"
#endif
#include "quantum_keycodes.h"
<<<<<<< HEAD
<<<<<<<< HEAD:keyboards/keychron/common/wireless/keychron_wireless_common.h

<<<<<<< HEAD:keyboards/keychron/q1v2/ansi/config.h
/* Enable caps-lock LED */
#define CAPS_LOCK_LED_INDEX 45
=======
=======

<<<<<<<< HEAD:keyboards/keychron/q1v2/jis/config.h
/* Enable caps-lock LED */
#define CAPS_LOCK_LED_INDEX 45
========
>>>>>>> refs/remotes/origin/hall_effect_playground
void lkbt51_param_init(void);

bool process_record_keychron_wireless(uint16_t keycode, keyrecord_t *record);
void keychron_wireless_common_task(void);
<<<<<<< HEAD
>>>>>>> 4ae5990fcc (Added wireless support; Added Lemokey L3; Added Keychron V1 Max):keyboards/keychron/common/wireless/keychron_wireless_common.h
========

void lkbt51_param_init(void);

bool process_record_lemokey_wireless(uint16_t keycode, keyrecord_t *record);
void lemokey_wireless_common_task(void);
>>>>>>>> refs/remotes/origin/hall_effect_playground:keyboards/lemokey/common/wireless/lemokey_wireless_common.h
=======
>>>>>>>> refs/remotes/origin/hall_effect_playground:keyboards/keychron/common/wireless/keychron_wireless_common.h
>>>>>>> refs/remotes/origin/hall_effect_playground
