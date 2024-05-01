#include "gtest/gtest.h"
#include "calculator.h"

TEST(CALCLATOR_TESTS, test_add) {
    Calculator calc{};
    EXPECT_EQ (calc.add(1,4), 5);
}

TEST(CALCLATOR_TESTS, test_subtract) {
    Calculator calc{};
    EXPECT_EQ (calc.subtract(1,4), -3);
}

TEST(CALCLATOR_TESTS, test_multiply) {
    Calculator calc{};
    EXPECT_EQ (calc.multiply(2,4), 8);
}

TEST(CALCLATOR_TESTS, test_divide) {
    Calculator calc{};
    EXPECT_EQ (calc.divide_int(9,4), 2);
}