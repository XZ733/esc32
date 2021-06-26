cmake_minimum_required(VERSION 3.19)
project(esc32 C)

set(CMAKE_C_STANDARD 11)

include_directories(lib)
include_directories(pro)
include_directories(pro/RTE/_Debug)
include_directories(src)

file(GLOB_RECURSE SOURCES
        "lib/*.*"
        "src/*.*")

add_executable(esc32 ${SOURCES})
