// Copyright 2025 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_9x9(
        // ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
        // │ESC│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ ` │BS │
        // ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
        // │ TAB │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │  \  │
        // ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
        // │ CAPS │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │  ENTER │
        // ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬──────┤
        // │ SHIFT  │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │ ↑ │SHIFT │
        // └─┬───┬──┴─┬─┴──┬┴───┼───┴───┴──┬┴───┼───┴┬──┼───┼───┼───┬──┘
        //   │CTL│ALT │CMD │ FN │          │CMD │ALT │  │ ← │ ↓ │ → │
        //   └───┴────┴────┴────┴──────────┴────┴────┘  └───┴───┴───┘
        KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_MINS, KC_EQL , KC_GRV , KC_BSPC, QK_BOOT,
        KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_LBRC, KC_RBRC, KC_BSLS,
        KC_CAPS, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOT,          KC_ENT ,
        KC_LSFT,          KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_UP  , KC_RSFT,
                 KC_LCTL, KC_LALT, KC_LGUI, MO(1)  ,          KC_SPC ,          KC_RGUI, KC_RALT,          KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT_9x9(
        // ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
        // │PWR│F1 │F2 │F3 │F4 │F5 │F6 │F7 │F8 │F9 │F10│F11│F12│INS│DEL│
        // ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┤
        // │ TAB │VL-│VL+│MUT│ R │ T │ Y │ U │PSC│SCR│PSE│ [ │ ] │  \  │
        // ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤
        // │ CAPS │VA-│VA+│SP-│SP+│ G │ H │ J │ K │ L │ ; │ ' │  ENTER │
        // ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬──────┤
        // │ SHIFT  │TOG│MOD│HU-│HU+│ B │ N │ M │ , │ . │ / │PGU│SHIFT │
        // └─┬───┬──┴─┬─┴──┬┴───┼───┴───┴──┬┴───┼───┴┬──┼───┼───┼───┬──┘
        //   │CTL│ALT │CMD │ FN │          │CMD │ALT │  │HOM│PGD│END│
        //   └───┴────┴────┴────┴──────────┴────┴────┘  └───┴───┴───┘
        KC_PWR , KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , KC_INS, KC_DEL , XXXXXXX,
        _______, KC_VOLD, KC_VOLU, KC_MUTE, _______, _______, _______, _______, KC_PSCR, KC_SCRL, KC_PAUS, _______, _______, _______,
        _______, RGB_VAD, RGB_VAI, RGB_SPD, RGB_SPI, _______, _______, _______, _______, _______, _______, _______,          KC_PENT,
        _______,          RGB_TOG, RGB_MOD, RGB_HUD, RGB_HUI, _______, _______, _______, _______, _______, _______, KC_PGUP, _______,
                 _______, _______, _______, _______,          _______,          _______, _______,          KC_HOME, KC_PGDN, KC_END
    ),
    [2] = LAYOUT_9x9(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX,
        XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX,          XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX
    ),
    [3] = LAYOUT_9x9(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX,
        XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                 XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX,          XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX
    )
};

// 初期化時にLEDを設定する場合はこの関数をコメントアウトする
// void keyboard_post_init_user(void) {
//     // 初期接続時に白色を設定
//     rgblight_sethsv_noeeprom(0, 0, 128);
// }

// 動的にLEDを変更する場合はこの関数をコメントアウトする
// layer_state_t layer_state_set_user(layer_state_t state) {
//     switch (get_highest_layer(state)) {
//         case 1:
//             // レイヤー1: 青 (Hue=170)
//             rgblight_sethsv_noeeprom(170, 255, 128);
//             break;
//         default:
//             // レイヤー0（初期状態）: 白 (Saturation=0で白)
//             rgblight_sethsv_noeeprom(0, 0, 128);
//             break;
//     }
//     return state;
// }
