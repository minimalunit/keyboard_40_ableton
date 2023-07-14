/* Copyright 2020 tominabox1
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
#include QMK_KEYBOARD_H

extern MidiDevice midi_device;
extern midi_config_t midi_config;


#define MIDI_CC_OFF 0
#define MIDI_CC_ON  127

enum custom_keycodes {
    MIDI_CC85 = SAFE_RANGE,
    MIDI_CC86,
    MIDI_CC87,
    MIDI_CC88,
    MIDI_CC14,
    MIDI_CC15,
    MIDI_CC16,
    MIDI_CC17,
    MIDI_CC18,
    MIDI_CC19,
    MIDI_CC20,
    MIDI_CC21
};

void my_init(void){
    //  Set octave to 0
    midi_config.octave = QK_MIDI_OCTAVE_0 - MIDI_OCTAVE_MIN;
}

void keyboard_post_init_user(void) {
    my_init();
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MIDI_CC85:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 85, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 85, MIDI_CC_OFF);
            }
            return true;
            break;
        case MIDI_CC86:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 86, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 86, MIDI_CC_OFF);
            }
            return true;
            break;
        case MIDI_CC87:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 87, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 87, MIDI_CC_OFF);
            }
            return true;
            break;
        case MIDI_CC88:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 88, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 88, MIDI_CC_OFF);
            }
            return true;
            break;
        case MIDI_CC14:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 14, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 14, MIDI_CC_OFF);
            }
            return true;
            break;
        case MIDI_CC15:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 15, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 15, MIDI_CC_OFF);
            }
            return true;
            break;
        case MIDI_CC16:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 16, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 16, MIDI_CC_OFF);
            }
            return true;
            break;
        case MIDI_CC17:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 17, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 17, MIDI_CC_OFF);
            }
            return true;
            break;
        case MIDI_CC18:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 18, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 18, MIDI_CC_OFF);
            }
            return true;
            break;
        case MIDI_CC19:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 19, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 19, MIDI_CC_OFF);
            }
            return true;
            break;
        case MIDI_CC20:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 20, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 20, MIDI_CC_OFF);
            }
            return true;
            break;
        case MIDI_CC21:
            if (record->event.pressed) {
                midi_send_cc(&midi_device, midi_config.channel, 21, MIDI_CC_ON);
            } else {
                midi_send_cc(&midi_device, midi_config.channel, 21, MIDI_CC_OFF);
            }
            return true;
            break;

    }
    return true;
};


enum layers {
  _QWERTY,
  _MIDI,
  _DRUM,
  _ABLETON,
  _LOWER,
  _RAISE,
  _ADJUST
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define ABLETON MO(_ABLETON)

void set_color_qwerty(int r, int g, int b){
	rgb_matrix_set_color(0,  r, g, b);
	rgb_matrix_set_color(12, r, g, b);
	rgb_matrix_set_color(24, r, g, b);
	rgb_matrix_set_color(36, r, g, b);
	rgb_matrix_set_color(37, r, g, b);
	rgb_matrix_set_color(38,  r, g, b);
	rgb_matrix_set_color(39,  r, g, b);
	rgb_matrix_set_color(40, r, g, b);
	rgb_matrix_set_color(41, r, g, b);
	rgb_matrix_set_color(42, r, g, b);
	rgb_matrix_set_color(43,  r, g, b);
	rgb_matrix_set_color(44, r, g, b);
	rgb_matrix_set_color(45, r, g, b);
	rgb_matrix_set_color(46, r, g, b);
	rgb_matrix_set_color(35,  r, g, b);
	rgb_matrix_set_color(23,  r, g, b);
	rgb_matrix_set_color(11, r, g, b);
}

void set_color_control_keys(int r, int g, int b){
	rgb_matrix_set_color(37,  r, g, b);
	rgb_matrix_set_color(38,  r, g, b);
}

void set_color_enter_and_next(int r, int g, int b){
    rgb_matrix_set_color(40,  r, g, b);
	rgb_matrix_set_color(41,  r, g, b);
	rgb_matrix_set_color(42,  r, g, b);
}

void set_color_drum(int r, int g, int b){
    rgb_matrix_set_color(8,  r, g, b);
	rgb_matrix_set_color(9,  r, g, b);
	rgb_matrix_set_color(10,  r, g, b);
	rgb_matrix_set_color(11,  r, g, b);
	rgb_matrix_set_color(20,  r, g, b);
	rgb_matrix_set_color(21,  r, g, b);
	rgb_matrix_set_color(22,  r, g, b);
	rgb_matrix_set_color(23,  r, g, b);
	rgb_matrix_set_color(32,  r, g, b);
	rgb_matrix_set_color(33,  r, g, b);
	rgb_matrix_set_color(34,  r, g, b);
	rgb_matrix_set_color(35,  r, g, b);
	rgb_matrix_set_color(43,  r, g, b);
	rgb_matrix_set_color(44,  r, g, b);
	rgb_matrix_set_color(45,  r, g, b);
	rgb_matrix_set_color(46,  r, g, b);
}

void set_color_expand(int r, int g, int b){
    rgb_matrix_set_color(0,  r, g, b);
	rgb_matrix_set_color(1,  r, g, b);
	rgb_matrix_set_color(2,  r, g, b);
	rgb_matrix_set_color(3,  r, g, b);
	rgb_matrix_set_color(4,  r, g, b);
	rgb_matrix_set_color(5,  r, g, b);
	rgb_matrix_set_color(6,  r, g, b);
	rgb_matrix_set_color(7,  r, g, b);
	rgb_matrix_set_color(8,  r, g, b);
	rgb_matrix_set_color(9,  r, g, b);
	rgb_matrix_set_color(10,  r, g, b);
	rgb_matrix_set_color(11,  r, g, b);
	rgb_matrix_set_color(12,  r, g, b);
	rgb_matrix_set_color(13,  r, g, b);
	rgb_matrix_set_color(14,  r, g, b);
	rgb_matrix_set_color(15,  r, g, b);
	rgb_matrix_set_color(16,  r, g, b);
	rgb_matrix_set_color(17,  r, g, b);
	rgb_matrix_set_color(18,  r, g, b);
	rgb_matrix_set_color(19,  r, g, b);
	rgb_matrix_set_color(20,  r, g, b);
	rgb_matrix_set_color(21,  r, g, b);
	rgb_matrix_set_color(22,  r, g, b);
	rgb_matrix_set_color(23,  r, g, b);
	rgb_matrix_set_color(25,  r, g, b);
	rgb_matrix_set_color(26,  r, g, b);
	rgb_matrix_set_color(27,  r, g, b);
	rgb_matrix_set_color(28,  r, g, b);
	rgb_matrix_set_color(29,  r, g, b);
	rgb_matrix_set_color(30,  r, g, b);
	rgb_matrix_set_color(31,  r, g, b);
	rgb_matrix_set_color(32,  r, g, b);
	rgb_matrix_set_color(33,  r, g, b);
	rgb_matrix_set_color(34,  r, g, b);
	rgb_matrix_set_color(43,  r, g, b);
	rgb_matrix_set_color(44,  r, g, b);
	rgb_matrix_set_color(45,  r, g, b);
	rgb_matrix_set_color(46,  r, g, b);
}

void set_color_select_track(int r, int g, int b){
	rgb_matrix_set_color(14,  r, g, b);
	rgb_matrix_set_color(15,  r, g, b);
	rgb_matrix_set_color(16,  r, g, b);
	rgb_matrix_set_color(17,  r, g, b);
	rgb_matrix_set_color(18,  r, g, b);
	rgb_matrix_set_color(19,  r, g, b);
	rgb_matrix_set_color(20,  r, g, b);
	rgb_matrix_set_color(21,  r, g, b);
}



bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
        switch (get_highest_layer(layer_state)) {
		case _QWERTY:
		    rgb_matrix_set_color_all(0, 0, 0);
			set_color_qwerty(102, 102, 255);
			break;
		case _MIDI:
		    rgb_matrix_set_color_all(127, 0, 255);
		    rgb_matrix_set_color(36, 0, 0, 0);
			set_color_control_keys(0, 0, 255);
			set_color_enter_and_next(0, 0, 0);
			rgb_matrix_set_color(39, 192, 192, 192);
			rgb_matrix_set_color(43, 0, 0, 0);
		    rgb_matrix_set_color(44, 0, 0, 0);
		    rgb_matrix_set_color(45, 0, 0, 0);
		    rgb_matrix_set_color(46, 0, 0, 0);
			break;
		case _DRUM:
		    rgb_matrix_set_color_all(0, 0, 0);
		    set_color_control_keys(0, 0, 255);
		    rgb_matrix_set_color(39, 192, 192, 192);
			set_color_drum(255, 128, 0);
			break;
		case _ABLETON:
		    rgb_matrix_set_color_all(0, 0, 0);
		    rgb_matrix_set_color(46, 0, 0, 255);
		    rgb_matrix_set_color(43, 255, 0, 0);
		    rgb_matrix_set_color(44, 255, 192, 0);
		    set_color_select_track(200, 100, 0);
		    break;
		case _LOWER:
			rgb_matrix_set_color_all(0, 0, 0);
			set_color_expand(0, 160, 0);
			rgb_matrix_set_color(43, 0, 0, 0);
		    rgb_matrix_set_color(44, 0, 0, 0);
		    rgb_matrix_set_color(45, 0, 0, 0);
		    rgb_matrix_set_color(46, 0, 0, 0);
			break;
		case _RAISE:
			rgb_matrix_set_color_all(0, 0, 0);
			set_color_expand(0, 0, 160);
			rgb_matrix_set_color(43, 0, 0, 0);
		    rgb_matrix_set_color(44, 0, 0, 0);
		    rgb_matrix_set_color(45, 0, 0, 0);
		    rgb_matrix_set_color(46, 0, 0, 0);
			break;
		case _ADJUST:
			rgb_matrix_set_color_all(0, 0, 0);
			rgb_matrix_set_color(1, 255, 0, 0);
			rgb_matrix_set_color(2, 150, 0, 0);
			rgb_matrix_set_color(3, 0, 255, 0);
			rgb_matrix_set_color(9, 100, 100, 100);
			rgb_matrix_set_color(10, 255, 255, 255);
			rgb_matrix_set_color(11, 150, 150, 150);
			rgb_matrix_set_color(25, 102, 102, 0);
			rgb_matrix_set_color(26, 255, 128, 0);
			break;
	}
	return false;
}


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | RBG  | Ctrl | Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_planck_mit(
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
    KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT ,
    RGB_TOG, KC_LCTL, KC_LALT, KC_LGUI, LOWER,   KC_SPC,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),

/* Midi
 * ,-----------------------------------------------------------------------------------.
 * |  C4  |  C#4 |  D4  |  D#4 |  E4  |  F4  |  F#4 |  G4  |  G#4 |  A4  |  A#4 |  B4  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  C3  |  C#3 |  D3  |  D#3 |  E3  |  F3  |  F#3 |  G3  |  G#3 |  A3  |  A#3 |  B3  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |  C2  |  C#2 |  D2  |  D#2 |  E2  |  F2  |  F#2 |  G2  |  G#2 |  A2  |  A#2 |  B2  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | MIDI |OCTDNW| OCTUP|  ABL |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_MIDI] = LAYOUT_planck_mit(
    MI_C3, MI_Cs3, MI_D3, MI_Ds3, MI_E3, MI_F3, MI_Fs3, MI_G3, MI_Gs3, MI_A3, MI_As3, MI_B3,
    MI_C2, MI_Cs2, MI_D2, MI_Ds2, MI_E2, MI_F2, MI_Fs2, MI_G2, MI_Gs2, MI_A2, MI_As2, MI_B2,
    MI_C1, MI_Cs1, MI_D1, MI_Ds1, MI_E1, MI_F1, MI_Fs1, MI_G1, MI_Gs1, MI_A1, MI_As1, MI_B1,
    TG(_MIDI), MI_OCTD, MI_OCTU, ABLETON, _______, _______, _______, _______, _______, _______, _______
),

/* Drum
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |  C2 |  C#2  |  D2  |  D#2 |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |  G#1 |  A1  |  A#1 |  B1  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |  E1  |  F1  |  F#1 |  G1  |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | DRUM |OCTDNW| OCTUP|  ABL |      |             |      |  C1  |  C#1 |  D1  |  D#1 |
 * `-----------------------------------------------------------------------------------'
 */
