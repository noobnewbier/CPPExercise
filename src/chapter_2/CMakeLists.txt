set(CHAPTER_TWO_SOURCES
        ChapterTwo.cpp
        )


add_library(ChapterTwo SHARED ${CHAPTER_TWO_SOURCES})
add_dependencies(ChapterTwo Common)
target_link_libraries(ChapterTwo PUBLIC Common)

target_include_directories(ChapterTwo
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include/chapter_2>
        $<INSTALL_INTERFACE:include/chapter_2>
        )

