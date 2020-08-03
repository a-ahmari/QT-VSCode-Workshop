cmake_minimum_required(VERSION 3.15)

project(Code LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(WIN32 AND CMAKE_SOURCE_DIR STREQUAL CMAKE_CURRENT_SOURCE_DIR)
    set(CMAKE_INSTALL_PREFIX "${CMAKE_BINARY_DIR}/Libs")
endif()

add_subdirectory(Application)
add_subdirectory(Backend)