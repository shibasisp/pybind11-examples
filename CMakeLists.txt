cmake_minimum_required(VERSION 2.8.12)
project(pybind11_example)

add_subdirectory(pybind11)
pybind11_add_module(hello 01-HelloWorld/hello.cpp)
pybind11_add_module(classes 02-ExposingClasses/classes.cpp)
pybind11_add_module(ctor 03-Constructors/ctor.cpp)
pybind11_add_module(member 04-ClassMembers/member.cpp)
pybind11_add_module(lambdamember 05-ClassMemberswithLamdaFunction/lambdamember.cpp)



