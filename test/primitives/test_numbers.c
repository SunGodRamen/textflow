#include "unity.h"
#include "../src/primitives/numbers.h"

void setUp(void) {
    // Empty implementation, since we don't need any setup for our tests.
}

void tearDown(void) {
    // Empty implementation, since we don't need any teardown for our tests.
}

void test_addition_integers(void) {
    int a = 5;
    int b = 7;
    int result = add_integers(a, b);
    TEST_ASSERT_EQUAL_INT(12, result);
}

void test_addition_floats(void) {
    float a = 5.5;
    float b = 7.5;
    float result = add_floats(a, b);
    TEST_ASSERT_EQUAL_FLOAT(13.0, result);
}

int main(void) {
    UNITY_BEGIN();

    RUN_TEST(test_addition_integers);
    RUN_TEST(test_addition_floats);

    return UNITY_END();
}
