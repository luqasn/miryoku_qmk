#include "quantum.h"

#if defined(ENCODER_ENABLE)
bool encoder_update_kb(uint8_t index, bool clockwise) {
    if (!encoder_update_user(index, clockwise)) {
        return false; /* Don't process further events if user function exists and returns false */
    }
    if (index == 0) { /* First encoder */
        if (clockwise) {
            // tap_code_delay(KC_MS_WH_UP, 10);
            tap_code16(KC_MS_WH_UP);
        } else {
            // tap_code_delay(KC_MS_WH_DOWN, 10);
            tap_code16(KC_MS_WH_DOWN);
        }
    }
    return true;
}
#endif
