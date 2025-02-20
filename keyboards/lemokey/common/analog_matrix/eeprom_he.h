<<<<<<<< HEAD:keyboards/keychron/common/factory_test.h
/* Copyright 2022 @ lokher (https://www.keychron.com)
========
/* Copyright 2019 Nick Brassel (tzarc)
>>>>>>>> refs/remotes/origin/hall_effect_playground:keyboards/lemokey/common/analog_matrix/eeprom_he.h
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

<<<<<<<< HEAD:keyboards/keychron/common/factory_test.h
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

bool process_record_factory_test(uint16_t keycode, keyrecord_t *record);
========


#define EXTERNAL_EEPROM_BYTE_COUNT 1024 //
#define EXTERNAL_EEPROM_PAGE_SIZE 32
#define EXTERNAL_EEPROM_ADDRESS_SIZE 2
#define EXTERNAL_EEPROM_WRITE_TIME 5
#define EXTERNAL_EEPROM_I2C_BASE_ADDRESS 0b10100010

#ifndef EXTERNAL_EEPROM_I2C_ADDRESS
#    define EXTERNAL_EEPROM_I2C_ADDRESS(loc) (EXTERNAL_EEPROM_I2C_BASE_ADDRESS)
#endif

void he_eeprom_driver_init(void);
void he_eeprom_driver_erase(void);
void he_eeprom_read_block(void *buf, const void *addr, size_t len);
void he_eeprom_write_block(const void *buf, void *addr, size_t len);
>>>>>>>> refs/remotes/origin/hall_effect_playground:keyboards/lemokey/common/analog_matrix/eeprom_he.h

