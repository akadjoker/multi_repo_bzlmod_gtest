cc_library(
    name = "string_utils",
    srcs = ["string_utils.cpp"],
    hdrs = ["string_utils.hpp"],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "string_utils_test",
    srcs = ["string_utils_test.cpp"],
    deps = [
        ":string_utils",
        "@googletest//:gtest_main",
    ],
)
