cmake_minimum_required(VERSION 3.15)

project(Maths)

set(CMAKE_CXX_STANDARD 17)

#set(CMAKE_C_FLAGS "${CMAKE_CFLAGS} -fopenmp -static-libgcc -static-libstdc++")
#set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -D_DEBUG -static-libgcc -static-libstdc++")

if (WIN32)
    set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
endif ()

option(MATHS_BUILD_TESTS "Build Maths tests" ON)

add_subdirectory(src)

#if( MINGW )
#    message( STATUS "    Installing system-libraries: MinGW DLLs." )
#    get_filename_component( Mingw_Path ${CMAKE_CXX_COMPILER} PATH )
#    set( CMAKE_INSTALL_SYSTEM_RUNTIME_LIBS ${Mingw_Path}/mingwm10.dll ${Mingw_Path}/libgcc_s_dw2-1.dll ${Mingw_Path}/libstdc++-6.dll )
#endif( MINGW )
#
#if( CMAKE_INSTALL_SYSTEM_RUNTIME_LIBS )
#    install( PROGRAMS ${CMAKE_INSTALL_SYSTEM_RUNTIME_LIBS} DESTINATION bin COMPONENT System )
#endif( CMAKE_INSTALL_SYSTEM_RUNTIME_LIBS )

#include( InstallRequiredSystemLibraries )

#if (MATHS_BUILD_TESTS)
#    enable_testing()
#
#    add_subdirectory(tests)
#endif ()

add_executable(Maths main.cpp)

target_link_libraries(Maths PRIVATE Common)
target_link_libraries(Maths PRIVATE ChapterTwo)

add_custom_command(
        TARGET Maths POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory
        $<TARGET_FILE_DIR:Common>
        $<TARGET_FILE_DIR:Maths>
)

add_custom_command(
        TARGET Maths POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory
        $<TARGET_FILE_DIR:ChapterTwo>
        $<TARGET_FILE_DIR:Maths>
)