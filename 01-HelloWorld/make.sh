c++ -O3 -shared -std=c++11 -I /usr/local/include `python-config --cflags --ldflags` hello.cpp -o hello.so -fPIC
