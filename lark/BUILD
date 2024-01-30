cc_library(
    name = "lark-errors",
    srcs = [
        "errors.c"
    ],
    hdrs = [
        "errors.h"
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "lark-util",
    srcs = [
        "util.c"
    ],
    hdrs = [
        "util.h"
    ],
    deps = [
        "//lark:lark-errors"
    ],
    visibility = ["//visibility:public"],
)


cc_library(
    name = "lark",
    deps = [
        "//lark:lark-errors",
        "//lark:lark-util",
        "//lark/lark-containers",
    ],
    visibility = ["//visibility:public"],
)