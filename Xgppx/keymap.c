#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  MAC_MISSION_CONTROL,
  MAC_SPOTLIGHT,
  MAC_SIRI,
  MAC_LOCK,
};



enum tap_dance_codes {
  DANCE_0,
};

#define DUAL_FUNC_0 LT(7, KC_F4)
#define DUAL_FUNC_1 LT(7, KC_F11)
#define DUAL_FUNC_2 LT(1, KC_D)
#define DUAL_FUNC_3 LT(9, KC_F14)
#define DUAL_FUNC_4 LT(10, KC_F10)
#define DUAL_FUNC_5 LT(1, KC_F7)
#define DUAL_FUNC_6 LT(7, KC_F13)
#define DUAL_FUNC_7 LT(14, KC_F18)
#define DUAL_FUNC_8 LT(3, KC_3)
#define DUAL_FUNC_9 LT(15, KC_I)
#define DUAL_FUNC_10 LT(1, KC_F2)
#define DUAL_FUNC_11 LT(6, KC_G)
#define DUAL_FUNC_12 LT(10, KC_C)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           CH_GRV,         
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           CH_Z,           KC_U,           KC_I,           KC_O,           KC_P,           LGUI(LSFT(KC_4)),
    KC_LEFT_SHIFT,  KC_A,           MT(MOD_LCTL, KC_S),MT(MOD_LALT, KC_D),MT(MOD_LGUI, KC_F),KC_G,                                           KC_H,           MT(MOD_RGUI, KC_J),MT(MOD_RALT, KC_K),MT(MOD_RCTL, KC_L),TD(DANCE_0),    KC_RIGHT_SHIFT, 
    DUAL_FUNC_0,    CH_Y,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           DUAL_FUNC_1,    DUAL_FUNC_2,    DUAL_FUNC_3,    ST_MACRO_0,     
                                                    LT(1, KC_BSPC), LT(2, KC_ENTER),                                LT(2, KC_ENTER),LT(1, KC_SPACE)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, LSFT(CH_CARR),  CH_LESS,        CH_MORE,        CH_DQOT,        CH_QUOT,                                        CH_AMPR,        KC_TRANSPARENT, LALT(KC_5),     LALT(KC_6),     CH_PERC,        KC_F12,         
    KC_TRANSPARENT, CH_EXLM,        MT(MOD_LCTL, KC_KP_MINUS),MT(MOD_LALT, KC_KP_PLUS),MT(MOD_LGUI, KC_KP_EQUAL),CH_HASH,                                        CH_PIPE,        DUAL_FUNC_4,    DUAL_FUNC_5,    DUAL_FUNC_6,    CH_QST,         KC_TRANSPARENT, 
    KC_TRANSPARENT, CH_CARR,        KC_KP_SLASH,    KC_KP_ASTERISK, LALT(LSFT(KC_7)),ST_MACRO_1,                                     ST_MACRO_2,     CH_DLR,         LALT(KC_8),     LALT(KC_9),     LALT(KC_G),     KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    RGB_HUI,        KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,MAC_MISSION_CONTROL,MAC_SPOTLIGHT,  MAC_SIRI,                                       DUAL_FUNC_7,    KC_MEDIA_PLAY_PAUSE,DUAL_FUNC_8,    KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,MAC_LOCK,       
    RGB_HUD,        KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     LALT(LCTL(KC_U)),                                LALT(LCTL(KC_I)),KC_MS_BTN1,     KC_UP,          KC_MS_BTN2,     KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, RGUI(CH_OE),    KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    LALT(LCTL(KC_ENTER)),                                LALT(LCTL(KC_K)),MT(MOD_RGUI, KC_LEFT),MT(MOD_RALT, KC_DOWN),MT(MOD_RCTL, KC_RIGHT),RGUI(CH_OE),    KC_TRANSPARENT, 
    KC_TRANSPARENT, RGUI(CH_AE),    KC_MAC_CUT,     KC_MAC_COPY,    KC_MAC_PASTE,   LALT(LCTL(KC_LEFT)),                                LALT(LCTL(KC_RIGHT)),KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_MS_BTN3,     RGUI(CH_AE),    KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PSCR,        
    KC_TRANSPARENT, KC_TRANSPARENT, MT(MOD_LGUI, KC_S),KC_TRANSPARENT, MT(MOD_LCTL, KC_F),KC_TRANSPARENT,                                 KC_TRANSPARENT, MT(MOD_RCTL, KC_J),KC_TRANSPARENT, MT(MOD_RGUI, KC_L),KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, KC_GRAVE,       CH_LESS,        CH_MORE,        CH_DQOT,        CH_QUOT,                                        CH_AMPR,        KC_TRANSPARENT, CH_LBRC,        CH_RBRC,        CH_PERC,        KC_F12,         
    KC_TRANSPARENT, CH_EXLM,        MT(MOD_LGUI, CH_MINS),DUAL_FUNC_9,    DUAL_FUNC_10,   CH_HASH,                                        CH_PIPE,        DUAL_FUNC_11,   DUAL_FUNC_5,    DUAL_FUNC_12,   CH_QST,         KC_TRANSPARENT, 
    KC_TRANSPARENT, CH_CARR,        KC_KP_SLASH,    KC_KP_ASTERISK, CH_BSLS,        ST_MACRO_3,                                     CH_TILD,        CH_DLR,         CH_LCBR,        CH_RCBR,        CH_AT,          KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    RGB_HUI,        RGB_VAD,        KC_F15,         MAC_MISSION_CONTROL,MAC_SPOTLIGHT,  MAC_SIRI,                                       KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,LGUI(KC_L),     
    RGB_HUD,        KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_MS_BTN1,     KC_UP,          KC_MS_BTN2,     KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    LGUI(KC_UP),                                    KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_PC_CUT,      KC_PC_COPY,     KC_PC_PASTE,    LGUI(KC_LEFT),                                  LGUI(KC_RIGHT), KC_MS_WH_DOWN,  KC_MS_WH_UP,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};



extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,255,255}, {86,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {86,255,255}, {0,255,255} },

    [1] = { {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {0,255,255}, {129,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {0,0,0}, {129,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,0,0}, {86,255,255}, {0,255,255}, {86,255,255}, {222,101,136}, {0,0,0}, {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {222,101,136}, {0,0,0}, {129,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {222,101,136}, {0,0,0}, {0,0,0}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,255,255}, {222,101,136}, {86,255,255}, {0,255,255}, {86,255,255}, {0,0,0}, {0,255,255}, {222,101,136}, {0,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {0,0,0}, {222,101,136}, {86,255,255}, {86,255,255}, {86,255,255}, {129,255,255}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,255,255}, {86,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {86,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {86,255,255}, {0,255,255} },

    [4] = { {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,255,255}, {86,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {129,255,255}, {86,255,255}, {0,255,255} },

    [5] = { {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {86,255,255}, {0,255,255}, {86,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {222,101,136}, {129,255,255}, {129,255,255}, {86,255,255}, {86,255,255}, {86,255,255}, {222,101,136}, {0,255,255}, {86,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {86,255,255}, {0,255,255}, {86,255,255}, {129,255,255}, {86,255,255}, {129,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {129,255,255}, {129,255,255}, {222,101,136}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {129,255,255}, {86,255,255}, {0,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_8))SS_DELAY(100)  SS_LSFT(SS_TAP(X_9))SS_DELAY(100)  SS_TAP(X_LEFT));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_DOT)SS_DELAY(100)  SS_TAP(X_DOT)SS_DELAY(100)  SS_TAP(X_KP_SLASH));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_N)));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_KP_DOT)SS_DELAY(100)  SS_TAP(X_KP_DOT)SS_DELAY(100)  SS_TAP(X_KP_SLASH));
    }
    break;
    case MAC_MISSION_CONTROL:
      HCS(0x29F);
    case MAC_SPOTLIGHT:
      HCS(0x221);
    case MAC_SIRI:
      HCS(0xCF);
    case MAC_LOCK:
      HCS(0x19E);

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(CH_LESS);
        } else {
          unregister_code16(CH_LESS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(CH_MORE);
        } else {
          unregister_code16(CH_MORE);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_COMMA);
        } else {
          unregister_code16(KC_COMMA);
        }
      } else {
        if (record->event.pressed) {
          register_code16(CH_SCLN);
        } else {
          unregister_code16(CH_SCLN);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_DOT);
        } else {
          unregister_code16(KC_DOT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(CH_COLN);
        } else {
          unregister_code16(CH_COLN);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(CH_MINS);
        } else {
          unregister_code16(CH_MINS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(CH_UNDS);
        } else {
          unregister_code16(CH_UNDS);
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(CH_COLN);
        } else {
          unregister_code16(CH_COLN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_RIGHT_GUI);
        } else {
          unregister_code16(KC_RIGHT_GUI);
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(CH_LPRN);
        } else {
          unregister_code16(CH_LPRN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_RIGHT_ALT);
        } else {
          unregister_code16(KC_RIGHT_ALT);
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(CH_RPRN);
        } else {
          unregister_code16(CH_RPRN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_RIGHT_CTRL);
        } else {
          unregister_code16(KC_RIGHT_CTRL);
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_MEDIA_PREV_TRACK);
        } else {
          unregister_code16(KC_MEDIA_PREV_TRACK);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_MEDIA_REWIND);
        } else {
          unregister_code16(KC_MEDIA_REWIND);
        }  
      }  
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_MEDIA_NEXT_TRACK);
        } else {
          unregister_code16(KC_MEDIA_NEXT_TRACK);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_MEDIA_FAST_FORWARD);
        } else {
          unregister_code16(KC_MEDIA_FAST_FORWARD);
        }  
      }  
      return false;
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(CH_PLUS);
        } else {
          unregister_code16(CH_PLUS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_ALT);
        } else {
          unregister_code16(KC_LEFT_ALT);
        }  
      }  
      return false;
    case DUAL_FUNC_10:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(CH_EQL);
        } else {
          unregister_code16(CH_EQL);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_CTRL);
        } else {
          unregister_code16(KC_LEFT_CTRL);
        }  
      }  
      return false;
    case DUAL_FUNC_11:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(CH_COLN);
        } else {
          unregister_code16(CH_COLN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_CTRL);
        } else {
          unregister_code16(KC_LEFT_CTRL);
        }  
      }  
      return false;
    case DUAL_FUNC_12:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(CH_RPRN);
        } else {
          unregister_code16(CH_RPRN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_RIGHT_GUI);
        } else {
          unregister_code16(KC_RIGHT_GUI);
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[1];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(CH_AE);
        tap_code16(CH_AE);
        tap_code16(CH_AE);
    }
    if(state->count > 3) {
        tap_code16(CH_AE);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(CH_AE); break;
        case SINGLE_HOLD: register_code16(CH_OE); break;
        case DOUBLE_TAP: register_code16(CH_UE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(CH_AE); register_code16(CH_AE);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(CH_AE); break;
        case SINGLE_HOLD: unregister_code16(CH_OE); break;
        case DOUBLE_TAP: unregister_code16(CH_UE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(CH_AE); break;
    }
    dance_state[0].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
};
