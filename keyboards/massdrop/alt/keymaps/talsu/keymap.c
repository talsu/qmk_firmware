#include QMK_KEYBOARD_H

enum alt_keycodes {
    L_BRI = SAFE_RANGE, //LED Brightness Increase                                   //Working
    L_BRD,              //LED Brightness Decrease                                   //Working
    L_PTN,              //LED Pattern Select Next                                   //Working
    L_PTP,              //LED Pattern Select Previous                               //Working
    L_PSI,              //LED Pattern Speed Increase                                //Working
    L_PSD,              //LED Pattern Speed Decrease                                //Working
    L_T_MD,             //LED Toggle Mode                                           //Working
    L_T_ONF,            //LED Toggle On / Off                                       //Broken
    L_ON,               //LED On                                                    //Broken
    L_OFF,              //LED Off                                                   //Broken
    L_T_BR,             //LED Toggle Breath Effect                                  //Working
    L_T_PTD,            //LED Toggle Scrolling Pattern Direction                    //Working
    U_T_AGCR,           //USB Toggle Automatic GCR control                          //Working
    DBG_TOG,            //DEBUG Toggle On / Off                                     //
    DBG_MTRX,           //DEBUG Toggle Matrix Prints                                //
    DBG_KBD,            //DEBUG Toggle Keyboard Prints                              //
    DBG_MOU,            //DEBUG Toggle Mouse Prints                                 //
    MD_BOOT,            //Restart into bootloader after hold timeout                //Working

    L_I_N,              //LED instruction preset Next
    L_I_P,              //LED instruciton preset Previous

    CH_LANG,            //맥 + Windows 한영 전환 (Mac은 F19)
    MCR_ID_PW,          //MACRO ID -> tab -> Password -> Enter
    MCR_ID,             //MACRO ID
    MCR_PW,             //MACRO Password
    MCR_CTS            //MACRO Mac 스크린샷 (영역)
};

const char idString[] = "<ID>";
const char passwordString[] = "<Password>";

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,  \
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_HOME, \
        CH_LANG, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  KC_PGUP, \
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, LM(2,MOD_RSFT),   KC_UP,   KC_PGDN, \
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             MO(3),   MO(4),   KC_LEFT, KC_DOWN, KC_RGHT  \
    ),
    [1] = LAYOUT(
        _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        KC_CAPS,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
        _______,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
        _______,  _______, _______,                            _______,                            _______, _______, _______, _______, _______  \
    ),
    [2] = LAYOUT(
        KC_GRV,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        KC_CAPS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______  \
    ),
    [3] = LAYOUT(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_MUTE, \
        _______, L_PSD,   L_BRI,   L_PSI,   _______, _______, _______, _______, U_T_AGCR,MCR_ID,  MCR_PW,  KC_SLCK, KC_PAUS, KC_PSCR, KC_END,  \
        _______, L_I_P,   L_BRD,   L_I_N,   _______, _______, _______, _______, _______, MCR_ID_PW, _______, _______,        _______, KC_VOLU, \
        _______, L_T_MD,  L_T_ONF, MCR_CTS, _______, MD_BOOT, NK_TOGG, _______, _______, DF(0),   DF(1),   _______,          KC_PGUP, KC_VOLD, \
        _______, _______, _______,                            _______,                            _______, _______, KC_HOME, KC_PGDN, KC_END   \
    ),
    [4] = LAYOUT(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_MUTE, \
        _______, L_PSD,   L_BRI,   L_PSI,   _______, _______, _______, _______, U_T_AGCR,MCR_ID,  MCR_PW,  KC_SLCK, KC_PAUS, KC_PSCR, KC_END,  \
        _______, L_PTP,   L_BRD,   L_PTN,   _______, _______, _______, _______, _______, MCR_ID_PW, _______, _______,        _______, KC_VOLU, \
        _______, L_T_MD,  L_T_ONF, MCR_CTS, _______, MD_BOOT, NK_TOGG, _______, _______, DF(0),   DF(1),   _______,          KC_PGUP, KC_VOLD, \
        _______, _______, _______,                            _______,                            _______, _______, KC_HOME, KC_PGDN, KC_END   \
    ),

    /*
    [X] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, \
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______  \
    ),
    */
};

