cmake_minimum_required(VERSION 3.16)

project(PyCamera    VERSION 0.1.0
                    DESCRIPTION "Python Wrapper for CameraApi"
                    LANGUAGES CXX)

option(BUILD_SHARED_LIBS "Build using shared libraries" ON)

find_package(pybind11 REQUIRED)

pybind11_add_module(PyCamera py_src/PyCamera.cpp)
target_link_libraries(PyCamera PRIVATE CameraApi)