#include <string>
struct Pet {
    Pet(const std::string &name) : name(name) { }
    void setName(const std::string &name_) { name = name_; }
    const std::string &getName() const { return name; }

    std::string name;
};

#include <pybind11/pybind11.h>

namespace py = pybind11;

PYBIND11_PLUGIN(ctor) {
    py::module m("ctor", "pybind11 constructor example");

    py::class_<Pet>(m, "Pet")
        .def(py::init<const std::string &>())
        .def("setName", &Pet::setName)
        .def("getName", &Pet::getName);

    return m.ptr();
}


