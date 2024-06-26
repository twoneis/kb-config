#include QMK_KEYBOARD_H
#include <stdint.h>

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	// clang-format off
	[0] = LAYOUT(
		KC_SCLN, KC_COMM, KC_DOT, KC_P, KC_Z,                        KC_F, KC_G, KC_C, KC_R, KC_L,
		KC_A, KC_O, MT(MOD_LCTL, KC_E), MT(MOD_LSFT ,KC_U), KC_I,    KC_D, MT(MOD_RSFT,KC_H), MT(MOD_RCTL, KC_T), KC_N, KC_S,
		KC_TAB, KC_Q, KC_J, KC_K, KC_X,                              KC_B, KC_M, KC_W, KC_V, KC_Y,
		KC_LGUI, QK_GESC,                                            KC_SPC, TO(1)
	),
	[1] = LAYOUT(
		KC_VOLU, KC_VOLD, KC_BRIU, KC_BRID, CW_TOGG,                 KC_MINS, KC_1, KC_2, KC_3, KC_BSPC,
		KC_BSLS, KC_SLSH, SC_LCPO , SC_RSPC, KC_QUOT,                KC_EQL, MT(MOD_RSFT, KC_4), MT(MOD_RCTL, KC_5), KC_6, KC_0,
		KC_NO, KC_NO, KC_LBRC, KC_RBRC, KC_LALT,                     KC_NO, KC_7, KC_8, KC_9, KC_ENT,
		KC_LGUI, KC_RALT,                                            TO(2), TO(0)
	),
	[2] = LAYOUT(
		KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,                           KC_NO, KC_NO, KC_NO, KC_NO, KC_BSPC,
		KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,                          KC_NO, KC_LEFT, KC_UP, KC_DOWN, KC_RGHT,
		KC_F11, KC_F12, KC_F13, KC_F14, KC_F15,                      KC_NO, KC_NO, KC_NO, KC_NO, KC_ENT,
		KC_NO, KC_NO,                                                TO(3), TO(0)
	),
	[3] = LAYOUT(
		KC_ESC, KC_Q, KC_W, KC_E, KC_R,                              KC_NO, KC_1, KC_2, KC_3, KC_BSPC,
		KC_LSFT, KC_A, KC_S, KC_D, KC_F,                             KC_NO, KC_4, KC_5, KC_6, KC_0,
		KC_LCTL, KC_X, KC_Z, KC_V, KC_B,                             KC_NO, KC_7, KC_8, KC_9, KC_ENT,
		KC_TAB, KC_SPC,                                              TO(4), TO(0)
	),
	[4] = LAYOUT(
		KC_ESC, KC_1, KC_2, KC_3, KC_4,                             KC_NO, KC_NO, KC_NO, KC_NO, KC_BSPC,
		KC_Q, KC_W, KC_E, KC_R, KC_T,                               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_TAB, KC_LSFT, KC_D, KC_F, KC_B,                          KC_NO, KC_NO, KC_NO, KC_NO, KC_ENT,
		KC_LCTL, KC_SPC,                                            KC_NO, TO(0)
	)
	// clang-format on
};

void
keyboard_post_init_user(void)
{
	rgblight_enable_noeeprom();
	rgblight_sethsv_noeeprom(HSV_PINK);
}

layer_state_t
layer_state_set_user(layer_state_t state)
{
	switch (biton32(state)) {
	case 0:
		rgblight_enable_noeeprom();
		rgblight_sethsv_noeeprom(HSV_PINK);
		break;
	case 1:
		rgblight_enable_noeeprom();
		rgblight_sethsv_noeeprom(HSV_TEAL);
		break;
	case 2:
		rgblight_enable_noeeprom();
		rgblight_sethsv_noeeprom(HSV_YELLOW);
		break;
	case 3:
		rgblight_enable_noeeprom();
		rgblight_sethsv_noeeprom(HSV_PURPLE);
		break;
	case 4:
		rgblight_enable_noeeprom();
		rgblight_sethsv_noeeprom(HSV_CORAL);
		break;
	default:
		rgblight_disable_noeeprom();
		break;
	}
	return state;
}

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
