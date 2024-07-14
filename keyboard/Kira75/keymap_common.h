/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/**
 * 键盘矩阵基配置文件
 * 
 * 定义各个按键的位置，方便编写Keymap
 */
#pragma once

#include <stdint.h>
#include "keymap.h"
#include "config.h"

extern const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS];
extern const action_t fn_actions[];

/* GH60 keymap definition macro
 * K2C, K31 and  K3C are extra keys for ISO
 */
#define KEYMAP( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K00A, K00B, K00C, K00D, K00E, K00F, \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K10A, K10B, K10C, K10D, K10E, K10F, \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K20A, K20B, K20C, K20D, K20E, K20F, \
	K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K30A, K30B, K30C,                   \
	K400, K401, K402, K403, K404, K405, K406, K407, K408, K409, K40A,       K40C,       K40E,       \
	K500, K501, K502,             K505,                   K509, K50A, K50B,       K50D, K50E, K50F  \
) { \
	{ K000,   K001,   K002,   K003,   K004,   K005,   K006,   K007,   K008,   K009,   K00A,   K00B,   K00C,   K00D,   K00E,   K00F }, \
	{ K100,   K101,   K102,   K103,   K104,   K105,   K106,   K107,   K108,   K109,   K10A,   K10B,   K10C,   K10D,   K10E,   K10F }, \
	{ K200,   K201,   K202,   K203,   K204,   K205,   K206,   K207,   K208,   K209,   K20A,   K20B,   K20C,   K20D,   K20E,   K20F }, \
	{ K300,   K301,   K302,   K303,   K304,   K305,   K306,   K307,   K308,   K309,   K30A,   K30B,   K30C,   KC_NO,  KC_NO,  KC_NO }, \
	{ K400,   K401,   K402,   K403,   K404,   K405,   K406,   K407,   K408,   K409,   K40A,   KC_NO,  K40C,   KC_NO,  K40E,   KC_NO }, \
	{ K500,   K501,   K502,   KC_NO,  KC_NO,  K505,   KC_NO,  KC_NO,  KC_NO,  K509,   K50A,   K50B,   KC_NO,  K50D,   K50E,   K50F }  \
}

/* ANSI variant. No extra keys for ISO */
#define KEYMAP_ANSI( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K00A, K00B, K00C, K00D, K00E, K00F, \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K10A, K10B, K10C, K10D, K10E, K10F, \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K20A, K20B, K20C, K20D, K20E, K20F, \
	K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K30A, K30B, K30C,                   \
	K400, K401, K402, K403, K404, K405, K406, K407, K408, K409, K40A,       K40C,       K40E,       \
	K500, K501, K502,             K505,                   K509, K50A, K50B,       K50D, K50E, K50F  \
) KEYMAP( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K00A, K00B, K00C, K00D, K00E, K00F, \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K10A, K10B, K10C, K10D, K10E, K10F, \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K20A, K20B, K20C, K20D, K20E, K20F, \
	K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K30A, K30B, K30C,                   \
	K400, K401, K402, K403, K404, K405, K406, K407, K408, K409, K40A,       K40C,       K40E,       \
	K500, K501, K502,             K505,                   K509, K50A, K50B,       K50D, K50E, K50F  \
)


#define KEYMAP_HHKB( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K00A, K00B, K00C, K00D, K00E, K00F, \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K10A, K10B, K10C, K10D, K10E, K10F, \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K20A, K20B, K20C, K20D, K20E, K20F, \
	K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K30A, K30B, K30C,                   \
	K400, K401, K402, K403, K404, K405, K406, K407, K408, K409, K40A,       K40C,       K40E,       \
	K500, K501, K502,             K505,                   K509, K50A, K50B,       K50D, K50E, K50F  \
) KEYMAP( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K00A, K00B, K00C, K00D, K00E, K00F, \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K10A, K10B, K10C, K10D, K10E, K10F, \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, K20A, K20B, K20C, K20D, K20E, K20F, \
	K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K30A, K30B, K30C,                   \
	K400, K401, K402, K403, K404, K405, K406, K407, K408, K409, K40A,       K40C,       K40E,       \
	K500, K501, K502,             K505,                   K509, K50A, K50B,       K50D, K50E, K50F  \
)

