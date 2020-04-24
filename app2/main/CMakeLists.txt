set(srcs
    "src/main.c"
    "src/a/function.c"
    "src/b/function.c"
    )

set(includes
    "include"
    )

idf_component_register(SRCS ${srcs}
                       INCLUDE_DIRS ${includes})
