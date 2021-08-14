A project design utilizing C++ libraries, python scripting, and python GUIs. Full example code in `code/CameraExample`

#python
#cpp

Components include
- A C++ library for interacting with a specific piece of hardware
- A [[pybind11]] project wrapping the C++ library so that it can be used from python
- python scripts utilizing the C++ library
- a [[jupyter]] notebook utilizing the C++ library, markdown, python libraries
- a python based GUI utilizing the C++ library

The C++ library utilizes the standard [[cmake]] project design, exporting a target library which provides an API 

