
project(template VERSION 0.1 LANGUAGES C)
set(CMAKE_C_STANDARD 99)

set(SOURCES library.c)

add_library(library ${SOURCES})
target_include_directories(library
            PUBLIC
                $<INSTALL_INTERFACE:include>
                $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
            PRIVATE
                ${CMAKE_CURRENT_SOURCE_DIR}
        )
