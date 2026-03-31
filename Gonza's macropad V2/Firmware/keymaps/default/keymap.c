#include QMK_KEYBOARD_H

enum custom_keycodes {
    SPOTIFY = SAFE_RANGE,
    DISCORD,
    NVID_REC,
    MUTE_WAP
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_2x2(
        SPOTIFY, DISCORD,
        NVID_REC, MUTE_WAP
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch (keycode) {

            case SPOTIFY:
                tap_code16(C(S(A(KC_S))));
                return false;

            case DISCORD:
                tap_code16(C(S(A(KC_D))));
                return false;

            case NVID_REC:
                tap_code16(C(S(A(KC_R))));
                return false;

            case MUTE_WAP:
                tap_code16(C(S(A(KC_M))));
                return false;
        }
    }
    return true;
}

bool encoder_update_user(uint8_t index, bool clockwise) {
    switch (index) {

        case 0:
            if (clockwise) tap_code(KC_VOLU);
            else tap_code(KC_VOLD);
            break;

        case 1:
            if (clockwise) tap_code(KC_BRIU);
            else tap_code(KC_BRID);
            break;
    }
    return true;
}