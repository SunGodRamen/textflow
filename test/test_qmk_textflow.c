// test_qmk_textflow.c
#include <stdbool.h>
#include <stdint.h>

#ifdef USE_MOCK_QMK
#include "../rsrc/mock_qmk.h"
#else
#include "../src/qmk_textflow.h"
#endif

#include "unity.h"

void setUp(void) {
    // Empty implementation, since we don't need any setup for our tests.
}

void tearDown(void) {
    // Empty implementation, since we don't need any teardown for our tests.
}

// Test function to check the Compose key activation and deactivation
void test_compose_key_activation_deactivation(void) {
    keyrecord_t test_record;

    // Press the Compose key
    test_record.keycode = KC_COMPOSE;
    test_record.event.pressed = true;
    process_record_user(KC_COMPOSE, &test_record);
    TEST_ASSERT_TRUE(is_textflow_active());

    // Release the Compose key
    test_record.event.pressed = false;
    process_record_user(KC_COMPOSE, &test_record);

    // Press the Compose key again
    test_record.event.pressed = true;
    process_record_user(KC_COMPOSE, &test_record);
    TEST_ASSERT_FALSE(is_textflow_active());
}


// Main function for running test cases
int main(void) {
    UNITY_BEGIN();

    // Add test functions
    RUN_TEST(test_compose_key_activation_deactivation);

    return UNITY_END();
}
