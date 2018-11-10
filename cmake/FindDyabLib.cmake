set(FIND_DYABLIB_PATHS "C:/Users/Aidar/CLionProjects/DyabLib")

find_path(DYABLIB_INCLUDE_DIR includes/
        PATHS ${FIND_DYABLIB_PATHS})

find_library(DYABLIB_LIBRARY
        NAMES dyablib
        PATH_SUFFIXES Build
        PATHS ${FIND_DYABLIB_PATHS})