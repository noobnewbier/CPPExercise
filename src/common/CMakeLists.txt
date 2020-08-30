set(COMMON_SOURCES
        Vector3.cpp
        )

add_library(Common SHARED ${COMMON_SOURCES})

target_include_directories(Common
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/common>
        $<INSTALL_INTERFACE:include/common>
        )