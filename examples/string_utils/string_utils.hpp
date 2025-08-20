#pragma once
#include <string>
#include <algorithm>
namespace string_utils {
    inline std::string to_upper(std::string s) {
        std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c){ return std::toupper(c); });
        return s;
    }
    inline bool starts_with(const std::string& s, const std::string& p) {
        return s.rfind(p, 0) == 0;
    }
}
