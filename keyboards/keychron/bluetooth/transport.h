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

#pragma once

<<<<<<<< HEAD:keyboards/keychron/bluetooth/transport.h
<<<<<<< HEAD:keyboards/keychron/s1/config.h
/* Increase I2C speed to 1000 KHz */
#define I2C1_TIMINGR_PRESC 0U
#define I2C1_TIMINGR_SCLDEL 3U
#define I2C1_TIMINGR_SDADEL 0U
#define I2C1_TIMINGR_SCLH 15U
#define I2C1_TIMINGR_SCLL 51U
=======
typedef enum {
    TRANSPORT_NONE,
    TRANSPORT_USB,
    TRANSPORT_BLUETOOTH,
} transport_t;

#ifdef NKRO_ENABLE
typedef struct {
    bool usb : 1;
    bool bluetooth : 1;
} nkro_t;
#endif

void        set_transport(transport_t new_transport);
transport_t get_transport(void);

void bt_transport_enable(bool enable);
void usb_power_connect(void);
void usb_power_disconnect(void);
void usb_transport_enable(bool enable);
void usb_remote_wakeup(void);
>>>>>>> 4ae5990fcc (Added wireless support; Added Lemokey L3; Added Keychron V1 Max):keyboards/keychron/bluetooth/transport.h
========
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

>>>>>>>> refs/remotes/origin/hall_effect_playground:keyboards/keychron/common/factory_test.h
