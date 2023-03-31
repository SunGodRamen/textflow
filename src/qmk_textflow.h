// qmk_textflow.h
#ifndef QMK_TEXTFLOW_H
#define QMK_TEXTFLOW_H

#include <stdint.h>
#include <stdbool.h>

typedef struct {
    bool pressed;
    uint16_t time;
} keyevent_t;

typedef struct {
    keyevent_t event;
    uint16_t keycode;
} keyrecord_t;

bool process_record_user(uint16_t keycode, keyrecord_t *record);
bool is_textflow_active(void);

#endif // QMK_TEXTFLOW_H
