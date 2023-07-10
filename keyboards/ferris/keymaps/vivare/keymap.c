#include QMK_KEYBOARD_H

//Combos
const uint16_t PROGMEM test_combo1[] = {LGUI_T(KC_A), LALT_T(KC_R), COMBO_END};
const uint16_t PROGMEM test_combo2[] = {LCTL_T(KC_S), LSFT_T(KC_T), COMBO_END};
const uint16_t PROGMEM test_combo3[] = {LSFT_T(KC_N), LCTL_T(KC_E), COMBO_END};
const uint16_t PROGMEM test_combo4[] = {LALT_T(KC_I), LGUI_T(KC_O), COMBO_END};
const uint16_t PROGMEM gaming_switch[] = {LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), COMBO_END};
const uint16_t PROGMEM gaming_escape[] = {KC_TAB, KC_Q, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(test_combo1, KC_LEFT_CURLY_BRACE),
    COMBO(test_combo2, KC_LEFT_PAREN),
    COMBO(test_combo3, KC_RIGHT_PAREN),
    COMBO(test_combo4, KC_RIGHT_CURLY_BRACE),
    COMBO(gaming_escape, KC_ESCAPE),
    COMBO(gaming_switch, DF(6)),
};


//Key Layout
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x5_2(
                                        KC_Q, KC_W, KC_F, KC_P, KC_B,   KC_J, KC_L, KC_U, KC_Y, KC_SEMICOLON,
        LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G,   KC_M, LSFT_T(KC_N), LCTL_T(KC_E), LALT_T(KC_I), LGUI_T(KC_O),
                                  LT(5,KC_Z), KC_X, KC_C, KC_D, KC_V,   KC_K, KC_H, KC_COMMA, KC_DOT, KC_SLASH,
                                    LT(4,KC_TAB), LT(3,KC_BACKSPACE),   LT(1,KC_SPC), LT(2,KC_ENT)
        ),

	  [1] = LAYOUT_split_3x5_2(KC_PSLS, KC_P7, KC_P8, KC_P9, KC_PAST,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                               KC_PMNS, KC_P4, KC_P5, KC_P6, KC_PPLS,   KC_PSLS, KC_PPLS, KC_PEQL, KC_PAST, KC_PMNS,
                               KC_PCMM, KC_P1, KC_P2, KC_P3, KC_PDOT,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                                      KC_PEQL, KC_P0,   KC_NO, KC_NO),

   [2] = LAYOUT_split_3x5_2(KC_GRV, KC_NO, KC_BSLS, KC_AMPR, KC_PPLS,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                            KC_PERC, KC_DLR, KC_AT, KC_QUOT, KC_PEQL,   KC_CAPS_LOCK, KC_LEFT_SHIFT, KC_LEFT_CTRL, KC_LEFT_ALT, KC_LEFT_GUI,
                           KC_PIPE, KC_NO, KC_HASH, KC_EXLM, KC_ASTR,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                                    KC_PMNS, KC_UNDS,   KC_NO, KC_NO),

          [3] = LAYOUT_split_3x5_2(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_BTN1, KC_UP, KC_BTN2, KC_PGUP,
        KC_LEFT_GUI, KC_LEFT_ALT, KC_LEFT_CTRL, KC_LEFT_SHIFT, KC_NO,   KC_CAPS_LOCK, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN,
                                   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_BTN3, KC_NO, KC_NO,
                                                        KC_NO, KC_NO,   KC_NO, KC_NO),

          [4] = LAYOUT_split_3x5_2(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U,
        KC_LEFT_GUI, KC_LEFT_ALT, KC_LEFT_CTRL, KC_LEFT_SHIFT, KC_NO,   KC_CAPS_LOCK, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D,
                                   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_BTN3, KC_NO, KC_NO,
                                                        KC_NO, KC_NO,   KC_NO, KC_NO),

          [5] = LAYOUT_split_3x5_2(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                    KC_NO, LCTL(KC_Z), LCTL(KC_S), LCTL(KC_Y), KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                    KC_NO, LCTL(KC_X), LCTL(KC_C), LCTL(KC_V), KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                                        KC_NO, KC_NO,   KC_NO, KC_NO),

                                                                  //GAMING
             [6] = LAYOUT_split_3x5_2(KC_TAB, KC_Q, KC_W, KC_E, KC_R,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                               KC_LEFT_SHIFT, KC_A, KC_S, KC_D, KC_F,   KC_NO, DF(0), KC_NO, KC_NO, KC_NO,
                                KC_LEFT_CTRL, KC_Z, KC_X, KC_C, KC_V,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                                               KC_LEFT_ALT, KC_SPACE,   KC_NO, KC_NO)
};

