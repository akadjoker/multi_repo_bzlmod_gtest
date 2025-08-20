#include <gtest/gtest.h>
#include "string_utils.hpp"
using namespace string_utils;

TEST(StringUtils, ToUpper) {
    EXPECT_EQ(to_upper("abc"), "ABC");
    EXPECT_EQ(to_upper("Olá"), "OLá"); // note: std::toupper is locale-dependent
}

TEST(StringUtils, StartsWith) {
    EXPECT_TRUE(starts_with("hello", "he"));
    EXPECT_FALSE(starts_with("hello", "ha"));
}
