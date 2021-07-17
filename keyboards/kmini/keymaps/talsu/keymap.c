/* Copyright 2018 Evy Dekkers
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

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

enum alt_keycodes {
    MD_BOOT = SAFE_RANGE,
    CH_LANG, //맥 + Windows 한영 전환 (Mac은 F19)
    MCR_ID_PW,            //MACRO ID -> tab -> Password -> Enter
    MCR_ID,               //MACRO ID
    MCR_PW,               //MACRO Password
    MCR_CTS               //MACRO Mac 스크린샷 (영역)
};


const char idString[] = "<ID>";
const char passwordString[] = "<Password>";


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
     KC_ESC,   _______,   KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,  \
    _______,   _______,   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP,  \
    _______,   _______,   CH_LANG, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  KC_PGDN, \
    _______,   _______,   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,   LM(2,MOD_RSFT), KC_UP,   KC_END, \
    _______,     MO(4),   KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             MO(3),          KC_LEFT, KC_DOWN, KC_RGHT  \
  ),
  [1] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, KC_CAPS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, \
    _______, _______, _______, _______, _______,                            _______,                            _______,          _______, _______, _______  \
  ),
  [2] = LAYOUT(
    _______, _______, KC_GRV,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, KC_CAPS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, \
    _______, _______, _______, _______, _______,                            _______,                            _______,          _______, _______, _______  \
  ),
  [3] = LAYOUT(
    _______, _______, KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,   KC_MUTE, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, MCR_ID,  MCR_PW,  _______, _______, _______, KC_VOLU, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, MCR_ID_PW, _______, _______,          _______, KC_VOLD, \
    _______, _______, _______, _______, _______, MCR_CTS, _______, MD_BOOT, _______, _______, _______, DF(0),   DF(1),            _______, _______, KC_HOME, \
    _______, _______, _______, _______, _______,                            _______,                            _______,          _______, _______, _______  \
  ),
  [4] = LAYOUT(
   MCR_ID_PW, MCR_PW, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
     MCR_ID, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    MCR_CTS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, \
    _______, _______, _______, _______, _______,                            _______,                            _______,          _______, _______, _______  \
  ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    static uint32_t key_timer;

    switch (keycode) {
        case MD_BOOT:
            if (record->event.pressed) {
                key_timer = timer_read32();
            } else {
                if (timer_elapsed32(key_timer) >= 500) {
                    reset_keyboard();
                }
            }
            return false;
        case CH_LANG:
            if (record->event.pressed) {
                register_code(KC_F19);
                register_code(KC_LANG1);
            } else {
                unregister_code(KC_F19);
                unregister_code(KC_LANG1);
            }
            return false;
        case MCR_ID_PW:
            if (record->event.pressed) {
                send_string(idString);
                SEND_STRING(SS_TAP(X_TAB));
                send_string(passwordString);
                SEND_STRING(SS_TAP(X_ENTER));
            }
            return false;
        case MCR_ID:
            if (record->event.pressed) {
                send_string(idString);
            }
            return false;
        case MCR_PW:
            if (record->event.pressed) {
                send_string(passwordString);
            }
            return false;
        case MCR_CTS:
            if (record->event.pressed) {
                SEND_STRING(SS_LCTL(SS_LSFT(SS_LALT("4"))));
            }
            return false;
        default:
            return true; //Process all other keycodes normally
    }
}

void led_set_user(uint8_t usb_led) {
    if (usb_led & (1<<USB_LED_CAPS_LOCK)) {
        PORTB &= ~(1<<1); // LO
    } else {
        PORTB |= (1<<1); // HI
    }
}


void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}
