#pragma once
#include <cmath>
namespace geometry {
    struct Vec2 { double x{}, y{}; };
    inline double dot(const Vec2& a, const Vec2& b) { return a.x*b.x + a.y*b.y; }
    inline double length(const Vec2& v) { return std::sqrt(dot(v,v)); }
    double distance(const Vec2& a, const Vec2& b);
}
