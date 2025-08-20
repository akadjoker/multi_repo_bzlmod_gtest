cc_library(
    name = "math_utils",
    srcs = ["math_utils.cpp"],
    hdrs = ["math_utils.hpp"],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "math_utils_test",
    srcs = ["math_utils_test.cpp"],
    deps = [
        ":math_utils",
        "@googletest//:gtest_main",
    ],
)
