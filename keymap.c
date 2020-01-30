#include QMK_KEYBOARD_H
#include "keymap_swedish.h"


#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 16

enum custom_keycodes {
  LOWER = SAFE_RANGE,
  RAISE,
  ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Default
 * ,-----------------------------------------| |-----------------------------------------.
 * |  Del |   1  |   2  |   3  |   4  |   5  | |   6  |   7  |   8  |   9  |   0  | Bksp |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |  Tab |   Q  |   W  |   E  |   R  |   T  | |   Y  |   U  |   I  |   O  |   P  |   Å  |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |TapEsc|   A  |   S  |   D  |   F  |   G  | |   H  |   J  |   K  |   L  |   Ö  |   Ä  |
 * |------+------+------+------+--^^--+------| |------+--^^--+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  | |   N  |   M  |   ,  |   .  |   -  |Enter |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * | AltGr| GUI  |      | Alt  |Lower |Sft/En| |AltSpc|Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------| |-----------------------------------------'
 */

[_QWERTY] = LAYOUT( \
            KC_DEL,        KC_1,    KC_2, KC_3,    KC_4,  KC_5,   KC_6,   KC_7,  KC_8,    KC_9,    KC_0,    KC_BSPC,   \
            KC_TAB,        KC_Q,    KC_W, KC_E,    KC_R,  KC_T,   KC_Y,   KC_U,  KC_I,    KC_O,    KC_P,    SE_AA,     \
            CTL_T(KC_ESC), KC_A,    KC_S, KC_D,    KC_F,  KC_G,   KC_H,   KC_J,  KC_K,    KC_L,    SE_OSLH, SE_AE,     \
            KC_LSFT,       KC_Z,    KC_X, KC_C,    KC_V,  KC_B,   KC_N,   KC_M,  KC_COMM, KC_DOT,  SE_MINS, KC_ENT,    \
            KC_ALGR,       KC_LGUI, XXXXXXX, KC_LALT, LOWER, SFT_T(KC_ENT), ALT_T(KC_SPC), RAISE, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT  \
            ),

/* Lower
 * ,-----------------------------------------| |-----------------------------------------.
 * |      |GUI(1)|GUI(2)|GUI(3)|GUI(4)|GUI(5)| |GUI(6)|  Ins | Home | PgDn | PgUp | End  |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |  !   |  "   |  #   |  $   |  %   | |  &   |  ?   |  P/  |  P7  |  P8  |  P9  |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |  /   |  (   |  )   |  =   |  <   | |  >   |  '   |  P*  |  P4  |  P5  |  P6  |
 * |------+------+------+------+------+------| |------+--^---+------+------+------+------|
 * |      |  |   |  ~   |  ´   |  \   |  ^   | |  +   |      |  P+  |  P1  |  P2  |  P3  |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |      |      |      |      | |      |      |  P-  |  P0  |  P.  | PEnt |
 * `-----------------------------------------| |-----------------------------------------'
 */

[_LOWER] = LAYOUT( \
            _______,  LGUI(KC_1),  LGUI(KC_2),  LGUI(KC_3),  LGUI(KC_4),  LGUI(KC_5),  LGUI(KC_6),  KC_INS,   KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,  \
            _______,  LSFT(KC_1),  SE_QUO2,     LSFT(KC_3),  SE_DLR,      LSFT(KC_5),  SE_AMPR,     SE_QUES,  KC_PSLS,  KC_P7,    KC_P8,    KC_P9,  \
            _______,  SE_SLSH,     SE_LPRN,     SE_RPRN,     SE_EQL,      SE_LESS,     SE_GRTR,     SE_APOS,  KC_PAST,  KC_P4,    KC_P5,    KC_P6,  \
            _______,  SE_PIPE,     SE_TILD,     SE_ACUT,     SE_BSLS,     SE_CIRC,     SE_PLUS,     _______,  KC_PPLS,  KC_P1,    KC_P2,    KC_P3,   \
            _______,  _______,     _______,     _______,     _______,     _______,     _______,     _______,  KC_PMNS,  KC_P0,    KC_PDOT,  KC_PENT \
            ),

/* Raise
 * ,-----------------------------------------| |-----------------------------------------.
 * |      |      |      |      |      |      | |      |      |      |      |      |      |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |  F1  |  F2  |  F3  |  F4  |      | |      |      |      |      |      |  §   |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |  F5  |  F6  |  F7  |  F8  |      | |   @  |   {  |   [  |   ]  |   }  |  *   |
 * |------+------+------+------+--^^--+------| |------+--^^--+------+------+------+------|
 * |      |  F9  |  F10 |  F11 |  F12 |      | |      |      |      |      |      |      |
 * |------+------+------+------+------+------| |------+------+------+------+------+------|
 * |      |      |      |      |      | Bksp | |      |      |      |      |      |      |
 * `-----------------------------------------| |-----------------------------------------'
 */

[_RAISE] = LAYOUT( \
            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,        \
            _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    _______,  _______,  _______,  _______,  _______,  _______,  SE_HALF,        \
            _______,  KC_F5,    KC_F6,    KC_F7,    KC_F8,    _______,  SE_AT,    SE_LCBR,  SE_LBRC,  SE_RBRC,  SE_RCBR,  LSFT(SE_APOS),  \
            _______,  KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,  _______,  _______,  _______,  _______,  _______,  _______,        \
            _______,  _______,  _______,  _______,  _______,  KC_BSPC,  _______,   _______,  _______,  _______,  _______,  _______ \
            ),

/* Adjust (Lower + Raise)
 * ,-----------------------------------------------------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      | Reset| Debug|      |      |      |      |      |      |      |      |  Del |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |Aud on|AudOff|AGnorm|AGswap|NumLck|      |      |      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |Voice-|Voice+|Mus on|MusOff|MidiOn|MidOff|      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */

[_ADJUST] =  LAYOUT( \
            KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,  KC_F11,  KC_F12,    \
            _______, RESET,   DEBUG,   _______, _______, _______, _______, TERM_ON, TERM_OFF, _______, _______, KC_DEL,    \
            _______, _______, MU_MOD,  AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, KC_NLCK, _______,  _______, _______, _______,   \
            _______, MUV_DE,  MUV_IN,  MU_ON,   MU_OFF,  MI_ON,   MI_OFF,  _______, _______,  _______, _______, _______,   \
            _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______  \
            )


};

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
  }
  return true;
}
