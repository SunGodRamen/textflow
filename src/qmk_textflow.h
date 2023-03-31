#ifndef QMK_TEXTFLOW_H
#define QMK_TEXTFLOW_H

#include <stdbool.h>
#include <stdint.h>

// Include mock_qmk.h for event_t and keyrecord_t definitions
#include "../rsrc/mock_qmk.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record);
bool is_textflow_active(void);
void toggle_textflow_active(void);

#endif // QMK_TEXTFLOW_H
