#include "math_utils.hpp"
#include <numeric>
namespace math_utils {
    double mean(const std::vector<double>& xs) {
        if (xs.empty()) return 0.0;
        double s = std::accumulate(xs.begin(), xs.end(), 0.0);
        return s / xs.size();
    }
}
