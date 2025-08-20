#include <gtest/gtest.h>
#include "geometry.hpp"
using namespace geometry;

TEST(Geometry, LengthAndDistance) {
    EXPECT_DOUBLE_EQ(length({3,4}), 5.0);
    EXPECT_NEAR(distance({0,0},{1,1}), std::sqrt(2.0), 1e-9);
}
