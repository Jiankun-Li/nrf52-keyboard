/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2019 Jim Jiang <jim@lotlab.org>

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

#pragma once

#include <stdint.h>

/* USB和蓝牙的显示参数 */
#define VENDOR_ID 0x1022 /* USB VID */
#define PRODUCT_ID 0x0419 /* USB PID */
#define CONF_VENDOR_ID 0x0712 /* 配置项目内显示的VendorID */
#define CONF_PRODUCT_ID 0x0212 /* 配置项目内显示的ProductID */
#define DEVICE_VER 0x0001 /* 硬件版本 */
#define MANUFACTURER "LJK" /* 硬件制造商，用于蓝牙显示 */
#define PRODUCT "Magnetic" /* 硬件名词，用于蓝牙显示 */
#define MACADDR_SEPRATOR ' ' /* 蓝牙名称后地址的分隔符。若不设置则不显示蓝牙名称后面的地址 */

/* USB HID report parameter */
#define KEYBOARD_EPSIZE 8 /* 键盘上传端点大小，请不要修改 */
#define NKRO_EPSIZE 28 /* 键盘NKRO端点大小，请不要修改 */

// 定义Bootmagic按键
//#define BOOTMAGIC_KEY_BOOT KC_U /* 开机 */
//#define BOOTMAGIC_KEY_ERASE_BOND KC_E /* 删除所有绑定 */

// 键盘省电参数
#define SLEEP_SLOW_TIMEOUT 60 // 键盘闲置多久后转入慢速扫描模式 (s)
#define SLEEP_OFF_TIMEOUT 600 // 键盘闲置多久后转入自动关机 (s)
#define KEYBOARD_SCAN_INTERVAL 1 // 键盘最小时间单位TICK (ms)
#define KEYBOARD_FAST_SCAN_INTERVAL 10 // 通常模式下，多久扫描一次键盘 (ms)
#define KEYBOARD_SLOW_SCAN_INTERVAL 100 // 慢速模式下，多久扫描一次键盘 (ms)
#define LED_AUTOOFF_TIME 10 /* LED自动熄灭时长(s)，设为0则不自动熄灭 */

// 键盘额外功能
//#define DYNAMIC_TX_POWER /* 启用自动发射功率调整 */
//#define PASSKEY_REQUIRED /* 需要输入配对码 */
#define ENABLE_WATCHDOG /* 启用看门狗 */
#define HIGH_TX_POWER /* 更改发射功率到+4dBm */
#define MULTI_DEVICE_SWITCH  /*启用多设备切换 */
#define KEYMAP_STORAGE /* 启用keymap存储 */
// #define MACRO_BLOCKING_MODE /* 在宏播放时禁用其他按键输入 */
#define MACRO_STORAGE /* 启用宏存储功能 */
#define CONFIG_STORAGE /* 启用配置存储功能 */

// #define DEBUG_SKIP_PWRON_CHECK /*  直接开机而跳过开机条件检测，用于调试 */

/* TMK固件内置功能 */
/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION

// LED 配置
//#define LED_CAPS 4

// ws2812 RGB 配置
//#define RGB_DI_PIN 10
//#define RGBLED_NUM 8
//#define RGBLIGHT_ANIMATIONS
//#define RGB_PWR_PIN 11 // P-mos
//#define RGB_PWR_PIN_REVERSE 20 // N-mos

// 3灯指示配置引脚
//#define LED_STATUS_BLE 7
//#define LED_STATUS_USB 6
//#define LED_STATUS_CHARGING 5
//#define LED_BLE_CHANNEL1 7
//#define LED_BLE_CHANNEL2 6
//#define LED_BLE_CHANNEL3 5
//#define LED_POSITIVE // LED上拉驱动

// 独立硬件按钮
// #define POWER_BUTTON 22

// USB UART 传输配置
#define HAS_USB // 启用与CH554的通信支持
#define UART_RXD 23 // UART_RX口IO 17
#define UART_TXD 24 // UART_TX口IO 18
//#define UART_DET 19 // UART 检测引脚，若此脚被拉低，则说明USB正在工作。若不配置则使用RX口作为检测引脚
#define UART_BAUDRATE NRF_UART_BAUDRATE_115200 // 通信波特率，请不要修改

// 电量检测配置
#define BATTERY_ADC_PIN NRF_SAADC_INPUT_AIN0 // 电量检测引脚 Pin 2

// 充电检测配置
#define PIN_CHARGING !UCC1
#define PIN_STANDBY !UCC2

// 按键阵列配置
#define MATRIX_ROWS 6 /* 硬件阵列行数 */
#define MATRIX_COLS 17 /* 硬件阵列列数 */

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LCTRL) | MOD_BIT(KC_LALT)))

static const uint8_t row_pin_array[MATRIX_ROWS] = { 11, 10, 9, 8, 7, 12 };
static const uint8_t column_pin_array[MATRIX_COLS] =  { 31, 30, 29, 28, 27, 26, 25, 21, 20, 13, 14, 15, 16, 17, 18, 19, 22 };
#define ROW_IN // 键盘阵列的二极管方向是从COL->ROW

/* define if matrix has ghost */
// #define MATRIX_HAS_GHOST /* 按键阵列是否出现Ghost Key，若没有加二极管则需要启用这个项目 */

#define DEBOUNCE 5 /* 硬件消抖次数，设置为0则不消抖 */
#define MATRIX_SCAN_DELAY_CYCLE 48 /* 按键扫描等待IO稳定的延时时长 */

//SSD1306配置
#define SSD1306_SDA 5 // OLED屏幕的I2C SDA引脚编号
#define SSD1306_SCL 6 // OLED屏幕的I2C SCL引脚编号
#define SSD1306_ROTATE_180
//#define SSD1306_LCDHEIGHT 32

//旋转编码器配置
// 旋钮配置
#define ROTARY_ENCODER_A 4 // 编码器A脚IO
#define ROTARY_ENCODER_B 3 // 编码器B脚IO
// 旋钮正向按钮映射
#define ROTARY_ENCODER_POS 5,13 // 正向旋转映射到键盘的按键行列（Row，Col）
// 旋钮负向按钮映射
#define ROTARY_ENCODER_NEG 4,13 // 负向旋转映射到键盘的按键行列（Row，Col）

// #define LOW_POWER_QDEC_TICKS 2 // 定义低功耗模式下旋转编码器每隔多少ms扫描一次，不写则不使用低功耗模式



