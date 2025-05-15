#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           LCTL(KC_P),     
    CW_TOGG,        KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_CAPS,        
    KC_ESCAPE,      MT(MOD_LGUI, KC_A),MT(MOD_LCTL, KC_S),MT(MOD_LALT, KC_D),MT(MOD_LSFT, KC_F),KC_G,                                           KC_H,           MT(MOD_RSFT, KC_J),MT(MOD_RALT, KC_K),MT(MOD_RALT, KC_L),MT(MOD_RGUI, KC_QUOTE),KC_ENTER,       
    TO(2),          KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_AT,          TO(4),          
                                                    LT(1,KC_DELETE),KC_BSPC,                                        KC_SPACE,       LT(3,KC_TAB)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          
    KC_NO,          KC_F1,          LSFT(KC_F3),    LCTL(KC_F),     KC_F3,          LCTL(KC_O),                                     LCTL(KC_N),     KC_HOME,        KC_UP,          KC_END,         KC_PAGE_UP,     KC_NO,          
    TO(0),          KC_LEFT_GUI,    KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_SHIFT,  LCTL(KC_N),                                     KC_F5,          KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_PGDN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F2,          KC_PC_CUT,      KC_PC_COPY,     KC_PC_PASTE,    LCTL(KC_S),                                     LCTL(KC_W),     KC_NO,          KC_NO,          KC_NO,          KC_NO,          QK_LLCK,        
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_LABK,        KC_LBRC,        KC_LCBR,        KC_LPRN,        KC_BSLS,                                        KC_SLASH,       KC_RPRN,        KC_RCBR,        KC_RBRC,        KC_RABK,        KC_NO,          
    KC_NO,          KC_CIRC,        KC_DLR,         KC_PERC,        KC_HASH,        KC_QUOTE,                                       KC_AT,          KC_KP_7,        KC_KP_8,        KC_KP_9,        KC_KP_PLUS,     KC_KP_ASTERISK, 
    TO(0),          KC_LEFT_GUI,    KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_SHIFT,  KC_NO,                                          KC_NO,          MT(MOD_RSFT, KC_KP_4),MT(MOD_RALT, KC_KP_5),KC_KP_6,        KC_KP_EQUAL,    KC_ENTER,       
    KC_TRANSPARENT, KC_NO,          KC_UNDS,        KC_PIPE,        KC_AMPR,        KC_COMMA,                                       KC_DOT,         KC_KP_1,        KC_KP_2,        KC_KP_3,        KC_KP_MINUS,    KC_KP_SLASH,    
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LT(3,KC_KP_0)
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          
    KC_TRANSPARENT, KC_CIRC,        KC_DLR,         KC_PERC,        KC_HASH,        KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    TO(0),          KC_LABK,        KC_LBRC,        KC_LCBR,        KC_LPRN,        KC_BSLS,                                        KC_SLASH,       KC_RPRN,        KC_RCBR,        KC_RBRC,        KC_RABK,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_NO,          KC_UNDS,        KC_PIPE,        KC_AMPR,        KC_NO,                                          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    QK_BOOT,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          RGB_VAI,                                        KC_AUDIO_VOL_UP,KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    TO(0),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          RGB_VAD,                                        KC_AUDIO_VOL_DOWN,KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_STOP,  KC_MEDIA_NEXT_TRACK,KC_NO,          
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          RGB_TOG,                                        KC_AUDIO_MUTE,  KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


const key_override_t shift_period_override = ko_make_basic(MOD_MASK_SHIFT, KC_DOT, KC_EXLM);
const key_override_t alt_period_override = ko_make_basic(MOD_MASK_ALT, KC_DOT, KC_QUES);
const key_override_t shift_comma_override = ko_make_basic(MOD_MASK_SHIFT, KC_COMM, KC_COLN);
const key_override_t alt_comma_override = ko_make_basic(MOD_MASK_ALT, KC_COMM, KC_SCLN);
const key_override_t alt_quote_override = ko_make_basic(MOD_MASK_ALT, KC_QUOT, KC_GRV);
const key_override_t shift_at_override = ko_make_basic(MOD_MASK_SHIFT, KC_AT, KC_TILD);
const key_override_t alt_at_override = ko_make_basic(MOD_MASK_ALT, KC_AT, KC_ASTR);
const key_override_t shift_ampr_override = ko_make_basic(MOD_MASK_SHIFT, KC_AMPR, KC_PIPE);
const key_override_t alt_ampr_override = ko_make_basic(MOD_MASK_ALT, KC_AMPR, KC_UNDS);
const key_override_t shift_spc_override = ko_make_basic(MOD_MASK_SHIFT, KC_SPC, KC_TAB);
const key_override_t shift_bspc_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);
const key_override_t shift_1_override = ko_make_basic(MOD_MASK_SHIFT, KC_1, KC_LT);
const key_override_t shift_2_override = ko_make_basic(MOD_MASK_SHIFT, KC_2, KC_LBRC);
const key_override_t shift_3_override = ko_make_basic(MOD_MASK_SHIFT, KC_3, KC_LCBR);
const key_override_t shift_4_override = ko_make_basic(MOD_MASK_SHIFT, KC_4, KC_LPRN);
const key_override_t shift_5_override = ko_make_basic(MOD_MASK_SHIFT, KC_5, KC_BSLS);
const key_override_t shift_6_override = ko_make_basic(MOD_MASK_SHIFT, KC_6, KC_SLSH);
const key_override_t shift_7_override = ko_make_basic(MOD_MASK_SHIFT, KC_7, KC_RPRN);
const key_override_t shift_8_override = ko_make_basic(MOD_MASK_SHIFT, KC_8, KC_RCBR);
const key_override_t shift_9_override = ko_make_basic(MOD_MASK_SHIFT, KC_9, KC_RBRC);
const key_override_t shift_0_override = ko_make_basic(MOD_MASK_SHIFT, KC_0, KC_GT);


const key_override_t **key_overrides = (const key_override_t *[]){
    &shift_period_override,
    &alt_period_override,
    &shift_comma_override,
    &alt_comma_override,
    &alt_quote_override,
    &shift_at_override,
    &alt_at_override,
    &shift_ampr_override,
    &alt_ampr_override,
    &shift_spc_override,
    &shift_bspc_override,
    &shift_1_override,
    &shift_2_override,
    &shift_3_override,
    &shift_4_override,
    &shift_5_override,
    &shift_6_override,
    &shift_7_override,
    &shift_8_override,
    &shift_9_override,
    &shift_0_override,
    NULL
};



bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}



