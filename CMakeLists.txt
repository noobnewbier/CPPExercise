cmake_minimum_required(VERSION 3.15)

project(Maths)

set(CMAKE_CXX_STANDARD 20)

option(MATHS_BUILD_TESTS "Build Maths tests" ON)

add_subdirectory(src)

#if (MATHS_BUILD_TESTS)
#    enable_testing()
#
#    add_subdirectory(tests)
#endif ()

add_executable(Maths main.cpp)

target_link_libraries(Maths PRIVATE Common)
target_link_libraries(Maths PRIVATE ChapterTwo)
