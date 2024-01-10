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

#include "quantum.h"

// clang-format off
#ifdef RGB_MATRIX_ENABLE
<<<<<<< HEAD:keyboards/keychron/v2/jis_encoder/jis_encoder.c

const snled27351_led_t PROGMEM g_snled27351_leds[SNLED27351_LED_COUNT] = {
/* Refer to SNLED27351 manual for these locations
=======
const snled27351_led_t g_snled27351_leds[RGB_MATRIX_LED_COUNT] = {
/* Refer to snled27351manual for these locations
>>>>>>> 4ae5990fcc (Added wireless support; Added Lemokey L3; Added Keychron V1 Max):keyboards/keychron/k6_pro/jis/rgb/rgb.c
 *   driver
 *   |  R location
 *   |  |       G location
 *   |  |       |       B location
 *   |  |       |       | */
<<<<<<< HEAD:keyboards/keychron/v2/jis_encoder/jis_encoder.c
    {0, CB3_CA1,    CB1_CA1,    CB2_CA1},
    {0, CB3_CA2,    CB1_CA2,    CB2_CA2},
    {0, CB3_CA3,    CB1_CA3,    CB2_CA3},
    {0, CB3_CA4,    CB1_CA4,    CB2_CA4},
    {0, CB3_CA5,    CB1_CA5,    CB2_CA5},
    {0, CB3_CA6,    CB1_CA6,    CB2_CA6},
    {0, CB3_CA7,    CB1_CA7,    CB2_CA7},
    {0, CB3_CA8,    CB1_CA8,    CB2_CA8},
    {0, CB3_CA9,    CB1_CA9,    CB2_CA9},
    {0, CB3_CA10,   CB1_CA10,   CB2_CA10},
    {0, CB3_CA11,   CB1_CA11,   CB2_CA11},
    {0, CB3_CA12,   CB1_CA12,   CB2_CA12},
    {0, CB3_CA13,   CB1_CA13,   CB2_CA13},
    {0, CB3_CA14,   CB1_CA14,   CB2_CA14},
    {0, CB3_CA15,   CB1_CA15,   CB2_CA15},
    {0, CB3_CA16,   CB1_CA16,   CB2_CA16},

    {0, CB6_CA1,    CB4_CA1,    CB5_CA1},
    {0, CB6_CA2,    CB4_CA2,    CB5_CA2},
    {0, CB6_CA3,    CB4_CA3,    CB5_CA3},
    {0, CB6_CA4,    CB4_CA4,    CB5_CA4},
    {0, CB6_CA5,    CB4_CA5,    CB5_CA5},
    {0, CB6_CA6,    CB4_CA6,    CB5_CA6},
    {0, CB6_CA7,    CB4_CA7,    CB5_CA7},
    {0, CB6_CA8,    CB4_CA8,    CB5_CA8},
    {0, CB6_CA9,    CB4_CA9,    CB5_CA9},
    {0, CB6_CA10,   CB4_CA10,   CB5_CA10},
    {0, CB6_CA11,   CB4_CA11,   CB5_CA11},
    {0, CB6_CA12,   CB4_CA12,   CB5_CA12},
    {0, CB6_CA13,   CB4_CA13,   CB5_CA13},
    {0, CB6_CA16,   CB4_CA16,   CB5_CA16},

    {0, CB9_CA1,    CB7_CA1,    CB8_CA1},
    {0, CB9_CA2,    CB7_CA2,    CB8_CA2},
    {0, CB9_CA3,    CB7_CA3,    CB8_CA3},
    {0, CB9_CA4,    CB7_CA4,    CB8_CA4},
    {1, CB9_CA5,    CB7_CA5,    CB8_CA5},
    {1, CB9_CA6,    CB7_CA6,    CB8_CA6},
    {1, CB9_CA7,    CB7_CA7,    CB8_CA7},
    {1, CB9_CA8,    CB7_CA8,    CB8_CA8},
    {1, CB9_CA9,    CB7_CA9,    CB8_CA9},
    {1, CB9_CA10,   CB7_CA10,   CB8_CA10},
    {1, CB9_CA11,   CB7_CA11,   CB8_CA11},
    {1, CB9_CA12,   CB7_CA12,   CB8_CA12},
    {1, CB9_CA14,   CB7_CA14,   CB8_CA14},
    {0, CB6_CA14,   CB4_CA14,   CB5_CA14},
    {1, CB9_CA16,   CB7_CA16,   CB8_CA16},

    {1, CB3_CA1,    CB1_CA1,    CB2_CA1},
    {1, CB3_CA3,    CB1_CA3,    CB2_CA3},
    {1, CB3_CA4,    CB1_CA4,    CB2_CA4},
    {1, CB3_CA5,    CB1_CA5,    CB2_CA5},
    {1, CB3_CA6,    CB1_CA6,    CB2_CA6},
    {1, CB3_CA7,    CB1_CA7,    CB2_CA7},
    {1, CB3_CA8,    CB1_CA8,    CB2_CA8},
    {1, CB3_CA9,    CB1_CA9,    CB2_CA9},
    {1, CB3_CA10,   CB1_CA10,   CB2_CA10},
    {1, CB3_CA11,   CB1_CA11,   CB2_CA11},
    {1, CB3_CA12,   CB1_CA12,   CB2_CA12},
    {1, CB3_CA13,   CB1_CA13,   CB2_CA13},
    {1, CB3_CA14,   CB1_CA14,   CB2_CA14},
    {1, CB3_CA15,   CB1_CA15,   CB2_CA15},

    {1, CB6_CA1,    CB4_CA1,    CB5_CA1},
    {1, CB6_CA2,    CB4_CA2,    CB5_CA2},
    {1, CB6_CA3,    CB4_CA3,    CB5_CA3},
    {1, CB6_CA4,    CB4_CA4,    CB5_CA4},
    {1, CB6_CA7,    CB4_CA7,    CB5_CA7},
    {1, CB6_CA10,   CB4_CA10,   CB5_CA10},
    {1, CB6_CA11,   CB4_CA11,   CB5_CA11},
    {1, CB6_CA12,   CB4_CA12,   CB5_CA12},
    {1, CB6_CA13,   CB4_CA13,   CB5_CA13},
    {1, CB6_CA14,   CB4_CA14,   CB5_CA14},
    {1, CB6_CA15,   CB4_CA15,   CB5_CA15},
    {1, CB6_CA16,   CB4_CA16,   CB5_CA16}
=======
    {0, C_16,   A_16,   B_16},
    {0, C_15,   A_15,   B_15},
    {0, C_14,   A_14,   B_14},
    {0, C_13,   A_13,   B_13},
    {0, C_12,   A_12,   B_12},
    {0, C_11,   A_11,   B_11},
    {0, C_10,   A_10,   B_10},
    {0, C_9,    A_9,    B_9},
    {0, C_8,    A_8,    B_8},
    {0, C_7,    A_7,    B_7},
    {0, C_6,    A_6,    B_6},
    {0, C_5,    A_5,    B_5},
    {0, C_4,    A_4,    B_4},
    {1, C_4,    A_4,    B_4},
    {0, C_3,    A_3,    B_3},
    {0, C_2,    A_2,    B_2},

    {0, F_16,   D_16,   E_16},
    {0, F_15,   D_15,   E_15},
    {0, F_14,   D_14,   E_14},
    {0, F_13,   D_13,   E_13},
    {0, F_12,   D_12,   E_12},
    {0, F_11,   D_11,   E_11},
    {0, F_10,   D_10,   E_10},
    {0, F_9,    D_9,    E_9},
    {0, F_8,    D_8,    E_8},
    {0, F_7,    D_7,    E_7},
    {0, F_6,    D_6,    E_6},
    {0, F_5,    D_5,    E_5},
    {0, F_4,    D_4,    E_4},
    {0, F_2,    D_2,    E_2},

    {1, C_16,   A_16,   B_16},
    {1, C_15,   A_15,   B_15},
    {1, C_14,   A_14,   B_14},
    {1, C_13,   A_13,   B_13},
    {1, C_12,   A_12,   B_12},
    {1, C_11,   A_11,   B_11},
    {1, C_10,   A_10,   B_10},
    {1, C_9,    A_9,    B_9},
    {1, C_8,    A_8,    B_8},
    {1, C_7,    A_7,    B_7},
    {1, C_6,    A_6,    B_6},
    {1, C_5,    A_5,    B_5},
    {1, C_3,    A_3,    B_3},
    {0, F_3,    D_3,    E_3},
    {1, C_2,    A_2,    B_2},

    {1, I_16,   G_16,   H_16},
    {1, I_14,   G_14,   H_14},
    {1, I_13,   G_13,   H_13},
    {1, I_12,   G_12,   H_12},
    {1, I_11,   G_11,   H_11},
    {1, I_10,   G_10,   H_10},
    {1, I_9,    G_9,    H_9},
    {1, I_8,    G_8,    H_8},
    {1, I_7,    G_7,    H_7},
    {1, I_6,    G_6,    H_6},
    {1, I_5,    G_5,    H_5},
    {1, I_4,    G_4,    H_4},
    {1, I_3,    G_3,    H_3},
    {1, I_2,    G_2,    H_2},

    {1, F_16,   D_16,   E_16},
    {1, F_15,   D_15,   E_15},
    {1, F_14,   D_14,   E_14},
    {1, F_13,   D_13,   E_13},
    {1, F_10,   D_10,   E_10},
    {1, F_8,    D_8,    E_8},
    {1, F_7,    D_7,    E_7},
    {1, F_6,    D_6,    E_6},
    {1, F_5,    D_5,    E_5},
    {1, F_4,    D_4,    E_4},
    {1, F_3,    D_3,    E_3},
    {1, F_2,    D_2,    E_2},
>>>>>>> 4ae5990fcc (Added wireless support; Added Lemokey L3; Added Keychron V1 Max):keyboards/keychron/k6_pro/jis/rgb/rgb.c
};

