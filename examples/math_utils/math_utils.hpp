#pragma once
#include <vector>
#include <stdexcept>
namespace math_utils {
    inline int add(int a, int b) { return a + b; }
    inline long long factorial(int n) {
        if (n < 0) throw std::invalid_argument("negative");
        long long r = 1;
        for (int i = 2; i <= n; ++i) r *= i;
        return r;
    }
    double mean(const std::vector<double>& xs);
}
