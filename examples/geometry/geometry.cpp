#include "geometry.hpp"
namespace geometry {
    double distance(const Vec2& a, const Vec2& b) {
        Vec2 d{a.x - b.x, a.y - b.y};
        return length(d);
    }
}
