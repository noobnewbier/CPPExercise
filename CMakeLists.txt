cmake_minimum_required(VERSION 3.15)
project(Maths)

set(CMAKE_CXX_STANDARD 20)

add_executable(Maths main.cpp src/chapter_2/ChapterTwo.cpp src/chapter_2/ChapterTwo.h src/common/Vector3.cpp src/common/Vector3.h)