# pybind11-examples
Examples of using pybind11

**How to compile?**

1. You can compile all the extension at one go by:
   - Clone this repository(`git clone --recursive https://github.com/shibasisp/pybind11-examples.git`).
   - Run `pip install ./pybind11-examples`
2. Or you can compile individual extension by:
   * Open the project directory
   * Go to the directory of the example you want to build.
   * run `./make.sh`

**Requirements**
1. [pybind11](https://github.com/pybind/pybind11) 
2. [python](www.python.org)(tested with 2.7 but should work with 3.x as well)
3. setuptools
4. A C++11 compliant compiler for your platform(g++ or vs2015_runtime).
5. CMake (unix >= 2.8.12, windows>=3.1)
