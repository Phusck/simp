#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_U, KC_H, KC_I, KC_T, KC_J, KC_V, KC_G,
    KC_O, KC_N, KC_E, KC_S, KC_P, KC_M, KC_B,
    KC_C, KC_L, KC_A, KC_R, KC_NO, KC_NO, KC_Q,
    KC_SPACE, KC_W, KC_X, KC_BSPC, MO(1), KC_ENT, KC_ESC,
    KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7,
    KC_8, KC_9, KC_0, KC_Z, KC_EQUAL, KC_Y, KC_GRV
  ),
    [1] = LAYOUT(
    KC_SCLN, KC_G, KC_F, KC_D, KC_E, KC_W, KC_G,
    KC_QUOT, KC_B, KC_D, KC_Y, KC_L, KC_M, KC_N,
    KC_LBRC, KC_P, KC_M, KC_K, KC_Y, KC_X, KC_U,
    KC_V, KC_W, KC_X, KC_Y, KC_Z, KC_1, KC_2,
    KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9,
    KC_0, KC_EQUAL, KC_GRV, KC_BSPC, KC_TRNS, KC_ENT, KC_ESC
  )
};

//KC_NO
                                                                                                                                                                                           