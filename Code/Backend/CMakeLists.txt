cmake_minimum_required(VERSION 3.15)
project(Core VERSION 1.0)

add_library(${PROJECT_NAME} SHARED core.h core.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

if(NOT BUILD_TYPE)
    set(BUILD_TYPE Debug)
endif()

set(LIBS_INSTALL_PREFIX ${CMAKE_BINARY_DIR}/Application/${BUILD_TYPE}/Libs)
message("Core Install Prefix: ${LIBS_INSTALL_PREFIX}")

set(INSTALL_PATH ${LIBS_INSTALL_PREFIX})

install(TARGETS ${PROJECT_NAME}
        RUNTIME DESTINATION ${INSTALL_PATH}
        LIBRARY DESTINATION ${INSTALL_PATH}
        ARCHIVE DESTINATION ${INSTALL_PATH})