[_DRUM] = LAYOUT_planck_mit(
    _______, _______, _______, _______, _______, _______, _______, _______, MI_C2, MI_Cs2, MI_D2, MI_Ds2,
    _______, _______, _______, _______, _______, _______, _______, _______, MI_Gs1, MI_A1, MI_As1, MI_B1,
    _______, _______, _______, _______, _______, _______, _______, _______, MI_E1, MI_F1, MI_Fs1, MI_G1,
    TG(_DRUM), MI_OCTD, MI_OCTU, ABLETON, _______, _______, _______, MI_C1,  MI_Cs1, MI_D1, MI_Ds1
),

/* Ableton commands
 * ,-----------------------------------------------------------------------------------.
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |  TR1 |  TR2 |  TR3 |  TR4 |  TR5 |  TR6 |  TR7 |  TR8 |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | RECs | RECa |      |  TAP |
 * `-----------------------------------------------------------------------------------'
 */
[_ABLETON] = LAYOUT_planck_mit(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, MIDI_CC14, MIDI_CC15, MIDI_CC16, MIDI_CC17, MIDI_CC18, MIDI_CC19, MIDI_CC20, MIDI_CC21, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, MIDI_CC85,  MIDI_CC86, _______, MIDI_CC88
),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   _  |   +  |   {  |   }  |  |   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO ~ |ISO | | Home | End  |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_planck_mit(
    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR,    KC_ASTR,    KC_LPRN, KC_RPRN, KC_BSPC,
    KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_UNDS,    KC_PLUS,    KC_LCBR, KC_RCBR, KC_PIPE,
    _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  S(KC_NUHS), S(KC_NUBS), KC_HOME, KC_END,  _______,
    _______, _______, _______, _______, _______, _______, _______,    KC_MNXT,    KC_VOLD, KC_VOLU, KC_MPLY
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   -  |   =  |   [  |   ]  |  \   |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO # |ISO / |Pg Up |Pg Dn |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_planck_mit(
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    KC_DEL,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,
    _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NUHS, KC_NUBS, KC_PGUP, KC_PGDN, _______,
    _______, _______, _______, _______, _______, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
),

/* Adjust (Lower + Raise)
 *                      v------------------------RGB CONTROL--------------------v
 * ,-----------------------------------------------------------------------------------.
 * |      | Reset|Debug | RGB  |      |      |      |      |      |BRGTH+|BRGTH-|  Del |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | MIDI | DRUM |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] = LAYOUT_planck_mit(
    _______, QK_BOOT,   DB_TOGG,   RGB_TOG, _______, _______, _______, _______, _______,  RGB_VAI, RGB_VAD, KC_DEL ,
    _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______, _______, _______,
    _______, TG(_MIDI), TG(_DRUM), _______, _______, _______, _______, _______,  _______,  _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______
)

};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

