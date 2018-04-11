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
 * |        |   Å  |   Ä  |   Ö  |   P  |   Y  |      |           |      |   F  |   G  |   C  |   R  |   L  |   ,    |
 * | Del    |   Q  |   W  |   E  |   R  |   T  |  Up  |           | Down |   Y  |   U  |   I  |   O  |   P  |   Å    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   A  |   O  |   E  |   U  |   I  |      |           |      |   D  |   H  |   T  |   N  |  S   |   -    |
 * | Esc    |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |  Ö   |   Ä    |
 * |--------+------+------+------+------+------|  Lt1 |           |  Win |------+------+------+------+------+--------|
 * | LShift |   Q  |   J  |   K  |   X  |   B  | MDIA |           |      |   M  |   W  |   V  |   Z  |      |        |
 * |        |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   -  | RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | CTRL | AltGr|  Win | Left | Right|                                       | AltGr| Down |  Up  | Left | Right|
 *   | (.)) | AltGr|      | Left | Right|                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,---------------.       ,---------------.
 *                                        | Alt  |Ctrl/Esc|       | Alt  |Ctrl/Esc|
 *                                 ,------|------|--------|       |------+--------+------.
 *                                 |      |      |  Home  |       | PgUp |        |      |
 *                                 | Space|Backsp|--------|       |------|  Tab   |Enter |
 *                                 |      |ace   |  End   |       | PgDn |        |      |
 *                                 `----------------------'       `----------------------'
 */
[BASE] = LAYOUT_ergodox(  // layer 0 : default
        // left hand
        NO_DLR,         KC_1,       KC_2,           KC_3,   KC_4,   KC_5,   KC_LEFT,
        KC_DEL,         KC_Q,       KC_W,           KC_E,   KC_R,   KC_T,   KC_UP,
        KC_ESC,         KC_A,       KC_S,           KC_D,   KC_F,   KC_G,
        KC_LSFT,        KC_Z,       KC_X,           KC_C,   KC_V,   KC_B,   MO(MDIA),
        CTL_T(KC_DOT),  KC_RALT,    KC_LWIN,        KC_LEFT,KC_RGHT,
                                                          KC_LALT, CTL_T(KC_ESC),
                                                                         KC_HOME,
                                                        KC_SPC, KC_BSPC, KC_END,
        // right hand
        KC_RGHT,        KC_6,   KC_7,    KC_8,    KC_9,    KC_0,     NO_PLUS,
        KC_DOWN,        KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,     NO_AA,
                        KC_H,   KC_J,    KC_K,    KC_L,    NO_OSLH,  NO_AE,
        KC_LWIN,        KC_N,   KC_M,    KC_COMM, KC_DOT,  NO_MINS,  KC_RSFT,
                        NO_ALGR,KC_DOWN, KC_UP,   KC_LEFT, KC_RGHT,
        KC_LALT, CTL_T(KC_ESC),
        KC_PGUP,
        KC_PGDN, KC_TAB, KC_ENT
),
/* Keymap 1: Symbol Layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |  /   |   *  |  -   |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |  F1  |  F2  |  F3  |  F4  |      |      |           |      |      |  7   |  8   |  9   |  +   |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |  F5  |  F6  |  F7  |  F8  |      |------|           |------|      |  4   |  5   |  6   |  +   |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |  F9  |  F10 |  F11 |  F12 |      |      |           |      |      |  1   |  2   |  3   | Enter|        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |  0   | ,    | .    | Enter|      |
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
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_TRNS, KC_TRNS,
       KC_TRNS, KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_TRNS,
       KC_TRNS, KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                       KC_TRNS,KC_TRNS,
                                               KC_TRNS,
                               KC_TRNS,KC_TRNS,KC_TRNS,
       // right hand
       KC_TRNS, KC_TRNS, KC_TRNS, KC_PSLS, KC_PAST, KC_PMNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_7,    KC_8,    KC_9,    KC_PPLS, KC_TRNS,
                KC_TRNS, KC_4,    KC_5,    KC_6,    KC_PPLS, KC_TRNS,
       RESET,   KC_TRNS, KC_1,    KC_2,    KC_3,    KC_PENT, KC_TRNS,
                         KC_0,    KC_COMM, KC_DOT,  KC_PENT, KC_TRNS,
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
 * |        |      |MsLeft|MsDown|MsRght|      |------|           |------|      | Play | Pause| Prev | Next |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      | Lclk | Rclk |      |      |           |      |      |VolDn |VolUp | Mute |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |LeClk |RiClk |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
// MEDIA AND MOUSE
[MDIA] = LAYOUT_ergodox(
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_MS_U, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_MS_L, KC_MS_D, KC_MS_R, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN2, KC_TRNS, KC_TRNS,
       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                           KC_TRNS, KC_TRNS,
                                                    KC_TRNS,
                                  KC_BTN1, KC_BTN2, KC_TRNS,
    // right hand
       KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
       KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                 KC_TRNS, KC_MPLY, KC_MPLY, KC_MPRV, KC_MNXT, KC_TRNS,
       KC_TRNS,  KC_TRNS, KC_VOLD, KC_VOLU, KC_MUTE, KC_TRNS, KC_TRNS,
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
