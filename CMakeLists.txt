cmake_minimum_required(VERSION 3.16)
project(TileGame)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE TEST_FILES "${PROJECT_SOURCE_DIR}/src/test_*.cpp")

file(GLOB_RECURSE SRC_FILES "${PROJECT_SOURCE_DIR}/src/*.cpp")

list(REMOVE_ITEM ${SRC_FILES} ${TEST_FILES})

# Setup Conan.
if(EXISTS ${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    conan_basic_setup()
else()
    message(WARNING "The file conanbuildinfo.cmake doesn't exist, you have to run conan install first")
endif()

add_executable(TileGame ${SRC_FILES})
target_link_libraries(TileGame ${CONAN_LIBS})