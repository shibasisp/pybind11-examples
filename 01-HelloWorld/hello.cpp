char const* greet()
{
   return "hello, world";
}

#include<pybind11/pybind11.h>
namespace py = pybind11;

PYBIND11_PLUGIN(hello)
{
py::module m("hello","Greeting module");
    m.def("greet", &greet);
return m.ptr();
}
