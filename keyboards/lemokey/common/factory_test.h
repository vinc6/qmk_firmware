/* Copyright 2022 @ lokher (https://www.keychron.com)
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

<<<<<<< HEAD:keyboards/s_ol/0xc_pad/keymaps/default/rgb_matrix_user.inc
static hsv_t RGB_TESTING_math(hsv_t hsv, uint8_t i, uint8_t time) {
    hsv.v = 255;
    hsv.s = 255;
=======
#pragma once
>>>>>>> refs/remotes/origin/hall_effect_playground:keyboards/lemokey/common/factory_test.h

#define FACTORY_RESET_CHECK process_record_factory_test
#define FACTORY_RESET_TASK factory_test_task

void factory_test_init(void);

#if defined(LED_MATRIX_ENABLE) || defined(RGB_MATRIX_ENABLE)
bool factory_test_indicator(void);
#endif

//void process_record_factory_test(uint16_t keycode, keyrecord_t *record);
bool factory_reset_indicating(void);
void factory_test_task(void);
void factory_test_rx(uint8_t *data, uint8_t length);
void factory_indication_start(void);

bool process_record_factory_test(uint16_t keycode, keyrecord_t *record);

