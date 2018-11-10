CMAKE_MINIMUM_REQUIRED(VERSION 3.10)
project(DyabLib)

set(CMAKE_CXX_STANDARD 11)

include_directories(includes/)
set(SOURCE_FILES src/AVL_tree.cpp src/Hash_table2.cpp src/Queue.cpp src/Queue2.cpp src/Rational.cpp src/Sparce_Matrix.cpp src/Sparce_Matrix2.cpp src/Stack.cpp src/Stack2.cpp)

add_library(DyabLib ${SOURCE_FILES})