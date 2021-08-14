cmake_minimum_required(VERSION 3.16)

project(CameraApi   VERSION 0.1.0
                    DESCRIPTION "A basic camera library"
                    LANGUAGES CXX)

option(BUILD_SHARED_LIBS "Build using shared libraries" ON)

# Build camera library
add_subdirectory(src)
add_subdirectory(include)

add_library(Camera ${CAMERA_HEADERS} ${CAMERA_SOURCE})

target_include_directories(Camera PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/include)

set_target_properties(Camera PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED OFF
    CXX_EXTENSIONS OFF

    VERSION ${PROJECT_VERSION}
)