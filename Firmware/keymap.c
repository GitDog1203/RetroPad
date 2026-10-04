// Copyright 2026 Grant
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌──────┬──────┬──────┐
     * │  UP  │ LEFT │RIGHT │
     * ├──────┼──────┼──────┤
     * │ DOWN │  A   │  B   │
     * └──────┴──────┴──────┘
     */
    [0] = LAYOUT_ortho_2x3(
        KC_UP,   KC_LEFT, KC_RIGHT,
        KC_DOWN, KC_A,    KC_B
    )
};