#define MODS_SHIFT  (get_mods() & MOD_BIT(KC_LSHIFT) || get_mods() & MOD_BIT(KC_RSHIFT))
#define MODS_CTRL  (get_mods() & MOD_BIT(KC_LCTL) || get_mods() & MOD_BIT(KC_RCTRL))
#define MODS_ALT  (get_mods() & MOD_BIT(KC_LALT) || get_mods() & MOD_BIT(KC_RALT))

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    static uint32_t key_timer;

    switch (keycode) {
        case L_BRI:
            if (record->event.pressed) {
                if (LED_GCR_STEP > LED_GCR_MAX - gcr_desired) gcr_desired = LED_GCR_MAX;
                else gcr_desired += LED_GCR_STEP;
                if (led_animation_breathing) gcr_breathe = gcr_desired;
            }
            return false;
        case L_BRD:
            if (record->event.pressed) {
                if (LED_GCR_STEP > gcr_desired) gcr_desired = 0;
                else gcr_desired -= LED_GCR_STEP;
                if (led_animation_breathing) gcr_breathe = gcr_desired;
            }
            return false;
        case L_PTN:
            if (record->event.pressed) {
                if (led_animation_id == led_setups_count - 1) led_animation_id = 0;
                else led_animation_id++;
            }
            return false;
        case L_PTP:
            if (record->event.pressed) {
                if (led_animation_id == 0) led_animation_id = led_setups_count - 1;
                else led_animation_id--;
            }
            return false;
        case L_PSI:
            if (record->event.pressed) {
                led_animation_speed += ANIMATION_SPEED_STEP;
            }
            return false;
        case L_PSD:
            if (record->event.pressed) {
                led_animation_speed -= ANIMATION_SPEED_STEP;
                if (led_animation_speed < 0) led_animation_speed = 0;
            }
            return false;
        case L_T_MD:
            if (record->event.pressed) {
                led_lighting_mode++;
                if (led_lighting_mode > LED_MODE_MAX_INDEX) led_lighting_mode = LED_MODE_NORMAL;
            }
            return false;
        case L_T_ONF:
            if (record->event.pressed) {
                led_enabled = !led_enabled;
                I2C3733_Control_Set(led_enabled);
            }
            return false;
        case L_ON:
            if (record->event.pressed) {
                led_enabled = 1;
                I2C3733_Control_Set(led_enabled);
            }
            return false;
        case L_OFF:
            if (record->event.pressed) {
                led_enabled = 0;
                I2C3733_Control_Set(led_enabled);
            }
            return false;
        case L_T_BR:
            if (record->event.pressed) {
                led_animation_breathing = !led_animation_breathing;
                if (led_animation_breathing) {
                    gcr_breathe = gcr_desired;
                    led_animation_breathe_cur = BREATHE_MIN_STEP;
                    breathe_dir = 1;
                }
            }
            return false;
        case L_T_PTD:
            if (record->event.pressed) {
                led_animation_direction = !led_animation_direction;
            }
            return false;
        case U_T_AGCR:
            if (record->event.pressed && MODS_SHIFT && MODS_CTRL) {
                TOGGLE_FLAG_AND_PRINT(usb_gcr_auto, "USB GCR auto mode");
            }
            return false;
        case DBG_TOG:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_enable, "Debug mode");
            }
            return false;
        case DBG_MTRX:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_matrix, "Debug matrix");
            }
            return false;
        case DBG_KBD:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_keyboard, "Debug keyboard");
            }
            return false;
        case DBG_MOU:
            if (record->event.pressed) {
                TOGGLE_FLAG_AND_PRINT(debug_mouse, "Debug mouse");
            }
            return false;
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
        case L_I_N:
            if (record->event.pressed) {
                (led_instructions_id == led_instruction_count - 1) ? led_instructions_id = 0 : led_instructions_id++;
                // set_led_animation_id(led_default_rotate_pattern[led_instruction_id]);
            }
            return false;
        case L_I_P:
            if (record->event.pressed) {
                (led_instructions_id == 0) ? led_instructions_id = led_instruction_count - 1 : led_instructions_id--;
                // set_led_animation_id(led_default_rotate_pattern[led_instruction_id]);
            }
            return false;
        default:
            return true; //Process all other keycodes normally
    }
}

