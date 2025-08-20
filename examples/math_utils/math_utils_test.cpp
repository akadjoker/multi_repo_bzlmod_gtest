#include <gtest/gtest.h>
#include "math_utils.hpp"
using namespace math_utils;

TEST(MathUtils, Add) {
    EXPECT_EQ(add(2,3), 5);
    EXPECT_EQ(add(-1,1), 0);
}

TEST(MathUtils, Factorial) {
    EXPECT_EQ(factorial(0), 1);
    EXPECT_EQ(factorial(5), 120);
    EXPECT_THROW(factorial(-2), std::invalid_argument);
}

TEST(MathUtils, Mean) {
    EXPECT_DOUBLE_EQ(mean({}), 0.0);
    EXPECT_DOUBLE_EQ(mean({1.0, 2.0, 3.0}), 2.0);
}
