cmake_minimum_required(VERSION 3.11)
project(
    foo
)
set(
    SOURCE_LIB
    ../../src/foo.cpp
)
add_library(
    foo STATIC ${SOURCE_LIB}
)