led_instruction_t led_instructions_common[] = {

    // ----Layer 2----
    { .flags = LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB, .id0 = 0x00000001, .id1 = 0x00000000, .id2 = 0xFFFFFFF8, .id3 = 0x000003FF, .r = 255, .g = 0, .b = 255, .layer = 2 },
    { .flags = LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB, .id0 = 0x40000000, .id1 = 0x00000000, .id2 = 0x00000000, .id3 = 0x00000000, .r = 0, .g = 255, .b = 255, .layer = 2 },

    // ----Layer 3----
    { .flags = LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB, .id0 = 0x7CF8FFFF, .id1 = 0xFF9D1F7C, .id2 = 0x00000007, .id3 = 0x00000000, .r = 0, .g = 0, .b = 0, .layer = 3 },
    { .flags = LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB, .id0 = 0x00050000, .id1 = 0x00020000, .id2 = 0x00000000, .id3 = 0x00000000, .r = 255, .g = 0, .b = 0, .layer = 3 },
    { .flags = LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB, .id0 = 0x00020000, .id1 = 0x00000001, .id2 = 0x00000000, .id3 = 0x00000000, .r = 255, .g = 181, .b = 0, .layer = 3 },
    { .flags = LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB, .id0 = 0x03000000, .id1 = 0x00000080, .id2 = 0x00000000, .id3 = 0x00000000, .r = 255, .g = 0, .b = 255, .layer = 3 },
    { .flags = LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB, .id0 = 0x80000000, .id1 = 0x00000002, .id2 = 0x00000000, .id3 = 0x00000000, .r = 255, .g = 242, .b = 0, .layer = 3 },
    { .flags = LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB, .id0 = 0x00000000, .id1 = 0x00002000, .id2 = 0xFFFFFFF8, .id3 = 0x000003FF, .r = 0, .g = 255, .b = 0, .layer = 3 },
    { .flags = LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB, .id0 = 0x00000000, .id1 = 0x00004000, .id2 = 0x00000000, .id3 = 0x00000000, .r = 255, .g = 255, .b = 255, .layer = 3 },
    { .flags = LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB, .id0 = 0x00000000, .id1 = 0x00008000, .id2 = 0x00000000, .id3 = 0x00000000, .r = 0, .g = 0, .b = 255, .layer = 3 },
    { .flags = LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB, .id0 = 0x00000000, .id1 = 0x00600000, .id2 = 0x00000000, .id3 = 0x00000000, .r = 0, .g = 255, .b = 255, .layer = 3 },

    // ----Layer 4----
    { .flags = LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB, .id0 = 0x7CF8FFFF, .id1 = 0xFF9D1F7C, .id2 = 0x00000007, .id3 = 0x00000000, .r = 0, .g = 0, .b = 0, .layer = 4 },
    { .flags = LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB, .id0 = 0x00050000, .id1 = 0x00020000, .id2 = 0xFFFFFFF8, .id3 = 0x000003FF, .r = 255, .g = 0, .b = 0, .layer = 4 },
    { .flags = LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB, .id0 = 0x00020000, .id1 = 0x00000001, .id2 = 0x00000000, .id3 = 0x00000000, .r = 255, .g = 181, .b = 0, .layer = 4 },
    { .flags = LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB, .id0 = 0x03000000, .id1 = 0x00000080, .id2 = 0x00000000, .id3 = 0x00000000, .r = 255, .g = 0, .b = 255, .layer = 4 },
    { .flags = LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB, .id0 = 0x80000000, .id1 = 0x00000002, .id2 = 0x00000000, .id3 = 0x00000000, .r = 255, .g = 242, .b = 0, .layer = 4 },
    { .flags = LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB, .id0 = 0x00000000, .id1 = 0x00002000, .id2 = 0x00000000, .id3 = 0x00000000, .r = 0, .g = 255, .b = 0, .layer = 4 },
    { .flags = LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB, .id0 = 0x00000000, .id1 = 0x00004000, .id2 = 0x00000000, .id3 = 0x00000000, .r = 255, .g = 255, .b = 255, .layer = 4 },
    { .flags = LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB, .id0 = 0x00000000, .id1 = 0x00008000, .id2 = 0x00000000, .id3 = 0x00000000, .r = 0, .g = 0, .b = 255, .layer = 4 },
    { .flags = LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB, .id0 = 0x00000000, .id1 = 0x00600000, .id2 = 0x00000000, .id3 = 0x00000000, .r = 0, .g = 255, .b = 255, .layer = 4 },

    //end must be set to 1 to indicate end of instruction set
     { .end = 1 }
};


