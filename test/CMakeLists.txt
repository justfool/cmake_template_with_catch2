project(libtree-unittest VERSION 0.1 LANGUAGES CXX)

set(SOURCES main.cpp testcast1.cpp)

add_executable(tests ${SOURCES})
target_include_directories(tests PRIVATE ${CMAKE_CURRENT_LIST_DIR})
target_link_libraries(tests PRIVATE library)


