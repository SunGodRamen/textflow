// qmk_textflow.c
#include "../rsrc/mock_qmk.h"
#include "qmk_textflow.h"

static bool textflow_active = false;

void toggle_textflow_active(void) {
    textflow_active = !textflow_active;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (keycode == KC_COMPOSE) {
        if (record->event.pressed) {
            toggle_textflow_active(); // Toggle the TextFlow active state
        }
        return false; // We've processed the Compose key, no further processing is needed
    }

    if (is_textflow_active()) {
        // Handle TextFlow specific keycodes or pass-through regular keycodes
        // ...
    }

    return true; // Allow QMK to continue processing other keycodes
}

bool is_textflow_active(void) {
    return textflow_active;
}