led_instruction_t led_instructions_dev_tty[] = {

    // For Layer 0
    { .flags = LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB, .id0 = 0x00000001, .id1 = 0x00000400, .id2 = 0x00000000, .id3 = 0x00000000, .r = 255, .g = 0, .b = 0, .layer = 0 },
    { .flags = LED_FLAG_MATCH_ID | LED_FLAG_MATCH_LAYER | LED_FLAG_USE_RGB, .id0 = 0xFFFFFFFE, .id1 = 0xFFFFFBFF, .id2 = 0x00000007, .id3 = 0x00000000, .r = 255, .g = 255, .b = 255, .layer = 0 },
    { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_PATTERN, .id0 = 0x00000000, .id1 = 0x00000000, .id2 = 0xFFFFFFF8, .id3 = 0x000003FF, .pattern_id = 8},

    //end must be set to 1 to indicate end of instruction set
     { .end = 1 }
};

led_instruction_t led_instructions_mito_laser[] = {

    // For Layer 0
    { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .id0 = 0x00000001, .id1 = 0x01000400, .id2 = 0x00000007, .id3 = 0x00000000, .r = 255, .g = 0, .b = 165},
    { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_RGB, .id0 = 0xFFFFFFFE, .id1 = 0xFEFFFBFF, .id2 = 0x00000000, .id3 = 0x00000000, .r = 66, .g = 0, .b = 255},
    { .flags = LED_FLAG_MATCH_ID | LED_FLAG_USE_PATTERN, .id0 = 0x00000000, .id1 = 0x00000000, .id2 = 0xFFFFFFF8, .id3 = 0x000003FF, .pattern_id = 10},

    //end must be set to 1 to indicate end of instruction set
     { .end = 1 }
};


led_instruction_t led_instructions_default[] = {

    // Default ROTATE PATTERN
    { .flags = LED_FLAG_USE_ROTATE_PATTERN },
    { .end = 1 }
};


void *led_instructions_list[] = {
    led_instructions_dev_tty,
    led_instructions_mito_laser,
    led_instructions_default
};


uint8_t get_led_ins_array_size(led_instruction_t* cur) {
    uint8_t size = 0;
    while (!cur->end) {
        cur++;
        size++;
    }

    return size;
}

const uint8_t led_instruction_count = sizeof(led_instructions_list) / sizeof(led_instructions_list[0]);


uint8_t is_led_instruction_ready = 0;
void init_led_instruction(void) {
    // run only one time.
    if (is_led_instruction_ready) return;
    is_led_instruction_ready = 1;

    // append common instructions.
    uint8_t common_array_size = get_led_ins_array_size(led_instructions_common);
    for (int i = 0;i < led_instruction_count; ++i) {
        led_instruction_t *cur = led_instructions_list[i];
        uint8_t array_size = get_led_ins_array_size(cur);
        uint8_t mergedSize = array_size + common_array_size + 1;
        led_instruction_t* merged = (led_instruction_t*) malloc(sizeof(led_instruction_t) * mergedSize);

        for (int j = 0;j < array_size; ++j) {
            merged[j] = cur[j];
        }

        for (int j = 0;j < common_array_size + 1; ++j) {
            merged[j + array_size] = led_instructions_common[j];
        }

        led_instructions_list[i] = merged;
    }
}

void matrix_init_user(void) {
    //Set which from led_instructions_list should be default
    // uint8_t index = 0;    // led_instructions_pleasuretek  is position 0 in led_instructions_list  -- change this number to match in led_instructions_list to set default
    // led_instruction_id = index;
    // set_led_animation_id(led_default_rotate_pattern[index]);
    // led_animation_orientation = LED_SCROLL_CENT;

    init_led_instruction();
    led_animation_id = 0; // init led animation : Rainbow scrolling
    gcr_desired = LED_GCR_MAX; // init led bright : max
}

void keyboard_pre_init_user(void) {
    // Call the keyboard pre init code.
    // led_animation_id = 0; // init led animation : Rainbow scrolling
    // gcr_desired = LED_GCR_MAX; // init led bright : max
}
