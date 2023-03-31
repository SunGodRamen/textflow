// test_qmk_textflow.c
#include <stdio.h>
#include "unity.h"
#include "qmk_textflow.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    static bool textflow_active = false;

    if (keycode == KC_COMPOSE && record->event.pressed) {
        textflow_active = !textflow_active;
    }
    
    return textflow_active;
}

// Test function to check the Compose key activation and deactivation
void test_compose_key_activation_deactivation(void) {
    // Test Compose key activation
    process_record_user(KC_COMPOSE, &(keyrecord_t){.event.pressed = true});
    TEST_ASSERT_TRUE(is_textflow_active());
    
    // Test Compose key deactivation
    process_record_user(KC_COMPOSE, &(keyrecord_t){.event.pressed = false});
    TEST_ASSERT_FALSE(is_textflow_active());
}

// Main function for running test cases
int main(void) {
    UNITY_BEGIN();

    // Add test functions
    RUN_TEST(test_compose_key_activation_deactivation);

    return UNITY_END();
}
