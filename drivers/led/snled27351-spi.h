/* Copyright 2021 @ Keychron (https://www.keychron.com)
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

#include <stdint.h>
#include <stdbool.h>
#include "progmem.h"
#include "util.h"

<<<<<<< HEAD
=======
<<<<<<<< HEAD:drivers/led/snled27351-simple-spi.h
#if defined(LED_MATRIX_SNLED27351_SPI)
#    define SNLED27351_LED_COUNT LED_MATRIX_LED_COUNT
#endif

#define SNLED27351_DRIVER_COUNT (sizeof(cs_pins) / sizeof(pin_t))
typedef struct snled27351_led_t {
    uint8_t driver : 2;
    uint8_t v;
========
>>>>>>> refs/remotes/origin/hall_effect_playground
#if defined(RGB_MATRIX_SNLED27351_SPI)
#    define SNLED27351_LED_COUNT RGB_MATRIX_LED_COUNT
#endif

<<<<<<< HEAD
<<<<<<< HEAD:keyboards/input_club/k_type/is31fl3733-dual.h
#define IS31FL3733_REG_COMMAND 0xFD

#define IS31FL3733_COMMAND_LED_CONTROL 0x00
#define IS31FL3733_COMMAND_PWM 0x01
#define IS31FL3733_COMMAND_AUTO_BREATH 0x02
#define IS31FL3733_COMMAND_FUNCTION 0x03

#define IS31FL3733_FUNCTION_REG_CONFIGURATION 0x00
#define IS31FL3733_FUNCTION_REG_GLOBAL_CURRENT 0x01
#define IS31FL3733_FUNCTION_REG_SW_PULLUP 0x0F
#define IS31FL3733_FUNCTION_REG_CS_PULLDOWN 0x10
#define IS31FL3733_FUNCTION_REG_RESET 0x11

#define IS31FL3733_REG_COMMAND_WRITE_LOCK 0xFE
#define IS31FL3733_COMMAND_WRITE_LOCK_MAGIC 0xC5

#define IS31FL3733_I2C_ADDRESS_GND_GND 0x50
#define IS31FL3733_I2C_ADDRESS_GND_SCL 0x51
#define IS31FL3733_I2C_ADDRESS_GND_SDA 0x52
#define IS31FL3733_I2C_ADDRESS_GND_VCC 0x53
#define IS31FL3733_I2C_ADDRESS_SCL_GND 0x54
#define IS31FL3733_I2C_ADDRESS_SCL_SCL 0x55
#define IS31FL3733_I2C_ADDRESS_SCL_SDA 0x56
#define IS31FL3733_I2C_ADDRESS_SCL_VCC 0x57
#define IS31FL3733_I2C_ADDRESS_SDA_GND 0x58
#define IS31FL3733_I2C_ADDRESS_SDA_SCL 0x59
#define IS31FL3733_I2C_ADDRESS_SDA_SDA 0x5A
#define IS31FL3733_I2C_ADDRESS_SDA_VCC 0x5B
#define IS31FL3733_I2C_ADDRESS_VCC_GND 0x5C
#define IS31FL3733_I2C_ADDRESS_VCC_SCL 0x5D
#define IS31FL3733_I2C_ADDRESS_VCC_SDA 0x5E
#define IS31FL3733_I2C_ADDRESS_VCC_VCC 0x5F

#if !defined(IS31FL3733_LED_COUNT)
#    define IS31FL3733_LED_COUNT RGB_MATRIX_LED_COUNT
#endif

#if defined(IS31FL3733_I2C_ADDRESS_4)
#    define IS31FL3733_DRIVER_COUNT 4
#elif defined(IS31FL3733_I2C_ADDRESS_3)
#    define IS31FL3733_DRIVER_COUNT 3
#elif defined(IS31FL3733_I2C_ADDRESS_2)
#    define IS31FL3733_DRIVER_COUNT 2
#elif defined(IS31FL3733_I2C_ADDRESS_1)
#    define IS31FL3733_DRIVER_COUNT 1
#endif

typedef struct is31fl3733_led_t {
=======
#    define SNLED27351_DRIVER_COUNT (sizeof(cs_pins)/sizeof(pin_t))
typedef struct snled27351_led_t {
>>>>>>> 4ae5990fcc (Added wireless support; Added Lemokey L3; Added Keychron V1 Max):drivers/led/snled27351-spi.h
=======
#    define SNLED27351_DRIVER_COUNT (sizeof(cs_pins)/sizeof(pin_t))
typedef struct snled27351_led_t {
>>>>>>> refs/remotes/origin/hall_effect_playground
    uint8_t driver : 2;
    uint8_t r;
    uint8_t g;
    uint8_t b;
<<<<<<< HEAD
<<<<<<< HEAD:keyboards/input_club/k_type/is31fl3733-dual.h
} PACKED is31fl3733_led_t;
=======
} PACKED snled27351_led_t;
>>>>>>> 4ae5990fcc (Added wireless support; Added Lemokey L3; Added Keychron V1 Max):drivers/led/snled27351-spi.h

extern const snled27351_led_t PROGMEM g_snled27351_leds[SNLED27351_LED_COUNT];

<<<<<<< HEAD:keyboards/input_club/k_type/is31fl3733-dual.h
void is31fl3733_init_drivers(void);
void is31fl3733_init(uint8_t bus, uint8_t index);
void is31fl3733_write_register(uint8_t index, uint8_t addr, uint8_t reg, uint8_t data);
void is31fl3733_select_page(uint8_t index, uint8_t addr, uint8_t page);
=======
=======
>>>>>>>> refs/remotes/origin/hall_effect_playground:drivers/led/snled27351-spi.h
} PACKED snled27351_led_t;

extern const snled27351_led_t PROGMEM g_snled27351_leds[SNLED27351_LED_COUNT];

>>>>>>> refs/remotes/origin/hall_effect_playground
void snled27351_init_drivers(void);
void snled27351_init(uint8_t index);
bool snled27351_write_register(uint8_t index, uint8_t page, uint8_t reg, uint8_t data);
bool snled27351_write_pwm_buffer(uint8_t index, uint8_t *pwm_buffer);
<<<<<<< HEAD
>>>>>>> 4ae5990fcc (Added wireless support; Added Lemokey L3; Added Keychron V1 Max):drivers/led/snled27351-spi.h

=======

<<<<<<<< HEAD:drivers/led/snled27351-simple-spi.h
void snled27351_set_value(int index, uint8_t value);
void snled27351_set_value_all(uint8_t value);

void snled27351_set_led_control_register(uint8_t index, bool value);
========
>>>>>>> refs/remotes/origin/hall_effect_playground
void snled27351_set_color(int index, uint8_t red, uint8_t green, uint8_t blue);
void snled27351_set_color_all(uint8_t red, uint8_t green, uint8_t blue);

void snled27351_set_led_control_register(uint8_t index, bool red, bool green, bool blue);
<<<<<<< HEAD
=======
>>>>>>>> refs/remotes/origin/hall_effect_playground:drivers/led/snled27351-spi.h
>>>>>>> refs/remotes/origin/hall_effect_playground

// This should not be called from an interrupt
// (eg. from a timer interrupt).
// Call this while idle (in between matrix scans).
// If the buffer is dirty, it will update the driver with the buffer.
<<<<<<< HEAD
<<<<<<< HEAD:keyboards/input_club/k_type/is31fl3733-dual.h
void is31fl3733_update_pwm_buffers(uint8_t bus, uint8_t index);
void is31fl3733_update_led_control_registers(uint8_t bus, uint8_t index);
=======
=======
>>>>>>> refs/remotes/origin/hall_effect_playground
void snled27351_update_pwm_buffers(uint8_t index);
void snled27351_update_led_control_registers(uint8_t index);
void snled27351_flush(void);
void snled27351_shutdown(void);
void snled27351_exit_shutdown(void);
void snled27351_sw_return_normal(uint8_t index);
void snled27351_sw_shutdown(uint8_t index);
<<<<<<< HEAD
>>>>>>> 4ae5990fcc (Added wireless support; Added Lemokey L3; Added Keychron V1 Max):drivers/led/snled27351-spi.h
=======
>>>>>>> refs/remotes/origin/hall_effect_playground

// Registers Page Define
#define CONFIGURE_CMD_PAGE 0xFD
#define LED_CONTROL_PAGE 0x00
#define LED_PWM_PAGE 0x01
#define FUNCTION_PAGE 0x03
#define CURRENT_TUNE_PAGE 0x04

// Function Register: address 0x00
#define CONFIGURATION_REG 0x00
#define MSKSW_SHUT_DOWN_MODE (0x0 << 0)
#define MSKSW_NORMAL_MODE (0x1 << 0)

#define DRIVER_ID_REG 0x11
#define SNLED27351_ID 0x8A

#define PDU_REG 0x13
#define MSKSET_CA_CB_CHANNEL 0xAA
#define MSKCLR_CA_CB_CHANNEL 0x00

#define SCAN_PHASE_REG 0x14
#define MSKPHASE_12CHANNEL 0x00
#define MSKPHASE_11CHANNEL 0x01
#define MSKPHASE_10CHANNEL 0x02
#define MSKPHASE_9CHANNEL 0x03
#define MSKPHASE_8CHANNEL 0x04
#define MSKPHASE_7CHANNEL 0x05
#define MSKPHASE_6CHANNEL 0x06
#define MSKPHASE_5CHANNEL 0x07
#define MSKPHASE_4CHANNEL 0x08
#define MSKPHASE_3CHANNEL 0x09
#define MSKPHASE_2CHANNEL 0x0A
#define MSKPHASE_1CHANNEL 0x0B

#define SLEW_RATE_CONTROL_MODE1_REG 0x15
#define MSKPWM_DELAY_PHASE_ENABLE 0x04
#define MSKPWM_DELAY_PHASE_DISABLE 0x00

#define SLEW_RATE_CONTROL_MODE2_REG 0x16
#define MSKDRIVING_SINKING_CHHANNEL_SLEWRATE_ENABLE 0xC0
#define MSKDRIVING_SINKING_CHHANNEL_SLEWRATE_DISABLE 0x00

#define OPEN_SHORT_ENABLE_REG 0x17
#define MSKOPEN_DETECTION_ENABLE (0x01 << 7)
#define MSKOPEN_DETECTION_DISABLE (0x00)

#define MSKSHORT_DETECTION_ENABLE (0x01 << 6)
#define MSKSHORT_DETECTION_DISABLE (0x00)

#define OPEN_SHORT_DUTY_REG 0x18
#define OPEN_SHORT_FLAG_REG 0x19

#define MSKOPEN_DETECTION_INTERRUPT_ENABLE (0x01 << 7)
#define MSKOPEN_DETECTION_INTERRUPT_DISABLE (0x00)

#define MSKSHORT_DETECTION_INTERRUPT_ENABLE (0x01 << 6)
#define MSKSHORT_DETECTION_INTERRUPT_DISABLE (0x00)

#define SOFTWARE_SLEEP_REG 0x1A
#define MSKSLEEP_ENABLE 0x02
#define MSKSLEEP_DISABLE 0x00

// LED Control Registers
#define LED_CONTROL_ON_OFF_FIRST_ADDR 0x0
#define LED_CONTROL_ON_OFF_LAST_ADDR 0x17
#define LED_CONTROL_ON_OFF_LENGTH ((LED_CONTROL_ON_OFF_LAST_ADDR - LED_CONTROL_ON_OFF_FIRST_ADDR) + 1)

#define LED_CONTROL_OPEN_FIRST_ADDR 0x18
#define LED_CONTROL_OPEN_LAST_ADDR 0x2F
#define LED_CONTROL_OPEN_LENGTH ((LED_CONTROL_OPEN_LAST_ADDR - LED_CONTROL_OPEN_FIRST_ADDR) + 1)

#define LED_CONTROL_SHORT_FIRST_ADDR 0x30
#define LED_CONTROL_SHORT_LAST_ADDR 0x47
#define LED_CONTROL_SHORT_LENGTH ((LED_CONTROL_SHORT_LAST_ADDR - LED_CONTROL_SHORT_FIRST_ADDR) + 1)

#define LED_CONTROL_PAGE_LENGTH 0x48

// LED Control Registers
#define LED_PWM_FIRST_ADDR 0x00
#define LED_PWM_LAST_ADDR 0xBF
#define LED_PWM_LENGTH 0xC0

// Current Tune Registers
#define LED_CURRENT_TUNE_FIRST_ADDR 0x00
#define LED_CURRENT_TUNE_LAST_ADDR 0x0B
#define LED_CURRENT_TUNE_LENGTH 0x0C

<<<<<<< HEAD
#define SW1_CS1 0x00
#define SW1_CS2 0x01
#define SW1_CS3 0x02
#define SW1_CS4 0x03
#define SW1_CS5 0x04
#define SW1_CS6 0x05
#define SW1_CS7 0x06
#define SW1_CS8 0x07
#define SW1_CS9 0x08
#define SW1_CS10 0x09
#define SW1_CS11 0x0A
#define SW1_CS12 0x0B
#define SW1_CS13 0x0C
#define SW1_CS14 0x0D
#define SW1_CS15 0x0E
#define SW1_CS16 0x0F

#define SW2_CS1 0x10
#define SW2_CS2 0x11
#define SW2_CS3 0x12
#define SW2_CS4 0x13
#define SW2_CS5 0x14
#define SW2_CS6 0x15
#define SW2_CS7 0x16
#define SW2_CS8 0x17
#define SW2_CS9 0x18
#define SW2_CS10 0x19
#define SW2_CS11 0x1A
#define SW2_CS12 0x1B
#define SW2_CS13 0x1C
#define SW2_CS14 0x1D
#define SW2_CS15 0x1E
#define SW2_CS16 0x1F

#define SW3_CS1 0x20
#define SW3_CS2 0x21
#define SW3_CS3 0x22
#define SW3_CS4 0x23
#define SW3_CS5 0x24
#define SW3_CS6 0x25
#define SW3_CS7 0x26
#define SW3_CS8 0x27
#define SW3_CS9 0x28
#define SW3_CS10 0x29
#define SW3_CS11 0x2A
#define SW3_CS12 0x2B
#define SW3_CS13 0x2C
#define SW3_CS14 0x2D
#define SW3_CS15 0x2E
#define SW3_CS16 0x2F

#define SW4_CS1 0x30
#define SW4_CS2 0x31
#define SW4_CS3 0x32
#define SW4_CS4 0x33
#define SW4_CS5 0x34
#define SW4_CS6 0x35
#define SW4_CS7 0x36
#define SW4_CS8 0x37
#define SW4_CS9 0x38
#define SW4_CS10 0x39
#define SW4_CS11 0x3A
#define SW4_CS12 0x3B
#define SW4_CS13 0x3C
#define SW4_CS14 0x3D
#define SW4_CS15 0x3E
#define SW4_CS16 0x3F

#define SW5_CS1 0x40
#define SW5_CS2 0x41
#define SW5_CS3 0x42
#define SW5_CS4 0x43
#define SW5_CS5 0x44
#define SW5_CS6 0x45
#define SW5_CS7 0x46
#define SW5_CS8 0x47
#define SW5_CS9 0x48
#define SW5_CS10 0x49
#define SW5_CS11 0x4A
#define SW5_CS12 0x4B
#define SW5_CS13 0x4C
#define SW5_CS14 0x4D
#define SW5_CS15 0x4E
#define SW5_CS16 0x4F

#define SW6_CS1 0x50
#define SW6_CS2 0x51
#define SW6_CS3 0x52
#define SW6_CS4 0x53
#define SW6_CS5 0x54
#define SW6_CS6 0x55
#define SW6_CS7 0x56
#define SW6_CS8 0x57
#define SW6_CS9 0x58
#define SW6_CS10 0x59
#define SW6_CS11 0x5A
#define SW6_CS12 0x5B
#define SW6_CS13 0x5C
#define SW6_CS14 0x5D
#define SW6_CS15 0x5E
#define SW6_CS16 0x5F

#define SW7_CS1 0x60
#define SW7_CS2 0x61
#define SW7_CS3 0x62
#define SW7_CS4 0x63
#define SW7_CS5 0x64
#define SW7_CS6 0x65
#define SW7_CS7 0x66
#define SW7_CS8 0x67
#define SW7_CS9 0x68
#define SW7_CS10 0x69
#define SW7_CS11 0x6A
#define SW7_CS12 0x6B
#define SW7_CS13 0x6C
#define SW7_CS14 0x6D
#define SW7_CS15 0x6E
#define SW7_CS16 0x6F

#define SW8_CS1 0x70
#define SW8_CS2 0x71
#define SW8_CS3 0x72
#define SW8_CS4 0x73
#define SW8_CS5 0x74
#define SW8_CS6 0x75
#define SW8_CS7 0x76
#define SW8_CS8 0x77
#define SW8_CS9 0x78
#define SW8_CS10 0x79
#define SW8_CS11 0x7A
#define SW8_CS12 0x7B
#define SW8_CS13 0x7C
#define SW8_CS14 0x7D
#define SW8_CS15 0x7E
#define SW8_CS16 0x7F

#define SW9_CS1 0x80
#define SW9_CS2 0x81
#define SW9_CS3 0x82
#define SW9_CS4 0x83
#define SW9_CS5 0x84
#define SW9_CS6 0x85
#define SW9_CS7 0x86
#define SW9_CS8 0x87
#define SW9_CS9 0x88
#define SW9_CS10 0x89
#define SW9_CS11 0x8A
#define SW9_CS12 0x8B
#define SW9_CS13 0x8C
#define SW9_CS14 0x8D
#define SW9_CS15 0x8E
#define SW9_CS16 0x8F

#define SW10_CS1 0x90
#define SW10_CS2 0x91
#define SW10_CS3 0x92
#define SW10_CS4 0x93
#define SW10_CS5 0x94
#define SW10_CS6 0x95
#define SW10_CS7 0x96
#define SW10_CS8 0x97
#define SW10_CS9 0x98
#define SW10_CS10 0x99
#define SW10_CS11 0x9A
#define SW10_CS12 0x9B
#define SW10_CS13 0x9C
#define SW10_CS14 0x9D
#define SW10_CS15 0x9E
#define SW10_CS16 0x9F

#define SW11_CS1 0xA0
#define SW11_CS2 0xA1
#define SW11_CS3 0xA2
#define SW11_CS4 0xA3
#define SW11_CS5 0xA4
#define SW11_CS6 0xA5
#define SW11_CS7 0xA6
#define SW11_CS8 0xA7
#define SW11_CS9 0xA8
#define SW11_CS10 0xA9
#define SW11_CS11 0xAA
#define SW11_CS12 0xAB
#define SW11_CS13 0xAC
#define SW11_CS14 0xAD
#define SW11_CS15 0xAE
#define SW11_CS16 0xAF

#define SW12_CS1 0xB0
#define SW12_CS2 0xB1
#define SW12_CS3 0xB2
#define SW12_CS4 0xB3
#define SW12_CS5 0xB4
#define SW12_CS6 0xB5
#define SW12_CS7 0xB6
#define SW12_CS8 0xB7
#define SW12_CS9 0xB8
#define SW12_CS10 0xB9
#define SW12_CS11 0xBA
#define SW12_CS12 0xBB
#define SW12_CS13 0xBC
#define SW12_CS14 0xBD
#define SW12_CS15 0xBE
#define SW12_CS16 0xBF
=======
#define A_1 0x00
#define A_2 0x01
#define A_3 0x02
#define A_4 0x03
#define A_5 0x04
#define A_6 0x05
#define A_7 0x06
#define A_8 0x07
#define A_9 0x08
#define A_10 0x09
#define A_11 0x0A
#define A_12 0x0B
#define A_13 0x0C
#define A_14 0x0D
#define A_15 0x0E
#define A_16 0x0F

#define B_1 0x10
#define B_2 0x11
#define B_3 0x12
#define B_4 0x13
#define B_5 0x14
#define B_6 0x15
#define B_7 0x16
#define B_8 0x17
#define B_9 0x18
#define B_10 0x19
#define B_11 0x1A
#define B_12 0x1B
#define B_13 0x1C
#define B_14 0x1D
#define B_15 0x1E
#define B_16 0x1F

#define C_1 0x20
#define C_2 0x21
#define C_3 0x22
#define C_4 0x23
#define C_5 0x24
#define C_6 0x25
#define C_7 0x26
#define C_8 0x27
#define C_9 0x28
#define C_10 0x29
#define C_11 0x2A
#define C_12 0x2B
#define C_13 0x2C
#define C_14 0x2D
#define C_15 0x2E
#define C_16 0x2F

#define D_1 0x30
#define D_2 0x31
#define D_3 0x32
#define D_4 0x33
#define D_5 0x34
#define D_6 0x35
#define D_7 0x36
#define D_8 0x37
#define D_9 0x38
#define D_10 0x39
#define D_11 0x3A
#define D_12 0x3B
#define D_13 0x3C
#define D_14 0x3D
#define D_15 0x3E
#define D_16 0x3F

#define E_1 0x40
#define E_2 0x41
#define E_3 0x42
#define E_4 0x43
#define E_5 0x44
#define E_6 0x45
#define E_7 0x46
#define E_8 0x47
#define E_9 0x48
#define E_10 0x49
#define E_11 0x4A
#define E_12 0x4B
#define E_13 0x4C
#define E_14 0x4D
#define E_15 0x4E
#define E_16 0x4F

#define F_1 0x50
#define F_2 0x51
#define F_3 0x52
#define F_4 0x53
#define F_5 0x54
#define F_6 0x55
#define F_7 0x56
#define F_8 0x57
#define F_9 0x58
#define F_10 0x59
#define F_11 0x5A
#define F_12 0x5B
#define F_13 0x5C
#define F_14 0x5D
#define F_15 0x5E
#define F_16 0x5F

#define G_1 0x60
#define G_2 0x61
#define G_3 0x62
#define G_4 0x63
#define G_5 0x64
#define G_6 0x65
#define G_7 0x66
#define G_8 0x67
#define G_9 0x68
#define G_10 0x69
#define G_11 0x6A
#define G_12 0x6B
#define G_13 0x6C
#define G_14 0x6D
#define G_15 0x6E
#define G_16 0x6F

#define H_1 0x70
#define H_2 0x71
#define H_3 0x72
#define H_4 0x73
#define H_5 0x74
#define H_6 0x75
#define H_7 0x76
#define H_8 0x77
#define H_9 0x78
#define H_10 0x79
#define H_11 0x7A
#define H_12 0x7B
#define H_13 0x7C
#define H_14 0x7D
#define H_15 0x7E
#define H_16 0x7F

#define I_1 0x80
#define I_2 0x81
#define I_3 0x82
#define I_4 0x83
#define I_5 0x84
#define I_6 0x85
#define I_7 0x86
#define I_8 0x87
#define I_9 0x88
#define I_10 0x89
#define I_11 0x8A
#define I_12 0x8B
#define I_13 0x8C
#define I_14 0x8D
#define I_15 0x8E
#define I_16 0x8F

#define J_1 0x90
#define J_2 0x91
#define J_3 0x92
#define J_4 0x93
#define J_5 0x94
#define J_6 0x95
#define J_7 0x96
#define J_8 0x97
#define J_9 0x98
#define J_10 0x99
#define J_11 0x9A
#define J_12 0x9B
#define J_13 0x9C
#define J_14 0x9D
#define J_15 0x9E
#define J_16 0x9F

#define K_1 0xA0
#define K_2 0xA1
#define K_3 0xA2
#define K_4 0xA3
#define K_5 0xA4
#define K_6 0xA5
#define K_7 0xA6
#define K_8 0xA7
#define K_9 0xA8
#define K_10 0xA9
#define K_11 0xAA
#define K_12 0xAB
#define K_13 0xAC
#define K_14 0xAD
#define K_15 0xAE
#define K_16 0xAF

#define L_1 0xB0
#define L_2 0xB1
#define L_3 0xB2
#define L_4 0xB3
#define L_5 0xB4
#define L_6 0xB5
#define L_7 0xB6
#define L_8 0xB7
#define L_9 0xB8
#define L_10 0xB9
#define L_11 0xBA
#define L_12 0xBB
#define L_13 0xBC
#define L_14 0xBD
#define L_15 0xBE
#define L_16 0xBF
>>>>>>> refs/remotes/origin/hall_effect_playground
