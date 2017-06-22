
#include<pybind11/pybind11.h>
#include <string>

struct World
{
    void set(std::string msg) { mMsg = msg; }
    std::string greet() { return mMsg; }
    std::string mMsg;
};

namespace py = pybind11;

PYBIND11_PLUGIN(classes)
{
    py::module m("classes","pybind11 class example");

    py::class_<World>(m,"World")
	.def(py::init<>())
        .def("greet", &World::greet)
        .def("set", &World::set);
return m.ptr();
};
