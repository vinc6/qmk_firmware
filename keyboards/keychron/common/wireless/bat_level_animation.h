<<<<<<<< HEAD:keyboards/kwstudio/scorpio_rev2/config.h
/* Copyright 2024 kwstudio
========
/* Copyright 2022 @ lokher (https://www.keychron.com)
>>>>>>>> 4ae5990fcc (Added wireless support; Added Lemokey L3; Added Keychron V1 Max):keyboards/keychron/common/wireless/bat_level_animation.h
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

<<<<<<<< HEAD:keyboards/kwstudio/scorpio_rev2/config.h
#define WS2812_PWM_DRIVER PWMD1
#define WS2812_PWM_CHANNEL 3
#define WS2812_DMA_STREAM STM32_DMA1_STREAM5
#define WS2812_DMA_CHANNEL 5
========
void bat_level_animiation_start(uint8_t percentage);
void bat_level_animiation_stop(void);
bool bat_level_animiation_actived(void);
void bat_level_animiation_indicate(void);
void bat_level_animiation_task(void);
>>>>>>>> 4ae5990fcc (Added wireless support; Added Lemokey L3; Added Keychron V1 Max):keyboards/keychron/common/wireless/bat_level_animation.h
