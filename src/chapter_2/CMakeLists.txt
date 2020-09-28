set(CHAPTER_TWO_SOURCES
        ChapterTwo.cpp
        )


add_library(ChapterTwo SHARED ${CHAPTER_TWO_SOURCES})
add_dependencies(ChapterTwo Common)
target_link_libraries(ChapterTwo PUBLIC Common)

add_custom_command(
        TARGET ChapterTwo POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_directory
        $<TARGET_FILE_DIR:Common>
        $<TARGET_FILE_DIR:ChapterTwo>
)