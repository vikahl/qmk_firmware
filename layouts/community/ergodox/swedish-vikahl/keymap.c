// Viktors keyboard layout.
// To be used with Svorak A5

#include QMK_KEYBOARD_H
#include "debug.h"
#include "action_layer.h"
#include "keymap_swedish.h"

#define BASE 0 // default layer
#define SYMB 1 // symbols
#define MDIA 2 // mouse keys


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   $    |   !  |  "   |  #   |  #   |  %   | LEFT |           | RIGHT|   &  |  /   |  (   |  )   |  =   |  ?     |
 * |        |   1  |  2 @ |  3 £ |  4 $ |  5   |      |           |      |   6  |  7 { |  8 [ |  9 ] |  0 } |  + \   |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |   Å  |   Ä  |   Ö  |   P  |   Y  |      |           |      |   F  |   G  |   C  |   R  |   L  |   ;    |
 * | Del    |   Q  |   W  |   E  |   R  |   T  |  Up  |           | Down |   Y  |   U  |   I  |   O  |   P  |   [    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   A  |   O  |   E  |   U  |   I  |      |           |      |   D  |   H  |   T  |   N  |  S   |   -    |
 * | Esc    |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |  ;   |   '    |
 * |--------+------+------+------+------+------|  Lt1 |           |  Win |------+------+------+------+------+--------|
 * | LShift |   .  |   Z  |   X  |   C  |   V  |   B  |           |      |   N  |   M  |      |      |/ Ctrl| RShift |
 * |        |   .  |   Q  |   J  |   K  |   X  |   B  |           |      |   M  |   W  |   V  |   Z  |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | CTRL |  L1  | AltGr| Left | Right|                                       |  Up  | Down | AltGr  |   ]  | ~L1  |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,---------------.
 *                                        | Lt   | LGui |       | Alt  |Ctrl/Esc|
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | Home |       | PgUp |        |      |
 *                                 | Space|Backsp|------|       |------|  Tab   |Enter |
 *                                 |      |ace   | End  |       | PgDn |        |      |
 *                                 `--------------------'       `----------------------'
 */
[BASE] = LAYOUT_ergodox(  // layer 0 : default
        // left hand
        NO_DLR,         KC_1,           KC_2,    KC_3,   KC_4,   KC_5,   KC_LEFT,
        KC_DEL,         KC_Q,           KC_W,    KC_E,   KC_R,   KC_T,   KC_UP,
        KC_ESC,         KC_A,           KC_S,    KC_D,   KC_F,   KC_G,
        KC_LSFT,        KC_Z,           KC_X,    KC_C,   KC_K,   KC_X,   TG(MDIA),
        CTL_T(KC_NO),   MO(SYMB),       LALT(KC_LSFT),  KC_LEFT,KC_RGHT,
                                                          ALT_T(KC_APP), KC_LGUI,
                                                                         KC_HOME,
                                                        KC_SPC, KC_BSPC, KC_END,
        // right hand
        KC_RGHT,        KC_6,   KC_7,   KC_8,   KC_9,   KC_0,             KC_BSLASH,
        TG(1),          KC_F,   KC_G,   KC_C,   KC_R,   KC_L,             NO_AM,
                        KC_D,   KC_H,   KC_T,   KC_N,   KC_S,             NO_AE,
        TG(MDIA),       KC_B,   KC_M,   KC_W,   KC_V,   CTL_T(KC_Z),      KC_RSFT,
                        KC_UP,  KC_DOWN,KC_LBRC,KC_RBRC, KC_FN1,
        KC_LALT, CTL_T(KC_ESC),
        KC_PGUP,
        KC_PGDN, KC_TAB, KC_ENT
    ),
/* Keymap 1: Symbol Layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |  F1  |  F2  |  F3  |  F4  |  F5  |      |           |      |  F6  |  F7  |  F8  |  F9  |  F10 |   F11  |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |   @  |   {  |   }  |   [  |   ]  |      |           |      |   <  |   7  |   8  |   9  |   *  |   F12  |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   #  |   (  |   )  |   \  |   /  |------|           |------|   >  |   4  |   5  |   6  |   +  |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      | UND  | CUT  | COP  | PAS  |      |           |      |   ?  |   1  |   2  |   3  |   %  |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |   .  |   0  |   =  |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
// SYMBOLS
[SYMB] = LAYOUT_ergodox(
       // left hand
       M(0),      KC_F1,   KC_F2,    KC_F3,    KC_F4,     KC_F5,    KC_TRNS,
       KC_TRNS,   NO_AT,   ALGR(KC_7),  ALGR(KC_0),  NO_LBRC,   NO_RBRC,  KC_TRNS,
       KC_TRNS,   KC_HASH, NO_LPRN,  NO_RPRN,  ALGR(KC_MINS), NO_SLSH,
       KC_TRNS,   KC_TRNS, LCTL(KC_Z),  LCTL(KC_X),  LCTL(KC_C),    LCTL(KC_V),  KC_TRNS,
       KC_TRNS,   KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,
                                       KC_TRNS,KC_TRNS,
                                               KC_TRNS,
                               KC_TRNS,KC_TRNS,KC_TRNS,
       // right hand
       KC_TRNS, KC_F6,   KC_F7,  KC_F8,   KC_F9,   KC_F10,  KC_F11,
       KC_TRNS, NO_LESS,   KC_7,   KC_8,    KC_9,    KC_KP_ASTERISK, KC_F12,
                LSFT(NO_LESS), KC_4,   KC_5,    KC_6,    KC_KP_PLUS, KC_TRNS,
       KC_TRNS, NO_QUES, KC_1,   KC_2,    KC_3,    LSFT(KC_5), KC_TRNS,
                         KC_DOT,KC_0,  LSFT(KC_0),    KC_TRNS,  KC_TRNS,
       KC_TRNS, KC_TRNS,
       KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS
),
/* Keymap 2: Media and mouse keys
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      | MsUp |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |MsLeft|MsDown|MsRght|      |------|           |------|      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      | Lclk | Rclk |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
// MEDIA AND MOUSE
[MDIA] = LAYOUT_ergodox(
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_U, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN2,
                                           KC_TRNS, KC_TRNS,
                                                    KC_TRNS,
                                  KC_TRNS, KC_TRNS, KC_TRNS,
    // right hand
       KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                 KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS,
       KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS
),
};

const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_TAP_TOGGLE(SYMB)                // FN1 - Momentary Layer 1 (Symbols)
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

    uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      // TODO: Make this relevant to the ErgoDox EZ.
        case 1:
            ergodox_right_led_3_on();
            break;
        case 2:
            ergodox_right_led_2_on();
            break;
        case 3:
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
            break;
        default:
            // none
            break;
    }

    if (host_keyboard_leds() & (1<<USB_LED_CAPS_LOCK)) {
        // if capslk is on, set led 1 on
        ergodox_right_led_1_on();
    } else {
        ergodox_right_led_1_off();
    }

};
