cmake_minimum_required(VERSION 3.20)
project(Calculator)

set(CMAKE_CXX_STANDARD 17)

include_directories(src)

enable_testing()

add_subdirectory(src)
add_subdirectory(tst)
add_subdirectory(lib/googletest)