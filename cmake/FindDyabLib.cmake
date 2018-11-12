set(FIND_DYABLIB_PATHS "C:/Users/Aidar/CLionProjects/DyabLib")

set(DYABLIB_INCLUDE_DIR "${FIND_DYABLIB_PATHS}/includes")

find_library(DYABLIB_LIBRARY
        NAMES dyablib
        PATH_SUFFIXES Build
        PATHS ${FIND_DYABLIB_PATHS})