#include <CameraApi.h>

#include <pybind11/pybind11.h>

namespace py = pybind11;

PYBIND11_MODULE(PyCamera, m) {
    py::class_<CameraApi>(m, "CameraApi")
        .def(py::init<>())
        .def("connect", &CameraApi::connect)
        .def("disconnect", &CameraApi::connect)
        .def("isConnected", &CameraApi::isConnected)
        .def("setExposure", &CameraApi::setExposure)
        .def("getExposure", &CameraApi::getExposure)
        .def("getName", &CameraApi::getName);
}