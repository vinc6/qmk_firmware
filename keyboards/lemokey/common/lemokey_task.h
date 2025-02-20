<<<<<<<< HEAD:quantum/process_keycode/process_default_layer.h
/* Copyright 2023 Nebuleon
========
/* Copyright 2022 @ Keychron (https://www.lemokey.com)
>>>>>>>> refs/remotes/origin/hall_effect_playground:keyboards/lemokey/common/lemokey_task.h
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

<<<<<<<< HEAD:quantum/process_keycode/process_default_layer.h
#include <stdint.h>
#include <stdbool.h>
#include "action.h"

#if !defined(NO_ACTION_LAYER)

bool process_default_layer(uint16_t keycode, keyrecord_t *record);

#endif // !defined(NO_ACTION_LAYER)
========
#include "stdint.h"
#include "action.h"

bool lemokey_task_kb(void);
bool process_record_lemokey_kb(uint16_t keycode, keyrecord_t *record);

void lemokey_task(void);
>>>>>>>> refs/remotes/origin/hall_effect_playground:keyboards/lemokey/common/lemokey_task.h
