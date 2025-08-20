cc_library(
    name = "geometry",
    srcs = ["geometry.cpp"],
    hdrs = ["geometry.hpp"],
    visibility = ["//visibility:public"],
)

cc_test(
    name = "geometry_test",
    srcs = ["geometry_test.cpp"],
    deps = [
        ":geometry",
        "@googletest//:gtest_main",
    ],
)
