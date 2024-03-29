#include QMK_KEYBOARD_H
// #include "g/keymap_combo.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_EQL,     KC_1,   KC_2,    KC_3,      KC_4,       KC_5,       KC_LCMD,        KC_RCMD,    KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS,
        KC_TAB,     KC_Q,   KC_W,    KC_E,      KC_R,       KC_T,       KC_LALT,        KC_RALT,    KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_ESC,     KC_A,   KC_S,    KC_D,      KC_F,       KC_G,       KC_HOME,         KC_PGUP,    KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT,    KC_Z,   KC_X,    KC_C,      KC_V,       KC_B,       KC_SPC,        KC_PGDN,    KC_N,   KC_M,   KC_COMM,  KC_DOT,  KC_SLSH, KC_RSFT,
        MO(1),      KC_GRV, KC_NUBS, KC_LEFT,   KC_RIGHT,   KC_BSPC,    KC_LCTL,        KC_ENTER,   KC_SPC, KC_UP,  KC_DOWN, KC_LBRC, KC_RBRC, MO(1)
    ),

    [1] = LAYOUT(
        KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F6,KC_TRNS,                        KC_RCMD,    KC_F7,   KC_F8,   KC_F9,    KC_F10,    KC_F11,    KC_F12,
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,            KC_RALT,    KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,            KC_PGUP,    KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,            KC_PGDN,    KC_N,   KC_M,   KC_COMM,  KC_DOT,  KC_SLSH, KC_RSFT,
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,            QK_BOOT,    KC_SPC, KC_UP,  KC_DOWN, KC_LBRC, KC_RBRC, MO(1)
    )
};