#define __ NO_LED

led_config_t g_led_config = {
    {
        // Key Matrix to LED Index
        { 0,  1,  2,  3,  4,  5,  6,  7,  8,  9,  10, 11, 12, 14, 15 },
        { 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 43, 29 },
        { 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 13, 42, 44 },
        { 45, __, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58 },
        { 59, 60, 61, 62, __, __, 63, __, 64, 65, 66, 67, 68, 69, 70 }
    },
    {
        // LED Index to Physical Position
        {0, 0}, {14, 0}, {29, 0}, {44, 0}, {59, 0}, {74, 0}, {89,  0}, {104,  0}, {119,  0}, {134,  0}, {149,  0}, {164,  0}, {179,  0}, {194,0},   {209,  0}, {224,  0},
        {3,16}, {22,16}, {37,16}, {52,16}, {67,16}, {82,16}, {97, 16}, {112, 16}, {126, 16}, {141, 16}, {156, 16}, {171, 16}, {186, 16},                       {224, 16},
        {5,32}, {26,32}, {41,32}, {55,32}, {70,32}, {85,32}, {100,32}, {115, 32}, {130, 32}, {145, 32}, {160, 32}, {175, 32}, {204, 32}, {207, 24},            {224, 32},
        {9,48},          {33,48}, {48,48}, {63,48}, {78,48}, {93,48},  {108,48},  {123, 48}, {138, 48}, {153, 48}, {167, 48}, {182, 48}, {203, 48},            {224, 48},
        {1,64}, {18,64}, {35,64}, {52,64},                   {93,64},                        {134, 64}, {149, 64}, {164, 64}, {179, 64}, {194, 64}, {209, 64}, {224, 64}
    },
    {
        // RGB LED Index to Flag
        1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 1,
        1, 8, 8, 8, 4, 4, 4, 4, 4, 4, 4, 4, 4,       1,
        1, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1,    1,
        1,    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 1,    1,
        1, 1, 1, 1,       4,       1, 1, 1, 1, 1, 1, 1,
    }
};
#endif
