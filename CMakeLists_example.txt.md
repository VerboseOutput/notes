```cmake
cmake_minimum_required(VERSION 3.16)

project(ExampleProj   VERSION 0.1.0
                      DESCRIPTION "An example project"
                      LANGUAGES CXX)

option(BUILD_SHARED_LIBS "Build using shared libraries" ON)

# Build library
add_subdirectory(src)
add_subdirectory(include)

add_library(ExampleLib ${EXAMPLE_HEADERS} ${EXAMPLE_SOURCE})

target_include_directories(Camera PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/include)

set_target_properties(ExampleLib PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED OFF
    CXX_EXTENSIONS OFF

    VERSION ${PROJECT_VERSION}
)
```