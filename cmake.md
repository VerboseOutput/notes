My prefered build tool for C++ projects.

#cpp 

## build and install commands
specify source and build directory
actually build the project
```
cmake -S . -B build 
cmake --build build
```

install
```
cmake --install build
```

specify release type
```
--config Release|Debug
```


## top level CMakeLists.txt design

1. always start with the minimum cmake version
```cmake
cmake_minimum_required(VERSION 3.16)
```

there are also ways to specify versions, minimums, etc #need-info 

2. specify the project
```cmake
project(ProjectName    VERSION 0.1.0
                       DESCRIPTION "An example project description"
                       LANGUAGES CXX)
```

3. get dependencies
```cmake
find_package(pybind11 REQUIRED)
```

4. collect source and header files for the target
```cmake
add_subdirectory(src)
add_subdirectory(include)
```
#need-info should i have only one target per cmake file?

source and header cmake files
```cmake
set(LIB_SOURCE
    ${LIB_SOURCE}
    ${CMAKE_CURRENT_SOURCE_DIR}/example.cpp
    PARENT_SCOPE
)

set(LIB_HEADERS
    ${LIB_HEADERS}
    ${CMAKE_CURRENT_SOURCE_DIR}/example.h
    PARENT_SCOPE
)
```

5. create target
```cmake
# lib
add_library(LibTarget ${LIB_HEADERS} ${LIB_SOURCE})

# exe
add_executable(ExeTarget ${EXAMPLE_SOURCE})
```

6. set include directories to include when compiling against this target
```cmake
target_include_directories(LibTarget PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/include)
```

7. set properties for the target
```cmake
set_target_properties(Camera PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED OFF
    CXX_EXTENSIONS OFF

    VERSION ${PROJECT_VERSION}
)
```

[example cmake file](CMakeLists_example.txt)

## adding cmake build options
```cmake
option(BUILD_SHARED_LIBS "Build using shared libraries" ON)
```

#need-info need to learn more about this

## External reference
[An Introduction to Modern CMake · Modern CMake (cliutils.gitlab.io)](https://cliutils.gitlab.io/modern-cmake/)

