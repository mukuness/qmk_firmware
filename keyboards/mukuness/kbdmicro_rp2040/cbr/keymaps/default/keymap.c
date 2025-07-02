// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

//#define BOOTMAGIC_LITE_ROW      0
//#define BOOTMAGIC_LITE_COLUMN   1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    // ┌───┬───┬───┬───┐
    // │12P│12P│12P│12P│
    // ├───┼───┼───┼───┤
    // │12P│12P│12P│12P│
    // └───┴───┴───┴───┘
    //   ┌───┬───┬───┐
    //   │16P│16P│16P│
    //   └───┴───┴───┘
    // ┌───┬───┬───┬───┐
    // │24P│24P│24P│24P│
    // ├───┼───┼───┼───┤
    // │24P│24P│24P│24P│
    // └───┴───┴───┴───┘
    [0] = LAYOUT_4x5(
        KC_ESC , KC_A   , KC_B   , KC_RSFT,
        MO(1)  , KC_LGUI, KC_SPC , KC_ENT ,
        KC_C   , KC_D   , KC_E   ,
        KC_F   , KC_G   , KC_H   , KC_I   ,
        KC_J   , KC_K   , KC_L   , KC_M
    ),
    [1] = LAYOUT_4x5(
        RGB_TOG, KC_1   , KC_2   , KC_3   ,
        RGB_MOD, RGB_MOD, KC_ENT , QK_BOOT,
        _______, _______, _______,
        _______, _______, _______, _______,
        _______, _______, _______, _______
    )
};
