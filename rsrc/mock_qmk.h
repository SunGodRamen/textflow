// mock_qmk.h
#ifndef MOCK_QMK_H
#define MOCK_QMK_H

#include <stdint.h>
#include <stdbool.h>

// Mock QMK keycodes
#define KC_COMPOSE 0x5C00

// Mock keyrecord_t type
typedef struct {
    bool pressed;
    uint16_t time;
} event_t;

typedef struct {
    uint16_t keycode;
    event_t event;
} keyrecord_t;

#endif // MOCK_QMK_H
